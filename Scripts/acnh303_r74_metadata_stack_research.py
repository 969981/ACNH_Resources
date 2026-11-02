#!/usr/bin/env python3
"""R74 original 3.0.3 ItemKind stack/flag, ItemParam identity, villagers, Message source research.

Every exported value is sourced from original decoded 3.0.3 BCSV CSV. Important:
'CanPut', 'CantTakeOver', etc are NOT a proved single 'can pick up' game rule.
No undocumented BCSV hash field is given a fabricated name.
"""
from __future__ import annotations
import argparse,csv,hashlib,json,zlib,subprocess
from collections import Counter,defaultdict
from pathlib import Path

BCSV=Path("UnPack/1/Bcsv")
OUT=Path("assets/evidence/rom-database")
ID="hash_54706054"
LABEL="hash_87BF00E8"
STACK="hash_4C9BA961"
FLAG_NAMES=("CanBury","CanEat","CanFtr","CanGift","CanNpcBirthdayPresent",
            "CanNpcPresent","CanPlant","CanPut","CanPutWallAndFloor","CanSell",
            "CanSellSimple","CanSetChest","CanSetCloset","CanSetInTrashBox",
            "CanSetItem","CanUsePhotoStudio","CantTakeOver","IsCollectAchievement")
def field(name,kind):return "hash_"+format(zlib.crc32((name+" "+kind).encode())&0xffffffff,"08X")
def csvdata(path):
    data=path.read_bytes()
    with path.open("r",encoding="utf-8-sig",newline="") as f:
        reader=csv.DictReader(f)
        rows=list(reader)
    return {"path":path.as_posix(),"sha256":hashlib.sha256(data).hexdigest(),
        "columns":reader.fieldnames,"rows":rows}
def get_itemkind():
    kind=csvdata(BCSV/"ItemKind.csv")
    needed=[ID,LABEL,STACK]+[field(n,"u8") for n in FLAG_NAMES]
    diff=set(needed)-set(kind["columns"])
    if diff:raise ValueError("Original ItemKind schema differs: "+str(sorted(diff)))
    values={}
    for row in kind["rows"]:
        label=row[LABEL]
        if label in values:raise ValueError("Duplicate original ItemKind label "+label)
        raw=int(row[STACK])
        # This BCSV field is s16. The CSV decoder displays -1 as 65535;
        # this is a sentinel, NOT a capacity of 65,535.
        if not (0<=raw<=65535):raise ValueError("Invalid s16 stack representation")
        val=raw if raw<=32767 else raw-65536
        values[label]={"original_kind_label":label,"unique_kind_id":int(row[ID]),
            "max_stack_raw_csv_unsigned":raw,"max_stack_s16":val,
            "stack_positive_capacity_if_direct":val if val>0 else 1 if val==0 else None,
            "nhse_tool_sentinel_minus_one_substitution":10 if val==-1 else None,
            "stack_interpretation_requires_runtime_confirmation":val==-1,
            "flags":{f:int(row[field(f,"u8")]) for f in FLAG_NAMES}}
    return kind,values
def items_and_groups(kinds):
    d=csvdata(BCSV/"ItemParam.csv")
    if ID not in d["columns"]:raise ValueError("ItemParam UniqueID hash absent")
    ids={};samples={}
    pick=[2,1040,3557]
    for row in d["rows"]:
        s=row[ID]
        if not s:continue
        try:uid=int(s)
        except ValueError:continue
        if uid in ids:raise ValueError("Duplicate ItemParam UniqueID "+str(uid))
        ids[uid]=row
        if uid in pick:samples[format(uid,"04X")]={
          "item_id_decimal":uid,
          "raw_nonempty_columns":{k:v for k,v in row.items() if v not in ("","0",None) and not k.startswith("_")}}
    # R63 previously used hash_3FEBC642 for the real internal item name:
    NAME="hash_3FEBC642"
    KIND="hash_FC275E86"
    cols=set(d["columns"])
    found={}
    for hashname in (NAME,KIND):
        found[hashname]=hashname in cols
    extracted=[]
    count_by_kind=Counter();unmatched=Counter();fallback={}
    for uid,row in sorted(ids.items()):
        k=row.get(KIND,"")
        label=k.removeprefix("Kind_")
        if label not in kinds:
            unmatched[k]+=1
        else:count_by_kind[label]+=1
        original=kinds.get(label,{})
        dest={"item_id":uid,"item_id_hex":f"{uid:04X}",
            "original_internal_name":row.get(NAME,""),
            "original_itemkind_raw":k,"itemkind_label":label,
            "kind_has_known_stack_record":bool(original),
            "max_stack_s16":original.get("max_stack_s16"),
            "stack_positive_capacity_if_direct":original.get("stack_positive_capacity_if_direct"),
            "stack_sentinel_requires_runtime_verification":original.get("stack_interpretation_requires_runtime_confirmation"),
            "can_pick_up_in_world_verified":False}
        for key in ("CanPut","CanSell","CanSetChest","CanSetCloset","CanBury","CanPlant","CantTakeOver"):
            dest[key]=original.get("flags",{}).get(key)
        extracted.append(dest)
    return d,extracted,dict(count_by_kind),dict(unmatched),found,samples
