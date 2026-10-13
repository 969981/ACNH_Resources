#!/usr/bin/env python3
"""Merge new *nonoverlapping* L3 media shards with previous corrected 252-source audit.

This is an incremental media audit, not a claim that all L0-L2 sources are
converted. Raw source paths/sizes are rechecked against immutable 103400-file
tree inventory; SHA metadata and proven PNG/GLB/WAV output types are enforced.
"""
from __future__ import annotations
import argparse
from collections import Counter, defaultdict
import csv
import gzip
import json
from pathlib import Path

GROUPS={"Model":("bfres",".zs"),"Layout":("bntx",".zs"),"Sound":("bwav",".bwav")}
ALLOWED_STATES={"converted_media","partial_media","no_target_leaf","failed"}

def read_gz(path):
    with gzip.open(path,"rt",encoding="utf-8") as f:
        return [json.loads(l) for l in f if l.strip()]

def validate_row(row, group, candidates):
    name=row["source_path"]
    if (name not in candidates[group] or row["source_bytes"]!=candidates[group][name]
            or row["format"]!=GROUPS[group][0] or row["status"] not in ALLOWED_STATES):
        raise ValueError("invalid source path, format, state or source size: "+name)
    digest=row.get("sha256","")
    if len(digest)!=64 or any(c not in "0123456789abcdef" for c in digest):
        raise ValueError("missing source SHA256: "+name)
    outs=row.get("validated_outputs",[])
    if row["status"] in ("converted_media","partial_media") and not outs:
        raise ValueError("claimed conversion has no real verified outputs: "+name)
    if row["status"] in ("no_target_leaf","failed") and outs:
        raise ValueError("unconverted source unexpectedly has outputs: "+name)
    for item in outs:
        typ=item.get("validation",{}).get("type")
        if typ not in ("glb","png","wav"):
            raise ValueError("unvalidated media: "+name)
        if group=="Sound" and typ!="wav" or group=="Layout" and typ!="png":
            raise ValueError("wrong kind of media: "+name)
        if group=="Model":
            if typ=="png":
                if (row.get("source_media_class")!="texture_only_fres_bntx"
                        or item["validation"].get("pixel_decode")!="Pillow.Image.load"):
                    raise ValueError("Model PNG lacks texture-only FRES raster proof: "+name)
            elif typ!="glb":
                raise ValueError("Model output not GLB or proven PNG: "+name)
        if item.get("size_bytes",0)<1 or len(item.get("sha256",""))!=64:
            raise ValueError("missing output bytes/hash: "+name)
    return name

