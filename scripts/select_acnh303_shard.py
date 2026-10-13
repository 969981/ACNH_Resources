#!/usr/bin/env python3
"""Prepare Git sparse-checkout patterns for one stable hash-partitioned asset shard.

Runs before Git blobs are fetched; tree enumeration is cheap for a blobless clone.
"""
import argparse
import hashlib
import json
from pathlib import Path
import subprocess
import sys

NCA = "e10617820db06889e1638499478da0de_NCA"

def main():
    a = argparse.ArgumentParser()
    a.add_argument("--category", required=True, choices=("Model","BDLI","Sound","Misc","Layout","Effect","Shader","EventFlow"))
    a.add_argument("--shard", type=int, required=True)
    a.add_argument("--shards", type=int, required=True)
    a.add_argument("--max-count", type=int, default=0)
    a.add_argument("--skip-count", type=int, default=0, help="Resume pagination within stable shard without repeating prior source files")
    a.add_argument("--suffix", default="", help="Case-insensitive filename suffix e.g. .bwav or .zs")
    args = a.parse_args()
    if args.shards < 1 or args.shard < 0 or args.shard >= args.shards or args.skip_count < 0 or args.max_count < 0:
        a.error("invalid shard")
    prefix = f"{NCA}/1/" if args.category == "Misc" else f"{NCA}/1/{args.category}/"
    tree = subprocess.check_output(["git", "ls-tree", "-rz", "HEAD", "--", prefix])
    items = []
    for line in tree.split(b"\x00"):
        if not line:
            continue
        head, p = line.split(b"\t", 1)
        path = p.decode("utf-8")
        if args.category == "Misc" and path.split("/")[2] in ("Model", "BDLI", "Sound"):
            continue
        if args.suffix and not path.lower().endswith(args.suffix.lower()):
            continue
        n = int.from_bytes(hashlib.sha256(p).digest()[:8], "big") % args.shards
        if n != args.shard:
            continue
        # `ls-tree -l` forces blob fetch on blob:none clones. No size needed to shard.
        items.append(path)
    items.sort()
    items = items[args.skip_count:]
    if args.max_count:
        items = items[:args.max_count]
    patterns = ["/scripts/"] + ["/" + p for p in items]
    # Keep this within shell process; git sparse-checkout accepts newline patterns.
    subprocess.run(["git", "sparse-checkout", "set", "--no-cone", "--stdin"],
                   input=("\n".join(patterns) + "\n").encode(), check=True)
    payload = {"category":args.category,"shard":args.shard,"shards":args.shards,
               "selected_files":len(items),"selected_bytes_in_git_tree":None,
               "size_note":"use Git Tree API inventory: no blob fetch",
               "suffix":args.suffix, "skip_count":args.skip_count, "max_count":args.max_count,
               "paths":items}
    print(json.dumps(payload, ensure_ascii=False), flush=True)
    Path("selection.json").write_text(json.dumps(payload, indent=2) + "\n",encoding="utf-8")
if __name__ == "__main__":
    main()
