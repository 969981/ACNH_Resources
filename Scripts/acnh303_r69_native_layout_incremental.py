#!/usr/bin/env python3
"""R69/R70 native ACNH ROM layout PNG extraction by explicit R68 source deficits.

This never fabricates outputs: single verified BRTI-to-filename is placed at a
canonical native path; multiple textures are preserved individually under a
source-specific component directory. Other outcomes remain recorded in evidence.
"""
from __future__ import annotations
import argparse,csv,hashlib,json
from collections import Counter
from pathlib import Path
from acnh303_villager_rom_extract import convert_one, SUFFIX
from acnh303_assets import png_info

INPUT=Path("assets/evidence/rom-completeness/r68-original-layout-sources-without-extracted-png.csv")
EVID=Path("assets/evidence/rom-completeness")
MODEL="e10617820db06889e1638499478da0de_NCA/1/Model/"
FAMILIES={
 "FtrIcon":"assets/images/completion-original-layout/FtrIcon",
 "GardeningIcon":"assets/images/completion-original-layout/GardeningIcon",
 "ClosetIcon":"assets/images/clothing-original-layout/ClosetIcon",
}
TARGETS={"FtrIcon":1,"GardeningIcon":3,"ClosetIcon":5441}

def inventory(root):
    with (root/INPUT).open("r",encoding="utf-8",newline="") as f:
        rows=list(csv.DictReader(f))
    if len(rows)!=5445:raise ValueError("R68 input source count drifted")
    got=Counter(r["native_UI_family"] for r in rows)
    if dict(got)!=TARGETS:raise ValueError("Original family counts drifted "+str(got))
    seen=set()
    for r in rows:
        fam=r["native_UI_family"];src=r["original_ROM_source"]
        stem=f"Layout_{fam}_"
        if (not src.startswith(MODEL+stem) or not src.endswith(SUFFIX)
              or ".." in src or src in seen):
            raise ValueError("Untrusted or duplicated source "+src)
        seen.add(src)
        r["native_stem"]=src.rsplit("/",1)[-1][len(stem):-len(SUFFIX)]
        r["native_filename"]=r["native_stem"]+".png"
        r["out_dir"]=FAMILIES[fam]
    # Stable order, so no status-dependent movement of shard indices.
    return sorted(rows,key=lambda r:(list(TARGETS).index(r["native_UI_family"]),r["original_ROM_source"]))

def select(root,family,start,limit):
    all_rows=[r for r in inventory(root) if family=="all" or r["native_UI_family"]==family]
    if start<0 or limit<1 or start>len(all_rows):raise ValueError("Invalid slice")
    return all_rows[start:start+limit],len(all_rows)

def sha(path):
    h=hashlib.sha256()
    with path.open("rb") as f:
        for part in iter(lambda:f.read(1024*1024),b""):h.update(part)
    return h.hexdigest()

def provenance(root,r,decoder,output_mb=24):
    fam=r["native_UI_family"];original=root/r["original_ROM_source"]
    if not original.is_file():raise FileNotFoundError(r["original_ROM_source"])
    # convert_one itself verifies pixel format and decode, compares existing
    # file SHA, and keeps multi-BRTI texture components under raw_dir.
    result=convert_one(root,decoder,(fam,r["out_dir"],original,r["native_filename"]),
        seconds=120,output_mb=output_mb,
        raw_dir=Path("assets/textures/completion-original-layout"))
    result["source_UI_family"]=fam
    result["native_item_name"]=r["native_stem"]
    result["native_full_BRTI_name_equal_expected"] = bool(
        result.get("native_bnti_name_matches_filename") and
        result.get("status")=="one_original_rom_texture_exported")
    result["original_image_UI_runtime_binding_verified"]=False
    result["new_requested_catalog_alias_created"]=False
    for img in result.get("pngs",[]):
        path=root/img["output"]
        if not path.is_file() or png_info(path)["sha256"]!=img["sha256"]:
            raise ValueError("Post-export native PNG CRC/SHA mismatch "+str(path))
        img["native_PNG_crc_sha_reverified"]=True
    if result["native_full_BRTI_name_equal_expected"] and len(result.get("pngs",[]))!=1:
        raise ValueError("Invalid single-BRTI validation for "+str(original))
    return result

