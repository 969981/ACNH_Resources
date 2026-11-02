#!/usr/bin/env python3
"""R35 verify all actual user-accessible original derived bytes before Release.

Input artifacts are from THIS Actions run. Check byte SHAs for every manifested
GLB/PNG/structured JSON/WAV/AMTA/BNSH; disallow output duplicates.
"""
from __future__ import annotations
import argparse,hashlib,json
from collections import Counter
from pathlib import Path,PurePosixPath

def sha(path):return hashlib.sha256(path.read_bytes()).hexdigest()

def verify(root, reports):
    folders=sorted(d for d in root.iterdir() if d.is_dir() and d.name.startswith("r35-data-"))
    if len(folders)!=8:raise ValueError(f"expected 8 data shards not {len(folders)}")
    available={}
    for folder in folders:
        for p in folder.rglob("*"):
            if p.is_symlink():raise ValueError("artifact symlink found")
            if not p.is_file():continue
            key=p.relative_to(folder).as_posix()
            if key in available:raise ValueError("output filename collision "+key)
            available[key]=p
    sha_paths={}
    bykind=Counter()
    def check(name,digest,size,kind):
        rel=PurePosixPath(name)
        if rel.is_absolute() or ".." in rel.parts or not str(rel).startswith("Unpack_"):
            raise ValueError("unsafe output path "+name)
        f=available.get(name)
        if not f or f.stat().st_size!=size or sha(f)!=digest:
            raise ValueError("missing/size/SHA drift: "+name)
        if name in sha_paths:raise ValueError("same output referenced twice "+name)
        sha_paths[name]=digest;bykind[kind]+=1
    medias=sorted(reports.rglob("manifest.json"))
    for p in medias:
        for rec in json.loads(p.read_text("utf8")):
            for obj in rec["validated_outputs"]:
                check(obj["path"],obj["sha256"],obj["size_bytes"],obj["validation"]["type"])
    for p in reports.rglob("semantic_manifest.json"):
        for rec in json.loads(p.read_text("utf8"))["source_records"]:
            for leaf in rec["leaves"]:
                if "output_path" in leaf:
                    pth=leaf["output_path"]
                    f=available.get(pth)
                    if not f:raise ValueError("UI2D output absent: "+pth)
                    check(pth,leaf["output_sha256"],f.stat().st_size,"ui2d_json")
    for p in reports.rglob("bnsh_manifest.json"):
        for rec in json.loads(p.read_text("utf8"))["records"]:
            for m in rec["bnsh_members"]:
                if m["status"]=="exact_native_bnsh_extracted":
                    check(m["output_path"],m["output_sha256"],m["output_bytes"],"bnsh_lossless")
    for p in reports.rglob("report.json"):
        doc=json.loads(p.read_text("utf8"))
        for rec in doc["records"]:
            for m in rec["members"]:
                if m["status"]=="converted_pcm_wav":
                    check(m["output_path"],m["output_sha256"],m["output_size"],"bars_pcm_wav")
                if m["status"]=="lossless_amta_extracted":
                    check(m["output_path"],m["amta_sha256"],m["original_native_member_bytes"],"amta_native")
    return {"schema":"acnh303-r35-full-output-sha-verified-v1",
            "data_shards":len(folders),"verified_output_files":len(sha_paths),
            "types":dict(sorted(bykind.items())),
            "verification_state":"REAL_BYTES_REHASHED_NOT_FULL_NATIVE_SEMANTICS"}

def main():
    a=argparse.ArgumentParser()
    a.add_argument("--data",type=Path,required=True)
    a.add_argument("--reports",type=Path,required=True)
    a.add_argument("--out",type=Path,default=Path("r35-release-verification.json"))
    o=a.parse_args();r=verify(o.data,o.reports)
    o.out.write_text(json.dumps(r,indent=2,sort_keys=True)+"\n",encoding="utf8")
    print("R35 RELEASE VERIFIED",r)
if __name__=="__main__":main()
