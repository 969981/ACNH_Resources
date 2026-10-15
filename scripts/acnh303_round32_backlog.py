#!/usr/bin/env python3
"""R32 outstanding real RomFS inventory, audited L3 statuses and non-media gaps.

An untested SOURCE is different from an unconverted LEAF. Counts from the
full original source_manifest, all immutable historical source deltas, and the
R32 source selector. Do not infer semantic decode from a suffix or magic.
"""
from __future__ import annotations
import argparse,csv,gzip,hashlib,json
from collections import Counter,defaultdict
from pathlib import Path
from acnh303_round32_select import BASE, NCA, EXPECTED, exclude,iterrows,R19_MEDIA,R27,R28,R29,R30,R31

def compute():
    inv=BASE/"inventory/source_manifest.csv.gz"
    allfiles={}
    with gzip.open(inv,"rt",encoding="utf8",newline="") as fh:
        for line in csv.DictReader(fh):
            name=line["source_relative_path"]
            if name in allfiles:raise ValueError("duplicate authoritative original path: "+name)
            allfiles[name]=int(line["source_size"])
    if len(allfiles)!=103400:raise ValueError("authoritative original inventory incomplete")
    base=list(iterrows(R19_MEDIA))
    if len(base)!=3558:raise ValueError("R19 media audit incomplete")
    history=[("R19",base)]
    for label,fp,n in [("R27",R27,40),("R28",R28,224),("R29",R29,80),
                       ("R30",R30,48),("R31",R31,40)]:
        data=list(iterrows(fp))
        if len(data)!=n:raise ValueError(label+" unexpected source delta")
        history.append((label,data))
    sound_r18=__import__("acnh303_round19_select").excluded("Sound",".bars")
    # R8-R18 excludes 316 originals, and R19 additional 80 are in a
    # different sound history file (not in the core 3558 media paths).
    bars_r19={r["source_path"] for r in iterrows(BASE/"bars_round19_cumulative/source_manifest.jsonl.gz")
               if r.get("source_type")=="acnh303-BARS-BWAV-real-PCM-v1"}
    if len(sound_r18)!=316 or len(bars_r19)!=80:
        raise ValueError("historical BARS R8-R19 source audit drift")
    known=set()
    for label,rows in history:
        paths={r["source_path"] for r in rows}
        if len(paths)!=len(rows) or known&paths:
            raise ValueError("historical duplicate source: "+label)
        known|=paths
    if known&sound_r18 or known&bars_r19 or sound_r18&bars_r19:
        raise ValueError("BARS historical overlap")
    bydir=Counter();byext=Counter();source_bytes=Counter()
    for name,size in allfiles.items():
        category=name.split("/",1)[0]
        bydir[category]+=1;source_bytes[category]+=size
        suffix=".bdli.zs" if name.lower().endswith(".bdli.zs") else (
            ".bars" if name.lower().endswith(".bars") else
            ".bwav" if name.lower().endswith(".bwav") else
            ".zs" if name.lower().endswith(".zs") else
            Path(name).suffix.lower() or "[none]")
        byext[suffix]+=1
    targets=[]
    historical_media_status=Counter()
    for label,rows in history:
        for r in rows:
            if r.get("status"):historical_media_status[str(r["status"])]+=1
    for category,suffix,total in [("Model",".zs",60166),
                                  ("Layout",".zs",960),("Sound",".bars",1696)]:
        previous_all=exclude(category,suffix)
        prior={n for n in previous_all if n.startswith(category+"/")}
        candidates=sorted(n for n in allfiles if n.startswith(category+"/") and n.lower().endswith(suffix))
        remaining=[n for n in candidates if n not in prior]
        if len(candidates)!=total or len(remaining)!=EXPECTED[(category,suffix)]:
            raise ValueError(f"category inventory mismatch {category}: {len(candidates)} {len(remaining)}")
        def immediate(name):
            parts=name.split("/")
            return parts[1] if len(parts)>2 else "[category root]"
        hist=Counter(immediate(n) for n in remaining)
        targets.append({"category":category,"source_suffix":suffix,
            "original_total":len(candidates),"historical_tested_source_count":len(prior),
            "not_yet_tested_source_count":len(remaining),
            "coverage_percent":round(100*len(prior)/len(candidates),3),
            "source_bytes_remaining":sum(allfiles[n] for n in remaining),
            "unmeasured_child_folders":dict(hist.most_common(25)),
            "examples_original_relpaths":remaining[:18],
            "status":"not_l3_tested_not_equivalent_to_unpacked_or_semantic_parsed"})
    # Collections previously analyzed with other pipelines are NOT
    # classified as never extracted merely because L3 does not handle them.
    return {"schema":"acnh303-r32-original-103400-backlog-differentiated-v1",
        "original_total":len(allfiles),"directories":dict(bydir.most_common()),
        "directory_total_bytes":dict(source_bytes),
        "file_suffix_counts":dict(byext.most_common()),
        "selected_L3_target_backlog":targets,
        "already_tested_no_target_or_failed_statuses":dict(historical_media_status.most_common()),
        "historical_core_media_source_count":len({n for n in known if n.startswith(("Model/","Layout/"))}),
        "historical_bars_pre_R19_source_count":len(sound_r18),
        "historical_bars_R19_source_count":len(bars_r19),
        "other_format_status_qualification":{
            "BDLI":"36,708 previously covered by a separate actual BDLI extraction pipeline; Native LBLI semantics may be partial. Do not classify these as not unpacked.",
            "EventFlow":"877 prior source extractions/indexes; Action/Query runtime execution logic requires separate proof.",
            "AMTA_BARS":"lossless bytes extraction does not prove AMTA native playback parameters.",
            "Layout_BNSH":"native byte members and shader pointers are distinct from GPU-ISA disassembly and runtime material/slot proof.",
            "BFLYT_BFLAN_FCPX":"semantic JSON/font refs not pixel-perfect Nintendo game renderer equivalence",
            "other_categories":"full inventory counts do not establish native semantic completeness"},
        "provenance":"Source paths and sizes from original 103400-row inventory, exact R19 audit, R27-R31 SHA-delta and earlier BARS histories. Category inventory counts are independently asserted.",
        "limits":"Only selected media-container L3 original sources are proved not yet tested. Other formats must use separate format-specific exact-manifest audits."}

def main():
    p=argparse.ArgumentParser();p.add_argument("--out",type=Path,required=True)
    args=p.parse_args();data=compute()
    args.out.parent.mkdir(parents=True,exist_ok=True)
    args.out.write_text(json.dumps(data,indent=2,ensure_ascii=False,sort_keys=True)+"\n",encoding="utf8")
    for row in data["selected_L3_target_backlog"]:
        print("R32_UNMEASURED",row["category"],row["not_yet_tested_source_count"],"of",row["original_total"])
    print("R32_FORMAT_ROOTS",data["directories"])
if __name__=="__main__":main()
