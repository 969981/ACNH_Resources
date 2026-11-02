#!/usr/bin/env python3
"""R58: original ROM FtrIcon and ClosetIcon PNG for 39 nonstandard clothing names.

Exact native ItemParam instance names from R56/R57 are used unchanged.
Never mint requested ...0_0.png from guessed same-image aliases; export and
audit separately by true original UI family, with original BRTI names/hashes.
"""
from __future__ import annotations
import argparse,csv,json
from collections import Counter
from pathlib import Path
from acnh303_villager_rom_extract import convert_one
from acnh303_assets import png_info

SOURCE=Path("assets/evidence/rom-items/r57-original-clothing39-name-source-lookup.json")
TARGET=Path("assets/evidence/rom-clothing-layout")
PREFIX="e10617820db06889e1638499478da0de_NCA/1/Model/"
SUFFIX=".Nin_NX_NVN.zs"
FAMILIES=("FtrIcon","ClosetIcon")

def rows(root):
    inp=json.loads((root/SOURCE).read_text("utf-8"))
    if inp["original_39_names"]!=39 or inp["exact_layout_source_count"]!=78:
        raise ValueError("No independently verified native original layout sources")
    out=[]
    for entry in inp["rows"]:
        name=entry["itemparam_instance"]
        requested=entry["catalog_name"]
        # Direct native 0-name, not the guessed catalog 0_0 suffix.
        if not name or not requested.endswith(".png"):raise ValueError("Unsafe catalog entry")
        for family in FAMILIES:
            path=PREFIX+"Layout_"+family+"_"+name+SUFFIX
            if path not in entry["original_3_0_3_layout_exact_name_source_paths"]:
                raise ValueError("Required independently indexed original source missing: "+path)
            out.append({"original_model_layout":path,"native_itemparam_name":name,
                        "catalog_requested_name_still_pending":requested,"family":family})
    if len(out)!=78 or len({r["original_model_layout"] for r in out})!=78:
        raise ValueError("Expected 78 distinct exact source files")
    return out

def plan(root):
    out=rows(root)
    file=Path("/tmp/acnh-r58-clothing-sparse.txt")
    file.write_text("".join("/"+x["original_model_layout"]+"\n" for x in out),"utf-8")
    print(json.dumps({"distinct_original_layouts":len(out),
         "families":dict(Counter(x["family"] for x in out))},ensure_ascii=False))

def export(root,wimgt):
    out=rows(root)
    results=[]
    for index,entry in enumerate(out):
        name=entry["native_itemparam_name"]+".png"
        family=entry["family"]
        path=root/entry["original_model_layout"]
        try:
            r=convert_one(root,wimgt,
                (family,"assets/images/clothing-original-layout/"+family,path,name),
                seconds=120,output_mb=20,
                raw_dir=Path("assets/textures/clothing-original-layout"))
            native=r.get("native_bnti_name_matches_filename") is True
            validated=r.get("status")=="one_original_rom_texture_exported" and native and len(r["pngs"])==1
            for png in r["pngs"]:
                actual=root/png["output"]
                if not actual.is_file() or png_info(actual)["sha256"]!=png["sha256"]:
                    raise ValueError("Native output CRC or SHA mismatch")
            r["original_single_BRTI_name_verified"]=validated
        except Exception as exc:
            r={"category":family,"source":entry["original_model_layout"],
                "status":"error_original_source_or_decode","error":str(exc)[:500],
                "pngs":[],"original_single_BRTI_name_verified":False}
        r["requested_catalog_name"]=entry["catalog_requested_name_still_pending"]
        r["native_itemparam_name"]=entry["native_itemparam_name"]
        r["catalog_png_alias_written"]=False
        r["game_runtime_icon_equivalence_verified"]=False
        results.append(r)
        if (index+1)%20==0:print(json.dumps({"scanned":index+1,"total":78,
              "verified":sum(x["original_single_BRTI_name_verified"] for x in results)},ensure_ascii=False),flush=True)
    result={"schema":"acnh303_r58_native_cloth_original_ftr_closet_layout_png_v1",
            "original_layouts_scanned":len(results),
            "verified_single_BRTI_name_native_pngs":sum(x["original_single_BRTI_name_verified"] for x in results),
            "all_original_39_names_with_both_sources":39,
            "status_totals":dict(Counter(x["status"] for x in results)),
            "original_png_catalog_0_0_aliases_created":0,
            "nintendo_runtime_icon_mapping_verified":False,
            "original_unmatched_names_remain_pending":1254,
            "source_records":results}
    dest=root/TARGET;dest.mkdir(parents=True,exist_ok=True)
    (dest/"reconciliation.json").write_text(json.dumps(result,ensure_ascii=False,indent=2)+"\n",encoding="utf-8")
    with (dest/"reconciliation.csv").open("w",encoding="utf-8",newline="") as f:
        w=csv.writer(f)
        w.writerow(["requested_pending_name","family","native_itemparam_name","rom_source",
            "decode_status","native_png_output","native_png_sha256","catalog_alias_verified"])
        for r in results:
            for p in r["pngs"] or [None]:
                w.writerow([r["requested_catalog_name"],r["category"],r["native_itemparam_name"],
                           r["source"],r["status"],
                           p["output"] if p else "",p["sha256"] if p else "",False])
    print(json.dumps({k:v for k,v in result.items() if k!="source_records"},ensure_ascii=False))
    return 0 if len(results)==result["verified_single_BRTI_name_native_pngs"] else 1

def main():
    p=argparse.ArgumentParser()
    p.add_argument("mode",choices=("plan","export"))
    p.add_argument("--root",type=Path,default=Path("."))
    p.add_argument("--wimgt",type=Path)
    args=p.parse_args()
    root=args.root.resolve()
    if args.mode=="plan":plan(root);return 0
    if args.wimgt is None or not args.wimgt.is_file():p.error("Requires pinned real BNTX decoder")
    return export(root,args.wimgt.resolve())
if __name__=="__main__":raise SystemExit(main())
