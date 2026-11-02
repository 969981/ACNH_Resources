#!/usr/bin/env python3
"""Cross-check ItemParam identifier against the SAME hashed field in ItemRemake.

The repeated hash_54706054 column suggests a shared item identifier; validate
record-level joining, but do not infer default screenshot/variant UI behavior.
"""
import argparse,csv,json,hashlib
from collections import Counter,defaultdict
from pathlib import Path

NAME="hash_3FEBC642"
ID="hash_54706054"

def read(p):return json.loads(p.read_text("utf-8"))

def run(root):
    base=root/"assets/evidence/rom-items"
    pending=read(base/"unmatched-candidate-audit.json")
    associated=read(base/"unmatched-native-linkage.json")
    originals={x["requested_filename"]:x for x in associated["entries"]}
    names={x["filename"][:-4] for x in pending["entries"] if x["category"]=="variant_mapping_needed"}
    if len(names)!=344 or associated["source_linked_distinct_images"]!=823:
        raise ValueError("Prior verified original source mapping changed")
    items={}
    with (root/"UnPack/1/Bcsv/ItemParam.csv").open(encoding="utf-8-sig",newline="") as f:
        for row in csv.DictReader(f):
            name=row.get(NAME)
            if name not in names:continue
            val=row.get(ID,"")
            if not val.isdigit() or name in items:raise ValueError("Missing/duplicate item id "+str(name))
            items[name]={"itemparam_row":int(row["_row_index"]),"itemparam_id":int(val),
                         "itemparam_name_column":NAME}
    if len(items)!=344 or len({v["itemparam_id"] for v in items.values()})!=344:
        raise ValueError("Items must have 344 unique original identifiers")
    remake=defaultdict(list)
    with (root/"UnPack/1/Bcsv/ItemRemake.csv").open(encoding="utf-8-sig",newline="") as f:
        reader=csv.DictReader(f)
        if ID not in (reader.fieldnames or []):
            raise ValueError("No shared original hashed item identifier field")
        for row in reader:
            idval=row.get(ID,"")
            if idval.isdigit():
                remake[int(idval)].append({"remake_row":int(row["_row_index"]),
                                            "shared_item_id_field":ID,
                                            "value":int(idval)})
    result=[]
    for name in sorted(names):
        item=items[name];rows=remake.get(item["itemparam_id"],[])
        link=originals.get(name+".png")
        if not link or not link["distinct_source_asset_verified"] or link["mapping_verified"]:
            raise ValueError("Original image evidence missing or promoted: "+name)
        asset=link["distinct_original_rom_asset"]
        if asset["original_texture_name"]!=name+"_Remake_0_0":
            raise ValueError("Remake PNG native texture disagrees: "+name)
        result.append({"requested_base_png":name+".png","original_item_name":name,
                       "item_param":item,"item_remake_records":rows,
                       "shared_item_id_join_cardinality":len(rows),
                       "original_remake_0_0_png":asset["png_path"],
                       "original_remake_0_0_png_sha256":asset["png_sha256"],
                       "itemparam_to_itemremake_id_join_verified":len(rows)==1,
                       "default_variant_0_0_runtime_selection_verified":False,
                       "catalog_base_filename_equivalence_verified":False})
    counts=Counter(str(x["shared_item_id_join_cardinality"]) for x in result)
    return {
        "schema":"acnh303_itemparam_to_itemremake_id_crossref_v1",
        "item_name_exact_column":NAME,
        "item_identifier_hashed_field_in_both_tables":ID,
        "variant_candidate_count":344,
        "id_join_cardinality":dict(sorted(counts.items(),key=lambda x:int(x[0]))),
        "one_to_one_item_id_joins":sum(len(x["item_remake_records"])==1 for x in result),
        "no_remake_record_found":sum(len(x["item_remake_records"])==0 for x in result),
        "ambiguous_multiple_remake_records":sum(len(x["item_remake_records"])>1 for x in result),
        "source_remake_png_count":344,
        "default_variant_0_0_runtime_selection_verified":False,
        "unmatched_catalog_base_names_promoted":0,
        "records":result
    }

def main():
    p=argparse.ArgumentParser();p.add_argument("--root",type=Path,default=Path("."))
    args=p.parse_args();root=args.root.resolve()
    r=run(root);base=root/"assets/evidence/rom-items"
    out=base/"itemparam-itemremake-id-crossref.json"
    out.write_text(json.dumps(r,ensure_ascii=False,indent=2)+"\n",encoding="utf-8")
    with (base/"itemparam-itemremake-id-crossref.csv").open("w",encoding="utf-8",newline="") as f:
        w=csv.writer(f);w.writerow(["original_item_name","itemparam_id","itemparam_row","remake_record_count",
                                    "remake_row_indices","actual_native_remake_png","default_variant_mapping_verified"])
        for x in r["records"]:
            w.writerow([x["original_item_name"],x["item_param"]["itemparam_id"],x["item_param"]["itemparam_row"],
                        x["shared_item_id_join_cardinality"],
                        ";".join(str(z["remake_row"]) for z in x["item_remake_records"]),
                        x["original_remake_0_0_png"],False])
    print(json.dumps({k:v for k,v in r.items() if k!="records"},ensure_ascii=False))

if __name__=="__main__":
    main()
