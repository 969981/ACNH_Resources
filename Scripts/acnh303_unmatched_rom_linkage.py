#!/usr/bin/env python3
"""Non-promoting evidence joins for the 1,254 unmatched ACNH 3.0.3 catalog PNG names."""
import argparse
import csv
import hashlib
import json
from collections import Counter
from pathlib import Path

ITEM_STATES={"new_original_rom_icon","existing_identical_png","existing_cdn_preserved_native_separately"}

def load(p):
    return json.loads(p.read_text("utf-8"))

def digest(p):
    h=hashlib.sha256()
    with p.open("rb") as f:
        for b in iter(lambda:f.read(1024*1024),b""):
            h.update(b)
    return h.hexdigest()

def audit(root,verify=False):
    base=root/"assets/evidence/rom-items"
    pending=load(base/"unmatched-candidate-audit.json")
    item_rec=load(base/"reconciliation.json")
    village_rec=load(root/"assets/evidence/rom-villager/reconciliation.json")
    if not (item_rec["sources_attempted"]==item_rec["source_count"]==item_rec["verified_original_pngs"]==26277
            and item_rec["unmatched_names_pending_original_source_verification"]==1254
            and item_rec["all_attempted_sources_exported"] is True
            and village_rec["verified_png_files"]==1934 and village_rec["original_source_sha256_reverified"] is True):
        raise ValueError("Verified original ROM batches are incomplete")
    items={}
    batches=sorted(base.glob("batch-*.json"))
    if len(batches)!=53:
        raise ValueError("Missing item source batch")
    for batch in batches:
        for row in load(batch)["items"]:
            if row["status"] not in ITEM_STATES:
                raise ValueError("Unverified original source: "+row["filename"])
            src=row["source_path"]
            if src in items: raise ValueError("Duplicate original source")
            items[src]={
                "source_sha256":row["source_sha256"],
                "png_sha256":row["native_png_sha256"],
                "original_texture_name":row.get("native_brti_name",row["filename"][:-4]),
                "png_path":row.get("output_path") or "assets/images/items/"+row["filename"],
                "batch_evidence":batch.relative_to(root).as_posix(),
                "resource_type":"original_remake_variant_icon"
            }
    if len(items)!=26277:raise ValueError("Item source index count mismatch")
    photos={}
    for batch in sorted((root/"assets/evidence/rom-villager").glob("batch-*.json")):
        for row in load(batch)["results"]:
            if row["category"]!="photo":continue
            src=row["source"]
            if src in photos or row["status"]!="one_original_rom_texture_exported" or len(row["pngs"])!=1:
                raise ValueError("Invalid original villager photo evidence")
            p=row["pngs"][0]
            photos[src]={
                "source_sha256":row["original_source_sha256"],
                "png_sha256":p["sha256"],
                "original_texture_name":p["native_brti_name_at_same_index_candidate"],
                "png_path":p["output"],
                "batch_evidence":batch.relative_to(root).as_posix(),
                "resource_type":"original_villager_photo"
            }
    if len(photos)!=481:raise ValueError("Villager photo source index count mismatch")
    if pending["unmatched_names"]!=len(pending["entries"])!=1254:
        raise ValueError("Original pending list count changed")
    rows=[]
    for entry in pending["entries"]:
        filename=entry["filename"]
        if entry["status"]!="pending_original_rom_source_verification" or entry["native_png_extracted_for_this_entry"] is not False:
            raise ValueError("Pending name already promoted: "+filename)
        category=entry["category"]
        found=None
        if category in ("variant_mapping_needed","villager_photo_other_family"):
            want="possible_remake_zero_zero" if category=="variant_mapping_needed" else "independent_villager_photo_layout"
            candidates=[c for c in entry["candidates"] if c["hypothesis"]==want]
            if len(candidates)!=1 or candidates[0]["mapping_verified"] or candidates[0]["pixel_verified"]:
                raise ValueError("Ambiguous or pre-promoted source: "+filename)
            src=candidates[0]["source_path"]
            evidence=items.get(src) if category=="variant_mapping_needed" else photos.get(src)
            if evidence:
                expected=filename[:-4]+("_Remake_0_0" if category=="variant_mapping_needed" else "")
                if evidence["original_texture_name"]!=expected:
                    raise ValueError("Native texture name disagreement: "+filename)
                found={"original_source_path":src,**evidence}
        elif category not in ("no_named_candidate_in_rom_tree","model_or_base_resource_only","noncanonical_filename_requires_manual_mapping"):
            raise ValueError("Unexpected pending class: "+category)
        if found and verify:
            target=root/found["png_path"]
            if not target.is_file() or digest(target)!=found["png_sha256"]:
                raise ValueError("Missing or modified original ROM PNG: "+str(target))
        rows.append({"requested_filename":filename,"category":category,
                     "status":"pending_original_rom_source_verification",
                     "mapping_verified":False,"original_name_satisfied":False,
                     "distinct_source_asset_verified":bool(found),
                     "distinct_original_rom_asset":found})
    if len(rows)!=1254 or len({x["requested_filename"] for x in rows})!=1254:
        raise ValueError("Missing or duplicated pending catalog names")
    counts=dict(sorted(Counter(x["category"] for x in rows).items()))
    if counts!=pending["classification_counts"]:raise ValueError("Pending category count drift")
    links=[x["distinct_original_rom_asset"] for x in rows if x["distinct_source_asset_verified"]]
    return {"schema":"acnh303_pending_distinct_rom_asset_linkage_v1",
            "original_rom_direct_icons_verified":26277,
            "pending_catalog_names_preserved":1254,
            "pending_categories":counts,
            "source_linked_distinct_images":len(links),
            "source_linked_kinds":dict(sorted(Counter(x["resource_type"] for x in links).items())),
            "candidate_png_sha256_reverified":verify,
            "game_ui_composite_equivalence_verified":False,
            "candidate_to_requested_name_mapping_verified":False,
            "entries":rows}

def main():
    parser=argparse.ArgumentParser()
    parser.add_argument("mode",choices=["plan","export"])
    parser.add_argument("--root",type=Path,default=Path("."))
    parser.add_argument("--sparse-file",type=Path,default=Path("/tmp/acnh-linked-original-pngs.txt"))
    args=parser.parse_args()
    root=args.root.resolve()
    data=audit(root,verify=args.mode=="export")
    if args.mode=="plan":
        paths=sorted({"/"+row["distinct_original_rom_asset"]["png_path"]
                      for row in data["entries"] if row["distinct_source_asset_verified"]})
        args.sparse_file.write_text("\n".join(paths)+("\n" if paths else ""),"utf-8")
    else:
        dst=root/"assets/evidence/rom-items"
        out=dst/"unmatched-native-linkage.json"
        txt=json.dumps(data,indent=2,ensure_ascii=False)+"\n"
        if not out.exists() or out.read_text("utf-8")!=txt:
            out.write_text(txt,"utf-8")
        with (dst/"unmatched-native-linkage.csv").open("w",newline="",encoding="utf-8") as f:
            writer=csv.writer(f)
            writer.writerow(["requested_filename","category","pending_status","verified_distinct_asset","source_rom","original_png","png_sha256","mapping_verified"])
            for row in data["entries"]:
                item=row["distinct_original_rom_asset"] or {}
                writer.writerow([row["requested_filename"],row["category"],row["status"],
                                 row["distinct_source_asset_verified"],item.get("original_source_path",""),
                                 item.get("png_path",""),item.get("png_sha256",""),False])
    print(json.dumps({k:v for k,v in data.items() if k!="entries"},ensure_ascii=False))
    return 0

if __name__=="__main__":
    raise SystemExit(main())
