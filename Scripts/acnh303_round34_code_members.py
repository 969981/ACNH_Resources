#!/usr/bin/env python3
"""R34 second pass: real BNSH NVIDIA-magic shader pool slices and candidate stage arrays.

Parse independent CodePool chunks using 0x12345678 byte evidence and a
source-backed program list. No NVIDIA Maxwell ISA disassembly is claimed.
"""
from __future__ import annotations
import argparse,hashlib,json
from collections import Counter
from pathlib import Path
from acnh303_round30_shader_pool import analyze
from acnh303_round29_bnsh_links import Bin

def digest(d):return hashlib.sha256(d).hexdigest()
def process(data,name):
    b=Bin(data);r=analyze(data,name);pools=[];stages=[]
    for pool in r["pool_candidates"]:
        if pool["status"]!="bounded_native_memory_pool":continue
        start=pool["memory_start"];end=pool["memory_end"]
        markers=[start+o for o in pool["possible_nv_binary_magic_offsets"]]
        # Maximum marker list R34 first parser intentionally caps to 20.
        # Expand entire real pool but impose a bounded size to avoid scans of
        # arbitrary input or accidental huge allocations.
        if end-start>32*1024*1024:raise ValueError("unreasonably large BNSH pool")
        payload=b.get(start,end-start)
        markers=[start+i for i in range(0,len(payload)-3,4)
                  if payload[i:i+4]==b"\x78\x56\x34\x12"]
        segments=[]
        for j,at in enumerate(markers):
            nextpos=markers[j+1] if j+1<len(markers) else end
            if not b.ok(at,nextpos-at):raise ValueError("NV pool member bounds invalid")
            raw=b.get(at,nextpos-at)
            segments.append({"pool_member":j,"file_offset":at,
              "pool_relative_offset":at-start,"bounded_bytes_to_next_magic":len(raw),
              "sha256":digest(raw),"first80_hex":raw[:80].hex(),
              "last16_hex":raw[-16:].hex(),
              "boundary_status":"magic_delimited_not_confirmed_gpu_code_length"})
        pools.append({"raw_pointer":pool["raw_pointer"],
                      "pool_start":start,"pool_end":end,
                      "memory_bytes":end-start,"magic_12345678_segment_count":len(markers),
                      "prefix_before_first_magic_bytes":markers[0]-start if markers else end-start,
                      "segments":segments})
    # Read actual source-array code layout at candidate shader stage pointers,
    # not fabricated vertex/fragment instruction interpretations.
    for program in r["programs"]:
        p=program["program_file_offset"]
        record={"program":p,"stage_records":[]}
        for src in program["shader_info_raw_field_candidates"]:
            if src["stage"] not in ("vertex","fragment"):continue
            pos=src["raw_value"]
            o={"stage":src["stage"],"shader_info_field_offset":src["program_field_offset"],
               "stage_record_pointer":pos,"status":"unresolved"}
            if b.ok(pos,0x20) and pos:
                count=b.u16(pos)
                ptr_size_array=b.u64(pos+8);ptr_code_array=b.u64(pos+16)
                o.update({"status":"bounded_stage_array_header",
                    "source_array_count_u16":count,
                    "size_array_pointer":ptr_size_array,
                    "code_pointer_array_pointer":ptr_code_array,
                    "stage_header_raw32":b.get(pos,0x20).hex(),
                    "code_byte_size_u32_at_0x18":b.u32(pos+0x18),
                    "remaining_u32_at_0x1c":b.u32(pos+0x1c)})
                # The native binary-code form has count=0: in these real
                # samples, +0x10 is a direct pointer into the binary pool,
                # +0x18 is a byte length, and +0x1c remains opaque metadata.
                # Do not treat direct-code format as an empty source array.
                direct_size=b.u32(pos+0x18)
                if count==0 and direct_size>0 and b.ok(ptr_code_array,direct_size):
                    matching=[(pool,item) for pool in pools for item in pool["segments"]
                        if item["file_offset"]==ptr_code_array
                        and pool["pool_start"]<=ptr_code_array
                        and ptr_code_array+direct_size<=pool["pool_end"]]
                    if matching and b.get(ptr_code_array,4)==b"\x78\x56\x34\x12":
                        pool,item=matching[0]
                        o["status"]="verified_native_binary_stage_link"
                        o["direct_code_sha256"]=digest(b.get(ptr_code_array,direct_size))
                        o["direct_code_pointer"]=ptr_code_array
                        o["direct_code_bytes"]=direct_size
                        o["nv_segment_index"]=item["pool_member"]
                        o["next_magic_gap_bytes"]=item["bounded_bytes_to_next_magic"]
                        o["length_matches_next_nv_magic_boundary"]=(direct_size==item["bounded_bytes_to_next_magic"])
                        o["first32_code_hex"]=b.get(ptr_code_array,min(32,direct_size)).hex()
                    else:o["status"]="unresolved_native_binary_stage_link"
                if 0<count<=128 and b.ok(ptr_size_array,count*4) and b.ok(ptr_code_array,count*8):
                    sizes=[b.u32(ptr_size_array+4*i) for i in range(count)]
                    ptrs=[b.u64(ptr_code_array+8*i) for i in range(count)]
                    o["size_elements"]=sizes
                    o["code_pointers"]=ptrs
                    o["array_targets"]=[]
                    for i,(length,ptr) in enumerate(zip(sizes,ptrs)):
                        t={"array_index":i,"pointer":ptr,"code_byte_size":length,"status":"unresolved"}
                        if length and b.ok(ptr,length):
                            t["status"]="bounded_stage_code_bytes"
                            t["sha256"]=digest(b.get(ptr,length))
                            t["inside_binary_pool"]=any(
                                x["pool_start"]<=ptr and ptr+length<=x["pool_end"] for x in pools)
                            t["head16_hex"]=b.get(ptr,min(length,16)).hex()
                        o["array_targets"].append(t)
            record["stage_records"].append(o)
        stages.append(record)
    return {"source_member":name,"source_sha256":r["sha256"],
      "program_count":len(r["programs"]),"variation_count":r["variation_count"],
      "native_pools":pools,"stage_code_array_candidates":stages}

