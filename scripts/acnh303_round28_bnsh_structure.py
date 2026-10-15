#!/usr/bin/env python3
"""R28: byte-exact BNSH native structure evidence for R27 + R28 extracted members.

This parser intentionally does not invent BNSH block offsets or shader program
semantics. File header bytes, conservative possible offsets, real ASCII tags,
literal references and cross-source SHA dedup are audited and bounded.
"""
from __future__ import annotations
import argparse,hashlib,json,re,struct
from collections import Counter,defaultdict
from pathlib import Path

def digest(raw):return hashlib.sha256(raw).hexdigest()

def inspect(raw,tag):
    if raw[:4]!=b"BNSH" or len(raw)<0x40:
        raise ValueError("not a complete BNSH header: "+tag)
    # Header observed in game samples starts BNSH + reserved4 + formatVersion4 + BOM2.
    bom=raw[0x0c:0x0e]
    if bom not in (b"\xff\xfe",b"\xfe\xff"):
        raise ValueError("unexpected BNSH BOM: "+tag)
    order="<" if bom==b"\xff\xfe" else ">"
    size=len(raw)
    head=raw[:min(size,0x80)]
    words=[{"file_offset":hex(off),"raw_bytes":raw[off:off+4].hex(),
            "numeric_u32_"+("little" if order=="<" else "big"):struct.unpack_from(order+"I",raw,off)[0]}
           for off in range(0,min(size,0x60)-3,4)]
    # These are raw numeric candidates, NOT authoritative pointers/sections.
    candidates=[]
    for off in range(0x10,min(size-7,0x60),8):
        val=struct.unpack_from(order+"Q",raw,off)[0]
        if 0x40<=val<size:
            candidates.append({"header_offset":hex(off),"candidate_file_offset":hex(val),
              "candidate_target_first8":raw[val:val+8].hex(),"status":"in_bounds_word_not_proven_pointer"})
    # A sequence of four capital ASCII bytes is not a structural block unless
    # the expected pointer/linked chain is actually proven. Keep candidates only.
    seen=set();tags=[]
    scan=raw[:min(size,512*1024)]
    for m in re.finditer(rb'[A-Z][A-Z0-9_]{3}',scan):
        token=m.group().decode("ascii")
        if token not in ("BNSH","BSHD","BNFM","BNSI","BRTI","STRG","RELT","SHPK","SHDR"):
            continue
        if (m.start(),token) not in seen and len(tags)<80:
            tags.append({"offset":hex(m.start()),"token":token,"evidence":"raw_magic_candidate_only"})
            seen.add((m.start(),token))
    literal_hits=[]
    names=(b"uTexture",b"uConstantBuffer",b"VertexShader",b"FragmentShader",
       b"Sampler",b"Texture",b"Shader")
    for needle in names:
        at=scan.find(needle)
        if at>=0:
            end=scan.find(b"\x00",at,min(len(scan),at+120))
            if end<0:end=min(len(scan),at+80)
            excerpt=scan[at:end]
            literal_hits.append({"byte_offset":hex(at),"needle":needle.decode(),
                "string_candidate":excerpt.decode("ascii","replace")[:120]})
    return {"member":tag,"sha256":digest(raw),"length":size,
        "magic":"BNSH","format_version_raw":raw[8:12].hex(),
        "bom_raw":bom.hex(),"alignment_exponent_byte":raw[0x0e],
        "header_first64_hex":raw[:64].hex(),
        "header_first128_sha256":digest(head),
        "raw_header_words":words,
        "in_bounds_header_u64_candidates":candidates,
        "literal_search_window_bytes":len(scan),
        "possible_magic_tokens":tags,"found_literal_candidates":literal_hits,
        "verified_level":"RAW_MEMBER_BNSH_WITH_BOUNDED_STATIC_HEADER_OBSERVATIONS"}

def files(path):
    if not path.is_dir():raise ValueError("missing native member directory "+str(path))
    result=[]
    for p in sorted(path.rglob("*")):
        if not p.is_file() or not p.name.lower().endswith(".bnsh"):continue
        result.append((p,p.read_bytes()))
    return result

def evaluate(r27_root,r28_root):
    cases=[]
    counts=Counter()
    for label,root in (("r27_reextracted_original_reference",r27_root),
                       ("r28_new_extracted_members",r28_root)):
        selected=files(root)
        if label.startswith("r27") and len(selected)!=4:
            raise ValueError(f"Expected exactly 4 R27 BNSH binary files, got {len(selected)}")
        for path,raw in selected:
            # Artifact name is relative to its own directory, never absolute host path.
            row=inspect(raw,path.relative_to(root).as_posix())
            row["generation"]=label
            cases.append(row);counts[label]+=1
    unique=defaultdict(list)
    for entry in cases:unique[entry["sha256"]].append(entry["generation"]+":"+entry["member"])
    dup=[{"sha256":key,"members":members}
         for key,members in sorted(unique.items()) if len(members)>1]
    return {"schema":"acnh303-r28-source-backed-bnsh-header-comparison-v1",
        "r27_original_bnsh_members":counts["r27_reextracted_original_reference"],
        "r28_new_bnsh_members":counts["r28_new_extracted_members"],
        "total_members":len(cases),"distinct_member_sha256":len(unique),
        "duplicate_content_groups":dup,"members":cases,
        "meaning":"Real BNSH raw headers, candidate pointer words, bytes and token evidence. Runtime shader decoding and binding not demonstrated.",
        "verification_state":"NATIVE_BNSH_BYTES_VERIFIED_SHADER_INTERNAL_SEMANTICS_UNPROVEN"}

def main():
    p=argparse.ArgumentParser()
    p.add_argument("--r27",type=Path,required=True)
    p.add_argument("--r28",type=Path,required=True)
    p.add_argument("--out",type=Path,required=True)
    a=p.parse_args()
    result=evaluate(a.r27,a.r28)
    a.out.parent.mkdir(parents=True,exist_ok=True)
    a.out.write_text(json.dumps(result,ensure_ascii=False,indent=2,sort_keys=True)+"\n",encoding="utf8")
    print("R28 NATIVE BNSH ANALYZED",result["r27_original_bnsh_members"],
          result["r28_new_bnsh_members"],result["distinct_member_sha256"])
if __name__=="__main__":main()
