#!/usr/bin/env python3
"""R36 cross-round evidence matrix for the 224+4 BWAV members with no internal payload.

Read-only analysis of *previously byte/SHA verified* R35 reports. Correlation
here does NOT prove where any missing sample bytes actually reside.
"""
from __future__ import annotations
import argparse,collections,hashlib,json
from pathlib import Path

def audit(a,b):
    hist=json.loads(a.read_text("utf8"))
    npc=json.loads(b.read_text("utf8"))
    old=hist["member_details"]
    newer=[{"original_path":npc["source"],"member_sha256":x["original_member_sha256"],
            "member_bytes":x["original_bytes"],"parsed_header":x["native"],
            "asset_index":x["asset_index"]} for x in npc["members"]]
    if len(old)!=224 or len(newer)!=4:raise ValueError("must retain 224+4 distinct original members")
    members=old+newer
    sizes=collections.Counter();sources=collections.Counter()
    enc=collections.Counter();rates=collections.Counter()
    all_samples=[];bad=[];meta=[]
    identities=set()
    for row in members:
        source=row["original_path"];sha=row["member_sha256"]
        ident=(source,row["asset_index"],sha)
        if ident in identities:raise ValueError("duplicate original asset identity")
        identities.add(ident)
        h=row["parsed_header"]
        if (h["status"]!="VALID_BOUNDED_NATIVE_HEADER" or
                not h["no_channel_has_payload_in_member"]):
            bad.append(ident);continue
        sizes[row["member_bytes"]]+=1;sources[source]+=1
        for c in h["channels"]:
            enc[str(c["encoding_id"])]+=1
            rates[c["sample_rate"]]+=1
            all_samples.append(c["nonprefetch_samples"])
            meta.append({"source":source,"asset_index":row["asset_index"],
                "member_size":row["member_bytes"],
                "sample_rate":c["sample_rate"],"encoding_id":c["encoding_id"],
                "file_samples":c["file_samples"],
                "nonprefetch_samples":c["nonprefetch_samples"],
                "nonprefetch_offset":c["nonprefetch_offset"],
                "sample_payload_offset":c["payload_offset"],
                "payload_offset_in_member":c["payload_offset_in_member"],
                "member_sha256":sha})
    if bad or len(meta)!=228:raise ValueError("unexpected header or channel status")
    return {"schema":"acnh303-r36-verified-short-bwav-crossround-relational-matrix-v1",
       "number_of_distinct_original_header_only_members":len(members),
       "number_of_original_bars_archives":len(sources),
       "source_member_counts":dict(sorted(sources.items())),
       "short_member_bytes_histogram":dict(sorted(sizes.items())),
       "native_encoding_id_histogram":dict(sorted(enc.items())),
       "native_sample_rate_histogram":dict(sorted(rates.items())),
       "file_samples_zero_count":sum(x["file_samples"]==0 for x in meta),
       "nonprefetch_offset_eq_member_end_count":sum(x["nonprefetch_offset"]==x["member_size"] for x in meta),
       "sample_payload_offset_eq_member_end_count":sum(x["sample_payload_offset"]==x["member_size"] for x in meta),
       "nonprefetch_samples_min":min(all_samples),"nonprefetch_samples_max":max(all_samples),
       "short_native_members":meta,
       "input_report_sha256":[hashlib.sha256(x.read_bytes()).hexdigest() for x in [a,b]],
       "external_sample_resource_verified":False,
       "audio_reconstructed":False,
       "warning":"Only reports already derived from source SHA-checked original BARS bytes were cross-joined. No exact standalone sound file content or game AAL runtime read chain was verified in this step; no external-stream linkage may be inferred.",
       "next_experiment":"Capture actual AAL asset preload/read calls keyed by BARS source+CRC32 and the nonprefetch_offset/total sample count, and compare real external payload by original bytes and offset."}
def main():
    p=argparse.ArgumentParser()
    p.add_argument("--r35-224",type=Path,required=True)
    p.add_argument("--r35-4",type=Path,required=True)
    p.add_argument("--out",type=Path,required=True)
    args=p.parse_args();r=audit(args.r35_224,args.r35_4)
    args.out.parent.mkdir(parents=True,exist_ok=True)
    args.out.write_text(json.dumps(r,indent=2,sort_keys=True,ensure_ascii=False)+"\n",encoding="utf8")
    print("R36_BWAV_MATRIX",r["number_of_distinct_original_header_only_members"],
          r["source_member_counts"],"file_samples_zero=",r["file_samples_zero_count"])
if __name__=="__main__":main()
