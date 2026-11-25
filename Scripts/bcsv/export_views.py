#!/usr/bin/env python3
# /// script
# requires-python = ">=3.11"
# dependencies = []
# ///
"""Export two identical-value CSV views and name-enriched Markdown from original BCSV."""
from __future__ import annotations
import argparse, collections, csv, hashlib, json, re, zlib
from pathlib import Path
from bcsv import BCSV

ROM=Path("e10617820db06889e1638499478da0de_NCA/1/Bcsv")
BASE=Path("research/bcsv-hash/results/field-name-evidence.json")
INVENTORY=Path("research/bcsv-catalog/inventory.json")
META=("_row_index","_row_offset_raw")
URL="https://github.com/969981/ACNH_Resources/blob/research/research/bcsv-data"
def require(ok,msg):
    if not ok: raise ValueError(msg)
def read(p): return json.loads(p.read_text(encoding="utf-8-sig"))
def dump(p,d): p.write_text(json.dumps(d,ensure_ascii=False,indent=2)+"\n",encoding="utf-8")
def crc(s): return f"{zlib.crc32(s.encode('utf-8')):08X}"
def raw_value(raw):
    # Reproduce historical UnPack/1/Bcsv extraction convention, not a type inference.
    if len(raw) in (1,2,4,8): return str(int.from_bytes(raw,"little"))
    if b"\0" in raw:
        try:
            s=raw.split(b"\0",1)[0].decode("utf-8")
            if s.isprintable(): return s
        except UnicodeDecodeError: pass
    return "hex:"+raw.hex()
def headers(table,b,index):
    columns=[]
    for ordinal,f in enumerate(b.fields):
        h=f.key[5:];r=index[h]
        occurrences=[x for x in r["occurrences"] if x["table"]==table and x["ordinal"]==ordinal]
        require(len(occurrences)==1,"missing scoped field "+table+" "+h)
        o=occurrences[0];require((o["offset"],o["width"])==(f.offset,f.width),"descriptor drift "+table+" "+h)
        for c in r["name_candidates"]: require(crc(c["signature"])==h,"CRC mismatch "+h)
        compatible=[c for c in r["name_candidates"] if c["type_width"] is not None and 0<c["type_width"]<=f.width]
        require({c["signature"] for c in compatible}==set(o["compatible_signatures"]),"candidate mismatch "+h)
        c=compatible[0] if len(compatible)==1 else None
        name=c["name"] if c and re.fullmatch(r"[A-Za-z_][A-Za-z0-9_.]*",c["name"] or "") else None
        status="candidate_name" if name else "ambiguous" if len(compatible)>1 else "incompatible_or_unsupported" if r["name_candidates"] else "unresolved"
        columns.append({"hash":f.key,"ordinal":ordinal,"offset":f.offset,"width":f.width,"candidate_name":name,
                        "status":status,"signature":c["signature"] if name else None,"type_candidate":c["type"] if name else None,
                        "all_candidates":r["name_candidates"],"semantic_evidence":r.get("semantic_evidence")})
    counts=collections.Counter(c["candidate_name"] for c in columns if c["candidate_name"])
    reserved=set(META)|{c["hash"] for c in columns}
    for c in columns:
        n=c["candidate_name"]
        if not n: c["column"]=c["hash"]
        elif counts[n]>1 or n in reserved: c["column"]=n+"__"+c["hash"];c["status"]="candidate_name_disambiguated"
        else: c["column"]=n
    require(len({c["column"] for c in columns})==len(columns),"duplicate output columns")
    return columns
def export_table(b,columns,raw,named):
    raw_header=[*META,*[c["hash"] for c in columns]]
    named_header=[*META,*[c["column"] for c in columns]]
    with raw.open("w",encoding="utf-8-sig",newline="") as a,named.open("w",encoding="utf-8-sig",newline="") as z:
        aw=csv.writer(a);zw=csv.writer(z);aw.writerow(raw_header);zw.writerow(named_header)
        for i in range(b.count):
            pos=b.start+i*b.stride
            prefix=b.data[pos:pos+4]
            require(b.fields[0].offset>=4,"row prefix too short")
            row=[i,int.from_bytes(prefix,"little"),*[raw_value(b.raw(i,f)) for f in b.fields]]
            aw.writerow(row);zw.writerow(row)
    # Re-open both serialized files and compare every value and order.
    with raw.open(encoding="utf-8-sig",newline="") as a,named.open(encoding="utf-8-sig",newline="") as z:
        ar=csv.reader(a);zr=csv.reader(z)
        require(next(ar)==raw_header and next(zr)==named_header,"header mismatch")
        from itertools import zip_longest
        count=0
        for i,(x,y) in enumerate(zip_longest(ar,zr)):
            require(x==y and x is not None and len(x)==len(raw_header) and x[0]==str(i),"CSV values changed")
            count+=1
        require(count==b.count,"row count mismatch")
    return {"rows":b.count,"columns":len(columns),"raw_sha256":hashlib.sha256(raw.read_bytes()).hexdigest(),"named_sha256":hashlib.sha256(named.read_bytes()).hexdigest()}
