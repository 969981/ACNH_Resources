#!/usr/bin/env python3
"""ACNH 3.0.3 R90 item-only inventory catalog: native kinds, stacks, remakes, recipes.

Reads four original BCSV-decoded tables; never confuses remake row UniqueID
with ItemRemake.ItemUniqueID or assumes parent-kind flags are proven.
Python >=3.10, standard library, read-only. Outputs CSV + evidence JSON.
"""
from __future__ import annotations
import argparse
import collections
import csv
import json
from pathlib import Path
from acnh303_r85_item_npc_static_audit import FLAGS, category_link, hash_field, to_s16

ID="hash_54706054"
NAME="hash_3FEBC642"
KIND="hash_FC275E86"
RLABEL="hash_87BF00E8"
STACK="hash_4C9BA961"
REMAKE_FK="hash_FD9AF1E1"
KIT="hash_29ECB129"
BODY_NUM="hash_B0304B0D"
FABRIC_NUM="hash_0CB402A3"
RECIPE_OUTPUT="hash_89A3482C"
MAT=("hash_1BBFA75E","hash_5C1FDD8E","hash_617FF43E","hash_D35F282E","hash_EE3F019E","hash_A99F7B4E")
AMT=("hash_13A65775","hash_54062DA5","hash_69660415","hash_DB46D805","hash_E626F1B5","hash_A1868B65")
INVALID_MATERIAL_IDS={65534,65535}


def read(root:Path,name:str):
    with (root/"UnPack/1/Bcsv"/(name+".csv")).open(encoding="utf-8-sig",newline="") as f:
        return list(csv.DictReader(f))


def out_csv(path:Path,headers,rows):
    with path.open("w",encoding="utf-8-sig",newline="") as f:
        w=csv.writer(f);w.writerow(headers);w.writerows(rows)


def display_stack(n):
    """Only positive integers are unambiguous static capacity.
    0 -> single-item display candidate, -1 -> special unknown."""
    if n>0:return n,"positive_static_ItemKind_capacity_not_runtime"
    if n==0:return 1,"singleton_display_candidate_native_zero"
    return "","native_special_s16_minus_one_runtime_context_required"


