#!/usr/bin/env python3
"""Extract REAL villager icon, photograph and poster textures from ACNH 3.0.3 ROM.

Source: e10617820db06889e1638499478da0de_NCA/1/Model/Layout_*.zs
These are independent layout texture assets, NOT NPC 3D renders or CDN PNGs.
Produces only decoded, validated original ROM BNTX pixels and auditable hashes.

Unknown/multi-texture layouts are preserved as raw numbered decoder outputs,
rather than mislabeling a component texture as a fully composited photograph.
"""
from __future__ import annotations
import argparse
import hashlib
import json
import os
import shutil
import tempfile
from datetime import datetime, timezone
from pathlib import Path
from acnh303_babybed_texture_export import extract, convert
from acnh303_assets import png_info
from probe_acnh_babybed_textures import NCA

ROM_DIR = Path(NCA) / "1" / "Model"
FAMILIES = {
    "photo": ("Layout_NpcBromide_*.Nin_NX_NVN.zs", "assets/images/villager/photos"),
    "icon": ("Layout_NpcIcon_*.Nin_NX_NVN.zs", "assets/images/villager/icons"),
    "poster": ("Layout_FtrIcon_PosterNpc*.Nin_NX_NVN.zs", "assets/images/villager/posters"),
    "bromide_item": ("Layout_FtrIcon_BromideNpc*_Remake_0_0.Nin_NX_NVN.zs",
                     "assets/images/villager/bromide-items"),
}
SUFFIX = ".Nin_NX_NVN.zs"


def sources(root: Path) -> list[tuple[str, str, Path, str]]:
    models = root / ROM_DIR
    rows = []
    for category, (pattern, output) in FAMILIES.items():
        for path in sorted(models.glob(pattern), key=lambda p: p.name):
            stem = path.name.removesuffix(SUFFIX)
            labels = {
                "photo": "Layout_NpcBromide_",
                "icon": "Layout_NpcIcon_",
                "poster": "Layout_FtrIcon_",
                "bromide_item": "Layout_FtrIcon_",
            }
            if not stem.startswith(labels[category]):
                continue
            name = stem.removeprefix(labels[category]) + ".png"
            rows.append((category, output, path, name))
    return rows


def pilot(rows: list[tuple], each: int) -> list[tuple]:
    selected = []
    for category in FAMILIES:
        selected.extend([r for r in rows if r[0] == category][:each])
    return selected


def convert_one(root: Path, wimgt: Path, rec: tuple, *,
                seconds: int, output_mb: int, raw_dir: Path) -> dict:
    category, dst, path, image_name = rec
    source_rel = path.relative_to(root).as_posix()
    row = {"category":category,"source":source_rel,"requested_png_name":image_name,
           "status":"unexamined","native_rom_source":True,
           "native_in_game_composition_verified":False,
           "pngs":[]}
    original, containers = extract(path, source_rel)
    row["original_source_sha256"] = hashlib.sha256(original).hexdigest()
    row["original_source_bytes"] = len(original)
    row["bntx_count"] = len(containers)
    if not containers:
        row["status"] = "no_native_bntx_found"
        return row
    flattened=[]
    for bi, bntx in enumerate(containers):
        native = bntx["native_textures"]
        details = {"index":bi,"member":bntx["member"],
                   "embedded_offset":bntx["embedded_offset"],
                   "bntx_sha256":hashlib.sha256(bntx["bntx_bytes"]).hexdigest(),
                   "native_brti":native,"decoded_pngs":[]}
        row.setdefault("bntx", []).append(details)
        with tempfile.TemporaryDirectory(prefix="acnh-villager-") as t:
            temp = Path(t)
            converted = convert(wimgt, bntx["bntx_bytes"], temp, seconds)
            if len(converted)!=len(native):
                raise ValueError(f"decoded {len(converted)} PNG != native BRTI {len(native)}")
            for ti,(png,raster,info) in enumerate(converted):
                item = {"bntx_index":bi,"texture_index":ti,
                        "native_brti_name_at_same_index_candidate":native[ti]["name"],
                        "texture_index_binding_verified":False,
                        "width":info["width"],"height":info["height"],
                        "sha256":info["sha256"],"bytes":info["bytes"],
                        "full_pixel_decode":raster["pixel_decode"]}
                flattened.append((png.read_bytes(),item))
                details["decoded_pngs"].append(item)
    row["native_texture_count"] = len(flattened)
    total = sum(len(x[0]) for x in flattened)
    if total > output_mb * 1024 * 1024:
        raise ValueError("per-source output size cap exceeded")
    row["native_bnti_name_matches_filename"] = bool(len(flattened) == 1 and
        flattened[0][1]["native_brti_name_at_same_index_candidate"] == image_name.removesuffix(".png"))
    if len(flattened)==1 and row["native_bnti_name_matches_filename"]:
        path_out = root / dst / image_name
        row["status"] = "one_original_rom_texture_exported"
        items=[(path_out,flattened[0])]
    else:
        row["status"] = "multi_texture_components_only_not_composite"
        stem=path.name.removesuffix(SUFFIX)
        items=[(root / raw_dir / category / stem / f"texture_{i:03d}.png",data)
               for i,data in enumerate(flattened)]
    for target, (data,detail) in items:
        target.parent.mkdir(parents=True,exist_ok=True)
        if target.exists():
            original_info=png_info(target)
            if original_info["sha256"] != detail["sha256"]:
                row["status"] = "destination_png_conflict_preserved"
                row.setdefault("conflicts",[]).append(target.relative_to(root).as_posix())
                continue
        else:
            tmp=target.with_suffix(".incomplete")
            try:
                tmp.write_bytes(data)
                if png_info(tmp)["sha256"]!=detail["sha256"]:
                    raise ValueError("post-write SHA/PNG validation mismatch")
                os.replace(tmp,target)
            finally:
                tmp.unlink(missing_ok=True)
        row["pngs"].append({**detail,"output":target.relative_to(root).as_posix()})
    return row


