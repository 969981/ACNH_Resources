#!/usr/bin/env python3
"""Merge genuine historical ACNH 3.0.3 source evidence without double-counting.

Inputs are bounded, SHA-256 verified R27-R36/R41-R44 Release deltas, committed
incremental batch reports, and the R51 genuine-original CI artifact. R45-R90
research descriptions without source-level digests are NOT imported as assets.

One original path + one immutable source SHA-256. Duplicate attempts remain
evidence, never become new originals. Source SHA from a Release is an
authenticated historical claim, not independently rehashed original bytes in
this sparse checkout. L1/structure/L3/native completion remain separate.
"""
from __future__ import annotations

import argparse
from collections import Counter, defaultdict
import gzip
import hashlib
import json
from pathlib import Path
import re

from acnh303_full_audit import inventory_from_git
from acnh303_recursive_archive import NCA, clean_source, atomic_write

RELEASES = {
    27: ("acnh303-r27-real-unmeasured40-20261015", 40, {"Model": 16, "Layout": 12, "Sound": 12}),
    28: ("acnh303-r28-layout-bars-model-bnsh-20261015", 224, {"Model": 128, "Layout": 48, "Sound": 48}),
    29: ("acnh303-r29-80-real-media-bnsh-20261015", 80, {"Model": 32, "Layout": 24, "Sound": 24}),
    30: ("acnh303-r30-48-real-media-bnsh-20261015", 48, {"Model": 24, "Layout": 12, "Sound": 12}),
    31: ("acnh303-r31-40-real-media-bnsh-20261015", 40, {"Model": 16, "Layout": 12, "Sound": 12}),
    32: ("acnh303-r32-88-real-media-bnsh-20261015", 88, {"Model": 40, "Layout": 24, "Sound": 24}),
    33: ("acnh303-r33-240-real-media-bnsh-20261015", 240, {"Model": 80, "Layout": 80, "Sound": 80}),
    34: ("acnh303-r34-388-real-media-bnsh-20261015", 388, {"Model": 80, "Layout": 148, "Sound": 160}),
    35: ("acnh303-r35-320-real-media-bars-20261015", 320, {"Model": 160, "Sound": 160}),
    36: ("acnh303-r36-320-real-media-bars-20261015", 320, {"Model": 160, "Sound": 160}),
    41: ("acnh303-r41-480-real-media-bars-20261102", 480, {"Model": 320, "Sound": 160}),
    42: ("acnh303-r42-960-media-native-20261102", 960, {"Model": 640, "Sound": 320}),
    43: ("acnh303-r43-1408-bars-l3-complete-20261102", 1408, {"Model": 1280, "Sound": 128}),
    44: ("acnh303-r44-2560-model-fmaa-aal-20261102", 2560, {"Model": 2560}),
}
HEX64 = re.compile(r"^[0-9a-f]{64}$")
HEX40 = re.compile(r"^[0-9a-f]{40}$")
STATE_SCORE = {"failed": 0, "no_output": 1, "raw_extracted": 2,
               "partial": 3, "converted": 4}
MAX_SOURCE_BYTES = 1 << 34
R51_RUN_ID = 45135434008
PREFIX = NCA + "/1/"


def canonical(value: str) -> str:
    if not isinstance(value, str):
        raise ValueError("source path is not text")
    if value.startswith(PREFIX):
        value = value[len(PREFIX):]
    rel = clean_source(value).as_posix()
    if not rel or rel != value:
        raise ValueError("noncanonical original source path")
    return rel


def digest_bytes(data: bytes) -> str:
    return hashlib.sha256(data).hexdigest()


def checked_sha(v: str, kind: str = "source") -> str:
    if not isinstance(v, str) or not HEX64.fullmatch(v):
        raise ValueError(f"{kind} SHA-256 absent/invalid: {v!r}")
    return v


def checked_size(v) -> int:
    if type(v) is not int or v < 0 or v > MAX_SOURCE_BYTES:
        raise ValueError(f"invalid original source byte size {v!r}")
    return v


