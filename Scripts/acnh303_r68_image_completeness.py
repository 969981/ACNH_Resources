#!/usr/bin/env python3
"""R68: independently audit actual original 3.0.3 ROM image sources vs Git PNG files.

Completeness claims are strictly scoped:
 * original 4 specified villager icon/photo/poster/bromide layout families
 * original Model/Layout_FtrIcon_* + Model/Layout_NpcIcon_* image-source coverage
 * user catalog 27531 exact filenames, distinct from verified candidate sources
Neither source inventory nor catalog equates to all in-game item instances,
runtime composite images, or every texture embedded in every BFRES/BNTX.
"""
from __future__ import annotations
import argparse,csv,glob,json,subprocess
from pathlib import Path
from collections import defaultdict,Counter
NCA="e10617820db06889e1638499478da0de_NCA/1/Model/"
ROOT=Path("assets/evidence")
CAT=Path("assets/catalog/original-27531-sourced-lookup.csv")
OUT=ROOT/"rom-completeness"
VILLAGER={
"photo":{"source_prefix":"Layout_NpcBromide_","glob":"Layout_NpcBromide_*.Nin_NX_NVN.zs","pngdir":"assets/images/villager/photos","expect":481},
"icon":{"source_prefix":"Layout_NpcIcon_","glob":"Layout_NpcIcon_*.Nin_NX_NVN.zs","pngdir":"assets/images/villager/icons","expect":488},
"poster":{"source_prefix":"Layout_FtrIcon_PosterNpc","glob":"Layout_FtrIcon_PosterNpc*.Nin_NX_NVN.zs","pngdir":"assets/images/villager/posters","expect":486},
"bromide_item":{"source_prefix":"Layout_FtrIcon_BromideNpc","glob":"Layout_FtrIcon_BromideNpc*_Remake_0_0.Nin_NX_NVN.zs","pngdir":"assets/images/villager/bromide-items","expect":479}
}
SUFFIX=".Nin_NX_NVN.zs"
def ls(root,dir):
    p=subprocess.run(["git","ls-tree","-r","--name-only","HEAD","--",dir],
        cwd=root,capture_output=True,text=True,check=True,timeout=150)
    return sorted(p.stdout.splitlines())
def report(root,path):return json.loads((root/path).read_text("utf-8"))
def villager_records(root):
    result={}
    files=sorted((root/ROOT/"rom-villager").glob("batch-*.json"))
    if len(files)!=5:raise ValueError("5 villager batches expected")
    for path in files:
        doc=report(root,path.relative_to(root))
        for row in doc["results"]:
            if row["status"]!="one_original_rom_texture_exported" or len(row["pngs"])!=1:
                raise ValueError("Unverified original villager source "+row.get("source","?"))
            if row["source"] in result:raise ValueError("Duplicated original villager source")
            result[row["source"]]=(row["category"],row["pngs"][0]["output"],row["pngs"][0]["sha256"])
    if len(result)!=1934:raise ValueError("Original 1934 source result changed")
    return result
def native_records(root):
    direct={}
    paths=sorted((root/ROOT/"rom-items").glob("batch-[0-9][0-9][0-9][0-9][0-9]-[0-9][0-9][0-9][0-9][0-9].json"))
    if len(paths)!=53:raise ValueError("All 53 prior native PNG batches required")
    for p in paths:
        doc=report(root,p.relative_to(root))
        for row in doc["items"]:
            k=row["source_path"]
            if k in direct:raise ValueError("Duplicate direct ROM source "+k)
            direct[k]=row["filename"]
    if len(direct)!=26277:raise ValueError("Previous direct 26,277 native source records changed")
    return direct
def other_sources(root):
    out=defaultdict(set)
    files=[
       ROOT/"rom-other-layout/report.json",
       ROOT/"rom-clothing-layout/reconciliation.json",
       ROOT/"rom-softdrink/report.json"
    ]
    for p in files:
        doc=report(root,p)
        for row in (doc.get("results",[]) or doc.get("source_records",[])):
            if row.get("status")=="one_original_rom_texture_exported":
                out[p.parent.name].add(row["source"])
    return out
