#!/usr/bin/env python3
"""R27 recover exact embedded BNSH bytes from newly selected Layout archives.

Lossless extraction is NOT decompilation of shader GPU code or proof of
Nintendo runtime shader binding. Preserve original nested member names and SHA.
"""
from __future__ import annotations
import argparse,hashlib,json
from pathlib import Path
from acnh303_media_l3 import NCA,find_leaf

def digest(blob):return hashlib.sha256(blob).hexdigest()

def safe_name(member):
    # Do not trust archive paths for output write; the ordinal is authoritative.
    basename=member.replace("\\","/").split("/")[-1]
    if not basename or basename in (".","..") or "/" in basename or "\\" in basename:
        raise ValueError("unsafe archive member")
    return basename

def extract(selection,out,report):
    doc=json.loads(selection.read_text("utf8"))
    if doc["category"]!="Layout" or doc["suffix"]!=".zs" or len(doc["paths"])!=doc["selected_files"]:
        raise ValueError("only original selected Layout .zs")
    if len(set(doc["paths"]))!=len(doc["paths"]):raise ValueError("duplicate source")
    records=[];seen=set()
    for item in doc["paths"]:
        if not item.startswith(NCA+"/1/Layout/") or ".." in Path(item).parts:
            raise ValueError("unsafe original path")
        original=Path(item)
        if not original.is_file():raise ValueError("original source not checked out")
        raw=original.read_bytes()
        rel=item[len(NCA+"/1/"):]
        if rel in seen:raise ValueError("duplicate")
        seen.add(rel)
        row={"source_path":rel,"source_sha256":digest(raw),"source_bytes":len(raw),
             "bnsh_members":[],"status":"no_bnsh_leaf"}
        try:
            leaves=find_leaf(raw,rel)
            for i,leaf in enumerate(leaves):
                data=leaf["data"]; member=leaf["source_member"]
                if not data.startswith(b"BNSH"):continue
                if len(data)<0x20:
                    row["bnsh_members"].append({"source_member":member,"status":"short_BNSH_header"})
                    continue
                name=safe_name(member)
                p=out/NCA/"1"/(rel+".bnsh")/(f"{i:03d}-{name}")
                p.parent.mkdir(parents=True,exist_ok=True)
                if p.exists():raise ValueError("output collision")
                p.write_bytes(data)
                row["bnsh_members"].append({"source_member":member,
                   "source_leaf_index":i,"status":"exact_native_bnsh_extracted",
                   "member_sha256":digest(data),"member_bytes":len(data),
                   "head32_hex":data[:32].hex(),
                   "output_path":p.as_posix(),"output_sha256":digest(p.read_bytes()),
                   "output_bytes":p.stat().st_size})
            if any(m["status"]=="exact_native_bnsh_extracted" for m in row["bnsh_members"]):
                row["status"]="lossless_bnsh_members_extracted"
        except (ValueError,KeyError,IndexError) as e:
            row["status"]="extract_failed"
            row["error"]=f"{type(e).__name__}: {str(e)[:200]}"
        records.append(row)
    result={"schema":"acnh303-r27-bnsh-lossless-v1",
        "source_count":len(records),"category":"Layout","shard":doc["shard"],
        "shards":doc["shards"],"records":records,
        "limits":"Only exact original BNSH bytes. No decoded shader code, GPU program, or runtime shader semantics."}
    report.parent.mkdir(parents=True,exist_ok=True)
    report.write_text(json.dumps(result,ensure_ascii=False,sort_keys=True,indent=2)+"\n",encoding="utf8")
    print("R27 BNSH",len(records),
        sum(1 for r in records for m in r["bnsh_members"] if m["status"]=="exact_native_bnsh_extracted"),
        "lossless leaves")

def main():
    ap=argparse.ArgumentParser()
    ap.add_argument("--selection",type=Path,default=Path("selection.json"))
    ap.add_argument("--out",type=Path,default=Path("Unpack_BNSH_Round27"))
    ap.add_argument("--report",type=Path,required=True)
    a=ap.parse_args();extract(a.selection,a.out,a.report)

if __name__=="__main__":main()