def release_sha(path: Path, sums: Path) -> str:
    """Require an unambiguous SHA256SUMS entry for the authentic Release asset."""
    lines = sums.read_text(encoding="utf8").splitlines()
    matches = []
    for line in lines:
        parts = line.strip().split(maxsplit=1)
        if len(parts) < 2:
            continue
        checksum, file = parts
        file = file.lstrip("*").removeprefix("./")
        if file == path.name:
            matches.append(checked_sha(checksum, "release asset"))
    if len(matches) != 1:
        raise ValueError("missing/duplicate source_delta SHA256SUMS entry: " + str(sums))
    actual = digest_bytes(path.read_bytes())
    if matches[0] != actual:
        raise ValueError(f"Release source_delta checksum mismatch: {path}")
    return actual


def each_gz_row(path: Path, max_rows: int = 100000, max_output: int = 150_000_000):
    total = 0
    with gzip.open(path, "rb") as stream:
        for line in stream:
            total += len(line)
            if total > max_output:
                raise ValueError(f"gzip expansion limit exceeded: {path}")
            if not line.strip():
                continue
            max_rows -= 1
            if max_rows < 0:
                raise ValueError(f"gzip row count exceeds safety cap: {path}")
            yield json.loads(line)


def read_releases(root: Path, expected: dict[str, str]) -> tuple[list[dict], dict]:
    attempts = []
    assets = {}
    for num, (tag, expected_count, by_category) in RELEASES.items():
        directory = root / ("r%d" % num)
        source_file = directory / "source_delta.jsonl.gz"
        sums = directory / "SHA256SUMS.txt"
        if not source_file.is_file() or not sums.is_file():
            raise FileNotFoundError(f"R{num} authenticated release missing: {directory}")
        file_sha = release_sha(source_file, sums)
        rows = list(each_gz_row(source_file, max_rows=expected_count + 1))
        if len(rows) != expected_count:
            raise ValueError(f"R{num} source count changed: {len(rows)} != {expected_count}")
        categories = Counter()
        seen = set()
        for raw in rows:
            name = canonical(raw["source_path"])
            category = "Sound" if raw["category"] == "BARS" else raw["category"]
            if category != name.split("/", 1)[0]:
                raise ValueError(f"R{num} original category/path disagreement: {name}")
            if name in seen or name not in expected:
                raise ValueError(f"R{num} duplicate/non-Git source: {name}")
            seen.add(name)
            categories[category] += 1
            outputs = raw.get("validated_media_count", 0)
            if type(outputs) is not int or outputs < 0 or outputs > 100000:
                raise ValueError("invalid Release validated media count")
            raw_status = raw.get("status", "unknown")
            status = normalize_status(raw_status, outputs, layer="release")
            attempts.append({
                "source_path": name,
                "source_sha256": checked_sha(raw["source_sha256"]),
                "source_bytes": checked_size(raw["source_bytes"]),
                "source_git_blob_sha": None,
                "category": category,
                "status": status,
                "raw_status": raw_status,
                "claimed_verified_media_count": outputs,
                "source": f"release-R{num}",
                "source_proof": "release_sha256sums_verified_published_delta",
                "output_proof": "historical_validated_media_count_not_rehashed_now",
                "evidence_level": "L3_ATTEMPT",
            })
        if dict(categories) != by_category:
            raise ValueError(f"R{num} category mix changed: {dict(categories)} != {by_category}")
        assets[f"R{num}"] = {"tag": tag, "source_delta_sha256": file_sha,
                            "rows": len(rows), "by_category": dict(categories)}
    return attempts, assets


def normalize_status(status: str, output_count: int, *, layer: str) -> str:
    if status == "failed" or status == "decode_failed":
        return "failed"
    if layer == "release":
        # A published L3 *attempt* without validated media is NOT conversion.
        if output_count > 0:
            return "converted" if status == "converted" else "partial"
        return "no_output"
    if status in ("converted", "partial", "raw_extracted", "no_output", "failed"):
        if status == "converted" and output_count == 0:
            return "no_output"
        return status
    if status in ("unsupported", "indexed_raw_only", "no_target_leaf"):
        return "no_output"
    raise ValueError(f"unrecognized historic status {status!r}")


