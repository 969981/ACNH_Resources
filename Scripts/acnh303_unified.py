#!/usr/bin/env python3
"""Unified read-only ACNH 3.0.3 source runner: basic, media, recursive archives.

--all/--file/--kind/--resume/--verify/--strict/--shard/--shards are supported.
Each original is represented once in a persistent SHA-256 verified ledger.
Unlike a media converter exit code, L1 raw extraction never implies L3 or L4.
"""
from __future__ import annotations

import argparse
from collections import Counter
import hashlib
import json
from pathlib import Path
import subprocess
import sys

from acnh_formats import detect
from acnh303_recursive_archive import process_source, clean_source, NCA

VERSION = "acnh303-unified-l0-l3-v1"
GOOD = {"converted", "partial", "raw_extracted", "no_target_leaf", "unsupported"}
MAX_BATCH_DEFAULT = 24


def digest(path: Path) -> str:
    h = hashlib.sha256()
    with path.open("rb") as stream:
        for block in iter(lambda: stream.read(1 << 20), b""):
            h.update(block)
    return h.hexdigest()


def checked_output(out: Path, item: dict) -> None:
    path = (out / clean_source(item["path"])).absolute()
    if not path.resolve().is_relative_to(out.resolve()) or path.is_symlink() or not path.is_file():
        raise ValueError("output missing, symlink or escapes destination: " + item["path"])
    if path.stat().st_size != item["size_bytes"] or digest(path) != item["sha256"]:
        raise ValueError("output size or SHA-256 mismatched: " + item["path"])


def safe_read_ledger(path: Path) -> dict[str, dict]:
    result: dict[str, dict] = {}
    if not path.exists():
        return result
    for line in path.read_text("utf8").splitlines():
        if not line.strip():
            continue
        item = json.loads(line)
        key = item["source_path"]
        if key in result:
            raise ValueError("duplicate original source in ledger: " + key)
        if key != clean_source(key).as_posix():
            raise ValueError("noncanonical source path in ledger")
        result[key] = item
    return result


def persist_ledger(path: Path, records: dict[str, dict]) -> None:
    from acnh303_recursive_archive import atomic_write
    content = "".join(json.dumps(records[name], sort_keys=True, ensure_ascii=False) + "\n"
                      for name in sorted(records))
    atomic_write(path, content.encode("utf8"))


def classify(original: Path, rel: Path, mode: str) -> str:
    if mode != "auto":
        return mode
    with original.open("rb") as file:
        head = file.read(64)
    kind = detect(head)
    if (kind in ("bfres", "bntx", "bwav")
            or rel.parts[0] in ("Model", "Layout") and kind in ("zstd", "yaz0", "sarc")):
        return "media"
    if kind in ("sarc", "zstd", "yaz0"):
        return "archive"
    return "basic"


def select_files(romfs: Path, filename: str | None, kind: str | None,
                 shard: int, shards: int, limit: int) -> list[Path]:
    if not (1 <= shards <= 4096 and 0 <= shard < shards and 0 <= limit <= 1000000):
        raise ValueError("invalid shard/limit")
    if filename:
        rel = clean_source(filename)
        item = romfs / rel
        if not item.is_file() or item.is_symlink() or not item.resolve().is_relative_to(romfs):
            raise ValueError("original --file missing / symlink / traversal")
        return [item]
    if kind and ("/" in kind or "\\" in kind or kind in ("..", ".")):
        raise ValueError("--kind must be one top-level RomFS category")
    files = []
    for path in sorted(romfs.rglob("*"), key=lambda p: p.relative_to(romfs).as_posix()):
        if path.is_symlink():
            raise ValueError("symlink found in immutable source tree")
        if not path.is_file():
            continue
        rel = path.relative_to(romfs)
        if kind and rel.parts[0] != kind:
            continue
        slot = int.from_bytes(hashlib.sha256(rel.as_posix().encode()).digest()[:8], "big") % shards
        if slot != shard:
            continue
        files.append(path)
        if limit and len(files) >= limit:
            break
    return files


def verify_one(romfs: Path, out: Path, record: dict) -> None:
    source = romfs / clean_source(record["source_path"])
    if source.is_symlink() or not source.is_file() or not source.resolve().is_relative_to(romfs):
        raise ValueError("original source absent: " + record["source_path"])
    if source.stat().st_size != record["source_bytes"] or digest(source) != record["source_sha256"]:
        raise ValueError("original source changed: " + record["source_path"])
    for output in record.get("outputs", []):
        checked_output(out, output)


