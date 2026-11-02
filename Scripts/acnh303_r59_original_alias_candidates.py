#!/usr/bin/env python3
"""R59: provenance-backed original 39 clothing PNG alias candidate manifest.

Alias candidates are not new PNGs. Each is an original 3.0.3 FtrIcon or ClosetIcon
with matching ItemParam instance ID/name, verified original BRTI name and SHA.
Never declare Nintendo runtime or the catalog's generated _0_0 name equivalent.
"""
import argparse,csv,json,hashlib
from pathlib import Path
from collections import Counter
from acnh303_assets import png_info

E=Path("assets/evidence/rom-items")
C=Path("assets/evidence/rom-clothing-layout")
CATS=("FtrIcon","ClosetIcon")
def load(path):return json.loads(path.read_text("utf-8"))
def verify(root):
    r56=load(root/E/"r56-bcsv-staticparam-original-39.json")
    r57=load(root/E/"r57-original-clothing39-name-source-lookup.json")
    r58=load(root/C/"reconciliation.json")
    if len(r56["items"])!=39 or r57["original_39_names"]!=39 or r58["verified_single_BRTI_name_native_pngs"]!=78:
        raise ValueError("Missing independently verified original archive and PNG evidence")
    src={}
    for r in r58["source_records"]:
        identity=(r["requested_catalog_name"],r["category"])
        if identity in src:raise ValueError("Duplicate original family")
        if not r["original_single_BRTI_name_verified"] or len(r["pngs"])!=1:
            raise ValueError("Original BRTI native status changed")
        p=r["pngs"][0]
        actual=root/p["output"]
        if not actual.is_file() or png_info(actual)["sha256"]!=p["sha256"]:
            raise ValueError("Original standalone PNG SHA mismatch "+p["output"])
        if r["native_itemparam_name"]!=p["native_brti_name_at_same_index_candidate"]:
            raise ValueError("Native BRTI item name mismatch")
        src[identity]=r
    out=[]
    bcsv={x["catalog_name"]:x for x in r57["rows"]}
    for row in r56["items"]:
        name=row["catalog_name"]
        if name not in bcsv:raise ValueError("Missing BCSV crosswalk name")
        meta=bcsv[name]
        values={}
        for family in CATS:
            item=src.get((name,family))
            if item is None or item["native_itemparam_name"]!=meta["itemparam_instance"]:
                raise ValueError("Original family or item instance mismatch "+name)
            p=item["pngs"][0]
            if item["source"] not in meta["original_3_0_3_layout_exact_name_source_paths"]:
                raise ValueError("Not an actual original source path "+name)
            values[family]={
                "output_png":p["output"],
                "png_sha256":p["sha256"],
                "width":p["width"],"height":p["height"],
                "original_rom_file":item["source"],
                "original_rom_sha256":item["original_source_sha256"],
                "native_BRTI_name":p["native_brti_name_at_same_index_candidate"],
                "native_BRTI_name_verified":True,
                "independent_png_crc_sha_verified_again":True
            }
        if values["FtrIcon"]["png_sha256"]==values["ClosetIcon"]["png_sha256"]:
            raise ValueError("FtrIcon and ClosetIcon unexpectedly byte-identical "+name)
        out.append({
            "requested_catalog_png_name":name,
            "original_itemparam_instance_name":meta["itemparam_instance"],
            "original_itemclothgroup_name":meta["itemclothgroup_group"],
            "itemparam_csv_line":meta["itemparam_csv_row"],
            "itemclothgroup_csv_line":meta["clothgroup_csv_row"],
            "original_ftricon":values["FtrIcon"],
            "original_closeticon":values["ClosetIcon"],
            "verified_original_3_0_3_resource_paths_and_native_png_pixels":True,
            "catalog_filename_0_0_equivalence_verified":False,
            "actual_Nintendo_runtime_layout_selection_verified":False,
            "original_catalog_status_preserved":"pending_original_rom_source_verification",
            "image_copied_or_renamed":False
        })
    assert len(out)==39
    return {"schema":"acnh303_r59_39_original_clothing_pngs_provenance_alias_candidates_v1",
            "source_table_itemparam_and_itemclothgroup_joined":39,
            "native_FtrIcon_png_sha_verified":39,
            "native_ClosetIcon_png_sha_verified":39,
            "native_original_rom_pngs_total":78,
            "ftr_icon_observed_dimensions":dict(Counter(str((r["original_ftricon"]["width"],r["original_ftricon"]["height"])) for r in out)),
            "closet_icon_observed_dimensions":dict(Counter(str((r["original_closeticon"]["width"],r["original_closeticon"]["height"])) for r in out)),
            "ftr_vs_closet_sha_identical":0,
            "catalog_0_0_alias_runtime_equivalence_proven":False,
            "catalog_original_1254_pending_names_unchanged":True,
            "new_PNGs_written_by_this_alias_step":0,
            "entries":out}
def main():
    ap=argparse.ArgumentParser();ap.add_argument("--root",type=Path,default=Path("."))
    args=ap.parse_args();root=args.root.resolve();r=verify(root)
    loc=root/C/"catalog-alias-candidates.json"
    loc.write_text(json.dumps(r,indent=2,ensure_ascii=False)+"\n",encoding="utf-8")
    dest=root/"assets/catalog/original-39-native-png-alias-candidates.csv"
    dest.parent.mkdir(exist_ok=True,parents=True)
    with dest.open("w",newline="",encoding="utf-8") as f:
        w=csv.writer(f)
        w.writerow(["requested_catalog_png","itemparam_instance","itemclothgroup_group",
                    "native_ftr_icon","native_ftr_png_sha256",
                    "native_closet_icon","native_closet_png_sha256",
                    "original_rom_paths_and_png_hashes_verified",
                    "runtime_catalog_alias_equivalence_verified"])
        for x in r["entries"]:
            w.writerow([x["requested_catalog_png_name"],x["original_itemparam_instance_name"],
               x["original_itemclothgroup_name"],
               x["original_ftricon"]["output_png"],x["original_ftricon"]["png_sha256"],
               x["original_closeticon"]["output_png"],x["original_closeticon"]["png_sha256"],
               True,False])
    print(json.dumps({k:v for k,v in r.items() if k!="entries"},ensure_ascii=False))
if __name__=="__main__":main()
