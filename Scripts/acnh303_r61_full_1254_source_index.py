#!/usr/bin/env python3
"""R61: 1,254 legacy-catalog names -> original 3.0.3 ROM PNG provenance index.

This is a source/evidence reconciliation, *not* permission to rename files.
Original catalog 1254 missing-name status stays unresolved until each requested
filename's actual game/client UI choice has been independently checked.
Five disjoint source kinds: 344 variant, 479 villager photograph, 391 other
layout, 39 named clothes, one softdrink with version suffix.
"""
from __future__ import annotations
import argparse,csv,hashlib,json,subprocess
from collections import Counter
from pathlib import Path
from acnh303_assets import png_info

NCA="e10617820db06889e1638499478da0de_NCA/1/Model/"
E=Path("assets/evidence/rom-items")
SOURCE_LINK=E/"unmatched-native-linkage.json"
R53=E/"r53-client-iname-id-and-40.json"
OTHER=Path("assets/evidence/rom-other-layout/report.json")
CLOTH=Path("assets/evidence/rom-clothing-layout/catalog-alias-candidates.json")
SOFT=Path("assets/evidence/rom-softdrink/report.json")
CATS={
    "original_remake_variant_icon":344,
    "original_villager_photo":479,
    "original_other_UI_layout":391,
    "original_FtrIcon_clothing_instance":39,
    "original_3_0_3_softdrink_base_not_version_alias":1,
}

def read(root,p):return json.loads((root/p).read_text(encoding="utf-8"))
def source(row,*,name,path,png_sha,rom_path,rom_sha,brti,kind,context,alt=None,client=None):
    if path.endswith(".partial") or not png_sha or len(png_sha)!=64:
        raise ValueError("Incomplete original source PNG/hash: "+name)
    if not rom_path.startswith(NCA) or not rom_sha or len(rom_sha)!=64:
        raise ValueError("Invalid original ROM provenance: "+name)
    return {"requested_original_catalog_name":name,
            "source_type":kind,
            "original_rom_source":rom_path,"original_source_sha256":rom_sha,
            "native_texture_BRTI_name":brti,"native_png_path":path,
            "native_png_sha256":png_sha,
            "mapping_evidence":context,
            "secondary_native_sources":alt or [],
            "app_static_file_lookup_evidence":client,
            "native_png_pixels_verified_from_prior_runs":True,
            "requested_filename_png_created":False,
            "Nintendo_runtime_catalog_filename_equivalence_verified":False,
            "original_catalog_status":"pending_original_source_semantic_equivalence"}
