#!/usr/bin/env python3
"""ACNH 3.0.3 BDLI/LBLI source-backed native consumer evidence gate.

Git original bytes and the static LBLI directory are verifiable in CI.
The real Nintendo game consumer cannot be established without independently
attested same-session runtime observations and a proven loader/lookup call
chain. GDB register anchor hits alone NEVER pass Native semantic parity.
"""
from __future__ import annotations

import argparse
import hashlib
import json
from pathlib import Path
import re

from acnh303_bdli import parse_bdli
from acnh303_full_audit import inventory_from_git
from acnh303_history_sha_merge import canonical
from acnh_formats import decompress

NCA = "e10617820db06889e1638499478da0de_NCA/1/"
OBS_SCHEMA = "acnh303-bdli-live-register-anchor-v1"
REPORT_SCHEMA = "acnh303-bdli-consumer-native-evidence-gate-v1"
HEX64 = re.compile(r"^[0-9a-f]{64}$")
DEFAULT_ORIGINAL = "BDLI/String/CNzh/STR_CategoryName.bdli.zs"


def git_blob_sha(data: bytes) -> str:
    return hashlib.sha1(f"blob {len(data)}\0".encode() + data).hexdigest()


def source_structure(root: Path, path: str, git_tree: dict[str, str]) -> dict:
    path = canonical(path)
    if not path.startswith("BDLI/") or not path.endswith(".zs") or path not in git_tree:
        raise ValueError("BDLI original source absent/invalid in Git Tree")
    original = (root / NCA / path).read_bytes()
    if not 0 < len(original) <= 16 * 1024 * 1024:
        raise ValueError("compressed BDLI original bounds invalid")
    git_sha = git_blob_sha(original)
    if git_sha != git_tree[path]:
        raise ValueError("original BDLI Git blob SHA mismatch")
    raw, codec = decompress(original, 64 * 1024 * 1024)
    if codec != "zstd":
        raise ValueError("original BDLI source is not expected zstd")
    info = parse_bdli(raw)
    return {
        "source_path": path,
        "source_bytes": len(original),
        "source_sha256": hashlib.sha256(original).hexdigest(),
        "source_git_blob_sha1": git_sha,
        "BDLI_uncompressed_bytes": len(raw),
        "BDLI_uncompressed_sha256": hashlib.sha256(raw).hexdigest(),
        "LBLI_section_count": info["section_count"],
        "LBLI_section_directory_sha256": hashlib.sha256(
            raw[info["directory_offset"]:info["payload_offset"]]
        ).hexdigest(),
        "LBLI_sections": [{
            "index": entry["index"], "identifier_hex": entry["identifier_hex"],
            "offset": entry["offset_absolute"], "bytes": entry["byte_length"],
            "sha256": entry["sha256"],
        } for entry in info["sections"]],
        "source_bytes_and_git_blob_verified_now": True,
        "native_consumer_verified": False,
    }


