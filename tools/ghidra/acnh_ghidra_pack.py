#!/usr/bin/env python3
"""Lossless Ghidra project/SQLite shards, JSONL-safe shards and mergeable index."""
from __future__ import annotations
import argparse
import hashlib
import json
import os
from pathlib import Path
import shutil
import sqlite3
import tempfile

CHUNK_BYTES = 48 * 1024 * 1024
JSONL_BYTES = 12 * 1024 * 1024

def digest_file(path: Path) -> str:
    h = hashlib.sha256()
    with path.open("rb") as f:
        for block in iter(lambda: f.read(1024 * 1024), b""):
            h.update(block)
    return h.hexdigest()

def write_json(path: Path, value: dict) -> None:
    path.parent.mkdir(parents=True, exist_ok=True)
    temp = path.with_name(path.name + ".tmp")
    temp.write_text(json.dumps(value, ensure_ascii=False, sort_keys=True, indent=2) + "\n", encoding="utf-8")
    os.replace(temp, path)

def split_bytes(source: Path, dest: Path, blocksize: int = CHUNK_BYTES) -> dict:
    if blocksize <= 0 or blocksize >= 100_000_000:
        raise ValueError("Each raw fragment must be smaller than 100 MB")
    dest.mkdir(parents=True, exist_ok=True)
    name = source.name
    parts = []
    with source.open("rb") as f:
        i = 0
        while data := f.read(blocksize):
            filename = f"{name}.part-{i:05d}"
            target = dest / filename
            target.write_bytes(data)
            parts.append({"file": filename, "size": len(data), "sha256": hashlib.sha256(data).hexdigest()})
            i += 1
    for stale in dest.glob(name + ".part-*"):
        if stale.name not in {item["file"] for item in parts}:
            stale.unlink()
    manifest = {"format": "raw-byte-concatenation-v1", "filename": name,
                "bytes": source.stat().st_size, "sha256": digest_file(source),
                "chunk_size": blocksize, "parts": parts}
    write_json(dest / f"{name}.manifest.json", manifest)
    return manifest

def join_bytes(manifest_file: Path, dest: Path) -> None:
    manifest = json.loads(manifest_file.read_text(encoding="utf-8"))
    if manifest["format"] != "raw-byte-concatenation-v1":
        raise ValueError("Not a byte-fragment manifest")
    dest.parent.mkdir(parents=True, exist_ok=True)
    h = hashlib.sha256()
    count = 0
    temp = dest.with_name(dest.name + ".tmp")
    try:
        with temp.open("wb") as out:
            for part in manifest["parts"]:
                partpath = manifest_file.parent / part["file"]
                if partpath.stat().st_size != part["size"] or digest_file(partpath) != part["sha256"]:
                    raise ValueError(f"Invalid part: {partpath}")
                with partpath.open("rb") as f:
                    for block in iter(lambda: f.read(1024 * 1024), b""):
                        out.write(block)
                        h.update(block)
                        count += len(block)
        if count != manifest["bytes"] or h.hexdigest() != manifest["sha256"]:
            raise ValueError("Reassembled file differs from original")
        os.replace(temp, dest)
    finally:
        temp.unlink(missing_ok=True)

def shard_jsonl(source: Path, dest: Path, maxbytes: int = JSONL_BYTES) -> dict:
    """Each shard holds complete, validated JSON object lines only."""
    dest.mkdir(parents=True, exist_ok=True)
    parts = []
    name = source.stem
    out = None
    total = size = lines = 0
    hasher = hashlib.sha256()
    try:
        with source.open("rb") as inp:
            for line in inp:
                if not line.endswith(b"\n"):
                    raise ValueError(f"Partial JSONL line in {source}")
                item = json.loads(line)
                if not isinstance(item, dict):
                    raise ValueError("Expected a JSON object per line")
                if len(line) > maxbytes:
                    raise ValueError("One JSONL row exceeds the fragment size")
                if out is None or size + len(line) > maxbytes:
                    if out:
                        out.close()
                    filename = f"{name}.part-{len(parts):05d}.ndjson"
                    out = (dest / filename).open("wb")
                    parts.append({"file": filename, "bytes": 0, "lines": 0})
                    size = 0
                out.write(line)
                hasher.update(line)
                parts[-1]["bytes"] += len(line)
                parts[-1]["lines"] += 1
                size += len(line)
                total += 1
    finally:
        if out:
            out.close()
    for part in parts:
        part["sha256"] = digest_file(dest / part["file"])
    manifest = {"format": "jsonl-whole-lines-v1", "input": source.name,
                "bytes": source.stat().st_size, "sha256": hasher.hexdigest(),
                "lines": total, "parts": parts}
    write_json(dest / f"{name}.manifest.json", manifest)
    return manifest