def main():
    arg=argparse.ArgumentParser(description=__doc__)
    arg.add_argument("--repo-root",type=Path,default=Path("."))
    arg.add_argument("--out",type=Path,required=True)
    a=arg.parse_args()
    root=a.repo_root.resolve()
    out=a.out.resolve()
    out.mkdir(parents=True,exist_ok=True)
    items=read(root,"ItemParam")
    kinds=read(root,"ItemKind")
    remakes=read(root,"ItemRemake")
    recipes=read(root,"RecipeCraftParam")
    counts=(len(items),len(kinds),len(remakes),len(recipes))
    if counts!=(11178,189,1306,924):
        raise ValueError("Unexpected original 3.0.3 table rows: "+str(counts))
    item_by_id={int(r[ID]):r for r in items}
    if len(item_by_id)!=len(items):
        raise ValueError("Duplicate ItemParam.UniqueID")
    kind_by_label={r[RLABEL]:r for r in kinds}
    if len(kind_by_label)!=len(kinds):
        raise ValueError("Duplicate ItemKind.Label")
    flaghash={flag:hash_field(flag,"u8") for flag in FLAGS}
    for hash_ in flaghash.values():
        if hash_ not in kinds[0]:raise ValueError("Missing native ItemKind flag "+hash_)

    remake_by_item={}
    remake_ids=set()
    remake_out=[]
    kit_hist=collections.Counter()
    invalid_remake_fk=[]
    for r in remakes:
        itemid=int(r[REMAKE_FK])
        rid=int(r[ID])
        if rid in remake_ids:raise ValueError("Duplicate ItemRemake record ID")
        if itemid in remake_by_item:raise ValueError("Duplicate ItemRemake item FK")
        remake_ids.add(rid)
        kit=int(r[KIT])
        kit_hist[kit]+=1
        remake_by_item[itemid]=r
        if itemid not in item_by_id:invalid_remake_fk.append(itemid)
        remake_out.append([
            itemid,rid,kit,r[BODY_NUM],r[FABRIC_NUM],r["_row_index"],
            item_by_id.get(itemid,{}).get(NAME,""),
            "raw_original_counts_sentinels_not_interpreted_as_number_of_visual_variants",
        ])
    if invalid_remake_fk:
        raise ValueError("ItemRemake FK not found in original ItemParam: "+str(invalid_remake_fk[:30]))
    out_csv(out/"r90_original_remake_config_1306.csv",[
        "item_id","remake_record_id","remake_kit_num","rebody_pattern_num_raw",
        "refabric_pattern_num_raw","original_row_index","res_name",
        "pattern_count_evidence"],remake_out)

    recipe_by_product=collections.defaultdict(list)
    recipe_rows=[]
    invalid_product=[]
    missing_material_ids=[]
    for r in recipes:
        rid=int(r[ID])
        product=int(r[RECIPE_OUTPUT])
        recipe_by_product[product].append(rid)
        if product not in item_by_id:invalid_product.append((rid,product))
        material_pairs=[]
        for mfield,afield in zip(MAT,AMT):
            mid=int(r[mfield]);amount=int(r[afield])
            if mid in INVALID_MATERIAL_IDS:continue
            if mid not in item_by_id:missing_material_ids.append((rid,mid))
            material_pairs.append((mid,amount))
        row=[rid,product,item_by_id.get(product,{}).get(NAME,""),len(material_pairs)]
        for i in range(6):
            row.extend(material_pairs[i] if i<len(material_pairs) else ("",""))
        recipe_rows.append(row)
    out_csv(out/"r90_original_recipes_924.csv",
        ["recipe_id","crafted_item_id","crafted_res_name","material_kind_count"]+
        [n for i in range(1,7) for n in (f"material{i}_item_id",f"material{i}_amount")],
        recipe_rows)

    rule_rows=[]
    stat_counter=collections.Counter()
    kind_exact=collections.Counter()
    kind_parent=collections.Counter()
    item_rows=[]
    for r in sorted(items,key=lambda x:int(x[ID])):
        iid=int(r[ID])
        raw=r[KIND]
        base,confidence=category_link(raw,set(kind_by_label))
        stat_counter[confidence]+=1
        kr=kind_by_label.get(base)
        if confidence=="exact_ItemKind_label":kind_exact[base]+=1
        elif confidence=="prefix_candidate_not_proven":kind_parent[base]+=1
        stack=None if kr is None else to_s16(kr[STACK])
        stack_derived,why=display_stack(stack) if stack is not None else ("","unknown")
        # Candidate parent label can be displayed, but its action/stack rule is NOT proven.
        exact=(confidence=="exact_ItemKind_label")
        rr=remake_by_item.get(iid)
        item_rows.append([
            iid,r[NAME],raw,base,confidence,
            stack if exact else "", stack_derived if exact else "",
            why if exact else ("parent_type_unverified" if kr else "no_itemkind_match"),
            stack if not exact and kr else "",
            str(bool(rr)).lower(),
            int(rr[ID]) if rr else "",
            int(rr[KIT]) if rr else "",
            rr[BODY_NUM] if rr else "",
            rr[FABRIC_NUM] if rr else "",
            len(recipe_by_product.get(iid,[])),
            "|".join(str(n) for n in sorted(recipe_by_product.get(iid,[]))),
            *[int(kr[flaghash[f]]) if (kr and exact) else "" for f in FLAGS],
        ])
    out_csv(out/"r90_original_item_master_11178.csv",[
        "item_id","res_name","native_kind","base_kind","category_join_evidence",
        "stack_native_s16_exact","stack_display_candidate_exact","stack_evidence",
        "stack_parent_candidate_unverified","has_original_remake_config",
        "remake_record_id","remake_kit_num","rebody_pattern_num_raw",
        "refabric_pattern_num_raw","recipes_crafting_this_item",
        "recipe_ids_as_product", *FLAGS],item_rows)
    for r in kinds:
        stack=to_s16(r[STACK])
        candidate,how=display_stack(stack)
        rule_rows.append([
            r[ID],r[RLABEL],r["hash_036E8EBE"],stack,candidate,how,
            kind_exact[r[RLABEL]],kind_parent[r[RLABEL]],
            *[r[flaghash[f]] for f in FLAGS],
        ])
    out_csv(out/"r90_original_itemkind_189.csv",[
        "kind_unique_id","kind_label","original_japanese_note","stack_native_s16",
        "stack_display_candidate","stack_evidence","item_count_exact",
        "item_count_parent_candidate",*FLAGS],rule_rows)
    stack_types=collections.Counter(to_s16(r[STACK]) for r in kinds)
    summary={
        "schema":"acnh303_r90_native_items_variants_stacks_recipes_v1",
        "source":"UnPack/1/Bcsv/{ItemParam,ItemKind,ItemRemake,RecipeCraftParam}.csv",
        "source_record_counts":{"items":len(items),"kinds":len(kinds),"remakes":len(remakes),"recipes":len(recipes)},
        "item_base_kind_joins":dict(stat_counter),
        "itemkind_stack_distribution":dict(sorted(stack_types.items())),
        "native_remake_items_distinct":len(remake_by_item),
        "remake_records_per_item_max":max(collections.Counter(int(r[REMAKE_FK]) for r in remakes).values()),
        "kit_num_histogram":dict(sorted(kit_hist.items())),
        "recipe_distinct_output_item_ids":len(recipe_by_product),
        "recipe_invalid_product_ids":invalid_product,
        "recipe_missing_material_id_examples":missing_material_ids[:50],
        "limitations":[
            "Remake row is an item remodel CONFIG record, not a separate skin/visual variant.",
            "ItemRemake.ItemUniqueID hash_FD9AF1E1 is the original item foreign key.",
            "ItemRemake.UniqueID hash_54706054 is the remake ROW ID and must never join to ItemParam ID.",
            "ReBodyPatternNum and ReFabricPatternNum raw values may include sentinels such as 255.",
            "ItemKind stack=0 is singleton display candidate; stack=-1 requires special case handling.",
            "ItemKind parent-prefix matches cannot inherit verified action flags or stack.",
            "Old 17,170 web_db_multi variations are a different, independently versioned legacy source.",
            "Runtime behavior and save editor bitfields not proven from BCSV alone.",
        ],
    }
    (out/"r90_native_item_audit.json").write_text(json.dumps(summary,indent=2,ensure_ascii=False)+"\n",encoding="utf-8")
    print(json.dumps({
        "record_counts":summary["source_record_counts"],
        "item_category_joins":summary["item_base_kind_joins"],
        "native_remake_distinct":summary["native_remake_items_distinct"],
        "remake_items_all_valid":True,
        "kit_hist":summary["kit_num_histogram"],
        "stack_types":summary["itemkind_stack_distribution"],
        "recipe_distinct_products":len(recipe_by_product),
        "recipe_invalid_output_count":len(invalid_product),
        "missing_material_count":len(missing_material_ids),
    },ensure_ascii=False,indent=2))


if __name__=="__main__":
    main()
