#!/usr/bin/env python3
"""R33 join: original Program + Reflection names + proven binary shader bytes.

Every join uses unchanged (source_file SHA, program_file_offset) identity from
two independently re-parsed original BNSH reports, never a guessed slot index.
"""
from __future__ import annotations
import argparse,hashlib,json
from collections import Counter,defaultdict
from pathlib import Path

def build(pool_report,code_report):
    a=json.loads(pool_report.read_text("utf8"))
    b=json.loads(code_report.read_text("utf8"))
    if (a["verified_original_members"],b["verified_source_members"])!=(64,64):
        raise ValueError("native original sample count mismatch")
    refs={x["sha256"]+":"+x["source_member"]:x for x in a["source_records"]}
    if len(refs)!=64:raise ValueError("pool report duplicate sources")
    rows=[];stat=Counter();grouped=defaultdict(set);names=defaultdict(set)
    for x in b["source_records"]:
        key=x["source_sha256"]+":"+x["source_member"]
        arow=refs.get(key)
        if not arow:raise ValueError("code source absent from reflection source")
        by_prog={v["program_file_offset"]:v for v in arow["programs"]}
        if len(by_prog)!=len(x["stage_code_array_candidates"]):
            raise ValueError("program cardinality mismatch")
        for prog in x["stage_code_array_candidates"]:
            at=prog["program"];metadata=by_prog.get(at)
            if not metadata:raise ValueError("program address does not match source metadata")
            if not (metadata["parent_matches_variation"] and metadata["reflection_in_bounds"]):
                raise ValueError("program/parent/reflection bounds unavailable")
            links={}
            for st in prog["stage_records"]:
                stage=st["stage"];status=st["status"]
                stat[stage+":"+status]+=1
                o={"status":status,"native_stage_header_offset":st["stage_record_pointer"],
                    "native_code_pointer":st.get("direct_code_pointer"),
                    "code_size_bytes":st.get("direct_code_bytes"),
                    "code_sha256":st.get("direct_code_sha256"),
                    "segment_next_magic_bytes":st.get("next_magic_gap_bytes"),
                    "size_matches_magic_boundary":st.get("length_matches_next_nv_magic_boundary"),
                    "reflection_resource_names":metadata.get("reflection_names",{}).get(stage,{})}
                if status=="verified_native_binary_stage_link":
                    if not (isinstance(o["code_size_bytes"],int) and o["code_size_bytes"]>0 and len(o["code_sha256"])==64):
                        raise ValueError("code hash or byte length unavailable")
                    grouped[stage].add(o["code_sha256"])
                    for category,rs in o["reflection_resource_names"].items():
                        for name in rs:
                            names[(stage,category,name)].add(o["code_sha256"])
                    stat["stage_binary_links"]+=1
                    if o["size_matches_magic_boundary"]:stat["exact_next_magic_size_match"]+=1
                links[stage]=o
            rows.append({"source_member":x["source_member"],"source_sha256":x["source_sha256"],
                "program_file_offset":at,"stages":links})
    stat["source_members"]=64
    stat["program_rows"]=len(rows)
    if stat["program_rows"]<207 or stat["stage_binary_links"]!=2*stat["program_rows"]:
        raise ValueError("not every Program and both stages verified with real bytes")
    return {"schema":"acnh303-r33-program-to-reflection-to-shader-code-proof-v1",
        "statistics":dict(sorted(stat.items())),
        "unique_code_sha256_by_stage":{stage:len(hashes) for stage,hashes in grouped.items()},
        "reflection_names_to_distinct_code_sha":[
            {"stage":key[0],"resource_type":key[1],"resource_name":key[2],
                "distinct_binary_sha256":len(hashes)}
            for key,hashes in sorted(names.items())],
        "programs":rows,
        "limits":"Static original program/Reflection/code crossrefs. Does NOT establish actual runtime GPU binding slot, chosen material, or decoded ISA."}

def main():
    p=argparse.ArgumentParser()
    p.add_argument("--pools",type=Path,required=True)
    p.add_argument("--codes",type=Path,required=True)
    p.add_argument("--out",type=Path,required=True)
    a=p.parse_args()
    d=build(a.pools,a.codes)
    a.out.parent.mkdir(parents=True,exist_ok=True)
    a.out.write_text(json.dumps(d,indent=2,sort_keys=True,ensure_ascii=False)+"\n",encoding="utf8")
    print("R33_FINAL_STAGE_GRAPH",json.dumps(d["statistics"],ensure_ascii=False))
    print("R33_UNIQUE_CODES",d["unique_code_sha256_by_stage"])
    print("R33_RESOURCE_TO_BIN",json.dumps(d["reflection_names_to_distinct_code_sha"][:12],ensure_ascii=False))
if __name__=="__main__":main()
