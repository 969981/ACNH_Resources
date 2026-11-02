#!/usr/bin/env python3
"""Triages ItemRemake numeric cross-references without guessing hashed field semantics."""
import argparse,csv,hashlib,json
from collections import Counter,defaultdict
from pathlib import Path

def read(p):return json.loads(p.read_text("utf-8"))

def make(root):
    path=root/"assets/evidence/rom-items/unmatched-bcsv-rom-probe.json"
    data=read(path)
    rows=data["entries"]
    var=[x for x in rows if x["category"]=="variant_mapping_needed"]
    other=[x for x in rows if x["category"]=="no_named_candidate_in_rom_tree"]
    if len(var)!=344 or len(other)!=431:raise ValueError("Pending input count mismatch")
    # Base ItemParam name exact match -> row ID only, no assumption about field meaning.
    wanted={x["pending_name"][:-4] for x in var}
    known={}
    with (root/"UnPack/1/Bcsv/ItemParam.csv").open("r",encoding="utf-8-sig",newline="") as f:
        for r in csv.DictReader(f):
            fields=[field for field,val in r.items() if val in wanted]
            for field in fields:
                item=r[field]
                known.setdefault(item,[]).append({
                    "row_index":r["_row_index"],"exact_name_column":field,
                    "item_id_field":r.get("hash_54706054"),
                    "other_numeric_reference_samples":{k:r[k] for k in (
                      "hash_54706054","hash_9C32CF82","hash_690E3379") if k in r}
                })
    if len(known)!=344:raise ValueError("Not all original ItemParam names match")
    # Score potential join fields against ItemParam row indices. Just a hypothesis.
    indices={int(v[0]["row_index"]):name for name,v in known.items()}
    with (root/"UnPack/1/Bcsv/ItemRemake.csv").open("r",encoding="utf-8-sig",newline="") as f:
        remake=list(csv.DictReader(f))
    candidate_fields={}
    for field in remake[0]:
        if field in ("_row_index","_row_offset_raw"):continue
        hits=defaultdict(list)
        for record in remake:
            value=record.get(field,"")
            if value.isdigit() and int(value) in indices:
                hits[indices[int(value)]].append(record["_row_index"])
        if len(hits)>=10:
            candidate_fields[field]={"itemparam_row_ids_found":len(hits),
                "itemparam_row_ids_unique_occurrence":sum(len(v)==1 for v in hits.values()),
                "examples":[{"name":name,"remake_rows":ids[:4]}
                   for name,ids in list(sorted(hits.items()))[:10]]}
    sample_names=["FtrBambooLamp","FtrAcorsticguitar","FtrAlomapot","FtrWoodenTableS",
                  "FtrAsianLanternMCeiling","FtrBearXL"]
    samples={n:known.get(n,[]) for n in sample_names}
    groups=Counter()
    groups_examples=defaultdict(list)
    no_param=[]
    no_paths=[]
    for row in other:
        name=row["pending_name"]
        i=bool(row["item_param_exact_name_occurrence"])
        j=bool(row["full_rom_tree_filename_probe"]["related_name_path_count"])
        label=("itemparam_exact" if i else "itemparam_absent")+"__"+("rom_related_path" if j else "no_related_path")
        groups[label]+=1
        if len(groups_examples[label])<22:
            groups_examples[label].append({"name":name,
                "rom_paths":row["full_rom_tree_filename_probe"]["related_name_paths"][:3]})
        if not i:no_param.append(name)
        if not j:no_paths.append(name)
    result={
        "schema":"acnh303_itemremake_numeric_field_triage_v1",
        "input_probe_sha256":hashlib.sha256(path.read_bytes()).hexdigest(),
        "source_tables":["UnPack/1/Bcsv/ItemParam.csv","UnPack/1/Bcsv/ItemRemake.csv"],
        "itemparam_base_names_seen":len(known),"itemparam_base_name_exact_column_counts":
             dict(sorted(Counter(z["exact_name_column"] for vals in known.values() for z in vals).items())),
        "itemparam_row_samples":samples,
        "itemremake_record_count":len(remake),
        "numeric_cross_reference_column_hypotheses":candidate_fields,
        "numeric_join_fields_semantically_confirmed":False,
        "missing_431_cross_classification":dict(sorted(groups.items())),
        "missing_431_examples":dict(sorted(groups_examples.items())),
        "missing_431_not_in_itemparam":no_param,
        "missing_431_without_related_tree_filename":no_paths,
        "base_to_remake_default_icon_mapping_verified":False,
        "all_1254_unmatched_entries_unchanged":True,
    }
    return result

def main():
    p=argparse.ArgumentParser();p.add_argument("--root",type=Path,default=Path("."))
    args=p.parse_args();root=args.root.resolve()
    r=make(root)
    dest=root/"assets/evidence/rom-items/unmatched-bcsv-semantic-triage.json"
    dest.write_text(json.dumps(r,ensure_ascii=False,indent=2)+"\n",encoding="utf-8")
    print(json.dumps({k:v for k,v in r.items() if k not in (
        "numeric_cross_reference_column_hypotheses","itemparam_row_samples",
        "missing_431_examples","missing_431_not_in_itemparam","missing_431_without_related_tree_filename")},
        ensure_ascii=False))
if __name__=="__main__":main()
