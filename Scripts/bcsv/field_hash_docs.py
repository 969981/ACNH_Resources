"""Generate Chinese research glosses while preserving structural and CRC evidence."""
import json
import re
import zlib
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
NAMES = ROOT / "docs/Sources/BCSV/Field-Names.md"
RESIDUAL = ROOT / "research/hash008h/residual_fields.json"
GLOSSARY = Path(__file__).with_name("field_hash_zh.json")
TARGET = ROOT / "docs/Sources/BCSV/Generated/Field-Hashes.md"
TOKEN = re.compile(r"[A-Z]+(?=[A-Z][a-z]|[0-9]|$)|[A-Z]?[a-z]+|[A-Z]+|[0-9]+|[^A-Za-z0-9_]+")

def translate(sig, glossary):
    name = re.sub(r"(?:\s+\S+|\.hshCstringRef)$", "", sig)
    if name in glossary["exact"]:
        return glossary["exact"][name]
    if name.startswith("Prob"):
        return translate(name[4:] + " u8", glossary) + "概率"
    return " ".join(glossary["tokens"].get(t, t) for t in TOKEN.findall(name))

def render(structural, names, residual, glossary):
    named = {}
    for line in names.splitlines():
        if re.match(r"^\| [0-9A-F]{8} \|", line):
            _, h, sig, count, grade, _ = (x.strip() for x in line.split("|"))
            if h in named:
                raise ValueError("duplicate name hash " + h)
            named[h] = sig, count
    remaining = {x["hash"]: x for x in residual}
    rows, seen, count = [], set(), 0
    for line in structural.splitlines():
        if not re.match(r"^\| hash_[0-9A-F]{8} \|", line):
            continue
        cells = [x.strip() for x in line.split("|")]
        if len(cells) == 6:
            _, key, tables, widths, meaning, _ = cells
        elif len(cells) == 9:
            _, key, _, _, tables, widths, meaning, _, _ = cells
        else:
            raise ValueError("unexpected structure row " + line)
        h = key[5:]
        if h in seen or h not in named or named[h][1] != tables:
            raise ValueError("structural/name coverage mismatch " + h)
        seen.add(h)
        sig, _ = named[h]
        if sig == "未知":
            e = remaining[h]
            zh = glossary["residual"].get(h, translate(e["semantic_alias"] + " u8", glossary))
            zh += "（语义别名：" + e["semantic_alias"] + "）"
            status = "原名未恢复 / " + e["semantic_status"]
        else:
            for s in sig.split("; "):
                if f"{zlib.crc32(s.encode('utf-8')):08X}" != h:
                    raise ValueError("CRC mismatch " + s)
            count += 1
            zh = "；".join(translate(s, glossary) for s in sig.split("; "))
            status = "CRC 候选"
        rows.append(f"| {key} | {sig} | {zh} | {tables} | {widths} | {meaning} | {status} |")
    if seen != set(named) or set(remaining) != {h for h, n in named.items() if n[0] == "未知"}:
        raise ValueError("hash sets mismatch")
    header = ["# 全量字段 Hash 字典","","返回 [索引](README.md) · [字段名称恢复证据](../Field-Names.md) · [最新残余字段证据](../../../../research/hash008h/residual_fields.json)。","","原生字段名以 CRC32 匹配签名候选展示，不等同于原版明文或业务语义确认。中文为研究用简体中文释义（术语组合翻译，未识别缩写保留原文），不是游戏官方译名。同 Hash 不保证跨表类型或语义一致。",""]
    header += [f"共 {len(rows)} 个 Hash；CRC 候选 {count} 个（{count/len(rows)*100:.2f}%），原名未恢复 {len(rows)-count} 个。", ""]
    header += ["| Hash | CRC 匹配签名（候选） | 简体中文释义 | 表数 | 字段跨度集合 | 已登记解释（按表） | 证据状态 |","| --- | --- | --- | ---: | --- | --- | --- |"]
    return "\n".join(header + rows) + "\n"


TABLE_NOTE = "英文名称及类型为 CRC32 签名候选，不等同于原版明文；中文取自统一字典。跨度为物理字段间距，可能包含填充。业务证据仅采用当前表、当前偏移的已登记解释或残余字段记录；无证据不推断。"
TABLE_BACK = "返回 [全量索引](README.md) · [统一字段字典](Field-Hashes.md) · [名称恢复证据](../Field-Names.md) · [残余字段证据](../../../../research/hash008h/residual_fields.json)。"
TABLE_HEADER = "| Hash | 英文名称（CRC 候选） | 简体中文释义 | 偏移 | 跨度 | 数据类型（CRC 候选） | 当前解释 | 业务证据 |"
TABLE_SEPARATOR = "| --- | --- | --- | ---: | ---: | --- | --- | --- |"

