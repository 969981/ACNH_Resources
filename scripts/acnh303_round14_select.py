#!/usr/bin/env python3
"""R14 selection: SHA-backed no-repeat RomFS source shards for L3 unpack.

The exact Git tree supplies candidate names; immutable cumulative manifests
supply exclusions. Sparse checkout fetches ONLY selected original sources.
"""
from __future__ import annotations
import argparse,gzip,hashlib,json,subprocess
from pathlib import Path

NCA="e10617820db06889e1638499478da0de_NCA"
BASE=Path("derived/3.0.3")
CANDIDATES={("Model",".zs"),("Layout",".zs"),("Sound",".bwav"),("Sound",".bars")}
def read_lines(file):
    with gzip.open(file,"rt",encoding="utf-8") as fh:
        for line in fh:
            if line.strip():
                yield json.loads(line)
def baselines():
    media={r["source_path"] for r in read_lines(BASE/"media_round10_cumulative/source_manifest.jsonl.gz")}
    assert len(media)==1224,("bad R10 media baseline",len(media))
    r8=json.loads((BASE/"bars_audio_round8/report.json").read_text("utf-8"))
    b8={r["source_path"] for r in r8["records"]}
    b9={r["source_path"] for r in read_lines(BASE/"round9_cumulative/source_manifest.jsonl.gz")
        if r.get("source_type")=="acnh303-BARS-BWAV-real-PCM-v1"}
    b10={r["source_path"] for r in read_lines(BASE/"bars_round10_cumulative/source_manifest.jsonl.gz")
         if r.get("source_type")=="acnh303-BARS-BWAV-real-PCM-v1"}
    if tuple(map(len,(b8,b9,b10)))!=(8,32,64) or len(b8|b9|b10)!=104:
        raise ValueError("BARS baseline not 104 unique originals")
    return media,b8|b9|b10

def select(category,suffix,shard,shards,limit,checkout=True):
    if (category,suffix) not in CANDIDATES or not 0<=shard<shards or limit<1:
        raise ValueError("invalid category/suffix/shard/limit")
    media,bars=baselines()
    prior=bars if suffix==".bars" else media
    prefix=f"{NCA}/1/{category}/"
    # Root subdirectories are large; recursive listing is required.
    proc=subprocess.run(["git","ls-tree","-rz","HEAD","--",prefix],
                        capture_output=True,check=True)
    candidate=[]
    for item in proc.stdout.split(b"\x00"):
        if not item:continue
        head,raw_path=item.split(b"\t",1)
        if not head.startswith(b"100644 blob "):continue
        path=raw_path.decode("utf-8")
        if not path.startswith(prefix) or not path.lower().endswith(suffix):
            continue
        rel=path[len(NCA)+3:]
        # "path+extension" cannot collide across categories; every path belongs
        # to exactly one hash-shard, independent of batch size and checkout.
        slot=int.from_bytes(hashlib.sha256(raw_path).digest()[:8],"big")%shards
        if slot==shard and rel not in prior:
            candidate.append(path)
    candidate.sort()
    if len(candidate)<limit:raise ValueError(
        f"Insufficient fresh {category}/{suffix} candidates in {shard}/{shards}: {len(candidate)}<{limit}")
    chosen=candidate[:limit]
    if len(set(chosen))!=limit:raise ValueError("selected duplicate")
    if checkout:
        paths=["/scripts/","/derived/"]+["/"+p for p in chosen]
        subprocess.run(["git","sparse-checkout","set","--no-cone","--stdin"],
                       input=("\n".join(paths)+"\n").encode("utf-8"),check=True)
    doc={"schema":"acnh303-r14-immutable-shard-selection-v1","category":category,
         "suffix":suffix,"shard":shard,"shards":shards,"selected_files":limit,
         "max_count":limit,"paths":chosen,"excluded_core_media_r10":len(media),
         "excluded_bars_through_r10":len(bars),
         "selection_rule":"raw Git path SHA256 first eight bytes mod shards; then exclude previously measured originals",
         "claims":"These are selected new original sources, NOT converted results"}
    return doc

def main():
    ap=argparse.ArgumentParser()
    ap.add_argument("--category",choices=["Model","Layout","Sound"],required=True)
    ap.add_argument("--suffix",choices=[".zs",".bwav",".bars"],required=True)
    ap.add_argument("--shard",type=int,required=True)
    ap.add_argument("--shards",type=int,default=4)
    ap.add_argument("--max-count",type=int,required=True)
    ap.add_argument("--out",type=Path,default=Path("selection.json"))
    ap.add_argument("--no-checkout",action="store_true")
    a=ap.parse_args()
    doc=select(a.category,a.suffix,a.shard,a.shards,a.max_count,not a.no_checkout)
    a.out.write_text(json.dumps(doc,indent=2,ensure_ascii=False,sort_keys=True)+"\n","utf-8")
    print("R14_SELECTED",a.category,a.suffix,a.shard,len(doc["paths"]),flush=True)
if __name__=="__main__":
    main()
