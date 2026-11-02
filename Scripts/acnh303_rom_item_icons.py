#!/usr/bin/env python3
"""ACNH 3.0.3 real item icon ROM extraction with sparse-checkout planning.

Primary mapping: filename.png -> Model/Layout_FtrIcon_filename.Nin_NX_NVN.zs
Fallback: Layout_ClosetIcon_filename, then Layout_NpcIcon_filename.
Unknown sources: report, never invent pixels. Source BRTI name must agree with
requested filename for direct reuse; nonmatching/multitexture PNGs are quarantined.
Community CDN PNGs are never overwritten or silently relabeled as ROM originals.
"""
from __future__ import annotations

import argparse
import hashlib
import io
import json
import os
import re
import subprocess
import tempfile
from datetime import datetime, timezone
from pathlib import Path
from PIL import Image
from acnh303_assets import load_catalog, png_info
from acnh303_babybed_texture_export import extract, convert
from probe_acnh_babybed_textures import NCA

ROM=Path(NCA)/"1"/"Model"
PILOT_NAMES=[
    "10000Bell.png",
    "FtrBabybed_Remake_0_0.png",
    "FtrBabybed_Remake_7_6.png",
    "TopsTexMarinesuitNormalLNook0.png",
    "BromideNpcNmlAnt00_Remake_0_0.png",
]


def source_index(root:Path, catalog:Path) -> dict:
    # Listing git tree metadata does not download 60,000 compressed ROM blobs.
    process=subprocess.run(["git","ls-tree","-r","--name-only","HEAD","--",str(ROM)],
                           cwd=root,capture_output=True,text=True,check=True,timeout=60)
    tree=set(process.stdout.splitlines())
    expected=load_catalog(catalog)
    result=[]
    unmapped=[]
    multiproviders=0
    for name in expected:
        if not re.fullmatch(r"[A-Za-z0-9_-]+\.png",name):
            unmapped.append({"filename":name,"reason":"invalid_unsafe_filename"})
            continue
        stem=name[:-4]
        candidates=[(kind,(ROM/f"Layout_{kind}_{stem}.Nin_NX_NVN.zs").as_posix())
                    for kind in ("FtrIcon","ClosetIcon","NpcIcon")]
        available=[(kind,src) for kind,src in candidates if src in tree]
        if not available:
            unmapped.append({"filename":name,"reason":"no_layout_source_in_original_rom_tree"})
            continue
        multiproviders += len(available)>1
        kind,src=available[0]
        result.append({"filename":name,"source_path":src,"layout_kind":kind,
                       "alternate_rom_sources":[s for k,s in available[1:]]})
    return {"all":result,"unmapped":unmapped,"multiproviders":multiproviders,
            "expected":len(expected),"tree_source_total":len(tree)}


def plan(args,root:Path):
    index=source_index(root,root/args.catalog)
    entries=index["all"]
    cursor=root/args.evidence/"next-offset.json"
    if args.pilot:
        found={r["filename"]:r for r in entries}
        selected=[found[n] for n in PILOT_NAMES if n in found]
        offset=0
    else:
        offset=int(json.loads(cursor.read_text("utf-8"))["next_offset"]) if args.offset=="auto" and cursor.is_file() else int(args.offset) if args.offset!="auto" else 0
        if not 0 <= offset <= len(entries):
            raise ValueError("invalid expected-image source offset")
        selected=entries[offset:offset+args.limit]
    result={"schema":"acnh303_rom_item_icon_plan_v1",
            "native_rom_not_cdn":True,"selected":selected,
            "offset":offset,"end":offset+len(selected),
            "source_count":len(entries),"unmapped_count":len(index["unmapped"]),
            "unmapped_examples":index["unmapped"][:50],
            "expected":index["expected"],"multiple_sources":index["multiproviders"],
            "pilot":bool(args.pilot)}
    out=Path(args.plan_file)
    out.parent.mkdir(parents=True,exist_ok=True)
    out.write_text(json.dumps(result,indent=2,ensure_ascii=False)+"\n","utf-8")
    if args.sparse_patterns:
        patterns=Path(args.sparse_patterns)
        patterns.write_text("\n".join("/"+x["source_path"] for x in selected)+"\n","utf-8")
    print(json.dumps({"matching_native_layout_sources":len(entries),
                      "unmapped":len(index["unmapped"]),
                      "selected":len(selected),"offset":offset,
                      "end":result["end"],
                      "pilot":bool(args.pilot)},ensure_ascii=False),flush=True)
    return 0


