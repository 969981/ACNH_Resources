#!/usr/bin/env python3
"""Extract *real* AMTA from BARS with bounded offsets; no speculative sound names."""
from __future__ import annotations
import argparse, hashlib, json, struct
from collections import Counter
from pathlib import Path
from acnh303_bars_probe import inspect, NCA

def digest(data: bytes) -> str:
    return hashlib.sha256(data).hexdigest()

def save_json(path: Path, obj: dict) -> None:
    path.parent.mkdir(parents=True,exist_ok=True)
    path.write_text(json.dumps(obj,ensure_ascii=False,indent=2,sort_keys=True)+"\n",encoding="utf-8")

def parse_amta(raw: bytes) -> dict:
    if len(raw)<24 or raw[:4]!=b"AMTA":
        raise ValueError("invalid AMTA header")
    bom=raw[4:6]
    if bom==b"\xff\xfe":
        order="<"
    elif bom==b"\xfe\xff":
        order=">"
    else:
        raise ValueError("unknown AMTA BOM")
    ver=struct.unpack_from(order+"H",raw,6)[0]
    size=struct.unpack_from(order+"I",raw,8)[0]
    if size<24 or size>len(raw):
        raise ValueError("AMTA declared length outside bounded native source")
    payload=raw[:size]
    # v1 uses DATA, MARK, STRG; v3/v4 also have EXT_.
    slots=[("DATA",12),("MARK",16)]
    if ver in (0x0300,0x0400):
        if size<28:
            raise ValueError("v3/v4 AMTA header too short")
        slots.extend([("EXT_",20),("STRG",24)])
        header_length=28
    elif ver==0x0100:
        slots.append(("STRG",20))
        header_length=24
    else:
        raise ValueError("unknown AMTA version: 0x%04x"%ver)
    sections=[]
    starts=[]
    for label,ptr in slots:
        offset=struct.unpack_from(order+"I",payload,ptr)[0]
        sections.append({"expected_magic":label,"relative_offset":offset})
        if offset:
            if offset<header_length or offset+8>size:
                raise ValueError("invalid AMTA section offset")
            starts.append(offset)
    starts=sorted(set(starts))
    for section in sections:
        offset=section["relative_offset"]
        if not offset:
            section["status"]="absent"
            continue
        finish=next((n for n in starts if n>offset),size)
        if finish<=offset or finish>size:
            raise ValueError("invalid AMTA section range")
        block=payload[offset:finish]
        magic=block[:4].decode("ascii","replace")
        section.update({"actual_magic":magic,"offset":offset,"bounded_bytes":len(block),
                        "sha256":digest(block),"header_value_u32":struct.unpack_from(order+"I",block,4)[0],
                        "status":"structural" if magic==section["expected_magic"] else "magic_mismatch"})
        # Do not infer STRG offsets or locale mapping from printable bytes alone.
    return {"magic":"AMTA","version_hex":"0x%04x"%ver,"bom_hex":bom.hex(),
            "declared_size":size,"sha256":digest(payload),"sections":sections,
            "payload":payload}

def run(selection: Path, out: Path, report: Path) -> dict:
    sel=json.loads(selection.read_text(encoding="utf-8"))
    if sel.get("category")!="Sound" or sel.get("suffix","").lower()!=".bars":
        raise ValueError("requires Sound/*.bars selection")
    if sel.get("selected_files")!=len(sel["paths"]) or len(set(sel["paths"]))!=len(sel["paths"]):
        raise ValueError("invalid selection")
    rows=[];counts=Counter()
    for selected in sel["paths"]:
        if not selected.startswith(NCA+"/1/Sound/") or ".." in Path(selected).parts:
            raise ValueError("invalid BARS path")
        name=selected[len(NCA+"/1/"):]
        data=Path(selected).read_bytes()
        entry={"source_path":name,"source_sha256":digest(data),"source_bytes":len(data),
               "members":[]}
        try:
            bars=inspect(data)
            end=bars["declared_file_size"]
            starts=sorted({p for item in bars["items"] for p in (item["meta_offset"],item["asset_offset"])
                           if 0<p<end and p!=0xffffffff}|{end})
            parent=out/NCA/"1"/(name+".amta")
            for item in bars["items"]:
                meta=item["meta_offset"]
                m={"asset_index":item["index"],"name_crc32_hex":item["name_crc32_hex"],
                   "meta_offset":meta,"status":"unsupported_or_missing"}
                if item["meta_magic"]!="AMTA":
                    counts["non_amta_members"]+=1
                    entry["members"].append(m)
                    continue
                stop=next((p for p in starts if p>meta),end)
                try:
                    doc=parse_amta(data[meta:stop])
                    binary=doc.pop("payload")
                    target=parent/("asset_%05d_%s.amta"%(item["index"],item["name_crc32_hex"][2:]))
                    target.parent.mkdir(parents=True,exist_ok=True)
                    target.write_bytes(binary)
                    if digest(target.read_bytes())!=doc["sha256"]:
                        raise ValueError("AMTA artifact failed SHA verification")
                    m.update({"status":"lossless_amta_extracted","original_native_member_bytes":len(binary),
                              "amta_sha256":doc["sha256"],"output_path":target.as_posix(),
                              "native":doc})
                    counts["validated_amta"]+=1
                    counts["validated_amta_sections"]+=sum(s["status"]=="structural" for s in doc["sections"])
                except (ValueError,OSError) as exc:
                    m.update({"status":"amta_parse_partial","error":str(exc)})
                    counts["amta_errors"]+=1
                entry["members"].append(m)
            counts["bars_parsed"]+=1
        except (ValueError,OSError) as exc:
            entry["status"]="bars_parse_failed"
            entry["error"]=str(exc)
            counts["bars_parse_errors"]+=1
        rows.append(entry)
        print("AMTA",name,len(entry["members"]),flush=True)
    result={"schema":"acnh303-bars-amta-lossless-v1","source_count":len(rows),"counts":dict(counts),
            "records":rows,"limits":"AMTA byte/offset/section structure only. No audio waveform, asset-name, loop or marker semantics are inferred."}
    save_json(report/"report.json",result)
    return result

def main():
    p=argparse.ArgumentParser()
    p.add_argument("--selection",type=Path,default=Path("selection.json"))
    p.add_argument("--out",type=Path,default=Path("Unpack_BARS_AMTA"))
    p.add_argument("--report",type=Path,default=Path("derived/3.0.3/bars_amta_round9"))
    a=p.parse_args()
    res=run(a.selection,a.out,a.report)
    print("AMTA_SUMMARY",json.dumps(res["counts"]),flush=True)

if __name__=="__main__":
    main()
