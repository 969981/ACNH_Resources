#!/usr/bin/env python3
"""Join consecutive Ghidra P-code batches, validating catalog and coverage."""
import argparse,hashlib,json,shutil
from pathlib import Path
def load(p):return json.loads(p.read_text(encoding="utf-8"))
def digest(p):
    h=hashlib.sha256()
    with p.open("rb") as f:
        for b in iter(lambda:f.read(1024*1024),b""):h.update(b)
    return h.hexdigest()
def combine(first,tail,out):
    a,b=[load(x/"summary.json") for x in (first,tail)]
    for k in ("function_count","seeds","resolved_seeds","unresolved_seeds","selected_functions","image_base"):
        if a[k]!=b[k]:raise ValueError("catalog mismatch: "+k)
    if a.get("start_index",0)!=0 or b["start_index"]!=a["attempted"] or a["attempted"]+b["attempted"]!=a["selected_functions"]:
        raise ValueError("batch coverage mismatch")
    out.mkdir(parents=True,exist_ok=True)
    for name in ("function_bodies.ndjson","seed_owners.ndjson"):
        if digest(first/name)!=digest(tail/name):raise ValueError("catalog hash mismatch "+name)
        shutil.copyfile(first/name,out/name)
    seen=set();ok=failed=0
    with (out/"high_pcode.ndjson").open("w",encoding="utf-8") as dst:
        for batch,s in ((first,a),(tail,b)):
            count=0
            with (batch/"high_pcode.ndjson").open(encoding="utf-8") as src:
                for line in src:
                    f=json.loads(line);e=f["entry"]
                    if e in seen:raise ValueError("duplicate P-code function "+e)
                    seen.add(e);count+=1;ok+=f["status"]=="ok";failed+=f["status"]!="ok"
                    dst.write(line.rstrip("\n")+"\n")
            if count!=s["attempted"]:raise ValueError("record count mismatch")
    s={**a,"start_index":0,"attempted":len(seen),"ok":ok,"failed":failed,"batch_count":2}
    if ok!=a["ok"]+b["ok"] or failed!=a["failed"]+b["failed"]:raise ValueError("status mismatch")
    (out/"summary.json").write_text(json.dumps(s,indent=2)+"\n",encoding="utf-8")
    print(json.dumps(s,indent=2))
if __name__=="__main__":
    p=argparse.ArgumentParser();p.add_argument("first",type=Path);p.add_argument("tail",type=Path);p.add_argument("out",type=Path);a=p.parse_args();combine(a.first,a.tail,a.out)
