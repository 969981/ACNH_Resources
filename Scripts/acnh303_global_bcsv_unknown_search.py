#!/usr/bin/env python3
"""HASH-008A: pinned external CRC dictionaries and bounded independent candidate search."""
import argparse, collections, hashlib, json, re, urllib.request, urllib.parse, zlib
from pathlib import Path
from acnh303_global_bcsv_dictionary import DATA, read, blob, require, split_signature, width
TYPES=("u8","s8","u16","s16","u32","s32","f32","u64","s64","f64","string4","string8","string16","string20","string25","string30","string32","string33","string40","string48","string50","string60","string64","string65","string66","string128")
ID=re.compile(r"[A-Za-z_][A-Za-z0-9_]{1,95}\Z")
SIG=re.compile(r"[A-Za-z_][A-Za-z0-9_]*(?: (?:[usf]\d+|string\d+)|\.hshCstringRef)\Z")
def crc(s):
    return f"{zlib.crc32(s.encode('utf-8')):08X}"
def external(root,cache):
    m=read(root/DATA/"external_corpus_sources.json")
    cache.mkdir(parents=True,exist_ok=True)
    result=[]
    for x in m["files"]:
        path=cache/x["blob"]
        if not path.exists():
            url="https://raw.githubusercontent.com/"+m["repo"]+"/"+m["commit"]+"/"+urllib.parse.quote(x["path"],safe="/")
            with urllib.request.urlopen(url,timeout=45) as resp: b=resp.read()
            require(blob(b)==x["blob"],"external blob mismatch "+x["path"])
            path.write_bytes(b)
        b=path.read_bytes();require(blob(b)==x["blob"],"cached blob mismatch")
        result.append((x,b.decode("utf-8-sig").splitlines()))
    return result
