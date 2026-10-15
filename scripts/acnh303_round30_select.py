#!/usr/bin/env python3
"""R30: choose ONLY previously unmeasured original Model/Layout/BARS resources.

Uses complete Git tree for a single original category; prior R19 media and BARS
audits are exclusive; selection ordered by SHA256(full original Git path).
"""
from __future__ import annotations
import argparse,gzip,hashlib,json,subprocess
from pathlib import Path
from acnh303_round19_select import excluded as r18_excluded
NCA="e10617820db06889e1638499478da0de_NCA"
BASE=Path("derived/3.0.3")
EXPECTED={("Model",".zs"):58178,("Layout",".zs"):276,("Sound",".bars"):1216}
R19_MEDIA=BASE/"media_round19_cumulative/source_manifest.jsonl.gz"
R19_BARS=BASE/"bars_round19_cumulative/source_manifest.jsonl.gz"
BW="acnh303-BARS-BWAV-real-PCM-v1"
R27=BASE/"r27_cumulative/source_delta.jsonl.gz"
R28=BASE/"r28_cumulative/source_delta.jsonl.gz"
R29=BASE/"r29_cumulative/source_delta.jsonl.gz"

def iterrows(path):
    with gzip.open(path,"rt",encoding="utf8") as f:
        for line in f:
            if line.strip():yield json.loads(line)

def exclude(category,suffix):
    # Full L3 source exclusions = R19 cumulative + two authenticated deltas.
    deltas=[list(iterrows(R27)),list(iterrows(R28)),list(iterrows(R29))]
    expected=[(40,{"Model":16,"Layout":12,"BARS":12}),
              (224,{"Model":128,"Layout":48,"BARS":48}),
              (80,{"Model":32,"Layout":24,"BARS":24})]
    seen_deltas=set()
    for rows_,(count,mix) in zip(deltas,expected):
        if len(rows_)!=count or len({r["source_path"] for r in rows_})!=count:
            raise ValueError("R27/R28/R29 source delta file missing or repeated")
        for r in rows_:
            if r["source_path"] in seen_deltas or len(r.get("source_sha256",""))!=64:
                raise ValueError("R27/R28 cross-round duplication or missing source digest")
            if r["category"] not in mix:
                raise ValueError("unexpected prior category")
            seen_deltas.add(r["source_path"])
        actual={k:sum(r["category"]==k for r in rows_) for k in mix}
        if actual!=mix:raise ValueError(f"prior category split mismatches: {actual} != {mix}")
    if category=="Sound":
        old=r18_excluded(category,suffix)
        rows_=list(iterrows(R19_BARS))
        fresh={x["source_path"] for x in rows_ if x.get("source_type")==BW}
        if len(rows_)!=160 or len(fresh)!=80 or old&fresh:
            raise ValueError("R19 historic BARS identity failure")
        old|=fresh
        if len(old)!=396 or old&seen_deltas:raise ValueError("cross-round BARS overlap")
        relevant={r["source_path"] for rows_ in deltas for r in rows_ if r["category"]=="BARS"}
        if len(relevant)!=84:raise ValueError("R27/R28 combined BARS delta unexpected")
        return old|relevant
    old_rows=list(iterrows(R19_MEDIA))
    old={r["source_path"] for r in old_rows}
    if len(old_rows)!=3558 or len(old)!=3558:
        raise ValueError("R19 media cumulative identity incomplete")
    if old&seen_deltas:raise ValueError("R27/R28 media collision with R19")
    relevant={r["source_path"] for rows_ in deltas for r in rows_ if r["category"] in ("Model","Layout")}
    if len(relevant)!=260:raise ValueError("R27/R28 combined media delta unexpected")
    return old|relevant

def choose(category,suffix,shard,shards,count,checkout=True):
    if ((category,suffix) not in EXPECTED or not 0<=shard<shards or
        shards<1 or count<1 or count>20):
        raise ValueError("invalid category/shard/limit")
    excluded=exclude(category,suffix)
    prefix=f"{NCA}/1/{category}/"
    tree=subprocess.run(["git","ls-tree","-rz","HEAD","--",prefix],
        check=True,capture_output=True).stdout
    allpaths=[]
    for entry in tree.split(b"\0"):
        if not entry:continue
        head,raw=entry.split(b"\t",1)
        if not head.startswith(b"100644 blob "):continue
        path=raw.decode("utf8")
        if not path.lower().endswith(suffix):continue
        if not path.startswith(prefix):raise ValueError("prefix collision")
        rel=path[len(f"{NCA}/1/"):]
        if rel not in excluded:allpaths.append(path)
    if len(allpaths)!=EXPECTED[(category,suffix)] or len(set(allpaths))!=len(allpaths):
        raise ValueError(f"R19+R27+R28+R29 baseline count mismatch: {category} {len(allpaths)}")
    allpaths.sort(key=lambda x:(hashlib.sha256(x.encode()).digest(),x))
    pick=allpaths[:shards*count]
    selected=pick[shard::shards]
    if len(selected)!=count or len(set(selected))!=count:
        raise ValueError("shard is missing sources")
    if checkout:
        specs=["/scripts/","/derived/"]+["/"+p for p in selected]
        subprocess.run(["git","sparse-checkout","set","--no-cone","--stdin"],
          input=("\n".join(specs)+"\n").encode(),check=True)
    return {"schema":"acnh303-r30-sha-dedup-selection-v1",
        "category":category,"suffix":suffix,"shard":shard,"shards":shards,
        "selected_files":len(selected),"paths":selected,
        "remaining_before_r30":len(allpaths),"excluded_r19_r27_r28":len(excluded),
        "status":"selected_not_yet_converted",
        "sampling":"SHA256(full_path) from complete Git tree; first N non-overlapping"}

def main():
    p=argparse.ArgumentParser()
    p.add_argument("--category",required=True,choices=["Model","Layout","Sound"])
    p.add_argument("--suffix",required=True,choices=[".zs",".bars"])
    p.add_argument("--shard",type=int,required=True)
    p.add_argument("--shards",type=int,required=True)
    p.add_argument("--count",type=int,required=True)
    p.add_argument("--no-checkout",action="store_true")
    a=p.parse_args()
    result=choose(a.category,a.suffix,a.shard,a.shards,a.count,not a.no_checkout)
    Path("selection.json").write_text(json.dumps(result,indent=2,sort_keys=True,ensure_ascii=False)+"\n",encoding="utf8")
    print("R30 SELECT",a.category,a.shard,len(result["paths"]),result["remaining_before_r30"])

if __name__=="__main__":main()
