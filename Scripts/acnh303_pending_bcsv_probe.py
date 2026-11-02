#!/usr/bin/env python3
"""Read-only ACNH 3.0.3 ItemParam/ItemRemake + RomFS tree evidence for pending images.

An exact string in a BCSV column is evidence of occurrence, NOT semantic
confirmation of base-name->Remake_0_0 or an in-game icon display rule.
Never modify or promote the 1,254 pending entries.
"""
from __future__ import annotations
import argparse
import csv
import hashlib
import json
import re
import subprocess
from collections import Counter,defaultdict
from pathlib import Path

MODEL="e10617820db06889e1638499478da0de_NCA/1/Model"
ROM="e10617820db06889e1638499478da0de_NCA/1"
UNPACK="UnPack/1/Bcsv"
CATS=("variant_mapping_needed","no_named_candidate_in_rom_tree","villager_photo_other_family")
SAFE=re.compile(r"[A-Za-z0-9_.-]+[.]png\Z")
ROM_ZS=".Nin_NX_NVN.zs"

def fail(cond,why):
    if not cond:raise ValueError(why)

def read(p):return json.loads(p.read_text("utf-8"))

def sha(p):
    h=hashlib.sha256()
    with p.open("rb") as f:
        for b in iter(lambda:f.read(1024*1024),b""):h.update(b)
    return h.hexdigest()

def names_index(root):
    cmd=["git","ls-tree","-r","--name-only","HEAD","--",ROM]
    r=subprocess.run(cmd,cwd=root,capture_output=True,text=True,check=True,timeout=120)
    return [s for s in r.stdout.splitlines() if s.startswith(ROM+"/")]

def csv_occurrences(path,names):
    exact=defaultdict(list)
    present=set(names)
    with path.open(encoding="utf-8-sig",newline="") as f:
        rd=csv.DictReader(f)
        columns=rd.fieldnames or []
        fail("_row_index" in columns, "BCSV source CSV is not a parsed row-indexed table: "+str(path))
        for row in rd:
            matches=[k for k,v in row.items() if v is not None and v in present]
            if not matches:continue
            ids={k:row.get(k) for k in ("_row_index","_row_offset_raw","hash_54706054","hash_87BF00E8","hash_036E8EBE")
                 if k in row}
            for name in set(row[k] for k in matches):
                hit={"row_index":row["_row_index"],"matched_columns":[k for k in matches if row[k]==name],
                     "identifier_field_samples":ids}
                exact[name].append(hit)
    return {"columns":columns,"matches":exact}

def tree_probes(stem,tree):
    # Exact filename stem is stronger than a substring. No image equivalence inferred.
    files=[]
    decorated=[]
    for p in tree:
        base=p.rsplit("/",1)[-1]
        if base==stem+ROM_ZS or base==stem+".bcsv":
            files.append(p)
        if stem.lower() in base.lower() and base not in (stem+ROM_ZS,stem+".bcsv"):
            decorated.append(p)
    return {"exact_stem_paths":files[:12], "exact_stem_path_count":len(files),
            "related_name_paths":decorated[:16],"related_name_path_count":len(decorated)}