def run(root,dictionary,out,cache):
    fields=read(dictionary/"fields.json"); by_hash=collections.defaultdict(list)
    for f in fields:by_hash[f["hash"]].append(f)
    target={h for h,fs in by_hash.items() if not any(f["candidates"] for f in fs)}
    require(len(by_hash)==2075 and len(target)==248,"baseline drift")
    hits=collections.defaultdict(dict); source_stats={}; names=set(); types={}; seen=set()
    def add(s,h,src,grade):
        name,typ=split_signature(s)
        if not SIG.fullmatch(s):typ=None;name=s
        w=width(typ)
        fs=by_hash[h]
        row=hits[h].setdefault(s,{"signature":s,"name":name,"type":typ,"sources":[],"compatible_occurrences":[{"table":f["table"],"ordinal":f["ordinal"],"width_hint":f["width_hint"]} for f in fs if w is None or w<=f["width_hint"]]})
        ev={"source":src,"grade":grade}
        if ev not in row["sources"]:row["sources"].append(ev)
    for spec,lines in external(root,cache):
        src=spec["path"]; matched=set()
        if spec["role"]=="type":
            for s in lines:
                if "=" not in s:continue
                h,t=s.split("=",1)
                if re.fullmatch(r"[0-9A-Fa-f]{1,8}",h) and f"{int(h,16):08X}" in target:
                    types[f"{int(h,16):08X}"]=t
            continue
        for s in lines:
            if not s:continue
            if ID.fullmatch(s):names.add(s)
            if SIG.fullmatch(s):
                n,_=split_signature(s);names.add(n)
            h=crc(s)
            if h in target:
                matched.add(h)
                grade="external_typed_signature" if SIG.fullmatch(s) and spec["role"] in ("header","mixed") else "external_untyped_or_value_match"
                add(s,h,src,grade)
        source_stats[src]={"lines":len(lines),"target_hashes_matched":len(matched)}
    external_typed={h for h,cs in hits.items() if any(x["compatible_occurrences"] and any(s["grade"]=="external_typed_signature" for s in x["sources"]) for x in cs.values())}
    external_any=set(hits)
    # Local prior R101 reconstructed signatures are independently rehashed.
    d=read(root/DATA/"r101_field_semantics.json")
    for h,x in d["unknown"].items():
        if x.get("reconstructed_name"):
            h=h.removeprefix("hash_")
            s=x["reconstructed_name"]+" "+x["native_type"]
            require(crc(s)==h,"R101 signature mismatch")
            if h in target:add(s,h,"R101 scoped reconstruction","prior_native_reconstruction")
    # Scan actual ELF identifiers if authenticated; do not assume they are field names.
    elf=root/"e10617820db06889e1638499478da0de_NCA/0/main.elf"
    b=elf.read_bytes()
    require(hashlib.sha256(b).hexdigest()=="145903c25d37a7c90e8818440bcf462b3dca490e11e45cf435605ab00d709664","ELF SHA mismatch")
    elf_names={m.group()[:-1].decode("ascii") for m in re.finditer(rb"(?<![A-Za-z0-9_])[A-Za-z_][A-Za-z0-9_]{2,95}\x00",b)}
    # Existing signature names and table-derived vocabulary; exact strings and numbered variants.
    for fs in by_hash.values():
        for f in fs:
            names.add(f["table"])
            for c in f["candidates"]:
                n,_=split_signature(c["signature"])
                if ID.fullmatch(n):names.add(n)
    generated=set()
    for n in names:
        if re.search(r"\d+$",n):
            base=re.sub(r"\d+$","",n)
            for i in range(0,33):generated.add(base+str(i))
    for source,ns in [("original_ELF_ASCII",elf_names),("historical_and_external_words",names),("numbered_family_search",generated)]:
        for n in sorted(ns):
            for sig in (n,n+".hshCstringRef",*(n+" "+t for t in TYPES)):
                if sig in seen:continue
                seen.add(sig);h=crc(sig)
                if h in target:add(sig,h,source,"independent_crc_candidate")
    def row(h):
        candidates=sorted(hits.get(h,{}).values(),key=lambda x:x["signature"])
        return {"hash":h,"occurrences":[{k:f[k] for k in ("table","ordinal","offset","width_hint","status")} for f in by_hash[h]],"external_type_hint":types.get(h),"candidates":candidates,"original_name_verified":False}
    result=[row(h) for h in sorted(target)]
    own={h for h,cs in hits.items() if any(any(s["grade"]=="independent_crc_candidate" for s in x["sources"]) and x["compatible_occurrences"] for x in cs.values())}
    typed={h for h,cs in hits.items() if any(x["type"] and x["compatible_occurrences"] for x in cs.values())}
    summary={"baseline_target_hashes":len(target),"external_any_match":len(external_any),"external_typed_width_compatible":len(external_typed),"external_type_hints":len(types),"elf_identifier_count":len(elf_names),"generated_numbered_names":len(generated),"independent_signatures_tested":len(seen),"independent_candidate_hashes":len(own),"independent_new_beyond_external_any":len(own-external_any),"any_candidate_hashes":len(hits),"typed_width_compatible_candidate_hashes":len(typed),"still_no_candidate":len(target-set(hits)),"multiple_candidate_hashes":sum(len(cs)>1 for cs in hits.values()),"source_stats":source_stats,"original_name_verified":0}
    out.mkdir(parents=True,exist_ok=True)
    for n,obj in [("unknown_hash_candidates",result),("unknown_hash_summary",summary),("unknown_hash_no_candidate",[x for x in result if not x["candidates"]])]:
        (out/(n+".json")).write_text(json.dumps(obj,ensure_ascii=False,indent=2)+"\n",encoding="utf-8")
    print(json.dumps(summary,ensure_ascii=False,indent=2))
    # Small explicit output for real CI logs; all details in artifact.
    for x in result:
        if x["candidates"]:
            print(x["hash"],",".join(sorted({f["table"] for f in x["occurrences"]})),json.dumps([c["signature"] for c in x["candidates"]],ensure_ascii=False))
    return summary
if __name__=="__main__":
    p=argparse.ArgumentParser();p.add_argument("--root",type=Path,default=Path("."));p.add_argument("--dictionary",type=Path,required=True);p.add_argument("--out",type=Path,required=True);p.add_argument("--cache",type=Path,required=True)
    a=p.parse_args();run(a.root.resolve(),a.dictionary.resolve(),a.out.resolve(),a.cache.resolve())