def batch_attempts(directory: Path, expected: dict[str, str]) -> list[dict]:
    result = []
    for report_path in sorted(directory.glob("*/*/*.json")):
        if not report_path.is_file():
            continue
        report = json.loads(report_path.read_text("utf8"))
        selection = report["selection"]
        rows, sources = report["rows"], selection["sources"]
        if (report.get("source_count") != len(rows) or len(rows) != len(sources)
                or report.get("game_version") != "3.0.3"
                or not 1 <= len(rows) <= 24 or
                selection["category"] != report["category"]):
            raise ValueError("malformed committed batch: " + str(report_path))
        for row, selected in zip(rows, sources):
            path = canonical(row["source_path"])
            if path != canonical(selected["path"]) or path not in expected:
                raise ValueError("batch source/selection or Git tree mismatch")
            git_blob = selected["git_blob_sha"]
            if (not HEX40.fullmatch(git_blob) or git_blob != expected[path] or
                    row.get("source_git_blob_sha") != git_blob):
                raise ValueError("batch git blob identity drift: " + path)
            if not row.get("source_sha256"):
                # A failed pre-hash source is not a confirmed original attempt.
                # It must be reported as quarantined, not counted as a new source.
                result.append({"quarantined": True, "source_path": path,
                               "source": report_path.as_posix(),
                               "reason": "no_original_source_sha256"})
                continue
            outputs = row.get("outputs", [])
            if not isinstance(outputs, list):
                raise ValueError("malformed batch outputs")
            for item in outputs:
                checked_sha(item["sha256"], "output")
                checked_size(item["size"])
                output = item["path"]
                if not output.startswith("UnPack/1/") or ".." in Path(output).parts:
                    raise ValueError("noncanonical batch output path")
            status = normalize_status(row["status"], len(outputs), layer="batch")
            result.append({
                "source_path": path,
                "source_sha256": checked_sha(row["source_sha256"]),
                "source_bytes": checked_size(row["source_bytes"]),
                "source_git_blob_sha": git_blob,
                "category": path.split("/", 1)[0],
                "status": status,
                "raw_status": row["status"],
                "source": f"committed-batch:{report_path.relative_to(directory).as_posix()}",
                "source_proof": "original_git_blob_matched_and_batch_sha_recorded",
                "output_proof": "historical_output_shas_recorded_not_rehashed_now",
                "claimed_verified_media_count": len(outputs) if status == "converted" else 0,
                "evidence_level": "L3_ATTEMPT" if report["category"] in ("Sound", "Model", "Layout") else "L2",
            })
    return result


def r51_attempts(path: Path, expected: dict[str, str]) -> list[dict]:
    if not path.is_file():
        raise FileNotFoundError("R51 real-source artifact required: " + str(path))
    doc = json.loads(path.read_text("utf8"))
    if (doc.get("sample_count") != 16 or doc.get("exact_original_git_blob_verified") != 16
            or doc.get("original_source_sha256_verified") != 16 or
            doc.get("native_runtime_evidence_captured") is not False or
            doc.get("git_tree_audit", {}).get("git_original_sources") != 103400 or
            doc.get("git_tree_audit", {}).get("problems_count") != 0 or
            len(doc.get("rows", [])) != 16):
        raise ValueError("R51 genuine CI artifact provenance invalid")
    result = []
    for row in doc["rows"]:
        name = canonical(row["source_path"])
        git_blob = row.get("source_git_blob_sha1")
        if name not in expected or git_blob != expected[name]:
            raise ValueError("R51 source Git SHA-1 no longer matches tree")
        outputs = row.get("outputs", [])
        for o in outputs:
            checked_sha(o["sha256"], "R51 output")
            checked_size(o["size_bytes"])
        status = normalize_status(row["status"], len(outputs), layer="batch")
        result.append({
            "source_path": name, "source_sha256": checked_sha(row["source_sha256"]),
            "source_bytes": checked_size(row["source_bytes"]),
            "source_git_blob_sha": git_blob, "category": name.split("/", 1)[0],
            "status": status, "raw_status": row["status"], "source": f"CI-R51-run-{R51_RUN_ID}",
            "source_proof": "original_bytes_and_git_blob_verified_in_green_ci",
            "output_proof": "historical_output_shas_verified_in_green_ci_not_rehashed_now",
            "claimed_verified_media_count": len(outputs) if status == "converted" else 0,
            "evidence_level": row.get("evidence_level", "UNKNOWN"),
        })
    if len({r["source_path"] for r in result}) != 16:
        raise ValueError("R51 unique original paths mismatch")
    return result


