#!/usr/bin/env python3
"""Audit native ACNH BCSV classification against a pinned NHSE checkout."""
import argparse
import collections
import csv
import hashlib
import json
from pathlib import Path
import re
import struct
import zlib

PIN = "cb0745415945776f73375bf0a434a8babf059307"
EXPECTED_PARAM_SHA = "9f31230158ab9ace881fe6e5c64579e206f5318646d8d77d8ac7c197abed3609"
ID, KIND, SIZE, ICON, CLOTH = 0x54706054, 0xFC275E86, 0xE06FB090, 0x348D7B06, 0x690E3379

class BCSV:
    def __init__(self, path):
        self.path = path
        self.data = path.read_bytes()
        self.n, self.stride, count = struct.unpack_from("<IIH", self.data)
        start = 28 if self.data[10] == 1 else 12
        if start == 28 and self.data[12:16] != b"VSCB":
            raise ValueError(f"Invalid magic: {path}")
        self.start = start + count * 8
        entries = [struct.unpack_from("<II", self.data, start + i*8) for i in range(count)]
        self.fields = {h:(off, (entries[i+1][1] if i+1<count else self.stride)-off)
                       for i,(h,off) in enumerate(entries)}
        if len(self.fields) != count or any(o<0 or w<=0 or o+w>self.stride for o,w in self.fields.values()):
            raise ValueError(f"Invalid field offsets: {path}")
        if self.start + self.n*self.stride != len(self.data):
            raise ValueError(f"Unexpected BCSV byte length: {path}")
    def raw(self,i,h):
        o,w = self.fields[h]
        p = self.start+i*self.stride+o
        return self.data[p:p+w]
    def label(self,i,h,lookup):
        b = self.raw(i,h)
        if len(b)==4:
            v = int.from_bytes(b,"little")
            return lookup.get(v, f"0x{v:08X}")
        return b.split(b"\0",1)[0].decode("utf-8",errors="strict")
    def num(self,i,h,signed=False):
        return int.from_bytes(self.raw(i,h),"little",signed=signed)
    def meta(self):
        return {"sha256":hashlib.sha256(self.data).hexdigest(),"rows":self.n,
                "stride":self.stride,"fields":{f"{h:08X}":{"offset":o,"width":w} for h,(o,w) in self.fields.items()}}

def enum_values(path):
    src = path.read_text(encoding="utf-8-sig")
    body = re.search(r"public enum ItemKind\s*:\s*byte\s*\{([^}]+)\}",src).group(1)
    body = re.sub(r"//[^\n]*","",body)
    values, current = {}, -1
    for entry in body.split(","):
        entry=entry.strip()
        if not entry: continue
        parts=entry.split("=",1)
        name=parts[0].strip()
        if not re.fullmatch(r"\w+",name): raise ValueError(entry)
        current = (255 if parts[1].strip()=="byte.MaxValue" else int(parts[1],0)) if len(parts)==2 else current+1
        if not 0<=current<=255: raise ValueError(entry)
        values[name]=current
    return values

def crc_lookup(names):
    out={}
    for name in names:
        h=zlib.crc32(name.encode("utf-8"))
        if h in out and out[h]!=name: raise ValueError(f"CRC collision: {name}")
        out[h]=name
    return out

