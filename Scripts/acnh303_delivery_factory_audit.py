#!/usr/bin/env python3
"""Read-only candidate audit of EventFlow registration, aliases and selection-field stores.

No live process access. Hash matches and instruction windows are not bindings.
"""
import argparse, bisect, hashlib, json, re, struct, zlib
from pathlib import Path
from capstone import Cs, CS_ARCH_ARM64, CS_MODE_ARM
from capstone.arm64 import ARM64_OP_IMM, ARM64_OP_REG, ARM64_OP_MEM
import acnh303_r100_nso_decode as dec
from acnh303_round11_elf_xref import parse_elf, get_bytes_va
from acnh303_r95_native_eventflags import murmur3

BASE=0x100000
ALIASES={0x04bb72c0:0x0493f880,0x04bb74a0:0x04941510,
         0x04bb8708:0x04954620,0x04bb8710:0x04954690,
         0x04bb87e0:0x049552c8,0x04bb8b00:0x04957e80}
TARGETS=(0x02675b70,0x026788f0,0x02674700,0x031956f8,0x0319536c,0x03195900,
         0x00c04ee0,0x00c31ae0,0x00d97e30,0x00d982b0,0x00da8f70,0x00dd7a70)
NAMES=("EventFlowActionSystemDeletePlayerItem","SystemDeletePlayerItem",
       "EventFlowActionUIItemSelectWindowHandling","UIItemSelectWindowHandling")
def sx(v,b):
    return v-(1<<b) if v&(1<<(b-1)) else v
def adr_page(w,pc):
    if w&0x9f000000!=0x90000000:return None
    return (pc&~4095)+(sx(((w>>5)&0x7ffff)<<2|((w>>29)&3),21)<<12)
def branch(w,pc):
    if w&0xfc000000 not in (0x14000000,0x94000000):return None
    return pc+sx(w&0x3ffffff,26)*4