def analyze(root):
    base=root/"assets/evidence/rom-items"
    audit=read(base/"unmatched-candidate-audit.json")
    linkage=read(base/"unmatched-native-linkage.json")
    rec=read(base/"reconciliation.json")
    fail(audit["unmatched_names"]==1254 and len(audit["entries"])==1254 and
         rec["verified_original_pngs"]==26277 and rec["all_attempted_sources_exported"] is True,
         "The original direct ROM/source audit was changed")
    fail(linkage["pending_catalog_names_preserved"]==1254 and
         linkage["source_linked_distinct_images"]==823,
         "The prior original PNG linkage evidence is absent")
    linked={r["requested_filename"]:r for r in linkage["entries"]}
    names={e["filename"][:-4] for e in audit["entries"]}
    itemparam=root/UNPACK/"ItemParam.csv"
    remake=root/UNPACK/"ItemRemake.csv"
    param=csv_occurrences(itemparam,names)
    # Remake table contains numeric fields of unknown meaning; record metadata,
    # not speculative joins through coincidentally matching integers.
    with remake.open(encoding="utf-8-sig",newline="") as f:
        reader=csv.reader(f)
        remake_cols=next(reader)
        remake_rows=sum(1 for _ in reader)
    tree=names_index(root)
    outputs=[]
    for e in audit["entries"]:
        name=e["filename"]; stem=name[:-4]; cat=e["category"]
        fail(SAFE.fullmatch(name) is not None and cat in CATS
             and e["status"]=="pending_original_rom_source_verification"
             and e["native_png_extracted_for_this_entry"] is False,
             "Pending catalog state was changed: "+name)
        old=linked.get(name)
        fail(old is not None and old["status"]=="pending_original_rom_source_verification" and
             old["mapping_verified"] is False, "Missing prior non-promoting evidence: "+name)
        evidence=old["distinct_original_rom_asset"]
        p_hits=param["matches"].get(stem,[])
        item={"pending_name":name,"category":cat,"catalog_state":"pending_original_rom_source_verification",
              "mapping_verified":False,"native_original_filename_satisfied":False,
              "item_param_exact_name_occurrence":bool(p_hits),
              "item_param_hits":p_hits[:8],
              "item_param_hit_count":len(p_hits),
              "prior_verified_distinct_asset":evidence,
              "base_to_variant_semantic_mapping_proven":False}
        if cat=="variant_mapping_needed":
            fail(evidence is not None and evidence["resource_type"]=="original_remake_variant_icon",
                 "Missing verified remake image for "+name)
            target_name=stem+"_Remake_0_0"
            item["native_variant_png_name"]=target_name+".png"
            item["native_variant_texture_name"]=evidence["original_texture_name"]
            fail(evidence["original_texture_name"]==target_name,
                 "Native PNG texture does not match variant "+name)
            # Inspect available ROM siblings, not infer what default item display selects.
            prefix="Layout_FtrIcon_"+stem+"_Remake_"
            siblings=[p for p in tree if p.startswith(MODEL+"/"+prefix) and p.endswith(ROM_ZS)]
            item["rom_remake_variant_source_count"]=len(siblings)
            item["rom_remake_variant_source_examples"]=siblings[:12]
            item["raw_itemremake_table_join_semantics_verified"]=False
        elif cat=="no_named_candidate_in_rom_tree":
            item["full_rom_tree_filename_probe"]=tree_probes(stem,tree)
            item["presence_scope"]="3.0.3 checked-in RomFS Git tree and decoded ItemParam CSV"
            item["not_proof_of_asset_absence_across_game_versions"]=True
        outputs.append(item)
    stats=Counter(x["category"] for x in outputs)
    fail(dict(stats)==audit["classification_counts"],"Candidate groups changed")
    variants=[x for x in outputs if x["category"]=="variant_mapping_needed"]
    unknown=[x for x in outputs if x["category"]=="no_named_candidate_in_rom_tree"]
    return {
        "schema":"acnh303_pending_bcsv_and_full_rom_tree_probe_v1",
        "input_provenance":{"itemparam_csv_sha256":sha(itemparam),"itemremake_csv_sha256":sha(remake),
                            "remake_rows":remake_rows,"remake_columns":remake_cols,
                            "itemparam_columns":param["columns"],
                            "rom_git_tree_path_count":len(tree)},
        "source_mapping_confirmation":"not_verified",
        "classification_counts":dict(sorted(stats.items())),
        "variant_candidates_with_exact_itemparam_name":sum(x["item_param_exact_name_occurrence"] for x in variants),
        "variant_candidates_without_exact_itemparam_name":sum(not x["item_param_exact_name_occurrence"] for x in variants),
        "unknown_candidates_with_exact_itemparam_name":sum(x["item_param_exact_name_occurrence"] for x in unknown),
        "unknown_candidates_with_full_tree_exact_stem":sum(bool(x["full_rom_tree_filename_probe"]["exact_stem_path_count"]) for x in unknown),
        "unknown_candidates_with_full_tree_related_name":sum(bool(x["full_rom_tree_filename_probe"]["related_name_path_count"]) for x in unknown),
        "unmatched_names_remain_pending":1254,
        "itemparam_csv_exact_string_is_not_business_semantic_proof":True,
        "entries":outputs
    }

def main():
    p=argparse.ArgumentParser()
    p.add_argument("--root",type=Path,default=Path("."))
    args=p.parse_args()
    root=args.root.resolve()
    result=analyze(root)
    base=root/"assets/evidence/rom-items"
    target=base/"unmatched-bcsv-rom-probe.json"
    target.write_text(json.dumps(result,ensure_ascii=False,indent=2)+"\n",encoding="utf-8")
    with (base/"unmatched-bcsv-rom-probe.csv").open("w",encoding="utf-8",newline="") as f:
        writer=csv.writer(f)
        writer.writerow(["pending_name","category","itemparam_exact_name_occurrence",
                         "itemparam_row_ids","remake_variant_rom_source_count",
                         "other_rom_exact_stem_count","other_rom_related_filename_count","mapping_verified"])
        for row in result["entries"]:
            probe=row.get("full_rom_tree_filename_probe",{})
            writer.writerow([row["pending_name"],row["category"],
                             row["item_param_exact_name_occurrence"],
                             ";".join(h["row_index"] for h in row["item_param_hits"]),
                             row.get("rom_remake_variant_source_count",""),
                             probe.get("exact_stem_path_count",""),
                             probe.get("related_name_path_count",""),False])
    print(json.dumps({k:v for k,v in result.items() if k not in ("entries","input_provenance")},ensure_ascii=False))
    return 0

if __name__=="__main__":
    raise SystemExit(main())
