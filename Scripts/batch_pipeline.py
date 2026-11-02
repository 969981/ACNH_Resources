#!/usr/bin/env python3
"""Bounded, resumable ACNH 3.0.3 decoder batches with SHA-256 provenance.

Select paths from Git's complete tree (not GitHub's 1000-entry Contents pages),
fetch only selected blobs with sparse checkout, then run the existing *real*
BCSV/BYML/BFRES/BNTX/BWAV decoders. No invented decoded output.
"""
from __future__ import annotations

import argparse
from datetime import datetime, timezone
import hashlib
import json
import os
from pathlib import Path, PurePosixPath
import re
import subprocess
import sys

NCA = "e10617820db06889e1638499478da0de_NCA"
CATEGORIES = {
    "Bcsv": (".bcsv", "basic"),
    "AnimationInfo": (".byml", "basic"),
    "Stage": (".byml", "basic"),
    "Param": (".byml", "basic"),
    "Model": (".zs", "media"),
    "Layout": (".zs", "media"),
    "Sound": (".bwav", "media"),
}
MAX_SELECT = 24
MANIFEST = "batch_selection.json"
RESULT = "batch_result.json"


def sha256(path: Path) -> str:
    h = hashlib.sha256()
    with path.open("rb") as f:
        for chunk in iter(lambda: f.read(1024 * 1024), b""):
            h.update(chunk)
    return h.hexdigest()


def source_rel(text: str) -> Path:
    p = PurePosixPath(text)
    if not text or p.is_absolute() or ":" in text or "\\" in text or any(x == ".." for x in p.parts):
        raise ValueError("unsafe source-relative path: " + text)
    return Path(*p.parts)


def select(root: Path, category: str, shard: int, shards: int, skip: int, count: int) -> dict:
    if category not in CATEGORIES:
        raise ValueError("unsupported category: " + category)
    if not 1 <= shards <= 4096 or not 0 <= shard < shards or skip < 0 or not 1 <= count <= MAX_SELECT:
        raise ValueError("invalid shard/count bounds")
    suffix, mode = CATEGORIES[category]
    prefix = f"{NCA}/1/{category}/"
    raw = subprocess.check_output(["git", "ls-tree", "-rz", "HEAD", "--", prefix], cwd=root)
    candidates = []
    for line in raw.split(b"\0"):
        if not line:
            continue
        metadata, raw_path = line.split(b"\t", 1)
        mode_type, sha = metadata.decode("ascii").rsplit(" ", 1)
        if not mode_type.endswith(" blob"):
            continue
        path = raw_path.decode("utf-8")
        if not path.startswith(prefix) or not path.lower().endswith(suffix):
            continue
        if int.from_bytes(hashlib.sha256(raw_path).digest()[:8], "big") % shards != shard:
            continue
        candidates.append({"path": path, "git_blob_sha": sha})
    candidates.sort(key=lambda x: x["path"])
    chosen = candidates[skip:skip + count]
    if not chosen:
        raise RuntimeError(f"no {category} {suffix} sources at shard {shard}/{shards}, offset {skip}")
    selection = {
        "schema": 1, "game_version": "3.0.3", "nca": NCA,
        "category": category, "mode": mode, "suffix": suffix, "shard": shard,
        "shards": shards, "skip_count": skip, "max_count": count,
        "matched_in_shard": len(candidates), "selected_count": len(chosen),
        "sources": chosen,
    }
    (root / MANIFEST).write_text(json.dumps(selection, ensure_ascii=False, indent=2) + "\n", encoding="utf-8")
    # Non-cone sparse patterns preserve existing converted files for collision checks
    # but do not hydrate the entire 10+ GiB RomFS.
    patterns = ["/Scripts/", "/UnPack/_meta/", f"/UnPack/1/{category}/"]
    patterns += ["/" + item["path"] for item in chosen]
    (root / "batch_sparse_patterns.txt").write_text("\n".join(patterns) + "\n", encoding="utf-8")
    return selection


