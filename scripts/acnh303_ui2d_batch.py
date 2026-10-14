#!/usr/bin/env python3
"""Extract true FLYT/FLAN JSON from 41 ACNH Layout archives without BNTX."""
import argparse,csv,hashlib,json,pathlib,sys
from collections import Counter
from acnh303_media_l3 import NCA,find_leaf
from acnh303_ui2d_parser import parse_ui2d

def digest(b):return hashlib.sha256(b).hexdigest()
def main():
    p=argparse.ArgumentParser()
    p.add_argument("--root",type=pathlib.Path,default=pathlib.Path("."))
    p.add_argument("--out",type=pathlib.Path,default=pathlib.Path("Unpack_UI2D"))
    p.add_argument("--report",type=pathlib.Path,default=pathlib.Path("derived/3.0.3/ui2d_41"))
    p.add_argument("--strict",action="store_true")
    a=p.parse_args()
    root=a.root.resolve()
    rom=root/NCA/"1"
    with (root/"derived/3.0.3/media_iteration4_cumulative/remaining.csv").open(newline="",encoding="utf-8") as f:
        selected={r["source_path"]:r["source_sha256"] for r in csv.DictReader(f)
                  if r["state"]=="no_target_leaf" and r["source_path"].startswith("Layout/")}
    if len(selected)!=41:raise ValueError(f"expected 41 source files: {len(selected)}")
    rows=[];kind_counter=Counter();fail=[]
    for name,expected in sorted(selected.items()):
        original=(rom/name).read_bytes()
        if digest(original)!=expected:raise ValueError("source SHA drift: "+name)
        out=root/a.out/NCA/"1"/(name+".ui2d")
        out.mkdir(parents=True,exist_ok=True)
        records=[];index=0
        for leaf in find_leaf(original,name):
            payload=leaf["data"];kind=leaf["format"]
            member=leaf["source_member"]
            record={"kind":kind,"member":member,
                    "original_member_sha256":digest(payload),"bytes":len(payload)}
            kind_counter[kind]+=1
            if kind in ("bflyt","bflan"):
                try:
                    doc=parse_ui2d(payload)
                    doc["origin_source"]=name
                    doc["origin_member"]=member
                    doc["origin_member_sha256"]=digest(payload)
                    target=out/(f"{index:03d}-{pathlib.Path(member).stem}.{kind}.json")
                    target.write_text(json.dumps(doc,sort_keys=True,ensure_ascii=False,indent=2)+"\n",encoding="utf-8")
                    record["status"]="structured_json"
                    record["output"]=target.relative_to(root).as_posix()
                    record["output_sha256"]=digest(target.read_bytes())
                    record["parsed_sections"]=len(doc["sections"])
                    record["panes"]=len(doc.get("panes",[]))
                    record["animation_blocks"]=len(doc.get("animations",[]))
                except Exception as exc:
                    record["status"]="parser_failed"
                    record["error"]=type(exc).__name__+": "+str(exc)
                    fail.append({"source":name,**record})
            else:
                # Other leaves (including proprietary BFCpx) are deliberately
                # kept in manifest, not declared decoded by a UI2D parser.
                record["status"]="unsupported_leaf"
                record["prefix32"]=payload[:32].hex()
            records.append(record)
            index+=1
        status="structured_ui2d_partial_other_leaves" if any(r["status"]=="unsupported_leaf" for r in records) else "structured_ui2d"
        if any(r["status"]=="parser_failed" for r in records):status="parser_failed"
        entry={"source":name,"source_sha256":expected,"bytes":len(original),
               "ui2d_state":status,"leaves":records}
        (out/"_ui2d_source_manifest.json").write_text(json.dumps(entry,indent=2,ensure_ascii=False)+"\n","utf-8")
        rows.append(entry)
        print("UI2D",name,"FLYT",sum(r["kind"]=="bflyt" for r in records),"FLAN",sum(r["kind"]=="bflan" for r in records),"status",status,flush=True)
    a.report.mkdir(parents=True,exist_ok=True)
    summary={"source_count":len(rows),"leaf_counts":dict(kind_counter),
             "FLYT_structured":sum(r["status"]=="structured_json" and r["kind"]=="bflyt" for x in rows for r in x["leaves"]),
             "FLAN_structured":sum(r["status"]=="structured_json" and r["kind"]=="bflan" for x in rows for r in x["leaves"]),
             "failed_leaf_count":len(fail),
             "incomplete_other_type_count":sum(r["status"]=="unsupported_leaf" for x in rows for r in x["leaves"]),
             "boundaries":"UI2D v9 hierarchy and supported animation data; proprietary BFCpx not decoded; no UI preview rendering claimed.",
             "source_records":rows}
    (a.report/"summary.json").write_text(json.dumps(summary,ensure_ascii=False,indent=2)+"\n",encoding="utf-8")
    (a.report/"parser_errors.json").write_text(json.dumps(fail,ensure_ascii=False,indent=2)+"\n",encoding="utf-8")
    print("SUMMARY",json.dumps({k:v for k,v in summary.items() if k!="source_records"},ensure_ascii=False),flush=True)
    if a.strict and (fail or summary["FLYT_structured"]!=41 or summary["FLAN_structured"]!=21):
        return 1
    return 0
if __name__=="__main__":sys.exit(main())
