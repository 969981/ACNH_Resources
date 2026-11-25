"""Generate table-level Chinese catalog with original byte samples and scoped evidence."""
from __future__ import annotations
import collections
import csv
import json
import math
import re
import struct
from pathlib import Path
from bcsv import crc32
from field_hash_docs import signature_parts, table_cells, safe_cell, translate, GLOSSARY

ROOT = Path(__file__).resolve().parents[2]
META = Path(__file__).with_name("table_zh.json")
ENUMS = ROOT / "research/bcsv-data/decoded/enum-values.csv"
DATA = "../../../../research/bcsv-data/"
MARKER = "<!-- table-business-catalog -->"

def cell_row(*cells):
    return "| " + " | ".join(safe_cell(x) for x in cells) + " |"

def read_glossary(path):
    return {c[0]: c for line in path.read_text(encoding="utf-8").splitlines()
            if line.startswith("| hash_") for c in [table_cells(line)]}

def load_enums(path, tables, glossary):
    result = collections.defaultdict(dict)
    counts = {}
    with path.open(encoding="utf-8-sig", newline="") as fp:
        for row in csv.DictReader(fp):
            table = row["table"] + ".bcsv"
            h = row["field_hash"]
            b = tables[table]
            f = b.by_hash[int(h[5:], 16)]
            if f.width < 4 or glossary[h][1].endswith(".hshCstringRef") is False:
                raise ValueError("enum type mismatch " + table + h)
            key = table, h
            if key not in counts:
                counts[key] = collections.Counter(int.from_bytes(b.raw(i, f)[:4], "little") for i in range(b.count))
            value = int(row["raw_hex"], 16)
            if counts[key][value] != int(row["row_count"]) or value in result[key]:
                raise ValueError("enum source counts mismatch " + str(key))
            community = json.loads(row["community_labels_json"])
            special = json.loads(row["smallgenre_candidates_json"])
            if any(crc32(s) != value for s in community + special):
                raise ValueError("enum CRC mismatch " + str(key))
            result[key][value] = {"community": community, "smallgenre": special}
    return result

def sample_value(raw, signature):
    _, kind = signature_parts(signature)
    if kind == "hshCstringRef" or kind == "stringMurmurHash":
        n = 4
        if len(raw) >= n and not any(raw[n:]):
            return f"0x{int.from_bytes(raw[:n], 'little'):08X}"
    elif re.fullmatch(r"[us](8|16|32)|f32", kind):
        n = int(kind[1:]) // 8
        if len(raw) >= n and not any(raw[n:]):
            if kind == "f32":
                v = struct.unpack("<f", raw[:n])[0]
                if math.isfinite(v):
                    return repr(v)
            else:
                return str(int.from_bytes(raw[:n], "little", signed=kind[0] == "s"))
    elif re.fullmatch(r"string[0-9]+", kind):
        n = int(kind[6:])
        if len(raw) >= n and not any(raw[n:]):
            try:
                return json.dumps(raw[:n].split(b"\0", 1)[0].decode("utf-8"), ensure_ascii=False)
            except UnicodeDecodeError:
                pass
    return "raw:" + raw.hex()

def gloss_label(s, glossary):
    return translate(s + " u8", glossary)

