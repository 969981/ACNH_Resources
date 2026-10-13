#!/usr/bin/env python3
"""ACNH 3.0.3 read-only RomFS conversion into a source-path mirror.

Every transformation is explicitly recorded. Unknown bytes never become fake JSON.
Run from the repository root: python scripts/unpack_acnh.py --all --resume
"""
from __future__ import annotations

import argparse
import csv
import hashlib
import json
import os
from pathlib import Path
import sys
import tempfile
from datetime import datetime, timezone

from acnh_formats import (
    FormatError, detect, decompress, inspect_binary, parse_bcsv,
    parse_byml, parse_msbt, parse_sarc, safe_member_name,
)

VERSION = "acnh303-unpack-0.1.0"
NCA = "e10617820db06889e1638499478da0de_NCA"
MAX_SOURCE_BYTES = 256 * 1024 * 1024
MAX_OUTPUT_BYTES = 256 * 1024 * 1024
MAX_MEMBER_BYTES = 128 * 1024 * 1024
MAX_MEMBERS = 30000
TYPES = {
    "bcsv": "tables", "byml": "byml", "msbt": "messages",
    "msbp": "messages", "sarc": "archives", "zstd": "compressed",
    "yaz0": "compressed", "bfevfl": "events",
}
FIELDS = [
    "source_path", "source_size", "source_sha256", "detected_format",
    "parser", "parser_version", "status", "outputs",
    "component_status", "records", "warning", "error",
]
SOURCE_FIELDS = ("source_path", "source_size", "source_sha256", "detected_format")


def json_text(obj: object) -> bytes:
    return (json.dumps(obj, ensure_ascii=False, sort_keys=True, indent=2, allow_nan=False) + "\n").encode("utf-8")


def sha(data: bytes) -> str:
    return hashlib.sha256(data).hexdigest()


def hash_file(path: Path) -> str:
    h = hashlib.sha256()
    with path.open("rb") as f:
        for chunk in iter(lambda: f.read(1 << 20), b""):
            h.update(chunk)
    return h.hexdigest()


def atomic_write(path: Path, data: bytes) -> None:
    path.parent.mkdir(parents=True, exist_ok=True)
    temp = None
    try:
        with tempfile.NamedTemporaryFile(dir=path.parent, prefix="._acnh_", delete=False) as out:
            temp = Path(out.name)
            out.write(data)
            out.flush()
            os.fsync(out.fileno())
        os.replace(temp, path)
    finally:
        if temp is not None and temp.exists():
            temp.unlink()


def write_csv(path: Path, rows: list[dict], headers: list[str]) -> None:
    import io
    stream = io.StringIO(newline="")
    writer = csv.DictWriter(stream, fieldnames=headers, extrasaction="ignore", lineterminator="\n")
    writer.writeheader()
    writer.writerows(rows)
    atomic_write(path, stream.getvalue().encode("utf-8-sig"))


def check_target(root: Path, relative: Path) -> Path:
    if relative.is_absolute() or any(p in ("..", "") for p in relative.parts):
        raise FormatError("output path traversal")
    target = root.joinpath(relative)
    if not target.resolve().is_relative_to(root.resolve()):
        raise FormatError("output path escapes Unpack via a symlink")
    return target


def guess_path(src: Path, kind: str) -> Path:
    # Primary outputs preserve all parents, changing only the last extension.
    if kind in ("bcsv", "byml", "msbt", "bfevfl", "msbp", "sarc"):
        return src.with_suffix(".json")
    if src.name.endswith(".sarc.zs"):
        return src.with_suffix("").with_suffix(".json")
    if kind in ("zstd", "yaz0"):
        return src.with_suffix(".json")
    return src.with_name(src.name + ".json")


def source_files(romfs: Path):
    for path in sorted(romfs.rglob("*"), key=lambda p: p.relative_to(romfs).as_posix()):
        if path.is_symlink():
            raise FormatError("source contains symlink: " + str(path))
        if path.is_file():
            yield path


def load_manifest(path: Path) -> dict[str, dict]:
    if not path.exists():
        return {}
    payload = json.loads(path.read_text("utf-8"))
    if not isinstance(payload, list):
        raise FormatError("manifest.json is not an array")
    return {r["source_path"]: r for r in payload}


def paths_valid(root: Path, record: dict) -> bool:
    for output in record.get("outputs", []):
        try:
            path = check_target(root, Path(output["path"]))
            if not path.is_file() or path.stat().st_size != output["size"] or hash_file(path) != output["sha256"]:
                return False
        except (OSError, KeyError, ValueError, FormatError):
            return False
    return True


