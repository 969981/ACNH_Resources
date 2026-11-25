#!/usr/bin/env python3
# /// script
# requires-python = ">=3.11"
# dependencies = ["lz4==4.4.4"]
# ///
"""Reconcile historical BCSV signatures against current original descriptors."""
from __future__ import annotations
import argparse, collections, hashlib, json, re, struct, zlib
from pathlib import Path
import lz4.block
from bcsv import BCSV
BASE=Path("research/bcsv-hash/sources")
ROM=Path("e10617820db06889e1638499478da0de_NCA")
PINNED={"r100_corpus.json":"8fc14f19d73e32e250cb83d423fb45dd03418796","r100_historical_supplement.json":"ffad4f61e20bffe1ffb8ed6ad3e6197c8186043a","hash008a_ci_candidates.json":"22b3c8262557b68f35e79c1fcfa02ae75433f7e1","hash008b_remaining.json":"58adc39e852ff6c9f6b06bde8d970a4ed672c2d6","original_manifest.json":"cadd6ee12369ce0e0f9ae249935308708065071d","r101_field_semantics.json":"055e3384d0cb892da15d683c4da09d2b0de82f0a","hash007a_ci_baseline.json":"29e44982f7a483e081c0c03ef1084ca732881516","hash007l_ci_baseline.json":"fad5a5b1ddf2744c775f03cfb54c1e4951428918"}
NSO_SHA="68c7fbeda353f8e4a283eac6a9b99e713e72a327048214bf6a4e7214616b87c1"
def blob(b): return hashlib.sha1(b"blob "+str(len(b)).encode()+b"\0"+b).hexdigest()
def crc(s): return f"{zlib.crc32(s.encode('utf-8')):08X}"
def key(h): return h.removeprefix("hash_").removeprefix("0x").upper()
def read(p): return json.loads(p.read_text(encoding="utf-8-sig"))
def require(v,msg):
    if not v: raise ValueError(msg)
def signature(s):
    if s.endswith(".hshCstringRef"): return s.removesuffix(".hshCstringRef"),"hshCstringRef",4
    name,_,typ=s.rpartition(" ")
    if typ in ("hshCstringRef","stringMurmurHash"): return name,typ,4
    if typ=="bool": return name,typ,1
    m=re.fullmatch(r"[usf](8|16|32|64)",typ)
    if m: return name,typ,int(m[1])//8
    m=re.fullmatch(r"string(\d+)",typ)
    if m: return name,typ,int(m[1])
    return name or s,typ or None,None
def nso_strings(path):
    b=path.read_bytes();require(hashlib.sha256(b).hexdigest()==NSO_SHA,"original NSO SHA mismatch")
    require(b[:4]==b"NSO0","NSO magic")
    flags=struct.unpack_from("<I",b,12)[0];off,va,size,_=struct.unpack_from("<IIII",b,0x20)
    packed=struct.unpack_from("<I",b,0x64)[0]
    require(off+packed<=len(b) and size<=128*1024*1024,"NSO rodata bounds")
    data=lz4.block.decompress(b[off:off+packed],uncompressed_size=size) if flags&2 else b[off:off+packed]
    require(len(data)==size,"rodata size")
    if flags&16: require(hashlib.sha256(data).digest()==b[0xc0:0xe0],"rodata digest")
    # Only printable NUL-terminated ASCII tokens; address is module RVA, not Ghidra VA.
    pat=rb"(?<![ -~])[A-Za-z_][A-Za-z0-9_. :]{1,100}(?=\x00)"
    out=collections.defaultdict(list)
    for m in re.finditer(pat,data): out[m.group().decode("ascii")].append(va+m.start())
    return out