def assemble(root):
    linkage=read(root,SOURCE_LINK)
    if linkage.get("pending_catalog_names_preserved")!=1254:
        raise ValueError("Original expected pending catalog baseline changed")
    old={r["requested_filename"]:r for r in linkage["entries"]}
    if len(old)!=1254:raise ValueError("Legacy missing-name catalog duplicated")

    r53=read(root,R53)
    clients={r["name"]:r for r in r53["base_names_344"]}
    if len(clients)!=344:raise ValueError("R53 app source baseline changed")
    other=read(root,OTHER)
    clothing=read(root,CLOTH)
    soft=read(root,SOFT)
    result={}
    def add(r):
        name=r["requested_original_catalog_name"]
        if name not in old:raise ValueError("Not in original 1,254 catalog: "+name)
        if name in result:raise ValueError("Multiple source classes assigned to: "+name)
        result[name]=r
    for name,rec in old.items():
        if rec["category"] not in ("variant_mapping_needed","villager_photo_other_family"):
            continue
        x=rec.get("distinct_original_rom_asset")
        if not x or not rec.get("distinct_source_asset_verified"):
            raise ValueError("Previously source-verified original missing "+name)
        typ=x["resource_type"]
        info=None
        if typ=="original_remake_variant_icon":
            key=name.removesuffix(".png")
            match=clients.get(key)
            if not match or not match["client_items_csv_same_id_and_name"] or not match["client_variations_csv_same_id_and_name"]:
                raise ValueError("Application ID and iName evidence missing for "+name)
            info={"pokercore_items_and_variations_id_iName_matched":True,
                  "item_id_decimal":match["original_item_id_decimal"],
                  "main_method_tries_0_0_before_base":True,
                  "actual_application_execution_verified":False}
        add(source(rec,name=name,path=x["png_path"],
                   png_sha=x["png_sha256"],rom_path=x["original_source_path"],
                   rom_sha=x["source_sha256"],brti=x["original_texture_name"],
                   kind=typ,client=info,context="R49 linkage + R53 client" if info else "R49 original photo"))
    if len(result)!=823:raise ValueError("Prior 823 native linkage mismatch")

    for x in other["results"]:
        name=x["requested_png_name"]
        if x.get("status")!="one_original_rom_texture_exported" or len(x.get("pngs",[]))!=1:
            raise ValueError("Unverified original other layout for "+name)
        p=x["pngs"][0]
        add(source(x,name=name,path=p["output"],png_sha=p["sha256"],
            rom_path=x["source"],rom_sha=x["original_source_sha256"],
            brti=p["native_brti_name_at_same_index_candidate"],
            kind="original_other_UI_layout",
            context="R50 original layout category "+x["category"]+" - not standard FtrIcon equivalence"))
    if len(result)!=1214:raise ValueError("391 original alternative layouts not accounted for")

    for x in clothing["entries"]:
        name=x["requested_catalog_png_name"]
        f=x["original_ftricon"];c=x["original_closeticon"]
        if not(f["native_BRTI_name_verified"] and c["native_BRTI_name_verified"]):
            raise ValueError("One of both original BRTIs not verified")
        if f["native_BRTI_name"]!=x["original_itemparam_instance_name"]:
            raise ValueError("Original instance vs BRTI name conflict "+name)
        add(source(x,name=name,path=f["output_png"],png_sha=f["png_sha256"],
                   rom_path=f["original_rom_file"],rom_sha=f["original_rom_sha256"],
                   brti=f["native_BRTI_name"],kind="original_FtrIcon_clothing_instance",
                   context="R56 ItemParam + ItemClothGroup, R58 real FtrIcon, R59 SHA",
                   alt=[{"family":"ClosetIcon","native_png_path":c["output_png"],
                         "native_png_sha256":c["png_sha256"],
                         "original_rom_source":c["original_rom_file"],
                         "original_source_sha256":c["original_rom_sha256"],
                         "native_texture_BRTI_name":c["native_BRTI_name"]}]))
    if len(result)!=1253:raise ValueError("39 original clothing sources not accounted for")
    if soft["native_pngs_bnti_and_sha_verified"]!=2:raise ValueError("Real softdrink textures not verified")
    item={r["category"]:r for r in soft["source_records"]}
    if set(item)!={"FtrIcon","CookingIcon"}:raise ValueError("Original softdrink families missing")
    f=item["FtrIcon"];c=item["CookingIcon"]
    fp=f["pngs"][0];cp=c["pngs"][0]
    if f["original_catalog_requested_png"]!="FtrSoftdrinkOrange_3.0.0.png":
        raise ValueError("The exact original user filename is different")
    add(source(f,name="FtrSoftdrinkOrange_3.0.0.png",
               path=fp["output"],png_sha=fp["sha256"],rom_path=f["source"],
               rom_sha=f["original_source_sha256"],
               brti=fp["native_brti_name_at_same_index_candidate"],
               kind="original_3_0_3_softdrink_base_not_version_alias",
               context="R60 true 3.0.3 FtrIcon; 3.0.0 pixel identity unverified",
               alt=[{"family":"CookingIcon","native_png_path":cp["output"],
                     "native_png_sha256":cp["sha256"],
                     "original_rom_source":c["source"],
                     "original_source_sha256":c["original_source_sha256"],
                     "native_texture_BRTI_name":cp["native_brti_name_at_same_index_candidate"]}]))
    if len(result)!=1254 or set(result)!=set(old):
        raise ValueError("Incomplete original pending catalog union")
    stats=dict(sorted(Counter(r["source_type"] for r in result.values()).items()))
    if stats!=CATS:raise ValueError("Source categories unexpectedly changed "+repr(stats))
    return {"schema":"acnh303_r61_pending_1254_original_source_index_v1",
            "original_catalog_missing_names":1254,
            "every_requested_name_has_an_actual_original_rom_png_source_candidate":True,
            "original_source_counts":stats,
            "source_pngs_individually_checked_in_this_run":False,
            "original_catalog_renames_or_duplicates_written":0,
            "Nintendo_runtime_requested_filename_semantics_verified":False,
            "completely_distinct_artifacts_are_not_one_picture_claim":True,
            "source_evidence_original_ROM_3_0_3_only":True,
            "records":list(result[n] for n in sorted(result))}
