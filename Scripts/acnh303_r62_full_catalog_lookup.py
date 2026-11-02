#!/usr/bin/env python3
"""R62: complete 27,531-entry ACNH 3.0.3 original PNG source catalog.

Link authentic originally named icons (26,277) to their exact ROM files; link
other catalog names (1,254) to separately verified native-source candidates.
Never represent candidate pixel equivalence as a completed requested filename.
No community CDN substitute, fake image, silent copy, or alias.
"""
from __future__ import annotations
import argparse,csv,hashlib,json,re,subprocess,sys
from collections import Counter
from pathlib import Path
from acnh303_assets import load_catalog,png_info

CAT=Path("assets/catalog")
EV=Path("assets/evidence/rom-items")
DIRECT=EV
SUPPLEMENT=EV/"r61-all-1254-original-native-sources.json"
NCA="e10617820db06889e1638499478da0de_NCA/1/Model/"
NAME=CAT/"original-27531-sourced-lookup.csv"
REPORT=EV/"r62-all-27531-source-reconciliation.json"
FIELDS=[
"catalog_name","source_status","source_kind","original_rom_source","original_rom_source_sha256",
"original_rom_texture_name","native_png_path","native_png_sha256",
"additional_native_pngs","preexisting_community_png_preserved",
"original_filename_matched_native_texture","application_runtime_filename_equivalence_verified",
"original_png_source_verified","original_png_crc_sha_recently_reverified",
"provenance_evidence",
]

def source_paths(root):
    raw=subprocess.run(
      ["git","ls-tree","-r","--name-only","HEAD","--",
       "assets/images/items/","assets/images/items-rom/","assets/images/villager/",
       "assets/images/other-layout/","assets/images/clothing-original-layout/",
       "assets/images/softdrink-original/"],cwd=root,
      capture_output=True,text=True,check=True,timeout=180)
    return set(raw.stdout.splitlines())

def digest(buf):return hashlib.sha256(buf).hexdigest()
def read(root,p):return json.loads((root/p).read_text(encoding="utf-8"))
def batch_files(root):
    files=sorted(DIRECT.glob("batch-[0-9][0-9][0-9][0-9][0-9]-[0-9][0-9][0-9][0-9][0-9].json"))
    # last batch ends at 26277, included by the glob
    if len(files)!=53:
        raise ValueError("Expected all 53 previously completed original-icon batch reports, found "+str(len(files)))
    return files