def run(root,out,nhse):
    out.mkdir(parents=True,exist_ok=True)
    sources=root/BASE
    for n,h in PINNED.items(): require(blob((sources/n).read_bytes())==h,"archive blob mismatch "+n)
    original=read(sources/"original_manifest.json")["files"]
    fields=collections.defaultdict(list)
    for x in original:
        p=root/x["path"];b=BCSV.read(p)
        require(blob(b.data)==x["blob"] and len(b.data)==x["bytes"],"original identity "+str(p))
        for ordinal,f in enumerate(b.fields):
            fields[f.key[5:]].append({"table":p.stem,"ordinal":ordinal,"offset":f.offset,"width":f.width})
    require(len(fields)==2075 and sum(map(len,fields.values()))==2898,"field totals")
    require({x["path"] for x in original}=={p.relative_to(root).as_posix() for p in (root/ROM/"1/Bcsv").rglob("*.bcsv")},"table set")
    candidates=collections.defaultdict(dict)
    def add(sig,h,src):
        h=key(h);require(crc(sig)==h,"CRC mismatch "+sig)
        if h not in fields: return
        name,typ,w=signature(sig)
        rec=candidates[h].setdefault(sig,{"signature":sig,"name":name,"type":typ,"type_width":w,"sources":[]})
        if src not in rec["sources"]:rec["sources"].append(src)
    for x in read(sources/"r100_corpus.json")["verified_signatures"]:
        add(x["name"]+" "+x["type"],x["hash"],"R100_corpus")
    for x in read(sources/"r100_historical_supplement.json")["preset"]["signatures"]:
        add(x["signature"],x["hash"],"R100_CylindricalEarth")
    historical_count=len(candidates)
    for x in read(sources/"hash008a_ci_candidates.json")["candidates"]:
        for s in x["signatures"]:add(s,x["hash"],"HeavenTool_HASH008A")
    archive_count=len(candidates)
    residual=read(root/"research/hash008h/residual_fields.json")["fields"]
    residual_index={x["hash"]:x for x in residual}
    for x in residual:
        old={(o["table"],o["ordinal"],o["offset"],o["width_hint"]) for o in x["occurrences"]}
        current={(o["table"],o["ordinal"],o["offset"],o["width"]) for o in fields[x["hash"]]}
        require(old==current,"residual schema drift "+x["hash"])
    require(set(fields)-set(candidates)==set(residual_index),"historical residual differs")
    # NHSE dictionary explicitly distinguishes typed columns and enum labels.
    text=nhse.read_text(encoding="utf-8-sig")
    enum_labels=set();nhse_column_hits=set();nhse_enum_hits=set()
    for line in text.splitlines():
        m=re.match(r"\s*\('([^']+)'",line)
        if m:
            enum_labels.add(m[1])
            if crc(m[1]) in fields:nhse_enum_hits.add(crc(m[1]))
        m=re.match(r"\s*([^=]+?)\s*=\s*.*\(0x([0-9A-Fa-f]{8})\)\s*$",line)
        if m and crc(m[1])==m[2].upper() and m[2].upper() in fields:
            add(m[1],m[2],"NHSE_explicit_column");nhse_column_hits.add(m[2].upper())
    strings=nso_strings(root/ROM/"0/main")
    native_exact=0;native_name=0;new_native=[]
    for h,recs in list(candidates.items()):
        for s,r in recs.items():
            r["native_signature_rvas"]=strings.get(s,[])[:16]
            r["native_name_rvas"]=strings.get(r["name"],[])[:16]
        native_exact+=any(r["native_signature_rvas"] for r in recs.values())
        native_name+=any(r["native_name_rvas"] for r in recs.values())
    # Test literal native strings, then typed variants only for residual fields.
    targets=set(fields)-set(candidates)
    for name,addresses in strings.items():
        options=[name] if " " in name or name.endswith(".hshCstringRef") else []
        if re.fullmatch(r"[A-Za-z_][A-Za-z0-9_]*",name):
            options += [name+" "+t for t in ("u8","s8","u16","s16","u32","s32","f32","u64","s64","bool","string32","string64","stringMurmurHash")]+[name+".hshCstringRef"]
        for sig in options:
            h=crc(sig)
            if h not in targets:continue
            _,typ,w=signature(sig)
            if w is None or not any(w<=o["width"] for o in fields[h]):continue
            add(sig,h,"NSO_rodata_literal" if sig==name else "NSO_rodata_typed_candidate")
            candidates[h][sig]["native_string_rvas"]=addresses[:16];new_native.append((h,sig))
    rows=[]
    for h,occ in sorted(fields.items()):
        c=list(candidates.get(h,{}).values())
        for o in occ:
            o["compatible_signatures"]=[r["signature"] for r in c if r["type_width"] is not None and r["type_width"]<=o["width"]]
        r=residual_index.get(h)
        rows.append({"hash":h,"occurrences":occ,"name_candidates":c,
                     "status":"crc_candidate" if c else "unresolved",
                     "semantic_evidence":r if r else None})
    stats={"tables":len(original),"hashes":len(fields),"occurrences":sum(map(len,fields.values())),
           "historical_signature_hashes":historical_count,"archive_candidate_hashes":archive_count,
           "nhse_enum_labels":len(enum_labels),"nhse_enum_hash_hits":len(nhse_enum_hits),"nhse_explicit_column_hits":len(nhse_column_hits),
           "nso_rodata_identifiers":len(strings),"archive_hashes_with_exact_nso_signature":native_exact,
           "archive_hashes_with_nso_name_token":native_name,"new_nso_crc_candidates":len(set(h for h,s in new_native)),
           "candidate_hashes":sum(bool(r["name_candidates"]) for r in rows),"unresolved_hashes":sum(not r["name_candidates"] for r in rows),
           "residual_semantic_grades":dict(collections.Counter(x["semantic_status"] for x in residual)),
           "runtime_verified_this_round":0}
    def dump(n,d):(out/n).write_text(json.dumps(d,ensure_ascii=False,indent=2)+"\n",encoding="utf-8")
    dump("field-name-evidence.json",rows);dump("summary.json",stats);dump("unresolved.json",[r for r in rows if not r["name_candidates"]])
    lines=["# 全量 BCSV 字段名称候选","","返回 [知识库首页](../../README.md) · [BCSV 专题](README.md) · [全量字段字典](Generated/Field-Hashes.md)。","","名称 CRC 匹配不等于业务语义或原始明文确认。NSO 名称 token 不等于字段消费者。","","| Hash | 候选签名 | 表数 | 残余语义证据 |","| --- | --- | ---: | --- |"]
    for r in rows:
        lines.append("| "+r["hash"]+" | "+("; ".join(c["signature"] for c in r["name_candidates"]) or "未知")+" | "+str(len(r["occurrences"]))+" | "+(r["semantic_evidence"]["semantic_status"] if r["semantic_evidence"] else "—")+" |")
    (out/"Field-Names.md").write_text("\n".join(lines)+"\n",encoding="utf-8")
    print(json.dumps(stats,ensure_ascii=False))
if __name__=="__main__":
    p=argparse.ArgumentParser();p.add_argument("--root",type=Path,default=Path("."));p.add_argument("--out",type=Path,default=Path("out/bcsv-hash"));p.add_argument("--nhse",type=Path,required=True);a=p.parse_args();run(a.root,a.out,a.nhse)
