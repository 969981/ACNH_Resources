#!/usr/bin/env python3
"""Lossless BDLI LBLI section exporter: bounded, provenance preserving, not semantic localization."""
from __future__ import annotations
import argparse
from collections import Counter
import hashlib
import json
from pathlib import Path
from acnh_formats import decompress
from acnh303_bdli import parse_bdli

NCA = "e10617820db06889e1638499478da0de_NCA"
MAX_COMPRESSED = 16 * 1024 * 1024
MAX_EXPANDED = 64 * 1024 * 1024

def sha(blob: bytes) -> str:
    return hashlib.sha256(blob).hexdigest()

def write_json(path: Path, doc: dict) -> None:
    path.parent.mkdir(parents=True, exist_ok=True)
    path.write_text(json.dumps(doc, ensure_ascii=False, indent=2, sort_keys=True) + "\n", encoding="utf-8")

def export_bytes(raw: bytes, dest: Path) -> dict:
    """Call only on a validated BDLI document; return hashes of exact extracted bytes."""
    directory = parse_bdli(raw)
    segments = []
    for section in directory["sections"]:
        start = section["offset_absolute"]
        size = section["byte_length"]
        if start < 0 or size < 0 or start + size > len(raw):
            raise ValueError("section outside raw BDLI")
        item = {"index": section["index"], "identifier_hex": section["identifier_hex"],
                "count_raw": section["count_raw"], "offset": start, "bytes": size,
                "sha256": section["sha256"], "status": "empty" if not size else "raw_extracted"}
        if size:
            buf = raw[start:start+size]
            if sha(buf) != section["sha256"]:
                raise ValueError("BDLI parser and exact chunk hash disagree")
            filename = "lbli_%05d_%s.bin" % (section["index"], section["identifier_hex"])
            target = dest / filename
            target.parent.mkdir(parents=True, exist_ok=True)
            target.write_bytes(buf)
            if sha(target.read_bytes()) != item["sha256"]:
                raise ValueError("section failed output rehash")
            item["output_path"] = target.as_posix()
        segments.append(item)
    return {"format": "BDLI", "original_uncompressed_sha256": sha(raw),
            "original_uncompressed_bytes": len(raw), "directory": directory,
            "sections": segments, "status": "lossless_sections_partial_semantics"}

def run(selection: Path, out: Path, report: Path) -> dict:
    sel = json.loads(selection.read_text(encoding="utf-8"))
    if sel.get("category") != "BDLI" or sel.get("suffix", "").lower() != ".zs":
        raise ValueError("BDLI .zs selection is required")
    if sel["selected_files"] != len(sel["paths"]) or len(set(sel["paths"])) != len(sel["paths"]):
        raise ValueError("duplicate or incomplete selection")
    rows = []
    counts = Counter()
    prefix = NCA + "/1/BDLI/"
    for path in sel["paths"]:
        if not path.startswith(prefix) or ".." in Path(path).parts:
            raise ValueError("unsafe source path")
        rel = path[len(NCA+"/1/"):]
        dst = out / NCA / "1" / (rel + ".sections")
        record = {"source_path": rel, "status": "failed", "source_sha256": "",
                  "parser": "bdli-lbli-lossless-v1"}
        try:
            p = Path(path)
            if p.stat().st_size > MAX_COMPRESSED:
                raise ValueError("compressed source exceeds limit")
            compressed = p.read_bytes()
            record["source_sha256"] = sha(compressed)
            record["source_bytes"] = len(compressed)
            raw,codec = decompress(compressed, MAX_EXPANDED)
            if codec != "zstd":
                raise ValueError("unexpected BDLI compression")
            detail = export_bytes(raw,dst)
            record.update({"status": detail["status"],"uncompressed_sha256":sha(raw),
                           "uncompressed_bytes":len(raw),"section_count":len(detail["sections"]),
                           "raw_sections_written":sum(x["status"]=="raw_extracted" for x in detail["sections"]),
                           "sections":detail["sections"]})
            write_json(dst / "_sections_manifest.json",detail)
            counts["sources_parsed"] += 1
            counts["sections_exported"] += record["raw_sections_written"]
            counts["empty_sections"] += record["section_count"] - record["raw_sections_written"]
        except (ValueError,OSError) as exc:
            record["error"] = str(exc)
            counts["failed_sources"] += 1
        rows.append(record)
        print("BDLI_SECTION",rel,record["status"],record.get("raw_sections_written",0),flush=True)
    result={"schema":"acnh303-bdli-lbli-extracted-v1","selected_sources":len(rows),
            "counts":dict(counts),"records":rows,
            "warning":"Only exact lossless LBLI payloads and known native directory fields; identifier semantics, encoding and localization mapping UNVERIFIED."}
    write_json(report / "report.json",result)
    return result

def main():
    p=argparse.ArgumentParser()
    p.add_argument("--selection",type=Path,default=Path("selection.json"))
    p.add_argument("--out",type=Path,default=Path("Unpack_BDLI_Sections"))
    p.add_argument("--report",type=Path,default=Path("derived/3.0.3/bdli_sections_round9"))
    a=p.parse_args()
    result=run(a.selection,a.out,a.report)
    print("BDLI_SECTION_SUMMARY",json.dumps(result["counts"]),flush=True)
    if result["counts"].get("failed_sources",0):
        raise SystemExit(1)

if __name__=="__main__":
    main()