def check_output(root: Path, candidate: Path, claimed_sha: str, claimed_size: int | None = None) -> dict:
    candidate = candidate.resolve()
    if not candidate.is_relative_to(root) or not candidate.is_relative_to(root / "UnPack" / "1"):
        raise RuntimeError("output escapes UnPack/1: " + str(candidate))
    if candidate.is_symlink() or not candidate.is_file():
        raise RuntimeError("missing real output " + str(candidate))
    if candidate.stat().st_size > 90 * 1024 * 1024:
        raise RuntimeError("output too large to commit to GitHub")
    size = candidate.stat().st_size
    if claimed_size is not None and size != claimed_size:
        raise RuntimeError("output size mismatch: " + str(candidate))
    digest = sha256(candidate)
    if digest != claimed_sha:
        raise RuntimeError("output SHA-256 mismatch: " + str(candidate))
    return {"path": candidate.relative_to(root).as_posix(), "size": size, "sha256": digest}


def extract_outputs(root: Path, category: str, rel: Path, mode: str, source_sha: str) -> tuple[str, list[dict]]:
    if mode == "basic":
        file = root / "UnPack" / "_meta" / "basic_last_manifest.json"
        records = json.loads(file.read_text(encoding="utf-8"))
        match = [x for x in records if x.get("source_path") == rel.as_posix()]
        if len(match) != 1 or match[0].get("source_sha256") != source_sha:
            raise RuntimeError("missing or inconsistent basic source manifest")
        record = match[0]
        outputs = []
        for x in record["outputs"]:
            p = source_rel(x["path"])
            if tuple(p.parts[:2]) != (NCA, "1"):
                raise RuntimeError("unexpected basic output path: " + x["path"])
            output = root / "UnPack" / "1" / Path(*p.parts[2:])
            outputs.append(check_output(root, output, x["sha256"], x["size"]))
        return record["status"], outputs
    file = root / "UnPack" / "_meta" / "run_log.jsonl"
    lines = file.read_text(encoding="utf-8").splitlines()
    if not lines:
        raise RuntimeError("missing media SHA-256 run log")
    record = json.loads(lines[-1])
    if record.get("command") != "media" or record.get("source") != rel.as_posix():
        raise RuntimeError("latest media log is not for the current source")
    if record.get("source_sha256") != source_sha:
        raise RuntimeError("media source SHA-256 mismatch")
    outputs = [
        check_output(root, Path(p["path"]), p["sha256"], p["bytes"])
        for p in record.get("produced", [])
    ]
    return record.get("status", "unknown"), outputs


def run(root: Path, selection_file: Path, batch_id: str, tools: dict[str, str]) -> dict:
    selection = json.loads(selection_file.read_text(encoding="utf-8"))
    category = selection["category"]
    if category not in CATEGORIES:
        raise ValueError("unsupported category")
    suffix, mode = CATEGORIES[category]
    if selection.get("mode") != mode or selection.get("suffix") != suffix:
        raise ValueError("selection mode/suffix changed")
    sources = selection["sources"]
    if not 1 <= len(sources) <= MAX_SELECT or len({s["path"] for s in sources}) != len(sources):
        raise ValueError("selection is empty/duplicate/too large")
    if not re.fullmatch(r"[A-Za-z0-9_-]{1,80}", batch_id):
        raise ValueError("invalid batch id")
    rows = []
    for item in sources:
        path = source_rel(item["path"])
        prefix = (NCA, "1", category)
        if tuple(path.parts[:3]) != prefix or not path.name.lower().endswith(suffix):
            raise ValueError("source path/category mismatch")
        rel = Path(*path.parts[2:])
        src = root / path
        record = {
            "source_path": path.as_posix(), "source_git_blob_sha": item["git_blob_sha"],
            "source_sha256": None, "status": "failed", "outputs": [], "error": None,
        }
        try:
            if src.is_symlink() or not src.is_file():
                raise RuntimeError("source was not sparsely checked out")
            actual_git = subprocess.check_output(["git", "hash-object", "--", path.as_posix()], cwd=root, text=True).strip()
            if actual_git != item["git_blob_sha"]:
                raise RuntimeError("source Git blob identity mismatch")
            record["source_sha256"] = sha256(src)
            record["source_bytes"] = src.stat().st_size
            cmd = [sys.executable, str(root / "Scripts" / "mirror_unpack.py"),
                   mode, "--root", str(root), "--file", rel.as_posix()]
            if mode == "media":
                if category == "Model":
                    cmd += ["--require", "any"]
                if category == "Layout":
                    cmd += ["--require", "bntx"]
                if category == "Sound":
                    cmd += ["--require", "bwav"]
                for key, flag in (("wmdlt", "--wmdlt"), ("wimgt", "--wimgt"), ("vgmstream", "--vgmstream")):
                    if tools[key]:
                        cmd += [flag, tools[key]]
            proc = subprocess.run(cmd, cwd=root, text=True, capture_output=True, timeout=300)
            record["converter_exit_code"] = proc.returncode
            if proc.returncode != 0:
                raise RuntimeError("decoder exit " + str(proc.returncode) + ": " + (proc.stderr + proc.stdout)[-1300:])
            status, outputs = extract_outputs(root, category, rel, mode, record["source_sha256"])
            record["status"] = "converted" if outputs and status == "converted" else ("partial" if outputs else "no_output")
            record["parser_status"] = status
            record["outputs"] = outputs
        except (OSError, ValueError, RuntimeError, subprocess.TimeoutExpired, KeyError, json.JSONDecodeError) as error:
            record["error"] = str(error)[-1800:]
        rows.append(record)
        print(f"{len(rows)}/{len(sources)} {record['status']} {path.as_posix()}", flush=True)
    totals = {status: sum(x["status"] == status for x in rows)
              for status in ("converted", "partial", "no_output", "failed")}
    report = {
        "schema": 1, "batch_id": batch_id, "category": category,
        "game_version": "3.0.3", "selection": selection,
        "generated_at_utc": datetime.now(timezone.utc).isoformat(),
        "source_count": len(rows), "converted_output_count": sum(len(r["outputs"]) for r in rows),
        "status_counts": totals, "rows": rows,
        "definition": "converted means actual SHA-256 verified outputs from real decoders; partial does not imply semantic equivalence",
    }
    target = (root / "UnPack" / "_meta" / "batches" / category
              / f"s{selection['shard']:03d}-of-{selection['shards']:03d}")
    target.mkdir(parents=True, exist_ok=True)
    report_path = target / f"{batch_id}.json"
    if report_path.exists():
        raise RuntimeError("batch id already exists, refusing overwrite")
    report_path.write_text(json.dumps(report, ensure_ascii=False, sort_keys=True, indent=2) + "\n", encoding="utf-8")
    (root / RESULT).write_text(json.dumps({"report": report_path.relative_to(root).as_posix()}) + "\n", encoding="utf-8")
    print(json.dumps({"report": str(report_path), "status_counts": totals, "outputs": report["converted_output_count"]}, ensure_ascii=False))
    return report


