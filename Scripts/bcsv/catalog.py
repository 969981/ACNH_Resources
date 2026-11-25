#!/usr/bin/env python3
# /// script
# requires-python = ">=3.11"
# dependencies = []
# ///
"""Inventory all original BCSV files; generate structural dictionary and reference candidates."""
from __future__ import annotations
import argparse, collections, csv, hashlib, json, re, subprocess
from pathlib import Path
from bcsv import BCSV, crc32
from extract import ROM, TYPED, BLOBS

def write_json(path, data):
    path.write_text(json.dumps(data,ensure_ascii=False,indent=2)+"\n",encoding="utf-8")

def table_inventory(root):
    return sorted(root.rglob("*.bcsv"))

def git_inventory(root):
    result=subprocess.run(["git","ls-files","-z","--",str(root)],capture_output=True,check=True)
    return sorted(Path(p) for p in result.stdout.decode().split("\0") if p.endswith(".bcsv"))

def label_domains(tables):
    """Index CRC32 of nonempty, unique ASCII identifier labels, not arbitrary descriptions."""
    domains={}
    for name,b in tables.items():
        for f in b.fields:
            if f.hash not in (0x87BF00E8,0x13AB5198) or f.width<8: continue
            try: labels=[b.string(i,f.hash) for i in range(b.count)]
            except UnicodeDecodeError: continue
            labels=[x for x in labels if re.fullmatch(r"[A-Za-z0-9_][A-Za-z0-9_.-]*",x)]
            if len(set(labels))<3: continue
            mapping=collections.defaultdict(set)
            for label in labels: mapping[crc32(label)].add(label)
            domains[(name,f.key)]={h:next(iter(v)) for h,v in mapping.items() if len(v)==1}
    return domains

def reference_candidates(tables,domains,min_ratio=.8):
    """Screen 4-byte fields against target label CRC32 domains; never declare a foreign key."""
    inverted=collections.defaultdict(set)
    for key,domain in domains.items():
        for value in domain: inverted[value].add(key)
    for name,b in tables.items():
        for f in b.fields:
            if f.width!=4: continue
            counts=collections.Counter(b.uint(i,f.hash) for i in range(b.count))
            # Exclusions are explicit, not silently treated as null semantics.
            excluded=sum(counts.pop(x,0) for x in (0,0xffffffff))
            if len(counts)<3: continue
            hits=collections.defaultdict(set)
            for value in counts:
                for key in inverted.get(value,()):
                    if key[0]!=name: hits[key].add(value)
            for key,values in sorted(hits.items()):
                if len(values)<3 or len(values)/len(counts)<min_ratio: continue
                total=sum(counts.values())
                matched=sum(counts[v] for v in values)
                if matched/total<min_ratio: continue
                yield {"source_table":name,"source_hash":f.key,"target_table":key[0],
                       "target_label_hash":key[1],"encoding":"crc32_utf8",
                       "distinct_values":len(counts),"matched_distinct":len(values),
                       "non_sentinel_rows":total,"matched_rows":matched,"excluded_zero_or_ffffffff_rows":excluded,
                       "distinct_ratio":len(values)/len(counts),"row_ratio":matched/total,
                       "examples":[{"raw":f"0x{v:08X}","target_label":domains[key][v]} for v in sorted(values)[:5]],
                       "unmatched_examples":[f"0x{v:08X}" for v in sorted(set(counts)-values)[:10]],
                       "status":"candidate_not_verified"}

