#!/usr/bin/env python3
"""R134 bounded offline original metadata and cloud payload lineage."""
import argparse,hashlib,json,struct,random
from pathlib import Path
from unicorn import UC_HOOK_CODE
from unicorn.arm64_const import *
import acnh303_r100_nso_decode as dec
from acnh303_r120_native_save import load_archive,direct_scan,S,hx,vm,invoke,BUF,STACK,STOP
from acnh303_r124_interface_registry import window
from acnh303_r122_backend_abi import p64,q64,get_target
from acnh303_r119_save_dispatch import hash32
BASE=Path("derived/3.0.3/npc_event_flags/r134_cloud_inputs")
def ensure(u,a):
    p=a&~0xfff
    if not any(lo<=p and p+0xfff<=hi for lo,hi,_ in u.mem_regions()):u.mem_map(p,0x1000)
def run(u,lo,hi,count=100000000):
    u.emu_start(lo,hi,count=count,timeout=120000000)
    assert u.reg_read(UC_ARM64_REG_PC)==hi,(hx(lo),hx(hi),hx(u.reg_read(UC_ARM64_REG_PC)))
def metadata(mapped):
    u=vm(mapped,0x160000);src=BUF+0x1000;dst=BUF+0x800;rows=[]
    chain=[BUF,BUF+0x100,BUF+0x200,src]
    for a,b in zip(chain,chain[1:]):p64(u,a,b)
    record=bytes(range(1,21))
    for tag in [0,1,2,0xffffffff]:
        for equal in [True,False]:
            for cat in [0,1,2,3,4,128,255]:
                before=bytearray([0xa5])*0x80
                before[0xc:0x20]=record if equal else bytes(20)
                struct.pack_into("<I",before,0x2c,tag)
                u.mem_write(dst,bytes(before));u.mem_write(src+0x48d9c,record+bytes([cat]))
                u.reg_write(UC_ARM64_REG_X0,BUF);u.reg_write(UC_ARM64_REG_X1,dst)
                u.reg_write(UC_ARM64_REG_SP,STACK+0x1fff0)
                end=0x1c74978 if tag==0 and equal else 0x1c74920
                run(u,0x1c7487c,end,1000)
                expected=bytearray(before);expected[0xc:0x20]=record;struct.pack_into("<I",expected,0x2c,0)
                if end==0x1c74920:struct.pack_into("<I",expected,0x30,cat if cat<=3 else 2)
                assert bytes(u.mem_read(dst,len(expected)))==expected,(tag,equal,cat)
                rows.append({"tag":tag,"equal_record":equal,"classification":cat,"stop":hx(end),"classification_written":end==0x1c74920,"full_buffer_equal":True})
    return rows
def metadata_full(mapped):
    u=vm(mapped,0x160000);src=BUF+0x1000;dst=BUF+0x800;rows=[]
    for a,b in [(BUF,BUF+0x100),(BUF+0x100,BUF+0x200),(BUF+0x200,src)]:p64(u,a,b)
    for g in [0x537d558,0x537f040,0x5358908]:ensure(u,g)
    session=BUF+0x80000;owner=session+0x100;handle=session+0x700;other=session+0x800;gate=session+0x1000;flag=session+0x4000
    p64(u,0x537d558,session);p64(u,0x537f040,other);p64(u,0x5358908,gate);p64(u,gate+0x2070,flag)
    trace=[]
    def tail(uc,addr,size,user):
        trace.append(uc.reg_read(UC_ARM64_REG_X0));uc.reg_write(UC_ARM64_REG_PC,uc.reg_read(UC_ARM64_REG_X30))
    u.hook_add(UC_HOOK_CODE,tail,begin=0x1d4de8c,end=0x1d4de8c)
    record=bytes(range(1,21))
    for tag in [0,1,2,0xffffffff]:
        for equal in [True,False]:
            for cat in [0,1,2,3,4,128,255]:
                normalized=cat if cat<=3 else 2
                for oldcat in [normalized,0xa5]:
                    for scenario in range(5):
                        p64(u,session,owner);p64(u,session+0x10,handle if scenario else 0)
                        u.mem_write(owner+0x508,struct.pack("<I",4 if scenario==1 else 0))
                        u.mem_write(other+8,struct.pack("<I",1 if scenario in (3,4) else 0))
                        u.mem_write(flag,bytes([int(scenario==4)]))
                        before=bytearray([0xa5])*0x80;before[0xc:0x20]=record if equal else bytes(20)
                        struct.pack_into("<II",before,0x2c,tag,oldcat)
                        u.mem_write(dst,bytes(before));u.mem_write(src+0x48d9c,record+bytes([cat]));trace.clear()
                        invoke(u,0x1c7487c,BUF,dst,count=1000)
                        expected=bytearray(before);expected[0xc:0x20]=record;struct.pack_into("<II",expected,0x2c,0,normalized)
                        assert bytes(u.mem_read(dst,len(expected)))==expected
                        changed=bool(tag or not equal or oldcat!=normalized)
                        assert trace==([handle] if changed and scenario in (1,4) else []),(tag,equal,cat,oldcat,scenario,trace)
                        rows.append({"tag":tag,"equal_record":equal,"category":cat,"old_category":oldcat,"scenario":scenario,"tail_called":bool(trace),"full_buffer_equal":True})
    return rows

