#!/usr/bin/env python3
"""R32: exactly compare bounded Shader Stage declared lengths to NV magic boundaries.

Important: gap bytes are read from original BNSH release members, never derived
from guessed padding. Identity is source path+SHA and program offset; duplicate
file contents remain independently traceable. This does not decode GPU ISA.
"""
from __future__ import annotations
import argparse,hashlib,json
from collections import Counter,defaultdict
from pathlib import Path

def analyze(code_path, roots):
    source=json.loads(code_path.read_text(encoding="utf8"))
    if source["verified_source_members"]!=53:raise ValueError("R32 requires all 53 sources")
    mapped={}
    for root in roots:
        for f in root.rglob("*.bnsh"):
            if not f.is_file():continue
            key=f.relative_to(root).as_posix()
            if key in mapped:raise ValueError("ambiguous same source name")
            mapped[key]=f
    if len(mapped)!=53:raise ValueError("53 original BNSH input files required")
    stats=Counter();diff=[];by_hash=defaultdict(list);allrows=[]
    for source_record in source["source_records"]:
        name=source_record["source_member"]
        file=mapped.get(name)
        if file is None:raise ValueError("source not found: "+name)
        raw=file.read_bytes()
        digest=hashlib.sha256(raw).hexdigest()
        if digest!=source_record["source_sha256"]:
            raise ValueError("source file changed: "+name)
        pools=source_record["native_pools"]
        if len(pools)!=1:raise ValueError("expected one native pool in "+name)
        pool=pools[0]
        members={m["file_offset"]:m for m in pool["segments"]}
        for program in source_record["stage_code_array_candidates"]:
            for stage in program["stage_records"]:
                if stage["status"]!="verified_native_binary_stage_link":
                    raise ValueError("stage code link unresolved: "+name)
                loc=stage["direct_code_pointer"]
                size=stage["direct_code_bytes"]
                adjacent=stage["next_magic_gap_bytes"]
                if not (pool["pool_start"]<=loc and size>0 and loc+size<=pool["pool_end"]):
                    raise ValueError("code not in pool")
                if hashlib.sha256(raw[loc:loc+size]).hexdigest()!=stage["direct_code_sha256"]:
                    raise ValueError("original code digest mismatch")
                m=members.get(loc)
                if m is None or m["bounded_bytes_to_next_magic"]!=adjacent:
                    raise ValueError("binary magic adjacency mismatch")
                gap=adjacent-size
                rec={"source_member":name,"source_sha256":digest,
                    "program_file_offset":program["program"],
                    "stage":stage["stage"],
                    "native_stage_header":stage["stage_record_pointer"],
                    "code_pointer":loc,"code_size":size,
                    "code_sha256":stage["direct_code_sha256"],
                    "next_magic_distance":adjacent,
                    "signed_difference":gap}
                stats["stage_code_links"]+=1
                if gap==0:
                    rec["classification"]="exact_declared_size_to_next_magic"
                    stats["exact"]+=1
                elif gap>0:
                    if loc+adjacent>pool["pool_end"]:raise ValueError("gap beyond pool")
                    extra=raw[loc+size:loc+adjacent]
                    rec["gap_length"]=len(extra)
                    rec["gap_sha256"]=hashlib.sha256(extra).hexdigest()
                    rec["gap_first32_hex"]=extra[:32].hex()
                    rec["gap_last32_hex"]=extra[-32:].hex()
                    rec["gap_all_zero"]=all(v==0 for v in extra)
                    rec["gap_all_ff"]=all(v==0xff for v in extra)
                    rec["classification"]=("all_zero_gap_candidate_padding" if rec["gap_all_zero"]
                      else "nonzero_gap_needs_structural_explanation")
                    stats[rec["classification"]]+=1
                    stats["gap_bytes_total"]+=len(extra)
                    diff.append(rec)
                else:
                    # A negative gap means declared shader payload includes at least
                    # the next 0x12345678 marker: do not label it as verified member
                    # boundary, even though data length and SHA were valid.
                    rec["classification"]="declared_size_crosses_next_nv_magic"
                    stats["crosses_next_magic"]+=1
                    diff.append(rec)
                by_hash[(digest,stage["stage"],loc,size)].append(rec)
                allrows.append(rec)
    stats["distinct_source_sha256"]=len({r["source_sha256"] for r in allrows})
    stats["distinct_stage_code_sha256"]=len({r["code_sha256"] for r in allrows})
    stats["mismatched_stage_links"]=len(diff)
    stats["distinct_mismatched_code_identity"]=len({
        (r["source_sha256"],r["code_pointer"],r["code_size"],r["stage"]) for r in diff})
    stats["unique_mismatched_code_sha256"]=len({r["code_sha256"] for r in diff})
    stats["stage_programs"]=len(allrows)//2
    stats["file_count"]=len(mapped)
    return {"schema":"acnh303-r32-shader-native-code-length-gap-v1",
       "source_files":len(mapped),"source_sha256_verified":True,
       "statistics":dict(sorted(stats.items())),
       "gap_sizes":dict(sorted(Counter(str(x["signed_difference"]) for x in diff).items(),key=lambda x:int(x[0]))),
       "discrepancies":diff,
       "per_stage_aggregates":dict(sorted(Counter(x["stage"]+":"+x["classification"] for x in allrows).items())),
       "limits":"An all-zero gap indicates zero bytes between declared code and next NV magic, not proven compiler/alignment semantics. Code pointers verified, GPU execution not observed."}

def main():
    p=argparse.ArgumentParser()
    p.add_argument("--codes",required=True,type=Path)
    p.add_argument("--roots",required=True,nargs="+",type=Path)
    p.add_argument("--out",required=True,type=Path)
    args=p.parse_args()
    result=analyze(args.codes,args.roots)
    args.out.parent.mkdir(parents=True,exist_ok=True)
    args.out.write_text(json.dumps(result,ensure_ascii=False,indent=2,sort_keys=True)+"\n",encoding="utf8")
    print("R32_SOURCE_BACKED_CODE_GAPS",json.dumps(result["statistics"],ensure_ascii=False))
    print("R32_GAP_SIZES",result["gap_sizes"])
if __name__=="__main__":main()
