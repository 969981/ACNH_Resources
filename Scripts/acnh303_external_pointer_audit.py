#!/usr/bin/env python3
"""Read-only source-authenticated ACNH external offset audit."""
import argparse, hashlib, json, struct
from pathlib import Path
from capstone import Cs, CS_ARCH_ARM64, CS_MODE_ARM
from capstone.arm64 import ARM64_OP_REG, ARM64_OP_IMM, ARM64_OP_MEM

def hx(x): return hex(x) if x is not None else None
def sx(x,b): return x-(1<<b) if x&(1<<(b-1)) else x
def main(root,out):
    reg=json.loads((root/'derived/3.0.3/external_pointers/candidates.json').read_text())
    p=root/'UnPack/0/main.elf'
    b=p.read_bytes()
    if hashlib.sha256(b).hexdigest()!=reg['target_elf_sha256']: raise ValueError('ELF digest mismatch')
    if b[:6]!=b'\x7fELF\x02\x01' or struct.unpack_from('<HH',b,16)!=(3,183): raise ValueError('not AArch64 ET_DYN')
    phoff=struct.unpack_from('<Q',b,32)[0]
    ents,n=struct.unpack_from('<HH',b,54)
    seg=[]
    for i in range(n):
        t,f,o,v,pa,fs,ms,al=struct.unpack_from('<IIQQQQQQ',b,phoff+i*ents)
        if t==1:
            if o+fs>len(b) or fs>ms: raise ValueError('invalid segment')
            seg.append(dict(v=v,offset=o,filesz=fs,memsz=ms,flags=f))
    if not seg or min(s['v'] for s in seg)!=0: raise ValueError('unexpected image base')
    def loc(a,k):
        for s in seg:
            if s['v']<=a and a+k<=s['v']+s['memsz']:
                return s, b[s['offset']+a-s['v']:s['offset']+a-s['v']+k] if a+k<=s['v']+s['filesz'] else None
        return None,None
    cs=Cs(CS_ARCH_ARM64,CS_MODE_ARM);cs.detail=True
    def info(a,k):
        s,data=loc(a,k)
        return dict(rva=hx(a),ghidra_va=hx(a+reg['ghidra_slide']),segment=s,storage='file' if data is not None else 'bss_or_partial' if s else 'unmapped',raw_hex=data.hex() if data is not None else None,raw_le=hx(int.from_bytes(data,'little')) if data is not None else None)
    roots=[dict(x,**info(x['rva'],8)) for x in reg['pointer_chains']]
    sites=[]
    for x in reg['main_sites']:
        a=x['rva']; s,d=loc(a,4); q=dict(x,**info(a,4))
        exp=x['expected_original_u32']
        q['expected_word_match']=None if exp is None or d is None else int.from_bytes(d,'little')==int(exp,16)
        q['instructions']=[]
        if s and s['flags']&1:
            start=max(s['v'],a-32); end=min(s['v']+s['filesz'],a+36)
            if end>start:
                _,raw=loc(start,end-start)
                q['instructions']=[dict(va=hx(i.address),ghidra_va=hx(i.address+reg['ghidra_slide']),text=i.mnemonic+' '+i.op_str,bytes=i.bytes.hex()) for i in cs.disasm(raw,start)] if raw else []
        sites.append(q)
    targets={x['rva'] for x in reg['pointer_chains']+reg['main_sites']}
    pages={a&~4095 for a in targets}
    refs=set()
    def emit(i,a,kind):
        if a in targets: refs.add((i.address,a,kind,i.mnemonic+' '+i.op_str))
    def rr(i,r):
        n=i.reg_name(r)
        return 'x'+n[1:] if n.startswith('w') and n[1:].isdigit() else n
    for s in seg:
        if not s['flags']&1: continue
        data=memoryview(b)[s['offset']:s['offset']+s['filesz']]
        for idx,(w,) in enumerate(struct.iter_unpack('<I',data[:len(data)//4*4])):
            a=s['v']+4*idx
            if w&0x9f000000 not in (0x90000000,0x10000000): continue
            imm=sx(((w>>5)&0x7ffff)<<2|((w>>29)&3),21)
            dest=((a&~4095)+(imm<<12)) if w&0x80000000 else a+imm
            if dest not in targets and dest not in pages: continue
            tracked={}
            for i in cs.disasm(bytes(data[4*idx:4*idx+96]),a):
                m=i.mnemonic;op=i.operands;new={}
                if m in ('b','bl','br','blr','ret','cbz','cbnz','tbz','tbnz') or m.startswith('b.'): break
                if m in ('adr','adrp') and len(op)==2 and op[1].type==ARM64_OP_IMM:
                    val=op[1].imm;new[rr(i,op[0].reg)]=val;emit(i,val,'address')
                elif m=='add' and len(op)==3 and op[1].type==ARM64_OP_REG and op[2].type==ARM64_OP_IMM:
                    val=tracked.get(rr(i,op[1].reg))
                    if val is not None:
                        val+=op[2].imm<<op[2].shift.value;new[rr(i,op[0].reg)]=val;emit(i,val,'address')
                elif m=='mov' and len(op)==2 and op[1].type==ARM64_OP_REG:
                    val=tracked.get(rr(i,op[1].reg))
                    if val is not None:new[rr(i,op[0].reg)]=val
                elif m.startswith(('ldr','str','ldur','stur','ldp','stp')) and not i.writeback:
                    for o in op:
                        if o.type==ARM64_OP_MEM and not o.mem.index:
                            val=tracked.get(rr(i,o.mem.base))
                            if val is not None:emit(i,val+o.mem.disp,'read_candidate' if m.startswith('ld') else 'write_candidate')
                try:
                    _,written=i.regs_access()
                    for x in written:tracked.pop(rr(i,x),None)
                except Exception:break
                tracked.update(new)
    report=dict(elf_sha256=reg['target_elf_sha256'],segments=seg,roots=roots,main_sites=sites,
        references=[dict(site_rva=hx(a),site_ghidra=hx(a+reg['ghidra_slide']),target_rva=hx(t),kind=k,instruction=i) for a,t,k,i in sorted(refs)],
        heap_candidates=reg['heap_candidates'],runtime_verified=False,scope='bounded direct address formation; no pointer object or function identity proven')
    out.parent.mkdir(parents=True,exist_ok=True)
    out.write_text(json.dumps(report,indent=2)+'\n')
    print(json.dumps(dict(roots=len(roots),main_sites=len(sites),matched=sum(x['expected_word_match'] is True for x in sites),mismatched=sum(x['expected_word_match'] is False for x in sites),references=len(refs),runtime_verified=False)))
if __name__=='__main__':
    p=argparse.ArgumentParser();p.add_argument('--root',type=Path,default=Path('.'));p.add_argument('--out',type=Path,required=True);a=p.parse_args();main(a.root,a.out)
