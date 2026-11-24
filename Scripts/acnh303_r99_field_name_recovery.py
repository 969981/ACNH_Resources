#!/usr/bin/env python3
"""Reproduce R99 field-name grammar and cross-table checks, no inferred original names."""
import argparse
import csv
import hashlib
import itertools
import json
import re
import zlib
from collections import Counter
from pathlib import Path
BASE = Path("derived/3.0.3/npc_event_flags/r99_name_recovery/audit.json")
def run(root, out):
    report = json.loads((root / BASE).read_text(encoding="utf-8"))
    grammar = report["grammar"]
    vocab = grammar["vocabulary"]
    targets = {int(h, 16) for h in report["targets"]}
    assert zlib.crc32(b"FlagsFlowAccess u8") == 0xfa93f14b
    keys = set()
    for table in report["cross_table_evidence"]:
        path = root / table["path"]
        data = path.read_bytes()
        blob = hashlib.sha1(("blob %d" % len(data)).encode("ascii") + bytes([0]) + data).hexdigest()
        if blob != table["source_blob"]:
            raise ValueError("Source blob drift: " + str(path))
        with path.open(encoding="utf-8-sig", newline="") as f:
            rows = list(csv.DictReader(f))
        if len(rows) != table["rows"]:
            raise ValueError("Row count drift: " + str(path))
        for row in rows:
            k = row["hash_45F320F2"]
            if re.fullmatch(r"[A-Za-z][A-Za-z0-9_]*", k):
                keys.add(k)
        for h, evidence in table["fields"].items():
            if dict(Counter(r["hash_"+h] for r in rows)) != evidence["distribution"]:
                raise ValueError("Field distribution drift: " + h)
    count = 0
    hits = {}
    def check(name):
        nonlocal count
        for suffix in grammar["suffixes"]:
            sig = name + suffix
            count += 1
            crc = zlib.crc32(sig.encode("ascii"))
            if crc in targets:
                hits[sig] = {"hash": f"{crc:08X}", "signature": sig, "status": "CRC_CANDIDATE_ONLY"}
    for v,e in itertools.product(vocab["verbs"],vocab["events"]):
        for x in (v+e,e+v):
            for name in (x,x[0].lower()+x[1:],x.lower(),x.upper()):
                check(name)
        for m in vocab["modifiers"]:
            for name in (v+m+e,v+e+m,e+v+m,m+v+e,e+m+v,m+e+v):
                check(name)
    if count != grammar["grammar_signature_checks"]:
        raise ValueError("Grammar count mismatch")
    for k in sorted(keys):
        check(k)
        for v in ("Reset","Clear","Init","FlagsReset","FlagsClear","FlagsInit","IsReset","IsClear","ResetOn","ClearOn","ResetAt","ClearAt","ResetBy","ClearBy","ResetWhen","ClearWhen"):
            check(v+k)
            check(k+v)
    if count != grammar["total_signature_checks"] or len(keys) != grammar["source_key_count"]:
        raise ValueError("Candidate count mismatch")
    if sorted(hits) != sorted(x["signature"] for x in report["candidates"]):
        raise ValueError("Candidate mismatch")
    result = {"signature_checks":count,"source_keys":len(keys),"candidates":list(hits.values()),"confirmed_names":{},"source_tables_verified":len(report["cross_table_evidence"])}
    out.parent.mkdir(parents=True,exist_ok=True)
    out.write_text(json.dumps(result,indent=2)+"\n",encoding="utf-8")
    print(json.dumps(result,indent=2))
if __name__ == "__main__":
    p=argparse.ArgumentParser(description=__doc__)
    p.add_argument("--root",type=Path,default=Path("."))
    p.add_argument("--out",type=Path,required=True)
    a=p.parse_args()
    run(a.root.resolve(),a.out.resolve())
