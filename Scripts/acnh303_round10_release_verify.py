#!/usr/bin/env python3
"""Round 10 durable release acceptance: rehash every actual source-derived output.

Artifacts are already the native bytes produced in successful shard jobs.
Reject missing/ambiguous paths, stale output SHA and mismatched cumulative counts.
"""
from __future__ import annotations
import argparse,collections,gzip,hashlib,json
from pathlib import Path

BARS="acnh303-BARS-BWAV-real-PCM-v1"
AMTA="acnh303-bars-amta-lossless-v1"
def rows(path):
    with gzip.open(path,"rt",encoding="utf-8") as f:
        for line in f:
            if line.strip():yield json.loads(line)
def digest(path):
    h=hashlib.sha256()
    with path.open("rb") as f:
        for chunk in iter(lambda:f.read(1024*1024),b""):h.update(chunk)
    return h.hexdigest()

def main():
    p=argparse.ArgumentParser()
    p.add_argument("--collected",type=Path,required=True)
    p.add_argument("--media-baseline",type=Path,required=True)
    p.add_argument("--media-r10",type=Path,required=True)
    p.add_argument("--bars-r10",type=Path,required=True)
    p.add_argument("--layout-r10",type=Path,required=True)
    a=p.parse_args()
    roots=sorted(d for d in a.collected.iterdir() if d.is_dir())
    if len(roots)!=24:raise ValueError(f"expect 24 native source shard artifacts, got {len(roots)}")
    def real(output,expected):
        path=Path(output)
        if path.is_absolute() or ".." in path.parts:raise ValueError("unsafe output location")
        options=[]
        for root in roots:
            options.extend([root/path,root.joinpath(*path.parts[1:])])
        hits=sorted(set(f for f in options if f.is_file()))
        if len(hits)!=1:raise ValueError(f"expected 1 native copy, found {len(hits)}: {output}")
        if digest(hits[0])!=expected:raise ValueError("output SHA mismatch "+output)
        return hits[0]
    old={r["source_path"] for r in rows(a.media_baseline)}
    if len(old)!=1112:raise ValueError("media baseline not 1112")
    counts=collections.Counter();seen=set()
    for record in rows(a.media_r10):
        name=record["source_path"]
        if name in old:continue
        if name in seen:raise ValueError("duplicated new source")
        seen.add(name)
        if len(record["sha256"])!=64:raise ValueError("invalid source SHA")
        for item in record["validated_outputs"]:
            real(item["path"],item["sha256"])
            typ=item["validation"]["type"]
            counts["new_media_"+typ]+=1
    if len(seen)!=112 or counts["new_media_png"]!=195 or counts["new_media_wav"]!=64:
        raise ValueError(f"media expected 112/195 PNG/64 WAV, got {len(seen)} {counts}")
    bars_seen=collections.defaultdict(set)
    for rec in rows(a.bars_r10):
        kind=rec["source_type"];name=rec["source_path"]
        if name in bars_seen[kind]:raise ValueError("duplicate native BARS")
        bars_seen[kind].add(name)
        for item in rec["members"]:
            if kind==BARS and item["status"]=="converted_pcm_wav":
                real(item["output_path"],item["output_sha256"])
                if item["validation"]["frames"]<=0:raise ValueError("zero WAV frames")
                counts["new_bars_pcm_wav"]+=1
            if kind==AMTA and item["status"]=="lossless_amta_extracted":
                if item.get("native",{}).get("version_hex")!="0x0500":raise ValueError("non v5")
                real(item["output_path"],item["amta_sha256"])
                counts["new_amta_v5"]+=1
    if bars_seen[BARS]!=bars_seen[AMTA] or len(bars_seen[BARS])!=64:
        raise ValueError("BARS/AMTA source identity mismatch")
    if counts["new_bars_pcm_wav"]!=834 or counts["new_amta_v5"]!=834:
        raise ValueError("BARS output verification missing: "+str(counts))
    semantic=json.loads(a.layout_r10.read_text(encoding="utf-8"))
    if semantic["new_original_sources"]!=48:raise ValueError("incorrect Layout source denominator")
    for row in semantic["source_records"]:
        for item in row["leaves"]:
            if item["status"] in ("structured_json","font_references_only"):
                real(item["output_path"],item["output_sha256"])
                counts["new_ui2d_json"]+=1
    if counts["new_ui2d_json"]!=235:raise ValueError("unverified UI2D JSON target count")
    print("NATIVE_RELEASE_ALL_SHA_VERIFIED",json.dumps(dict(sorted(counts.items()))),flush=True)

if __name__=="__main__":main()
