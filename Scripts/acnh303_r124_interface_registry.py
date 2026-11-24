#!/usr/bin/env python3
"""R124: offline interface registry semantics and bounded native instruction evidence."""
import argparse,hashlib,json,struct
from pathlib import Path
from capstone import Cs,CS_ARCH_ARM64,CS_MODE_ARM
from unicorn.arm64_const import UC_ARM64_REG_X0,UC_ARM64_REG_X2
import acnh303_r100_nso_decode as dec
from acnh303_r120_native_save import vm,invoke,load_archive,direct_scan,BUF,S,hx
from acnh303_r122_backend_abi import p64,q64
from acnh303_r123_cloud_interface import page_candidates
BASE=Path("derived/3.0.3/npc_event_flags/r124_interface_registry")
def window(raw,lo,hi):
    cs=Cs(CS_ARCH_ARM64,CS_MODE_ARM)
    return [{"va":hx(i.address),"bytes":i.bytes.hex(),"op":i.mnemonic,"args":i.op_str} for i in cs.disasm(raw(lo-S,hi-lo),lo)]
def registry_tests(mapped):
    u=vm(mapped,0x4000)
    obj=BUF+0x1000
    rows=[]
    # Registry +8..+B8: remove all matching entries, preserve all other bytes.
    for mask in [0,(1<<23)-1,0x555555,0x2aaaaa]+[1<<i for i in range(23)]:
        data=bytearray([0x5a]*0x200)
        for i in range(23):
            struct.pack_into("<Q",data,8+i*8,obj if mask&(1<<i) else obj+0x100+i*8)
        expected=bytearray(data)
        for i in range(23):
            if mask&(1<<i):struct.pack_into("<Q",expected,8+i*8,0)
        u.mem_write(BUF,bytes(data))
        invoke(u,0x1c82cb0,BUF,obj,count=1000)
        assert bytes(u.mem_read(BUF,len(data)))==expected,(mask,"unregister")
        rows.append({"case":"unregister","mask":mask,"removed":mask.bit_count()})
    # Early queue rejection; no SDK or peer-session calls are simulated.
    for kind in range(25):
        for reason in ("unregistered","busy"):
            u.mem_write(BUF,bytes(0x300))
            slot=8+8*(kind if kind<=22 else 0)
            if reason=="busy":
                p64(u,BUF+slot,obj)
                u.mem_write(BUF+0xc0,struct.pack("<I",1))
            before=bytes(u.mem_read(BUF,0x300))
            u.reg_write(UC_ARM64_REG_X2,kind)
            invoke(u,0x1c84918,BUF,BUF+0x2000,count=1000)
            assert u.reg_read(UC_ARM64_REG_X0)==0,(kind,reason)
            assert bytes(u.mem_read(BUF,0x300))==before
            rows.append({"case":"queue_reject","kind":kind,"reason":reason,"result":0})
    return rows
def main():
    p=argparse.ArgumentParser()
    p.add_argument("--root",type=Path,default=Path("."))
    p.add_argument("--r123",type=Path,required=True)
    p.add_argument("--out",type=Path,required=True)
    a=p.parse_args()
    prior,=load_archive(a.r123,"e80ffecaa5836842a7f1996b421202c390b979541c1a6641033463b1eef3f39c",["report.json"])
    assert prior["identity_iterator_cases"]==1026
    e=json.loads((a.root/BASE/"evidence.json").read_text())
    for r in e["sources"]:
        b=(a.root/r["path"]).read_bytes()
        assert hashlib.sha1(("blob %d"%len(b)).encode()+b"\0"+b).hexdigest()==r["sha"]
    elf,nso,mapped,segments,raw,tags,relocs=dec.decode(a.root)
    a.out.mkdir(parents=True,exist_ok=True)
    def write(n,v):(a.out/n).write_text(json.dumps(v,indent=2)+"\n")
    windows={}
    for name,lo,hi in [("registration",0x1d41a90,0x1d41b18),("submission",0x1d80744,0x1d807cc),("queue",0x1c84918,0x1c84c50),("unregister",0x1c82cb0,0x1c82e80),("descriptor_callback",0x1d505f8,0x1d50650)]:
        windows[name]=window(raw,lo,hi)
    write("native_windows.json",windows)
    # Scan full text for direct branches to the known functions.
    refs=direct_scan(mapped,{0x1d805dc,0x1c84918,0x1c82cb0,0x1d505f8,0x2818bc0,0x27ea950,0x2691310})
    write("direct_refs.json",refs)
    # Restore neighboring vtable until first non-relocated slot, not a guessed type name.
    methods=[]
    for addr in range(0x4a596b8,0x4a59800,8):
        r=relocs.get(addr-S)
        if not r or r.get("type")!="RELR":break
        t=r["addend"]+S
        methods.append({"slot":addr-0x4a596b8,"va":hx(addr),"target":hx(t)})
    write("interface_methods.json",methods)
    # Descriptor array addresses for all eight records, and registry global pointer.
    # PC-relative pair candidates are not full def-use or read/write proofs.
    targets={0x4bc1060,0x536d3b8,0x536d3f8}
    for i in range(8):
        for base in [0x536d3b8,0x536d3c0,0x536d3c8,0x536d3d0,0x536d3d8,0x536d3f0,0x536d3f8,0x536d400,0x536d408]:
            targets.add(base+i*0x68)
    cand=page_candidates(mapped,raw,targets)
    write("descriptor_pc_candidates.json",cand)
    tests=registry_tests(mapped)
    write("registry_native_tests.json",tests)
    report={"interface_contiguous_relr_slots":len(methods),"first_non_relr":hx(0x4a596b8+8*len(methods)),"registry_unregistration_cases":sum(x["case"]=="unregister" for x in tests),"queue_rejection_cases":sum(x["case"]=="queue_reject" for x in tests),"pc_relative_candidates":len(cand),"native_windows":len(windows),"queue_acceptance_executed":False,"ready_consumer_verified":False,"cloud_disk_mapping_verified":False,"runtime_verified":False,"real_save_samples":0}
    write("report.json",report)
    print(json.dumps(report,indent=2))
if __name__=="__main__":main()
