#!/usr/bin/env python3
"""R132: Cloud descriptor callbacks and Type 3 queue guards, original ARM64."""
import argparse,hashlib,json,struct,random
from pathlib import Path
import acnh303_r100_nso_decode as dec
from acnh303_r120_native_save import load_archive,direct_scan,S,hx,vm,invoke,BUF,STACK
from acnh303_r124_interface_registry import window
from acnh303_r122_backend_abi import p64,q64,get_target
from unicorn.arm64_const import UC_ARM64_REG_X0,UC_ARM64_REG_X2,UC_ARM64_REG_X19,UC_ARM64_REG_X22,UC_ARM64_REG_X29,UC_ARM64_REG_SP,UC_ARM64_REG_PC
from acnh303_r119_save_dispatch import hash32
BASE=Path("derived/3.0.3/npc_event_flags/r132_cloud_job")
def descriptor_tests(mapped,relocs):
    u=vm(mapped,0x5000);rows=[]
    root=BUF;wrapper=BUF+0x100;desc=BUF+0x200;arg=BUF+0x300;dst=BUF+0x400
    for i,n in enumerate([0,0xa2458,0xc6788,0x14c618]):
        entry=get_target(relocs,0x4a918e8,i*8)
        for src in [0,BUF+0x1000,BUF+0x2000,0x1234567890]:
            for fill in [0,0xa5,255]:
                data=bytearray([fill])*0x500
                for a,v in [(root,wrapper),(wrapper,desc),(desc,dst),(arg,src)]:
                    struct.pack_into("<Q",data,a-BUF,v)
                u.mem_write(BUF,bytes(data))
                invoke(u,entry,root,arg,count=100)
                if i and src:
                    struct.pack_into("<Q",data,desc-BUF,src)
                    struct.pack_into("<Q",data,desc-BUF+8,n)
                assert bytes(u.mem_read(BUF,len(data)))==data,(i,src,fill)
                rows.append({"selector":i,"source":src,"fill":fill,"size":n,"changed":bool(i and src)})
    return rows
def copy_tests(mapped):
    u=vm(mapped,0x5000);rng=random.Random(132);rows=[]
    for flag in [0,1,2,255]:
        for i in range(8):
            src=bytearray(rng.randbytes(0x80));src[0x38]=flag
            dst=bytearray(rng.randbytes(0x80))
            expected=bytearray(dst);expected[:0x28]=src[:0x28];expected[0x28]=src[0x28]
            expected[0x30:0x38]=src[0x30:0x38] if flag else bytes(8)
            expected[0x38]=int(bool(flag))
            u.mem_write(BUF,bytes(dst));u.mem_write(BUF+0x1000,bytes(src))
            u.reg_write(UC_ARM64_REG_X2,BUF+0x1000)
            invoke(u,0x1c7a574,0,BUF,count=100)
            assert bytes(u.mem_read(BUF,0x80))==expected,(flag,i)
            assert bytes(u.mem_read(BUF+0x1000,0x80))==src
            rows.append({"flag":flag,"case":i,"full_buffer_equal":True})
    return rows
def guards(mapped):
    u=vm(mapped,0x5000);rows=[]
    for active in [0,1,255]:
        for done in [0,1,255]:
            for kind in [0,1,2,3,0xffffffff]:
                if not (kind==0 or active and not done):continue
                task=bytearray([0xa5])*0x200;task[0x48]=active;task[0x54]=done
                req=bytearray([0x5a])*0x50;struct.pack_into("<I",req,0x40,kind)
                u.mem_write(BUF+0x1000,bytes(task));u.mem_write(BUF+0x2000,bytes(req))
                u.reg_write(UC_ARM64_REG_X2,BUF+0x2000)
                invoke(u,0x1c7cf1c,BUF,BUF+0x1000,count=100)
                assert u.reg_read(UC_ARM64_REG_X0)==0
                assert bytes(u.mem_read(BUF+0x1000,len(task)))==task
                assert bytes(u.mem_read(BUF+0x2000,len(req)))==req
                rows.append({"active":active,"done":done,"kind":kind,"unchanged":True})
    return rows