def lineage(mapped,relocs):
    u=vm(mapped,0x180000);gq=0x5351408;gc=0x5351250
    for g in [gq,gc]:ensure(u,g)
    process=BUF;request=BUF+0x400;queue=BUF+0x800;ctx=BUF+0x1000;task=BUF+0x1800;worker=BUF+0x2000;src=BUF+0x3000;reqcopy=BUF+0x2800
    p64(u,gq,queue);p64(u,gc,ctx)
    for base,count in [(0x4a918c8,4),(0x4a918e8,4),(0x4a43108,3)]:
        for i in range(count):p64(u,base+8*i,get_target(relocs,base,i*8))
    rng=random.Random(134);rows=[]
    for sel,n in [(1,0xa2458),(2,0xc6788),(3,0x14c618)]:
        payload=rng.randbytes(n);u.mem_write(src,payload)
        for optional in (0,1):
            for kind in (0,1):
                u.mem_write(process,bytes(0x310));u.mem_write(request,bytes(0x40));u.mem_write(ctx,bytes(0x200))
                p64(u,process+0x68,request);p64(u,process+0x290,src)
                u.mem_write(process+0x298,struct.pack("<I",sel));u.mem_write(request+0x18,struct.pack("<I",1))
                u.reg_write(UC_ARM64_REG_X0,process);u.reg_write(UC_ARM64_REG_SP,STACK+0x1fff0)
                # variant0 RET is executed; original descriptor callback builds the request.
                run(u,0x283d0a0,0x283d190,2000)
                assert u.reg_read(UC_ARM64_REG_X0)==queue and u.reg_read(UC_ARM64_REG_X1)==process+0x70
                r=u.reg_read(UC_ARM64_REG_X2);b=bytes(u.mem_read(r,0x44))
                assert struct.unpack_from("<QQQQ",b)==(src,n,0,0) and b[0x20]==1 and struct.unpack_from("<I",b,0x40)[0]==3
                u.mem_write(reqcopy,b)
                # Original Type3 conversion suffix, synthetic already-resolved context scalars.
                u.mem_write(ctx+0xb0,struct.pack("<I",1));u.mem_write(ctx+0xa0,bytes([optional]));p64(u,ctx+0x98,0x1122334455667788)
                u.mem_write(task,bytes(0x200));u.mem_write(task+0x54,b"\x01");u.mem_write(task+0x188,b"\x01")
                sp=STACK+0x1e000
                for reg,v in [(UC_ARM64_REG_SP,sp),(UC_ARM64_REG_X29,sp+0x70),(UC_ARM64_REG_X21,reqcopy),(UC_ARM64_REG_X23,gc),(UC_ARM64_REG_X20,task),(UC_ARM64_REG_W24,kind),(UC_ARM64_REG_W22,0x12345678),(UC_ARM64_REG_W25,1)]:
                    u.reg_write(reg,v)
                run(u,0x1c7d0f0,0x1c7d20c,2000)
                t=bytes(u.mem_read(task,0x200))
                assert struct.unpack_from("<IIQQQQ",t)==(kind,0x12345678,src,n,0,0)
                assert t[0x28]==1 and t[0x38]==1 and t[0x48]==1 and t[0x54]==0 and t[0x188]==0
                assert struct.unpack_from("<I",t,0x40)[0]==2
                assert struct.unpack_from("<Q",t,0x30)[0]==(0x1122334455667788 if optional else 0)
                # Actual copy callback selected by worker table Type2. Not the full queue worker.
                entry=get_target(relocs,0x4a433b8,16);assert entry==0x1c7a574
                u.mem_write(worker,bytes(0x800));u.reg_write(UC_ARM64_REG_X2,task)
                invoke(u,entry,0,worker+8,count=100)
                w=bytes(u.mem_read(worker,0x800))
                assert struct.unpack_from("<QQQQ",w,0x10)==(src,n,0,0)
                u.reg_write(UC_ARM64_REG_X19,worker);u.reg_write(UC_ARM64_REG_SP,STACK+0x1e000)
                run(u,0x1c7aa98,0x1c7ad6c,100)
                assert bytes(u.mem_read(STACK+0x1e000,16))==struct.pack("<QQ",src,n)
                # Execute both original independent hash slices with these actual copied input pairs.
                fp=STACK+0x1f800;sp=fp-0x340
                for reg,v in [(UC_ARM64_REG_X19,worker),(UC_ARM64_REG_X22,worker),(UC_ARM64_REG_X29,fp),(UC_ARM64_REG_SP,sp)]:u.reg_write(reg,v)
                run(u,0x1c79f5c,0x1c79f7c);run(u,0x1c79fc0,0x1c7a0c8)
                h1=struct.unpack("<I",u.mem_read(fp-0x40,4))[0]
                run(u,0x1c7a274,0x1c7a3a8)
                h2=struct.unpack("<I",u.mem_read(sp+0x22c,4))[0]
                assert h1==hash32(payload,0x36170e33) and h2==hash32(b"",0x36170e33)
                assert bytes(u.mem_read(src,n))==payload
                rows.append({"selector":sel,"length":n,"optional_context":optional,"context_scalar":kind,"request_pairs":[[src,n],[0,0]],"worker_pairs":[[src,n],[0,0]],"first_hash":h1,"second_hash":h2,"input_unchanged":True,"post_hash_second_pointer_branch":"01C7AD6C"})
    return rows
