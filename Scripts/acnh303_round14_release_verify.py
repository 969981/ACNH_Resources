#!/usr/bin/env python3
"""Re-read and hash all R14 output files before durable GitHub Release.

No duplicate source origins; no status inflated by header JSON or archive
mirrors. Existing cumulative SHA reports remain the audit baseline.
"""
from __future__ import annotations
import argparse,collections,gzip,hashlib,json
from pathlib import Path

BARS="acnh303-BARS-BWAV-real-PCM-v1"
AMTA="acnh303-bars-amta-lossless-v1"
def jsonlines(file):
    with gzip.open(file,"rt",encoding="utf-8") as f:
        for line in f:
            if line.strip():yield json.loads(line)
def sha(path):
    h=hashlib.sha256()
    with path.open("rb") as stream:
        for part in iter(lambda:stream.read(1024*1024),b""):
            h.update(part)
    return h.hexdigest()
def verify(downloads,media_manifest,layout_coverage,bars_manifest,media_old):
    roots=sorted(p for p in downloads.iterdir() if p.is_dir() and p.name.startswith("acnh303-r14-data-"))
    if len(roots)!=16:
        raise ValueError(f"Expected 16 actual source data archives, got {len(roots)}")
    outcomes=collections.Counter()
    seen_outputs=set()
    def locate(name,sha256):
        src=Path(name)
        if src.is_absolute() or ".." in src.parts or not src.parts or not src.parts[0].startswith("Unpack_"):
            raise ValueError("unsafe generated path "+str(name))
        hits=set()
        for root in roots:
            choices=[root/src,root.joinpath(*src.parts[1:])]
            hits.update(p for p in choices if p.is_file())
        if len(hits)!=1:
            raise ValueError(f"Output missing or nonunique {name}: {len(hits)}")
        path=hits.pop()
        if sha(path)!=sha256:raise ValueError(f"SHA mismatch {name}")
        if name in seen_outputs:raise ValueError("Output manifest duplicates path: "+name)
        seen_outputs.add(name)
        outcomes["bytes"]+=path.stat().st_size
        outcomes["outputs"]+=1
        return path
    old={row["source_path"] for row in jsonlines(media_old)}
    if len(old)!=1224:raise ValueError("R10 baseline not 1224")
    new=[x for x in jsonlines(media_manifest) if x["source_path"] not in old]
    if len(new)!=112 or len({r["source_path"] for r in new})!=112:
        raise ValueError("R14 media new-source count wrong")
    for row in new:
        outcomes["media_sources"]+=1
        for item in row["validated_outputs"]:
            if item["validation"]["type"] not in ("glb","png","wav"):
                raise ValueError("invalid native media output")
            locate(item["path"],item["sha256"])
            outcomes[item["validation"]["type"]]+=1
    layout=json.loads(layout_coverage.read_text(encoding="utf-8"))
    if layout["new_original_sources"]!=32:raise ValueError("R14 Layout originals invalid")
    for row in layout["source_records"]:
        for leaf in row["leaves"]:
            if "output_path" in leaf:
                locate(leaf["output_path"],leaf["output_sha256"])
                outcomes["ui2d_json"]+=1
    bars=list(jsonlines(bars_manifest))
    if len(bars)!=32:raise ValueError("16 BARS + 16 AMTA records required")
    kind=collections.Counter(x["source_type"] for x in bars)
    if kind!={BARS:16,AMTA:16}:raise ValueError("unexpected BARS paired report types")
    for row in bars:
        for member in row["members"]:
            status=member.get("status")
            if status=="converted_pcm_wav":
                locate(member["output_path"],member["output_sha256"])
                outcomes["bars_wav"]+=1
            elif status=="lossless_amta_extracted":
                locate(member["output_path"],member["amta_sha256"])
                outcomes["amta_raw"]+=1
    if outcomes["wav"]!=48:
        raise ValueError("48 standalone BWAV PCM WAV required")
    if outcomes["bars_wav"]==0 and outcomes["amta_raw"]==0:
        raise ValueError("no verified BARS native output")
    print("R14_VERIFIED_RELEASE_OUTPUTS",json.dumps(outcomes,sort_keys=True),flush=True)
    return dict(outcomes)
def main():
    p=argparse.ArgumentParser()
    p.add_argument("--downloads",type=Path,required=True)
    p.add_argument("--media-manifest",type=Path,required=True)
    p.add_argument("--layout-coverage",type=Path,required=True)
    p.add_argument("--bars-manifest",type=Path,required=True)
    p.add_argument("--media-old",type=Path,required=True)
    p.add_argument("--out",type=Path,required=True)
    a=p.parse_args()
    result=verify(a.downloads,a.media_manifest,a.layout_coverage,a.bars_manifest,a.media_old)
    a.out.parent.mkdir(parents=True,exist_ok=True)
    a.out.write_text(json.dumps(result,indent=2,sort_keys=True)+"\n","utf-8")
if __name__=="__main__":
    main()
