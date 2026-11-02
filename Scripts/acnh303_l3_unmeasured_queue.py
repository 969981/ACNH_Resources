#!/usr/bin/env python3
"""Inventory remaining original ACNH files by known source extension/category.

This is a priority queue for L3 *unmeasured* candidates, NOT a claim that
their L0/L2 unpack failed or all bytes are unsupported. Nested .zs contents
remain unknown without opening each original, so do not guess their format.
"""
from __future__ import annotations
import argparse
from collections import Counter,defaultdict
import csv,gzip,json
from pathlib import Path
from os.path import basename
TARGET_SUFFIXES=(".bfbs",".prmb",".bnsh",".bnk",".pck",".bars",".bfres",
                 ".bntx",".bflyt",".bflan",".bfcpx",".bwav",".bfevfl",".byml",
                 ".bcsv",".msbt",".zs",".szs",".sarc",".bfsar",".bcstm",".bin")
def classify(path):
    p=path.lower()
    for ext in sorted(TARGET_SUFFIXES,key=len,reverse=True):
        if p.endswith(ext):return ext
    return Path(path).suffix.lower() or "[no extension]"
def main():
    a=argparse.ArgumentParser()
    a.add_argument("--inventory",type=Path,required=True)
    a.add_argument("--media-source-manifest",type=Path,required=True)
    a.add_argument("--out",type=Path,required=True)
    args=a.parse_args()
    tested=set()
    with gzip.open(args.media_source_manifest,"rt",encoding="utf-8") as f:
        for ln in f:
            item=json.loads(ln)
            name=item["source_path"]
            if name in tested:raise ValueError("duplicate cumulative measured source")
            tested.add(name)
    records=Counter();unmeasured=Counter();samples=defaultdict(list);roots=Counter()
    with gzip.open(args.inventory,"rt",encoding="utf-8",newline="") as f:
        for row in csv.DictReader(f):
            name=row["source_relative_path"]
            top=name.split("/",1)[0] if "/" in name else "[root]"
            group=(top,classify(name))
            records[group]+=1
            roots[top]+=1
            if name not in tested:
                unmeasured[group]+=1
                if len(samples[group])<3:samples[group].append(name)
    if sum(records.values())!=103400:raise ValueError("original inventory changed")
    if len(tested)!=1112:raise ValueError("expected 1112 audited L3 media originals")
    a_out=args.out
    a_out.mkdir(parents=True,exist_ok=True)
    with (a_out/"original_format_priority.csv").open("w",newline="",encoding="utf-8") as f:
        w=csv.writer(f);w.writerow(["source_root","original_filename_suffix","inventory_sources",
               "not_yet_in_1112_media_census","sample_original_paths","interpretation"])
        for (top,ext),total in sorted(records.items(),key=lambda x:(-unmeasured[x[0]],x[0])):
            w.writerow([top,ext,total,unmeasured[(top,ext)],"; ".join(samples[(top,ext)]),
              "CANDIDATE_ONLY; filename and root do not prove inner binary payload format or unparsed L0/L2"])
    ranked=[{"source_root":top,"suffix":ext,"original_count":total,
             "unmeasured_by_media_L3_census":unmeasured[(top,ext)],
             "examples":samples[(top,ext)]}
            for (top,ext),total in sorted(records.items(),key=lambda x:(-unmeasured[x[0]],x[0]))]
    target=[r for r in ranked if r["suffix"] in (".bfbs",".prmb",".bnsh",".bnk",".pck",".bars",".bfevfl")]
    out={"schema":"acnh303-l3-unmeasured-original-queue-v8",
         "inventory_original_sources":103400,"audited_media_L3_sources":len(tested),
         "not_in_media_L3_census":103400-len(tested),
         "root_inventory_counts":dict(sorted(roots.items())),
         "source_suffix_ranked":ranked[:100],
         "specialized_native_format_candidates":target,
         "limitations":"Source filenames only. Unmeasured_by_media does NOT mean unextracted at L0/L2; some may have existing structured outputs. .zs hides inner file types."}
    (a_out/"queue.json").write_text(json.dumps(out,ensure_ascii=False,indent=2)+"\n",encoding="utf-8")
    print(json.dumps({k:v for k,v in out.items() if k not in ("source_suffix_ranked","root_inventory_counts")},ensure_ascii=False)[:3300],flush=True)
if __name__=="__main__":main()
