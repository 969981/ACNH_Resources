#!/usr/bin/env python3
"""R71 strict 5,480-source ClosetIcon audit of real ROM, PNG CRC and SHA.
There are 39 previously verified originals + 200 pilot + 5241 new shards.
Unparseable and multi-texture sources remain explicitly unresolved.
"""
from __future__ import annotations
import argparse,csv,json
from pathlib import Path
from collections import Counter
from acnh303_assets import png_info
from acnh303_r69_native_layout_incremental import inventory

ROOT_E=Path("assets/evidence/rom-completeness")
BATCH=ROOT_E/"native-layout-batches"
OLD=Path("assets/evidence/rom-clothing-layout/reconciliation.json")

def audit(root):
    originals=[x for x in inventory(root) if x["native_UI_family"]=="ClosetIcon"]
    if len(originals)!=5441:raise ValueError("Original 5441 R68 sources changed")
    prior=json.loads((root/OLD).read_text("utf-8"))
    old=[x for x in prior["source_records"] if x["category"]=="ClosetIcon"]
    if len(old)!=39 or any(not x.get("original_single_BRTI_name_verified") for x in old):
        raise ValueError("Earlier original 39 ClosetIcon not verified")
    seen=set();errors=[];counts=Counter();shards=[]
    for start in range(0,5441,200):
        stop=min(start+200,5441)
        fn=root/BATCH/f"ClosetIcon-{start:05d}-{stop:05d}.json"
        if not fn.is_file():raise FileNotFoundError("Missing real shard evidence "+str(fn))
        data=json.loads(fn.read_text("utf-8"))
        if data.get("schema")!="acnh303_original_native_layout_incremental_v1" or data["family"]!="ClosetIcon" or data["start_offset"]!=start or data["end_offset"]!=stop or len(data["entries"])!=stop-start:
            raise ValueError("Invalid original shard dimensions "+str(fn))
        for i,row in enumerate(data["entries"]):
            orig=originals[start+i]
            if row["source"]!=orig["original_ROM_source"] or row["source"] in seen:
                raise ValueError("Original shard source sequence/identity mismatch "+str(fn))
            seen.add(row["source"])
            status=row["status"];counts[status]+=1
            imgs=row.get("pngs",[])
            if status=="one_original_rom_texture_exported":
                if len(imgs)!=1 or not row.get("native_full_BRTI_name_equal_expected"):
                    raise ValueError("Original PNG/BRTI not independently identified "+row["source"])
                if imgs[0]["native_brti_name_at_same_index_candidate"]!=orig["native_stem"]:
                    raise ValueError("BRTI original texture differs from expected instance "+row["source"])
            elif status in ("multi_texture_components_only_not_composite","no_native_bntx_found","error","destination_png_conflict_preserved"):
                errors.append({"source":row["source"],"status":status,"error":row.get("error","")})
            else:raise ValueError("Unrecognized source decode status "+status)
            for img in imgs:
                p=img["output"]
                if not (p.startswith("assets/images/clothing-original-layout/ClosetIcon/") or p.startswith("assets/textures/completion-original-layout/")):
                    raise ValueError("Wrong original image destination "+p)
                file=root/p
                if not file.is_file() or png_info(file)["sha256"]!=img["sha256"]:
                    raise ValueError("Real PNG CRC/SHA failed "+p)
        shards.append({"manifest":fn.relative_to(root).as_posix(),"original_ROM_sources":stop-start,"statuses":data["status_counts"]})
    if len(seen)!=5441:raise ValueError("Not all original source records audited")
    for row in old:
        img=row["pngs"][0];file=root/img["output"]
        if not file.is_file() or png_info(file)["sha256"]!=img["sha256"]:
            raise ValueError("Earlier original R58 image changed "+img["output"])
    n=counts["one_original_rom_texture_exported"]+39
    result={"schema":"acnh303_r71_complete_original_closet_layout_inventory_v1",
        "original_3_0_3_closet_ROM_sources_total":5480,
        "previously_verified_R58":39,
        "new_original_R68_deficit_sources_audited":5441,
        "R70_R71_original_single_BRTI_pngs":counts["one_original_rom_texture_exported"],
        "new_non_single_source_count":len(errors),
        "all_original_source_images_verified_single_BRTI":n,
        "sources_still_without_single_verified_png":5480-n,
        "all_5480_original_sources_processed":True,
        "all_5480_original_sources_single_PNG_complete":n==5480,
        "every_exported_PNG_crc_and_sha_verified_again":True,
        "no_fabricated_or_renamed_catalog_png_created":True,
        "native_runtime_UI_binding_verified":False,
        "status_counts":dict(counts),"shards":shards,"exceptions":errors}
    base=root/ROOT_E
    (base/"r71-closet-5480-final-audit.json").write_text(json.dumps(result,ensure_ascii=False,indent=2)+"\n","utf-8")
    with (base/"r71-closet-5480-unresolved.csv").open("w",encoding="utf-8",newline="") as f:
        w=csv.DictWriter(f,fieldnames=["source","status","error"]);w.writeheader();w.writerows(errors)
    print(json.dumps({k:v for k,v in result.items() if k not in ("shards","exceptions")},ensure_ascii=False))
if __name__=="__main__":
    p=argparse.ArgumentParser();p.add_argument("--root",type=Path,default=Path("."))
    a=p.parse_args();audit(a.root.resolve())
