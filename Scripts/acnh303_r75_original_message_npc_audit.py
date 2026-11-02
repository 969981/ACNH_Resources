#!/usr/bin/env python3
"""R75 original ACNH 3.0.3 multilingual string SARC inventory and exact NPC ResName.

This is an archive member inventory, not a claim all localized names have been
decoded or matched to the user's external-language CSV.
"""
from __future__ import annotations
import argparse,csv,json,hashlib
from pathlib import Path
from collections import Counter
from acnh_formats import decompress,detect,parse_sarc

ROM=Path("e10617820db06889e1638499478da0de_NCA/1/Message")
CSV=Path("UnPack/1/Bcsv")
OUT=Path("assets/evidence/rom-database")
RES="hash_48EF0398"
LOCALES=("CNzh","TWzh","JPja","USen","EUen","KRko","EUde","EUfr","EUes","EUit","EUnl","EUru","USes","USfr")
def read_csv(name):
    with (CSV/name).open("r",encoding="utf-8-sig",newline="") as f:
        return list(csv.DictReader(f))
def scan():
    out=[]
    for locale in LOCALES:
        path=ROM/("String_"+locale+".sarc.zs")
        compressed=path.read_bytes()
        dec,method=decompress(compressed,limit=30*1024*1024)
        if detect(dec)!="sarc":raise ValueError("Real String locale is not SARC: "+locale)
        files,members=parse_sarc(dec)
        names=[m["name"] for m in files]
        out.append({"locale":locale,"original_sarc_path":path.as_posix(),
            "original_sha256":hashlib.sha256(compressed).hexdigest(),
            "zstd_decompression_method":method,"archive_members":len(files),
            "member_extensions":dict(Counter(x.rsplit(".",1)[-1] for x in names)),
            "item_related_filename_examples":[x for x in names if any(t in x.lower() for t in ["item","npc","villager","name","string","str_"])][:70],
            "first_member_names":names[:18],
            "archive_members_have_not_been_promoted_to_localized_name_records":True})
    villagers={}
    for file,prefix in [("NmlNpcParam.csv","NpcNml"),("SpNpcParam.csv","NpcSp")]:
        rows=read_csv(file)
        if not rows or RES not in rows[0]:raise ValueError("Missing verifiable original ResName hash")
        names=[r[RES] for r in rows]
        if len(names)!=len(set(names)) or any(not x.startswith(prefix) for x in names):
            raise ValueError("Real original NPC ResName not identified correctly "+file)
        villagers[file]={"source_table":file,"res_name_hash":RES,
                         "original_npc_records":len(rows),
                         "original_resource_name_examples":names[:18],
                         "all_names_identified_from_original_BCSV":True}
    result={"schema":"acnh303_r75_original_multilingual_String_SARC_and_NPC_name_v1",
        "language_archives_from_real_3_0_3_ROM":len(out),
        "original_message_sources":out,
        "original_npc_resource_names":villagers,
        "source_language_records_not_yet_decoded_to_normalized_MSBT":True,
        "do_not_substitute_user_CSV_as_native_MSBT_proof":True}
    folder=OUT;folder.mkdir(parents=True,exist_ok=True)
    (folder/"r75-original-14-language-archives-and-npc-names.json").write_text(
        json.dumps(result,indent=2,ensure_ascii=False)+"\n","utf-8")
    print(json.dumps({"archives":len(out),"members_by_locale":{x["locale"]:x["archive_members"] for x in out},
       "npc":villagers,"CNzh_examples":next(x for x in out if x["locale"]=="CNzh")["item_related_filename_examples"][:15]},ensure_ascii=False))
if __name__=="__main__":scan()