def main():
    p=argparse.ArgumentParser()
    p.add_argument("--inventory",type=Path,required=True)
    p.add_argument("--baseline",type=Path,required=True)
    p.add_argument("--new-reports",type=Path,required=True)
    p.add_argument("--expected-new-shards",type=int,required=True)
    p.add_argument("--out",type=Path,required=True)
    a=p.parse_args()
    with gzip.open(a.inventory,"rt",encoding="utf-8",newline="") as f:
        inventory={r["source_relative_path"]:int(r["source_size"]) for r in csv.DictReader(f)}
    if len(inventory)!=103400:raise ValueError(f"unexpected original count {len(inventory)}")
    candidate={g:{path:size for path,size in inventory.items()
              if path.startswith(g+"/") and path.lower().endswith(sfx)}
               for g,(_,sfx) in GROUPS.items()}
    rows={}
    for row in read_gz(a.baseline):
        name=row["source_path"]
        group=name.split("/",1)[0]
        if group not in candidate or name in rows:raise ValueError("invalid or duplicated baseline: "+name)
        validate_row(row,group,candidate)
        rows[name]=row
    if len(rows)!=252:raise ValueError("baseline must contain precisely 252 unique original source records")
    prior_count=len(rows)
    reports=sorted(a.new_reports.rglob("manifest.json"))
    if len(reports)!=a.expected_new_shards:
        raise ValueError(f"expected {a.expected_new_shards} new shard manifests, got {len(reports)}")
    report_metadata=[]
    new_rows=[]
    for path in reports:
        summary_path=path.with_name("summary.json")
        if not summary_path.is_file():raise ValueError("shard report missing summary: "+str(path))
        s=json.loads(summary_path.read_text("utf-8"))
        group=s["group"]
        if group not in GROUPS or s["target_format"]!=GROUPS[group][0] or s["suffix"]!=GROUPS[group][1]:
            raise ValueError("unexpected media shard format: "+str(path))
        chunk=json.loads(path.read_text("utf-8"))
        if len(chunk)!=s["selected_source_count"] or len(chunk)!=s["actual_source_count"]:
            raise ValueError("selection not exhaustively processed: "+str(path))
        expected_media=sum(len(r["validated_outputs"]) for r in chunk)
        if expected_media!=s["validated_media_files"]:
            raise ValueError("claimed media output count mismatch: "+str(path))
        for item in chunk:
            name=validate_row(item,group,candidate)
            if name in rows:raise ValueError("new shard overlaps previously processed original: "+name)
            rows[name]=item;new_rows.append(item)
        report_metadata.append({"group":group,"shard":s["shard"],"parts":s["total_shards"],
                                "source_count":len(chunk),"validated_media":expected_media})
    result={"schema":"acnh303-l3-media-incremental-v4",
            "original_romfs_file_count":103400,
            "baseline_source_count":prior_count,"new_source_count":len(new_rows),
            "cumulative_source_count":len(rows),"new_shard_count":len(reports),
            "candidate_source_count_total":sum(len(x) for x in candidate.values()),
            "by_format":{},"new_by_format":{},"new_shard_reports":report_metadata,
            "limitations":"L3 only. A converted source may contain PNG without GLB; no_target_leaf never counts as converted. Unmeasured sources do not count as successful."}
    all_outputs=Counter()
    for group in GROUPS:
        old=[r for n,r in rows.items() if n.startswith(group+"/") and n not in {x["source_path"] for x in new_rows}]
        newer=[r for r in new_rows if r["source_path"].startswith(group+"/")]
        data=old+newer
        media=Counter()
        for item in data:
            for o in item.get("validated_outputs",[]):
                media[o["validation"]["type"]]+=1
        statuses=Counter(item["status"] for item in data)
        successful=statuses["converted_media"]+statuses["partial_media"]
        b=len(candidate[group])
        result["by_format"][group]={
            "candidate_source_count":b,"measured_source_count":len(data),
            "not_yet_measured_sources":b-len(data),
            "successful_media_sources":successful,
            "measured_source_success_rate":successful/len(data) if data else None,
            "status_counts":dict(statuses),
            "media_output_count_by_type":dict(media),
            "media_output_count":sum(media.values()),
            "media_output_bytes":sum(o["size_bytes"] for r in data for o in r["validated_outputs"]),
        }
        all_outputs.update(media)
        result["new_by_format"][group]={
            "new_source_count":len(newer),
            "status_counts":dict(Counter(x["status"] for x in newer)),
            "new_media_output_count":sum(len(r["validated_outputs"]) for r in newer)}
    result["verified_media_output_files_by_type"]=dict(all_outputs)
    result["verified_media_output_files"]=sum(all_outputs.values())
    result["verified_media_output_bytes"]=sum(x["media_output_bytes"] for x in result["by_format"].values())
    result["remaining_unconverted_measured_sources"]=sum(
        x["status_counts"].get("no_target_leaf",0)+x["status_counts"].get("failed",0)
        for x in result["by_format"].values())
    a.out.mkdir(parents=True,exist_ok=True)
    (a.out/"coverage.json").write_text(json.dumps(result,indent=2,ensure_ascii=False,sort_keys=True)+"\n","utf-8")
    with (a.out/"source_manifest.jsonl.gz").open("wb") as f:
        with gzip.GzipFile(filename="",fileobj=f,mode="wb",mtime=0,compresslevel=9) as z:
            for name in sorted(rows):
                z.write((json.dumps(rows[name],ensure_ascii=False,sort_keys=True)+"\n").encode())
    with (a.out/"remaining.csv").open("w",newline="",encoding="utf-8") as f:
        w=csv.writer(f)
        w.writerow(["source_path","media_class","state","source_sha256","member","reason"])
        for name,row in sorted(rows.items()):
            if row["status"] in ("converted_media",):continue
            problems=row.get("parser_errors",[])
            if not problems:problems=[{"member":"","error":"no_target_leaf"}]
            for e in problems:
                w.writerow([name,row.get("source_media_class",""),row["status"],
                            row["sha256"],e.get("member",""),e.get("error","")])
    with (a.out/"media_index.csv").open("w",newline="",encoding="utf-8") as f:
        w=csv.writer(f)
        w.writerow(["source_path","source_sha256","media_type","output_sha256","output_size","output_path"])
        for name,row in sorted(rows.items()):
            for o in row["validated_outputs"]:
                w.writerow([name,row["sha256"],o["validation"]["type"],
                            o["sha256"],o["size_bytes"],o["path"]])
    print(json.dumps({k:v for k,v in result.items() if k!="new_shard_reports"},ensure_ascii=False,indent=2),flush=True)
    return 0

if __name__=="__main__":raise SystemExit(main())
