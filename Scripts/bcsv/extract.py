#!/usr/bin/env python3
# /// script
# requires-python = ">=3.11"
# dependencies = []
# ///
"""Export ACNH BCSV schema, raw fields, explicit typed values, and category relations."""
from __future__ import annotations
import argparse
import collections
import csv
import json
from pathlib import Path
from bcsv import BCSV, crc32

ROM = Path("e10617820db06889e1638499478da0de_NCA/1/Bcsv")
# Expected source shape; ItemParam baseline is from R84.
EXPECTED = {"ItemParam":(11178,548,107),"ItemKind":(189,152,31),
 "ItemUIFurnitureCategory":(256,140,4),"ItemSize":(28,80,8),
 "ItemAct":(82,120,9),"ItemColor":(15,72,3),"ItemClothGroup":(1462,220,19),
 "ItemUIContextMenu":(66,140,6),"ItemFilter":(22,72,19)}
BLOBS = {"ItemParam":"431bbd26a575197a1bd963c1721b093ae3e4df84",
 "ItemKind":"0541661b1409455962c73c9cc7e2ea4f13d709fd",
 "ItemSize":"3f3203cdcb0023356ba744224dcd3d32a2e3fb16",
 "ItemAct":"bc59ebec02ddaaa5f2bdefbb9d5b8df19f366d85",
 "ItemUIFurnitureCategory":"113a53dfdd666917e0306d79227576291666723d",
 "ItemColor":"7c4155fc935f62bbc7674f5e69ed0e7072faf2b1",
 "ItemClothGroup":"6f68c682c375931ace7a578031e70505b3bf439a",
 "ItemUIContextMenu":"2e7c5a6be628cf57a2b09f6d605b15b41ee392f5",
 "ItemFilter":"444e9eb03b1ab3f9bd646c50bbd2401e9cb585eb"}
# Only explicit, table-scoped interpretations. All raw bytes also exported.
ID=0x54706054
LABEL=0x87BF00E8
JP=0x036E8EBE
TYPED={
 "ItemParam":{ID:("item_id","u"),0xFC275E86:("native_kind_label","text"),0xE06FB090:("size_ref_raw","hash"),0x690E3379:("cloth_group_ref_raw","hash"),0x348D7B06:("menu_icon_ref_raw","hash")},
 "ItemKind":{ID:("id","u"),LABEL:("label","text"),JP:("description_ja","text"),0x4C9BA961:("multi_hold_max_raw","s")},
 "ItemSize":{ID:("id","u"),LABEL:("label","text"),0x977ADFCE:("description_ja","text"),0x16B8F524:("width_half_tiles","u"),0xBCB13DAF:("height_half_tiles","u")},
 "ItemUIFurnitureCategory":{ID:("id","u"),0x13AB5198:("label","text"),JP:("description_ja","text"),0xA4686E5D:("group_hash","hash")},
 "ItemAct":{ID:("id","u"),LABEL:("label","text"),JP:("description_ja","text")},
 "ItemColor":{ID:("id","u"),LABEL:("label","text"),0x977ADFCE:("description_ja","text")},
 "ItemClothGroup":{ID:("id","u"),0x13AB5198:("label","text"),JP:("description_ja","text")},
 "ItemUIContextMenu":{ID:("id","u"),LABEL:("label","text"),JP:("description_ja","text"),0x026F0892:("message_code_candidate","text")},
 "ItemFilter":{ID:("id","u"),LABEL:("label","text")}}

def dump_json(path, obj):
    path.write_text(json.dumps(obj,ensure_ascii=False,indent=2)+"\n",encoding="utf-8")

def typed_value(b,row,h,kind):
    if kind=="text":
        return b.string(row,h)
    if kind=="hash":
        return f"0x{b.uint(row,h):08X}"
    return b.uint(row,h,signed=kind=="s")

def export_table(path,out,verify):
    b=BCSV.read(path); name=path.stem
    meta=b.metadata()
    if verify and name in EXPECTED:
        if (b.count,b.stride,len(b.fields)) != EXPECTED[name] or meta["git_blob_sha1"] != BLOBS[name]:
            raise ValueError(f"source mismatch: {path}")
    typed=TYPED.get(name,{})
    if set(typed)-b.by_hash.keys():
        raise ValueError(f"missing typed fields: {path}")
    meta["source"]=str(path)
    meta["typed_fields"]={f"hash_{h:08X}":{"name":k,"type":t} for h,(k,t) in typed.items()}
    dump_json(out/f"{name}.schema.json",meta)
    seen=set(); groups=collections.defaultdict(list)
    with (out/f"{name}.csv").open("w",encoding="utf-8-sig",newline="") as fp, (out/f"{name}.jsonl").open("w",encoding="utf-8") as jp:
        cols=["row_index","row_prefix_hex"]+[k for k,t in typed.values()]+[f.key for f in b.fields]
        writer=csv.DictWriter(fp,fieldnames=cols);writer.writeheader()
        for i in range(b.count):
            offset=b.start+i*b.stride
            row={"row_index":i,"row_prefix_hex":b.data[offset:offset+b.fields[0].offset].hex()}
            row.update({k:typed_value(b,i,h,t) for h,(k,t) in typed.items()})
            row.update({f.key:b.raw(i,f).hex() for f in b.fields})
            if ID in typed:
                ident=row[typed[ID][0]]
                if ident in seen and name=="ItemUIFurnitureCategory":
                    raise ValueError(f"duplicate category ID {ident}")
                seen.add(ident)
            if name=="ItemUIFurnitureCategory":
                groups[row["group_hash"]].append({"id":row["id"],"label":row["label"]})
            writer.writerow(row);jp.write(json.dumps(row,ensure_ascii=False)+"\n")
    meta["unique_ids"]=len(seen) if ID in typed else None
    if groups:
        if verify and (len(groups)!=60 or sum(map(len,groups.values()))!=256):
            raise ValueError("category group count mismatch")
        dump_json(out/"category-groups.json",{"groups":dict(groups),"count":len(groups),"members":sum(map(len,groups.values()))})
        meta["category_group_count"]=len(groups)
    return meta

def main():
    p=argparse.ArgumentParser(description=__doc__)
    p.add_argument("--bcsv",type=Path,default=ROM)
    p.add_argument("--out",type=Path,default=Path("out/bcsv"))
    p.add_argument("--table",action="append",help="table stem; repeat as needed")
    p.add_argument("--all",action="store_true",help="export every BCSV in directory, raw for unknown schemas")
    p.add_argument("--verify-303",action="store_true",help="require pinned shape and blob for known tables")
    a=p.parse_args()
    if a.all and a.table: p.error("--all and --table are mutually exclusive")
    if a.table and any(Path(t).name!=t or t.endswith(".bcsv") for t in a.table):
        p.error("--table accepts file stem only")
    paths=sorted(a.bcsv.glob("*.bcsv")) if a.all else [a.bcsv/f"{n}.bcsv" for n in (a.table or EXPECTED)]
    if not paths: p.error("no BCSV files")
    a.out.mkdir(parents=True,exist_ok=True)
    report={}
    for path in paths:
        report[path.stem]=export_table(path,a.out,a.verify_303)
        print(f"{path.stem}: {report[path.stem]['rows']} rows")
    dump_json(a.out/"manifest.json",report)
if __name__=="__main__": main()