def pixel_comparison(a:bytes,b:bytes) -> dict:
    with Image.open(io.BytesIO(a)) as ra, Image.open(io.BytesIO(b)) as rb:
        ra.load();rb.load()
        if ra.size != rb.size:
            return {"pixel_equivalent":False,"size_native":list(ra.size),
                    "size_existing":list(rb.size)}
        ab=ra.convert("RGBA").tobytes()
        bb=rb.convert("RGBA").tobytes()
        max_diff=max((abs(x-y) for x,y in zip(ab,bb)),default=0)
        return {"pixel_equivalent":max_diff==0,
                "max_rgba_channel_difference":max_diff,
                "size":list(ra.size)}


def export(args,root:Path):
    planinfo=json.loads(Path(args.plan_file).read_text("utf-8"))
    selected=planinfo["selected"]
    if not selected:
        print(json.dumps({"status":"all_matching_rom_item_icons_processed",
                          "source_count":planinfo["source_count"]}),flush=True)
        return 0
    wimgt=Path(args.wimgt).resolve()
    if not wimgt.is_file():
        raise ValueError("native BNTX decoder missing")
    results=[]
    failures=0
    for i,rec in enumerate(selected):
        src=root/rec["source_path"];name=rec["filename"]
        row={**rec,"status":"unexamined","original_rom_native":True,
             "in_game_ui_composition_verified":False}
        try:
            original,containers=extract(src,rec["source_path"])
            row["source_bytes"]=len(original)
            row["source_sha256"]=hashlib.sha256(original).hexdigest()
            native=[]
            with tempfile.TemporaryDirectory(prefix="acnh-rom-item-") as d:
                tmp=Path(d)
                for bi,b in enumerate(containers):
                    work=tmp/f"bn{bi}"
                    work.mkdir()
                    found=convert(wimgt,b["bntx_bytes"],work,args.timeout)
                    if len(found)!=len(b["native_textures"]):
                        raise ValueError("decoded count != BRTI count")
                    for idx,(p,decoded,meta) in enumerate(found):
                        native.append((p.read_bytes(),{"brti_name":b["native_textures"][idx]["name"],
                            "bntx_index":bi,"png_sha256":meta["sha256"],
                            "bytes":meta["bytes"],"width":meta["width"],
                            "height":meta["height"]}))
            row["native_texture_count"]=len(native)
            if len(native)!=1 or native[0][1]["brti_name"]!=name[:-4]:
                row["status"]="multiple_or_mismatched_native_textures"
                row["native_brti_names"]=[n["brti_name"] for _,n in native]
                # Preserve proof; do NOT call any component a complete item icon.
                quarantine=root/"assets/textures/items-rom"/name[:-4]
                for idx,(data,n) in enumerate(native):
                    out=quarantine/f"texture_{idx:03d}.png"
                    out.parent.mkdir(parents=True,exist_ok=True)
                    if not out.exists():out.write_bytes(data)
                    if png_info(out)["sha256"]!=n["png_sha256"]:
                        raise ValueError("quarantined PNG mismatch")
                row["quarantine_folder"]=quarantine.relative_to(root).as_posix()
            else:
                data,info=native[0]
                primary=root/"assets/images/items"/name
                dst=primary
                row["native_brti_name"]=info["brti_name"]
                row["width"]=info["width"];row["height"]=info["height"]
                row["native_png_sha256"]=info["png_sha256"]
                if primary.exists():
                    original_info=png_info(primary)
                    if original_info["sha256"]==info["png_sha256"]:
                        row["status"]="existing_identical_png"
                    else:
                        row["existing_png_sha256"]=original_info["sha256"]
                        row["existing_pixel_comparison"]=pixel_comparison(data,primary.read_bytes())
                        row["status"]="existing_cdn_preserved_native_separately"
                        dst=root/"assets/images/items-rom"/name
                else:
                    row["status"]="new_original_rom_icon"
                if row["status"]!="existing_identical_png":
                    dst.parent.mkdir(parents=True,exist_ok=True)
                    if dst.exists():
                        if png_info(dst)["sha256"]!=info["png_sha256"]:
                            raise ValueError("native destination conflict")
                    else:
                        temporary=dst.with_suffix(".incomplete")
                        try:
                            temporary.write_bytes(data)
                            if png_info(temporary)["sha256"]!=info["png_sha256"]:
                                raise ValueError("post-write native PNG CRC/SHA-256 mismatch")
                            os.replace(temporary,dst)
                        finally:
                            temporary.unlink(missing_ok=True)
                    row["output_path"]=dst.relative_to(root).as_posix()
        except Exception as e:
            row["status"]="rom_source_or_decoder_error"
            row["error"]=str(e)[:550]
            failures+=1
        results.append(row)
        if (i+1)%50==0:print(json.dumps({"progress":i+1,"of":len(selected),
                          "native":sum(x["status"]=="new_original_rom_icon" for x in results),
                          "conflicts":sum(x["status"]=="existing_cdn_preserved_native_separately" for x in results),
                          "errors":failures}),flush=True)
    outfolder=root/args.evidence
    outfolder.mkdir(parents=True,exist_ok=True)
    label="pilot" if planinfo["pilot"] else "batch"
    out=outfolder/f"{label}-{planinfo['offset']:05d}-{planinfo['end']:05d}.json"
    report={**{k:v for k,v in planinfo.items() if k!="selected"},
            "schema":"acnh303_original_rom_item_png_export_v1",
            "timestamp_utc":datetime.now(timezone.utc).isoformat(),
            "total_attempted":len(results),
            "original_rom_icon_count":sum(x["status"]=="new_original_rom_icon" for x in results),
            "preexisting_different_native_preserved":sum(x["status"]=="existing_cdn_preserved_native_separately" for x in results),
            "preexisting_identical":sum(x["status"]=="existing_identical_png" for x in results),
            "quarantined":sum(x["status"]=="multiple_or_mismatched_native_textures" for x in results),
            "errors":failures,
            "items":results}
    out.write_text(json.dumps(report,ensure_ascii=False,indent=2)+"\n","utf-8")
    # Don't let a small number of source-specific bad assets block 26k others.
    budget=max(2,len(results)//10)
    if not planinfo["pilot"] and failures<=budget:
        cursor=outfolder/"next-offset.json"
        cursor.write_text(json.dumps({"next_offset":planinfo["end"],"total":planinfo["source_count"],
                                     "last_batch_errors":failures},indent=2)+"\n","utf-8")
    print(json.dumps({"report":out.relative_to(root).as_posix(),
                      "created":report["original_rom_icon_count"],
                      "source_conflicts_kept":report["preexisting_different_native_preserved"],
                      "quarantined":report["quarantined"],"errors":failures}),flush=True)
    return 1 if failures>budget else 0


def main():
    p=argparse.ArgumentParser(description=__doc__)
    p.add_argument("mode",choices=["plan","export"])
    p.add_argument("--root",type=Path,default=Path("."))
    p.add_argument("--catalog",type=Path,default=Path("assets/catalog/expected-png-names.txt"))
    p.add_argument("--evidence",type=Path,default=Path("assets/evidence/rom-items"))
    p.add_argument("--plan-file",default="/tmp/acnh-rom-icon-plan.json")
    p.add_argument("--sparse-patterns",default="/tmp/acnh-rom-icon-sparse.txt")
    p.add_argument("--wimgt",type=Path,default=Path("/nonexistent/wimgt"))
    p.add_argument("--pilot",action="store_true")
    p.add_argument("--offset",default="auto")
    p.add_argument("--limit",type=int,default=250)
    p.add_argument("--timeout",type=int,default=120)
    args=p.parse_args()
    if args.limit<1 or args.limit>500:p.error("limit must be 1..500")
    root=args.root.resolve()
    return plan(args,root) if args.mode=="plan" else export(args,root)

if __name__=="__main__":
    raise SystemExit(main())
