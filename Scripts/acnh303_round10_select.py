#!/usr/bin/env python3
"""Select never-tested ACNH 3.0.3 originals directly from immutable Git tree.

Reject overlaps with *both* round 8 core media L3 and round 8/9 BARS.
Stable SHA-256 modulo sharding, no blob-size enumeration in partial clones.
"""
from __future__ import annotations
import argparse,gzip,hashlib,json,subprocess
from pathlib import Path

NCA="e10617820db06889e1638499478da0de_NCA"
ROOT=Path("derived/3.0.3")

def skip_sources():
    with gzip.open(ROOT/"media_round8_cumulative/source_manifest.jsonl.gz","rt",encoding="utf-8") as f:
        media={json.loads(line)["source_path"] for line in f if line.strip()}
    if len(media)!=1112: raise ValueError(f"round8 baseline requires 1112 distinct sources, got {len(media)}")
    bars_report=json.loads((ROOT/"bars_audio_round8/report.json").read_text("utf-8"))
    older={r["source_path"] for r in bars_report["records"]}
    if len(older)!=8: raise ValueError("round8 BARS baseline not 8")
    with gzip.open(ROOT/"round9_cumulative/source_manifest.jsonl.gz","rt",encoding="utf-8") as f:
        r9=[json.loads(line) for line in f if line.strip()]
    next_bars=[r["source_path"] for r in r9 if r["source_type"]=="acnh303-BARS-BWAV-real-PCM-v1"]
    if len(next_bars)!=32 or len(set(next_bars))!=32 or older.intersection(next_bars):
        raise ValueError("round9 BARS baseline not 32 unique nonoverlapping originals")
    return media,older|set(next_bars)

def choose(group,suffix,shard,total,max_count,select_from):
    media,bars=skip_sources()
    if group=="Sound" and suffix==".bars":prior=bars
    elif (group,suffix) in (("Layout",".zs"),("Sound",".bwav")):prior=media
    else:raise ValueError("expected Layout .zs / Sound .bwav / Sound .bars")
    pref=f"{NCA}/1/{group}/"
    raw=subprocess.check_output(["git","ls-tree","-rz","HEAD","--",pref])
    found=[]
    for record in raw.split(b"\x00"):
        if not record:continue
        _,binary=record.split(b"\t",1)
        path=binary.decode("utf-8")
        if not path.lower().endswith(suffix):continue
        bucket=int.from_bytes(hashlib.sha256(binary).digest()[:8],"big")%total
        if bucket!=shard:continue
        relative=path[len(f"{NCA}/1/"):]
        if relative not in prior:found.append(path)
    found.sort()
    chosen=found[:max_count]
    if len(chosen)!=max_count:
        raise ValueError(f"not enough never-measured sources: {group}/{suffix}/{shard} {len(chosen)}/{max_count}")
    if len(set(chosen))!=len(chosen):
        raise ValueError("duplicate source in same selection")
    patterns=["/scripts/","/derived/"]+["/"+s for s in chosen]
    subprocess.run(["git","sparse-checkout","set","--no-cone","--stdin"],
                   input=("\n".join(patterns)+"\n").encode("utf-8"),check=True)
    result={"schema":"acnh303-r10-baseline-exclusion-v1",
            "category":group,"suffix":suffix,"shard":shard,"shards":total,
            "selected_files":len(chosen),"max_count":max_count,"paths":chosen,
            "excluded_original_media_r8":len(media),"excluded_original_bars_through_r9":len(bars),
            "selection_rule":"SHA256(raw Git path bytes) first eight bytes modulo shards; exclude baseline relative paths before cap",
            "source_scope":"NOT whole RomFS completion; candidate native L3 sources only"}
    Path("selection.json").write_text(json.dumps(result,indent=2,ensure_ascii=False)+"\n",encoding="utf-8")
    print("R10_SELECTION",json.dumps(result,ensure_ascii=False),flush=True)
    return result

def main():
    p=argparse.ArgumentParser()
    p.add_argument("--category",choices=("Layout","Sound"),required=True)
    p.add_argument("--suffix",choices=(".zs",".bwav",".bars"),required=True)
    p.add_argument("--shard",type=int,required=True)
    p.add_argument("--shards",type=int,default=8)
    p.add_argument("--max-count",type=int,required=True)
    a=p.parse_args()
    if a.shards<1 or not 0<=a.shard<a.shards or a.max_count<1:
        p.error("invalid shard values")
    choose(a.category,a.suffix,a.shard,a.shards,a.max_count,"")

if __name__=="__main__":main()
