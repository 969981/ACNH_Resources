#!/usr/bin/env python3
"""R127: native local guards and static dispatcher inventory; no transport execution."""
import argparse,hashlib,json,struct,random
from pathlib import Path
from unicorn import UC_HOOK_CODE
from unicorn.arm64_const import UC_ARM64_REG_X0,UC_ARM64_REG_X1,UC_ARM64_REG_X2,UC_ARM64_REG_X30,UC_ARM64_REG_PC
import acnh303_r100_nso_decode as dec
from acnh303_r120_native_save import vm,invoke,load_archive,direct_scan,BUF,S,hx
from acnh303_r124_interface_registry import window
BASE=Path("derived/3.0.3/npc_event_flags/r127_streaming_dispatch")
def predicate(mapped):
    u=vm(mapped,0x2000);rows=[]
    for i in range(-1,32):
        for v in [1,0x8000000000000000,0xffffffffffffffff]:
            data=bytearray(0x700)
            if i>=0:struct.pack_into("<Q",data,0x538+i*8,v)
            u.mem_write(BUF,bytes(data))
            invoke(u,0x2aed20,BUF,count=300)
            got=u.reg_read(UC_ARM64_REG_X0)
            assert got==int(i>=0)
            assert bytes(u.mem_read(BUF,len(data)))==data
            rows.append({"position":i,"value":v,"nonempty":bool(got)})
    return rows
def local_guards(mapped):
    u=vm(mapped,0x3000);rows=[];calls=[]
    rng=random.Random(127)
    def modeled_memset(uc,addr,size,user):
        d=uc.reg_read(UC_ARM64_REG_X0);v=uc.reg_read(UC_ARM64_REG_X1);n=uc.reg_read(UC_ARM64_REG_X2)
        assert (d,v,n)==(BUF+0x94,0xff,0x20)
        uc.mem_write(d,bytes([v])*n);calls.append((d,v,n))
        uc.reg_write(UC_ARM64_REG_PC,uc.reg_read(UC_ARM64_REG_X30))
    u.hook_add(UC_HOOK_CODE,modeled_memset,begin=0x4004450,end=0x4004450)
    def deny(uc,addr,size,user):raise AssertionError("entered nonlocal processing: "+hex(addr))
    for addr in [0x2b6a20,0x2b6d6c,0x2ace50,0x2b767c,0x2b1020,0x2b1480,0x2b1944]:
        u.hook_add(UC_HOOK_CODE,deny,begin=addr,end=addr)
    for state in range(14):
        for reason in ["null_session","null_identity","empty_session_records"]:
            data=bytearray(rng.randbytes(0x140))
            struct.pack_into("<I",data,0x78,state)
            struct.pack_into("<Q",data,0x70,0 if reason=="null_session" else BUF+0x1000)
            data[0x2a]=0
            struct.pack_into("<Q",data,0x30,0 if reason=="null_identity" else 1)
            u.mem_write(BUF+0x1000,bytes(0x700))
            for entry in [0x2b5994,0x2b59e4]:
                expected=bytearray(data)
                if entry==0x2b59e4:
                    for off,n,v in [(0x78,4,0),(0xb4,4,0xffffffff),(0x80,8,0),(0x88,8,0),(0x90,4,0),(0xb8,2,0xffff),(0xbc,8,0),(0xc8,8,0),(0xd0,2,0),(0xd2,1,0)]:
                        expected[off:off+n]=v.to_bytes(n,"little")
                    expected[0x94:0xb4]=bytes([255])*32
                u.mem_write(BUF,bytes(data))
                before=len(calls)
                invoke(u,entry,BUF,count=3000)
                actual=bytes(u.mem_read(BUF,len(data)))
                assert actual==expected,(hx(entry),state,reason)
                assert len(calls)-before==int(entry==0x2b59e4)
                rows.append({"entry":hx(entry),"state":state,"reason":reason,"next_state":struct.unpack_from("<I",actual,0x78)[0],"full_buffer_equal":True,"modeled_memset":entry==0x2b59e4})
    assert len(calls)==42
    return rows
def main():
    p=argparse.ArgumentParser();p.add_argument("--root",type=Path,default=Path("."));p.add_argument("--r126",type=Path,required=True);p.add_argument("--out",type=Path,required=True);a=p.parse_args()
    prior,=load_archive(a.r126,"16c2949936c94df3980c6c19924930f6af26b4c2cbcb2da7600f824686316450",["report.json"])
    assert prior["total_cases"]==9300
    e=json.loads((a.root/BASE/"evidence.json").read_text())
    for r in e["sources"]:
        b=(a.root/r["path"]).read_bytes();assert hashlib.sha1(("blob %d"%len(b)).encode()+b"\0"+b).hexdigest()==r["sha"]
    elf,nso,mapped,segments,raw,tags,relocs=dec.decode(a.root)
    a.out.mkdir(parents=True,exist_ok=True)
    def write(n,v):(a.out/n).write_text(json.dumps(v,indent=2)+"\n")
    bounds=[(0x2b5994,0x2b59e4),(0x2b59e4,0x2b6a20),(0x2b6a20,0x2b6d6c),(0x2b6d6c,0x2b6e98),(0x2ace50,0x2aced0)]
    wins={hx(lo):window(raw,lo,hi) for lo,hi in bounds}
    write("native_windows.json",wins)
    refs=direct_scan(mapped,{0x2b5994,0x2b59e4,0x2b6a20,0x2b6d6c,0x2ace50,0x2aed20,0x2b56b4})
    order=[]
    for t in [0x2b59e4,0x2b6a20,0x2b6d6c,0x2ace50]:
        found=[r for r in refs[hx(t)] if 0x2b5994<=int(r["site"],16)<0x2b59e4]
        assert len(found)==1,(hx(t),found)
        order.append({"target":hx(t),**found[0]})
    assert [int(r["site"],16) for r in order]==sorted(int(r["site"],16) for r in order)
    write("dispatch_order.json",order);write("direct_refs.json",refs)
    edges=[]
    for k,rows in wins.items():
        addresses={r["va"] for r in rows}
        for r in rows:
            op=r["op"]
            if op in ("b","bl","br","blr","ret","cbz","cbnz","tbz","tbnz") or op.startswith("b."):
                target=None
                if op not in ("br","blr","ret"):
                    try:target=hx(int(r["args"].split(",")[-1].strip().lstrip("#"),16))
                    except ValueError:pass
                edges.append({"window":k,"site":r["va"],"op":op,"target":target,"within_window":target in addresses})
    write("control_flow_candidates.json",edges)
    pr=predicate(mapped);write("session_predicate_tests.json",pr)
    gr=local_guards(mapped);write("local_guard_tests.json",gr)
    write("state_transitions.json",e["transitions"])
    report={"predicate_cases":len(pr),"guard_cases":len(gr),"total_cases":len(pr)+len(gr),"dispatch_calls_verified":len(order),"transition_records":len(e["transitions"]),"window_instructions":sum(map(len,wins.values())),"control_flow_candidates":len(edges),"modeled_memset_calls":42,"network_executed":False,"full_cfg_verified":False,"cloud_disk_mapping_verified":False,"real_save_samples":0}
    write("report.json",report);print(json.dumps(report,indent=2))
if __name__=="__main__":main()
