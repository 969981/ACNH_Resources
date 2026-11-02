#!/usr/bin/env python3
"""R49: fail-closed offline review of *candidate* FMAA writes and AAL call/return captures.

All JSONL is untrusted/unattested even when internally coherent. An observed
TexSrt value is not evidence of the source material's identity or the GPU
uniform address. A candidate AAL return is not a FileOpen/Read/Close identity.
"""
from __future__ import annotations
import argparse
import hashlib
import json
import math
import struct
from pathlib import Path
from acnh303_r48_join_texsrt_fmat import R46, R47, join

ELF_SHA = "83970061788f10049e2e60d687571b8dc87e5014521889ac4611a7f6b9c6e180"
SCHEMA = "acnh303-r49-native-observer-v1"
MAX_EVENTS = 4096
MAX_SNAPSHOT = 64

def _integer(n):
    return isinstance(n, int) and not isinstance(n, bool)

def _snapshot(s):
    if not isinstance(s, dict):
        raise ValueError("missing structured bounded snapshot")
    if s.get("status") in ("UNREADABLE", "INVALID_POINTER"):
        if "bytes_hex" in s or "sha256" in s:
            raise ValueError("failed read cannot claim bytes")
        return None
    if s.get("status") != "READ":
        raise ValueError("unrecognized snapshot status")
    if not _integer(s.get("address")) or s["address"] < 0x10000:
        raise ValueError("invalid pointer address")
    hexdata = s.get("bytes_hex")
    if not isinstance(hexdata, str) or len(hexdata) > MAX_SNAPSHOT * 2:
        raise ValueError("snapshot exceeds 64-byte cap")
    b = bytes.fromhex(hexdata)
    if len(b) != s.get("byte_length") or len(b) > MAX_SNAPSHOT:
        raise ValueError("snapshot size mismatch")
    if hashlib.sha256(b).hexdigest() != s.get("sha256"):
        raise ValueError("snapshot digest mismatch")
    return b

def _expected_animation_value(joined, material, frame):
    if not isinstance(frame, (int, float)) or isinstance(frame, bool) or not math.isfinite(frame):
        raise ValueError("invalid frame")
    if frame < 0 or frame > 50:
        return None
    entries = [e for e in joined["entries"] if e["fmat_material"] == material]
    if not entries:
        raise ValueError("unknown original Cedar material")
    s = entries[0]["bounded_offline_curve_samples"]
    if any(e["bounded_offline_curve_samples"] != s for e in entries):
        raise ValueError("inconsistent original source sample grid")
    left, right = s[0], s[-1]
    return left["value"] + (right["value"] - left["value"]) * (
        (frame - left["frame"]) / (right["frame"] - left["frame"])
    )