class Exporter:
    def __init__(self, root: Path, out: Path, old: dict, extract_members: bool, max_source: int):
        self.root = root
        self.out = out
        self.old = old
        self.extract_members = extract_members
        self.max_source = max_source
        self.owners = {}
        for source, rec in old.items():
            for output in rec.get("outputs", []):
                self.owners[output["path"].casefold()] = source
        self.claimed: dict[str, str] = {}

    def emit(self, source: str, relative: Path, data: bytes, outputs: list[dict]) -> None:
        if len(data) > MAX_OUTPUT_BYTES:
            raise FormatError("individual output exceeds safety limit")
        key = relative.as_posix().casefold()
        prior = self.claimed.get(key, self.owners.get(key))
        if prior is not None and prior != source:
            raise FormatError("output collision with " + prior + ": " + relative.as_posix())
        target = check_target(self.out, relative)
        if target.exists() and prior is None:
            raise FormatError("refusing to overwrite untracked output: " + str(relative))
        self.claimed[key] = source
        if not target.exists() or hash_file(target) != sha(data):
            atomic_write(target, data)
        outputs.append({"path": relative.as_posix(), "sha256": sha(data), "size": len(data)})

    def process_member(
        self, owner: str, dest: Path, name: str, raw: bytes, outputs: list[dict],
    ) -> str:
        """Keep member bytes and decode recognizable text/table containers beside them."""
        name = safe_member_name(name)
        if len(raw) > MAX_MEMBER_BYTES:
            return "unsupported_member_too_large"
        rel = dest / Path(name)
        self.emit(owner, rel, raw, outputs)
        kind = detect(raw)
        if kind == "byml":
            self.emit(owner, rel.with_suffix(".json"), json_text(parse_byml(raw)), outputs)
            return "converted_byml"
        if kind == "bcsv":
            meta, records = parse_bcsv(raw)
            self.emit(owner, rel.with_suffix(".json"), json_text(meta), outputs)
            self.emit(owner, rel.with_suffix(".csv"), make_csv(records, ["_row_index", "_row_offset_raw"] + [f["name"] for f in meta["columns"]]), outputs)
            return "converted_bcsv"
        if kind == "msbt":
            self.emit(owner, rel.with_suffix(".json"), json_text(parse_msbt(raw)), outputs)
            return "converted_msbt"
        return "raw_preserved_" + kind

    def convert(self, source: Path, previous: dict | None = None) -> dict:
        rel_source = source.relative_to(self.root)
        src = rel_source.as_posix()
        size = source.stat().st_size
        digest = hash_file(source)
        result = dict(
            source_path=src, source_size=size, source_sha256=digest,
            detected_format="unknown", parser="acnh_formats",
            parser_version=VERSION, status="unsupported", outputs=[],
            component_status="", records=0, warning="", error="",
            extract_members=self.extract_members,
        )
        if previous and previous.get("source_sha256") == digest and previous.get("parser_version") == VERSION and previous.get("extract_members") == self.extract_members and paths_valid(self.out, previous):
            return previous
        if size > self.max_source:
            result["warning"] = "Source exceeds --max-source-mb; SHA-256 recorded; no parse attempted"
            return result
        try:
            raw = source.read_bytes()
            kind = detect(raw)
            result["detected_format"] = kind
            dst_root = Path(NCA) / "1" / rel_source
            outputs = result["outputs"]
            if kind == "bcsv":
                meta, rows = parse_bcsv(raw)
                self.emit(src, dst_root.with_suffix(".json"), json_text(meta), outputs)
                self.emit(src, dst_root.with_suffix(".csv"), make_csv(rows, ["_row_index", "_row_offset_raw"] + [f["name"] for f in meta["columns"]]), outputs)
                result.update(status="converted", records=len(rows), component_status="bcsv=raw_columns")
                result["warning"] = meta["warning"]
            elif kind == "byml":
                parsed = parse_byml(raw)
                self.emit(src, dst_root.with_suffix(".json"), json_text(parsed), outputs)
                result.update(status="converted", records=1, component_status="byml=decoded")
            elif kind == "msbt":
                parsed = parse_msbt(raw)
                self.emit(src, dst_root.with_suffix(".json"), json_text(parsed), outputs)
                result.update(status="converted", records=len(parsed["entries"]), component_status="msbt=text_labels")
            elif kind in ("zstd", "yaz0", "sarc"):
                if kind == "sarc":
                    unpacked, codec = raw, "none"
                else:
                    unpacked, codec = decompress(raw)
                inner = detect(unpacked)
                result["component_status"] = codec + "=decoded;inner=" + inner
                suffix = {
                    "sarc": ".sarc", "byml": ".byml", "msbt": ".msbt",
                    "bcsv": ".bcsv", "bfres": ".bfres", "bntx": ".bntx",
                    "bflyt": ".bflyt", "bflan": ".bflan",
                }.get(inner, ".bin")
                base = dst_root.with_suffix("") if kind in ("zstd", "yaz0") else dst_root
                if kind == "sarc":
                    archive_base = dst_root.with_suffix("")
                else:
                    archive_base = base.with_suffix("") if base.suffix == ".sarc" else base
                raw_target = base if base.suffix == suffix else Path(str(base) + suffix)
                if kind != "sarc":
                    self.emit(src, raw_target, unpacked, outputs)
                if inner == "sarc":
                    items, members = parse_sarc(unpacked, MAX_MEMBERS)
                    dest = archive_base
                    self.emit(src, Path(str(dest) + ".json"), json_text({"format": "SARC", "codec": codec, "members": items}), outputs)
                    component = ["sarc=indexed"]
                    if self.extract_members:
                        dest = dest / "_members"
                        for name, blob in members:
                            component.append(self.process_member(src, dest, name, blob, outputs))
                    else:
                        component.append("members=not_extracted")
                    result.update(status="converted" if self.extract_members else "partial", records=len(items))
                    result["component_status"] += ";" + ";".join(sorted(set(component)))
                elif inner == "byml":
                    self.emit(src, base.with_suffix(".json"), json_text(parse_byml(unpacked)), outputs)
                    result.update(status="converted", records=1)
                elif inner == "msbt":
                    parsed = parse_msbt(unpacked)
                    self.emit(src, base.with_suffix(".json"), json_text(parsed), outputs)
                    result.update(status="converted", records=len(parsed["entries"]))
                elif inner == "bcsv":
                    meta, rows = parse_bcsv(unpacked)
                    self.emit(src, base.with_suffix(".json"), json_text(meta), outputs)
                    self.emit(src, base.with_suffix(".csv"), make_csv(rows, ["_row_index", "_row_offset_raw"] + [f["name"] for f in meta["columns"]]), outputs)
                    result.update(status="converted", records=len(rows), warning=meta["warning"])
                else:
                    result.update(status="partial", warning="Container expanded; inner format not semantically decoded")
                    self.emit(src, base.with_suffix(".json"), json_text(inspect_binary(unpacked)) if inner != "unknown" else json_text({"format": "unknown", "size": len(unpacked), "magic_hex": unpacked[:16].hex(), "status": "structure_only"}), outputs)
            elif kind in ("bfevfl", "msbp", "bfres", "bntx", "bflyt", "bflan"):
                self.emit(src, dst_root.with_suffix(".json"), json_text(inspect_binary(raw)), outputs)
                result.update(status="partial", component_status="header=identified", warning="Structure-only: requires a verified dedicated decoder")
            else:
                result.update(status="unsupported", component_status="format=unknown")
        except (OSError, ValueError, FormatError, UnicodeError) as exc:
            result["status"] = "failed"
            result["error"] = f"{type(exc).__name__}: {exc}"
        return result


