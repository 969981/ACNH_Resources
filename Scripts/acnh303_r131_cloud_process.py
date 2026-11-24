#!/usr/bin/env python3
"""R131: named CloudIslandProcess state registrations and bounded original guard checks."""
import argparse,hashlib,json,struct,re
from pathlib import Path
from unicorn.arm64_const import UC_ARM64_REG_X0
import acnh303_r100_nso_decode as dec
from acnh303_r120_native_save import load_archive,direct_scan,S,hx,vm,invoke,BUF
from acnh303_r124_interface_registry import window
from acnh303_r122_backend_abi import p64,q64
BASE=Path("derived/3.0.3/npc_event_flags/r131_cloud_process")
def guards(mapped):
    u=vm(mapped,0x5000)
    def ensure(a):
        p=a&~0xfff
        if not any(lo<=p and p+0xfff<=hi for lo,hi,_ in u.mem_regions()):u.mem_map(p,0x1000)
    ensure(0x55a1b78);ensure(0x4bb46b0)
    holder=BUF+0x2000
    p64(u,0x4bb46b0,holder);p64(u,holder,0)
    rows=[]
    for old in [0,1,2,3,0xffffffff]:
        data=bytearray([0xa5])*0x310;struct.pack_into("<I",data,0x288,old)
        u.mem_write(BUF,bytes(data))
        invoke(u,0x283cba8,BUF,count=1000)
        assert u.reg_read(UC_ARM64_REG_X0)==0
        struct.pack_into("<I",data,0x288,2)
        assert bytes(u.mem_read(BUF,len(data)))==data
        rows.append({"entry":"0283CBA8","manager_null":True,"prior_state":old,"state":2,"full_buffer_equal":True})
    for ptr in [BUF+0x800,BUF+0x1000,0x1234567890]:
        p64(u,0x55a1b78,ptr)
        invoke(u,0x283c5d0,0,count=1000)
        assert u.reg_read(UC_ARM64_REG_X0)==ptr and q64(u,0x55a1b78)==ptr
        rows.append({"entry":"0283C5D0","existing_singleton":ptr,"returned":ptr})
    return rows
def refs_in_window(rows,addresses):
    # local ADR and adjacent ADRP+ADD anchors; bounded candidates only
    out=[]
    for i,r in enumerate(rows):
        a=r["args"].split(", ")
        if r["op"]=="adr" and len(a)==2:
            try:t=int(a[1].lstrip("#"),16)
            except ValueError:continue
            if t in addresses:out.append({"site":r["va"],"target":hx(t),"kind":"ADR"})
        if r["op"]=="adrp" and len(a)==2:
            try:page=int(a[1].lstrip("#"),16)
            except ValueError:continue
            for n in rows[i+1:i+9]:
                z=n["args"].split(", ")
                if n["op"]=="add" and len(z)==3 and z[1]==a[0]:
                    try:t=page+int(z[2].lstrip("#"),16)
                    except ValueError:break
                    if t in addresses:out.append({"site":r["va"],"add_site":n["va"],"target":hx(t),"kind":"ADRP+ADD"})
                    break
                if z and z[0]==a[0] and n["op"] not in ("str","strb","strh","stp","cmp","tst","cbz","cbnz","tbz","tbnz"):break
    return out
def main():
    p=argparse.ArgumentParser();p.add_argument("--root",type=Path,default=Path("."));p.add_argument("--r130",type=Path,required=True);p.add_argument("--out",type=Path,required=True);a=p.parse_args()
    prior,=load_archive(a.r130,"1905288d9df88b475a301be045bba4885db80572a505c2f99a5ea3e6f49cfb26",["report.json"])
    assert prior["snapshot_cases"]==9
    e=json.loads((a.root/BASE/"evidence.json").read_text())
    for r in e["sources"]:
        b=(a.root/r["path"]).read_bytes();assert hashlib.sha1(("blob %d"%len(b)).encode()+b"\0"+b).hexdigest()==r["sha"],r["path"]
    elf,nso,mapped,segments,raw,tags,relocs=dec.decode(a.root)
    a.out.mkdir(parents=True,exist_ok=True)
    def write(n,v):(a.out/n).write_text(json.dumps(v,indent=2)+"\n")
    ro,blob=mapped[1];names=[]
    for s in e["states"]:
        i=blob.find(s["name"].encode()+b"\0");assert i>=0
        names.append({**s,"name_va":hx(ro+i+S)})
    write("state_names.json",names)
    bounds=[(0x283c5d0,0x283c6a8),(0x283c6a8,0x283cb14),(0x283cba8,0x283cc58),(0x283cc58,0x283cea0),(0x283cea0,0x283d404),(0x2700ee8,0x27010e0)]
    wins={hx(lo):window(raw,lo,hi) for lo,hi in bounds}
    write("native_windows.json",wins)
    keys={int(t,16) for t in e["selector_tables"]}|{int(t,16) for s in e["states"] for t in s["callbacks"]}|{int(s["name_va"],16) for s in names}
    adr=[]
    for k,v in wins.items():
        adr.extend({"window":k,**r} for r in refs_in_window(v,keys))
    write("address_candidates.json",adr)
    offsets=[]
    for k,v in wins.items():
        for r in v:
            if re.search(r"#0x(288|290|298)\]",r["args"]):offsets.append({"window":k,**r})
    write("snapshot_field_candidates.json",offsets)
    targets={0x283c5d0,0x283c6a8,0x283cba8,0x2700ee8,0x26f5738,0x26f5820,0x2701270,0x27014c0,0x28cb2a0,0x26cf750}|{int(t,16) for s in e["states"] for t in s["callbacks"]}
    refs=direct_scan(mapped,targets);write("direct_refs.json",refs)
    tests=guards(mapped);write("guard_tests.json",tests)
    report={"named_states":len(names),"registered_callback_source_entries":15,"native_windows":len(wins),"native_window_instructions":sum(map(len,wins.values())),"address_candidates":len(adr),"snapshot_field_candidates":len(offsets),"native_guard_cases":len(tests),"full_state_machine_executed":False,"cloud_disk_mapping_verified":False,"real_save_samples":0}
    write("report.json",report);print(json.dumps(report,indent=2))
if __name__=="__main__":main()
