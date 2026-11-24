#!/usr/bin/env python3
"""R129 original instruction windows and load-chain anchors; offline only."""
import argparse,hashlib,json,struct,random,itertools
from pathlib import Path
import acnh303_r100_nso_decode as dec
from acnh303_r120_native_save import load_archive,direct_scan,S,hx,vm,BUF,STACK
from acnh303_r119_save_dispatch import hash32
from unicorn import UC_HOOK_CODE
from unicorn.arm64_const import UC_ARM64_REG_X0,UC_ARM64_REG_X1,UC_ARM64_REG_X2,UC_ARM64_REG_X3,UC_ARM64_REG_X4,UC_ARM64_REG_X5,UC_ARM64_REG_X6,UC_ARM64_REG_X21,UC_ARM64_REG_X23,UC_ARM64_REG_X25,UC_ARM64_REG_X30,UC_ARM64_REG_PC,UC_ARM64_REG_SP
from acnh303_r124_interface_registry import window
BASE=Path("derived/3.0.3/npc_event_flags/r129_profile_load")
def mode1(mapped):
    size=0x69560;ctx=BUF+0x70000;table=BUF+0x71000;header=BUF+0x72000
    u=vm(mapped,0x74000);sp=STACK+0x1f000
    offsets=[0x110,0x23130,0x46150];rows=[];clears=[]
    def reg(r,v):u.reg_write(r,v)
    def put(a,v):u.mem_write(a,struct.pack("<Q",v))
    def run(lo,hi):
        u.emu_start(lo,hi,timeout=120000000,count=100000000)
        assert u.reg_read(UC_ARM64_REG_PC)==hi
    def zero(uc,addr,size,user):
        d=uc.reg_read(UC_ARM64_REG_X0);v=uc.reg_read(UC_ARM64_REG_X1);n=uc.reg_read(UC_ARM64_REG_X2)
        assert d-BUF in offsets and v==0 and n==0x23020
        uc.mem_write(d,bytes(n));clears.append(d-BUF)
        uc.reg_write(UC_ARM64_REG_PC,uc.reg_read(UC_ARM64_REG_X30))
    u.hook_add(UC_HOOK_CODE,zero,begin=0x4004450,end=0x4004450)
    data=random.Random(129).randbytes(size)
    # Original register initialization and slot-address calculation execute as separate slices.
    for slot in range(8):
        for flags in list(itertools.product([0,1],repeat=3))+[(255,255,255),(0,128,1)]:
            u.mem_write(BUF,data)
            u.mem_write(ctx,bytes([0xa5])*0x200)
            u.mem_write(ctx+0x188+slot*4+1,bytes(flags))
            expected=bytearray(data)
            for off,flag in zip(offsets,flags):
                if flag:expected[off:off+0x23020]=bytes(0x23020)
                else:struct.pack_into("<I",expected,off,hash32(expected[off+4:off+0x23020]))
            struct.pack_into("<I",expected,0x100,hash32(expected[0x104:]))
            reg(UC_ARM64_REG_SP,sp)
            run(0x28c6ca0,0x28c6cc8)
            reg(UC_ARM64_REG_X25,ctx+0x188);reg(UC_ARM64_REG_X23,slot)
            put(sp+0x240,table)
            run(0x28c6d14,0x28c6d34)
            flagptr=u.reg_read(UC_ARM64_REG_X21)
            assert flagptr==ctx+0x188+slot*4
            put(sp+0x268,flagptr);put(sp+0x280,0x1234)
            reg(UC_ARM64_REG_X25,BUF);reg(UC_ARM64_REG_X23,header);reg(UC_ARM64_REG_X0,BUF+0x110)
            before=len(clears)
            run(0x28c7358,0x28c7674)
            assert bytes(u.mem_read(BUF,size))==expected,(slot,flags)
            assert clears[before:]==[o for o,f in zip(offsets,flags) if f]
            args=[u.reg_read(r) for r in [UC_ARM64_REG_X0,UC_ARM64_REG_X1,UC_ARM64_REG_X2,UC_ARM64_REG_X3,UC_ARM64_REG_X4,UC_ARM64_REG_X5,UC_ARM64_REG_X6]]
            assert args==[0x1234,BUF,header,size,1,4,slot],args
            rows.append({"slot":slot,"flags":flags,"flag_offset":flagptr-ctx,"cleared":clears[before:],"outer_hash":struct.unpack_from("<I",expected,0x100)[0],"transaction_args_verified":True,"full_buffer_equal":True})
    return rows

def main():
    p=argparse.ArgumentParser();p.add_argument("--root",type=Path,default=Path("."));p.add_argument("--r128",type=Path,required=True);p.add_argument("--out",type=Path,required=True);a=p.parse_args()
    prior,=load_archive(a.r128,"a039bf0d6c14b50e460e237f0aafe1cf6036997af6f53ea55320d84421c9d62d",["report.json"])
    assert prior["native_profile_mode2_cases"]==10
    e=json.loads((a.root/BASE/"evidence.json").read_text())
    for r in e["sources"]:
        b=(a.root/r["path"]).read_bytes();assert hashlib.sha1(("blob %d"%len(b)).encode()+b"\0"+b).hexdigest()==r["sha"],r["path"]
    elf,nso,mapped,segments,raw,tags,relocs=dec.decode(a.root)
    a.out.mkdir(parents=True,exist_ok=True)
    def write(n,v):(a.out/n).write_text(json.dumps(v,indent=2)+"\n")
    refs=direct_scan(mapped,{0x28cb2a0,0x28c871c,0x28c8a30,0x28b5ff0,0x28b63c0,0x27b6c14,0x28c8ba0,0x26cf750})
    write("direct_refs.json",refs)
    tx={r["site"]:window(raw,int(r["site"],16)-0x30,int(r["site"],16)+4) for r in refs["028CB2A0"]}
    write("file_transaction_call_windows.json",tx)
    # Full dispatcher bounded interval for recovering the inlined hash path.
    profile=window(raw,0x28c6c80,0x28c8068)
    write("profile_dispatch_window.json",profile)
    wins={hx(lo):window(raw,lo,hi) for lo,hi in [(0x28c871c,0x28c8a30),(0x28c8a30,0x28c8ba0),(0x28b5ff0,0x28b63c0),(0x28b63c0,0x28b6490),(0x28c8ba0,0x28c8cc0)]}
    write("load_windows.json",wins)
    tests=mode1(mapped);write("profile_mode1_tests.json",tests)
    write("report.json",{"profile_mode1_cases":len(tests),"modeled_memset_calls":sum(len(r["cleared"]) for r in tests),"source_anchors":len(e["sources"]),"transaction_call_windows":len(tx),"profile_window_instructions":len(profile),"load_windows":len(wins),"load_window_instructions":sum(map(len,wins.values())),"profile_mode1_executed":True,"profile_full_dispatch_executed":False,"cloud_disk_mapping_verified":False,"real_save_samples":0})
    print((a.out/"report.json").read_text())
if __name__=="__main__":main()