def records(path: Path):
    if not path.exists():
        return
    with path.open("r", encoding="utf-8") as f:
        for n, line in enumerate(f, 1):
            if not line.endswith("\n"):
                raise ValueError(f"Partial line at {path}:{n}")
            yield json.loads(line)

def schema(db: sqlite3.Connection) -> None:
    db.executescript("""
    PRAGMA journal_mode=DELETE;
    CREATE TABLE IF NOT EXISTS functions (
      idx INTEGER PRIMARY KEY, address TEXT NOT NULL UNIQUE,
      name TEXT, namespace TEXT, signature TEXT, byte_count INTEGER,
      is_thunk INTEGER, is_external INTEGER, decompile_status TEXT,
      c_path TEXT, error TEXT
    );
    CREATE TABLE IF NOT EXISTS symbols (
      address TEXT NOT NULL, name TEXT NOT NULL, symbol_type TEXT,
      source_type TEXT, PRIMARY KEY(address,name,symbol_type)
    );
    CREATE TABLE IF NOT EXISTS xrefs (
      source TEXT NOT NULL, target TEXT NOT NULL, ref_type TEXT,
      operand_index INTEGER,
      PRIMARY KEY(source,target,ref_type,operand_index)
    );
    CREATE TABLE IF NOT EXISTS metadata (name TEXT PRIMARY KEY, value TEXT);
    CREATE INDEX IF NOT EXISTS idx_funcs_name ON functions(name);
    CREATE INDEX IF NOT EXISTS idx_xrefs_target ON xrefs(target);
    """)

