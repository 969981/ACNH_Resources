#!/usr/bin/env python3
"""R123: original relocation neighborhood, PC-relative candidates, native iterator tests."""
import argparse,hashlib,json,struct
from pathlib import Path
from capstone import Cs,CS_ARCH_ARM64,CS_MODE_ARM
from unicorn.arm64_const import UC_ARM64_REG_X2
import acnh303_r100_nso_decode as dec
from acnh303_r120_native_save import vm,invoke,load_archive,direct_scan,BUF,S,hx
from acnh303_r122_backend_abi import p64,get_target
BASE=Path("derived/3.0.3/npc_event_flags/r123_cloud_interface")
TABLE=0x4a59700
GLOBAL=0x5574040
def neighborhoods(raw,relocs,text_end):
    cs=Cs(CS_ARCH_ARM64,CS_MODE_ARM)
    rows=[]
    for a in range(TABLE-0x100,TABLE+0x108,8):
        r=relocs.get(a-S)
        row={"slot":hx(a),"raw":raw(a-S,8).hex(),"relocation":r}
        if r and r.get("type")=="RELR":
            t=r["addend"]+S
            row["target"]=hx(t)
            if S<=t<text_end:
                row["target_window"]=[{"va":hx(i.address),"bytes":i.bytes.hex(),"op":i.mnemonic,"args":i.op_str} for i in cs.disasm(raw(t-S,32),t)]
        rows.append(row)
    refs=[]
    for slot,r in relocs.items():
        if r.get("type")=="RELR" and TABLE-0x100<=r.get("addend",-1)+S<=TABLE+0x100:
            refs.append({"slot":hx(slot+S),"target":hx(r["addend"]+S)})
    return rows,refs
def page_candidates(mapped,raw,addresses):
    # ADRP followed within 6 instructions by ADD immediate or 64-bit LDR;
    # deliberately candidate only: register liveness and object ownership not asserted.
    base,code=mapped[0]
    cs=Cs(CS_ARCH_ARM64,CS_MODE_ARM)
    pages={a&~0xfff for a in addresses}
    rows=[]
    for i,(w,) in enumerate(struct.iter_unpack("<I",code[:len(code)//4*4])):
        if w&0x9f000000!=0x90000000:continue
        pc=base+4*i+S
        imm=((w>>5)&0x7ffff)<<2|((w>>29)&3)
        if imm&0x100000:imm-=0x200000
        page=(pc&~0xfff)+(imm<<12)
        if page not in pages:continue
        reg=w&31
        for j in range(1,7):
            if (i+j+1)*4>len(code):break
            v=struct.unpack_from("<I",code,4*(i+j))[0]
            if (v>>5)&31!=reg:continue
            if v&0xff000000==0x91000000:
                off=((v>>10)&0xfff)<<(12 if v&(1<<22) else 0)
                kind="ADD"
            elif v&0xffc00000==0xf9400000:
                off=((v>>10)&0xfff)*8;kind="LDR"
            else:continue
            target=page+off
            if target not in addresses:continue
            lo=pc
            rows.append({"adrp":hx(pc),"use":hx(pc+4*j),"target":hx(target),"kind":kind,"instructions":[{"va":hx(k.address),"bytes":k.bytes.hex(),"op":k.mnemonic,"args":k.op_str} for k in cs.disasm(raw(lo-S,4*(j+1)),lo)],"grade":"candidate; no register-liveness proof"})
    return rows
def iterator(mapped,relocs):
    u=vm(mapped,0x400000)
    page=GLOBAL&~0xfff
    if not any(a<=page and page+0xfff<=b for a,b,_ in u.mem_regions()):u.mem_map(page,0x1000)
    manager,table,ordinary,replacement,out=BUF,BUF+0x1000,BUF+0x2000,BUF+0x3000,BUF+0x4000
    data=BUF+0x10000
    p64(u,GLOBAL,manager)
    p64(u,manager+0x10,table)
    p64(u,table,ordinary)
    p64(u,table+0x130,replacement)
    for obj,v in [(ordinary,0x4a89728),(replacement,0x4a8a730)]:
        p64(u,obj,v);p64(u,obj+0x10,data)
        p64(u,v+0x18,get_target(relocs,v,0x18))
    rows=[]
    for mode in (0,1):
        u.mem_write(manager+0x453,bytes([mode]))
        for kind in (0,1):
            for mask in range(256):
                u.mem_write(data+0x1e3300,bytes(0x500))
                off=0 if mode and kind==0 else 0x110
                for i in range(8):
                    if mask&(1<<i):p64(u,data+off+0x1e33b0+i*0x48,1)
                u.reg_write(UC_ARM64_REG_X2,1)
                invoke(u,0x2705554,out,kind,count=1000)
                actual=struct.unpack("<II",u.mem_read(out,8))
                expected=(kind,next((i for i in range(8) if mask&(1<<i)),8))
                assert actual==expected,(mode,kind,mask,actual,expected)
                rows.append({"mode":mode,"kind":kind,"identity_mask":mask,"first_index":actual[1]})
    for name,global_present,flag in [("disabled",True,0),("null_global",False,1)]:
        p64(u,GLOBAL,manager if global_present else 0)
        u.reg_write(UC_ARM64_REG_X2,flag)
        invoke(u,0x2705554,out,1,count=1000)
        assert struct.unpack("<II",u.mem_read(out,8))==(1,8)
        rows.append({"case":name,"first_index":8})
    return rows
def main():
    p=argparse.ArgumentParser()
    p.add_argument("--root",type=Path,default=Path("."))
    p.add_argument("--r122",type=Path,required=True)
    p.add_argument("--out",type=Path,required=True)
    a=p.parse_args()
    prior,prevrefs=load_archive(a.r122,"34d439aee470b4b729309fb5ef5a3f89d493bd7cb30309ce523b918d0d3db0cc",["report.json","cloud_wrapper_relocations.json"])
    assert prior["cloud_selector_cases"]==1002
    e=json.loads((a.root/BASE/"evidence.json").read_text())
    for r in e["sources"]:
        b=(a.root/r["path"]).read_bytes()
        assert hashlib.sha1(("blob %d"%len(b)).encode()+b"\0"+b).hexdigest()==r["sha"]
    elf,nso,mapped,segments,raw,tags,relocs=dec.decode(a.root)
    for t,slots in prevrefs.items():
        for slot in slots:assert relocs[int(slot,16)-S]["addend"]+S==int(t,16)
    a.out.mkdir(parents=True,exist_ok=True)
    def write(n,v):(a.out/n).write_text(json.dumps(v,indent=2)+"\n")
    near,rel=neighborhoods(raw,relocs,mapped[0][0]+len(mapped[0][1])+S)
    write("interface_neighborhood.json",near)
    write("interface_incoming_relocs.json",rel)
    targets=set(range(TABLE-0x100,TABLE+0x108,8))|{int(r["slot"],16) for r in rel}
    refs=page_candidates(mapped,raw,targets)
    write("interface_pc_relative_candidates.json",refs)
    it=iterator(mapped,relocs)
    write("native_identity_iterator.json",it)
    report={"neighborhood_slots":len(near),"neighborhood_relocated_slots":sum(r["relocation"] is not None for r in near),"incoming_relocation_refs":len(rel),"pc_relative_candidates":len(refs),"identity_iterator_cases":len(it),"cloud_interface_owner_verified":False,"external_personal_sync_verified":False,"cloud_disk_mapping_verified":False,"runtime_verified":False,"real_save_samples":0}
    write("report.json",report)
    print(json.dumps(report,indent=2))
if __name__=="__main__":main()
