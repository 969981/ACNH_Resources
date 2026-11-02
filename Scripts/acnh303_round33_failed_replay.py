#!/usr/bin/env python3
"""Original SHA-proven R33 failed BFRES source and safe converter replay audit.

Reuses old failure metadata, reads actual original bytes, enumerates bounded
native leaves, and compares newly reproduced GLB status. No fake "fix".
"""
from __future__ import annotations
import argparse,hashlib,json
from pathlib import Path
from acnh303_media_l3 import find_leaf,NCA
def digest(b):return hashlib.sha256(b).hexdigest()
def main():
    p=argparse.ArgumentParser();p.add_argument("--root",type=Path,default=Path("."))
    p.add_argument("--history",type=Path,default=Path("derived/3.0.3/r33_failed_source/source.json"))
    p.add_argument("--replay",type=Path,default=Path("derived/3.0.3/r33_failed_source/replay_media/Model/000-of-001/manifest.json"))
    p.add_argument("--out",type=Path,required=True)
    a=p.parse_args()
    hist=json.loads(a.history.read_text("utf8"))["failed_source"]
    name=hist["original_source_relative_path"];pfile=a.root/NCA/"1"/name
    if not name.startswith("Model/") or ".." in Path(name).parts:raise ValueError("unsafe failure path")
    if not pfile.is_file():raise ValueError("failed original not checked out")
    b=pfile.read_bytes();sha=digest(b)
    if sha!=hist["original_source_sha256"]:raise ValueError("source SHA drift")
    record={"sha256":sha,"original_source_relative_path":name,"original_bytes":len(b),
        "old_audit_path":hist["audit_path"],"old_record":hist["original_record"],
        "raw_first64_hex":b[:64].hex(),"leaves":[]}
    try:
        for i,leaf in enumerate(find_leaf(b,name)):
            raw=leaf["data"]
            record["leaves"].append({
                "name":leaf["source_member"],"format":leaf["format"],
                "input_bytes":len(raw),"sha256":digest(raw),
                "first64_hex":raw[:64].hex(),
                "native_magic_counts":{tag.decode():raw.count(tag) for tag in
                    (b"FRES",b"FMDL",b"FSKL",b"FSKA",b"FSHU",b"FVIS",b"FVTX")},
                "fres_header_prefix":raw[:0x80].hex() if raw[:4]==b"FRES" else None})
            if i>=50:raise ValueError("unbounded leaf count")
        record["leaf_enumeration"]="success"
    except Exception as e:
        record["leaf_enumeration"]="failed"
        record["leaf_exception"]=str(e)
    if a.replay.is_file():
        results=json.loads(a.replay.read_text("utf8"))
        if len(results)!=1 or results[0]["source_path"]!=name or results[0]["sha256"]!=sha:
            raise ValueError("replay result did not match original")
        record["replay_result"]=results[0]
        record["replay_status"]=results[0]["status"]
    else:
        record["replay_status"]="NOT_EXECUTED"
    original_failed=hist["original_record"]
    new_status=record["replay_status"]
    if new_status=="converted_media" and record.get("replay_result",{}).get("validated_outputs"):
        record["resolution"]="CURRENT_CONVERTER_GENERATED_VALIDATED_MEDIA"
    elif record["leaf_enumeration"]=="success" and record["leaves"]:
        formats={x["format"] for x in record["leaves"]}
        record["resolution"]="NATIVE_LEAVES_PRESENT_CONVERTER_UNRESOLVED" if new_status=="failed" else "REPLAY_STATUS_"+new_status
        record["source_native_leaf_formats"]=sorted(formats)
    else:record["resolution"]="SOURCE_EXTRACTION_REQUIRES_INVESTIGATION"
    record["evidence_limits"]="FMDL/FSKA bytes string counts are bounded diagnostics, not a proof of complete native model/animation semantics."
    a.out.parent.mkdir(parents=True,exist_ok=True)
    a.out.write_text(json.dumps(record,indent=2,ensure_ascii=False,sort_keys=True)+"\n",encoding="utf8")
    print("R33_FAILED_REPLAY_AUDIT",json.dumps({"path":name,"resolution":record["resolution"],
        "sha256":sha,"leafs":record["leaves"],"replay":record.get("replay_result",{}).get("parser_errors")},ensure_ascii=False)[:5000])
if __name__=="__main__":main()