def gather_paths(doc):
    return sorted({r["native_png_path"] for r in doc["records"]}.union(
         x["native_png_path"] for r in doc["records"] for x in r["secondary_native_sources"]))
def plan(root):
    r=assemble(root)
    paths=gather_paths(r)
    file=Path("/tmp/acnh-r61-sparse-native-pngs.txt")
    file.write_text("".join("/"+p+"\n" for p in paths),"utf-8")
    print(json.dumps({"pending_catalog_names":len(r["records"]),
        "distinct_native_pngs_requested_for_crc_sha_check":len(paths),
        "classes":r["original_source_counts"]},ensure_ascii=False))
def write(root):
    r=assemble(root)
    paths=gather_paths(r)
    source_cache={}
    for index,path in enumerate(paths):
        real=root/path
        if not real.is_file() or real.is_symlink():
            raise ValueError("Missing genuine source PNG "+path)
        res=png_info(real)
        source_cache[path]=res["sha256"]
        if (index+1)%250==0:
            print("Full PNG CRC+SHA check",index+1,"/",len(paths),flush=True)
    for rec in r["records"]:
        if source_cache[rec["native_png_path"]]!=rec["native_png_sha256"]:
            raise ValueError("Original primary PNG hash changed: "+rec["requested_original_catalog_name"])
        for alt in rec["secondary_native_sources"]:
            if source_cache[alt["native_png_path"]]!=alt["native_png_sha256"]:
                raise ValueError("Original secondary PNG hash changed: "+rec["requested_original_catalog_name"])
        rec["native_png_crc_and_sha_reverified_R61"]=True
    r["source_pngs_individually_checked_in_this_run"]=True
    r["independent_native_png_paths_checked"]=len(paths)
    path=root/E
    (path/"r61-all-1254-original-native-sources.json").write_text(
       json.dumps(r,ensure_ascii=False,indent=2)+"\n",encoding="utf-8")
    out=root/"assets/catalog/original-1254-provenance-index.csv"
    out.parent.mkdir(parents=True,exist_ok=True)
    with out.open("w",newline="",encoding="utf-8") as f:
        w=csv.writer(f)
        w.writerow(["requested_catalog_name","source_class","original_3_0_3_rom_path",
                    "native_png_path","native_png_sha256","native_texture_BRTI_name",
                    "secondary_pngs","native_png_crc_sha_verified",
                    "requested_filename_semantics_verified","catalog_image_alias_written"])
        for row in r["records"]:
            w.writerow([row["requested_original_catalog_name"],row["source_type"],
                row["original_rom_source"],row["native_png_path"],row["native_png_sha256"],
                row["native_texture_BRTI_name"],
                "|".join(x["native_png_path"] for x in row["secondary_native_sources"]),
                True,False,False])
    print(json.dumps({k:v for k,v in r.items() if k!="records"},ensure_ascii=False))
def main():
    p=argparse.ArgumentParser()
    p.add_argument("mode",choices=("plan","verify"))
    p.add_argument("--root",type=Path,default=Path("."))
    args=p.parse_args()
    root=args.root.resolve()
    if args.mode=="plan":plan(root)
    else:write(root)
if __name__=="__main__":main()
