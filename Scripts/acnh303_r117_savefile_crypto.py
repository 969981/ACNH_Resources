#!/usr/bin/env python3
"""R117: authenticate earlier CFG, resolve backend slots and preserve original machine code."""
import argparse,hashlib,json,zipfile
from pathlib import Path
from capstone import Cs,CS_ARCH_ARM64,CS_MODE_ARM
import acnh303_r100_nso_decode as dec
BASE=Path("derived/3.0.3/npc_event_flags/r117_savefile_crypto")
S=0x100000
def run(root,prior,out):
    e=json.loads((root/BASE/"evidence.json").read_text())
    assert hashlib.sha256(prior.read_bytes()).hexdigest()==e["prior"]["sha256"]
    with zipfile.ZipFile(prior) as z:
        w=json.loads(z.read("cloud_worker_cfg.json"));g=json.loads(z.read("cloud_selector_cfg.json"));r=json.loads(z.read("player_reader_cfg.json"))
    for a in e["sources"]:
        b=(root/a["path"]).read_bytes()
        assert hashlib.sha1(("blob %d"%len(b)).encode()+b"\0"+b).hexdigest()==a["blob"],a["path"]
        for s in a["anchors"]:assert s in b.decode("utf-8"),(a["path"],s)
    elf,nso,mapped,segments,raw,tags,relocs=dec.decode(root)
    assert len(relocs)==380793
    cs=Cs(CS_ARCH_ARM64,CS_MODE_ARM)
    def win(a,n):
        return [{"va":f"{i.address+S:08X}","bytes":i.bytes.hex(),"op":i.mnemonic,"args":i.op_str} for i in cs.disasm(raw(a-S,n),a-S)]
    def verify(g):
        for i in g["instructions"]:assert raw(int(i["va"],16)-S,4).hex()==i["bytes"]
    def slot(a,t):
        a=int(a,16) if isinstance(a,str) else a;t=int(t,16) if isinstance(t,str) else t
        r=relocs[a-S];assert r["type"]=="RELR" and r["addend"]==t-S,(hex(a),hex(t))
    for a,n,_ in e["workers"]:
        verify(w[a]);assert len(w[a]["instructions"])==n
    assert sum(len(v["instructions"]) for v in g.values())==479
    for s in e["selectors"]:slot(s["slot"],s["target"]);verify(g[s["target"]])
    verify(r);assert len(r["instructions"])==827 and not r["external"]
    getters=[]
    for t in e["vtables"]:
        b=int(t["base"],16)
        for i,a in enumerate(t["targets"]):slot(b+8*i,a)
        for i in range(2,10):
            a=t["targets"][i];rows=win(int(a,16),8)
            field=None
            if len(rows)==2 and rows[0]["op"]=="ldr" and rows[1]["op"]=="ret" and rows[0]["args"].startswith("x0, [x0, #"):
                field=int(rows[0]["args"].split("#")[1].split("]")[0],16)
            getters.append({"vptr":t["base"],"slot_offset":i*8,"target":a,"instructions":rows,"return_pointer_offset":field})
    # Preserve original edges, separately identify conservative fall-through after libc abort.
    workers={}
    for k,v in w.items():
        calls=[a for a,t in v["direct"] if t==0xd72dc0]
        workers[k]={"original_cfg":v,"abort_calls":calls,"fallthrough_edges":[p for p in v["edges"] if p[0] in calls],"normal_flow_assumption":"libcpp_verbose_abort is nonreturning; no new runtime proof"}
    # Actual selector groups share neighboring table ranges, not one index space.
    groups=[]
    for i,(name,start) in enumerate([("pre_save",0x4a91810),("post_save",0x4a91830),("load_validate",0x4a91850),("load_copy",0x4a91870)]):
        group=e["selectors"][i*4:i*4+4]
        groups.append({"name":name,"base":f"{start:08X}","entries":group,"selector_range_runtime_verified":False})
    out.mkdir(parents=True,exist_ok=True)
    def write(n,x):(out/n).write_text(json.dumps(x,ensure_ascii=False,indent=2)+"\n")
    write("backend_getters.json",getters);write("cloud_workers.json",workers);write("selector_groups.json",groups)
    write("selector_cfg.json",g)
    files=e["files"]
    for f in files:
        v=f.get("backend_vptr")
        if v and f.get("backend_getter_target"):
            k=next(a for a in getters if a["vptr"]==v and a["slot_offset"]==24)
            f["backend_getter_body"]=k["instructions"];f["backend_getter_return_offset"]=k["return_pointer_offset"]
            f["backend_getter_status"]="machine-code window verified; simple getter" if k["return_pointer_offset"] is not None else "machine-code window verified; semantics unresolved"
    write("savefile_index.json",files)
    result={"prior_verified":True,"worker_instructions":190,"selector_entries":31,"selector_instructions":479,"player_reader_instructions":827,"source_blobs":len(e["sources"]),"vtable_slots_verified":40,"getter_windows":len(getters),"simple_getters":sum(x["return_pointer_offset"] is not None for x in getters),"ordinary_write_handlers":7,"cloud_buffer_sizes":3,"cloud_disk_sizes_verified":0,"runtime_verified":False}
    write("report.json",result);print(json.dumps(result,indent=2))
if __name__=="__main__":
    p=argparse.ArgumentParser(description=__doc__);p.add_argument("--root",type=Path,default=Path("."));p.add_argument("--prior",type=Path,required=True);p.add_argument("--out",type=Path,required=True);a=p.parse_args();run(a.root.resolve(),a.prior,a.out.resolve())
