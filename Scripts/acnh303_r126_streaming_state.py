#!/usr/bin/env python3
"""R126: offline native membership and local reset transitions. No network or SDK calls."""
import argparse,hashlib,json,struct,random
from pathlib import Path
from unicorn import UC_HOOK_CODE
from unicorn.arm64_const import UC_ARM64_REG_X0
import acnh303_r100_nso_decode as dec
from acnh303_r120_native_save import vm,invoke,load_archive,direct_scan,BUF,S,hx
from acnh303_r124_interface_registry import window
BASE=Path("derived/3.0.3/npc_event_flags/r126_streaming_state")
def membership(mapped):
    u=vm(mapped,0x1000)
    rows=[]
    # Every position, every possible byte including FF, and absent/present control.
    for value in range(256):
        filler=(value+1)&255
        for pos in range(-1,32):
            data=bytearray([filler]*0x100)
            if pos>=0:data[0x94+pos]=value
            u.mem_write(BUF,bytes(data))
            invoke(u,0x2b5888,BUF,value,count=500)
            got=u.reg_read(UC_ARM64_REG_X0)
            assert got==int(pos>=0),(value,pos,got)
            assert bytes(u.mem_read(BUF,len(data)))==data
            rows.append({"value":value,"position":pos,"present":bool(got)})
    return rows
def reset(mapped):
    u=vm(mapped,0x1000)
    rows=[]
    rng=random.Random(126)
    # Never enter state=2 with the selected type present: that branch invokes
    # an SDK-dependent completion query. A code hook rejects that call.
    def deny(uc,addr,size,user):raise AssertionError("unexpected completion query")
    u.hook_add(UC_HOOK_CODE,deny,begin=0x2a5c40,end=0x2a5c40)
    for state in range(14):
        for counter in [0,1,99,100,101,255]:
            data=bytearray(rng.randbytes(0x140))
            struct.pack_into("<I",data,0x78,state)
            data[0xd2]=counter
            data[0x94:0xb4]=bytes([0xff])*32
            data[0xb8]=0x14
            expected=bytearray(data)
            transition=12 if state==2 else 6 if state==5 and counter==100 else state
            if transition!=state:
                for off,n,v in [(0x78,4,transition),(0xb4,4,0xffffffff),(0x80,8,0),(0x88,8,0),(0x90,4,0),(0xb8,2,0xffff),(0xbc,8,0),(0xc8,8,0),(0xd0,2,0),(0xd2,1,100 if transition==6 else 0)]:
                    expected[off:off+n]=v.to_bytes(n,"little")
                expected[0x94:0xb4]=bytes([0xff])*32
            u.mem_write(BUF,bytes(data))
            invoke(u,0x2b6d6c,BUF,count=2000)
            actual=bytes(u.mem_read(BUF,len(data)))
            assert actual==expected,(state,counter,[(i,a,b) for i,(a,b) in enumerate(zip(actual,expected)) if a!=b])
            rows.append({"state":state,"counter":counter,"selected_type_absent":True,"next_state":transition,"full_buffer_equal":True})
    return rows
def identity(mapped):
    u=vm(mapped,0x1000);rows=[]
    for base in (0,1,0x123456789abcdef0):
        for flag in range(256):
            u.mem_write(BUF,bytes(0x100))
            u.mem_write(BUF+0x30,struct.pack("<Q",base))
            u.mem_write(BUF+0x2a,bytes([flag]))
            invoke(u,0x2aaa28,BUF,count=100)
            got=u.reg_read(UC_ARM64_REG_X0)
            assert got==(flag if flag else base)
            rows.append({"base":base,"flag":flag,"returned":got})
    return rows
def main():
    p=argparse.ArgumentParser()
    p.add_argument("--root",type=Path,default=Path("."))
    p.add_argument("--r125",type=Path,required=True)
    p.add_argument("--out",type=Path,required=True)
    a=p.parse_args()
    prior,=load_archive(a.r125,"eaa3d8762294db3b697e88a4b4aa1b001b4e520336ca227da0f8342fcc9b03bc",["report.json"])
    assert prior["queue_cases"]==6144 and prior["receive_cases"]==48
    e=json.loads((a.root/BASE/"evidence.json").read_text())
    for r in e["sources"]:
        b=(a.root/r["path"]).read_bytes()
        assert hashlib.sha1(("blob %d"%len(b)).encode()+b"\0"+b).hexdigest()==r["sha"]
    elf,nso,mapped,segments,raw,tags,relocs=dec.decode(a.root)
    a.out.mkdir(parents=True,exist_ok=True)
    def write(n,v):(a.out/n).write_text(json.dumps(v,indent=2)+"\n")
    bounds=[(0x2b7440,0x2b7558),(0x2b6e98,0x2b7008),(0x2b7558,0x2b7620),(0x2b7008,0x2b72d8),(0x2b6d6c,0x2b6e98),(0x2b5888,0x2b5a00),(0x1c84c50,0x1c85000)]
    wins={hx(lo):window(raw,lo,hi) for lo,hi in bounds}
    write("native_windows.json",wins)
    refs=direct_scan(mapped,{0x2b7440,0x2b6e98,0x2b7558,0x2b7008,0x2b6d6c,0x2b5888,0x1c84c50,0x2b73bc,0x2b5764})
    write("direct_refs.json",refs)
    m=membership(mapped);write("membership_tests.json",m)
    r=reset(mapped);write("local_reset_tests.json",r)
    i=identity(mapped);write("identity_tests.json",i)
    report={"membership_cases":len(m),"local_reset_cases":len(r),"identity_cases":len(i),"total_cases":len(m)+len(r)+len(i),"reset_transition_counts":{str(k):sum(x["next_state"]==k and x["state"]!=k for x in r) for k in (6,12)},"native_windows":len(wins),"window_instructions":sum(map(len,wins.values())),"sdk_completion_executed":False,"network_executed":False,"cloud_disk_mapping_verified":False,"runtime_verified":False,"real_save_samples":0}
    write("report.json",report);print(json.dumps(report,indent=2))
if __name__=="__main__":main()