def verify(root: Path) -> dict:
    pointer = json.loads((root / RESULT).read_text(encoding="utf-8"))
    report = json.loads((root / pointer["report"]).read_text(encoding="utf-8"))
    for row in report["rows"]:
        original = root / source_rel(row["source_path"])
        if sha256(original) != row["source_sha256"]:
            raise RuntimeError("source SHA-256 mismatch on verify")
        for output in row["outputs"]:
            check_output(root, root / output["path"], output["sha256"], output["size"])
    print(json.dumps({"verified_sources": len(report["rows"]), "verified_outputs": report["converted_output_count"],
                      "failed_sources": report["status_counts"]["failed"]}, ensure_ascii=False))
    return report


def main() -> None:
    a = argparse.ArgumentParser(description=__doc__)
    a.add_argument("command", choices=("select", "run", "verify"))
    a.add_argument("--root", type=Path, default=Path("."))
    a.add_argument("--category", choices=list(CATEGORIES), default="Sound")
    a.add_argument("--shard", type=int, default=0)
    a.add_argument("--shards", type=int, default=8)
    a.add_argument("--skip-count", type=int, default=0)
    a.add_argument("--max-count", type=int, default=8)
    a.add_argument("--selection", type=Path, default=Path(MANIFEST))
    a.add_argument("--batch-id", default="")
    a.add_argument("--wmdlt", default="")
    a.add_argument("--wimgt", default="")
    a.add_argument("--vgmstream", default="")
    args = a.parse_args()
    root = args.root.resolve()
    if args.command == "select":
        result = select(root, args.category, args.shard, args.shards, args.skip_count, args.max_count)
        print(json.dumps({"category": result["category"], "selected_count": result["selected_count"],
                          "total_in_shard": result["matched_in_shard"]}))
    elif args.command == "run":
        batch_id = args.batch_id or ("local-" + datetime.now(timezone.utc).strftime("%Y%m%dT%H%M%SZ"))
        run(root, (root / args.selection).resolve(), batch_id,
            {"wmdlt": args.wmdlt, "wimgt": args.wimgt, "vgmstream": args.vgmstream})
    else:
        verify(root)


if __name__ == "__main__":
    main()
