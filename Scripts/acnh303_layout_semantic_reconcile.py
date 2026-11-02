#!/usr/bin/env python3
"""Merge all new original Layout semantics, distinct from PNG media counts."""
from __future__ import annotations
import argparse
from collections import Counter
import hashlib,json
from pathlib import Path
def sha(b):return hashlib.sha256(b).hexdigest()
def main():
    p=argparse.ArgumentParser()
    p.add_argument("--artifact-root",type=Path,required=True)
    p.add_argument("--media-audit",type=Path,required=True)
    p.add_argument("--out",type=Path,required=True)
    p.add_argument("--shards",type=int,default=8)
    p.add_argument("--expected-sources",type=int,default=80)
    a=p.parse_args()
    paths=sorted(a.artifact_root.rglob("semantic_manifest.json"))
    if len(paths)!=a.shards:raise ValueError(f"expected {a.shards} semantic shard files, got {len(paths)}")
    docs=[json.loads(p.read_text(encoding="utf-8")) for p in paths]
    records=[r for d in docs for r in d["source_records"]]
    if len(records)!=a.expected_sources or len({r["source_path"] for r in records})!=len(records):
        raise ValueError("incomplete/duplicate semantic source records")
    audit=json.loads((a.media_audit/"coverage.json").read_text(encoding="utf-8"))
    if audit["new_by_format"]["Layout"]["new_source_count"]!=a.expected_sources:
        raise ValueError("media/semantic source count mismatch")
    pathset={r["source_path"] for r in records}
    indexes=set()
    for path in (a.media_audit/"source_manifest.jsonl.gz",):
        import gzip
        with gzip.open(path,"rt",encoding="utf-8") as f:
            for line in f:
                entry=json.loads(line)
                if entry["source_path"] in pathset:
                    indexes.add((entry["source_path"],entry["sha256"]))
    if len(indexes)!=len(records):raise ValueError("not all UI2D source originals in media SHA audit")
    for row in records:
        if (row["source_path"],row["source_sha256"]) not in indexes:
            raise ValueError("UI2D content provenance differs from source media audit")
        for leaf in row["leaves"]:
            if leaf["status"] in ("structured_json","font_references_only"):
                if len(leaf.get("output_sha256",""))!=64:
                    raise ValueError("UI2D output lacks SHA: "+row["source_path"])
    count=Counter()
    for doc in docs:count.update(doc["counts"])
    result={"schema":"acnh303-layout-semantic-v8","new_original_sources":len(records),
            "tested_originals_overall":audit["by_format"]["Layout"]["measured_source_count"],
            "shard_count":len(paths),"leaf_status_counts":dict(sorted(count.items())),
            "source_records":records,
            "limits":"FLYT/FLAN/FCPX JSON is partial semantic coverage, not pixel-perfect UI runtime; PNG media counted only in media audit."}
    a.out.mkdir(parents=True,exist_ok=True)
    (a.out/"coverage.json").write_text(json.dumps(result,indent=2,ensure_ascii=False)+"\n",encoding="utf-8")
    print(json.dumps({k:v for k,v in result.items() if k!="source_records"},ensure_ascii=False,indent=2),flush=True)
if __name__=="__main__":main()
