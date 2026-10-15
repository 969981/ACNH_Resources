#!/usr/bin/env python3
"""Materialize every genuinely untested R34-after source path, no guesses.

R19 media + R8-R19 BARS + real R27-R34 source SHA deltas are exclusion
evidence; scanned paths from the authoritative 103,400-row original RomFS.
Provides (1) exact remaining names, (2) tested/no target names separately,
(3) status totals by category and audit provenance.
"""
from __future__ import annotations
import argparse,csv,gzip,hashlib,json
from collections import Counter
from pathlib import Path
from acnh303_round34_select import BASE,EXPECTED,exclude,iterrows,R19_MEDIA
from acnh303_round34_backlog import compute as before_compute
CAT={"Model":(".zs",60166,57938),
     "Layout":(".zs",960,0),
     "Sound":(".bars",1696,928)}
R34=BASE/"r34_cumulative/source_delta.jsonl.gz"

def read_inventory():
    inv={}
    with gzip.open(BASE/"inventory/source_manifest.csv.gz","rt",encoding="utf8",newline="") as fh:
        for record in csv.DictReader(fh):
            path=record["source_relative_path"]
            if path in inv:raise ValueError("original inventory duplicate")
            inv[path]=int(record["source_size"])
    if len(inv)!=103400:raise ValueError("incomplete authoritative 103400 source names")
    return inv

def write_jsonl_gzip(path,rows):
    # gzip with deterministic mtime and stable ordering permits independent SHA.
    with path.open("wb") as output:
        with gzip.GzipFile(fileobj=output,mode="wb",mtime=0,filename="") as g:
            for row in rows:
                g.write((json.dumps(row,ensure_ascii=False,sort_keys=True,separators=(",",":"))+"\n").encode("utf8"))

def run(outdir):
    inventory=read_inventory()
    delta=list(iterrows(R34))
    if len(delta)!=388 or len({r["source_path"] for r in delta})!=388:
        raise ValueError("R34 actual SHA delta missing or duplicated")
    new_by_cat=Counter()
    for r in delta:
        path=r["source_path"]
        category=r["category"]
        if category not in ("Model","Layout","BARS") or path not in inventory:
            raise ValueError("unexpected R34 new source path")
        if len(r["source_sha256"])!=64 or inventory[path]!=r["source_bytes"]:
            raise ValueError("SHA or exact original source byte size unavailable")
        new_by_cat[category]+=1
    if new_by_cat!={"Model":80,"Layout":148,"BARS":160}:
        raise ValueError("R34 original new source category cardinality drift")
    new={r["source_path"] for r in delta}
    pending=[];bycat={}
    for category,(suffix,total,expected_remaining) in CAT.items():
        prior={p for p in exclude(category,suffix) if p.startswith(category+"/")}
        original=[p for p in inventory if p.startswith(category+"/") and p.lower().endswith(suffix)]
        rest=sorted(set(original)-prior-new)
        if len(original)!=total or len(rest)!=expected_remaining:
            raise ValueError(f"post-R34 inventory mismatch {category}: {len(rest)} vs {expected_remaining}")
        tested=total-len(rest)
        key="BARS" if category=="Sound" else category
        bycat[key]={"original_total":total,
          "tested_original_sources":tested,
          "untested_original_sources":len(rest),
          "tested_percent":round(tested/total*100,3),
          "remaining_source_bytes":sum(inventory[p] for p in rest),
          "first20_original_relpaths":rest[:20]}
        pending.extend({"original_relative_path":p,
           "category":key,"source_size_bytes":inventory[p],
           "l3_status":"NOT_TESTED_IN_CORRESPONDING_L3_PIPELINE"}
           for p in rest)
    pending.sort(key=lambda x:x["original_relative_path"])
    if len(pending)!=58866:raise ValueError("missing total target path identities")
    history=list(iterrows(R19_MEDIA))
    hist_count=Counter()
    for label,n in (("r27",40),("r28",224),("r29",80),("r30",48),("r31",40),("r32",88),("r34",240)):
        rr=list(iterrows(BASE/f"{label}_cumulative/source_delta.jsonl.gz"))
        if len(rr)!=n:raise ValueError(label+" history incomplete")
        history.extend(rr)
    no_media=[]
    for r in history:
        if not r["source_path"].startswith(("Model/","Layout/")):continue
        status=r.get("status")
        hist_count[status]+=1
        if status in ("no_target_leaf","failed"):
            no_media.append({"original_relative_path":r["source_path"],
                "category":r.get("category") or r["source_path"].split("/",1)[0],"tested_status":status,
                "source_sha256":r.get("source_sha256",r.get("sha256")),
                "notes":"TESTED_BUT_NO_VERIFIED_CORE_GLTF_PNG; not the same as never unpacked"})
    no_media.sort(key=lambda x:x["original_relative_path"])
    pre=before_compute()
    outdir.mkdir(parents=True,exist_ok=True)
    write_jsonl_gzip(outdir/"untested_after_r34.jsonl.gz",pending)
    write_jsonl_gzip(outdir/"tested_without_valid_core_media.jsonl.gz",no_media)
    result={"schema":"acnh303-r34-actual-untested-path-list-and-status-v1",
      "authoritative_original_inventory":len(inventory),
      "exact_path_manifest_sha256":hashlib.sha256((outdir/"untested_after_r34.jsonl.gz").read_bytes()).hexdigest(),
      "remaining_not_l3_tested_total":len(pending),
      "remaining_by_category":bycat,
      "already_tested_media_statuses":dict(hist_count),
      "already_tested_but_no_core_media":len(no_media),
      "historical_unpacked_non_l3_format_qualification":pre["other_format_status_qualification"],
      "all_romfs_directory_counts":pre["directories"],
      "all_romfs_source_suffix_counts":pre["file_suffix_counts"],
      "paths_gz":"untested_after_r34.jsonl.gz",
      "tested_no_core_media_gz":"tested_without_valid_core_media.jsonl.gz",
      "limits":"Never-tested source list is specific to L3 Model/Layout/BARS. Historical BDLI/EventFlow/etc should not be called unextracted without dedicated audit. No GPU runtime binding inferred."}
    (outdir/"status_after_r34.json").write_text(json.dumps(result,ensure_ascii=False,sort_keys=True,indent=2)+"\n",encoding="utf8")
    print("R34_FULL_UNPACKED_STATUS",json.dumps({k:v for k,v in result.items() if k not in ("all_romfs_directory_counts","all_romfs_source_suffix_counts","historical_unpacked_non_l3_format_qualification")},ensure_ascii=False))
    return result

def main():
    p=argparse.ArgumentParser();p.add_argument("--outdir",type=Path,required=True)
    args=p.parse_args();run(args.outdir)
if __name__=="__main__":main()
