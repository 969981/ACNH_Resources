#!/usr/bin/env python3
"""R122: original getter and cloud selector ABI tests, source-anchored embedded aliases."""
import argparse,json,struct,hashlib,itertools
from pathlib import Path
from capstone import Cs,CS_ARCH_ARM64,CS_MODE_ARM
from unicorn.arm64_const import UC_ARM64_REG_X0,UC_ARM64_REG_X8
import acnh303_r100_nso_decode as dec
from acnh303_r120_native_save import vm,invoke,load_archive,direct_scan,BUF,S,hx
BASE=Path("derived/3.0.3/npc_event_flags/r122_backend_abi")
MAIN=[0x4a89728,0x4a8a730]
CLOUD=[(0x4a8b898,0x190,0x50e,0xa2458),(0x4a8bd30,0x198,0x50f,0xc6788),(0x4a8bfb0,0x1a0,0x510,0x14c618)]
def p64(u,a,v):u.mem_write(a,struct.pack("<Q",v))
def q64(u,a):return struct.unpack("<Q",u.mem_read(a,8))[0]
def get_target(relocs,v,slot):
    r=relocs[v+slot-S]
    assert r["type"]=="RELR"
    return r["addend"]+S
def getters(u,raw,relocs):
    cs=Cs(CS_ARCH_ARM64,CS_MODE_ARM)
    rows=[]
    for v in MAIN+[c[0] for c in CLOUD]:
        for slot in range(0x10,0x50,8):
            t=get_target(relocs,v,slot)
            code=raw(t-S,8)
            ins=list(cs.disasm(code,t))
            row={"vtable":hx(v),"slot":slot,"target":hx(t),"bytes":code.hex(),"instructions":[i.mnemonic+" "+i.op_str for i in ins]}
            # Only execute exact simple LDR X0,[X0,#imm]; RET shapes.
            w,ret=struct.unpack("<II",code)
            if w&0xffc003ff==0xf9400000 and ret==0xd65f03c0:
                off=((w>>10)&0xfff)*8
                assert off<0x100
                u.mem_write(BUF,bytes(0x100))
                for o in range(0,0x100,8):p64(u,BUF+o,0x123450000+o)
                invoke(u,t,BUF,count=10)
                assert u.reg_read(UC_ARM64_REG_X0)==0x123450000+off
                row.update(field=off,executed=True)
            else:row.update(field=None,executed=False)
            rows.append(row)
    return rows
def selector(u,relocs):
    manager,table,out=BUF,BUF+0x1000,BUF+0x2000
    objects=[BUF+0x3000+i*0x1000 for i in range(3)]
    buffers=[BUF+0x7000+i*0x100 for i in range(3)]
    rows=[]
    # Explicitly reconstruct only the known virtual-call slots from original RELR.
    for flags in itertools.product([0,2,4,6,7],repeat=3):
        for mask in range(8):
            u.mem_write(BUF,bytes(0x8000))
            p64(u,manager+0x10,table)
            for i,(v,slot,flag,n) in enumerate(CLOUD):
                u.mem_write(manager+flag,bytes([flags[i]]))
                p64(u,table+slot,objects[i] if mask&(1<<i) else 0)
                p64(u,objects[i],v)
                p64(u,objects[i]+0x10,buffers[i])
                p64(u,v+0x18,get_target(relocs,v,0x18))
            u.mem_write(out,b"\xcc"*24)
            u.reg_write(UC_ARM64_REG_X8,out)
            invoke(u,0x26ef2cc,manager,count=1000)
            chosen=next((i for i in range(3) if flags[i]&6==6 and mask&(1<<i)),None)
            expected=(0,0,0) if chosen is None else (buffers[chosen],CLOUD[chosen][3],1)
            actual=(q64(u,out),q64(u,out+8),u.mem_read(out+16,1)[0])
            assert actual==expected,(flags,mask,actual,expected)
            rows.append({"flags":flags,"present_mask":mask,"chosen":chosen,"pointer":actual[0],"size":actual[1],"valid":actual[2]})
    p64(u,manager+0x10,0)
    u.reg_write(UC_ARM64_REG_X8,out)
    invoke(u,0x26ef2cc,manager,count=1000)
    assert (q64(u,out),q64(u,out+8),u.mem_read(out+16,1)[0])==(0,0,0)
    rows.append({"case":"null_backend_table","valid":0,"pointer":0,"size":0})
    # A valid object whose getter returns NULL: distinguish valid from pointer.
    p64(u,manager+0x10,table)
    u.mem_write(manager+0x50e,b"\x06")
    p64(u,table+0x190,objects[0])
    p64(u,objects[0]+0x10,0)
    u.reg_write(UC_ARM64_REG_X8,out)
    invoke(u,0x26ef2cc,manager,count=1000)
    assert (q64(u,out),q64(u,out+8),u.mem_read(out+16,1)[0])==(0,CLOUD[0][3],1)
    rows.append({"case":"selected_getter_returns_null","chosen":0,"valid":1,"pointer":0,"size":CLOUD[0][3]})
    return rows
def main():
    p=argparse.ArgumentParser()
    p.add_argument("--root",type=Path,default=Path("."))
    p.add_argument("--r121",type=Path,required=True)
    p.add_argument("--out",type=Path,required=True)
    a=p.parse_args()
    prior,=load_archive(a.r121,"50debc5d7eb5f208372bcb93b5ff489f675cb4ee3ed71fdef6eafa33ae3554ec",["report.json"])
    assert prior["ordinary_validator_functions"]==7 and prior["main_inner_mutations_not_rejected_by_outer_validator"]==16
    e=json.loads((a.root/BASE/"evidence.json").read_text())
    for r in e["sources"]:
        b=(a.root/r["path"]).read_bytes()
        assert hashlib.sha1(("blob %d"%len(b)).encode()+b"\0"+b).hexdigest()==r["sha"]
    elf,nso,mapped,segments,raw,tags,relocs=dec.decode(a.root)
    a.out.mkdir(parents=True,exist_ok=True)
    def write(n,v):(a.out/n).write_text(json.dumps(v,indent=2)+"\n")
    refs=direct_scan(mapped,{0x1d5042c,0x1d50468,0x1d504a8,0x26e7190,0x272cbe0,0x26f9460,0x26fd710,0x2705554,0x2840270,0x28403e0})
    write("direct_refs.json",refs)
    # Source anchors support alias relationships; do not treat this as a runtime snapshot.
    write("embedded_personal_aliases.json",e["embedded"])
    u=vm(mapped,0x8000)
    gr=getters(u,raw,relocs)
    write("backend_getters.json",gr)
    mainrows=[r for r in gr if r["vtable"]==hx(MAIN[0])]
    assert next(r for r in mainrows if r["slot"]==0x10)["field"]==0x10
    assert next(r for r in mainrows if r["slot"]==0x20)["field"]==0x18
    sr=selector(u,relocs)
    write("cloud_selector_tests.json",sr)
    report={"getter_slots":len(gr),"simple_getters_executed":sum(r["executed"] for r in gr),"main_ordinary_slots":mainrows,"cloud_selector_cases":len(sr),"cloud_wrapper_direct_refs":{k:len(v) for k,v in refs.items() if k in ["01D5042C","01D50468","01D504A8"]},"embedded_personal_aliases_source_backed":8,"external_personal_sync_verified":False,"cloud_disk_mapping_verified":False,"runtime_verified":False,"real_save_samples":0}
    write("report.json",report)
    print(json.dumps(report,indent=2))
if __name__=="__main__":main()
