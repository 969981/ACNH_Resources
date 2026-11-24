#!/usr/bin/env python3
"""R121: native read-only validation tests and caller-window evidence."""
import argparse,json,random,struct
from pathlib import Path
from capstone import Cs,CS_ARCH_ARM64,CS_MODE_ARM
from unicorn import UC_HOOK_CODE,UC_HOOK_MEM_WRITE
from unicorn.arm64_const import UC_ARM64_REG_X0,UC_ARM64_REG_X1,UC_ARM64_REG_X30,UC_ARM64_REG_SP,UC_ARM64_REG_PC
import acnh303_r100_nso_decode as dec
from acnh303_r119_save_dispatch import hash32
from acnh303_r120_native_save import vm,invoke,load_archive,BUF,STACK,STOP,S,hx,sha

ERROR=0x258b910
GENS={"profile":0x28420c0,"mvoption":0x27b7ff0,"wherearen":0x28f2210}
def seal(data,regions):
    for r in regions:
        p,n,h=r["start"],r["length"],r["hash_offset"]
        struct.pack_into("<I",data,h,hash32(memoryview(data)[p:p+n]))
def validators(u,files):
    rows=[]
    errors=[]
    def fail(uc,address,size,user):
        errors.append(address)
        uc.emu_stop()
    hook=u.hook_add(UC_HOOK_CODE,fail,begin=ERROR,end=ERROR)
    def test(f,label,data=None,mutated=None,expect_error=False):
        errors.clear()
        if data is not None:u.mem_write(BUF,bytes(data))
        u.reg_write(UC_ARM64_REG_X0,0)
        u.reg_write(UC_ARM64_REG_X1,0 if data is None else BUF)
        u.reg_write(UC_ARM64_REG_X30,STOP)
        u.reg_write(UC_ARM64_REG_SP,STACK+0x1fff0)
        u.emu_start(int(f["checksum_validator"],16),STOP,timeout=120000000,count=100000000)
        if expect_error:
            assert errors==[ERROR],(f["name"],label,errors,hex(u.reg_read(UC_ARM64_REG_PC)))
        else:
            assert not errors and u.reg_read(UC_ARM64_REG_PC)==STOP and u.reg_read(UC_ARM64_REG_X0)==1,(f["name"],label)
        rows.append({"file":f["name"],"entry":f["checksum_validator"],"case":label,"mutated_offset":mutated,"outcome":"native_error_reporting_entry_reached" if expect_error else "native_return_1","error_reporting_executed":False})
    for f in files:
        if not f["checksum_validator"]:continue
        data=bytearray(random.Random(121+f["index"]).randbytes(f["write_size"]))
        seal(data,f.get("generator_only_inner_regions",[]))
        seal(data,f["checksum_regions"])
        test(f,"valid",data)
        test(f,"null")
        for r in f["checksum_regions"]:
            for label,off in [("payload_bitflip",r["start"]),("stored_hash_bitflip",r["hash_offset"])]:
                data[off]^=1
                test(f,label,data,off,True)
                data[off]^=1
        if f["name"]=="main":
            for r in f["generator_only_inner_regions"]:
                off=r["start"]
                data[off]^=1
                test(f,"inner_payload_bitflip_outer_validator",data,off)
                data[off]^=1
    u.hook_del(hook)
    return rows

def generators(u,files):
    rows=[]
    def test(entry,data,regions,base=0):
        expected=bytearray(data)
        seal(expected,regions)
        u.mem_write(BUF,bytes(data))
        writes=[]
        def onwrite(uc,access,address,size,value,user):
            writes.append((address-BUF,size))
        hook=u.hook_add(UC_HOOK_MEM_WRITE,onwrite,begin=BUF,end=BUF+len(data)-1)
        invoke(u,entry,BUF+base)
        u.hook_del(hook)
        assert bytes(u.mem_read(BUF,len(data)))==expected,(hx(entry),base)
        assert sorted(writes)==sorted((r["hash_offset"],4) for r in regions),(hx(entry),writes)
        return expected
    for f in files:
        if f["name"] not in GENS:continue
        data=bytearray(random.Random(221+f["index"]).randbytes(f["write_size"]))
        if f["name"]=="profile":
            for i,r in enumerate(f["conditional_inner_regions"]):
                data=test(0x2842d10,data,[r],r["hash_offset"])
                rows.append({"file":"profile","entry":"02842D10","block":i,"hash_offset":r["hash_offset"],"full_buffer_equal":True,"conditional_dispatch_executed":False})
        test(GENS[f["name"]],data,f["checksum_regions"])
        rows.append({"file":f["name"],"entry":hx(GENS[f["name"]]),"full_buffer_equal":True,"conditional_dispatch_executed":False})
    return rows

