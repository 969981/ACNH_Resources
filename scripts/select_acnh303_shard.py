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
    a.add_argument("--category", required=True, choices=("Model","Layout","Effect","Shader","Sound","EventFlow"))
    a.add_argument("--shard", type=int, required=True)
    a.add_argument("--shards", type=int, required=True)
    a.add_argument("--max-count", type=int, default=0)
    args = a.parse_args()
    if args.shards < 1 or args.shard < 0 or args.shard >= args.shards:
        a.error("invalid shard")
    prefix = f"{NCA}/1/{args.category}/"
    tree = subprocess.check_output(["git", "ls-tree", "-rlz", "HEAD", "--", prefix])
    items = []
    total = 0
    for line in tree.split(b"\x00"):
        if not line:
            continue
        head, p = line.split(b"\t", 1)
        path = p.decode("utf-8")
        n = int.from_bytes(hashlib.sha256(p).digest()[:8], "big") % args.shards
        if n != args.shard:
            continue
        size_text = head.rsplit(b" ", 1)[-1]
        try:
            size = int(size_text)
        except ValueError:
            size = 0
        items.append((path, size))
        total += size
    items.sort()
    if args.max_count:
        items = items[:args.max_count]
    patterns = ["/scripts/"] + ["/" + p for p, _ in items]
    # Keep this within shell process; git sparse-checkout accepts newline patterns.
    subprocess.run(["git", "sparse-checkout", "set", "--no-cone", "--stdin"],
                   input=("\n".join(patterns) + "\n").encode(), check=True)
    payload = {"category":args.category,"shard":args.shard,"shards":args.shards,
               "selected_files":len(items),"selected_bytes_in_git_tree":sum(s for _,s in items),
               "paths": [p for p,_ in items[:5]]}
    print(json.dumps(payload, ensure_ascii=False), flush=True)
    Path("selection.json").write_text(json.dumps(payload, indent=2) + "\n",encoding="utf-8")
if __name__ == "__main__":
    main()