def build(root):
    original=load_catalog(root/CAT/"expected-png-names.txt")
    if len(original)!=27531:raise ValueError("Unexpected catalog number")
    expected=set(original)
    candidates=read(root,SUPPLEMENT)
    if candidates["original_catalog_missing_names"]!=1254 or not candidates["source_pngs_individually_checked_in_this_run"]:
        raise ValueError("R61 original 1254 candidate native SHA verification not complete")
    pending={}
    for r in candidates["records"]:
        name=r["requested_original_catalog_name"]
        if name in pending or name not in expected:raise ValueError("Duplicate or extra pending entry: "+name)
        pending[name]=r
    if len(pending)!=1254:raise ValueError("Candidate total was not 1254")
    tree=source_paths(root)
    records={}
    batch_stats=Counter()
    batch_total=0
    native_stats=Counter()
    for path in batch_files(root):
        data=read(root,path)
        if data.get("native_rom_not_cdn") is not True:
            raise ValueError("Batch native-ROM provenance changed "+str(path))
        for x in data.get("items",[]):
            batch_total+=1
            name=x["filename"]
            if name in records or name in pending or name not in expected:
                raise ValueError("Duplicate/unknown original directly indexed name: "+name)
            status=x.get("status","")
            source=x.get("source_path","")
            out=x.get("output_path","")
            name_native=x.get("native_brti_name","")
            if not source.startswith(NCA) or not out.startswith("assets/images/") or out not in tree:
                raise ValueError("Original PNG/source missing in Git index "+name+" :: "+repr({"source":source,"output_path":out,"in_tree":out in tree,"source_valid":source.startswith(NCA),"output_is_png":out.startswith("assets/images/")}))
            if name_native!=name.removesuffix(".png"):
                raise ValueError("Original BRTI name does not match exact filename "+name)
            hs=x.get("source_sha256","")
            ph=x.get("native_png_sha256","")
            if len(hs)!=64 or len(ph)!=64:
                raise ValueError("Original source/PNG hash incomplete "+name)
            if status not in ("new_original_rom_icon","existing_identical_png","existing_cdn_preserved_native_separately"):
                raise ValueError("Previously reported unverified direct icon "+name+" "+status)
            batch_stats[status]+=1
            native_stats[x["layout_kind"]]+=1
            records[name]={
                "catalog_name":name,
                "source_status":"exact_original_name_native_png",
                "source_kind":x["layout_kind"],
                "original_rom_source":source,
                "original_rom_source_sha256":hs,
                "original_rom_texture_name":name_native,
                "native_png_path":out,
                "native_png_sha256":ph,
                "additional_native_pngs":[],
                "preexisting_community_png_preserved":status=="existing_cdn_preserved_native_separately",
                "original_filename_matched_native_texture":True,
                "application_runtime_filename_equivalence_verified":False,
                "original_png_source_verified":True,
                "original_png_crc_sha_recently_reverified":False,
                "provenance_evidence":str(path),
            }
    if len(records)!=26277 or batch_total!=26277:
        raise ValueError("Native 26,277 original BRTI records incomplete")
    direct_keys=set(records)
    if direct_keys & set(pending) or direct_keys | set(pending)!=expected:
        raise ValueError("Catalog union does not exactly match 27,531 expected filenames")
    for name,r in pending.items():
        if not r["native_png_crc_and_sha_reverified_R61"]:
            raise ValueError("R61 PNG CRC or SHA verification missing "+name)
        path=r["native_png_path"]
        if path not in tree:
            raise ValueError("Candidate original PNG absent in Git tree "+name)
        for alt in r["secondary_native_sources"]:
            if alt["native_png_path"] not in tree:
                raise ValueError("Candidate alternate absent in Git tree "+name)
        records[name]={
            "catalog_name":name,"source_status":"verified_native_source_candidate_only",
            "source_kind":r["source_type"],
            "original_rom_source":r["original_rom_source"],
            "original_rom_source_sha256":r["original_source_sha256"],
            "original_rom_texture_name":r["native_texture_BRTI_name"],
            "native_png_path":r["native_png_path"],
            "native_png_sha256":r["native_png_sha256"],
            "additional_native_pngs":[a["native_png_path"] for a in r["secondary_native_sources"]],
            "preexisting_community_png_preserved":False,
            "original_filename_matched_native_texture":False,
            "application_runtime_filename_equivalence_verified":False,
            "original_png_source_verified":True,
            "original_png_crc_sha_recently_reverified":True,
            "provenance_evidence":str(SUPPLEMENT),
        }
    if len(records)!=27531:raise ValueError("All catalog source rows not complete")
    summary={
      "schema":"acnh303_r62_full_catalog_original_rom_source_registry_v1",
      "expected_catalog_names":27531,
      "exact_name_original_BRTI_PNGs":26277,
      "other_original_native_candidates_not_renamed":1254,
      "original_native_source_coverage":27531,
      "original_source_coverage_ratio":"27531/27531",
      "native_original_direct_statuses":dict(sorted(batch_stats.items())),
      "native_original_direct_UI_families":dict(sorted(native_stats.items())),
      "remaining_candidates_kinds":dict(sorted(Counter(p["source_type"] for p in pending.values()).items())),
      "all_direct_icon_original_pngs_reverified_in_prior_batch_runs":True,
      "1254_candidate_png_CRC_SHA_independently_reverified_in_R61":True,
      "the_full_26277_direct_PNGs_not_rehydrated_to_rehash_in_this_run":True,
      "native_filename_byte_identity_for_candidates_not_verified":True,
      "Nintendo_game_runtime_UI_semantics_verified":False,
      "preexisting_community_images_not_overwritten":True,
      "new_PNGs_copied_or_renamed":0,
      "catalog_all_expected_names_unchanged":True,
      "catalog_original_names_still_pending_semantic_equivalence":1254,
      "full_index":NAME.as_posix(),
      "raw_original_name_catalog_sha256":digest((root/CAT/"expected-png-names.txt").read_bytes()),
    }
    return records,summary

def generate(root):
    records,s=build(root)
    with (root/NAME).open("w",newline="",encoding="utf-8") as f:
        w=csv.DictWriter(f,fieldnames=FIELDS)
        w.writeheader()
        for n in sorted(records):
            rec=dict(records[n])
            rec["additional_native_pngs"]="|".join(rec["additional_native_pngs"])
            w.writerow(rec)
    (root/REPORT).write_text(json.dumps(s,ensure_ascii=False,indent=2)+"\n",encoding="utf-8")
    print(json.dumps(s,ensure_ascii=False))
def lookup(root,name,verify):
    table=root/NAME
    if not table.is_file():raise ValueError("Catalog registry not generated; run index mode")
    match=None
    with table.open("r",encoding="utf-8",newline="") as f:
        for row in csv.DictReader(f):
            if row["catalog_name"]==name:
                match=row
                break
    if match is None:raise ValueError("No catalog filename match: "+name)
    if verify:
        p=root/match["native_png_path"]
        if not p.is_file() or p.is_symlink() or png_info(p)["sha256"]!=match["native_png_sha256"]:
            raise ValueError("Native PNG is not available or failed SHA: "+str(p))
        match["native_png_on_disk_crc_sha_reverified"]=True
    match["not_a_copy_or_rename"]=True
    print(json.dumps(match,ensure_ascii=False,indent=2))
def main():
    p=argparse.ArgumentParser()
    p.add_argument("mode",choices=("index","lookup"))
    p.add_argument("--name")
    p.add_argument("--root",type=Path,default=Path("."))
    p.add_argument("--verify-png",action="store_true")
    a=p.parse_args();root=a.root.resolve()
    if a.mode=="lookup":
        if not a.name:p.error("lookup mode requires --name exact.png")
        lookup(root,a.name,a.verify_png)
    else:generate(root)
if __name__=="__main__":main()
