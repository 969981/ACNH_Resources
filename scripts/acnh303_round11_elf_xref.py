#!/usr/bin/env python3
"""ACNH 3.0.3 ELF ARM64 exact-string -> code references; evidence, not semantic guesses.

Pure stdlib, read-only: validates ELF64/AArch64 load segments; resolves ADR,
ADRP+ADD and ADRP+LDR (only a *dereferenced* mapped GOT slot counts as indirect).
Nearby BL is a candidate callee, NOT proof the call receives the string.
"""
from __future__ import annotations
import argparse,collections,hashlib,json,struct
from pathlib import Path

MACHINE_AARCH64=183
MAX_ELF=256*1024*1024
MAGICS=["AMTA","BARS","BDLI","LBLI","EventFlow","EventFlowAction","EventFlowQuery",
        "EventFlowSystemActor","MainNpc","evfl","aal::","nn::audio"]
RUNTIME_STATUS="STATIC_STRING_CROSS_REFERENCE_ONLY_NOT_DISPATCH_OR_GAMEPLAY_PROOF"

def sx(x,bits):
    return x-(1<<bits) if x&(1<<(bits-1)) else x

def adrp_target(word,pc):
    if word & 0x9f000000 != 0x90000000:return None
    imm=((word>>5)&0x7ffff)<<2 | ((word>>29)&3)
    return (pc&~4095)+(sx(imm,21)<<12)

def adr_target(word,pc):
    if word & 0x9f000000 != 0x10000000:return None
    imm=((word>>5)&0x7ffff)<<2 | ((word>>29)&3)
    return pc+sx(imm,21)

def add_imm(word):
    # ADD (immediate) 64-bit, no flags, standard ADRP+ADD address formation.
    if word&0xff000000 != 0x91000000:return None
    sh=(word>>22)&3
    if sh>1:return None
    return {"rd":word&31,"rn":(word>>5)&31,
            "imm":((word>>10)&0xfff)<<(12 if sh==1 else 0)}

def ldr_uimm(word):
    # LDR Wt/Xt, [Xn,#imm12] unsigned address, not arbitrary STR/LDR variants.
    if (word & 0xffc00000) not in (0xb9400000,0xf9400000):return None
    return {"rt":word&31,"rn":(word>>5)&31,
            "imm":((word>>10)&0xfff)*(4 if (word>>30)&3==2 else 8)}

def bl_target(word,pc):
    if word&0xfc000000 != 0x94000000:return None
    return pc+sx(word&0x03ffffff,26)*4

def parse_elf(blob):
    if len(blob)>MAX_ELF or len(blob)<64 or blob[:4]!=b"\x7fELF" or blob[4]!=2 or blob[5]!=1:
        raise ValueError("requires bounded little-endian ELF64, not NSO, git-lfs pointer or PE")
    e=struct.unpack_from("<HHIQQQIHHHHHH",blob,16)
    if e[1]!=MACHINE_AARCH64:raise ValueError(f"expected AArch64 e_machine=183, got {e[1]}")
    phoff=e[4];phentsize=e[8];phnum=e[9]
    if phentsize<56 or phnum>4096 or phoff+phentsize*phnum>len(blob):
        raise ValueError("ELF program header table invalid")
    segments=[]
    for i in range(phnum):
        typ,flags,off,va,pa,filesz,memsz,align=struct.unpack_from("<IIQQQQQQ",blob,phoff+i*phentsize)
        if typ!=1 or not filesz:continue
        if off+filesz>len(blob) or memsz<filesz:raise ValueError("mapped segment exceeds file")
        segments.append({"index":i,"flags":flags,"file_offset":off,"vaddr":va,
                         "filesz":filesz,"memsz":memsz})
    if not segments or not any(x["flags"]&1 for x in segments):
        raise ValueError("ELF lacks mapped executable region")
    return segments

def get_bytes_va(blob,segments,va,count):
    for x in segments:
        if x["vaddr"]<=va and va+count<=x["vaddr"]+x["filesz"]:
            off=x["file_offset"]+va-x["vaddr"]
            return blob[off:off+count]
    return None

def nearest_prologue(blob,seg,site,max_back=256):
    # Heuristic only: STP X29,X30,[SP,#-imm]!, not an established ELF function start.
    off=seg["file_offset"]+site-seg["vaddr"]
    low=max(seg["file_offset"],off-max_back)
    for i in range(off-4,low-1,-4):
        w=struct.unpack_from("<I",blob,i)[0]
        if w&0xffc07fff==0xa9807bfd:  # STP X29,X30,[SP,#-imm]! (candidate)
            return seg["vaddr"]+(i-seg["file_offset"])
    return None