def signature_parts(signature):
    if signature == "未知":
        return "未知", "未知"
    names, types = [], []
    for sig in signature.split("; "):
        if sig.endswith(".hshCstringRef"):
            names.append(sig.removesuffix(".hshCstringRef"))
            types.append("hshCstringRef")
        else:
            name, kind = sig.rsplit(" ", 1)
            names.append(name)
            types.append(kind)
    return "；".join(names), "；".join(types)

def table_cells(line):
    return [x.strip() for x in re.split(r"(?<!\\)\|", line)[1:-1]]

def safe_cell(value):
    return str(value).replace("|", r"\|").replace("\r\n", " ").replace("\n", " ")

def enrich_tables(docs, global_text, residual):
    """Re-render table-local fields from the single rendered dictionary; retain raw layout."""
    glossary = {}
    for line in global_text.splitlines():
        if re.match(r"^\| hash_[0-9A-F]{8} \|", line):
            cells = table_cells(line)
            if len(cells) != 7 or cells[0] in glossary:
                raise ValueError("invalid global dictionary row: " + line)
            glossary[cells[0]] = cells
    remaining = {"hash_" + e["hash"]: e for e in residual}
    seen, counts, matched = set(), {}, set()
    outputs = {}
    for path in sorted(docs.glob("table-*.md")):
        lines = path.read_text(encoding="utf-8").splitlines()
        table = lines[0].removeprefix("# ").removesuffix(".bcsv")
        output = []
        for line in lines:
            if line.startswith("返回 [全量索引]"):
                output.append(TABLE_BACK)
            elif line == TABLE_NOTE:
                continue
            elif line == "| Hash | 偏移 | 跨度 | 当前解释 |" or line == TABLE_HEADER:
                if output and output[-1] == "" and len(output) > 1 and output[-2] == "":
                    output.pop()
                output.extend([TABLE_NOTE, "", TABLE_HEADER])
            elif line in ("| --- | ---: | ---: | --- |", TABLE_SEPARATOR):
                output.append(TABLE_SEPARATOR)
            elif re.match(r"^\| hash_[0-9A-F]{8} \|", line):
                cells = table_cells(line)
                if len(cells) == 4:
                    h, off, width, meaning = cells
                elif len(cells) == 8:
                    h, _, _, off, width, _, meaning, _ = cells
                    meaning = meaning.replace(r"\|", "|")
                else:
                    raise ValueError("invalid table row: " + line)
                key = (table, h, int(off))
                if key in seen or h not in glossary:
                    raise ValueError("duplicate or missing hash: " + str(key))
                seen.add(key)
                counts[h] = counts.get(h, 0) + 1
                _, sig, zh, *_ = glossary[h]
                name, kind = signature_parts(sig)
                evidence = "未登记表级业务证据" if meaning == "未知，保留原值" else "表级解析字典（TYPED）"
                e = remaining.get(h)
                if e and any(o["table"] == table and o["offset"] == int(off) for o in e["occurrences"]):
                    matched.add(key)
                    evidence += "；" + e["semantic_status"] + "：" + e["observation"]
                    if e["native_functions_ghidra_va"]:
                        evidence += "；Ghidra VA：" + ", ".join(e["native_functions_ghidra_va"])
                    if e["native_read_width"] is not None:
                        evidence += "；原生读取 " + str(e["native_read_width"]) + " B"
                if sig == "未知" and key not in matched:
                    raise ValueError("missing table-local residual record: " + str(key))
                output.append("| " + " | ".join(map(safe_cell, (h, name, zh, off, width, kind, meaning, evidence))) + " |")
            else:
                output.append(line)
        outputs[path] = "\n".join(output) + "\n"
    if not outputs:
        return
    expected = {h: int(row[3]) for h, row in glossary.items()}
    if counts != expected:
        raise ValueError("table/global field occurrence counts differ")
    expected_residual = {(o["table"], h, o["offset"]) for h, e in remaining.items() for o in e["occurrences"]}
    if matched != expected_residual:
        raise ValueError("residual occurrence coverage differs")
    for path, content in outputs.items():
        path.write_text(content, encoding="utf-8")

def update(path=TARGET):
    residual = json.loads(RESIDUAL.read_text(encoding="utf-8"))["fields"]
    content = render(path.read_text(encoding="utf-8"), NAMES.read_text(encoding="utf-8"),
                     residual, json.loads(GLOSSARY.read_text(encoding="utf-8")))
    enrich_tables(path.parent, content, residual)
    path.write_text(content, encoding="utf-8")

if __name__ == "__main__":
    import argparse
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--target", type=Path, default=TARGET)
    update(parser.parse_args().target)