def mdcell(s): return str(s).replace("|","\\|").replace("\n"," ")
def run(root,out):
    evidence=read(root/BASE);index={r["hash"]:r for r in evidence}
    inv=read(root/INVENTORY)
    require(len(index)==2075 and len(inv)==234,"baseline drift")
    require({x["table"] for x in inv}=={p.relative_to(root/ROM).as_posix() for p in (root/ROM).rglob("*.bcsv")},"inventory mismatch")
    data=out/"data";docs=out/"docs"
    for p in (data/"raw",data/"named",data/"schema",docs):p.mkdir(parents=True,exist_ok=True)
    summary=collections.Counter();manifest=[]
    links=["# BCSV 全量结构索引","","名称为 CRC32 签名候选；原始值不变。","", "[全量字段 Hash 字典](Field-Hashes.md) · [跨表引用候选](References.md) · [字段名称字典](../Field-Names.md)","","| 表 | 行数 | 字段数 | 回填字段 | 原始 CSV | 名称 CSV |","| --- | ---: | ---: | ---: | --- | --- |"]
    for i,e in enumerate(inv):
        p=root/ROM/e["table"];b=BCSV.read(p);name=p.stem
        require(b.metadata()["git_blob_sha1"]==e["git_blob_sha1"],"original blob changed "+name)
        require((b.count,b.stride,len(b.fields))==(e["rows"],e["row_length"],len(e["fields"])),"shape mismatch "+name)
        columns=headers(name,b,index)
        raw=data/"raw"/(name+".csv");named=data/"named"/(name+".csv")
        result=export_table(b,columns,raw,named)
        filled=sum(c["status"].startswith("candidate_name") for c in columns)
        for c in columns:summary[c["status"]]+=1
        summary["tables"]+=1;summary["rows"]+=b.count;summary["fields"]+=len(columns)
        entry={"table":name,"source":e["path"],"source_blob":e["git_blob_sha1"],"source_sha256":e["sha256"],"named_fields":filled,**result}
        manifest.append(entry)
        dump(data/"schema"/(name+".json"),{"table":name,"source":b.metadata(),"columns":columns,"value_policy":"historical unsigned/UTF-8/hex; header-only rename"})
        page=f"table-{i:04d}.md"
        rawlink=f"[原始 Hash CSV]({URL}/raw/{name}.csv)"
        namedlink=f"[名称回填 CSV]({URL}/named/{name}.csv)"
        links.append(f"| [{name}]({page}) | {b.count} | {len(columns)} | {filled} | {rawlink} | {namedlink} |")
        body=[f"# {name}.bcsv","","返回 [全量索引](README.md) · [字段名称字典](../Field-Names.md)。","",f"原始路径：`{e['path']}`",f"SHA256：`{e['sha256']}`",f"记录数 {b.count}，行长 {b.stride}，字段数 {len(columns)}。回填 {filled} 个字段。","",f"{rawlink} · {namedlink} · [字段映射 JSON]({URL}/schema/{name}.json)","","候选名称及类型仅为签名匹配；CSV 单元格仍为未经业务加工的原始解析值。","","| Hash | 偏移 | 跨度 | 回填列名 | 类型候选 | 签名候选 | 证据状态 |","| --- | ---: | ---: | --- | --- | --- | --- |"]
        for c in columns:
            body.append("| "+" | ".join(mdcell(x) for x in (c["hash"],c["offset"],c["width"],c["column"],c["type_candidate"] or "—","; ".join(x["signature"] for x in c["all_candidates"]) or "—",c["status"]))+" |")
        extra=[(c["hash"],c["semantic_evidence"]) for c in columns if c["semantic_evidence"]]
        if extra:
            body+=["","## 历史残余语义证据",""]
            for h,ev in extra:body.append(f"- {h}: {ev.get('semantic_alias')} ({ev.get('semantic_status')}) — {ev.get('observation')}")
        (docs/page).write_text("\n".join(body)+"\n",encoding="utf-8")
    require((summary["tables"],summary["rows"],summary["fields"])==(234,58349,2898),"full totals")
    summary["csv_files"]=2*summary["tables"]
    summary["renamed_fields"]=summary["candidate_name"]+summary["candidate_name_disambiguated"]
    summary["unchanged_fields"]=summary["fields"]-summary["renamed_fields"]
    summary["source_evidence_sha256"]=hashlib.sha256((root/BASE).read_bytes()).hexdigest()
    dump(data/"manifest.json",manifest);dump(data/"summary.json",dict(summary))
    (docs/"README.md").write_text("\n".join(links)+"\n",encoding="utf-8")
    print(json.dumps(dict(summary),ensure_ascii=False))
if __name__=="__main__":
    p=argparse.ArgumentParser(description=__doc__);p.add_argument("--root",type=Path,default=Path("."));p.add_argument("--out",type=Path,default=Path("out/bcsv-views"));a=p.parse_args();run(a.root,a.out)