def generate_docs(out, inventory, dictionary, relations):
    docs=out/"docs"; docs.mkdir(parents=True,exist_ok=True)
    lines=["# BCSV 全量结构索引","","自动生成；结构验证不代表语义验证。","","| 表 | 行数 | 字段数 | 状态 |","| --- | ---: | ---: | --- |"]
    for i,e in enumerate(inventory):
        name=e["table"]; safe=f"table-{i:04d}.md"
        lines.append(f"| [{name}]({safe}) | {e.get('rows','—')} | {len(e.get('fields',[]))} | {e['status']} |")
        body=[f"# {name}","","返回 [全量索引](README.md)。","",f"原始路径：`{e['path']}`",f"SHA256：`{e['sha256']}`",f"状态：{e['status']}"]
        if e["status"]=="parsed":
            body += ["",f"行数 {e['rows']}，行长 {e['row_length']}，数据起点 {e['data_offset']}。","","| Hash | 偏移 | 跨度 | 当前解释 |","| --- | ---: | ---: | --- |"]
            for f in e["fields"]:
                typed=TYPED.get(Path(name).stem,{}).get(int(f["hash"][5:],16))
                body.append(f"| {f['hash']} | {f['offset']} | {f['width']} | {typed[0] if typed else '未知，保留原值'} |")
        else: body += ["",f"解析异常：`{e['error']}`"]
        (docs/safe).write_text("\n".join(body)+"\n",encoding="utf-8")
    lines+=["","[全量字段 Hash 字典](Field-Hashes.md) · [跨表引用候选](References.md)"]
    (docs/"README.md").write_text("\n".join(lines)+"\n",encoding="utf-8")
    lines=["# 全量字段 Hash 字典","","返回 [索引](README.md)。同 Hash 不保证跨表类型或语义一致。","","| Hash | 表数 | 字段跨度集合 | 已登记解释（按表） |","| --- | ---: | --- | --- |"]
    for h,occ in sorted(dictionary.items()):
        known=[f"{x['table']}: {x['interpretation']}" for x in occ if x.get("interpretation")]
        lines.append(f"| {h} | {len(occ)} | {', '.join(map(str,sorted({x['width'] for x in occ})))} | {'; '.join(known) or '未知'} |")
    (docs/"Field-Hashes.md").write_text("\n".join(lines)+"\n",encoding="utf-8")
    lines=["# 跨表引用候选","","返回 [索引](README.md)。仅 CRC32 值域统计，非已确认外键；排除 0 和 FFFFFFFF，至少 3 个不同命中且行与去重覆盖率均 >=80%。","","| 源表 | 字段 | 目标表 | 匹配行 | 匹配去重值 |","| --- | --- | --- | --- | --- |"]
    for r in relations:
        lines.append(f"| {r['source_table']} | {r['source_hash']} | {r['target_table']} | {r['matched_rows']}/{r['non_sentinel_rows']} | {r['matched_distinct']}/{r['distinct_values']} |")
    (docs/"References.md").write_text("\n".join(lines)+"\n",encoding="utf-8")

def run(root,out,verify_git=False):
    out.mkdir(parents=True,exist_ok=True)
    paths=table_inventory(root)
    if not paths: raise ValueError("no BCSV files")
    if verify_git and paths!=git_inventory(root): raise ValueError("working files differ from tracked BCSV inventory")
    inventory=[];tables={};dictionary=collections.defaultdict(list)
    for path in paths:
        name=path.relative_to(root).as_posix()
        raw=path.read_bytes()
        e={"table":name,"path":str(path),"sha256":hashlib.sha256(raw).hexdigest(),
           "git_blob_sha1":hashlib.sha1(f"blob {len(raw)}\0".encode()+raw).hexdigest(),"size":len(raw)}
        if verify_git:
            expected=subprocess.check_output(["git","rev-parse",f"HEAD:{path.as_posix()}"],text=True).strip()
            if e["git_blob_sha1"]!=expected: raise ValueError(f"source mismatch: {path}")
        try: b=BCSV(raw)
        except ValueError as err:
            inventory.append(dict(e,status="unsupported",error=str(err)));continue
        e.update(b.metadata(),status="parsed"); inventory.append(e);tables[name]=b
        for f in b.fields:
            interpretation=TYPED.get(path.stem,{}).get(f.hash)
            dictionary[f.key].append({"table":name,"offset":f.offset,"width":f.width,
                                      "interpretation":interpretation[0] if interpretation else None})
    relations=list(reference_candidates(tables,label_domains(tables)))
    write_json(out/"inventory.json",inventory)
    write_json(out/"field-hashes.json",dictionary)
    write_json(out/"reference-candidates.json",relations)
    generate_docs(out,inventory,dictionary,relations)
    summary={"files":len(paths),"parsed":len(tables),"unsupported":len(paths)-len(tables),
             "rows":sum(b.count for b in tables.values()),"field_occurrences":sum(map(len,dictionary.values())),
             "unique_field_hashes":len(dictionary),"reference_candidates":len(relations)}
    write_json(out/"summary.json",summary);print(json.dumps(summary,ensure_ascii=False))
    return summary
if __name__=="__main__":
    p=argparse.ArgumentParser(description=__doc__);p.add_argument("--bcsv",type=Path,default=ROM);p.add_argument("--out",type=Path,default=Path("out/bcsv-catalog"));p.add_argument("--verify-git",action="store_true")
    a=p.parse_args();run(a.bcsv,a.out,a.verify_git)
