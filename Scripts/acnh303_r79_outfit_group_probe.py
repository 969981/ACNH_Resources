#!/usr/bin/env python3
"""R79 native ACNH 3.0.3 Outfit/GroupName key and ItemClothGroup join probe."""
import csv,json,hashlib,collections
from pathlib import Path
from acnh_formats import decompress,parse_sarc,parse_msbt
from acnh303_r75_original_message_npc_audit import ROM
BASE=Path("UnPack/1/Bcsv")
def table(s):
    with (BASE/s).open("r",encoding="utf-8-sig",newline="") as f:
        return list(csv.DictReader(f))
def main():
    sets={}
    for loc in ("CNzh","USen","JPja"):
        blob=decompress((ROM/("String_"+loc+".sarc.zs")).read_bytes(),limit=30*1024*1024)[0]
        _,members=parse_sarc(blob);select={}
        for member,raw in members:
            if not member.startswith("Outfit/GroupName/"):continue
            d=parse_msbt(raw)
            select[member]=[{"label":x["label"],"text":x["text"][:120]} for x in d["entries"][:22]]
        sets[loc]=select
    items=table("ItemParam.csv")
    cloth=table("ItemClothGroup.csv")
    clothes=[r for r in items if r["hash_FC275E86"].startswith((
        "Top_","Onepiece_","Bottoms_","Shoes_","Kind_Cap","Kind_Helmet","Kind_Socks","Kind_Accessory","Kind_Bag"))]
    sample=[{"id":r["hash_54706054"],"name":r["hash_3FEBC642"],
       "kind":r["hash_FC275E86"],
       "jp":r.get("hash_B8CC232C"),
       "special_cols":{k:v for k,v in r.items() if k in ("hash_805CDABB","hash_622C3346","hash_48EF0398")}}
       for r in clothes[:42]]
    originalGroups=[{k:r[k] for k in ("hash_54706054","hash_87BF00E8","hash_036E8EBE","hash_65503F9F") if k in r}
                 for r in cloth[:65]]
    result={"msbt_sources":sets,"original_clothing_records":len(clothes),
            "sample_clothing_items":sample,"group_records":len(cloth),"original_cloth_group_rows":originalGroups}
    p=Path("assets/evidence/rom-database");p.mkdir(parents=True,exist_ok=True)
    (p/"r79-outfit-name-native-group-probe.json").write_text(json.dumps(result,indent=2,ensure_ascii=False)+"\n")
    print(json.dumps({"group_files":{k:list(v) for k,v in sets.items()},"msbt_samples":{
     k:{member:s[:6] for member,s in v.items()} for k,v in sets.items()},
     "clothes_count":len(clothes),"cloth_group_rows":len(cloth),
     "clothing_samples":sample[:12],"groups":originalGroups[:16]},ensure_ascii=False)[:18000])
if __name__=="__main__":main()