def report(root,rows,total,family,start,limit,decoder):
    results=[]
    for i,row in enumerate(rows):
        try:
            one=provenance(root,row,decoder)
        except Exception as err:
            one={"source_UI_family":row["native_UI_family"],
                "source":row["original_ROM_source"],"requested_png_name":row["native_filename"],
                "native_item_name":row["native_stem"],"status":"error",
                "error":type(err).__name__+": "+str(err)[:500],"pngs":[],
                "original_image_UI_runtime_binding_verified":False,
                "new_requested_catalog_alias_created":False}
        results.append(one)
        if (i+1)%40==0 or len(rows)<=10:
            print(json.dumps({"progress":i+1,"of":len(rows),
               "single_verified":sum(r.get("native_full_BRTI_name_equal_expected",False) for r in results),
               "failures":sum(r["status"]=="error" for r in results)},ensure_ascii=False),flush=True)
    verdict=Counter(x["status"] for x in results)
    dir=root/EVID/"native-layout-batches"
    dir.mkdir(parents=True,exist_ok=True)
    end=start+len(rows)
    tag=f"{family}-{start:05d}-{end:05d}"
    out={"schema":"acnh303_original_native_layout_incremental_v1",
        "source_input_R68":str(INPUT),
        "family":family,"start_offset":start,"end_offset":end,"total_in_family":total,
        "source_count":len(rows),"status_counts":dict(verdict),
        "native_exact_single_BRTI_PNGs":sum(x.get("native_full_BRTI_name_equal_expected",False) for x in results),
        "multi_texture_sources":verdict["multi_texture_components_only_not_composite"],
        "no_texture_sources":verdict["no_native_bntx_found"],
        "failed_sources":verdict["error"]+verdict["destination_png_conflict_preserved"],
        "original_source_files_only":True,
        "source_and_output_sha_provenance_per_record":True,
        "no_image_alias_or_fake_png_generated":True,
        "UI_runtime_rendering_verified":False,
        "entries":results}
    (dir/(tag+".json")).write_text(json.dumps(out,indent=2,ensure_ascii=False)+"\n",encoding="utf-8")
    with (dir/(tag+".csv")).open("w",newline="",encoding="utf-8") as f:
        w=csv.writer(f);w.writerow(["ROM_source","family","status","native_BRTI_name","PNG_path","PNG_SHA256","source_SHA256","runtime_binding_verified"])
        for entry in results:
            for p in entry.get("pngs",[]) or [{}]:
                w.writerow([entry["source"],entry["source_UI_family"],entry["status"],
                    p.get("native_brti_name_at_same_index_candidate",""),p.get("output",""),
                    p.get("sha256",""),entry.get("original_source_sha256",""),False])
    print(json.dumps({k:v for k,v in out.items() if k!="entries"},ensure_ascii=False),flush=True)
    return out

def main():
    p=argparse.ArgumentParser()
    p.add_argument("mode",choices=("plan","extract"))
    p.add_argument("--root",type=Path,default=Path("."))
    p.add_argument("--family",choices=("FtrIcon","GardeningIcon","ClosetIcon","all"),required=True)
    p.add_argument("--start",type=int,default=0)
    p.add_argument("--limit",type=int,default=200)
    p.add_argument("--decoder",type=Path)
    p.add_argument("--strict-errors",action="store_true")
    args=p.parse_args();root=args.root.resolve()
    rows,total=select(root,args.family,args.start,args.limit)
    plan=Path(f"/tmp/acnh-{args.family.lower()}-{args.start:05d}-sparse.txt")
    plan.write_text("".join("/"+x["original_ROM_source"]+"\n" for x in rows),"utf-8")
    if args.mode=="plan":
        print(json.dumps({"family":args.family,"offset":args.start,"count":len(rows),
            "family_total":total,"sparse_path":str(plan)},ensure_ascii=False))
        return 0
    if args.decoder is None or not args.decoder.is_file():p.error("verified original BNTX decoder required")
    if not rows:
        print(json.dumps({"status":"nothing_left_in_selected_range","family":args.family}))
        return 0
    out=report(root,rows,total,args.family,args.start,args.limit,args.decoder.resolve())
    if args.strict_errors and out["failed_sources"]:return 1
    return 0
if __name__=="__main__":raise SystemExit(main())
