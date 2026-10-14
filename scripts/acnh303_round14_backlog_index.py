#!/usr/bin/env python3
"""All 103,400 ACNH source paths with L0-L2 and actual R14 L3 evidence.

An unmeasured L3 path is NOT an L0-L2 failure. A structure-level 'partial'
does NOT imply missing decompression. Outputs are stable SHA/hash metadata.
"""
from __future__ import annotations
import argparse,collections,csv,gzip,hashlib,io,json
from pathlib import Path

NCA="e10617820db06889e1638499478da0de_NCA"
def jl(path):
    with gzip.open(path,"rt",encoding="utf-8") as f:
        for line in f:
            if line.strip():yield json.loads(line)
def reproducible_gzip(path,rows,columns):
    out=io.StringIO(newline="")
    writer=csv.DictWriter(out,fieldnames=columns,lineterminator="\n",extrasaction="ignore")
    writer.writeheader()
    writer.writerows(rows)
    path.parent.mkdir(parents=True,exist_ok=True)
    with path.open("wb") as raw:
        with gzip.GzipFile(fileobj=raw,mode="wb",filename="",mtime=0,compresslevel=9) as gz:
            gz.write(out.getvalue().encode("utf-8"))
def main():
    p=argparse.ArgumentParser()
    p.add_argument("--inventory",type=Path,required=True)
    p.add_argument("--effective",type=Path,required=True)
    p.add_argument("--media",type=Path,required=True)
    p.add_argument("--bars-r8",type=Path,required=True)
    p.add_argument("--bars-r9",type=Path,required=True)
    p.add_argument("--bars-r10",type=Path,required=True)
    p.add_argument("--bars-r14",type=Path,required=True)
    p.add_argument("--out",type=Path,required=True)
    a=p.parse_args()
    with gzip.open(a.inventory,"rt",encoding="utf-8") as f:
        inventory={r["source_relative_path"]:int(r["source_size"]) for r in csv.DictReader(f)}
    status={r["source_path"]:r for r in jl(a.effective)}
    if len(inventory)!=103400 or len(status)!=103400 or set(inventory)!=set(status):
        raise ValueError("RomFS inventory does not exactly match effective per-source manifest")
    media={r["source_path"]:r for r in jl(a.media)}
    if len(media)!=1336:raise ValueError("R14 cumulative unique media source count should be 1336")
    b8=json.loads(a.bars_r8.read_text("utf-8"))
    bars={r["source_path"]:r["status"] for r in b8["records"]}
    for file in (a.bars_r9,a.bars_r10,a.bars_r14):
        for r in jl(file):
            if r.get("source_type")!="acnh303-BARS-BWAV-real-PCM-v1":continue
            name=r["source_path"]
            if name in bars:raise ValueError("same BARS original measured twice: "+name)
            bars[name]=r["status"]
    if len(bars)!=120:raise ValueError("R14 cumulative BARS tested should be 120")
    target={("Model",".zs"):"BFRES geometry/texture",("Layout",".zs"):"BNTX image + UI2D",
            ("Sound",".bwav"):"PCM WAV",("Sound",".bars"):"BARS embedded WAV + AMTA v5"}
    allrows=[]
    unmatched=collections.Counter()
    by_format=collections.defaultdict(lambda:collections.Counter())
    by_l3=collections.Counter()
    for name in sorted(inventory):
        old=status[name]
        if old.get("source_size")!=inventory[name]:
            raise ValueError("size mismatch: "+name)
        group=name.split("/",1)[0]
        ext=(".bars" if name.endswith(".bars") else ".bwav" if name.endswith(".bwav") else ".zs" if name.endswith(".zs") else "other")
        label=target.get((group,ext),"other native/structural")
        if name in media:
            l3state=media[name]["status"]
            l3reason="measured original; outputs validated by type and SHA in native media manifest"
        elif name in bars:
            l3state="native_BARS_"+bars[name]
            l3reason="BARS/AMTA tested in separately audited native audio cohort"
        elif label!="other native/structural":
            l3state="NOT_MEASURED_L3"
            l3reason="candidate media source not present in audited native L3 manifest"
        else:
            l3state="NOT_APPLICABLE_OR_UNVERIFIED"
            l3reason="L0/L1/L2 may exist; format-specific semantic/full-media verification not established here"
        if l3state=="NOT_MEASURED_L3":unmatched[label]+=1
        by_format[group][old["status"]]+=1
        by_l3[l3state]+=1
        row={"source_path":name,"original_bytes":inventory[name],
             "original_sha256":old.get("source_sha256",""),
             "l0_l2_status":old["status"],"l3_target":label,
             "l3_state":l3state,"explanation":l3reason}
        allrows.append(row)
    a.out.mkdir(parents=True,exist_ok=True)
    fields=list(allrows[0])
    reproducible_gzip(a.out/"all_sources_status.csv.gz",allrows,fields)
    undone=[x for x in allrows if x["l0_l2_status"]!="converted" or x["l3_state"] in
            ("NOT_MEASURED_L3","no_target_leaf","partial_media","failed")]
    reproducible_gzip(a.out/"remaining_noncomplete.csv.gz",undone,fields)
    summary={
      "schema":"acnh303-r14-full-romfs-unfinished-path-index-v1",
      "source_inventory_count":len(inventory),
      "l0_l2_full_record_count":len(status),
      "l0_l2_status_counts":dict(collections.Counter(r["l0_l2_status"] for r in allrows)),
      "media_l3_tested_originals":len(media),
      "bars_native_tested_originals":len(bars),
      "not_measured_by_target":dict(sorted(unmatched.items())),
      "l3_state_counts":dict(sorted(by_l3.items())),
      "remaining_noncomplete_rows":len(undone),
      "by_top_level_l0_l2_status":{k:dict(v) for k,v in sorted(by_format.items())},
      "first_20_native_l3_unmeasured_paths":[r["source_path"] for r in allrows if r["l3_state"]=="NOT_MEASURED_L3"][:20],
      "limitations":"NOT_MEASURED_L3 does not mean failed L0-L2 extraction. No ASTC/material/runtime gameplay equivalence is inferred. This manifest joins every source by immutable relative path and size."}
    (a.out/"summary.json").write_text(json.dumps(summary,indent=2,ensure_ascii=False,sort_keys=True)+"\n",encoding="utf-8")
    print("R14_UNFINISHED_INDEX",json.dumps({k:v for k,v in summary.items() if k not in ("by_top_level_l0_l2_status","first_20_native_l3_unmeasured_paths")},ensure_ascii=False),flush=True)
if __name__=="__main__":
    main()