def main() -> int:
    p=argparse.ArgumentParser(description=__doc__)
    p.add_argument("--root",type=Path,default=Path("."))
    p.add_argument("--wimgt",type=Path,required=True)
    p.add_argument("--pilot",type=int,default=0,help="Select this many samples per family (no cursor)")
    p.add_argument("--offset",default="auto")
    p.add_argument("--limit",type=int,default=100)
    p.add_argument("--timeout",type=int,default=120)
    p.add_argument("--output-mb",type=int,default=20)
    p.add_argument("--manifest",type=Path,default=Path("assets/evidence/rom-villager"))
    args=p.parse_args()
    root=args.root.resolve()
    if not args.wimgt.is_file() or args.limit<1 or args.limit>500 or args.pilot<0 or args.pilot>20:
        p.error("invalid wimgt/limit/pilot")
    full=sources(root)
    count={family:sum(r[0]==family for r in full) for family in FAMILIES}
    args.manifest.mkdir(parents=True,exist_ok=True)
    cursor=args.manifest / "next-offset.json"
    if args.pilot:
        batch=pilot(full,args.pilot)
        start=0
    else:
        start=int(json.loads(cursor.read_text("utf-8"))["next_offset"]) if args.offset=="auto" and cursor.is_file() else int(args.offset) if args.offset!="auto" else 0
        if start<0 or start>len(full):p.error("offset outside source list")
        batch=full[start:start+args.limit]
    results=[]
    for i,rec in enumerate(batch):
        cat,output,src,name=rec
        try:
            row=convert_one(root,args.wimgt.resolve(),rec,seconds=args.timeout,
                            output_mb=args.output_mb,raw_dir=Path("assets/textures/villager"))
        except (ValueError,OSError,RuntimeError,TimeoutError) as e:
            row={"category":cat,"source":src.relative_to(root).as_posix(),
                 "requested_png_name":name,"status":"failed",
                 "error":str(e)[:600]}
        results.append(row)
        print(json.dumps({"index":start+i,"source":src.name,"category":cat,
                          "status":row["status"],"pngs":len(row.get("pngs",[])),
                          "names":[x.get("native_brti_name_at_same_index_candidate") for x in row.get("pngs",[])][:5]},ensure_ascii=False),flush=True)
    next_offset=start+len(batch)
    report={"schema":"acnh303_real_rom_villager_texture_export_v1",
            "timestamp_utc":datetime.now(timezone.utc).isoformat(),
            "source_root":str(ROM_DIR),"native_rom_sources":True,
            "not_community_cdn_images":True,
            "native_in_game_render_composition_verified":False,
            "source_counts":count,"total_source_count":len(full),
            "mode":"pilot" if args.pilot else "batch",
            "source_offset":start,"next_offset":next_offset,
            "attempted":len(results),
            "single_rom_texture_png":sum(r["status"]=="one_original_rom_texture_exported" for r in results),
            "multi_texture_component_sources":sum(r["status"]=="multi_texture_components_only_not_composite" for r in results),
            "errors":[{"source":r["source"],"status":r["status"],"error":r.get("error")} for r in results if r["status"] not in ("one_original_rom_texture_exported","multi_texture_components_only_not_composite")],
            "results":results}
    label="pilot" if args.pilot else "batch"
    dst=args.manifest / f"{label}-{start:04d}-{next_offset:04d}.json"
    dst.write_text(json.dumps(report,indent=2,ensure_ascii=False)+"\n",encoding="utf-8")
    if not args.pilot and not report["errors"] and args.offset=="auto":
        cursor.write_text(json.dumps({"next_offset":next_offset,"total":len(full)},indent=2)+"\n","utf-8")
    print(json.dumps({"report":str(dst),"count":len(results),
                      "single_rom_texture_png":report["single_rom_texture_png"],
                      "multi_texture_sources":report["multi_texture_component_sources"],
                      "errors":len(report["errors"])},ensure_ascii=False),flush=True)
    return 1 if report["errors"] else 0


if __name__=="__main__":
    raise SystemExit(main())
