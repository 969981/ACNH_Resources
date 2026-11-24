#!/usr/bin/env python3
"""R128: filename initializer and Profile conditional dispatch evidence; no save writes."""
import argparse,hashlib,json,struct,random,itertools
from pathlib import Path
from capstone import Cs,CS_ARCH_ARM64,CS_MODE_ARM
import acnh303_r100_nso_decode as dec
from acnh303_r120_native_save import load_archive,direct_scan,S,hx,vm,invoke,BUF,STACK,STOP
from acnh303_r119_save_dispatch import hash32
from unicorn import UC_HOOK_CODE
from unicorn.arm64_const import UC_ARM64_REG_X0,UC_ARM64_REG_X1,UC_ARM64_REG_X2,UC_ARM64_REG_X19,UC_ARM64_REG_X20,UC_ARM64_REG_X21,UC_ARM64_REG_X22,UC_ARM64_REG_X23,UC_ARM64_REG_X28,UC_ARM64_REG_X30,UC_ARM64_REG_PC,UC_ARM64_REG_SP
from acnh303_r124_interface_registry import window
BASE=Path("derived/3.0.3/npc_event_flags/r128_savefile_index")
def native_name_tests(mapped,e):
    u=vm(mapped,0x3000)
    page=0x5573000
    if not any(lo<=page and page+0xfff<=hi for lo,hi,_ in u.mem_regions()):u.mem_map(page,0x1000)
    # Execute the exact initializer tail; incoming vtable values are modeled.
    vtable=BUF+0x1000
    for reg,v in [(UC_ARM64_REG_X19,vtable-0x10),(UC_ARM64_REG_X20,vtable),(UC_ARM64_REG_X21,0x20),(UC_ARM64_REG_X22,vtable)]:
        u.reg_write(reg,v)
    u.emu_start(0x26ede58,0x26edf78,count=1000)
    assert u.reg_read(UC_ARM64_REG_PC)==0x26edf78
    def string(addr):
        return bytes(u.mem_read(addr,64)).split(b"\0",1)[0].decode()
    def q(addr):return struct.unpack("<Q",u.mem_read(addr,8))[0]
    rows=[]
    for f in e["files"]:
        ptr=q(int(f["name_pointer_slot"],16))
        assert string(ptr)==f["name"],f
        assert q(int(f["name_pointer_slot"],16)-8)==vtable
        rows.append({"index":f["index"],"name":f["name"],"pointer":hx(ptr)})
    assert string(q(0x5573ee0))==".dat"
    assert string(q(0x5573f18))=="Header"
    # Only string virtual validation and external memcpy are modeled;
    # original string assembly, bounds checks and index selection execute.
    stub=STOP+0x100
    u.mem_write(vtable+0x18,struct.pack("<Q",stub))
    def noop(uc,addr,size,user):
        uc.reg_write(UC_ARM64_REG_PC,uc.reg_read(UC_ARM64_REG_X30))
    def copy(uc,addr,size,user):
        d=uc.reg_read(UC_ARM64_REG_X0);s=uc.reg_read(UC_ARM64_REG_X1);n=uc.reg_read(UC_ARM64_REG_X2)
        assert BUF+0x200<=d<BUF+0x280 and 0<=n<=128
        uc.mem_write(d,bytes(uc.mem_read(s,n)))
        uc.reg_write(UC_ARM64_REG_PC,uc.reg_read(UC_ARM64_REG_X30))
    u.hook_add(UC_HOOK_CODE,noop,begin=stub,end=stub)
    u.hook_add(UC_HOOK_CODE,copy,begin=0x4004470,end=0x4004470)
    cases=[]
    for i in list(range(11))+[0xffffffff]:
        name=e["files"][i if i<10 else 0]["name"]
        for prefix in ["","Moved/","Villager0/"]:
            for entry,suffix in [(0x2701270,".dat"),(0x27014c0,"Header.dat")]:
                u.mem_write(BUF,struct.pack("<QQQ",vtable,BUF+0x200,128))
                u.mem_write(BUF+0x200,prefix.encode()+b"\0"+bytes(127-len(prefix)))
                invoke(u,entry,BUF,i,count=10000)
                got=string(BUF+0x200);assert got==prefix+name+suffix,(i,entry,got)
                cases.append({"index":i,"entry":hx(entry),"prefix":prefix,"result":got})
    return rows,cases

