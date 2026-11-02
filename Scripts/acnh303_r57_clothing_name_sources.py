#!/usr/bin/env python3
"""R57: native ItemClothGroup->ItemParam naming layers vs actual ROM path tree.

No opaque source is declared to be an icon without BNTX/BRTI/pixel verification.
The complete 3.0.3 original Git tree is indexed without -l (blob size access
would hydrate 103,400 objects and time out on blob:none sparse checkout).
"""
from __future__ import annotations
import argparse,csv,json,re,subprocess
from pathlib import Path
from collections import defaultdict,Counter

NCA="e10617820db06889e1638499478da0de_NCA/1"
E=Path("assets/evidence/rom-items")
EXT=".Nin_NX_NVN.zs"

def read(p):return json.loads(p.read_text("utf-8"))
def original_tree(root):
    out=subprocess.check_output(["git","ls-tree","-r","--name-only","HEAD","--",NCA],cwd=root,text=True,timeout=120)
    return out.splitlines()
def original_layers():
    r=read(E/"r56-bcsv-staticparam-original-39.json")
    if r["input_count"]!=39 or r["original_bcsv_tables_scanned"]!=234:
        raise ValueError("R56 source audit changed")
    names=[]
    for row in r["items"]:
        i=[x for x in row["bcsv_exact_cell_hits"] if x["file"].endswith("/ItemParam.csv")]
        c=[x for x in row["bcsv_exact_cell_hits"] if x["file"].endswith("/ItemClothGroup.csv")]
        if len(i)!=1 or len(c)!=1:
            raise ValueError("Expected one native row each in ItemParam and ItemClothGroup for "+row["catalog_name"])
        instances=i[0]["matched_strings"]
        groups=c[0]["matched_strings"]
        if len(instances)!=1 or len(groups)!=1:raise ValueError("Ambiguous original BCSV names")
        names.append({"catalog_name":row["catalog_name"],
           "itemparam_instance":instances[0],
           "itemclothgroup_group":groups[0],
           "itemparam_csv_row":i[0]["row"],
           "clothgroup_csv_row":c[0]["row"]})
    return names
def parse(root):
    layers=original_layers()
    full=original_tree(root)
    paths=[x for x in full if x.startswith(NCA+"/Model/")]
    other=[x for x in full if not x.startswith(NCA+"/Model/")]
    output=[]
    for r in layers:
        v=r["itemparam_instance"]
        g=r["itemclothgroup_group"]
        # Concrete original internal name has final instance digit, while
        # expected catalog png filename appends separate _0 style digit.
        exact=[]
        related=[]
        for path in paths:
            basename=path.rsplit("/",1)[-1]
            if not basename.endswith(EXT):continue
            stem=basename[:-len(EXT)]
            if stem in (v,g) or stem.endswith("_"+v) or stem.endswith("_"+g):
                exact.append(path)
            elif v in stem or g in stem:
                related.append(path)
        names={z.rsplit("/",1)[-1]:z for z in exact}
        original_layout=[p for p in exact if p.rsplit("/",1)[-1].startswith("Layout_")]
        other_exact=[p for p in other if p.rsplit("/",1)[-1].split(".")[0] in (v,g)]
        output.append({**r,"source_name_mapping_verified":True,
             "itemparam_to_clothgroup_name_equal":v==g,
             "one_level_instance_digit":v.startswith(g) and len(v)==len(g)+1 and v[-1].isdigit(),
             "original_3_0_3_model_exact_name_source_count":len(exact),
             "original_3_0_3_model_exact_name_source_paths":sorted(exact)[:100],
             "original_3_0_3_layout_exact_name_source_paths":sorted(original_layout),
             "original_3_0_3_model_related_name_source_count":len(related),
             "original_3_0_3_model_related_name_source_examples":sorted(related)[:12],
             "original_other_dir_exact_name_source_paths":sorted(other_exact)[:12],
             "verified_original_BNTX_brti_texture_equivalence":False,
             "catalog_image_filename_semantic_match_verified":False,
             "requested_catalog_name_still_pending":True})
    status=Counter("has_exact_model_sources" if x["original_3_0_3_model_exact_name_source_count"] else
                   "only_related_model_names" if x["original_3_0_3_model_related_name_source_count"] else
                   "no_model_source_name_candidate" for x in output)
    audit={"schema":"acnh303_r57_original_clothing_groups_model_sources_v1",
           "original_39_names":len(output),
           "nca_tree_path_count":len(full),
           "original_model_path_count":len(paths),
           "instance_to_group_single_digit":sum(x["one_level_instance_digit"] for x in output),
           "exact_model_source_count":sum(x["original_3_0_3_model_exact_name_source_count"] for x in output),
           "exact_layout_source_count":sum(len(x["original_3_0_3_layout_exact_name_source_paths"]) for x in output),
           "names_by_model_path_class":dict(sorted(status.items())),
           "real_original_png_generated_in_this_step":0,
           "do_not_infer_pixel_equivalence_from_similar_name":True,
           "all_original_1254_catalog_names_preserved_as_pending":True,
           "rows":output}
    (E/"r57-original-clothing39-name-source-lookup.json").write_text(
        json.dumps(audit,ensure_ascii=False,indent=2)+"\n","utf-8")
    with (E/"r57-original-clothing39-name-source-lookup.csv").open("w",encoding="utf-8",newline="") as f:
        w=csv.writer(f);w.writerow(["catalog_name","itemparam_instance","itemclothgroup_base",
          "exact_model_sources","exact_layout_sources","related_model_sources","pixel_equivalence_verified"])
        for r in output:
            w.writerow([r["catalog_name"],r["itemparam_instance"],r["itemclothgroup_group"],
                        r["original_3_0_3_model_exact_name_source_count"],
                        len(r["original_3_0_3_layout_exact_name_source_paths"]),
                        r["original_3_0_3_model_related_name_source_count"],False])
    print(json.dumps({k:v for k,v in audit.items() if k!="rows"},ensure_ascii=False))
    return audit
if __name__=="__main__":
    parser=argparse.ArgumentParser()
    parser.add_argument("--root",type=Path,default=Path("."))
    options=parser.parse_args()
    import os
    os.chdir(options.root.resolve())
    parse(Path("."))