def main():
    p=argparse.ArgumentParser();p.add_argument("--root",type=Path,default=Path("."));p.add_argument("--r133",type=Path,required=True);p.add_argument("--out",type=Path,required=True);a=p.parse_args()
    prior,=load_archive(a.r133,"8b8d80474b23e64728d91cbb2eba6e7950e5b8be54c760873e923d2cec95754d",["report.json"]);assert prior["total_cases"]==192
    e=json.loads((a.root/BASE/"evidence.json").read_text())
    for r in e["sources"]:
        b=(a.root/r["path"]).read_bytes();assert hashlib.sha1(("blob %d"%len(b)).encode()+b"\0"+b).hexdigest()==r["sha"],r["path"]
    elf,nso,mapped,segments,raw,tags,relocs=dec.decode(a.root)
    a.out.mkdir(parents=True,exist_ok=True)
    def write(n,v):(a.out/n).write_text(json.dumps(v,indent=2)+"\n")
    wins={hx(lo):window(raw,lo,hi) for lo,hi in [(0x1c7487c,0x1c749b4),(0x283d0a0,0x283d1cc),(0x1c7d0f0,0x1c7d22c),(0x1c7aa8c,0x1c7aac4),(0x1c7b1b0,0x1c7b800)]}
    write("native_windows.json",wins)
    m=metadata(mapped);write("metadata_tests.json",m)
    mf=metadata_full(mapped);write("metadata_full_tests.json",mf)
    l=lineage(mapped,relocs);write("lineage_tests.json",l)
    report={"source_anchors":len(e["sources"]),"native_window_instructions":sum(map(len,wins.values())),"metadata_cases":len(m),"metadata_full_cases":len(mf),"modeled_metadata_tail_calls":sum(x["tail_called"] for x in mf),"lineage_cases":len(l),"hash_slice_checks":len(l)*2,"total_cases":len(m)+len(mf)+len(l),"full_metadata_handler_executed":True,"metadata_external_tail_modeled":True,"full_job_executed":False,"cloud_disk_mapping_verified":False,"real_save_samples":0}
    write("report.json",report);print(json.dumps(report,indent=2))
if __name__=="__main__":main()