def validate_capture(data: bytes) -> dict:
    """Validate format only. A self-contained log cannot attest its own origin."""
    if not 0 < len(data) <= 8_000_000:
        raise ValueError("empty/oversized GDB observer capture")
    events = []
    session = None
    signature = None
    previous = 0
    for line in data.splitlines():
        if not line:
            continue
        if len(line) > 20000 or len(events) >= 20000:
            raise ValueError("unbounded observer record")
        event = json.loads(line)
        if event.get("schema") != OBS_SCHEMA:
            raise ValueError("wrong BDLI observer schema")
        if event.get("native_runtime_verified") is not False:
            raise ValueError("self-proclaimed Native result is forbidden")
        sid = event.get("session_id")
        build = event.get("build_id")
        elf = event.get("elf_sha256")
        if (not isinstance(sid, str) or not sid.strip()
                or not isinstance(build, str) or not build.strip()
                or not isinstance(elf, str) or not HEX64.fullmatch(elf)):
            raise ValueError("original game session provenance metadata missing")
        next_session = (sid, build, elf)
        if session is not None and next_session != session:
            raise ValueError("mixed GDB sessions/builds/ELF")
        session = next_session
        base, pc, rva, seq = (event.get("main_base"), event.get("pc"),
                              event.get("rva"), event.get("sequence"))
        if any(type(x) is not int for x in (base, pc, rva, seq)):
            raise ValueError("PC/base/RVA/sequence are not exact integers")
        if (base < 65536 or base % 4096 or rva <= 0 or rva % 4
                or pc != base + rva or seq <= previous):
            raise ValueError("GDB PC/RVA/session sequence mismatch")
        previous = seq
        regs = event.get("registers")
        if not isinstance(regs, dict) or any(
            type(regs.get(k)) is not int or not 0 <= regs[k] < (1<<64)
            for k in ("x0","x1","x2","x3","x4","x5","x6","x7")
        ):
            raise ValueError("missing actual observed ARM64 register set")
        events.append((rva,seq))
    if not events:
        raise ValueError("capture has no events")
    return {
        "status": "REGISTER_ANCHOR_CANDIDATES_ONLY_UNATTESTED",
        "raw_capture_sha256": hashlib.sha256(data).hexdigest(),
        "session_id": session[0], "build_id": session[1],
        "elf_sha256": session[2],
        "candidate_anchor_hits": len(events),
        "distinct_candidate_RVAs": len(set(r for r,_ in events)),
        "real_BDLI_consumer_call_chain_verified": False,
        "native_language_fallback_or_control_code_semantics_verified": False,
        "warning": "Even well-formed GDB JSON can be synthetic; original live logs, Build ID, loader/lookup address proof, and same-session consumer IO are required separately.",
    }


def gate(structure: dict, capture: bytes | None = None) -> dict:
    observation = ({
        "status": "NOT_CAPTURED", "candidate_anchor_hits": 0,
        "real_BDLI_consumer_call_chain_verified": False,
        "native_language_fallback_or_control_code_semantics_verified": False,
    } if capture is None else validate_capture(capture))
    return {
        "schema": REPORT_SCHEMA, "game_version": "3.0.3",
        "source_proof": structure, "runtime_observation": observation,
        "source_structure_verified": True,
        "actual_nintendo_native_consumer_verified": False,
        "native_runtime_parity_verified": False,
        "native_status": "NOT_CAPTURED" if capture is None else "CANDIDATE_UNATTESTED",
        "required_for_future_native_success": [
            "Verified exact 3.0.3 main Build ID, ELF and module mapping",
            "Proven original loader/lookup RVA via native call chain",
            "Same-session source BDLI resource open/decompress/load and LBLI identifier lookup",
            "Control code/localization/fallback runtime input-output samples",
            "Original raw GDB source log, hashes and manual provenance review",
        ],
    }


def main() -> None:
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument("--root", type=Path, default=Path("."))
    p.add_argument("--source", default=DEFAULT_ORIGINAL)
    p.add_argument("--capture", type=Path, help="Optional REAL game GDB observer JSONL")
    p.add_argument("--out", type=Path, required=True)
    a = p.parse_args()
    root = a.root.resolve()
    git = inventory_from_git(root)
    if len(git) != 103400:
        raise ValueError("real original Git tree inventory has changed")
    structure = source_structure(root, a.source, git)
    runtime = a.capture.read_bytes() if a.capture else None
    report = gate(structure, runtime)
    a.out.parent.mkdir(parents=True, exist_ok=True)
    a.out.write_text(json.dumps(report, indent=2, ensure_ascii=False,
                                sort_keys=True) + "\n", encoding="utf8")
    print(json.dumps({"source": structure["source_path"],
                      "sections": structure["LBLI_section_count"],
                      "native_status": report["native_status"],
                      "consumer_verified": False}, ensure_ascii=False))


if __name__ == "__main__":
    main()