def generate(out, inventory, tables, relations, meta_path=META, enums_path=ENUMS):
    docs = out / "docs"
    glossary = read_glossary(docs / "Field-Hashes.md")
    translations = json.loads(GLOSSARY.read_text(encoding="utf-8"))
    meta = json.loads(meta_path.read_text(encoding="utf-8"))
    if set(meta) != {Path(e["table"]).stem for e in inventory}:
        raise ValueError("Chinese table metadata coverage mismatch")
    enums = load_enums(enums_path, tables, glossary)
    ids = {e["table"]: f"table-{i:04d}.md" for i, e in enumerate(inventory)}
    profiles = []
    stats = collections.Counter()
    index = ["# BCSV 全量结构与业务索引", "", "中文名及用途为研究释义；未有专题证据的用途标为名称推测。", "",
             "| 原版表 | 中文表名 | 行数 | 字段数 | 用途证据 |", "| --- | --- | ---: | ---: | --- |"]
    for e in inventory:
        t = e["table"]
        stem = Path(t).stem
        m = meta[stem]
        b = tables[t]
        path = docs / ids[t]
        if not m["zh"] or not m["purpose"] or m["status"] not in ("documented", "name_hypothesis"):
            raise ValueError("invalid table metadata " + t)
        status = "已有专题文档" if m["status"] == "documented" else "名称推测"
        index.append(cell_row(f"[{t}]({ids[t]})", m["zh"], b.count, len(b.fields), status))
        sections = [MARKER, "", "## 中文表名与业务用途", "", "**中文表名：** " + m["zh"], "",
                    "**用途：** " + m["purpose"], "", "**证据等级：** " + status]
        if "source" in m:
            sections[-1] += f"（[专题证据](../{m['source']})）"
        sections += ["", "## 数据文件", "",
                     f"[原始 Hash CSV]({DATA}raw/{stem}.csv) · [英文列名 CSV]({DATA}named/{stem}.csv) · [候选类型解码 CSV]({DATA}decoded/tables/{stem}.csv) · [结构 JSON]({DATA}schema/{stem}.json)", "",
                     "## 实际原版数据样例", "", "选择首行、中间行、末行（去重）；每格展示原始完整字段字节及候选类型解码，不把候选类型视为已确认。", ""]
        samples = sorted({0, b.count // 2, b.count - 1}) if b.count else []
        sections += [cell_row("字段", "偏移", *(f"行 {i}（0 基）" for i in samples)),
                     cell_row("---", "---:", *("---" for _ in samples))]
        sample_records = []
        for f in b.fields:
            g = glossary[f.key]
            vals = []
            record = {"hash": f.key, "offset": f.offset, "values": []}
            for i in samples:
                raw = b.raw(i, f)
                decoded = sample_value(raw, g[1])
                vals.append(f"{decoded} / hex:{raw.hex()}")
                record["values"].append({"row": i, "raw_hex": raw.hex(), "candidate": decoded})
            sections.append(cell_row(f"\x60{f.key}\x60 {g[2]}", f.offset, *vals))
            sample_records.append(record)
        stats["sample_rows"] += len(samples)
        sections += ["", "## 枚举码值及实际分布", "", "仅对 hshCstringRef 候选字段统计原版前 4 字节。已登记标签来自 decoded 枚举证据，逐值校验 CRC32 与原版出现次数；中文为研究译名，候选冲突不强行合并。每字段最多展示 12 个高频值，完整映射见下方 JSON。", ""]
        enum_fields = []
        for f in b.fields:
            g = glossary[f.key]
            if not g[1].endswith(".hshCstringRef") or f.width < 4:
                continue
            counts = collections.Counter(int.from_bytes(b.raw(i, f)[:4], "little") for i in range(b.count))
            values = []
            for v, count in sorted(counts.items(), key=lambda x: (-x[1], x[0])):
                evidence = enums.get((t, f.key), {}).get(v, {})
                labels = sorted(set(evidence.get("community", []) + evidence.get("smallgenre", [])))
                values.append({"raw": f"0x{v:08X}", "count": count, "labels": labels,
                               "zh": [gloss_label(s, translations) for s in labels],
                               "evidence": evidence, "status": "ambiguous" if len(labels)>1 else "crc_candidate" if labels else "unmapped"})
            enum_fields.append({"hash": f.key, "values": values})
            stats["enum_fields"] += 1
            stats["enum_observed_values"] += len(values)
            stats["enum_mapped_values"] += sum(bool(v["labels"]) for v in values)
            sections += [f"### {g[2]}（{f.key}）", "", f"去重码值 {len(values)} 个，已有标签候选 {sum(bool(v['labels']) for v in values)} 个。", "",
                         "| 原始码值 | 出现次数 | 英文候选 | 中文释义 | 证据 |", "| --- | ---: | --- | --- | --- |"]
            for v in values[:12]:
                sections.append(cell_row(v["raw"], v["count"], "；".join(v["labels"]) or "未知", "；".join(v["zh"]) or "未知", v["status"]))
            sections.append("")
        if not enum_fields:
            sections += ["本表无可按此规则识别的 CRC 枚举字段；不代表不存在数值枚举或位域。", ""]
        if enum_fields:
            stats["tables_with_enum_fields"] += 1
        sections += ["[完整码值与样例 JSON](../../../../research/bcsv-catalog/table-profiles.json) · [已有枚举证据 CSV](" + DATA + "decoded/enum-values.csv)", "",
                     "## 跨表关联", "", "以下为原版 CRC32 标签值域统计候选，不是已确认的外键。", "",
                     "| 方向 | 来源字段 | 目标字段 | 对端表 | 匹配记录 | 去重匹配 |", "| --- | --- | --- | --- | ---: | ---: |"]
        local = [r for r in relations if t in (r["source_table"], r["target_table"])]
        for r in local:
            outgoing = r["source_table"] == t
            other = r["target_table"] if outgoing else r["source_table"]
            sections.append(cell_row("出向" if outgoing else "入向", r["source_hash"], r["target_label_hash"], f"[{other}]({ids[other]})",
                                     f"{r['matched_rows']}/{r['non_sentinel_rows']}", f"{r['matched_distinct']}/{r['distinct_values']}"))
        if not local:
            sections.append(cell_row("—", "—", "—", "尚无已登记候选", "—", "—"))
        else:
            stats["tables_with_relations"] += 1
        sections += ["", "[完整关联候选](References.md) · [逐值匹配明细](" + DATA + "decoded/reference-values.csv)", ""]
        base = path.read_text(encoding="utf-8").split(MARKER, 1)[0].rstrip()
        path.write_text(base + "\n\n" + "\n".join(sections), encoding="utf-8")
        profiles.append({"table": t, "source_sha256": e["sha256"], **m, "sample_rows": samples,
                         "samples": sample_records, "enum_fields": enum_fields, "relations": local})
        stats["tables"] += 1
        stats["documented_purposes" if m["status"] == "documented" else "hypothesis_purposes"] += 1
    if stats["enum_mapped_values"] != sum(len(v) for v in enums.values()):
        raise ValueError("enum mapping coverage mismatch")
    index += ["", "[全量字段 Hash 字典](Field-Hashes.md) · [跨表引用候选](References.md)", ""]
    (docs / "README.md").write_text("\n".join(index), encoding="utf-8")
    (out / "table-profiles.json").write_text(json.dumps(profiles, ensure_ascii=False, indent=2) + "\n", encoding="utf-8")
    stats["reference_candidates"] = len(relations)
    (out / "table-profile-summary.json").write_text(json.dumps(dict(stats), ensure_ascii=False, indent=2) + "\n", encoding="utf-8")
    print("table profiles:", json.dumps(dict(stats), ensure_ascii=False))
    return dict(stats)