def basic_attempts(path: Path, expected: dict[str, str]) -> list[dict]:
    if not path.exists():
        return []
    entries = json.loads(path.read_text("utf8"))
    result = []
    for row in entries:
        name = canonical(row["source_path"])
        if name not in expected:
            raise ValueError("historical basic source not in Git tree")
        count = len(row.get("outputs", []))
        result.append({
            "source_path": name, "source_sha256": checked_sha(row["source_sha256"]),
            "source_bytes": checked_size(row["source_size"]),
            "source_git_blob_sha": None, "category": name.split("/", 1)[0],
            "status": normalize_status(row["status"], count, layer="batch"),
            "raw_status": row["status"], "source": "committed-basic-last-manifest",
            "source_proof": "historic_manifest_sha_not_rehashed_now",
            "output_proof": "historic_output_manifest_not_rehashed_now",
            "claimed_verified_media_count": 0, "evidence_level": "L2",
        })
    return result


def deduplicate(expected: dict[str, str], attempts: list[dict]) -> tuple[dict, dict]:
    """Never let later failed retry hide a previous verified conversion."""
    records = {}
    quarantined = []
    same_sha_content_aliases = defaultdict(set)
    same_source_retries = 0
    seen_source_round = set()
    duplicates_cross_round = []
    for raw in attempts:
        if raw.get("quarantined"):
            quarantined.append(raw)
            continue
        path = canonical(raw["source_path"])
        if path not in expected:
            raise ValueError("attempt is absent from actual Git Tree")
        identity = (path, raw["source_sha256"], raw["source_bytes"])
        same_sha_content_aliases[raw["source_sha256"]].add(path)
        if path in records:
            old = records[path]
            if (old["source_sha256"], old["source_bytes"]) != identity[1:]:
                raise ValueError("CRITICAL: original path has conflicting SHA or original bytes: " + path)
            git_old = old.get("source_git_blob_sha")
            git_new = raw.get("source_git_blob_sha")
            if git_old and git_new and git_old != git_new:
                raise ValueError("CRITICAL: original path has conflicting Git blob identity: " + path)
            if git_new and not git_old:
                old["source_git_blob_sha"] = git_new
            same_source_retries += 1
            if raw["source"].startswith("release-") and any(
                x["source"].startswith("release-") for x in old["history"]
            ):
                duplicates_cross_round.append(path)
            old["history"].append({k: raw[k] for k in (
                "source", "status", "raw_status", "source_proof", "output_proof",
                "claimed_verified_media_count", "evidence_level"
            )})
            if STATE_SCORE[raw["status"]] > STATE_SCORE[old["best_status"]]:
                old["best_status"] = raw["status"]
            old["historic_media_outputs_claimed"] = max(
                old["historic_media_outputs_claimed"], raw["claimed_verified_media_count"])
        else:
            if raw.get("source_git_blob_sha") and raw["source_git_blob_sha"] != expected[path]:
                raise ValueError("original Git blob SHA-1 differs from Git tree")
            records[path] = {
                "source_path": path,
                "source_sha256": raw["source_sha256"],
                "source_bytes": raw["source_bytes"],
                "source_git_blob_sha": raw.get("source_git_blob_sha"),
                "best_status": raw["status"],
                "historic_media_outputs_claimed": raw["claimed_verified_media_count"],
                "source_ever_attempted": True,
                "historic_original_byte_verification_now": False,
                "native_runtime_parity_verified": False,
                "history": [{k: raw[k] for k in (
                    "source", "status", "raw_status", "source_proof", "output_proof",
                    "claimed_verified_media_count", "evidence_level"
                )}],
            }
    if duplicates_cross_round:
        raise ValueError("historical release deltas unexpectedly overlap on original paths: "
                         + ", ".join(duplicates_cross_round[:5]))
    exact_content_aliases = {
        digest: sorted(names) for digest, names in same_sha_content_aliases.items()
        if len(names) > 1
    }
    return records, {
        "total_attempt_rows": len(attempts),
        "quarantined_missing_sha_attempts": len(quarantined),
        "quarantine_examples": quarantined[:20],
        "deduplicated_retry_rows": same_source_retries,
        "identical_byte_content_different_original_paths": len(exact_content_aliases),
        "content_alias_examples": [
            {"source_sha256": sha, "paths": paths}
            for sha, paths in list(sorted(exact_content_aliases.items()))[:15]
        ],
    }


