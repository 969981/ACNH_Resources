#!/usr/bin/env python3
"""Isolate R33's one actual BARS BWAV decode_failed source+member from real shard reports."""
import argparse,json
from pathlib import Path
def main():
    p=argparse.ArgumentParser();p.add_argument("--reports",required=True,type=Path);p.add_argument("--out",required=True,type=Path);a=p.parse_args()
    files=sorted(a.reports.rglob("report.json"));scanned=0;entries=[];originals=set()
    for fp in files:
        data=json.loads(fp.read_text("utf8"))
        if data.get("schema")!="acnh303-BARS-BWAV-real-PCM-v1":continue
        for source in data["records"]:
            scanned+=1
            name=source["source_path"]
            if name in originals:raise ValueError("repeated BARS source in different shards")
            originals.add(name)
            for m in source["members"]:
                if m["status"]=="decode_failed":
                    entries.append({"source_path":name,"source_sha256":source["source_sha256"],
                        "original_bytes":source["original_bytes"],"original_status":source["status"],
                        "member":m,"source_report":fp.as_posix()})
    if scanned!=80:raise ValueError(f"expected 80 original R33 BARS sources, got {scanned}")
    if len(entries)!=1:raise ValueError(f"expected exactly one R33 failed BARS member, got {len(entries)}")
    result={"schema":"acnh303-r33-one-real-bwav-decode-error-v1",
         "source_tested":scanned,"decode_failed_members":len(entries),"failures":entries,
         "constraints":"Only actual decoder failures counted; 922 AMTA extracted != 922 verified PCM. Do not claim this audio member converts."}
    a.out.parent.mkdir(parents=True,exist_ok=True)
    a.out.write_text(json.dumps(result,ensure_ascii=False,sort_keys=True,indent=2)+"\n",encoding="utf8")
    print("R33_BARS_ONE_DECODE_FAILED",json.dumps(result,ensure_ascii=False)[:6000])
if __name__=="__main__":main()
