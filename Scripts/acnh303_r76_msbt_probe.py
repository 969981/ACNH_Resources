#!/usr/bin/env python3
"""R76 inspect actual 14 ACNH 3.0.3 original SARC/MSBT label formats.

No synthesized locale name association. Decode every MSBT with the existing
bounded parser; report LBL1 index/text examples and all format errors.
"""
from __future__ import annotations
import argparse,hashlib,json,collections
from pathlib import Path
from acnh_formats import decompress,parse_sarc,parse_msbt
from acnh303_r75_original_message_npc_audit import LOCALES,ROM
SAMPLES=("Item/STR_ItemName_70_Craft.msbt","Item/STR_ItemName_31_Fish.msbt",
         "Npc/STR_NNpcName.msbt","Npc/STR_SNpcOtherName.msbt","STR_CategoryName.msbt")
def clean(v):return "".join(c if c.isprintable() else f"\\u{ord(c):04x}" for c in v[:110])
def run():
    records=[];stats=collections.Counter()
    for locale in LOCALES:
        src=ROM/("String_"+locale+".sarc.zs")
        raw=src.read_bytes();blob,method=decompress(raw,limit=30*1024*1024)
        manifest,members=parse_sarc(blob)
        entry={"locale":locale,"archive_sha256":hashlib.sha256(raw).hexdigest(),"members":len(members),
            "parse_failed":[],"by_source":[],"selected_samples":{}}
        for name,rawmsbt in members:
            try:
                doc=parse_msbt(rawmsbt)
                vals=doc["entries"]
                if not vals:stats["empty"]+=1
                stats["msbt_ok"]+=1
                labeled=[x for x in vals if x["label"] is not None]
                if len(labeled)!=len(vals):stats["some_missing_label"]+=1
                formatted={"member":name,"count":len(vals),"labeled":len(labeled),
                    "section_names":[x["tag"] for x in doc["sections"]],
                    "encoding":doc["text_encoding"]}
                entry["by_source"].append(formatted)
                if name in SAMPLES:
                    entry["selected_samples"][name]={"meta":formatted,
                      "first_12":[{"label":q["label"],"text":clean(q["text"])} for q in vals[:12]],
                      "last_3":[{"label":q["label"],"text":clean(q["text"])} for q in vals[-3:]]}
            except Exception as exc:
                entry["parse_failed"].append({"member":name,"error":type(exc).__name__+": "+str(exc)[:300]})
                stats["msbt_fail"]+=1
        if len(entry["by_source"])+len(entry["parse_failed"])!=len(members):
            raise ValueError("Missing decoded member!")
        records.append(entry)
    out={"schema":"acnh303_r76_real_MSBT_14_archive_structural_probe_v1","archives":len(records),
         "status":dict(stats),"locales":records,"can_claim_complete_parsing":stats["msbt_fail"]==0,
         "runtime_proof":False}
    dest=Path("assets/evidence/rom-database");dest.mkdir(parents=True,exist_ok=True)
    (dest/"r76-msbt-14-language-probe.json").write_text(json.dumps(out,indent=2,ensure_ascii=False)+"\n",encoding="utf-8")
    print(json.dumps({"archives":len(records),"status":dict(stats),
        "CNzh_sample":records[0]["selected_samples"],
        "USen_sample":next(x for x in records if x["locale"]=="USen")["selected_samples"],
        "failed":records[0]["parse_failed"][:5]},ensure_ascii=False)[:25000])
    if stats["msbt_fail"]:raise ValueError("Original parser doesn't fully parse all native messages; inspect report")
if __name__=="__main__":run()
