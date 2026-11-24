#!/usr/bin/env python3
"""R130: descriptor tree binding and Cloud backend original relocation evidence."""
import argparse,hashlib,json,struct
from pathlib import Path
from unicorn import UC_HOOK_CODE
from unicorn.arm64_const import UC_ARM64_REG_X0,UC_ARM64_REG_X2,UC_ARM64_REG_X4,UC_ARM64_REG_X30,UC_ARM64_REG_PC
import acnh303_r100_nso_decode as dec
from acnh303_r120_native_save import load_archive,direct_scan,S,hx,vm,invoke,BUF,STOP
from acnh303_r124_interface_registry import window
from acnh303_r122_backend_abi import get_target,p64,q64
BASE=Path("derived/3.0.3/npc_event_flags/r130_cloud_backend")
def bind_tests(mapped):
    u=vm(mapped,0x8000)
    glob=0x555a030;page=glob&~0xfff
    if not any(lo<=page and page+0xfff<=hi for lo,hi,_ in u.mem_regions()):u.mem_map(page,0x1000)
    vt=BUF+0x5000;stub=STOP+0x100;data=BUF+0x6000;ctx=BUF+0x7000
    # Model only the unknown descriptor virtual callback; record exact traversal.
    p64(u,vt+0x10,stub)
    seen=[]
    def callback(uc,addr,size,user):
        seen.append(uc.reg_read(UC_ARM64_REG_X0))
        uc.reg_write(UC_ARM64_REG_PC,uc.reg_read(UC_ARM64_REG_X30))
    u.hook_add(UC_HOOK_CODE,callback,begin=stub,end=stub)
    shapes=[([],[]),([0],[1]),([0,0,0],[1,2,3]),([0,0,1,1,2],[1,2,3,4,5]),([0,1,2,3,4,5,6],[1,2,3,4,5,6,7])]
    rows=[]
    for parents,children in shapes:
        n=len(children)+1
        nodes=[BUF+i*0x100 for i in range(n)]
        adjacency=[[] for _ in nodes]
        for p,c in zip(parents,children):adjacency[p].append(c)
        def dfs(i):return [i]+[x for j in adjacency[i] for x in dfs(j)]
        order=dfs(0)
        for flag in (0,1,2,255):
            for existing in (0,(1<<n)-1,0x55&((1<<n)-1)):
                before=bytearray(n*0x100)
                for i,a in enumerate(nodes):
                    off=i*0x100
                    struct.pack_into("<Q",before,off,vt)
                    if adjacency[i]:struct.pack_into("<Q",before,off+0x18,nodes[adjacency[i][0]])
                    if existing&(1<<i):struct.pack_into("<Q",before,off+0x28,ctx+0x80)
                for siblings in adjacency:
                    for a,b in zip(siblings,siblings[1:]):struct.pack_into("<Q",before,a*0x100+0x20,nodes[b])
                u.mem_write(BUF,bytes(before))
                u.mem_write(glob,struct.pack("<I",7))
                start=len(seen)
                u.reg_write(UC_ARM64_REG_X2,data);u.reg_write(UC_ARM64_REG_X4,flag)
                invoke(u,0x2640070,BUF,0,count=10000)
                assert seen[start:]==[nodes[i] for i in order]
                expect=bytearray(before)
                for i in order:
                    struct.pack_into("<Q",expect,i*0x100+8,data)
                    expect[i*0x100+0x30]=flag if i==0 else flag&1
                assert bytes(u.mem_read(BUF,len(expect)))==expect,("data",n,flag)
                invoke(u,0x2640130,BUF,ctx,count=10000)
                for i in order:struct.pack_into("<Q",expect,i*0x100+0x28,ctx)
                assert bytes(u.mem_read(BUF,len(expect)))==expect,("context",n,existing)
                assert struct.unpack("<I",u.mem_read(glob,4))[0]==7+existing.bit_count()
                rows.append({"nodes":n,"flag":flag,"existing_context_mask":existing,"visit_order":order,"full_buffer_equal":True,"modeled_virtual_calls":n})
    return rows
def main():
    p=argparse.ArgumentParser();p.add_argument("--root",type=Path,default=Path("."));p.add_argument("--r129",type=Path,required=True);p.add_argument("--out",type=Path,required=True);a=p.parse_args()
    prior,=load_archive(a.r129,"0ec1ebe56bc36241ded64d693d603a0f0792c65b366d8979a2a3d2b1354d1dd1",["report.json"])
    assert prior["profile_mode1_cases"]==80
    e=json.loads((a.root/BASE/"evidence.json").read_text())
    for r in e["sources"]:
        b=(a.root/r["path"]).read_bytes();assert hashlib.sha1(("blob %d"%len(b)).encode()+b"\0"+b).hexdigest()==r["sha"],r["path"]
    elf,nso,mapped,segments,raw,tags,relocs=dec.decode(a.root)
    a.out.mkdir(parents=True,exist_ok=True)
    def write(n,v):(a.out/n).write_text(json.dumps(v,indent=2)+"\n")
    tables=[]
    for c in e["cloud"]:
        for key,slots in [("vtable",range(0,0x50,8)),("tree_vtable",range(0,0x30,8)),("record_vtable",range(0,0x38,8))]:
            v=int(c[key],16)
            for slot in slots:
                r=relocs.get(v+slot-S)
                if r and r.get("type")=="RELR":
                    t=r["addend"]+S
                    tables.append({"kind":c["kind"],"role":key,"vtable":hx(v),"slot":slot,"target":hx(t),"window":window(raw,t,t+0x20)})
    write("cloud_vtables.json",tables)
    callbacks=[]
    for j,base in enumerate([0x4a91810,0x4a91830,0x4a91850,0x4a91870]):
        for i,c in enumerate(e["cloud"],1):
            t=get_target(relocs,base,i*8)
            assert t==int(c[["pre","post","size_entry","copy"][j]],16)
            callbacks.append({"selector":i,"kind":c["kind"],"table":hx(base),"target":hx(t)})
    write("selector_callbacks.json",callbacks)
    wins={hx(lo):window(raw,lo,hi) for lo,hi in [(0x2703290,0x27055b0),(0x283e838,0x283ecc0),(0x2640070,0x2640130),(0x2640130,0x26401a0)]}
    write("native_windows.json",wins)
    targets={0x2703290,0x27052b0,0x26f7430,0x2640070,0x2640130}|{int(c[k],16) for c in e["cloud"] for k in ("init","pre","post","size_entry","copy")}
    refs=direct_scan(mapped,targets);write("direct_refs.json",refs)
    tests=bind_tests(mapped);write("descriptor_binding_tests.json",tests)
    report={"source_anchors":len(e["sources"]),"selector_callbacks":len(callbacks),"relocated_vtable_slots":len(tables),"native_window_instructions":sum(map(len,wins.values())),"descriptor_binding_cases":len(tests),"modeled_virtual_calls":sum(x["modeled_virtual_calls"] for x in tests),"cloud_disk_mapping_verified":False,"cloud_hash_verified":False,"constructor_executed":False,"real_save_samples":0}
    write("report.json",report);print(json.dumps(report,indent=2))
if __name__=="__main__":main()
