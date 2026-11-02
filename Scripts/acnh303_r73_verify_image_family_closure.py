#!/usr/bin/env python3
"""R73: independent bookkeeping closure of four original icon families.

Reconcile R68 original source deficit with verified R69/R58/R71 outputs and
actual Git file paths. This is NOT a full audit of all BFRES textures or game UI.
"""
from __future__ import annotations
import json,subprocess,csv
from pathlib import Path
from collections import Counter

E=Path("assets/evidence/rom-completeness")
OLD=E/"r68-villager-item-source-completeness.json"
R69=E/"native-layout-batches"
R71=E/"r71-closet-5480-final-audit.json"
V=Path("assets/evidence/rom-villager/reconciliation.json")
def read(p):return json.loads(p.read_text("utf-8"))
def files(prefix):
    r=subprocess.run(["git","ls-tree","-r","--name-only","HEAD","--",prefix],
        capture_output=True,text=True,check=True,timeout=180)
    return set(r.stdout.splitlines())
def audit():
    old=read(OLD);c=old["item_and_related_UI_source_families"]
    ftr=read(R69/"FtrIcon-00000-00001.json")
    garden=read(R69/"GardeningIcon-00000-00003.json")
    closet=read(R71);vill=read(V)
    assert old["unprocessed_real_ROM_sources_for_audited_layout_families_count"]==5445
    assert ftr["status_counts"]=={"one_original_rom_texture_exported":1}
    assert garden["status_counts"]=={"one_original_rom_texture_exported":3}
    assert closet["all_5480_original_sources_single_PNG_complete"] is True
    assert closet["original_3_0_3_closet_ROM_sources_total"]==5480
    assert closet["R70_R71_original_single_BRTI_pngs"]==5441
    assert vill["verified_png_files"]==1934
    ftr_paths=files("assets/images/completion-original-layout/FtrIcon")
    gar_paths=files("assets/images/completion-original-layout/GardeningIcon")
    closet_paths=files("assets/images/clothing-original-layout/ClosetIcon")
    assert len(ftr_paths)==1 and len(gar_paths)==3 and len(closet_paths)==5480
    assert all(p.endswith(".png") for p in ftr_paths|gar_paths|closet_paths)
    expected={x["source"] for x in ftr["entries"]+garden["entries"]}
    assert expected==set(c["FtrIcon"]["missing_examples"]+c["GardeningIcon"]["missing_examples"])
    for rec in ftr["entries"]+garden["entries"]:
        assert rec["native_full_BRTI_name_equal_expected"]
        assert rec["pngs"][0]["output"] in ftr_paths|gar_paths
        assert rec["pngs"][0]["native_PNG_crc_sha_reverified"]
    summary={}
    new={"FtrIcon":1,"GardeningIcon":3,"ClosetIcon":5441,"NpcIcon":0}
    for family in ("FtrIcon","GardeningIcon","ClosetIcon","NpcIcon"):
        base=c[family];delta=new[family]
        expected_total=base["original_ROM_matching_sources"]
        have=base["original_sources_with_proven_png_evidence"]+delta
        assert expected_total==have, f"{family} {have}!={expected_total}"
        summary[family]={"original_ROM_source_count":expected_total,
          "verified_original_source_PNGs":have,
          "newly_verified_since_R68":delta,
          "still_missing":expected_total-have,
          "all_source_files_covered":True}
    cat=old["catalog_filename_coverage"]
    out={
      "schema":"acnh303_r73_four_original_UI_icon_families_closed_v1",
      "game_version":"3.0.3",
      "targeted_families":summary,
      "verified_four_family_source_total":sum(x["original_ROM_source_count"] for x in summary.values()),
      "four_family_missing_original_source_files":0,
      "original_villager_4_families_pngs":1934,
      "original_villager_sources_without_png":0,
      "new_native_PNGs_R69_R70_R71":5445,
      "actual_closet_PNG_files_in_Git":len(closet_paths),
      "all_5445_R68_missing_original_files_processed_as_single_verified_PNG":True,
      "original_27531_expected_catalog_filename_semantics_still_not_fully_verified":True,
      "all_game_BFRES_BNTX_models_and_dynamic_runtime_rendering_not_in_scope":True,
      "no_existing_rom_or_catalog_images_changed_by_this_audit":True,
    }
    dest=E/"r73-four-family-original-image-completeness.json"
    dest.write_text(json.dumps(out,ensure_ascii=False,indent=2)+"\n","utf-8")
    print(json.dumps(out,ensure_ascii=False,indent=2))
if __name__=="__main__":audit()
