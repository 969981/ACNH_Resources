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


R8_BARS_TAG = "acnh303-bars-first8-42wav-20261014"
R8_BARS_SCHEMA = "acnh303-BARS-BWAV-real-PCM-v1"


def read_r8_bars(directory: Path, expected: dict[str, str]) -> tuple[list[dict], dict]:
    """Recover eight independent R8 BARS originals from the published report.

    Validate the downloaded report with its release SHA256SUMS, source path,
    original digest/size, native member hashes and PCM output evidence.
    This remains a published historical claim, NOT a current ROM-byte rehash
    or Native AAL/AMTA runtime verification.
    """
    source = directory / "bars_audio_report.json"
    sums = directory / "SHA256SUMS.txt"
    report_sha = release_sha(source, sums)
    report = json.loads(source.read_text(encoding="utf8"))
    rows = report.get("records")
    if (report.get("schema") != R8_BARS_SCHEMA
            or report.get("tested_bars_originals") != 8
            or not isinstance(rows, list) or len(rows) != 8):
        raise ValueError("R8 BARS original report schema/count differs from published 8")
    attempts, seen = [], set()
    wav_total = 0
    sources_with_wav = 0
    for raw in rows:
        name = canonical(raw["source_path"])
        if (name in seen or name not in expected
                or not name.startswith("Sound/") or not name.endswith(".bars")):
            raise ValueError("R8 BARS original path missing/duplicate/invalid: " + name)
        seen.add(name)
        digest = checked_sha(raw["source_sha256"])
        size = checked_size(raw["original_bytes"])
        if size == 0:
            raise ValueError("R8 zero-byte original BARS: " + name)
        members = raw.get("members")
        if not isinstance(members, list):
            raise ValueError("R8 BARS missing real member array: " + name)
        wav = 0
        for member in members:
            if member.get("status") == "converted_pcm_wav":
                checked_sha(member["source_member_sha256"], "R8 original BWAV member")
                checked_sha(member["output_sha256"], "R8 output PCM WAV")
                if (checked_size(member["output_size"]) < 45
                        or member.get("validation", {}).get("frames", 0) <= 0):
                    raise ValueError("R8 invalid original BWAV/PCM evidence: " + name)
                wav += 1
        if raw.get("decoded_wav_count", wav) != wav:
            raise ValueError("R8 declared WAV count differs from member proof: " + name)
        raw_status = raw.get("status", "no_decodable_BWAV")
        if raw_status not in ("converted", "partial", "no_decodable_BWAV", "parse_failed"):
            raise ValueError("R8 unknown original source status: " + str(raw_status))
        if wav and raw_status not in ("converted", "partial"):
            raise ValueError("R8 positive WAV output with failed source status: " + name)
        if raw_status == "converted" and any(
                m.get("status") != "converted_pcm_wav" for m in members):
            raise ValueError("R8 fully converted claim with unconverted members: " + name)
        if wav:
            sources_with_wav += 1
        wav_total += wav
        attempts.append({
            "source_path": name, "source_sha256": digest,
            "source_bytes": size, "source_git_blob_sha": None,
            "category": "Sound",
            "status": "failed" if raw_status == "parse_failed" else
                      normalize_status(raw_status, wav, layer="release"),
            "raw_status": raw_status, "source": "historic-R8-published-BARS",
            "source_proof": "release_sha256sums_verified_source_sha_claim",
            "output_proof": "published_BWAV_PCM_member_hashes_not_rehashed_now",
            "claimed_verified_media_count": wav,
            "evidence_level": "L3_ATTEMPT" if wav else "L2_NATIVE_STRUCTURE",
        })
    counts = report.get("counts")
    if (wav_total != 42 or sources_with_wav != 7
            or not isinstance(counts, dict)
            or counts.get("validated_pcm_wav") != 42
            or counts.get("sources_with_pcm") != 7):
        raise ValueError("R8 independent 8-BARS/42-WAV published census mismatch")
    return attempts, {
        "tag": R8_BARS_TAG, "report": source.name, "sha256": report_sha,
        "original_bars": len(attempts), "sources_with_pcm": sources_with_wav,
        "reported_valid_pcm_wav": wav_total,
        "new_sources_after_global_dedup": "compute_only_from_merged_ledger",
        "native_runtime_verified": False,
    }