def ingest(batch: Path, root: Path, work: Path, chunk_mib: int) -> dict:
    root.mkdir(parents=True, exist_ok=True)
    work.mkdir(parents=True, exist_ok=True)
    report = json.loads((batch / "export-summary.json").read_text(encoding="utf-8"))
    progress_file = root / "progress.json"
    progress = json.loads(progress_file.read_text(encoding="utf-8")) if progress_file.exists() else {
        "next_index": 0, "batch_count": 0, "functions_exported": 0,
        "decompiled_ok": 0, "decompiled_failed": 0
    }
    start = int(report["start_index"])
    if start != progress["next_index"]:
        raise ValueError(f"Discontinuous batch: incoming {start}, expected {progress['next_index']}")
    if int(report["processed"]) <= 0 and int(report["total_functions"]) > start:
        raise ValueError("No functions exported; not advancing the checkpoint")
    input_db = root / "sqlite" / "acnh303_ghidra.sqlite.manifest.json"
    dbpath = work / "acnh303_ghidra.sqlite"
    if input_db.exists():
        join_bytes(input_db, dbpath)
    with sqlite3.connect(dbpath) as db:
        schema(db)
        indices = []
        success = failure = 0
        for r in records(batch / "functions.ndjson"):
            idx = int(r["index"])
            indices.append(idx)
            state = r["decompile_status"]
            if state == "ok":
                rel = r.get("c_path")
                if not rel or Path(rel).is_absolute() or ".." in Path(rel).parts:
                    raise ValueError(f"Invalid C file path for function {idx}: {rel}")
                csrc = batch / rel
                if not csrc.is_file() or csrc.stat().st_size >= 100_000_000:
                    raise ValueError(f"Missing/oversize decompiled C for function {idx}: {csrc}")
            success += state == "ok"
            failure += state != "ok"
            db.execute("""INSERT OR REPLACE INTO functions
              (idx,address,name,namespace,signature,byte_count,is_thunk,is_external,
               decompile_status,c_path,error) VALUES (?,?,?,?,?,?,?,?,?,?,?)""",
               (idx,r["address"],r.get("name"),r.get("namespace"),
                r.get("signature"),r.get("byte_count"),
                int(bool(r.get("is_thunk"))),int(bool(r.get("is_external"))),
                state,r.get("c_path"),r.get("error")))
        expected = list(range(start, start + int(report["processed"])))
        if indices != expected:
            raise ValueError("Function indices are missing, duplicated or unordered")
        if success != int(report["decompiled_ok"]) or failure != int(report["decompiled_failed"]):
            raise ValueError("Decompiler counters do not match the exported records")
        for s in records(batch / "symbols.ndjson"):
            db.execute("""INSERT OR IGNORE INTO symbols VALUES (?,?,?,?)""",
                       (s["address"],s["name"],s.get("symbol_type"),s.get("source_type")))
        for r in records(batch / "xrefs.ndjson"):
            db.execute("""INSERT OR IGNORE INTO xrefs VALUES (?,?,?,?)""",
                       (r["source"],r["target"],r.get("ref_type"),r.get("operand_index")))
        db.execute("INSERT OR REPLACE INTO metadata VALUES (?,?)",
                   ("ghidra_version", "12.2"))
        db.commit()
        check = db.execute("PRAGMA integrity_check").fetchone()[0]
        if check != "ok":
            raise ValueError(f"SQLite integrity_check failed: {check}")
        total_in_db = db.execute("SELECT COUNT(*) FROM functions").fetchone()[0]
    # Merge is verified before any published checkpoint is updated.
    out_c = root / "c"
    if (batch / "c").exists():
        for src in (batch / "c").rglob("*.c"):
            dst = out_c / src.relative_to(batch / "c")
            dst.parent.mkdir(parents=True, exist_ok=True)
            shutil.copy2(src, dst)
    batch_name = f"batch-{start:08d}"
    ndjson = root / "ndjson" / batch_name
    for name in ("functions", "symbols", "xrefs"):
        f = batch / f"{name}.ndjson"
        if f.is_file():
            shard_jsonl(f, ndjson / name)
    write_json(ndjson / "export-summary.json", report)
    chunks = split_bytes(dbpath, root / "sqlite", chunk_mib * 1024 * 1024)
    progress.update({
        "next_index": start + len(indices),
        "total_functions": int(report["total_functions"]),
        "batch_count": progress["batch_count"] + 1,
        "functions_exported": total_in_db,
        "decompiled_ok": progress["decompiled_ok"] + success,
        "decompiled_failed": progress["decompiled_failed"] + failure,
        "complete": start + len(indices) == int(report["total_functions"]),
        "sqlite_bytes": chunks["bytes"],
        "sqlite_sha256": chunks["sha256"],
        "latest_batch": batch_name
    })
    if total_in_db != progress["next_index"]:
        raise ValueError("SQLite row count does not equal checkpoint")
    write_json(progress_file, progress)
    return progress

def main():
    parser = argparse.ArgumentParser(description=__doc__)
    sp = parser.add_subparsers(dest="cmd", required=True)
    p = sp.add_parser("split")
    p.add_argument("source", type=Path)
    p.add_argument("destination", type=Path)
    p.add_argument("--chunk-mib", type=int, default=48)
    p = sp.add_parser("join")
    p.add_argument("manifest", type=Path)
    p.add_argument("destination", type=Path)
    p = sp.add_parser("next")
    p.add_argument("root", type=Path)
    p = sp.add_parser("ingest")
    p.add_argument("--batch", type=Path, required=True)
    p.add_argument("--root", type=Path, required=True)
    p.add_argument("--work", type=Path, required=True)
    p.add_argument("--chunk-mib", type=int, default=48)
    args = parser.parse_args()
    if args.cmd == "split":
        print(json.dumps(split_bytes(args.source,args.destination,args.chunk_mib*1024*1024)))
    elif args.cmd == "join":
        join_bytes(args.manifest,args.destination)
        print(f"Verified: {args.destination}")
    elif args.cmd == "next":
        path = args.root / "progress.json"
        print(json.loads(path.read_text())["next_index"] if path.exists() else 0)
    elif args.cmd == "ingest":
        print(json.dumps(ingest(args.batch,args.root,args.work,args.chunk_mib),indent=2))

if __name__ == "__main__":
    main()