def aggregate(expected: dict[str, str], records: dict, stats: dict, assets: dict) -> dict:
    categories = defaultdict(lambda: {"original_sources": 0, "historically_attempted": 0,
                                      "historically_converted": 0, "historically_partial": 0,
                                      "historically_raw_only": 0, "failed_or_no_output": 0,
                                      "not_in_imported_evidence": 0})
    for path in expected:
        categories[path.split("/", 1)[0]]["original_sources"] += 1
    statuses = Counter()
    sources_by_status = defaultdict(list)
    for name in sorted(records):
        row = records[name]
        cat = categories[name.split("/", 1)[0]]
        cat["historically_attempted"] += 1
        status = row["best_status"]
        statuses[status] += 1
        sources_by_status[status].append(name)
        if status == "converted":
            cat["historically_converted"] += 1
        elif status == "partial":
            cat["historically_partial"] += 1
        elif status == "raw_extracted":
            cat["historically_raw_only"] += 1
        else:
            cat["failed_or_no_output"] += 1
    for cat in categories.values():
        cat["not_in_imported_evidence"] = cat["original_sources"] - cat["historically_attempted"]
        if cat["not_in_imported_evidence"] < 0:
            raise ValueError("history exceeds original category inventory")
    missing = len(expected) - len(records)
    return {
        "schema": "acnh303-historical-r41-r90-source-sha-ledger-v1",
        "definition": "By unique original PATH+SHA-256; retries not new sources. SHA-256 claims from published release do not mean sparse checkout byte verification now.",
        "original_git_tree_sources": len(expected),
        "imported_unique_original_sources": len(records),
        "not_in_imported_per_source_evidence": missing,
        "unique_original_sources_not_yet_converted": len(expected) - statuses["converted"],
        "imported_source_status_counts": dict(statuses),
        "all_corpus_current_original_bytes_sha256_verified": False,
        "native_runtime_parity_verified": False,
        "source_provenance": assets,
        "import_stats": stats,
        "categories": dict(sorted(categories.items())),
        "unavailable_releases_or_per_source_manifests": [
            "R45-R90 per-original-source SHA manifests not available as authenticated Releases in this import; historical specialty static research is NOT counted as a new source attempt.",
            "R19, R27-R36 cumulative manifests not present in the checked-out branch; R27-R44 deltas cannot stand in for that baseline.",
        ],
        "caveat": "not_in_imported_per_source_evidence includes historical runs absent from supplied source manifests; it is NOT guaranteed never-attempted since project inception.",
    }