R19_RELEASE_TAG = "acnh303-r19-animation-native-20261014"
BARS_BWAV = "acnh303-BARS-BWAV-real-PCM-v1"
BARS_AMTA = "acnh303-bars-amta-lossless-v1"


def read_r19_baseline(directory: Path, expected: dict[str, str]) -> tuple[list[dict], dict]:
    """Import exact cumulative R19 (not its summary count), pair BARS PCM+AMTA."""
    paths = {
        "media": directory / "media_source_manifest.jsonl.gz",
        "bars": directory / "bars_source_manifest.jsonl.gz",
    }
    sums = directory / "SHA256SUMS.txt"
    if not sums.is_file() or any(not p.is_file() for p in paths.values()):
        raise FileNotFoundError("R19 original cumulative source manifests absent")
    files = {kind: release_sha(path, sums) for kind, path in paths.items()}
    media = list(each_gz_row(paths["media"], max_rows=3559))
    bars = list(each_gz_row(paths["bars"], max_rows=161))
    if len(media) != 3558 or len(bars) != 160:
        raise ValueError("R19 media/BARS authenticated cumulative source count changed")
    attempts = []
    seen = set()
    for raw in media:
        name = canonical(raw["source_path"])
        if name in seen or name not in expected or name.split("/", 1)[0] not in (
                "Model", "Layout", "Sound"):
            raise ValueError("R19 cumulative media has repeated or invalid original source")
        seen.add(name)
        output_count = len(raw.get("validated_outputs", []))
        status = normalize_status(raw.get("status", "unknown"), output_count, layer="release")
        attempts.append({
            "source_path": name, "source_sha256": checked_sha(raw["sha256"]),
            "source_bytes": checked_size(raw["source_bytes"]),
            "source_git_blob_sha": None, "category": name.split("/", 1)[0],
            "status": status, "raw_status": raw.get("status", "unknown"),
            "source": "release-R19-cumulative-media",
            "source_proof": "release_sha256sums_verified_published_cumulative",
            "output_proof": "historic_validated_media_output_count_not_rehashed_now",
            "claimed_verified_media_count": output_count,
            "evidence_level": "L3_ATTEMPT",
        })
    paired = defaultdict(dict)
    for raw in bars:
        name = canonical(raw["source_path"])
        kind = raw.get("source_type")
        if name not in expected or not name.startswith("Sound/") or kind not in (
                BARS_BWAV, BARS_AMTA) or kind in paired[name]:
            raise ValueError("R19 original BARS source/type not unique or invalid")
        paired[name][kind] = raw
    if len(paired) != 80 or any(set(v) != {BARS_BWAV, BARS_AMTA}
                                for v in paired.values()):
        raise ValueError("R19 BARS 80 paired source identities changed")
    for name, pair in sorted(paired.items()):
        pcm, amta = pair[BARS_BWAV], pair[BARS_AMTA]
        if pcm["source_sha256"] != amta["source_sha256"]:
            raise ValueError("R19 BARS dual-track original source sha mismatch")
        size = checked_size(pcm["original_bytes"])
        if size != checked_size(amta["source_bytes"]):
            raise ValueError("R19 BARS source size disagreement")
        members = pcm.get("members", [])
        if not isinstance(members, list):
            raise ValueError("R19 BARS PCM member status invalid")
        wav_count = sum(member.get("status") == "converted_pcm_wav" for member in members)
        if name in seen:
            raise ValueError("R19 BARS source duplicated in media cumulative")
        seen.add(name)
        attempts.append({
            "source_path": name, "source_sha256": checked_sha(pcm["source_sha256"]),
            "source_bytes": size,
            "source_git_blob_sha": None, "category": "Sound",
            "status": normalize_status(pcm.get("status", "unknown"), wav_count,
                                       layer="release"),
            "raw_status": pcm.get("status", "unknown"),
            "source": "release-R19-cumulative-BARS-paired",
            "source_proof": "release_sha256sums_verified_pcm_and_amta_matched_sha",
            "output_proof": "historical_pcm_count_not_rehashed_now",
            "claimed_verified_media_count": wav_count,
            "evidence_level": "L3_ATTEMPT",
        })
    if len(attempts) != 3638:
        raise ValueError("R19 3558 media+80 BARS original count drift")
    return attempts, {"tag": R19_RELEASE_TAG, "media_source_rows": len(media),
                       "bars_track_rows": len(bars),
                       "unique_original_sources": len(attempts),
                       "asset_sha256s": files}


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