def run_one(root: Path, out: Path, romfs: Path, path: Path,
            mode: str = "auto", materialize_archive: bool = True) -> dict:
    rel = path.relative_to(romfs)
    name = rel.as_posix()
    filehash = digest(path)
    raw_size = path.stat().st_size
    selected_mode = classify(path, rel, mode)
    record = {"schema": VERSION, "source_path": name, "source_bytes": raw_size,
              "source_sha256": filehash, "route": selected_mode,
              "status": "failed", "outputs": [], "evidence_level": "L0",
              "error": None}
    try:
        if selected_mode == "archive":
            result = process_source(root, rel, out, write_leaves=materialize_archive)
            if result["source_sha256"] != filehash:
                raise RuntimeError("archive input changed during processing")
            record["status"] = result["status"]
            record["evidence_level"] = "L1"
            record["outputs"] = result["outputs"]
            record["leaf_count"] = result["leaf_count"]
        else:
            cmd = [sys.executable, str(root / "Scripts" / "mirror_unpack.py"),
                   selected_mode, "--root", str(root), "--out", str(out),
                   "--file", name]
            if selected_mode == "basic":
                cmd.append("--extract-members")
            if selected_mode == "media":
                cmd.extend(["--require", "any"])
            proc = subprocess.run(cmd, capture_output=True, text=True, cwd=root, timeout=300)
            record["tool_exit_code"] = proc.returncode
            if proc.returncode:
                raise RuntimeError("legacy decoder error: " + (proc.stderr + proc.stdout)[-1200:])
            if selected_mode == "basic":
                manifest = json.loads((out / "_meta" / "basic_last_manifest.json").read_text("utf8"))
                matches = [m for m in manifest if m["source_path"] == name and
                           m["source_sha256"] == filehash]
                if len(matches) != 1:
                    raise ValueError("basic last manifest source identity mismatch")
                meta = matches[0]
                record["status"] = meta["status"]
                record["evidence_level"] = "L2" if meta["status"] == "converted" else "L1"
                for entry in meta["outputs"]:
                    canonical = clean_source(entry["path"])
                    if tuple(canonical.parts[:2]) != (NCA, "1"):
                        raise ValueError("legacy basic output outside original mirror")
                    record["outputs"].append({"path": (Path("1") / Path(*canonical.parts[2:])).as_posix(),
                                              "sha256": entry["sha256"], "size_bytes": entry["size"]})
            else:
                logs = (out / "_meta" / "run_log.jsonl").read_text("utf8").splitlines()
                evidence = json.loads(logs[-1])
                if evidence.get("command") != "media" or evidence.get("source") != name:
                    raise ValueError("last media provenance does not match source")
                if evidence["source_sha256"] != filehash:
                    raise ValueError("last media input SHA mismatch")
                record["status"] = ("converted" if evidence["produced"] and
                                    evidence.get("status") == "converted" else
                                    "partial" if evidence["produced"] else
                                    "no_target_leaf")
                record["evidence_level"] = "L3" if evidence["produced"] else "L1"
                for entry in evidence["produced"]:
                    candidate = Path(entry["path"]).absolute()
                    if not candidate.is_relative_to(out):
                        raise ValueError("media output outside UnPack")
                    record["outputs"].append({"path": candidate.relative_to(out).as_posix(),
                                              "sha256": entry["sha256"], "size_bytes": entry["bytes"]})
        for item in record["outputs"]:
            checked_output(out, item)
        if record["status"] not in GOOD and record["status"] not in ("indexed_raw_only",):
            raise ValueError("unknown source status: " + str(record["status"]))
    except (OSError, RuntimeError, ValueError, KeyError, json.JSONDecodeError,
            subprocess.TimeoutExpired) as exc:
        record["status"] = "failed"
        record["outputs"] = []
        record["error"] = f"{type(exc).__name__}: {exc}"[-1600:]
    return record


def main() -> int:
    a = argparse.ArgumentParser(description=__doc__)
    a.add_argument("--root", type=Path, default=Path("."))
    a.add_argument("--out", type=Path, default=Path("UnPack"))
    group = a.add_mutually_exclusive_group()
    group.add_argument("--file")
    group.add_argument("--kind", help="RomFS top-level category, e.g. BDLI")
    group.add_argument("--all", action="store_true")
    a.add_argument("--mode", choices=("auto", "basic", "media", "archive"), default="auto")
    a.add_argument("--resume", action="store_true")
    a.add_argument("--verify", action="store_true")
    a.add_argument("--strict", action="store_true")
    a.add_argument("--shard", type=int, default=0)
    a.add_argument("--shards", type=int, default=1)
    a.add_argument("--limit", type=int, default=MAX_BATCH_DEFAULT,
                   help="Selected sources per run; 0 means all in selected shard")
    a.add_argument("--archive-index-only", action="store_true")
    args = a.parse_args()
    root = args.root.resolve()
    romfs = (root / NCA / "1").resolve()
    out = (root / args.out).resolve()
    if not romfs.is_dir() or out == romfs or out.is_relative_to(romfs) or romfs.is_relative_to(out):
        a.error("source RomFS missing or output overlaps immutable source tree")
    ledger = out / "_meta" / "unified" / "source_manifest.jsonl"
    old = safe_read_ledger(ledger)
    if args.verify:
        errors = []
        for item in old.values():
            try:
                verify_one(romfs, out, item)
            except (OSError, ValueError, KeyError) as exc:
                errors.append(str(exc))
        counts = Counter(row["status"] for row in old.values())
        result = {"verified_records": len(old) - len(errors), "invalid_records": len(errors),
                  "status_counts": dict(counts), "errors": errors[:100]}
        print(json.dumps(result, indent=2))
        return int(bool(errors or (args.strict and ("failed" in counts or not old))))
    files = select_files(romfs, args.file, args.kind, args.shard, args.shards, args.limit)
    if not files:
        print(json.dumps({"status": "no_selected_sources", "count": 0}))
        return 1 if args.strict else 0
    completed = 0
    for index, path in enumerate(files, 1):
        name = path.relative_to(romfs).as_posix()
        if args.resume and name in old and old[name]["status"] != "failed":
            try:
                verify_one(romfs, out, old[name])
                completed += 1
                continue
            except (OSError, ValueError, KeyError):
                pass
        old[name] = run_one(root, out, romfs, path, args.mode,
                            materialize_archive=not args.archive_index_only)
        print(f"{index}/{len(files)} {old[name]['status']} {name}", file=sys.stderr)
    persist_ledger(ledger, old)
    failed = [row for row in old.values() if row["status"] == "failed"]
    print(json.dumps({"selected_sources": len(files), "resumed": completed,
                      "source_records": len(old), "failed_records": len(failed),
                      "states": dict(Counter(r["status"] for r in old.values())),
                      "ledger": str(ledger)}, ensure_ascii=False, indent=2))
    if args.strict and (failed or (args.all and args.shards == 1 and
                                    len(old) != len(select_files(romfs, None, None, 0, 1, 0)))):
        return 1
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
