#!/usr/bin/env python3
"""Audit each real R34 BARS vgmstream failure, not merely aggregate totals.

Requires original 4 Sound shard reports from same Action; does not mark
metadata-only BWAV as PCM and does not invent channel samples.
"""
from __future__ import annotations
import argparse,json,collections
from pathlib import Path
def audit(root):
    files=sorted(root.rglob("report.json"));rows=[];tot=0;seen=set();valid=0;fails=0
    for f in files:
        d=json.loads(f.read_text("utf8"))
        if d.get("schema")!="acnh303-BARS-BWAV-real-PCM-v1":continue
        for src in d["records"]:
            path=src["source_path"]
            if path in seen:raise ValueError("same original BARS source repeated")
            seen.add(path);tot+=1
            for m in src["members"]:
                if m["status"]=="converted_pcm_wav":valid+=1
                if m["status"]=="decode_failed":
                    fails+=1
                    rows.append({"original_source_path":path,
                      "source_sha256":src["source_sha256"],
                      "source_bytes":src["original_bytes"],
                      "source_status":src["status"],
                      "asset_index":m["asset_index"],
                      "member_sha256":m.get("source_member_sha256"),
                      "member_bytes":m.get("source_member_bytes"),
                      "member_type":m.get("input_type"),
                      "asset_offset":m.get("source_asset_offset"),
                      "converter_exit":m.get("converter_exit_code"),
                      "converter_stderr_tail":m.get("stderr_tail"),
                      "decoder_error":m.get("error")})
    if (tot,valid,fails)!=(160,1391,224):
        raise ValueError(f"expected (160,1391,224) got ({tot},{valid},{fails})")
    lengths=collections.Counter(x["member_bytes"] for x in rows)
    statuses=collections.Counter(x["source_status"] for x in rows)
    out={"schema":"acnh303-r34-224-actual-bwav-decoder-failures-v1",
       "original_bars_sources_tested":tot,
       "valid_pcm_wav":valid,
       "native_bwav_decoder_failed":fails,
       "failed_member_byte_size_distribution":dict(sorted(lengths.items())),
       "failed_source_status_distribution":dict(statuses),
       "failed_original_paths_unique":len({x["original_source_path"] for x in rows}),
       "exact_failures":rows,
       "limits":"These are byte-source SHA and real converter errors from same run; header-only/no sample status must be independently verified by native source parse. AMTA count does not equal PCM count."}
    return out
def main():
    p=argparse.ArgumentParser()
    p.add_argument("--reports",type=Path,required=True)
    p.add_argument("--out",type=Path,required=True)
    a=p.parse_args();d=audit(a.reports)
    a.out.parent.mkdir(parents=True,exist_ok=True)
    a.out.write_text(json.dumps(d,indent=2,sort_keys=True,ensure_ascii=False)+"\n",encoding="utf8")
    print("R34_GENUINE_BARS_ERROR_COUNTS",json.dumps({k:v for k,v in d.items() if k!="exact_failures"},ensure_ascii=False))
if __name__=="__main__":main()