# Published, per-original SHA evidence. R8 has no located durable release.
# R11-R13/R15 are represented by later cumulative media baselines, not invented deltas.
EARLY_RELEASES = {
    9: ("acnh303-r9-bars-amta5-bdli-sections-20261014", "source_manifest.jsonl.gz", 32, 32),
    10: ("acnh303-r10-bars-layout-bwav-native-20261014", "bars_sources.jsonl.gz", 64, 0),
    14: ("acnh303-r14-unpack128-20261014", "bars_source_manifest.jsonl.gz", 16, 0),
    16: ("acnh303-r16-final-bwav-l3-expand-20261014", "bars_source_manifest.jsonl.gz", 36, 0),
    17: ("acnh303-r17-model-layout-bars-20261014", "bars_source_manifest.jsonl.gz", 60, 0),
    18: ("acnh303-r18-bfres-native-20261014", "bars_source_manifest.jsonl.gz", 100, 0),
}
EARLY_BDLI = "acnh303-bdli-lbli-extracted-v1"


def read_early_releases(directory: Path, expected: dict[str, str],
                        rounds: dict | None = None) -> tuple[list[dict], dict]:
    """Recover exact R9-R18 SHA-backed release sources; never count both BARS tracks.

    All source SHA fields are claims from authentic published Release manifests,
    *not* a fresh rehash of original NCA bytes. BDLI LBLI raw sections are L2 only.
    """
    rounds = EARLY_RELEASES if rounds is None else rounds
    attempts, assets = [], {}
    previous_bars = set()
    for number, (tag, asset, expected_bars, expected_bdli) in sorted(rounds.items()):
        folder = directory / f"r{number}"
        target = folder / asset
        checksum = release_sha(target, folder / "SHA256SUMS.txt")
        kind_rows = defaultdict(dict)
        for row in each_gz_row(target, max_rows=expected_bars * 2 + expected_bdli + 1):
            kind = row.get("source_type")
            if kind not in (BARS_BWAV, BARS_AMTA) and not (number == 9 and kind == EARLY_BDLI):
                raise ValueError(f"R{number}: unexpected source track {kind!r}")
            name = canonical(row["source_path"])
            if name not in expected:
                raise ValueError(f"R{number}: original missing from Git tree: {name}")
            if kind == EARLY_BDLI and not name.startswith("BDLI/"):
                raise ValueError("BDLI provenance differs from original source category")
            if kind in (BARS_BWAV, BARS_AMTA) and not (
                    name.startswith("Sound/") and name.endswith(".bars")):
                raise ValueError("BARS provenance differs from original source category")
            checked_sha(row["source_sha256"])
            size = checked_size(row["original_bytes"] if kind == BARS_BWAV
                                else row["source_bytes"])
            if kind in kind_rows[name]:
                raise ValueError(f"R{number}: duplicate source track {name} {kind}")
            kind_rows[name][kind] = (row, size)

        if len(kind_rows) != expected_bars + expected_bdli:
            raise ValueError(f"R{number}: unexpected unmatched source track or duplicate path")
        bars = {name: tracks for name, tracks in kind_rows.items() if BARS_BWAV in tracks}
        bdli = {name: tracks for name, tracks in kind_rows.items() if EARLY_BDLI in tracks}
        if len(bars) != expected_bars or len(bdli) != expected_bdli:
            raise ValueError(f"R{number}: source count mismatch: BARS={len(bars)} BDLI={len(bdli)}")
        for name, tracks in sorted(bars.items()):
            if set(tracks) != {BARS_BWAV, BARS_AMTA}:
                raise ValueError(f"R{number}: unmatched BARS/AMTA tracks: {name}")
            if name in previous_bars:
                raise ValueError(f"R{number}: repeated BARS source in earlier round: {name}")
            previous_bars.add(name)
            (pcm, nbytes), (amta, abytes) = tracks[BARS_BWAV], tracks[BARS_AMTA]
            if nbytes != abytes or pcm["source_sha256"] != amta["source_sha256"]:
                raise ValueError(f"R{number}: paired BARS source identity mismatch: {name}")
            if not isinstance(pcm.get("members", []), list) or not isinstance(amta.get("members", []), list):
                raise ValueError(f"R{number}: invalid BARS members: {name}")
            wav = 0
            for member in pcm.get("members", []):
                if member.get("status") == "converted_pcm_wav":
                    checked_sha(member["source_member_sha256"], "PCM member")
                    checked_sha(member["output_sha256"], "PCM output")
                    if member.get("validation", {}).get("frames", 0) <= 0 or member.get("output_size", 0) < 45:
                        raise ValueError(f"R{number}: invalid recorded WAV: {name}")
                    wav += 1
            for member in amta.get("members", []):
                if member.get("status") == "lossless_amta_extracted":
                    checked_sha(member["amta_sha256"], "AMTA member")
            status = ("failed" if pcm.get("status") == "parse_failed" else
                      normalize_status(pcm.get("status", "no_output"), wav, layer="release"))
            attempts.append({
                "source_path": name, "source_sha256": pcm["source_sha256"],
                "source_bytes": nbytes, "source_git_blob_sha": None,
                "category": "Sound", "status": status, "raw_status": pcm.get("status", ""),
                "source": f"historic-R{number}-published-BARS-paired",
                "source_proof": "release_sha256sums_verified_original_identity_paired",
                "output_proof": "published_wav_member_hashes_recorded_not_rehashed_now",
                "claimed_verified_media_count": wav,
                "evidence_level": "L3_ATTEMPT" if wav else "L2_NATIVE_STRUCTURE",
            })
        for name, tracks in sorted(bdli.items()):
            if set(tracks) != {EARLY_BDLI}:
                raise ValueError(f"R{number}: unexpected BDLI tracks: {name}")
            row, nbytes = tracks[EARLY_BDLI]
            sections = row.get("sections", [])
            if not isinstance(sections, list):
                raise ValueError("BDLI sections must be an array")
            extracted = 0
            for section in sections:
                if section.get("status") == "raw_extracted":
                    checked_sha(section["sha256"], "LBLI source section")
                    if checked_size(section["bytes"]) == 0:
                        raise ValueError(f"R{number}: zero-byte extracted LBLI: {name}")
                    extracted += 1
            if row.get("raw_sections_written", 0) != extracted:
                raise ValueError(f"R{number}: BDLI raw section counts conflict: {name}")
            status = ("raw_extracted" if extracted else
                      "failed" if row.get("status") == "failed" else "no_output")
            attempts.append({
                "source_path": name, "source_sha256": row["source_sha256"],
                "source_bytes": nbytes, "source_git_blob_sha": None,
                "category": "BDLI", "status": status, "raw_status": row.get("status", ""),
                "source": f"historic-R{number}-published-BDLI",
                "source_proof": "release_sha256sums_verified_original_identity",
                "output_proof": "published_lossless_lbli_section_hashes_not_rehashed_now",
                "claimed_verified_media_count": 0,
                "evidence_level": "L2_NATIVE_STRUCTURE",
            })
        assets[f"R{number}-early"] = {"tag": tag, "manifest": asset,
                                     "sha256": checksum,
                                     "original_bars": expected_bars, "original_bdli": expected_bdli}
    return attempts, assets