def main(root,out):
    elf,nso,mapped,segments,raw,tags,rel=dec.decode(root)
    es=parse_elf(elf);elfbase=min(s["vaddr"] for s in es)&~4095
    start,code=mapped[0]; end=start+len(code)
    executable=[s for s in es if s["flags"]&1]
    for off in range(0,len(code),4096):
        b=code[off:off+4096]
        if get_bytes_va(elf,executable,start+off+elfbase,len(b))!=b:
            raise ValueError(f"unmatched text {start+off:#x}")
    def matched(a,n):
        try:b=raw(a,n)
        except ValueError:return None
        return b if get_bytes_va(elf,es,a+elfbase,n)==b else None
    aliases={k-BASE:v-BASE for k,v in ALIASES.items()}
    for k,v in aliases.items():
        rr=rel.get(k,{})
        if rr.get("type") not in ("RELR",1027) or rr.get("symbol")!=0 or rr.get("addend")!=v:
            raise ValueError(f"alias drift {k:#x}")
    targets=set(x-BASE for x in TARGETS)
    pages={x&~4095 for x in set(aliases)|set(aliases.values())}
    cs=Cs(CS_ARCH_ARM64,CS_MODE_ARM);cs.detail=True
    paths={int(p.stem,16)-BASE:p for p in (root/"derived/3.0.3/ghidra12.2/c").rglob("*.c")
           if re.fullmatch(r"[0-9a-fA-F]{8}",p.stem)}
    entries=sorted(paths)
    def owner(a):
        k=bisect.bisect_right(entries,a)-1
        return hex(entries[k]+BASE) if k>=0 else None
    def row(i):
        return {"va":hex(i.address+BASE),"rva":hex(i.address),"bytes":bytes(i.bytes).hex(),
                "instruction":i.mnemonic+" "+i.op_str}
    def reg(i,r):
        n=i.reg_name(r)
        return "x"+n[1:] if n.startswith("w") and n[1:].isdigit() else n
    refs={};direct=[];stores=[];slot_field_candidates=[]
    def emit(i,addr,kind):
        k=(i.address,addr,kind)
        refs[k]={**row(i),"operand_va":hex(addr+BASE),"kind":kind,"nearest_export":owner(i.address)}
    for off,(w,) in enumerate(struct.iter_unpack("<I",code)):
        pc=start+4*off
        t=branch(w,pc)
        if t in targets:
            direct.append(dict(site_va=hex(pc+BASE),target_va=hex(t+BASE),
                               bytes=struct.pack("<I",w).hex(),nearest_export=owner(pc)))
        # Exact unsigned scaled STR X at +D90, and STRB at +D78/D79.
        # This is not a full store search: paired, unscaled, register and derived bases omitted.
        if ((w&0xffc00000)==0xf9000000 and ((w>>10)&0xfff)*8==0xd90) or (
            (w&0xffc00000)==0x39000000 and ((w>>10)&0xfff) in (0xd78,0xd79)):
            i=next(cs.disasm(code[4*off:4*off+4],pc),None)
            if i:
                stores.append({**row(i),"nearest_export":owner(pc),
                    "context":[row(q) for q in cs.disasm(code[max(0,4*off-48):4*off+20],max(start,pc-48))],
                    "object_identity_verified":False})
        # Within a single short basic-block window, track address expressions
        # relative to an unknown base register. No object identity is assumed.
        if (w&0xffc00000)==0x91400000 and ((w>>10)&0xfff)==0x1c:
            anchor=next(cs.disasm(code[4*off:4*off+4],pc),None)
            derived={}
            if anchor:
                for i in cs.disasm(code[4*off:4*off+128],pc):
                    m=i.mnemonic;o=i.operands;pending={}
                    if m.startswith("b.") or m in ("b","bl","blr","br","ret","cbz","cbnz","tbz","tbnz"):break
                    if m=="add" and len(o)==3 and o[1].type==ARM64_OP_REG and o[2].type==ARM64_OP_IMM:
                        n=reg(i,o[1].reg);v=derived.get(n)
                        if i.address==pc:v=(n,0)
                        if v is not None:pending[reg(i,o[0].reg)]=(v[0],v[1]+(o[2].imm<<o[2].shift.value))
                    elif m=="mov" and len(o)==2 and o[1].type==ARM64_OP_REG:
                        v=derived.get(reg(i,o[1].reg))
                        if v is not None:pending[reg(i,o[0].reg)]=v
                    elif m in ("str","strb","strh","stur","sturb","sturh","stp") and not i.writeback:
                        for o1 in o:
                            if o1.type!=ARM64_OP_MEM or o1.mem.index:continue
                            v=derived.get(reg(i,o1.mem.base))
                            if v is None:continue
                            displacement=v[1]+o1.mem.disp
                            # Include overlapping writes; actual source width requires inspection.
                            if 0x1c504<=displacement<=0x1c517:
                                slot_field_candidates.append({**row(i),"anchor_va":hex(pc+BASE),
                                  "base_register":v[0],"derived_offset":hex(displacement),
                                  "nearest_export":owner(i.address),"object_identity_verified":False})
                    try:
                        _,writes=i.regs_access()
                        for rr in writes:derived.pop(reg(i,rr),None)
                    except Exception:break
                    derived.update(pending)
        if adr_page(w,pc) not in pages:continue
        tracked={}
        for i in cs.disasm(code[4*off:4*off+96],pc):
            m=i.mnemonic;o=i.operands;pending={}
            if m.startswith("b.") or m in ("b","bl","blr","br","ret","cbz","cbnz","tbz","tbnz"):break
            if m in ("adr","adrp") and len(o)==2 and o[1].type==ARM64_OP_IMM:
                pending[reg(i,o[0].reg)]=o[1].imm
            elif m=="add" and len(o)==3 and o[1].type==ARM64_OP_REG and o[2].type==ARM64_OP_IMM:
                v=tracked.get(reg(i,o[1].reg))
                if v is not None:
                    v+=o[2].imm<<o[2].shift.value;pending[reg(i,o[0].reg)]=v
                    if v in aliases or v in aliases.values():emit(i,v,"address")
                    if v-0x10 in aliases.values():emit(i,v,"address_point_candidate")
            elif m=="ldr" and len(o)==2 and o[1].type==ARM64_OP_MEM and not o[1].mem.index and not i.writeback:
                v=tracked.get(reg(i,o[1].mem.base))
                if v is not None:
                    a=v+o[1].mem.disp
                    if a in aliases:
                        emit(i,a,"load_alias")
                        if i.reg_name(o[0].reg).startswith("x"):pending[reg(i,o[0].reg)]=aliases[a]
            elif m=="str" and len(o)==2 and o[1].type==ARM64_OP_MEM and o[0].type==ARM64_OP_REG:
                v=tracked.get(reg(i,o[0].reg))
                if v is not None and v-0x10 in aliases.values():
                    emit(i,v,"store_address_point_candidate")
            elif m=="mov" and len(o)==2 and o[1].type==ARM64_OP_REG:
                v=tracked.get(reg(i,o[1].reg))
                if v is not None:pending[reg(i,o[0].reg)]=v
            try:
                _,writes=i.regs_access()
                for rr in writes:tracked.pop(reg(i,rr),None)
            except Exception:break
            tracked.update(pending)
    hashes=[]
    for name in NAMES:
        for algo,value in (("murmur3_seed0",murmur3(name)),("crc32",zlib.crc32(name.encode())&0xffffffff)):
            needle=struct.pack("<I",value&0xffffffff)
            for va,data in mapped[1:]:
                pos=-1
                while True:
                    pos=data.find(needle,pos+1)
                    if pos<0:break
                    a=va+pos
                    if a%4 or matched(a,4)!=needle:continue
                    near=[]
                    for s in range((a&~7)-16,(a&~7)+40,8):
                        rr=rel.get(s,{})
                        t=rr.get("addend")
                        if rr.get("type") in ("RELR",1027) and rr.get("symbol")==0 and isinstance(t,int) and start<=t<end:
                            near.append({"slot_va":hex(s+BASE),"target_va":hex(t+BASE)})
                    hashes.append({"name":name,"algorithm_candidate":algo,"hash":f"{value&0xffffffff:08x}",
                                   "word_va":hex(a+BASE),"neighbor_code_relocations":near,"binding_verified":False})
    factory_records=[]
    for gh in (0x497b8f0,0x497bb20,0x497d480,0x497da20,0x497ec30,0x497f400,0x497d220):
        a=gh-BASE;b=matched(a,16);rr=rel.get(a+8,{})
        if b is not None:
            factory_records.append({"record_va":hex(gh),"raw_16":b.hex(),
               "hash_word":f"{int.from_bytes(b[:4],'little'):08x}",
               "constructor_relocation_target_va":hex(rr["addend"]+BASE) if isinstance(rr.get("addend"),int) else None})
    parameter_literals=[]
    for a in (0x3f61e16,0x3f5c256,0x3f7ebb1,0x3fb0302,0x3f7c0de):
        b=matched(a,96)
        if b is not None:
            s=b.split(bytes([0]),1)[0]
            parameter_literals.append({"va":hex(a+BASE),"bytes":s.hex(),"text":s.decode("utf-8",errors="replace")})
    # Reconcile names from actual exported EventFlow graph events and actor declarations.
    action_names={};bad=[];graph_count=0
    def add_name(n,p):
        if isinstance(n,str) and n.startswith("EventFlowAction"):
            action_names.setdefault(n,set()).add(p)
    for p in sorted((root/"UnPack/1/EventFlow").rglob("*.json")):
        relpath=p.relative_to(root).as_posix()
        try:j=json.loads(p.read_text(encoding="utf-8"))
        except (ValueError,UnicodeError) as e:
            bad.append({"path":relpath,"error":str(e)});continue
        g=j.get("graph") if isinstance(j,dict) else None
        if not isinstance(g,dict):continue
        graph_count+=1
        for e in g.get("events",[]):
            if isinstance(e,dict):add_name(e.get("action"),relpath)
        for a in g.get("actors",[]):
            if isinstance(a,dict):
                for n in a.get("actions",[]):add_name(n,relpath)
    action_name_matches=[]
    for rec in factory_records:
        candidates=[{"name":n,"source_count":len(ps),"sources":sorted(ps)[:12]}
                    for n,ps in sorted(action_names.items()) if murmur3(n)==int(rec["hash_word"],16)]
        action_name_matches.append({"record_va":rec["record_va"],"hash":rec["hash_word"],
                                    "candidates":candidates,"runtime_verified":False})
    callback_records=[]
    for gh in range(0x04b06740,0x04b06af0,0x10):
        a=gh-BASE;b=matched(a,16);rr=rel.get(a,{})
        if b is not None:
            callback_records.append({"record_va":hex(gh),"raw_16":b.hex(),
                "callback_va":hex(rr["addend"]+BASE) if rr.get("type") in ("RELR",1027) and isinstance(rr.get("addend"),int) else None,
                "companion_u64":hex(int.from_bytes(b[8:],"little")),
                "companion_relocated":a+8 in rel})
    report={"elf_sha256":hashlib.sha256(elf).hexdigest(),"nso_sha256":hashlib.sha256(nso).hexdigest(),
            "build_id":nso[0x40:0x60].hex(),"text_words":len(code)//4,
            "alias_references":list(refs.values()),"direct_branches":direct,
            "field_store_candidates":stores,"hash_candidates":hashes,
            "factory_records":factory_records,"parameter_literals":parameter_literals,"slot_field_candidates":slot_field_candidates,
            "factory_binding_verified":False,"runtime_verified":False,
            "action_corpus":{"graphs":graph_count,"distinct_names":len(action_names),"parse_errors":bad},
            "action_name_matches":action_name_matches,"callback_records":callback_records}
    out.mkdir(parents=True,exist_ok=True)
    (out/"factory_audit.json").write_text(json.dumps(report,indent=2,ensure_ascii=False)+"\n",encoding="utf-8")
    lines=["# Factory and selection-field candidate audit","",
           "All code windows use matched ELF/NSO text. Offset-only stores are not object-identity proof.","",
           "|site VA|operand VA|kind|instruction|","|---|---|---|---|"]
    lines += [f'|{q["va"]}|{q["operand_va"]}|{q["kind"]}|{q["instruction"]}|' for q in refs.values()]
    lines+=["","## Hash candidates","",json.dumps(hashes,indent=2)]
    (out/"README.md").write_text("\n".join(lines)+"\n",encoding="utf-8")
    print(json.dumps({k:len(report[k]) for k in ("alias_references","direct_branches","field_store_candidates","hash_candidates")}))
if __name__=="__main__":
    p=argparse.ArgumentParser();p.add_argument("--root",type=Path,default=Path("."));p.add_argument("--out",type=Path,required=True)
    a=p.parse_args();main(a.root.resolve(),a.out.resolve())