def hash_tests(mapped):
    u=vm(mapped,0x180000);rows=[]
    rng=random.Random(132);fp=STACK+0x1f800;sp=fp-0x340
    def run(lo,hi):
        u.emu_start(lo,hi,count=100000000,timeout=120000000)
        assert u.reg_read(UC_ARM64_REG_PC)==hi
    for n in [0,1,2,3,4,5,7,8,31,32,33,255,256,257,0xa2458,0xc6788,0x14c618]:
        payload=rng.randbytes(n)
        src=BUF+0x1000
        u.mem_write(BUF,bytes(0x200))
        if n:u.mem_write(src,payload)
        u.mem_write(BUF+0x10,struct.pack("<QQQQ",src,n,src,n))
        u.reg_write(UC_ARM64_REG_X19,BUF);u.reg_write(UC_ARM64_REG_X22,BUF)
        u.reg_write(UC_ARM64_REG_X29,fp);u.reg_write(UC_ARM64_REG_SP,sp)
        run(0x1c79f5c,0x1c79f7c)
        run(0x1c79fc0,0x1c7a0c8)
        h1=struct.unpack("<I",u.mem_read(fp-0x40,4))[0]
        expect=hash32(payload,0x36170e33)
        assert h1==expect,(n,h1,expect)
        run(0x1c7a274,0x1c7a3a8)
        h2=struct.unpack("<I",u.mem_read(sp+0x22c,4))[0]
        assert h2==expect,(n,h2,expect)
        assert bytes(u.mem_read(src,n))==payload if n else True
        rows.append({"length":n,"seed":"36170E33","first":h1,"second":h2,"reference":expect})
    return rows

def main():
    p=argparse.ArgumentParser();p.add_argument("--root",type=Path,default=Path("."));p.add_argument("--r131",type=Path,required=True);p.add_argument("--out",type=Path,required=True);a=p.parse_args()
    prior,=load_archive(a.r131,"fbedb62dccd7fcd9423cd4f14ab1ba6a91c9dd8b9a1e38481ad022955479b17c",["report.json"])
    assert prior["state_update_cases"]==169
    e=json.loads((a.root/BASE/"evidence.json").read_text())
    for r in e["sources"]:
        b=(a.root/r["path"]).read_bytes();assert hashlib.sha1(("blob %d"%len(b)).encode()+b"\0"+b).hexdigest()==r["sha"],r["path"]
    elf,nso,mapped,segments,raw,tags,relocs=dec.decode(a.root)
    a.out.mkdir(parents=True,exist_ok=True)
    def write(n,v):(a.out/n).write_text(json.dumps(v,indent=2)+"\n")
    wins={hx(lo):window(raw,lo,hi) for lo,hi in [(0x1c7cf1c,0x1c7d280),(0x1c7c980,0x1c7cf1c),(0x1c79ed0,0x1c7a574),(0x1c7a574,0x1c7a5c0),(0x283ecfc,0x283efa4),(0x283d0a0,0x283d1cc)]}
    write("native_windows.json",wins)
    tables=[]
    for base,count in [(0x4a918a8,4),(0x4a918c8,4),(0x4a918e8,4),(0x4a43380,4),(0x4a433b8,4),(0x4a43450,4),(0x4a434e0,4)]:
        for i in range(count):
            r=relocs.get(base+i*8-S)
            if r and r.get("type")=="RELR":
                t=r["addend"]+S;tables.append({"table":hx(base),"index":i,"target":hx(t),"window":window(raw,t,t+0x40)})
    write("selector_slots.json",tables)
    targets={0x1c7cf1c,0x1c7a574,0x1c7c980,0x1c79a24,0x1c79be0,0x1c79ed0,0x1c7c808,0x1c87374}
    write("direct_refs.json",direct_scan(mapped,targets))
    d=descriptor_tests(mapped,relocs);write("descriptor_tests.json",d)
    c=copy_tests(mapped);write("copy_tests.json",c)
    g=guards(mapped);write("submit_guard_tests.json",g)
    h=hash_tests(mapped);write("hash_slice_tests.json",h)
    report={"hash_slice_cases":len(h)*2,"source_anchors":len(e["sources"]),"native_window_instructions":sum(map(len,wins.values())),"relocated_slots":len(tables),"descriptor_cases":len(d),"descriptor_copy_cases":len(c),"submit_guard_cases":len(g),"total_cases":len(d)+len(c)+len(g),"hash_candidate_native_executed":True,"hash_full_function_executed":False,"full_job_executed":False,"cloud_disk_mapping_verified":False,"real_save_samples":0}
    write("report.json",report);print(json.dumps(report,indent=2))
if __name__=="__main__":main()
