"""R49 regression: synthetic observers test validation ONLY, not native execution."""
import copy
import hashlib
import json
import struct
import tempfile
import unittest
from pathlib import Path
from acnh303_round49_runtime_audit import analyse, SCHEMA, ELF_SHA

BASE = 0x10000000
def snap(data, va):
    return {"status": "READ", "address": va, "byte_length": len(data),
            "bytes_hex": data.hex(), "sha256": hashlib.sha256(data).hexdigest()}

def row(kind, seq, pc):
    return {"schema": SCHEMA, "session_id": "TEST_SYNTHETIC_NOT_GAME",
            "module_base": BASE, "sequence": seq, "pc": pc, "type": kind,
            "reference_elf_sha256": ELF_SHA,
            "live_module_independently_verified": False,
            "native_file_io_verified": False, "native_shader_binding_verified": False}

def write_test(rows):
    temp = tempfile.TemporaryDirectory()
    p = Path(temp.name) / "events.jsonl"
    p.write_text("".join(json.dumps(x) + "\n" for x in rows), "utf-8")
    return temp, p

class R49Test(unittest.TestCase):
    def test_real_source_evidence_no_runtime_capture(self):
        a = analyse()
        self.assertEqual(a["original_fmat_static_name_candidates"], 8)
        self.assertEqual(a["trace_status"], "NOT_CAPTURED")
        self.assertFalse(a["runtime_shader_uniform_binding_verified"])
        self.assertFalse(a["runtime_AAL_FileOpen_Read_Close_verified"])

    def test_synthetic_watched_texsrt_offline_candidate_not_proof(self):
        x = row("FMAA_TexSrt_WriteCandidate", 1, BASE + 0x1000)
        x.update({"candidate_material": "mPltTreeDecoA", "texsrt_va": BASE + 0x9000,
                  "frame_from_runtime_pointer": 25.0,
                  "texsrt_24_bytes": snap(struct.pack("<I5f", 0, 1., 1., 0., .25, 0.),
                                           BASE + 0x9000)})
        temp, path = write_test([x])
        try:
            r = analyse(path)
            self.assertEqual(r["fmaa_observed_write_count"], 1)
            self.assertTrue(r["fmaa_bounded_curve_comparisons"][0]["offline_candidate_value_within_0_005"])
            self.assertFalse(r["runtime_FMAA_SubBindIndex_resolved"])
            self.assertFalse(r["runtime_shader_uniform_binding_verified"])
        finally:
            temp.cleanup()

    def test_synthetic_aal_call_return_unattested(self):
        x = row("AAL_CandidateEnter", 1, BASE + 0x2000)
        x.update({"call_id": 1, "candidate_target_rva": 0x2000,
                  "argument_snapshots": {k: {"status": "INVALID_POINTER"} for k in
                                         ("x0", "x1", "x2", "x3")}})
        y = row("AAL_CandidateReturn", 2, BASE + 0x2010)
        y.update({"call_id": 1, "candidate_target_rva": 0x2000,
                  "returned_buffer_candidate": {"status": "INVALID_POINTER"}})
        temp, path = write_test([x, y])
        try:
            result = analyse(path)
            self.assertEqual(result["aal_candidate_returns"], 1)
            self.assertFalse(result["runtime_AAL_handle_and_buffer_verified"])
        finally:
            temp.cleanup()

    def test_reject_corrupted_snapshot(self):
        x = row("FMAA_TexSrt_WriteCandidate", 1, BASE + 0x1000)
        s = snap(struct.pack("<I5f", 0, 1., 1., 0., 0., 0.), BASE + 0x9000)
        s["sha256"] = "0" * 64
        x.update({"candidate_material": "mPltTreeDecoA", "texsrt_va": BASE + 0x9000,
                  "frame_from_runtime_pointer": None, "texsrt_24_bytes": s})
        temp, path = write_test([x])
        try:
            with self.assertRaises(ValueError):
                analyse(path)
        finally:
            temp.cleanup()

    def test_r46_same_session_dispatch_target_validation(self):
        x = row("AAL_CandidateEnter", 1, BASE + 0x2000)
        x.update({"call_id": 1, "candidate_target_rva": 0x2000,
                  "argument_snapshots": {k: {"status": "INVALID_POINTER"} for k in
                                         ("x0", "x1", "x2", "x3")}})
        d = {"schema": "acnh303-r46-gdb-indirect-dispatch-observer-v1",
             "ELF_reference_file_sha256": ELF_SHA,
             "type": "IndirectBLRX8", "session_id": "TEST_SYNTHETIC_NOT_GAME",
             "module_base": BASE, "rva": 0x3e451fc,
             "pc": BASE + 0x3e451fc, "vtable_slot_offset": 0x20,
             "resolved_target_va": BASE + 0x2000,
             "slot_equals_register_x8": True}
        temp, path = write_test([x])
        dp = Path(temp.name) / "dispatch.jsonl"
        try:
            dp.write_text(json.dumps(d) + "\\n", encoding="utf-8")
            result = analyse(path, dispatch=dp)
            self.assertTrue(result["aal_r46_dispatch_targets_correlated"])
            self.assertFalse(result["runtime_AAL_FileOpen_Read_Close_verified"])
            d["resolved_target_va"] = BASE + 0x3000
            dp.write_text(json.dumps(d) + "\\n", encoding="utf-8")
            with self.assertRaises(ValueError):
                analyse(path, dispatch=dp)
        finally:
            temp.cleanup()

    def test_reject_false_native_proof(self):
        x = row("AAL_CandidateEnter", 1, BASE + 0x2000)
        x.update({"call_id": 1, "candidate_target_rva": 0x2000,
                  "argument_snapshots": {k: {"status": "INVALID_POINTER"} for k in
                                         ("x0", "x1", "x2", "x3")},
                  "native_file_io_verified": True})
        temp, path = write_test([x])
        try:
            with self.assertRaises(ValueError):
                analyse(path)
        finally:
            temp.cleanup()

if __name__ == "__main__":
    unittest.main()