def write_results(out: Path, expected: dict[str, str], records: dict, report: dict,
                  *, shard: int, shards: int, limit: int, category: str | None) -> None:
    out.mkdir(parents=True, exist_ok=True)
    doc = (json.dumps(report, indent=2, sort_keys=True, ensure_ascii=False) + "\n").encode()
    atomic_write(out / "coverage.json", doc)
    with (out / "source_ledger.jsonl.gz").open("wb") as raw:
        with gzip.GzipFile(filename="", mode="wb", fileobj=raw, mtime=0,
                           compresslevel=9) as compressed:
            for name in sorted(records):
                compressed.write((json.dumps(records[name], ensure_ascii=False,
                                             sort_keys=True) + "\n").encode())
    attempts = []
    for name in sorted(expected):
        if category and name.split("/", 1)[0] != category:
            continue
        idx = int.from_bytes(hashlib.sha256(name.encode("utf8")).digest()[:8], "big") % shards
        if idx != shard:
            continue
        if name not in records:
            attempts.append({"source_path": name, "source_git_blob_sha": expected[name],
                             "queue": "no_imported_source_sha_evidence"})
        elif records[name]["best_status"] in ("failed", "no_output"):
            attempts.append({"source_path": name, "source_git_blob_sha": expected[name],
                             "previous_source_sha256": records[name]["source_sha256"],
                             "queue": "retry_failed_or_no_output"})
        if limit and len(attempts) >= limit:
            break
    atomic_write(out / "next_sources.json", (
        json.dumps({"schema": "acnh303-dedup-next-shard-v1",
                    "shard": shard, "shards": shards, "category": category,
                    "candidates": attempts,
                    "semantic_boundary": "No new source checks performed; sparse candidates are only a queue"},
                   ensure_ascii=False, indent=2, sort_keys=True) + "\n").encode())


def main() -> int:
    a = argparse.ArgumentParser(description=__doc__)
    a.add_argument("--root", type=Path, default=Path("."))
    a.add_argument("--release-dir", type=Path, required=True)
    a.add_argument("--r51-artifact", type=Path, required=True)
    a.add_argument("--batches", type=Path, default=Path("UnPack/_meta/batches"))
    a.add_argument("--basic-last", type=Path, default=Path("UnPack/_meta/basic_last_manifest.json"))
    a.add_argument("--out", type=Path, default=Path("UnPack/_meta/history_sha_merge"))
    a.add_argument("--shard", type=int, default=0)
    a.add_argument("--shards", type=int, default=64)
    a.add_argument("--limit", type=int, default=24)
    a.add_argument("--category", help="One real RomFS top-level category")
    args = a.parse_args()
    if not 1 <= args.shards <= 4096 or not 0 <= args.shard < args.shards or not 0 <= args.limit <= 100000:
        a.error("invalid bounded queue shard/limit")
    root = args.root.resolve()
    expected = inventory_from_git(root)
    if len(expected) != 103400:
        raise ValueError(f"original RomFS count mismatch: {len(expected)} != 103400")
    release, assets = read_releases(args.release_dir.resolve(), expected)
    batch = batch_attempts((root / args.batches).resolve(), expected)
    r51 = r51_attempts((root / args.r51_artifact).resolve(), expected)
    basic = basic_attempts((root / args.basic_last).resolve(), expected)
    attempts = release + batch + r51 + basic
    records, stats = deduplicate(expected, attempts)
    stats["input_type_rows"] = {"release_R27_R44": len(release),
                                 "committed_batch": len(batch), "r51_real_source_ci": len(r51),
                                 "committed_basic": len(basic)}
    report = aggregate(expected, records, stats, assets)
    write_results((root / args.out).resolve(), expected, records, report,
                  shard=args.shard, shards=args.shards, limit=args.limit,
                  category=args.category)
    print(json.dumps({k: v for k, v in report.items()
                      if k not in ("categories", "source_provenance",
                                   "unavailable_releases_or_per_source_manifests")},
                     ensure_ascii=False, indent=2, sort_keys=True))
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
