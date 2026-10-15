#!/usr/bin/env python3
"""R28: choose ONLY previously unmeasured original Model/Layout/BARS resources.

Uses complete Git tree for a single original category; prior R19 media and BARS
audits are exclusive; selection ordered by SHA256(full original Git path).
"""
from __future__ import annotations
import argparse,gzip,hashlib,json,subprocess
from pathlib import Path
from acnh303_round19_select import excluded as r18_excluded
NCA="e10617820db06889e1638499478da0de_NCA"
BASE=Path("derived/3.0.3")
EXPECTED={("Model",".zs"):58338,("Layout",".zs"):348,("Sound",".bars"):1288}
R19_MEDIA=BASE/"media_round19_cumulative/source_manifest.jsonl.gz"
R19_BARS=BASE/"bars_round19_cumulative/source_manifest.jsonl.gz"
BW="acnh303-BARS-BWAV-real-PCM-v1"
DELTA=BASE/"r27_cumulative/source_delta.jsonl.gz"

def iterrows(path):
    with gzip.open(path,"rt",encoding="utf8") as f:
        for line in f:
            if line.strip():yield json.loads(line)

def exclude(category,suffix):
    delta=list(iterrows(DELTA))
    if len(delta)!=40 or len({d["source_path"] for d in delta})!=40:
        raise ValueError("R27 SHA/path delta incomplete; must not reselect prior sources")
    delta_paths={d["source_path"] for d in delta if d["category"]==("BARS" if category=="Sound" else category)}
    expected_delta={"Model":16,"Layout":12,"Sound":12}[category]
    if len(delta_paths)!=expected_delta or not all(len(d["source_sha256"])==64 for d in delta):
        raise ValueError("R27 category/SHA source identities inconsistent")
    if category=="Sound":
        prior=r18_excluded(category,suffix)
        current=list(iterrows(R19_BARS))
        fresh={v["source_path"] for v in current if v.get("source_type")==BW}
        if len(current)!=160 or len(fresh)!=80 or prior&fresh:
            raise ValueError("R19 BARS history incomplete or overlapping")
        full=prior|fresh
        if len(full)!=396 or full&delta_paths:raise ValueError("unexpected cumulative BARS or R27 collision")
        return full|delta_paths
    rows=list(iterrows(R19_MEDIA))
    seen={r["source_path"] for r in rows}
    if len(rows)!=3558 or len(seen)!=3558:
        raise ValueError("R19 media census incomplete or overlapping")
    if seen&delta_paths:raise ValueError("R27 core originals overlap R19")
    return seen|delta_paths

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
        raise ValueError(f"R19 baseline count mismatch: {category} {len(allpaths)}")
    allpaths.sort(key=lambda x:(hashlib.sha256(x.encode()).digest(),x))
    pick=allpaths[:shards*count]
    selected=pick[shard::shards]
    if len(selected)!=count or len(set(selected))!=count:
        raise ValueError("shard is missing sources")
    if checkout:
        specs=["/scripts/","/derived/"]+["/"+p for p in selected]
        subprocess.run(["git","sparse-checkout","set","--no-cone","--stdin"],
          input=("\n".join(specs)+"\n").encode(),check=True)
    return {"schema":"acnh303-r28-sha-dedup-selection-v1",
        "category":category,"suffix":suffix,"shard":shard,"shards":shards,
        "selected_files":len(selected),"paths":selected,
        "remaining_before_r28":len(allpaths),"excluded_r19_baseline":len(excluded),
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
    print("R28 SELECT",a.category,a.shard,len(result["paths"]),result["remaining_before_r28"])

if __name__=="__main__":main()
