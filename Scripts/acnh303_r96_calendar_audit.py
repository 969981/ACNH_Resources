#!/usr/bin/env python3
"""Reproduce R96 calendar/field audit and optionally scan field-hash candidates."""
import argparse
import hashlib
import json
import re
from collections import Counter, defaultdict
from pathlib import Path
BASE = Path("derived/3.0.3/npc_event_flags")
CROOT = Path("derived/3.0.3/ghidra12.2/c")
FIELDS = ("FA93F14B", "5140E4B4", "5F77B61A", "BED25A86", "8D401DF7",
          "CCD4C25F", "E6317726", "110A7053")
HEX = re.compile(r"(?<![0-9A-Za-z_])(-?0[xX][0-9a-fA-F]{1,8})(?![0-9A-Za-z_])")

def load(p):
    return json.loads(p.read_text(encoding="utf-8"))

def blob_sha(p):
    b = p.read_bytes()
    return hashlib.sha1(("blob %d" % len(b)).encode("ascii") + bytes([0]) + b).hexdigest()

def run(root, out, scan):
    expected = load(root / BASE / "r96_calendar_audit/audit.json")
    source = root / BASE / "integrated/eventflag_definitions_371.json"
    rows = load(source)
    if len(rows) != 371 or blob_sha(source) != expected["source_definition_blob"]:
        raise ValueError("Original definition evidence drift")
    counts = defaultdict(lambda: {"count": 0, "access": Counter(), "reset": Counter()})
    talk, reset2, reset3 = [], [], []
    for r in rows:
        f = r["raw_fields"]
        c = counts[r["scope"]]
        c["count"] += 1
        for name, field in (("access", "hash_FA93F14B"), ("reset", "hash_5140E4B4")):
            if field in f:
                c[name][f[field]] += 1
        item = {k: r[k] for k in ("scope", "key", "unique_id")}
        if f.get("hash_5140E4B4") == "2":
            reset2.append(item)
        if f.get("hash_5140E4B4") == "3":
            reset3.append(item)
        if r["scope"] == "player_activity":
            talk.append({"unique_id": r["unique_id"], "key": r["key"],
                         "description_ja": r["description_ja"],
                         "max_value": int(f["hash_0110B14C"]),
                         "message_label": int(f["hash_110A7053"]),
                         "talk_value_villager": int(f["hash_CCD4C25F"]),
                         "talk_value_visitor": int(f["hash_E6317726"]),
                         "actual_value": None})
    if dict(counts) != expected["scope_counts"] or reset2 != expected["reset_rule_2"] or reset3 != expected["reset_rule_3"] or talk != expected["talk_value"]["rows"]:
        raise ValueError("Source statistics drift")
    for entry in expected["native_anchors"]:
        p = root / entry["path"]
        if blob_sha(p) != entry["git_blob_sha"]:
            raise ValueError("Native blob drift: " + str(p))
        lines = p.read_text(encoding="utf-8").splitlines()
        for anchor in entry["anchors"]:
            if anchor["text"] not in lines[anchor["line"]-1]:
                raise ValueError("Native line drift: " + str(p))
    result = dict(expected)
    result["local_reproduction_passed"] = True
    if scan:
        hits = {h: [] for h in FIELDS}
        target = {int(h, 16): h for h in FIELDS}
        files = sorted((root / CROOT).rglob("*.c"))
        if len(files) != 59971:
            raise ValueError("Complete Ghidra C export required")
        for p in files:
            for i, line in enumerate(p.read_text(encoding="utf-8").splitlines(), 1):
                for literal in sorted(set(HEX.findall(line))):
                    h = target.get(int(literal, 16) & 0xffffffff)
                    if h is not None:
                        hits[h].append({"file": p.relative_to(root).as_posix(),
                                        "line": i, "literal": literal, "text": line.strip(),
                                        "status": "NUMERIC_CANDIDATE_ONLY"})
        result["native_scan_executed"] = True
        result["native_scan_files"] = len(files)
        result["native_field_candidates"] = hits
    out.parent.mkdir(parents=True, exist_ok=True)
    out.write_text(json.dumps(result, ensure_ascii=False, indent=2) + "\n", encoding="utf-8")
    print("Source definitions, Git blobs and anchors verified; runtime not verified")

if __name__ == "__main__":
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument("--root", type=Path, default=Path("."))
    p.add_argument("--out", type=Path, required=True)
    p.add_argument("--scan-native", action="store_true")
    args = p.parse_args()
    run(args.root.resolve(), args.out, args.scan_native)