def npc_stats():
    out={}
    for fn,prefix in (("NmlNpcParam.csv","NpcNml"),("SpNpcParam.csv","NpcSp")):
        data=csvdata(BCSV/fn);name_fields=[]
        for col in data["columns"]:
            values=[r.get(col,"") for r in data["rows"][:min(30,len(data["rows"]))]]
            if sum(v.startswith(prefix) for v in values)>=min(5,len(values)):
                name_fields.append(col)
        out[fn]={"original_rows":len(data["rows"]),"original_csv_sha256":data["sha256"],
                 "resource_name_candidate_columns":name_fields,
                 "sample_resource_names":[r.get(name_fields[0],"") for r in data["rows"][:8]] if name_fields else [],
                 "all_resource_name_semantics_verified":False}
    return out
def message_names():
    path="e10617820db06889e1638499478da0de_NCA/1/Message"
    p=subprocess.run(["git","ls-tree","-r","--name-only","HEAD","--",path],
       text=True,capture_output=True,check=True)
    names=sorted(x for x in p.stdout.splitlines() if "/String_" in x and x.endswith(".sarc.zs"))
    if len(names)<12:raise ValueError("Missing original multi-region String message archives")
    return names
def main():
    a=argparse.ArgumentParser();a.add_argument("--root",type=Path,default=Path("."))
    x=a.parse_args()
    import os
    os.chdir(x.root.resolve())
    d,kind=get_itemkind()
    item,rows,counts,unknown,found,samples=items_and_groups(kind)
    npc=npc_stats()
    rec=csvdata(BCSV/"RecipeCraftParam.csv")
    names=message_names()
    report={
       "schema":"acnh303_r74_original_metadata_schema_and_stack_join_v2",
       "original_version":"3.0.3",
       "ItemParam":{"path":item["path"],"sha256":item["sha256"],
                    "rows":len(item["rows"]),"unique_item_ids":len(rows),
                    "columns_total":len(item["columns"]),
                    "known_id_name_kind_field_presence":found,
                    "known_kind_frequencies":counts,"unknown_kind_labels":unknown,
                    "real_original_examples":samples},
       "ItemKind":{"path":d["path"],"sha256":d["sha256"],
                   "rows":len(d["rows"]),"columns_total":len(d["columns"]),
                   "hash_field_mapping":{k:field(k,"u8") for k in FLAG_NAMES},
                   "stack_hash":STACK,"stack_type":"s16",
                   "kind_label_hash":LABEL,"kind_label_type":"string32",
                   "all_kinds":list(kind.values())},
       "NmlAndSpNpcOriginalTables":npc,
       "RecipeCraftParam":{"path":rec["path"],"rows":len(rec["rows"]),
                           "sha256":rec["sha256"],"field_names":rec["columns"]},
       "original_multi_language_String_archives":names,
       "crossjoin_source_level_not_live_inventory_pickup":True,
       "CanPut_is_not_equivalent_to_can_pickup":True,
       "CantTakeOver_is_not_equivalent_to_can_pickup":True,
       "multi_hold_zero_interpreted_as_1_as_in_NHSE":True,
       "multi_hold_s16_minus_one_is_unknown_sentinel_not_65535_capacity":True,
       "NHSE_minus_one_to_10_is_tool_compatibility_not_verified_ROM_max":True,
       "client_third_party_names_not_substituted_for_original_3_0_3_MSBT":True}
    dest=OUT;dest.mkdir(parents=True,exist_ok=True)
    (dest/"r74-original-item-npc-stack-schema.json").write_text(json.dumps(report,ensure_ascii=False,indent=2)+"\n","utf-8")
    with (dest/"r74-original-item-stack-preview.csv").open("w",encoding="utf-8",newline="") as f:
        w=csv.DictWriter(f,fieldnames=list(rows[0]))
        w.writeheader();w.writerows(rows)
    print(json.dumps({k:v for k,v in report.items() if k not in ("ItemKind","ItemParam","RecipeCraftParam")},ensure_ascii=False))
    print(json.dumps({"ItemParam_rows":len(item["rows"]),"ItemKind_rows":len(d["rows"]),
        "IDs":len(rows),"ItemKind_joined":sum(r["kind_has_known_stack_record"] for r in rows),
        "unmatched_kind_counts":unknown,"known":found},ensure_ascii=False))
if __name__=="__main__":main()