def main():
    p=argparse.ArgumentParser()
    p.add_argument("--bcsv",type=Path,required=True)
    p.add_argument("--nhse",type=Path,required=True)
    p.add_argument("--out",type=Path,required=True)
    a=p.parse_args()
    a.out.mkdir(parents=True,exist_ok=True)
    enum=enum_values(a.nhse/"NHSE.Core/Structures/Item/ItemKind.cs")
    lookup=crc_lookup(enum)
    b=BCSV(a.bcsv/"ItemParam.bcsv")
    rules=BCSV(a.bcsv/"ItemKind.bcsv")
    sizes=BCSV(a.bcsv/"ItemSize.bcsv")
    if b.meta()["sha256"]!=EXPECTED_PARAM_SHA: raise ValueError("Unexpected ItemParam source SHA")
    if b.n!=11178 or rules.n!=189 or sizes.n!=28: raise ValueError("Unexpected source count")
    old=(a.nhse/"NHSE.Core/Resources/byte/item_kind.bin").read_bytes()
    reverse={v:k for k,v in enum.items()}
    ids=set(); rows=[]; counts=collections.Counter(); kinds=collections.Counter()
    for i in range(b.n):
        item_id=b.num(i,ID)
        if item_id>65535 or item_id in ids: raise ValueError(f"Invalid/duplicate id: {item_id}")
        ids.add(item_id)
        k=b.label(i,KIND,lookup)
        kinds[k]+=1
        predicted=enum.get(k)
        actual=old[item_id] if item_id<len(old) else None
        status=("unknown_kind" if predicted is None else "outside_nhse" if actual is None else
                "match" if predicted==actual else "mismatch")
        counts[status]+=1
        rows.append({"item_id":item_id,"row":i,"kind_raw":b.raw(i,KIND).hex(),"native_kind":k,
                     "nhse_generated":predicted,"nhse_existing":actual,"nhse_existing_name":reverse.get(actual),
                     "status":status,"size_raw":b.raw(i,SIZE).hex(),"menu_icon_raw":b.raw(i,ICON).hex(),
                     "cloth_group_raw":b.raw(i,CLOTH).hex()})
    generated=bytearray(max(ids)+1)
    for r in rows:
        if r["nhse_generated"] is not None: generated[r["item_id"]]=r["nhse_generated"]
    if not counts["unknown_kind"]:
        (a.out/"item_kind.generated.bin").write_bytes(generated)
    with (a.out/"item_classification_audit.csv").open("w",encoding="utf-8",newline="") as f:
        w=csv.DictWriter(f,fieldnames=list(rows[0]));w.writeheader();w.writerows(sorted(rows,key=lambda x:x["item_id"]))
    def label_text(table,i,h):
        return table.raw(i,h).split(b"\0",1)[0].decode("utf-8")
    rule_rows=[{"label":label_text(rules,i,0x87BF00E8),"stack_raw":rules.raw(i,0x4C9BA961).hex()} for i in range(rules.n)]
    size_rows=[{"label":label_text(sizes,i,0x87BF00E8),"width":sizes.num(i,0x16B8F524),
                "height":sizes.num(i,0xBCB13DAF),"description":label_text(sizes,i,0x977ADFCE)} for i in range(sizes.n)]
    hole_counts=collections.Counter(old[i] for i in range(len(old)) if i not in ids)
    report={"nhse_pin":PIN,"source":{t.path.name:t.meta() for t in (b,rules,sizes)},
            "valid_ids":len(ids),"max_item_id":max(ids),"nhse_bytes":len(old),
            "nhse_sha256":hashlib.sha256(old).hexdigest(),"status_counts":dict(counts),
            "native_kind_histogram":dict(kinds),"nhse_non_native_slot_histogram":dict(hole_counts),
            "byte_identical":not counts["unknown_kind"] and bytes(generated)==old,
            "rule_rows":rule_rows,"size_rows":size_rows,
            "notes":["Non-native slots are not valid items; zero is also a real enum value.",
                     "Size/icon/cloth fields are retained as raw bytes pending semantic cross-check.",
                     "An NHSE mismatch is evidence to investigate, not automatically a native error."]}
    (a.out/"classification_audit.json").write_text(json.dumps(report,indent=2,ensure_ascii=False)+"\n",encoding="utf-8")
    print(json.dumps({k:report[k] for k in ("valid_ids","max_item_id","nhse_bytes","status_counts","byte_identical")},indent=2))
    if sum(counts.values())!=b.n: raise ValueError("Audit accounting failed")

if __name__=="__main__":
    main()
