#!/usr/bin/env python3
"""Overlay 26 SHA-matched BottomsTex PNG conversions on the 252-source L3 audit.

The previous BFRES->GLB failure report remains historically immutable.
A new effective media coverage record distinguishes GLB geometry exports
from PNG texture-only FRES exports without inventing geometric mesh data.
"""
from __future__ import annotations
from collections import Counter
import csv
import gzip
import json
from pathlib import Path
import argparse

FORMATS={"Model":"bfres","Layout":"bntx","Sound":"bwav"}
MEDIA={"glb","png","wav"}


def main():
    p=argparse.ArgumentParser()
    p.add_argument("--root",type=Path,default=Path("."))
    a=p.parse_args()
    root=a.root
    oldbase=root/"derived/3.0.3/media_scaleout_audit"
    overlaybase=root/"derived/3.0.3/bottomstex_png_batch"
    target=root/"derived/3.0.3/media_bottomstex_corrected"
    source=oldbase/"source_manifest.jsonl.gz"
    old_report=json.loads((oldbase/"coverage.json").read_text("utf-8"))
    with gzip.open(source,"rt",encoding="utf-8") as f:
        rows=[json.loads(line) for line in f if line.strip()]
    originals={}
    for row in rows:
        name=row["source_path"]
        if name in originals:raise ValueError("duplicate historical source "+name)
        originals[name]=row
    if len(originals)!=252:
        raise ValueError(f"Historical unique sources: expected 252 got {len(originals)}")
    new=json.loads((overlaybase/"Model/000-of-001/manifest.json").read_text("utf-8"))
    if len(new)!=26:raise ValueError(f"Expected 26 verified BottomsTex sources, got {len(new)}")
    changed=[]
    for item in new:
        key=item["source_path"]
        if key not in originals or not key.startswith("Model/BottomsTex"):
            raise ValueError("unrecognized source "+key)
        past=originals[key]
        if past["sha256"]!=item["sha256"] or past["source_bytes"]!=item["source_bytes"]:
            raise ValueError("original source SHA or byte size mismatch: "+key)
        if past["status"]!="failed":
            raise ValueError("source had no previously validated native GLB failure: "+key)
        if item["source_media_class"]!="texture_only_fres_bntx" or item["status"]!="converted_media":
            raise ValueError("not a verified texture-only FRES replacement: "+key)
        outputs=item["validated_outputs"]
        if not outputs:raise ValueError("empty media output: "+key)
        for output in outputs:
            v=output["validation"]
            if (v.get("type")!="png" or v.get("pixel_decode")!="Pillow.Image.load"
                or output["size_bytes"]<=0 or len(output["sha256"])!=64):
                raise ValueError("invalid PNG validation record: "+key)
        changed.append(key)
        originals[key]=item
    if len(set(changed))!=26:raise ValueError("not 26 unique changes")

    by_format={}
    media_total=Counter()
    for group in FORMATS:
        original_metadata=old_report["by_format"][group]
        listed=[item for name,item in originals.items() if name.startswith(group+"/")]
        states=Counter(x["status"] for x in listed)
        valid_source=states["converted_media"]+states["partial_media"]
        bytype=Counter()
        bytes_out=0
        for r in listed:
            for o in r["validated_outputs"]:
                typ=o["validation"]["type"]
                if typ not in MEDIA:raise ValueError("unsupported output media type: "+typ)
                if (group=="Sound" and typ!="wav") or (group=="Layout" and typ!="png"):
                    raise ValueError("format group output mismatch")
                if group=="Model" and typ=="png" and r.get("source_media_class")!="texture_only_fres_bntx":
                    raise ValueError("Model PNG missing texture-only FRES proof")
                if group=="Model" and typ not in ("png","glb"):
                    raise ValueError("Model output not GLB/PNG")
                bytype[typ]+=1
                bytes_out+=o["size_bytes"]
        media_total.update(bytype)
        sample_total=original_metadata["candidate_source_count"]
        by_format[group]={
            "candidate_source_count":sample_total,
            "measured_source_count":len(listed),
            "not_yet_measured_sources":sample_total-len(listed),
            "valid_media_source_count":valid_source,
            "measured_source_success_rate":valid_source/len(listed),
            "full_candidate_media_coverage_lower_bound":valid_source/sample_total,
            "unconverted_measured_sources":len(listed)-valid_source,
            "status_counts":dict(sorted(states.items())),
            "verified_media_output_count":sum(bytype.values()),
            "verified_media_output_count_by_type":dict(sorted(bytype.items())),
            "verified_media_output_bytes":bytes_out,
            "error_categories":{},
            "description":"GLB mesh and PNG texture-only FRES count as distinct validated media types; no invented mesh.",
        }
    report={
        "schema":"acnh303-media-l3-corrected-after-texture-only-fres-v1",
        "source_files_audited":len(originals),
        "original_romfs_file_count":old_report["original_romfs_file_count"],
        "baseline_previous_media_output_files":old_report["verified_media_output_files"],
        "resolved_BottomsTex_glb_failures":26,
        "newly_verified_BottomsTex_png_files":media_total["png"]-
                                           old_report["by_format"]["Layout"]["verified_media_output_count"],
        "verified_media_output_files":sum(media_total.values()),
        "verified_media_output_files_by_type":dict(sorted(media_total.items())),
        "verified_media_output_bytes":sum(x["verified_media_output_bytes"] for x in by_format.values()),
        "by_format":by_format,
        "remaining_nonconverted_sampled_sources":sum(x["unconverted_measured_sources"] for x in by_format.values()),
        "limitations":"No new original files audited. 26 meshless FRES converted to PNG, NOT GLB. Model 108/108 denotes either GLB geometry or PNG textures. 28 Layout no BNTX remain no_target_leaf.",
        "original_report":"derived/3.0.3/media_scaleout_audit/coverage.json",
        "original_source_manifest":"derived/3.0.3/media_scaleout_audit/source_manifest.jsonl.gz",
        "texture_only_source_proof":"derived/3.0.3/bottomstex_forensics/fres_preflight.json",
        "replacement_png_manifest":"derived/3.0.3/bottomstex_png_batch/Model/000-of-001/manifest.json",
    }
    if (report["verified_media_output_files"]!=old_report["verified_media_output_files"]+
        sum(len(x["validated_outputs"]) for x in new)):
        raise ValueError("cumulative file count mismatch")
    target.mkdir(parents=True,exist_ok=True)
    (target/"coverage.json").write_text(json.dumps(report,indent=2,ensure_ascii=False,sort_keys=True)+"\n",encoding="utf-8")
    with (target/"source_manifest.jsonl.gz").open("wb") as f:
        with gzip.GzipFile(filename="",fileobj=f,mode="wb",mtime=0,compresslevel=9) as g:
            for key in sorted(originals):
                g.write((json.dumps(originals[key],sort_keys=True,ensure_ascii=False)+"\n").encode())
    with (target/"source_status.csv").open("w",newline="",encoding="utf-8") as f:
        w=csv.writer(f);w.writerow(["source","source_sha256","status","media_class","output_count","output_bytes"])
        for key in sorted(originals):
            r=originals[key]
            w.writerow([key,r["sha256"],r["status"],r.get("source_media_class",""),
                        len(r["validated_outputs"]),sum(x["size_bytes"] for x in r["validated_outputs"])])
    (target/"resolved_sources.json").write_text(json.dumps(sorted(changed),indent=2)+"\n")
    print(json.dumps(report,indent=2,ensure_ascii=False),flush=True)

if __name__=="__main__":main()
