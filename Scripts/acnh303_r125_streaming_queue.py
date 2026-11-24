#!/usr/bin/env python3
"""R125 offline native queue and receive-size checks; no transport execution."""
import argparse,hashlib,json,struct
from pathlib import Path
from unicorn.arm64_const import UC_ARM64_REG_X0,UC_ARM64_REG_X2,UC_ARM64_REG_X3
import acnh303_r100_nso_decode as dec
from acnh303_r120_native_save import vm,invoke,load_archive,direct_scan,BUF,S,hx
from acnh303_r122_backend_abi import p64,q64,get_target,CLOUD
from acnh303_r124_interface_registry import window
BASE=Path("derived/3.0.3/npc_event_flags/r125_streaming_queue")
def w32(u,a,v):u.mem_write(a,struct.pack("<I",v))
def r32(u,a):return struct.unpack("<I",u.mem_read(a,4))[0]
def mapped_page(u,a):
    p=a&~0xfff
    if not any(lo<=p and p+0xfff<=hi for lo,hi,_ in u.mem_regions()):u.mem_map(p,0x1000)
def queue(mapped):
    u=vm(mapped,0x10000)
    registry,req,obj,holder,root,peer,fallback=[BUF+x for x in (0,0x400,0x800,0xc00,0x1000,0x3000,0x4000)]
    for a in (0x4bb21d0,0x4bb5018,0x4bb32e0,0x548e168):mapped_page(u,a)
    p64(u,0x4bb21d0,holder);p64(u,holder,root);p64(u,root+0xf88,peer)
    p64(u,0x4bb5018,fallback);p64(u,0x4bb32e0,fallback)
    u.mem_write(fallback,b"\xff")
    u.mem_write(0x548e168,bytes(range(8)))
    rows=[]
    for present in (0xff,0x55,0x00):
        for local in range(8):
            u.mem_write(peer,bytes(0x300))
            for i in range(8):
                u.mem_write(peer+0x28+i*0x20,bytes([i if present&(1<<i) else 0xff]))
            u.mem_write(peer+0x225,bytes([local]))
            local_id=local if present&(1<<local) else 255
            for mask in range(256):
                u.mem_write(registry,bytes(0x300))
                p64(u,registry+0xa8,obj)
                w32(u,registry+0x1a8,100)
                u.mem_write(req,struct.pack("<QQQ",BUF+0x5000,0xA2458,mask))
                u.reg_write(UC_ARM64_REG_X2,20)
                invoke(u,0x1c84918,registry,req,count=3000)
                selected=mask&present&~(1<<local_id)
                expected=int(bool(selected))
                assert u.reg_read(UC_ARM64_REG_X0)==expected,(present,local,mask)
                assert r32(u,registry+0xd4)==selected
                assert r32(u,registry+0xc0)==expected
                if expected:
                    assert r32(u,registry+0xc4)==20 and q64(u,registry+0xc8)==BUF+0x5000
                    assert r32(u,registry+0xd0)==0xA2458 and r32(u,registry+0x1a8)==0
                else:
                    assert q64(u,registry+0xc8)==0 and r32(u,registry+0x1a8)==100
                rows.append({"present_mask":present,"local_index":local,"request_mask":mask,"selected":selected,"accepted":bool(expected)})
    return rows