def analyse(capture=None, r46=R46, r47=R47):
    curve = json.loads(Path(r46).read_text("utf-8"))
    model = json.loads(Path(r47).read_text("utf-8"))
    joined = join(curve, model)
    out = {
        "schema": "acnh303-r49-runtime-evidence-audit-v1",
        "original_fmaa_sha256": joined["original_fmaa_sha256"],
        "original_fmat_static_name_candidates": joined["candidate_materials"],
        "hypothesis_source_byte_offset_not_live_uniform": "0x194",
        "trace_status": "NOT_CAPTURED",
        "aal_candidate_returns": 0,
        "fmaa_observed_write_count": 0,
        "fmaa_bounded_curve_comparisons": [],
        "runtime_FMAA_SubBindIndex_resolved": False,
        "runtime_shader_uniform_binding_verified": False,
        "runtime_gpu_texture_motion_verified": False,
        "runtime_AAL_FileOpen_Read_Close_verified": False,
        "runtime_AAL_handle_and_buffer_verified": False,
        "raw_capture_origin_independently_attested": False,
        "warning": "An input JSONL can be self-consistent but not evidence that a game ran. Capture real process, material owner and frame, then verify independent memory writes / I-O and original source.",
    }
    if capture is None:
        return out
    path = Path(capture)
    raw = path.read_bytes()
    if len(raw) > 8 * 1024 * 1024:
        raise ValueError("capture exceeds size limit")
    rows = [json.loads(line) for line in raw.decode("utf-8").splitlines() if line.strip()]
    if not rows or len(rows) > MAX_EVENTS:
        raise ValueError("empty or unbounded capture")
    sessions = {x.get("session_id") for x in rows}
    bases = {x.get("module_base") for x in rows}
    if len(sessions) != 1 or not isinstance(next(iter(sessions)), str) or not next(iter(sessions)):
        raise ValueError("missing / mixed session")
    if len(bases) != 1 or not _integer(next(iter(bases))) or next(iter(bases)) < 0x10000:
        raise ValueError("missing / mixed main base")
    base = next(iter(bases))
    last_seq = 0
    entries = {}
    returns = set()
    writes = 0
    comparisons = []
    for row in rows:
        if row.get("schema") != SCHEMA or row.get("reference_elf_sha256") != ELF_SHA:
            raise ValueError("incorrect observer schema / reference ELF")
        if row.get("live_module_independently_verified") is not False:
            raise ValueError("reference file does not attest live module")
        for claimed in ("native_file_io_verified", "native_shader_binding_verified"):
            if row.get(claimed) is not False:
                raise ValueError("observer must not assert semantic closure")
        seq = row.get("sequence")
        if not _integer(seq) or seq <= last_seq:
            raise ValueError("nonmonotone event sequence")
        last_seq = seq
        pc = row.get("pc")
        if not _integer(pc) or pc < 0x10000 or pc % 4:
            raise ValueError("invalid ARM64 PC")
        kind = row.get("type")
        if kind == "FMAA_TexSrt_WriteCandidate":
            address = row.get("texsrt_va")
            if not _integer(address) or address < 0x10000:
                raise ValueError("bad runtime TexSrt pointer")
            sample = row.get("texsrt_24_bytes")
            data = _snapshot(sample)
            if data is None or len(data) != 24 or sample["address"] != address:
                raise ValueError("FMAA requires exact 24-byte source-comparable memory")
            mode, sx, sy, rot, tx, ty = struct.unpack("<I5f", data)
            if not all(math.isfinite(x) for x in (sx, sy, rot, tx, ty)):
                raise ValueError("nonfinite TexSrt")
            material = row.get("candidate_material")
            if material not in ("mPltTreeDecoA", "mPltTreeDecoB"):
                raise ValueError("unknown candidate material label")
            frame = row.get("frame_from_runtime_pointer")
            expected = _expected_animation_value(joined, material, frame) if frame is not None else None
            comparisons.append({
                "sequence": seq, "candidate_material_UNATTESTED": material,
                "sampled_frame": frame, "observed_translation_x": tx,
                "static_expected_in_0_to_50": expected,
                "absolute_error": (abs(tx - expected) if expected is not None else None),
                "offline_candidate_value_within_0_005": (abs(tx - expected) <= .005 if expected is not None else None),
                "independent_material_owner_proven": False,
                "shader_uniform_address_proven": False,
            })
            writes += 1
        elif kind in ("AAL_CandidateEnter", "AAL_CandidateReturn"):
            call_id = row.get("call_id")
            rva = row.get("candidate_target_rva")
            if not _integer(call_id) or call_id < 1 or not _integer(rva) or rva < 0 or rva >= 0x6000000 or rva % 4:
                raise ValueError("invalid target/call identity")
            if kind == "AAL_CandidateEnter":
                if call_id in entries or pc != base + rva:
                    raise ValueError("duplicate call or target entry PC differs")
                snapshots = row.get("argument_snapshots")
                if not isinstance(snapshots, dict) or set(snapshots) != {"x0", "x1", "x2", "x3"}:
                    raise ValueError("incomplete register snapshot set")
                for snapshot in snapshots.values():
                    _snapshot(snapshot)
                entries[call_id] = (rva, seq)
            else:
                if call_id not in entries or call_id in returns or entries[call_id][0] != rva:
                    raise ValueError("unpaired or wrong candidate return")
                _snapshot(row.get("returned_buffer_candidate"))
                returns.add(call_id)
        else:
            raise ValueError("unknown observer event")
    out.update({
        "trace_status": "STRUCTURALLY_COHERENT_UNATTESTED",
        "capture_sha256": hashlib.sha256(raw).hexdigest(),
        "session_id": next(iter(sessions)), "module_base": base,
        "event_count": len(rows), "aal_candidate_calls": len(entries),
        "aal_candidate_returns": len(returns),
        "aal_unreturned_calls": len(entries) - len(returns),
        "fmaa_observed_write_count": writes,
        "fmaa_bounded_curve_comparisons": comparisons,
    })
    return out

def main():
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument("--capture", type=Path)
    p.add_argument("--curves", type=Path, default=R46)
    p.add_argument("--models", type=Path, default=R47)
    p.add_argument("--out", type=Path, required=True)
    a = p.parse_args()
    result = analyse(a.capture, a.curves, a.models)
    a.out.parent.mkdir(parents=True, exist_ok=True)
    a.out.write_text(json.dumps(result, indent=2, sort_keys=True, ensure_ascii=False) + "\n", encoding="utf-8")
    print("R49", result["trace_status"], "FMAA writes", result["fmaa_observed_write_count"],
          "AAL returns", result["aal_candidate_returns"], "verified", False)

if __name__ == "__main__":
    main()