def native_profile_tests(mapped):
    size=0x69560;ctx=BUF+0x70000
    u=vm(mapped,0x74000);rows=[];calls=[]
    offsets=[0x110,0x23130,0x46150]
    def zero(uc,addr,size,user):
        d=uc.reg_read(UC_ARM64_REG_X0);v=uc.reg_read(UC_ARM64_REG_X1);n=uc.reg_read(UC_ARM64_REG_X2)
        assert d-BUF in offsets and v==0 and n==0x23020
        uc.mem_write(d,bytes(n));calls.append(d-BUF)
        uc.reg_write(UC_ARM64_REG_PC,uc.reg_read(UC_ARM64_REG_X30))
    u.hook_add(UC_HOOK_CODE,zero,begin=0x4004450,end=0x4004450)
    rng=random.Random(128);data=rng.randbytes(size)
    for flags in list(itertools.product([0,1],repeat=3))+[(255,255,255),(0,128,1)]:
        u.mem_write(BUF,data);u.mem_write(ctx+0x1a9,bytes(flags))
        expected=bytearray(data)
        for off,flag in zip(offsets,flags):
            if flag:expected[off:off+0x23020]=bytes(0x23020)
            else:struct.pack_into("<I",expected,off,hash32(expected[off+4:off+0x23020]))
        struct.pack_into("<I",expected,0x100,hash32(expected[0x104:0x69560]))
        u.reg_write(UC_ARM64_REG_SP,STACK+0x1fff0)
        u.reg_write(UC_ARM64_REG_X23,BUF);u.reg_write(UC_ARM64_REG_X28,ctx);u.reg_write(UC_ARM64_REG_X0,BUF+0x110)
        before=len(calls)
        u.emu_start(0x28c7df4,0x28c7e94,timeout=120000000,count=100000000)
        assert u.reg_read(UC_ARM64_REG_PC)==0x28c7e94
        assert bytes(u.mem_read(BUF,size))==expected,flags
        assert calls[before:]==[o for o,f in zip(offsets,flags) if f]
        rows.append({"flags":flags,"full_buffer_equal":True,"clear_offsets":calls[before:],"outer_hash":struct.unpack_from("<I",expected,0x100)[0]})
    return rows

def main():
    p=argparse.ArgumentParser();p.add_argument("--root",type=Path,default=Path("."));p.add_argument("--r127",type=Path,required=True);p.add_argument("--out",type=Path,required=True);a=p.parse_args()
    prior,=load_archive(a.r127,"cd6f24fed4a3a3540c61ef197dc0cb6ef0e06188fcf346a15a917110725bb23b",["report.json"])
    assert prior["total_cases"]==183
    e=json.loads((a.root/BASE/"evidence.json").read_text())
    for r in e["sources"]:
        b=(a.root/r["path"]).read_bytes();assert hashlib.sha1(("blob %d"%len(b)).encode()+b"\0"+b).hexdigest()==r["sha"],r["path"]
    elf,nso,mapped,segments,raw,tags,relocs=dec.decode(a.root)
    a.out.mkdir(parents=True,exist_ok=True)
    def write(n,v):(a.out/n).write_text(json.dumps(v,indent=2)+"\n")
    assert raw(0x40a9af5-S,5)==b"main\0"
    cs=Cs(CS_ARCH_ARM64,CS_MODE_ARM)
    # Find exact NUL-terminated strings in original rodata, retaining all matches.
    ro,blob=mapped[1]
    strings=[]
    for row in e["files"]:
        for key in ("name","type_name"):
            needle=row[key].encode()+b"\0";pos=-1;matches=[]
            while True:
                pos=blob.find(needle,pos+1)
                if pos<0:break
                matches.append(hx(ro+pos+S))
            assert matches,(row["index"],key)
            strings.append({"index":row["index"],"field":key,"text":row[key],"addresses":matches})
    write("filename_literals.json",strings)
    # Initializer suffix candidate: stop at first RET after the final type-name registration.
    # Entire bounded window retained; no guessed function boundary used as proof.
    init=window(raw,0x26ed290,0x26ee000)
    write("initializer_window.json",init)
    refs=direct_scan(mapped,{0x26ed290,0x2701270,0x27014c0,0x2701810,0x28cb2a0,0x2842d10,0x28420c0})
    write("direct_refs.json",refs)
    callrows=[r for r in refs["02842D10"] if 0x28c29b0<=int(r["site"],16)<0x28cb2a0]
    assert len(callrows)==3,callrows
    pcs=[int(r["site"],16) for r in callrows]
    lo=min(pcs)-0x60;hi=max(pcs)+0x100
    profile=window(raw,lo,hi)
    write("profile_mode2_window.json",profile)
    write("profile_calls.json",callrows)
    # Retain full source-based index and do not promote name mapping to disk I/O proof.
    write("savefile_index.json",e["files"])
    names,paths=native_name_tests(mapped,e)
    write("native_filename_init.json",names);write("native_filename_paths.json",paths)
    pt=native_profile_tests(mapped);write("native_profile_mode2_tests.json",pt)
    report={"native_filename_entries":len(names),"native_filename_cases":len(paths),"native_profile_mode2_cases":len(pt),"literal_checks":len(strings),"initializer_window_instructions":len(init),"profile_inner_direct_calls":len(callrows),"profile_window_instructions":len(profile),"filename_source_mapping":10,"cloud_disk_mapping_verified":False,"profile_conditional_dispatch_verified":True,"profile_mode1_dispatch_verified":False,"profile_full_dispatch_executed":False,"real_save_samples":0}
    write("report.json",report);print(json.dumps(report,indent=2))
if __name__=="__main__":main()