def main_audit(root):
    model=ls(root,NCA)
    all_png_paths=ls(root,"assets/images/")
    if len(model)<50000:raise ValueError("Original model path inventory unexpectedly incomplete")
    pngs={p for p in all_png_paths if p.endswith(".png")}
    png_basenames={p.rsplit("/",1)[-1] for p in pngs}
    all_native=villager_records(root)
    direct=native_records(root)
    extra=other_sources(root)
    linked_sources=set(all_native)|set(direct)|set.union(set(),*extra.values())
    classifications={}
    pending=[]
    families={}
    for family,scope in VILLAGER.items():
        original={p for p in model if Path(p).match(scope["glob"])}
        verified={p for p,(k,_,_) in all_native.items() if k==family}
        dest={p for p in pngs if p.startswith(scope["pngdir"]+"/")}
        expected_files={all_native[p][1] for p in verified}
        unexpected=sorted(dest-expected_files)
        source_missing=sorted(original-verified)
        wrong_paths=sorted(expected_files-dest)
        if len(verified)!=scope["expect"]:
            raise ValueError("Villager original report unexpectedly changed "+family)
        families[family]={"original_ROM_matching_sources":len(original),
            "source_records_verified":len(verified),"actual_png_files_in_folder":len(dest),
            "source_records_without_png_path_in_git":len(wrong_paths),
            "native_ROM_source_not_processed":len(source_missing),
            "foreign_or_unaccounted_png_files":len(unexpected),
            "unprocessed_source_examples":source_missing[:30],
            "unaccounted_file_examples":unexpected[:20],
            "all_ROM_sources_in_this_exact_family_extracted":
               not source_missing and not wrong_paths and not unexpected}
    if sum(v["actual_png_files_in_folder"] for v in families.values())!=1934:
        raise ValueError("Current villager PNG file count changed")
    for tag,prefix in (("FtrIcon","Layout_FtrIcon_"),("NpcIcon","Layout_NpcIcon_"),
                       ("ClosetIcon","Layout_ClosetIcon_"),("GardeningIcon","Layout_GardeningIcon_")):
        all_family={p for p in model if p.rsplit("/",1)[-1].startswith(prefix) and p.endswith(SUFFIX)}
        extracted=all_family & linked_sources
        missing=sorted(all_family-extracted)
        classifications[tag]={"original_ROM_matching_sources":len(all_family),
           "original_sources_with_proven_png_evidence":len(extracted),
           "original_sources_not_in_prior_extract_reports":len(missing),
           "missing_examples":missing[:40],
           "source_file_names_are_not_item_count":True}
        pending.extend((tag,src) for src in missing)
    catalog={"expected_original_user_names":0,"same_name_verified":0,
        "candidate_source_only":0,"actual_requested_png_filename_in_tree":0,
        "candidate_missing_requested_exact_filename":0}
    missing_catalog=[]
    with (root/CAT).open(encoding="utf-8",newline="") as stream:
        for row in csv.DictReader(stream):
            catalog["expected_original_user_names"]+=1
            if row["source_status"]=="exact_original_name_native_png":
                catalog["same_name_verified"]+=1
            elif row["source_status"]=="verified_native_source_candidate_only":
                catalog["candidate_source_only"]+=1
            else:raise ValueError("Unrecognized catalog source class")
            literal=row["catalog_name"]
            # Some true source names live in other subdirs. This checks exact
            # basename in ANY user visible items image folder, not 1-to-1 images.
            if literal in png_basenames:
                catalog["actual_requested_png_filename_in_tree"]+=1
            elif row["source_status"]=="verified_native_source_candidate_only":
                catalog["candidate_missing_requested_exact_filename"]+=1
                if len(missing_catalog)<50:missing_catalog.append(literal)
    if catalog["expected_original_user_names"]!=27531 or catalog["same_name_verified"]!=26277 or catalog["candidate_source_only"]!=1254:
        raise ValueError("User catalog 27,531 source registry changed")
    unextracted=[{"native_UI_family":tag,"original_ROM_source":src}
         for tag,src in pending]
    OUT_ROOT=root/OUT;OUT_ROOT.mkdir(exist_ok=True,parents=True)
    summary={
       "schema":"acnh303_r68_real_ROM_villager_and_item_image_completeness_v1",
       "version":"3.0.3",
       "all_original_Model_tree_file_count":len(model),
       "real_png_count_in_assets_images":len(pngs),
       "real_native_original_villager_source_report_count":len(all_native),
       "villager_original_four_families":families,
       "item_and_related_UI_source_families":classifications,
       "catalog_filename_coverage":catalog,
       "candidate_missing_literal_filename_examples":missing_catalog,
       "unprocessed_real_ROM_sources_for_audited_layout_families_count":len(unextracted),
       "direct_original_26277_rom_sources_verified_in_prior_reports":True,
       "original_catalog_1254_source_candidates_not_filename_equivalent":True,
       "scope_excludes_dynamically_rendered_icons_and_unenumerated_other_texture_families":True,
       "not_an_assertion_all_items_in_game_have_an_extracted_image":True,
       "sources_with_evidence_total_distinct":len(linked_sources),
       "no_PNGs_changed":True
    }
    (OUT_ROOT/"r68-villager-item-source-completeness.json").write_text(
        json.dumps(summary,indent=2,ensure_ascii=False)+"\n","utf-8")
    with (OUT_ROOT/"r68-original-layout-sources-without-extracted-png.csv").open(
        "w",newline="",encoding="utf-8") as stream:
        w=csv.DictWriter(stream,fieldnames=["native_UI_family","original_ROM_source"])
        w.writeheader();w.writerows(unextracted)
    print(json.dumps(summary,ensure_ascii=False,indent=2))
if __name__=="__main__":
    a=argparse.ArgumentParser();a.add_argument("--root",type=Path,default=Path("."))
    args=a.parse_args();main_audit(args.root.resolve())