def make_csv(records: list[dict], fields: list[str]) -> bytes:
    import io
    stream = io.StringIO(newline="")
    writer = csv.DictWriter(stream, fieldnames=fields, extrasaction="ignore", lineterminator="\n")
    writer.writeheader()
    writer.writerows(records)
    return stream.getvalue().encode("utf-8-sig")


def main(argv: list[str] | None = None) -> int:
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument("--root", type=Path, default=Path("."))
    ap.add_argument("--out", type=Path, default=Path("Unpack"))
    scope = ap.add_mutually_exclusive_group()
    scope.add_argument("--all", action="store_true")
    scope.add_argument("--file", help="Relative to RomFS <NCA>/1 or just its contents")
    scope.add_argument("--kind", choices=("tables", "byml", "messages", "archives", "compressed", "events", "other"))
    scope.add_argument("--verify", action="store_true")
    ap.add_argument("--dry-run", action="store_true")
    ap.add_argument("--resume", action="store_true")
    ap.add_argument("--extract-members", action="store_true")
    ap.add_argument("--strict", action="store_true")
    ap.add_argument("--max-source-mb", type=int, default=256)
    args = ap.parse_args(argv)
    root = args.root.resolve()
    romfs = root / NCA / "1"
    out = (root / args.out).resolve()
    if not romfs.is_dir():
        ap.error(f"RomFS missing: {romfs}")
    if out == romfs or out.is_relative_to(romfs) or romfs.is_relative_to(out):
        ap.error("Output must be outside source tree, without encompassing source")
    if args.max_source_mb < 1 or args.max_source_mb > 1024:
        ap.error("invalid source size limit")
    meta = out / "_meta"
    old = load_manifest(meta / "manifest.json")
    if args.verify:
        if not old:
            print("No existing manifest to verify", file=sys.stderr)
            return 1
        problems = []
        for rec in old.values():
            src = romfs / rec["source_path"]
            if not src.is_file() or hash_file(src) != rec["source_sha256"]:
                problems.append("SOURCE " + rec["source_path"])
            if not paths_valid(out, rec):
                problems.append("OUTPUT " + rec["source_path"])
            if rec["status"] == "failed":
                problems.append("FAILED " + rec["source_path"])
        summary_path = meta / "summary.json"
        if args.strict and summary_path.is_file():
            previous_summary = json.loads(summary_path.read_text("utf-8"))
            if previous_summary.get("scope") == "all":
                scanned = {p.relative_to(romfs).as_posix() for p in source_files(romfs)}
                if set(old) != scanned:
                    problems.append("COVERAGE manifest != current RomFS file set")
        print(json.dumps({"verified": len(old), "errors": problems[:100], "error_count": len(problems)}, indent=2))
        return 1 if problems else 0
    if args.file:
        name = args.file.replace("\\", "/")
        prefix = NCA + "/1/"
        if name.startswith(prefix):
            name = name[len(prefix):]
        selected = (romfs / name).resolve()
        if not selected.is_file() or not selected.is_relative_to(romfs):
            ap.error("file must be a regular file beneath RomFS")
        paths = [selected]
        scope_name = "file"
    else:
        paths = list(source_files(romfs))
        scope_name = "all" if args.all or args.kind is None else args.kind
        if args.kind:
            def belongs(p: Path) -> bool:
                n = p.name.lower()
                folder = p.relative_to(romfs).parts[0]
                if args.kind == "tables":
                    return n.endswith(".bcsv")
                if args.kind == "byml":
                    return n.endswith(".byml")
                if args.kind == "messages":
                    return folder == "Message" or n.endswith((".msbt", ".msbp"))
                if args.kind == "archives":
                    return n.endswith((".sarc", ".sarc.zs", ".szs", ".pack"))
                if args.kind == "compressed":
                    return n.endswith((".zs", ".szs"))
                if args.kind == "events":
                    return n.endswith(".bfevfl")
                return True
            paths = [p for p in paths if belongs(p)]
    if args.dry_run:
        print(json.dumps({
            "scope": scope_name, "source_count": len(paths),
            "mirrored_base": f"Unpack/{NCA}/1",
            "example_paths": [str(Path(NCA) / "1" / p.relative_to(romfs)) for p in paths[:15]],
            "note": "No bytes read or files written; compressed inner formats are determined during conversion.",
        }, ensure_ascii=False, indent=2))
        return 0
    exporter = Exporter(romfs, out, old, args.extract_members, args.max_source_mb * (1 << 20))
    records = {} if scope_name == "all" else dict(old)
    selected_records = []
    for idx, p in enumerate(paths, start=1):
        relative = p.relative_to(romfs).as_posix()
        r = exporter.convert(p, old.get(relative) if args.resume else None)
        records[relative] = r
        selected_records.append(r)
        if idx % 500 == 0:
            print(f"{idx}/{len(paths)} processed", flush=True)
    summary = {
        "tool_version": VERSION, "game_version": "3.0.3", "nca": NCA,
        "scope": scope_name, "source_count": len(paths),
        "manifest_record_count": len(records),
        "generated_at_utc": datetime.now(timezone.utc).isoformat(),
        "extract_members": args.extract_members,
        "status_counts": {k: sum(1 for r in selected_records if r["status"] == k) for k in ("converted", "partial", "unsupported", "failed")},
        "output_count": sum(len(r["outputs"]) for r in selected_records),
        "note": "Status is relative to selected scope; source bytes unchanged. No fabricated semantic fields.",
    }
    ordered = [records[k] for k in sorted(records)]
    atomic_write(meta / "manifest.json", json_text(ordered))
    write_csv(meta / "manifest.csv", [
        {**r, "outputs": json.dumps(r["outputs"], sort_keys=True, ensure_ascii=False)}
        for r in ordered
    ], FIELDS)
    write_csv(meta / "source_manifest.csv", selected_records, list(SOURCE_FIELDS))
    write_csv(meta / "unsupported.csv", [r for r in selected_records if r["status"] == "unsupported"], FIELDS)
    write_csv(meta / "errors.csv", [r for r in selected_records if r["status"] == "failed"], FIELDS)
    atomic_write(meta / "summary.json", json_text(summary))
    print(json.dumps(summary, ensure_ascii=False, indent=2))
    return 1 if args.strict and summary["status_counts"]["failed"] else 0


if __name__ == "__main__":
    raise SystemExit(main())
