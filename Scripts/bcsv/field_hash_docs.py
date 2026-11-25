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

def update(path=TARGET):
    content = render(path.read_text(encoding="utf-8"), NAMES.read_text(encoding="utf-8"),
                     json.loads(RESIDUAL.read_text(encoding="utf-8"))["fields"],
                     json.loads(GLOSSARY.read_text(encoding="utf-8")))
    path.write_text(content, encoding="utf-8")

if __name__ == "__main__":
    import argparse
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--target", type=Path, default=TARGET)
    update(parser.parse_args().target)
