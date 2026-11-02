#!/usr/bin/env python3
"""R18 original-only, SHA-based, diversity-sampled 3-way L3 source selector.

R17 media source identities are immutable; BARS excludes all five audited phases.
Selection counts are intentions, not conversions or data-quality claims.
"""
from __future__ import annotations
import argparse
import gzip
import hashlib
import json
import subprocess
from pathlib import Path

NCA="e10617820db06889e1638499478da0de_NCA"
ROOT=Path("derived/3.0.3")
BARS_TYPE="acnh303-BARS-BWAV-real-PCM-v1"
CHOICES={("Model",".zs"):59466,("Layout",".zs"):528,("Sound",".bars"):1480}

def rows(path):
    with gzip.open(path,"rt",encoding="utf-8") as f:
        for line in f:
            if line.strip():
                yield json.loads(line)

def excluded(category,suffix):
    if suffix!=".bars":
        old=list(rows(ROOT/"media_round17_cumulative/source_manifest.jsonl.gz"))
        paths={r["source_path"] for r in old}
        if len(old)!=2278 or len(paths)!=2278:
            raise ValueError("R17 cumulative core media manifest is incomplete/duplicated")
        return paths
    r8=json.loads((ROOT/"bars_audio_round8/report.json").read_text("utf-8"))
    groups=[
        {r["source_path"] for r in r8["records"]},
        {r["source_path"] for r in rows(ROOT/"round9_cumulative/source_manifest.jsonl.gz")
         if r.get("source_type")==BARS_TYPE},
        {r["source_path"] for r in rows(ROOT/"bars_round10_cumulative/source_manifest.jsonl.gz")
         if r.get("source_type")==BARS_TYPE},
        {r["source_path"] for r in rows(ROOT/"bars_round14_cumulative/source_manifest.jsonl.gz")
         if r.get("source_type")==BARS_TYPE},
        {r["source_path"] for r in rows(ROOT/"bars_round16_cumulative/source_manifest.jsonl.gz")
         if r.get("source_type")==BARS_TYPE},
        {r["source_path"] for r in rows(ROOT/"bars_round17_cumulative/source_manifest.jsonl.gz")
         if r.get("source_type")==BARS_TYPE},
    ]
    if list(map(len,groups))!=[8,32,64,16,36,60]:
        raise ValueError("BARS R8/9/10/14/16/17 audit history mismatch")
    paths=set().union(*groups)
    if len(paths)!=216:
        raise ValueError("historical BARS overlap or inventory conflict")
    return paths

def choose(category,suffix,shard,shards,per_shard,checkout=True):
    if (category,suffix) not in CHOICES or shards<=0 or not 0<=shard<shards or not 1<=per_shard<=100:
        raise ValueError("unsupported category/suffix/shard/limit")
    skip=excluded(category,suffix)
    prefix=f"{NCA}/1/{category}/"
    blob=subprocess.run(["git","ls-tree","-rz","HEAD","--",prefix],
                        capture_output=True,check=True).stdout
    selected=[]
    for entry in blob.split(b"\0"):
        if not entry:continue
        hdr,rawpath=entry.split(b"\t",1)
        if not hdr.startswith(b"100644 blob "):continue
        if not rawpath.lower().endswith(suffix.encode()):continue
        absolute=rawpath.decode("utf-8")
        if not absolute.startswith(prefix):continue
        relative=absolute[len(NCA)+3:]
        if relative not in skip:selected.append(absolute)
    if len(selected)!=CHOICES[(category,suffix)] or len(set(selected))!=len(selected):
        raise ValueError(f"uncounted/duplicate remaining {category} {suffix} originals: {len(selected)}")
    # SHA ordering avoids filename-prefix bias in BFRES assets, without being random.
    selected.sort(key=lambda name:(hashlib.sha256(name.encode()).digest(),name))
    allpick=selected[:shards*per_shard]
    paths=[name for i,name in enumerate(allpick) if i%shards==shard]
    if len(paths)!=per_shard or len(set(paths))!=len(paths):
        raise ValueError("missing or duplicated R18 shard sources")
    if checkout:
        specs=["/scripts/","/derived/"]+["/"+name for name in paths]
        subprocess.run(["git","sparse-checkout","set","--no-cone","--stdin"],
                       input=("\n".join(specs)+"\n").encode(),check=True)
    return {
        "schema":"acnh303-r18-sha-diverse-unmeasured-v1",
        "category":category,"suffix":suffix,"shard":shard,"shards":shards,
        "selected_files":len(paths),"paths":paths,
        "remaining_before_r18":len(selected),"excluded_prior_tested":len(skip),
        "sampling":"first K SHA256(path)-ordered untested originals, interleaved across shards",
        "status":"source selection, not verified L3 conversion"
    }

def main():
    p=argparse.ArgumentParser()
    p.add_argument("--category",required=True,choices=["Model","Layout","Sound"])
    p.add_argument("--suffix",required=True,choices=[".zs",".bars"])
    p.add_argument("--shard",required=True,type=int)
    p.add_argument("--shards",required=True,type=int)
    p.add_argument("--max-count",required=True,type=int)
    p.add_argument("--no-checkout",action="store_true")
    args=p.parse_args()
    result=choose(args.category,args.suffix,args.shard,args.shards,args.max_count,not args.no_checkout)
    Path("selection.json").write_text(json.dumps(result,ensure_ascii=False,indent=2,sort_keys=True)+"\n","utf-8")
    print("R18 SELECTED",args.category,args.shard,result["selected_files"],"of",result["remaining_before_r18"])

if __name__=="__main__":main()