PRIORITY_WAVE_SCHEMA = "acnh303-priority-original-model-bdli-v1"


def read_priority_wave(path: Path, expected: dict[str, str]) -> tuple[list[dict], dict]:
    """Import real CI source byte identities; do not upgrade static evidence to media."""
    if not path.exists():
        return [], {"status": "not_yet_published"}
    report = json.loads(path.read_text("utf8"))
    selected = report.get("selection", {})
    rows = report.get("rows", [])
    count = report.get("sample_count")
    if (report.get("schema") != PRIORITY_WAVE_SCHEMA
            or selected.get("schema") != PRIORITY_WAVE_SCHEMA
            or report.get("game_version") != "3.0.3"
            or report.get("original_git_tree_sources") != len(expected)
            or report.get("exact_original_git_blob_verified") != count
            or report.get("original_source_sha256_verified") != count
            or type(report.get("producer_workflow_run_id")) is not int
            or report["producer_workflow_run_id"] <= 0
            or report.get("native_runtime_evidence_captured") is not False
            or report.get("media_conversion_performed") is not False
            or report.get("original_corpus_fully_checked") is not False
            or type(count) is not int or not 1 <= count <= 48
            or len(rows) != count or len(selected.get("sources", [])) != count):
        raise ValueError("priority wave original-byte CI report is absent or fabricated")
    known = {x["source_path"]: x["source_git_blob_sha1"] for x in selected["sources"]}
    if len(known) != count:
        raise ValueError("priority wave selection has duplicate originals")
    identities, categories, attempts = set(), Counter(), []
    for row in rows:
        path_name = canonical(row["source_path"])
        category = path_name.split("/", 1)[0]
        if category not in ("Model", "BDLI"):
            raise ValueError("priority wave attempted forbidden source category")
        git_sha = row.get("source_git_blob_sha1")
        if (path_name in identities or expected.get(path_name) != git_sha
                or known.get(path_name) != git_sha
                or row.get("original_byte_and_git_identity_verified") is not True
                or row.get("native_runtime_parity_verified") is not False
                or row.get("verified_media_outputs") != 0):
            raise ValueError("priority wave original identity or static evidence invalid")
        identities.add(path_name)
        categories[category] += 1
        status = row.get("status")
        parser = row.get("parser_status")
        level = row.get("evidence_level")
        if status not in ("no_output", "failed") or parser not in (
                "structure_verified", "probe_failed", "bounded_skip_large_source"):
            raise ValueError("priority static result falsely claimed conversion")
        if parser == "structure_verified":
            p = row.get("static_probe", {})
            if ((category == "BDLI" and
                 (p.get("type") != "BDLI_LBLI_STRUCTURAL_ONLY"
                  or p.get("semantic_level") != "L2_RAW_STRUCTURE_NOT_LOCALIZATION_SEMANTICS"))
                    or (category == "Model" and
                        (p.get("type") != "MODEL_LEAF_CLASSIFICATION"
                         or p.get("leaf_count", 0) < 1))):
                raise ValueError("priority structural status missing original static evidence")
        attempts.append({
            "source_path": path_name, "source_sha256": checked_sha(row["source_sha256"]),
            "source_bytes": checked_size(row["source_bytes"]),
            "source_git_blob_sha": git_sha, "category": category,
            "status": status, "raw_status": parser,
            "source": f"CI-priority-original-run-{report['producer_workflow_run_id']}",
            "source_proof": "original_bytes_SHA256_and_Git_blob_verified_in_priority_CI",
            "output_proof": "static_structure_only_no_L3_media_or_native_runtime",
            "claimed_verified_media_count": 0,
            "evidence_level": level,
        })
    expected_categories = selected.get("categories", {})
    if (dict(categories) != {"BDLI": count // 2, "Model": count // 2}
            or any(expected_categories[c]["selected"] != categories[c]
                   for c in ("BDLI", "Model"))):
        raise ValueError("priority Model/BDLI categories inconsistent with original selection")
    return attempts, {
        "status": "real_CI_report_source_SHA_and_Git_proof",
        "producer_run_id": report["producer_workflow_run_id"],
        "original_source_count": count,
        "categories": dict(categories),
        "media_conversion_performed": False,
        "native_runtime_evidence_captured": False,
    }


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
            "R8 BARS first-8 original report is imported only when its authenticated Release is provided; R8 core media cumulative and other early records remain a separate provenance task.",
            "R69-R72 icon source SHA and image reports are committed historical evidence; current CI does not rehash those original bytes or prove Native UI binding.",
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
    a.add_argument("--r8-bars-dir", type=Path, help="Authenticated R8 BARS report plus SHA256SUMS (only if supplied)")
    a.add_argument("--r69-r72-dir", type=Path, help="Committed R69-R72 original icon JSON shard manifests")
    a.add_argument("--r83-r84-report", type=Path, help="Verified original R83/R84 Git and Actions BCSV byte evidence")
    a.add_argument("--r50-r62-dir", type=Path, help="Committed 53 original native item PNG per-source reports")
    a.add_argument("--batches", type=Path, default=Path("UnPack/_meta/batches"))
    a.add_argument("--basic-last", type=Path, default=Path("UnPack/_meta/basic_last_manifest.json"))
    a.add_argument("--out", type=Path, default=Path("UnPack/_meta/history_sha_merge"))
    a.add_argument("--priority-wave", type=Path, default=Path("UnPack/_meta/history_sha_merge/_inputs/priority_wave_model_bdli.json"))
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
    r19, r19_asset = read_r19_baseline(args.release_dir.resolve() / "r19", expected)
    assets["R19-cumulative"] = r19_asset
    r8, r8_asset = (read_r8_bars((root / args.r8_bars_dir).resolve(), expected)
                    if args.r8_bars_dir else ([], {"status": "not_supplied"}))
    assets["R8-BARS"] = r8_asset
    early, early_assets = read_early_releases(args.release_dir.resolve(), expected)
    assets.update(early_assets)
    batch = batch_attempts((root / args.batches).resolve(), expected)
    r51 = r51_attempts((root / args.r51_artifact).resolve(), expected)
    basic = basic_attempts((root / args.basic_last).resolve(), expected)
    priority, priority_asset = read_priority_wave((root / args.priority_wave).resolve(), expected)
    assets["Priority-Model-BDLI"] = priority_asset
    from acnh303_r69_r72_source_recovery import read_committed_native_layout_batches
    image_wave, image_provenance = (read_committed_native_layout_batches(
        (root / args.r69_r72_dir).resolve(), expected)
        if args.r69_r72_dir else ([], {"status": "not_supplied"}))
    assets["R69-R72-original-layout"] = image_provenance
    from acnh303_r83_r84_source_recovery import parse_report
    bcsv_wave, bcsv_provenance = (parse_report((root / args.r83_r84_report).resolve(), expected)
        if args.r83_r84_report else ([], {"status": "not_supplied"}))
    assets["R83-R84-original-BCSV"] = bcsv_provenance
    from acnh303_r50_r62_icon_source_recovery import recover_icon_source_reports, native_png_git_paths
    icon_rows, icon_provenance = (recover_icon_source_reports(
        (root / args.r50_r62_dir).resolve(), expected, native_png_git_paths(root))
        if args.r50_r62_dir else ([], {"status": "not_supplied"}))
    assets["R50-R62-native-item-PNG"] = icon_provenance
    attempts = r19 + r8 + early + release + batch + r51 + basic + priority + image_wave + bcsv_wave + icon_rows
    records, stats = deduplicate(expected, attempts)
    stats["input_type_rows"] = {"release_R19_cumulative": len(r19),
                                 "release_R8_BARS": len(r8),
                                 "release_R9_R18_early": len(early),
                                 "release_R27_R44": len(release),
                                 "committed_batch": len(batch), "r51_real_source_ci": len(r51),
                                 "committed_basic": len(basic),
                                 "priority_original_model_bdli": len(priority),
                                 "committed_R69_R72_original_icon_sources": len(image_wave),
                                 "real_R83_R84_original_BCSV": len(bcsv_wave),
                                 "committed_R50_R62_native_icon_source_rows": len(icon_rows)}
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