def receive(mapped,relocs):
    u=vm(mapped,0x10000)
    obj,manager,table,backend,buffer=[BUF+x for x in (0,0x1000,0x2000,0x3000,0x4000)]
    mapped_page(u,0x5574040)
    p64(u,0x5574040,manager)
    p64(u,manager+0x10,table)
    # Actual capacity dispatch: original +0x68 wrapper, selector, and backend getter.
    v=0x4a596b8
    p64(u,v+0x68,get_target(relocs,v,0x68))
    # Wrapper branches on a separate global state pointer. Initialize both dereferences.
    mapped_page(u,0x537d558)
    p64(u,0x537d558,BUF+0x6000)
    p64(u,BUF+0x6000,BUF+0x7000)
    p64(u,BUF+0x7010,BUF+0x8000)
    rows=[]
    for i,(cv,slot,flag,cap) in enumerate(CLOUD):
        u.mem_write(manager,bytes(0x1000));p64(u,manager+0x10,table)
        u.mem_write(table,bytes(0x1000));p64(u,table+slot,backend)
        u.mem_write(manager+flag,b"\x06")
        p64(u,backend,cv);p64(u,backend+0x10,buffer)
        p64(u,cv+0x18,get_target(relocs,cv,0x18))
        for exact in (0,1):
            for kind in (19,20):
                for size in (0,cap-1,cap,cap+1):
                    u.mem_write(obj,bytes(0x100));p64(u,obj,v)
                    w32(u,obj+8,20);w32(u,obj+12,0xdeadbeef)
                    u.mem_write(obj+0x10,bytes([exact]))
                    u.reg_write(UC_ARM64_REG_X2,0)
                    u.reg_write(UC_ARM64_REG_X3,kind)
                    invoke(u,0x1d807cc,obj,size,count=2000)
                    ok=kind==20 and (size==cap if exact else size<=cap)
                    assert u.reg_read(UC_ARM64_REG_X0)==int(ok),(i,exact,kind,size)
                    assert r32(u,obj+12)==(size if ok else 0xdeadbeef)
                    rows.append({"backend":i,"capacity":cap,"exact":exact,"kind":kind,"size":size,"accepted":ok})
    return rows
def main():
    p=argparse.ArgumentParser()
    p.add_argument("--root",type=Path,default=Path("."))
    p.add_argument("--r124",type=Path,required=True)
    p.add_argument("--out",type=Path,required=True)
    a=p.parse_args()
    prior,=load_archive(a.r124,"90500c630a80a4cdd75f18b77358a3b9196298049bf7289ad14d3344817b5afa",["report.json"])
    assert prior["descriptor_callback_cases"]==30
    e=json.loads((a.root/BASE/"evidence.json").read_text())
    for r in e["sources"]:
        b=(a.root/r["path"]).read_bytes()
        assert hashlib.sha1(("blob %d"%len(b)).encode()+b"\0"+b).hexdigest()==r["sha"]
    elf,nso,mapped,segments,raw,tags,relocs=dec.decode(a.root)
    a.out.mkdir(parents=True,exist_ok=True)
    def write(n,v):(a.out/n).write_text(json.dumps(v,indent=2)+"\n")
    wins={hx(lo):window(raw,lo,hi) for lo,hi in [(0x1c833f0,0x1c83c40),(0x1c83c40,0x1c845c4)]}
    write("broadcast_callback_windows.json",wins)
    calls={k:[r for r in v if r["op"] in ("bl","blr","br","ret")] for k,v in wins.items()}
    write("broadcast_callback_calls.json",calls)
    refs=direct_scan(mapped,{0x1c833f0,0x1c83c40,0x1c84c50,0x1c84918,0x1d807cc,0x1d80838,0x1d8086c})
    write("direct_refs.json",refs)
    qr=queue(mapped);write("queue_native_matrix.json",qr)
    rr=receive(mapped,relocs);write("receive_size_matrix.json",rr)
    report={"queue_cases":len(qr),"queue_accepted":sum(r["accepted"] for r in qr),"queue_rejected":sum(not r["accepted"] for r in qr),"receive_cases":len(rr),"receive_accepted":sum(r["accepted"] for r in rr),"callback_window_instructions":{k:len(v) for k,v in wins.items()},"callback_call_instructions":{k:len(v) for k,v in calls.items()},"callback_full_cfg_verified":False,"network_executed":False,"real_save_samples":0,"cloud_disk_mapping_verified":False}
    write("report.json",report);print(json.dumps(report,indent=2))
if __name__=="__main__":main()
