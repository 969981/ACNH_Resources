#!/usr/bin/env python3
"""R32 source-verifiable BNSH Shader Binary Pool / Program / VS-FS code crossrefs.

Only uses real BNSH bytes and the independently SHA-proven R29 graph reader.
Unsigned pointers/lengths must be within original file; unresolved relationships
are kept explicitly rather than synthesized as shader machine code.
"""
from __future__ import annotations
import argparse, hashlib, json
from collections import Counter,defaultdict
from pathlib import Path
from acnh303_round29_bnsh_links import Bin, audit

def hx(value):return f"0x{value:x}"
def valid_region(b,start,n):
    return isinstance(start,int) and start>0 and n>0 and b.ok(start,n)
def parse_pool(b,rawptr):
    if not b.ok(rawptr,0x20) or rawptr==0:return {"status":"not_in_file","raw_pointer":rawptr}
    prop=b.u32(rawptr);n=b.u32(rawptr+4);mem=b.u64(rawptr+8)
    result={"status":"header_only","raw_pointer":rawptr,
       "memory_pool_property_u32":prop,"declared_memory_size":n,
       "memory_pointer":mem,"memory_start":mem,"memory_end":mem+n if n else mem}
    if valid_region(b,mem,n):
        payload=b.get(mem,n)
        result["status"]="bounded_native_memory_pool"
        result["raw_pool_sha256"]=hashlib.sha256(payload).hexdigest()
        result["leading_bytes_hex"]=payload[:64].hex()
        result["possible_nv_binary_magic_offsets"]=[
            i for i in range(0,max(0,len(payload)-3),4)
            if payload[i:i+4]==b"\x78\x56\x34\x12"][:20]
    else:
        result["status"]="declared_memory_out_of_file"
    return result

def program_details(b,p,pool,typed):
    at=p["file_offset"];size=p["size_field_at_0x60"];object_ptr=p["object_pointer"]
    pool_start=pool.get("memory_start");pool_end=pool.get("memory_end")
    inside_pool=(pool["status"]=="bounded_native_memory_pool" and
        isinstance(pool_start,int) and pool_start<=object_ptr and
        object_ptr+size<=pool_end and size>0)
    status=("object_inside_binary_pool" if inside_pool else
      "object_bounded_outside_declared_pool" if valid_region(b,object_ptr,size) else
      "object_unresolved")
    out={"program_file_offset":at,"parent_matches_variation":p["parent_matches_variation"],
        "reflection_in_bounds":p["reflection_in_bounds"],
        "declared_object_bytes":size,"object_pointer":object_ptr,
        "object_status":status,"program_code_type_byte":p["code_type_byte"]}
    if valid_region(b,object_ptr,size):
        obj=b.get(object_ptr,size)
        out["object_sha256"]=hashlib.sha256(obj).hexdigest()
        out["object_first32_hex"]=obj[:32].hex()
        out["object_matches_nv_magic_first4"]=obj[:4]==b"\x78\x56\x34\x12"
    # ShaderInfoData is the first 0x60 bytes of the program, before +0x60
    # object size. Preserve potentially version-specific shader fields as raw
    # *candidate* pointers: only stage identity and range are established here.
    candidates=[
      ("vertex",0x08,4),("hull",0x14,8),("domain",0x1c,8),
      ("geometry",0x24,4),("fragment",0x28,8),("compute",0x30,8)]
    stage=[]
    for label,rel,w in candidates:
        ptr=b.u32(at+rel) if w==4 else b.u64(at+rel)
        rec={"stage":label,"program_field_offset":hx(rel),"raw_value":ptr,
             "width_bytes":w,"status":"zero" if not ptr else "raw_unresolved"}
        if ptr and b.ok(ptr,0x20):
            rec["status"]="file_bounded_candidate"
            rec["first16_hex"]=b.get(ptr,16).hex()
            if pool["status"]=="bounded_native_memory_pool" and pool_start<=ptr<pool_end:
                rec["status"]="inside_binary_pool_candidate"
        stage.append(rec)
    out["shader_info_raw_field_candidates"]=stage
    out["reflection_names"]=typed
    return out

