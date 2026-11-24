#!/usr/bin/env python3
"""R133: local Cloud registrations, nested variant dispatch and worker relocation audit."""
import argparse,hashlib,json,struct,re
from pathlib import Path
from unicorn import UC_HOOK_CODE
from unicorn.arm64_const import UC_ARM64_REG_X0,UC_ARM64_REG_X1,UC_ARM64_REG_X30,UC_ARM64_REG_PC
import acnh303_r100_nso_decode as dec
from acnh303_r120_native_save import load_archive,direct_scan,S,hx,vm,invoke,BUF,STOP
from acnh303_r124_interface_registry import window
from acnh303_r122_backend_abi import p64,q64,get_target
BASE=Path("derived/3.0.3/npc_event_flags/r133_cloud_worker")
def ensure(u,a):
    p=a&~0xfff
    if not any(lo<=p and p+0xfff<=hi for lo,hi,_ in u.mem_regions()):u.mem_map(p,0x1000)
def register_tests(mapped,relocs):
    u=vm(mapped,0x5000);g=0x5574040;ensure(u,g)
    rows=[]
    for sel in range(4):
        entry=get_target(relocs,0x4a918a8,sel*8)
        for present in [False,True]:
            for src in [0,BUF+0x2000,0x1234567890]:
                for fill in [0,0xa5,255]:
                    p64(u,g,BUF if present else 0)
                    data=bytearray([fill])*0x600
                    u.mem_write(BUF,bytes(data));p64(u,BUF+0x1000,src)
                    invoke(u,entry,0,BUF+0x1000,count=1000)
                    if present and sel:
                        struct.pack_into("<Q",data,0x518,src)
                        struct.pack_into("<I",data,0x520,sel)
                    assert bytes(u.mem_read(BUF,len(data)))==data,(sel,present,src,fill)
                    rows.append({"selector":sel,"manager_present":present,"source":src,"fill":fill,"full_buffer_equal":True,"changed":bool(present and sel)})
    return rows
def dispatch_tests(mapped,relocs):
    u=vm(mapped,0x5000);g=0x5351250;ensure(u,g)
    ctx=BUF;arg=BUF+0x1000;stub=STOP+0x100;rows=[];trace=[]
    # Use actual relocated table targets, with hooks only at the inner handler.
    targets=[get_target(relocs,0x4a43108,i*8) for i in range(2)]
    for i,t in enumerate(targets):p64(u,0x4a43108+i*8,t)
    def hook(uc,addr,size,user):
        x0=uc.reg_read(UC_ARM64_REG_X0);x1=uc.reg_read(UC_ARM64_REG_X1)
        trace.append((addr,q64(uc,q64(uc,q64(uc,x0))),x1))
        uc.reg_write(UC_ARM64_REG_PC,uc.reg_read(UC_ARM64_REG_X30))
    for t in set(targets):u.hook_add(UC_HOOK_CODE,hook,begin=t,end=t)
    for sel in range(4):
        entry=get_target(relocs,0x4a918c8,sel*8)
        for variant in range(2):
            for src in [0,BUF+0x2000,0x1234567890]:
                before=bytearray([0xa5])*0x2c0
                struct.pack_into("<I",before,0xb0,variant)
                u.mem_write(ctx,bytes(before));p64(u,g,ctx);p64(u,arg,src);trace.clear()
                invoke(u,entry,0,arg,count=1000)
                expected=[(targets[variant],src,ctx+0x58)] if sel and src else []
                assert trace==expected,(sel,variant,src,trace,expected)
                assert bytes(u.mem_read(ctx,len(before)))==before
                rows.append({"selector":sel,"variant":variant,"source":src,"modeled_callback":bool(trace),"target":hx(targets[variant]),"full_buffer_equal":True})
    return rows
def main():
    p=argparse.ArgumentParser();p.add_argument("--root",type=Path,default=Path("."));p.add_argument("--r132",type=Path,required=True);p.add_argument("--out",type=Path,required=True);a=p.parse_args()
    prior,=load_archive(a.r132,"61eb0cae201b26e0c01d4e7e25236dfbd6108df9086043a25cc6bd9f5f4937d6",["report.json"])
    assert prior["hash_slice_cases"]==34
    e=json.loads((a.root/BASE/"evidence.json").read_text())
    for r in e["sources"]:
        b=(a.root/r["path"]).read_bytes();assert hashlib.sha1(("blob %d"%len(b)).encode()+b"\0"+b).hexdigest()==r["sha"],r["path"]
    elf,nso,mapped,segments,raw,tags,relocs=dec.decode(a.root)
    a.out.mkdir(parents=True,exist_ok=True)
    def write(n,v):(a.out/n).write_text(json.dumps(v,indent=2)+"\n")
    wins={hx(lo):window(raw,lo,hi) for lo,hi in [(0x1c7a5c0,0x1c7b800),(0x1c7c808,0x1c7c980),(0x283ecfc,0x283ef28),(0x270b80c,0x270b860)]}
    write("native_windows.json",wins)
    refs=direct_scan(mapped,{0x1c79ed0,0x270b80c,0x270b828,0x270b844,0x1c7c808,0x1c7c980})
    write("direct_refs.json",refs)
    assert any(r["site"]=="01C7AA90" for r in refs["01C79ED0"])
    # Record all incoming relocations to the bounded worker neighborhood.
    incoming=[]
    for dest,r in relocs.items():
        if r["type"]=="RELR" and 0x1c7a5c0<=r["addend"]+S<0x1c7b800:
            incoming.append({"slot":hx(dest+S),"target":hx(r["addend"]+S),"entry_window":window(raw,r["addend"]+S,r["addend"]+S+0x20)})
    write("worker_incoming_relocs.json",incoming)
    got=relocs.get(0x4bc1018-S)
    write("worker_got.json",{"got":hx(0x4bc1018),"relocation":got,"raw":raw(0x4bc1018-S,8).hex()})
    tables=[]
    for i in range(3):
        r=relocs.get(0x4a43108+i*8-S)
        if r and r["type"]=="RELR":
            t=r["addend"]+S;tables.append({"index":i,"target":hx(t),"window":window(raw,t,t+0x100)})
    write("variant_callbacks.json",tables)
    # Operand-only candidates, not proven object ownership.
    fields=[]
    for lo,hi in [(0x26c0000,0x2740000),(0x2830000,0x2840000)]:
        for r in window(raw,lo,hi):
            if re.search(r"#0x(518|520)\]",r["args"]):
                pc=int(r["va"],16);fields.append({**r,"context":window(raw,pc-0x20,pc+0x24)})
    write("manager_field_candidates.json",fields)
    rr=register_tests(mapped,relocs);write("registration_tests.json",rr)
    dd=dispatch_tests(mapped,relocs);write("variant_dispatch_tests.json",dd)
    report={"source_anchors":len(e["sources"]),"native_window_instructions":sum(map(len,wins.values())),"worker_incoming_relocations":len(incoming),"manager_field_candidates":len(fields),"variant_table_slots":len(tables),"registration_cases":len(rr),"variant_dispatch_cases":len(dd),"modeled_variant_calls":sum(x["modeled_callback"] for x in dd),"total_cases":len(rr)+len(dd),"full_worker_executed":False,"cloud_disk_mapping_verified":False,"real_save_samples":0}
    write("report.json",report);print(json.dumps(report,indent=2))
if __name__=="__main__":main()
