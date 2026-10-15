#!/usr/bin/env python3
"""Locate one actual historical failed L3 source (not a no_target_leaf).

Scan R19 and every audited source delta up through R32. Produce exact original
path and source hash plus original parser failure metadata, without inference.
"""
from __future__ import annotations
import argparse,gzip,json
from pathlib import Path
BASE=Path("derived/3.0.3")
def iter_jsonl(path):
    with gzip.open(path,"rt",encoding="utf8") as f:
        for line in f:
            if line.strip():yield json.loads(line)
def locate():
    paths=[BASE/"media_round19_cumulative/source_manifest.jsonl.gz"]
    paths += [BASE/f"r{i}_cumulative/source_delta.jsonl.gz" for i in range(27,33)]
    failed=[]
    for p in paths:
        for x in iter_jsonl(p):
            if x.get("status")=="failed" and x["source_path"].startswith(("Model/","Layout/")):
                failed.append({"audit_path":str(p),"original_source_relative_path":x["source_path"],
                   "original_source_sha256":x.get("source_sha256") or x.get("sha256"),
                   "original_record":x})
    if len(failed)!=1:raise ValueError(f"expected exactly one failed Model/Layout source, found {len(failed)}")
    x=failed[0]
    if not x["original_source_sha256"] or len(x["original_source_sha256"])!=64:
        raise ValueError("missing source hash")
    return {"schema":"acnh303-r33-one-original-failed-l3-source-v1",
        "failed_source":x,"source_count":1,"classification":"previously_tested_failure_not_new_unmeasured",
        "limits":"Historical failure evidence, root cause pending byte-exact read and native converter replay"}
def main():
    p=argparse.ArgumentParser();p.add_argument("--out",type=Path,required=True)
    a=p.parse_args();d=locate();a.out.parent.mkdir(parents=True,exist_ok=True)
    a.out.write_text(json.dumps(d,indent=2,ensure_ascii=False,sort_keys=True)+"\n",encoding="utf8")
    print("R33_REAL_FAILED_SOURCE",json.dumps(d,ensure_ascii=False))
if __name__=="__main__":main()