def main():
    p=argparse.ArgumentParser()
    p.add_argument("--roots",type=Path,nargs="+",required=True)
    p.add_argument("--out",type=Path,required=True)
    a=p.parse_args()
    files=[(f,str(f.relative_to(root))) for root in a.roots for f in sorted(root.rglob("*.bnsh")) if f.is_file()]
    if len(files)!=106:raise ValueError("expected 106 verified original BNSH members")
    output=[];stats=Counter()
    for file,name in files:
        row=process(file.read_bytes(),name);output.append(row)
        stats["nv_pool_segments"]+=sum(len(pool["segments"]) for pool in row["native_pools"])
        stats["programs"]+=row["program_count"]
        for program in row["stage_code_array_candidates"]:
            for st in program["stage_records"]:
                stats["stage:"+st["stage"]+":"+st["status"]]+=1
                if "array_targets" in st:
                    for t in st["array_targets"]:stats["array_target:"+t["status"]]+=1
    result={"schema":"acnh303-r34-nv-shader-pool-magic-stage-array-v1",
        "verified_source_members":len(output),"unique_sha":len(set(x["source_sha256"] for x in output)),
        "stats":dict(stats),"source_records":output,
        "caveat":"Magic-delimited GPU binary candidate chunks. Only exact stage arrays and code bytes, if size/pointer validated, count as linked. No actual GPU ISA or runtime slot reconstruction."}
    a.out.parent.mkdir(parents=True,exist_ok=True)
    a.out.write_text(json.dumps(result,indent=2,sort_keys=True,ensure_ascii=False)+"\n",encoding="utf8")
    print("R34_GPU_POOL_STAGE",json.dumps(result["stats"],ensure_ascii=False))
if __name__=="__main__":main()
