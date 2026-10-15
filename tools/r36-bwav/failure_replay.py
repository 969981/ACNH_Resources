#!/usr/bin/env python3
"""R36 native read-only classification of the 891 real vgmstream BARS failures.

Reopens byte-exact original Sound/Resource/*.bars from repository tree, checks
real source and BWAV member SHA, re-derives member bounds and parses native
header. Never invent sample data from a header-only member.
"""
from __future__ import annotations
import argparse,collections,hashlib,json,subprocess,sys
from pathlib import Path
sys.path.insert(0,str(Path(__file__).resolve().parents[2]/"scripts"))
from acnh303_bars_probe import inspect,NCA
from acnh303_round35_short_bwav import inspect_short

def sha(b):return hashlib.sha256(b).hexdigest()

def audit(repo,reports_path):
    report_files=sorted(reports_path.rglob("report.json"))
    docs=[json.loads(p.read_text("utf8")) for p in report_files]
    docs=[d for d in docs if d.get("schema")=="acnh303-BARS-BWAV-real-PCM-v1"]
    if len(docs)!=4:raise ValueError("expected exact 4 R36 BARS original conversion reports")
    original={}
    for d in docs:
        for src in d["records"]:
            n=src["source_path"]
            if n in original:raise ValueError("repeated sound original")
            original[n]=src
    if len(original)!=160:raise ValueError("160 SHA validated R36 BARS originals required")
    failed=[(src["source_path"],m) for src in original.values() for m in src["members"] if m["status"]=="decode_failed"]
    if len(failed)!=891:raise ValueError("R36 failures changed from independent SHA cumulative audit")
    bysource=collections.defaultdict(list)
    for src,m in failed:bysource[src].append(m)
    details=[];status=collections.Counter();sizes=collections.Counter()
    bysource_sizes={};originals_sha={}
    for path in sorted(bysource):
        full=repo/NCA/"1"/path
        subprocess.run(["git","checkout","--ignore-skip-worktree-bits","HEAD","--",str(full.relative_to(repo))],
                       cwd=repo,check=True,capture_output=True)
        raw=full.read_bytes();r=original[path]
        if len(raw)!=r["original_bytes"] or sha(raw)!=r["source_sha256"]:
            raise ValueError("R36 source bytes SHA/size changed "+path)
        originals_sha[path]=sha(raw)
        parsed=inspect(raw)
        file_length=parsed["declared_file_size"]
        points=sorted({i["meta_offset"] for i in parsed["items"] if 0<i["meta_offset"]<file_length}
            | {i["asset_offset"] for i in parsed["items"] if 0<i["asset_offset"]<file_length and i["asset_offset"]!=0xffffffff}
            | {file_length})
        items={x["index"]:x for x in parsed["items"]}
        for m in bysource[path]:
            i=m["asset_index"];orig=items[i]
            start=orig["asset_offset"];end=next((x for x in points if x>start),None)
            if end is None:raise ValueError("no native BWAV end for "+str(i))
            member=raw[start:end]
            if sha(member)!=m["source_member_sha256"] or len(member)!=m["source_member_bytes"]:
                raise ValueError("R36 failing BWAV member SHA or bounds mismatch "+path+" "+str(i))
            head=inspect_short(member)
            native_status=head["status"]
            if native_status=="VALID_BOUNDED_NATIVE_HEADER":
                if head["no_channel_has_payload_in_member"]:
                    label="native_header_without_internal_sample_payload"
                else:
                    label="native_header_with_internal_payload_failed_decoder"
            else:label="invalid_or_unknown_native_BWAV_header"
            status[label]+=1;sizes[len(member)]+=1
            details.append({"source_path":path,"source_sha256":sha(raw),
                "asset_index":i,"asset_member_sha256":sha(member),
                "asset_offset":start,"asset_end":end,"asset_member_size":len(member),
                "native_header_status":native_status,"classification":label,
                "channel_count":head.get("channel_count"),
                "native_encoding_ids":[x["encoding_id"] for x in head.get("channels",[])],
                "native_sample_rates":[x["sample_rate"] for x in head.get("channels",[])],
                "native_nonprefetch_samples":[x["nonprefetch_samples"] for x in head.get("channels",[])],
                "native_file_samples":[x["file_samples"] for x in head.get("channels",[])],
                "output_wav":None})
        bysource_sizes[path]={"source_sha256":sha(raw),"decode_failed":len(bysource[path])}
        print("R36_FAILURE_SOURCE",path,len(bysource[path]),flush=True)
        del raw
    if sum(status.values())!=891:raise ValueError("R36 native reconciliation missed failed members")
    return {"schema":"acnh303-r36-891-true-SHA-verified-native-BWAV-decoder-failure-classification-v1",
        "actual_R36_BARS_sources":len(original),
        "original_BARS_sources_with_decoder_failures":len(bysource),
        "actually_audited_failing_BWAV_members":891,
        "classification":dict(status),
        "original_member_size_histogram":dict(sorted(sizes.items())),
        "by_original_source":bysource_sizes,
        "all_failed_members_verified":details,
        "external_sample_payload_proven":False,
        "limitations":"An extracted BARS member without internally reachable samples does not establish source or address of actual external audio. Native 3.0.3 AAL runtime read/stream dispatch remains unverified. Members with internal payload and decoder failure must be separately diagnosed; failure is not automatically header-only."}

def main():
    p=argparse.ArgumentParser()
    p.add_argument("--repo",type=Path,default=Path("."))
    p.add_argument("--reports",type=Path,required=True)
    p.add_argument("--out",type=Path,required=True)
    a=p.parse_args();out=audit(a.repo.resolve(),a.reports)
    a.out.parent.mkdir(parents=True,exist_ok=True)
    a.out.write_text(json.dumps(out,indent=2,ensure_ascii=False,sort_keys=True)+"\n")
    print("R36_BARS_FAILURE_CLASSES",out["classification"],
          "ORIGINAL_ARCHIVES",out["original_BARS_sources_with_decoder_failures"])
if __name__=="__main__":main()
