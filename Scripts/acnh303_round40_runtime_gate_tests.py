#!/usr/bin/env python3
"""Fail-closed tests. NEVER create pretend positive original Nintendo traces."""
from __future__ import annotations
import importlib.util,json,tempfile
from pathlib import Path
import acnh303_round40_runtime_evidence_gate as v
def rejects(label,fn):
 try:fn()
 except (ValueError,TypeError) as e:
  print("R40_CORRECTLY_REJECTED",label,type(e).__name__,str(e)[:110]);return
 raise AssertionError("Gate incorrectly admitted "+label)
def main():
 rejects("No session metadata",lambda:v.run_provenance({}))
 p={"source_process_kind":"acnh_3_0_3_live_game_read_only",
    "original_elf_sha256":v.ELF_SHA,
    "capture_session_id":"not-an-actual-capture; intentionally-invalid-sentinel",
    "capture_instrumentation":"Blender source fake","instrumentation_version":"test",
    "module_base_hex":"0x100000","source_device_kind":"synthetic test",
    "observer_raw_log_sha256":"0"*64,"native_game_runtime_observed":True}
 rejects("synthetic Blender impersonation",lambda:v.run_provenance({"schema":v.RUN_SCHEMA,"provenance":p}))
 r=v.oneroom_gate(None)
 assert r=={"status":"SOURCE_MISSING","matching_full_files":0}
 rejects("wrong OneRoom validator",lambda:v.oneroom_gate(write_temp({"schema":"made-up-source"})))
 rejects("AAL no event details",lambda:v.audio_gate({"aal_runtime_events":[]},{"all_original_stream_filename_CRC_entries_preserved":[]}))
 assert not v.finite_xyz([1.,2.,float("nan")])
 assert v.hex64("f"*64) and not v.hex64("X"*64)
 assert v.finite_matrix([1.]*16) and not v.finite_matrix([float("nan")]*16)
 print("R40_NEGATIVE_ONLY_REAL_RUNTIME_SOURCE_FAILS_CLOSED")
def write_temp(d):
 # Standard tempfile used only to create a deliberately invalid REPORT
 # Never a mock game run, never a positive native trace.
 import tempfile
 path=Path(tempfile.mkdtemp())/"malformed.json"
 path.write_text(json.dumps(d))
 return path
if __name__=="__main__":main()
