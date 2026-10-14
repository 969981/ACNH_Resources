#!/usr/bin/env python3
"""Export ALL discovered FLYT/FLAN/FCPX JSON inside a selected Layout media shard.

Works whether its original archive has BNTX or not. Partial/unknown leaves
remain explicit and do not inflate PNG/GLB/WAV media coverage.
"""
from __future__ import annotations
import argparse
from collections import Counter
import hashlib
import json
from pathlib import Path
from acnh303_media_l3 import NCA, find_leaf
from acnh303_ui2d_parser import parse_ui2d
from acnh303_fcpx_font import parse_fcpx

def sha(data: bytes) -> str:
    return hashlib.sha256(data).hexdigest()

def write(path: Path, data: dict):
    path.parent.mkdir(parents=True, exist_ok=True)
    path.write_text(json.dumps(data, ensure_ascii=False, indent=2, sort_keys=True) + "\n", encoding="utf-8")

def main():
    cli=argparse.ArgumentParser()
    cli.add_argument("--root",type=Path,default=Path("."))
    cli.add_argument("--selection",type=Path,default=Path("selection.json"))
    cli.add_argument("--output",type=Path,default=Path("Unpack_UI2D_Batch"))
    cli.add_argument("--report-dir",type=Path,default=Path("derived/3.0.3/layout_semantic_v8"))
    a=cli.parse_args()
    root=a.root.resolve()
    select=json.loads((root/a.selection).read_text(encoding="utf-8"))
    if select["category"]!="Layout" or select["suffix"].lower()!=".zs":
        raise ValueError("Only hash-selected Layout .zs source archives are permitted")
    if len(select["paths"])!=select["selected_files"] or len(set(select["paths"]))!=len(select["paths"]):
        raise ValueError("Missing or duplicated selected original paths")
    source_root=root/NCA/"1"
    sources=[]
    counts=Counter()
    for selected in select["paths"]:
        required=f"{NCA}/1/Layout/"
        if not selected.startswith(required):raise ValueError("Bad source prefix "+selected)
        real=(root/selected).resolve()
        if not real.is_relative_to(source_root.resolve()) or not real.is_file():
            raise ValueError("Missing or unsafe original path "+selected)
        rel=selected[len(f"{NCA}/1/"):]
        blob=real.read_bytes()
        source_digest=sha(blob)
        source_record={"source_path":rel,"source_sha256":source_digest,
                       "source_bytes":len(blob),"leaves":[]}
        dst=root/a.output/NCA/"1"/(rel+".ui2d")
        leaves=find_leaf(blob,rel)
        for index,leaf in enumerate(leaves):
            payload=leaf["data"];kind=leaf["format"];member=leaf["source_member"]
            rec={"source_member":member,"kind":kind,"leaf_sha256":sha(payload),
                 "leaf_bytes":len(payload)}
            counts["all_leaf_count"]+=1
            if kind in ("bflyt","bflan") or (payload.startswith(b"FCPX") and member.lower().endswith(".bfcpx")):
                try:
                    parsed=parse_ui2d(payload) if kind in ("bflyt","bflan") else parse_fcpx(payload)
                    parsed["origin_source"]=rel
                    parsed["origin_member"]=member
                    parsed["origin_member_sha256"]=rec["leaf_sha256"]
                    ext={"bflyt":"bflyt.json","bflan":"bflan.json"}.get(kind,"fcpx.fontrefs.json")
                    # index avoids collisions between duplicate names.
                    target=dst/(f"{index:03d}-"+Path(member).stem+"."+ext)
                    write(target,parsed)
                    rec.update({"status":"structured_json" if kind in ("bflyt","bflan") else "font_references_only",
                                "output_path":target.relative_to(root).as_posix(),
                                "output_sha256":sha(target.read_bytes())})
                    counts["decoded_"+("fcpx" if kind not in ("bflyt","bflan") else kind)]+=1
                    if kind=="bflyt":
                        counts["pane_count"]+=len(parsed.get("panes",[]))
                        counts["mat1_record_count"]+=sum(t.get("count",0) for t in parsed.get("material_parts_control_metadata",{}).get("materials",[]))
                    elif kind=="bflan":
                        counts["animation_blocks"]+=len(parsed["animations"])
                    else:
                        counts["font_name_references"]+=len(parsed["fonts"])
                except (ValueError,IndexError,KeyError,UnicodeError,TypeError) as error:
                    rec.update({"status":"parser_failed","error":f"{type(error).__name__}: {error}"})
                    counts["parser_failed"]+=1
            else:
                rec["status"]="not_ui2d_target"
                counts["not_ui2d_target"]+=1
                rec["head16_hex"]=payload[:16].hex()
            source_record["leaves"].append(rec)
        source_record["ui2d_targets"]=sum(1 for x in source_record["leaves"]
                   if x["status"] in ("structured_json","font_references_only"))
        source_record["unhandled_leaves"]=sum(1 for x in source_record["leaves"]
                   if x["status"] in ("parser_failed","not_ui2d_target"))
        source_record["status"]=("partial_semantic" if source_record["ui2d_targets"] else
                                 "no_structured_ui2d_target")
        if any(x["status"]=="parser_failed" for x in source_record["leaves"]):
            source_record["status"]="parser_failed_or_partial"
        if source_record["ui2d_targets"]:counts["sources_with_structured_ui2d"]+=1
        else:counts["sources_without_structured_ui2d"]+=1
        write(dst/"_ui2d_source_manifest.json",source_record)
        sources.append(source_record)
        print("UI2D",rel,source_record["status"],
              "structured",source_record["ui2d_targets"],flush=True)
    result={"schema":"acnh303-layout-semantic-shard-v8",
            "group":"Layout","shard":select["shard"],"total_shards":select["shards"],
            "source_count":len(sources),"counts":dict(sorted(counts.items())),
            "source_records":sources,
            "scope":"Partial verified UI2D FLYT/FLAN/FCPX JSON; unsupported leaves retained; not native UI material/rendering parity."}
    out=root/a.report_dir/"Layout"/(f"{select['shard']:03d}-of-{select['shards']:03d}")
    write(out/"semantic_manifest.json",result)
    print("UI2D_SUMMARY",json.dumps({k:v for k,v in result.items() if k!="source_records"},ensure_ascii=False),flush=True)

if __name__=="__main__":
    main()