def analyze(blob,source):
    b=Bin(blob);base=audit(blob,source)
    pools=[parse_pool(b,r["binary_pool_pointer_raw"]) for r in base["grsc_blocks"]]
    reflects={r["pointer"]:r for r in base["reflection_records"]}
    programs=[]
    for p in base["distinct_shader_programs"]:
        typed={}
        r=reflects.get(p["reflection_pointer"])
        if r:
            for stage,st in r["stages"].items():
                by_type={kind:st.get(kind+"_name_candidates",[])
                   for kind in ("input","output","sampler","constant_buffer","unordered_access")}
                typed[stage]={kind:names for kind,names in by_type.items() if names}
        # This games' UI files observed only one grsc block.
        pool=pools[0] if len(pools)==1 else {"status":"ambiguous_multiple_pools"}
        programs.append(program_details(b,p,pool,typed))
    return {"source_member":source,"sha256":hashlib.sha256(blob).hexdigest(),
       "file_size":len(blob),"grsc_blocks":base["grsc_blocks"],
       "pool_candidates":pools,"variation_count":len(base["variation_records"]),
       "program_count":len(programs),"programs":programs,
       "native_header_verified_first_block":base["file_header"]["first_block"],
       "relocation_sections":base["relocation"]["section_count"],
       "relocation_entries":len(base["relocation"]["entries"]),
       "limits":"No GPU instruction decoding; stage pointer word semantics are candidate-only unless linked to pool and verified data."}

def main():
    q=argparse.ArgumentParser()
    q.add_argument("--roots",type=Path,nargs="+",required=True)
    q.add_argument("--out",type=Path,required=True)
    a=q.parse_args()
    sources=[]
    for root in a.roots:
        if not root.is_dir():raise ValueError("missing original source dir "+str(root))
        for p in sorted(root.rglob("*.bnsh")):
            if p.is_file():sources.append((p,p.relative_to(root).as_posix()))
    if len(sources)!=53:raise ValueError(f"expected 53 R27-R31 native BNSH, got {len(sources)}")
    results=[];tally=Counter();code_groups=defaultdict(list)
    for p,name in sources:
        r=analyze(p.read_bytes(),name);results.append(r)
        for pool in r["pool_candidates"]:tally["pool_"+pool["status"]]+=1
        for prog in r["programs"]:
            tally["program_"+prog["object_status"]]+=1
            if "object_sha256" in prog:
                code_groups[prog["object_sha256"]].append({"source_sha256":r["sha256"],"offset":prog["program_file_offset"]})
            for candidate in prog["shader_info_raw_field_candidates"]:
                tally["stage_"+candidate["stage"]+"_"+candidate["status"]]+=1
    o={"schema":"acnh303-r32-bnsh-real-pool-program-crosscheck-v1",
      "verified_original_members":len(results),
      "unique_source_sha256":len(set(r["sha256"] for r in results)),
      "variation_total":sum(r["variation_count"] for r in results),
      "program_total":sum(r["program_count"] for r in results),
      "status_counts":dict(sorted(tally.items())),
      "distinct_bounded_program_object_sha256":len(code_groups),
      "program_object_duplicate_groups":[{"sha256":k,"uses":v[:30],"count":len(v)}
          for k,v in sorted(code_groups.items()) if len(v)>1],
      "source_records":results,
      "limits":"Verifiable source-based object bounds and SHA; not shader instruction semantics or runtime GPU slots."}
    a.out.parent.mkdir(parents=True,exist_ok=True)
    a.out.write_text(json.dumps(o,indent=2,sort_keys=True,ensure_ascii=False)+"\n",encoding="utf8")
    print("R32_NATIVE_POOL",json.dumps({k:v for k,v in o.items() if k not in ("source_records","program_object_duplicate_groups")},ensure_ascii=False))
if __name__=="__main__":main()
