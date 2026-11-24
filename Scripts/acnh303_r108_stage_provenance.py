#!/usr/bin/env python3
"""R108: authenticated artifact-only object provenance audit; no game writes."""
import argparse,collections,hashlib,json,re,sqlite3,tempfile,zipfile
from pathlib import Path
BASE=Path("derived/3.0.3/npc_event_flags/r108_stage_provenance")
SLOT=re.compile(r"x8, \[x8(?:, #0x([0-9a-f]+)|, #(\d+))?\]")
def digest(p):
    return hashlib.sha256(p.read_bytes()).hexdigest()
def verify(root,cfg,reloc,out):
    e=json.loads((root/BASE/"evidence.json").read_text(encoding="utf-8"))
    assert digest(cfg)==e["artifacts"]["cfg"]["sha256"]
    assert digest(reloc)==e["artifacts"]["relocations"]["sha256"]
    with zipfile.ZipFile(cfg) as z:
        s=json.loads(z.read("stage_cfg.json"))
    by={x["va"]:x for x in s["instructions"]}
    groups={v:k for k,vs in e["groups"].items() for v in vs}
    assert sum(map(len,e["groups"].values()))==len(groups)==38
    assert set(groups)==set(s["indirect_sites"])
    rows=[]
    for site in sorted(groups):
        pc=int(site,16)
        p,q=(by[f"{pc-i:08X}"] for i in (4,8))
        m=next((m for x in (p,q) if x["op"]=="ldr" and (m:=SLOT.fullmatch(x["args"]))),None)
        assert m and by[site]["op"]=="blr"
        slot=int(m[1],16) if m[1] else int(m[2]) if m[2] else 0
        strict=p["op"]=="ldr" and SLOT.fullmatch(p["args"]) is not None and q["op"]=="ldr" and q["args"]=="x8, [x0]"
        rows.append({"site":site,"group":groups[site],"slot":slot,"strict_double_ldr":strict,"window":[by[f"{a:08X}"] for a in range(pc-56,pc+4,4) if f"{a:08X}" in by],"runtime_target":None})
    assert sum(r["strict_double_ldr"] for r in rows)==32
    assert collections.Counter(r["slot"] for r in rows)=={0:16,8:1,24:5,32:8,48:1,56:6,96:1}
    for a in e["sources"]:
        p=root/a["path"];b=p.read_bytes()
        assert hashlib.sha1(("blob %d"%len(b)).encode()+b"\0"+b).hexdigest()==a["blob"]
        assert all(x in b.decode("utf-8") for x in a["needles"])
    with tempfile.TemporaryDirectory() as td:
        p=Path(td)/"relocations.sqlite3"
        with zipfile.ZipFile(reloc) as z:
            p.write_bytes(z.read("acnh303_relocations.sqlite3"))
        c=sqlite3.connect(p)
        try:
            assert c.execute("select count(*) from relocations").fetchone()[0]==380793
            def lookup(a):
                return c.execute("select target_ghidra,target_region,table_name from relocations where slot_ghidra=?",(int(a,16),)).fetchone()
            for a,t,kind in e["relocation_roots"]:
                assert lookup(a)==(int(t,16),kind,"RELR")
            for x in e["stack_candidates"]:
                assert lookup(x["relocation_slot"])[0]==int(x["header"],16)
                assert int(x["address_point"],16)==int(x["header"],16)+16
                assert int(x["method_slot"],16)==int(x["address_point"],16)+x["method_offset"]
                assert lookup(x["method_slot"])[0]==int(x["target"],16)
                assert by[x["pointer_load"]]["op"]=="ldr"
                assert by[x["store"]]["op"]=="str" and "[sp, #0x10]" in by[x["store"]]["args"]
                assert next(r for r in rows if r["site"]==x["site"])["slot"]==32
                assert all(by[v]["op"] in ("bl","blr") for v in x["intervening_calls"])
        finally:c.close()
    # The call-site labels are local source-shape classifications; no global type inference.
    report={"classified_sites":len(rows),"group_counts":dict(collections.Counter(groups.values())),"strict_double_ldr":32,"static_candidate_sites":3,"distinct_static_candidate_targets":2,"resolved_runtime_targets":0,"relocation_roots_verified":len(e["relocation_roots"]),"source_blobs_verified":len(e["sources"]),"full_nso_scan_verified":False,"runtime_verified":False}
    out.mkdir(parents=True,exist_ok=True)
    for n,v in [("site_windows.json",rows),("stack_vtable_candidates.json",e["stack_candidates"]),("report.json",report)]:
        (out/n).write_text(json.dumps(v,indent=2,ensure_ascii=False)+"\n",encoding="utf-8")
    print(json.dumps(report,indent=2))
if __name__=="__main__":
    p=argparse.ArgumentParser(description=__doc__);p.add_argument("--root",type=Path,default=Path("."));p.add_argument("--cfg",type=Path,required=True);p.add_argument("--reloc",type=Path,required=True);p.add_argument("--out",type=Path,required=True);a=p.parse_args();verify(a.root,a.cfg,a.reloc,a.out)