def caller_windows(raw,refs):
    cs=Cs(CS_ARCH_ARM64,CS_MODE_ARM)
    result=[]
    for target in ["0278EF80","026EF2CC"]:
        for ref in refs[target]:
            site=int(ref["site"],16)
            lo=site-0x60
            rows=[{"va":hx(i.address),"bytes":i.bytes.hex(),"op":i.mnemonic,"args":i.op_str} for i in cs.disasm(raw(lo-S,0xc4),lo)]
            assert len(rows)==49 and rows[24]["bytes"]==ref["bytes"]
            result.append({"target":target,"site":ref["site"],"instructions":rows,"scope":"bounded window; ownership and indirect calls not asserted"})
    # Wider window covering all 4 cloud references and nearby consumers.
    lo=0x1d50300;hi=0x1d50600
    rows=[{"va":hx(i.address),"bytes":i.bytes.hex(),"op":i.mnemonic,"args":i.op_str} for i in cs.disasm(raw(lo-S,hi-lo),lo)]
    return result,rows

def main():
    p=argparse.ArgumentParser()
    p.add_argument("--root",type=Path,default=Path("."))
    p.add_argument("--r119",type=Path,required=True)
    p.add_argument("--r120",type=Path,required=True)
    p.add_argument("--out",type=Path,required=True)
    a=p.parse_args()
    files,=load_archive(a.r119,"170f6060a8fc6345a2a950417a9febac49db4f9af9d119723b8bcd7ac0c29a08",["savefile_index.json"])
    refs,prior=load_archive(a.r120,"612f84e4100e93501944ee7effcc190ab177b7066984c13a5a6b573e228ace1f",["direct_refs.json","report.json"])
    assert prior["main_native_hash_fields"]==19 and prior["main_buffer_equal"]
    elf,nso,mapped,segments,raw,tags,relocs=dec.decode(a.root)
    a.out.mkdir(parents=True,exist_ok=True)
    def write(n,v):(a.out/n).write_text(json.dumps(v,indent=2)+"\n")
    windows,cloud=caller_windows(raw,refs)
    write("caller_windows.json",windows)
    write("cloud_consumer_window.json",cloud)
    u=vm(mapped,max(f["write_size"] or 0 for f in files))
    vr=validators(u,files)
    write("native_validator_tests.json",vr)
    gr=generators(u,files)
    write("native_generator_tests.json",gr)
    report={"ordinary_validator_functions":len({r["entry"] for r in vr}),"ordinary_outer_regions":sum(len(f["checksum_regions"]) for f in files),"valid_cases":sum(r["case"]=="valid" for r in vr),"null_cases":sum(r["case"]=="null" for r in vr),"corruption_cases":sum(r["outcome"]=="native_error_reporting_entry_reached" for r in vr),"main_inner_mutations_not_rejected_by_outer_validator":sum(r["case"]=="inner_payload_bitflip_outer_validator" for r in vr),"profile_inner_generator_cases":sum(r.get("block") is not None for r in gr),"ordinary_generator_cases":sum("block" not in r for r in gr),"caller_windows":len(windows),"cloud_consumer_window_instructions":len(cloud),"real_save_samples":0,"runtime_verified":False,"cloud_disk_mapping_verified":False,"cloud_content_hash_verified":False,"profile_conditional_dispatch_verified":False}
    write("report.json",report)
    print(json.dumps(report,indent=2))
if __name__=="__main__":main()
