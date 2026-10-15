#!/usr/bin/env python3
"""Reduce large real R29 BNSH graph to inspectable source-backed evidence."""
from __future__ import annotations
import argparse,json
from collections import Counter,defaultdict
from pathlib import Path

def summarized(report):
    d=json.loads(report.read_text("utf8"))
    if d["parsed_members"]!=28 or d["distinct_sha"]!=20:
        raise ValueError("unexpected R27+R28 BNSH provenance")
    count=Counter();cases=[];name_links=defaultdict(set);all_names=Counter()
    for r in d["records"]:
        grsc=r["grsc_blocks"]
        programs=r["distinct_shader_programs"]
        count["members"]+=1
        count["variations"]+=len(r["variation_records"])
        count["programs"]+=len(programs)
        count["program_reflection_in_bounds"]+=sum(x["reflection_in_bounds"] for x in programs)
        count["program_parent_matches_variation"]+=sum(x["parent_matches_variation"] for x in programs)
        count["rlt_sections"]+=r["relocation"]["section_count"]
        count["rlt_entries"]+=len(r["relocation"]["entries"])
        count["rlt_pointer_fields_bounded"]+=r["relocation"]["bounded_pointer_field_count"]
        count["rlt_pointer_targets_bounded"]+=r["relocation"]["data_pointer_targets_in_bounds"]
        count["resources"]+=len(r["resource_dictionaries"])
        rc=Counter()
        for reflect in r["reflection_records"]:
            for stage,v in reflect["stages"].items():
                rc[stage]+=1
                for field in ("input","output","sampler","constant_buffer","unordered_access"):
                    for name in v.get(field+"_name_candidates",[]):
                        all_names[field+"|"+name]+=1
                        name_links[field+"|"+name].add(r["sha256"])
        for b in r["linked_blocks"]:count["block:"+b["magic"]]+=1
        cases.append({"source_member":r["member"],"sha256":r["sha256"],
            "size":r["file_size"],"linked_blocks":r["linked_blocks"],
            "grsc":grsc,"variations":len(r["variation_records"]),
            "programs":len(programs),"parent_links":sum(x["parent_matches_variation"] for x in programs),
            "reflection_links":sum(x["reflection_in_bounds"] for x in programs),
            "resource_dictionary_count":len(r["resource_dictionaries"]),
            "stage_counts":dict(rc),
            "dictionary_names":[{"kind":x["category"],"names":x["names"][:30]} for x in r["resource_dictionaries"][:25]],
            "rlt_sections":r["relocation"]["sections"],
            "rlt_entry_count":len(r["relocation"]["entries"]),
            "rlt_pointer_fields_bounded":r["relocation"]["bounded_pointer_field_count"],
            "warnings":r["warnings"][:12]})
    return {"schema":"acnh303-r29-bnsh-validated-native-summary-v1",
        "source_files":d["parsed_members"],"distinct_sha":d["distinct_sha"],
        "totals":dict(sorted(count.items())),
        "resource_names":[{"type_and_name":name,"occurrences":count,
                            "source_file_distinct_sha":len(name_links[name])}
            for name,count in all_names.most_common(160)],
        "per_original_member":cases,
        "warnings":"Bounds and typed dictionary pointers only; source-program linkage does not prove runtime GPU resource bindings, shader instruction disassembly or equivalence."}

def main():
    p=argparse.ArgumentParser()
    p.add_argument("--graph",type=Path,required=True)
    p.add_argument("--out",type=Path,required=True)
    args=p.parse_args();o=summarized(args.graph)
    args.out.parent.mkdir(parents=True,exist_ok=True)
    args.out.write_text(json.dumps(o,indent=2,ensure_ascii=False,sort_keys=True)+"\n",encoding="utf8")
    print("R29_NATIVE_SUMMARY",json.dumps(o["totals"],ensure_ascii=False))
    print("R29_REAL_NAMES",json.dumps(o["resource_names"][:12],ensure_ascii=False))
if __name__=="__main__":main()
