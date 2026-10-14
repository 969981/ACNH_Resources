#!/usr/bin/env python3
"""Round 9: reconcile only actual executed shard manifests against round 8 baselines."""
from __future__ import annotations
import argparse, gzip, hashlib, json
from collections import Counter
from pathlib import Path

def load(path):
    return json.loads(path.read_text(encoding="utf-8"))

def audit(downloads: Path, prior: Path, dest: Path):
    manifests=list(downloads.rglob("report.json"))
    by_schema={}
    for name in manifests:
        row=load(name)
        by_schema.setdefault(row["schema"],[]).append(row)
    needed={"acnh303-BARS-BWAV-real-PCM-v1":8,
            "acnh303-bars-amta-lossless-v1":8,
            "acnh303-bdli-lbli-extracted-v1":4}
    for schema,num in needed.items():
        if len(by_schema.get(schema,[]))!=num:
            raise ValueError(f"missing shard manifests: {schema} {len(by_schema.get(schema,[]))}/{num}")
    old=load(prior)
    historical={r["source_path"] for r in old["records"]}
    if len(historical)!=8:
        raise ValueError("round8 BARS reference is not 8 distinct sources")
    groups={}
    summary=Counter()
    for schema,reports in by_schema.items():
        if schema not in needed:
            continue
        seen=set()
        entries=[]
        for report in reports:
            for row in report["records"]:
                name=row["source_path"]
                if name in seen:
                    raise ValueError(f"duplicate new source in {schema}: {name}")
                seen.add(name)
                if not isinstance(row.get("source_sha256"),str) or len(row["source_sha256"])!=64:
                    raise ValueError(f"missing input SHA-256: {name}")
                entries.append(row)
                if schema=="acnh303-BARS-BWAV-real-PCM-v1":
                    if name in historical:
                        raise ValueError(f"round8 BARS repeated: {name}")
                    for m in row["members"]:
                        if m.get("status")=="converted_pcm_wav":
                            if len(m["source_member_sha256"])!=64 or len(m["output_sha256"])!=64:
                                raise ValueError("missing WAV member/output hash")
                            if m["validation"]["frames"]<=0:
                                raise ValueError("invalid PCM frames")
                            summary["new_verified_bars_wav"]+=1
                elif schema=="acnh303-bars-amta-lossless-v1":
                    for m in row["members"]:
                        if m.get("status")=="lossless_amta_extracted":
                            if len(m["amta_sha256"])!=64:
                                raise ValueError("missing AMTA SHA")
                            summary["new_amta_members"]+=1
                elif schema=="acnh303-bdli-lbli-extracted-v1":
                    for m in row.get("sections",[]):
                        if m["status"]=="raw_extracted":
                            if len(m["sha256"])!=64 or m["bytes"]<=0:
                                raise ValueError("invalid extracted LBLI section")
                            summary["new_raw_lbli_sections"]+=1
        expected=32 if schema in ("acnh303-BARS-BWAV-real-PCM-v1","acnh303-bars-amta-lossless-v1") else 32
        if len(entries)!=expected:
            raise ValueError(f"{schema} {len(entries)} != {expected}")
        summary["source_rows_"+schema]=len(entries)
        groups[schema]=entries
    bars={r["source_path"]:r["source_sha256"] for r in groups["acnh303-BARS-BWAV-real-PCM-v1"]}
    amta={r["source_path"]:r["source_sha256"] for r in groups["acnh303-bars-amta-lossless-v1"]}
    if bars!=amta:
        raise ValueError("AMTA and BARS decoders were not fed identical original sources/hashes")
    dest.mkdir(parents=True,exist_ok=True)
    with gzip.open(dest/"source_manifest.jsonl.gz","wt",encoding="utf-8") as f:
        for schema in sorted(groups):
            for item in sorted(groups[schema],key=lambda r:r["source_path"]):
                f.write(json.dumps({"source_type":schema,**item},sort_keys=True,ensure_ascii=False)+"\n")
    coverage={"schema":"acnh303-r9-verified-shard-report-v1",
        "round8_bars_originals":8,"round9_new_bars_originals":32,
        "bars_cumulative_originals":40,"round9_bdli_section_sources":32,
        "round8_cumulative_core_media_outputs_UNCHANGED":2660,
        "round8_separate_bars_verified_pcm":42,
        "counts":dict(summary),
        "limitations":"WAV outputs and AMTA/LBLI raw binary structure are separately audited; no full game semantic decoding claim. All 36708 BDLI were previously structurally parsed; these 32 have newly exported raw sections."}
    (dest/"coverage.json").write_text(json.dumps(coverage,ensure_ascii=False,indent=2,sort_keys=True)+"\n",encoding="utf-8")
    print(json.dumps(coverage,ensure_ascii=False,indent=2))
    return coverage

def main():
    p=argparse.ArgumentParser()
    p.add_argument("--collected",type=Path,required=True)
    p.add_argument("--round8-bars",type=Path,required=True)
    p.add_argument("--out",type=Path,required=True)
    a=p.parse_args()
    audit(a.collected,a.round8_bars,a.out)

if __name__=="__main__":
    main()