def call_context(blob,seg,site,back=32,forward=80):
    start=max(seg["vaddr"],site-back)
    stop=min(seg["vaddr"]+seg["filesz"],site+forward)
    result=[]
    for pc in range((start+3)//4*4,stop,4):
        raw=get_bytes_va(blob,[seg],pc,4)
        if raw is None:continue
        target=bl_target(int.from_bytes(raw,"little"),pc)
        if target is not None:result.append({"site_hex":hex(pc),"target_hex":hex(target),
                                            "relative_to_string_ref":pc-site,
                                            "meaning":"nearby BL only; argument flow not verified"})
    return result[:24]

def list_terms(events):
    needles=list(MAGICS)
    if events and events.is_file():
        doc=json.loads(events.read_text("utf-8"))
        if doc.get("schema")!="acnh303-r10-evfl-native-static-symbol-map-v1":
            raise ValueError("wrong EventFlow source provenance")
        for key,name in (("actor_action_calls","action"),("actor_query_calls","query")):
            needles.extend([r[name] for r in doc.get(key,[]) if r.get(name)])
        needles.extend([r.get("actor","") for r in doc.get("actor_action_calls",[])])
    return sorted({n for n in needles if 3<=len(n)<=200},key=lambda s:(-len(s),s))

def survey(blob,segments,terms,site_cap=64):
    # Search mapped, read-only or read/write regions, preserving exact VA and segment.
    hits={}
    for term in terms:
        raw=term.encode("utf-8")
        found=[]
        for seg in segments:
            portion=blob[seg["file_offset"]:seg["file_offset"]+seg["filesz"]]
            i=0
            while len(found)<site_cap:
                pos=portion.find(raw,i)
                if pos<0:break
                addr=seg["vaddr"]+pos
                found.append({"vaddr_hex":hex(addr),"vaddr":addr,
                              "segment_index":seg["index"],
                              "has_null_suffix":pos+len(raw)<len(portion) and portion[pos+len(raw)]==0,
                              "matched_length":len(raw)})
                i=pos+1
        hits[term]={"locations":found,"location_count_capped":len(found)>=site_cap}
    return hits

def locate_xrefs(blob,segments,hits,cap_per_term=30):
    # Page index is bounded by the number of *actually found* strings, not all code pages.
    pages=collections.defaultdict(list)
    for term,record in hits.items():
        for hit in record["locations"]:
            start=hit["vaddr"];end=start+hit["matched_length"]
            for page in range(start&~4095,(end+4095)&~4095,4096):
                pages[page].append((start,end,term))
    xrefs=collections.defaultdict(list)
    dedupe=set()
    total_adrp_candidates=0
    for seg in segments:
        if not seg["flags"]&1:continue
        start=seg["file_offset"];end=start+seg["filesz"]-4
        pcbase=seg["vaddr"]
        for off in range(start,end+1,4):
            word=struct.unpack_from("<I",blob,off)[0]
            pc=pcbase+off-start
            adr=adr_target(word,pc)
            if adr is not None:
                for a,b,t in pages.get(adr&~4095,()):
                    if a<=adr<b:
                        rec=(t,pc,adr,"ADR",None)
                        if rec not in dedupe:
                            dedupe.add(rec)
                            if len(xrefs[t])<cap_per_term:
                                xrefs[t].append({"ref_site_hex":hex(pc),"target_string_va_hex":hex(a),
                                                "formed_va_hex":hex(adr),"pattern":"ADR","confidence":"direct_code_address",
                                                "heuristic_function_start_hex":None,
                                                "nearby_bl":call_context(blob,seg,pc)})
            page=adrp_target(word,pc)
            if page is None or page not in pages:continue
            total_adrp_candidates+=1
            rd=word&31
            for step in range(1,7):
                target_off=off+4*step
                if target_off+4>start+seg["filesz"]:break
                follower=struct.unpack_from("<I",blob,target_off)[0]
                add=add_imm(follower)
                candidate=None;pattern=None
                if add and add["rn"]==rd:
                    candidate=page+add["imm"];pattern="ADRP_ADD"
                else:
                    ldr=ldr_uimm(follower)
                    if ldr and ldr["rn"]==rd:
                        slot=page+ldr["imm"]
                        dest=get_bytes_va(blob,segments,slot,8)
                        if dest is not None:
                            candidate=int.from_bytes(dest,"little")
                            pattern="ADRP_LDR_dereferenced"
                if candidate is None:continue
                for a,b,t in pages.get(candidate&~4095,()):
                    if not a<=candidate<b:continue
                    rec=(t,pc,candidate,pattern,step)
                    if rec in dedupe:continue
                    dedupe.add(rec)
                    if len(xrefs[t])>=cap_per_term:continue
                    xrefs[t].append({"ref_site_hex":hex(pc),
                                    "form_end_hex":hex(pc+4*step),
                                    "target_string_va_hex":hex(a),"formed_va_hex":hex(candidate),
                                    "pattern":pattern,"confidence":"direct_code_address" if pattern=="ADRP_ADD" else "mapped_pointer_value",
                                    "intervening_instructions":step-1,
                                    "heuristic_function_start_hex":hex(nearest_prologue(blob,seg,pc)) if nearest_prologue(blob,seg,pc) is not None else None,
                                    "nearby_bl":call_context(blob,seg,pc)})
                # Don't continue if register was overwritten by any ADD of same dest; avoid cross-block pairing.
                if add and add["rd"]==rd:break
    return xrefs,total_adrp_candidates

def main():
    cli=argparse.ArgumentParser()
    cli.add_argument("--elf",type=Path,required=True)
    cli.add_argument("--events",type=Path)
    cli.add_argument("--out",type=Path,required=True)
    cli.add_argument("--min-bytes",type=int,default=1_000_000)
    a=cli.parse_args()
    if not a.elf.is_file():raise FileNotFoundError(a.elf)
    blob=a.elf.read_bytes()
    if len(blob)<a.min_bytes:raise ValueError("ELF too small or pointer file")
    segments=parse_elf(blob)
    terms=list_terms(a.events)
    hits=survey(blob,segments,terms)
    xrefs,adrps=locate_xrefs(blob,segments,hits)
    items=[]
    for term in terms:
        entry=hits[term]
        refs=xrefs.get(term,[])
        items.append({"term":term,"literal_locations":entry["locations"],
                      "literal_location_cap_reached":entry["location_count_capped"],
                      "code_reference_count_capped":len(refs),
                      "xref_cap_reached":len(refs)>=30,
                      "code_references":refs,
                      "status":"EXACT_NATIVE_CODE_STRING_REF_CANDIDATE" if refs else
                               "LITERAL_ONLY_NO_VERIFIED_CODE_REF" if entry["locations"] else
                               "STRING_ABSENT_MAY_BE_INTEGER_MAGIC_OR_HASH"})
    proof={"schema":"acnh303-r11-exact-elf64-aarch64-static-xref-v1",
           "elf_name":a.elf.name,"elf_bytes":len(blob),"elf_sha256":hashlib.sha256(blob).hexdigest(),
           "elf_machine":"AArch64","elf_load_segments":segments,
           "searched_native_terms":len(terms),"terms_with_exact_literals":sum(bool(x["literal_locations"]) for x in items),
           "terms_with_code_address_formations":sum(bool(x["code_references"]) for x in items),
           "total_capped_code_address_formations":sum(len(x["code_references"]) for x in items),
           "adrp_pages_matching_literal_page":adrps,
           "entries":items,
           "limits":"ADRP/ADD, ADR or mapped-pointer-value XREF only. Function boundaries are heuristics; nearby BL does not prove argument flow or consumer behavior. Integer magic construction, vtable, registration and runtime handling NOT yet established."}
    a.out.parent.mkdir(parents=True,exist_ok=True)
    a.out.write_text(json.dumps(proof,ensure_ascii=False,indent=2,sort_keys=True)+"\n",encoding="utf-8")
    print("ELF_STATIC_SUMMARY",json.dumps({k:v for k,v in proof.items() if k not in ("entries","elf_load_segments")},ensure_ascii=False),flush=True)
    print("TARGETS_WITH_XREFS",[(r["term"],len(r["code_references"])) for r in items if r["code_references"]][:45],flush=True)
    if not any(x["literal_locations"] for x in items):
        raise ValueError("No expected literal strings in actual ELF; verify version and string strategy")
if __name__=="__main__":main()
