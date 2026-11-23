"""R83/R84 real BCSV artifact originality and anti-fabrication tests."""
from __future__ import annotations

import hashlib
import json
from pathlib import Path
import tempfile
import unittest

from acnh303_r83_r84_source_recovery import (
    NCA, R83_RUN, R84_RUN, build_report, git_blob, parse_report,
    sha256, verify_persisted_originals, validate_source,
)


class R83R84SourceProofTests(unittest.TestCase):
    def setup_case(self, base: Path):
        root = base / "root"
        artifacts = {R83_RUN: base / "artifact83", R84_RUN: base / "artifact84"}
        entries = {
            "Bcsv/FakeNPC.bcsv": (R83_RUN, b"\x00"*12+b"VSCB"+b"NPC"),
            "Bcsv/FakeItem.bcsv": (R84_RUN, b"\x00"*12+b"VSCB"+b"ITEM"),
        }
        specs = {}
        git = {}
        for name, (run, contents) in entries.items():
            specs[name] = (run, len(contents), sha256(contents), git_blob(contents))
            git[name] = git_blob(contents)
            for dirname in (root, artifacts[run]):
                path = dirname / NCA / name
                path.parent.mkdir(parents=True, exist_ok=True)
                path.write_bytes(contents)
        return root, artifacts, specs, git

    def test_real_artifact_equals_original_and_stores_only_raw_proof(self):
        with tempfile.TemporaryDirectory() as tmp:
            p = Path(tmp)
            root, artifacts, specs, git = self.setup_case(p)
            doc = build_report(root, artifacts, git, specs=specs)
            self.assertEqual(doc["source_count"], 2)
            self.assertFalse(doc["native_runtime_evidence_captured"])
            report = p / "report.json"
            report.write_text(json.dumps(doc), encoding="utf8")
            attempts, source = parse_report(report, git, specs=specs)
            self.assertEqual(len(attempts), 2)
            self.assertTrue(all(x["status"] == "raw_extracted" for x in attempts))
            self.assertTrue(all(x["claimed_verified_media_count"] == 0 for x in attempts))
            self.assertEqual(source["source_count"], 2)

    def test_artifact_tamper_and_wrong_git_blob_fail(self):
        with tempfile.TemporaryDirectory() as tmp:
            p = Path(tmp)
            root, artifacts, specs, git = self.setup_case(p)
            path = artifacts[R83_RUN] / NCA / "Bcsv/FakeNPC.bcsv"
            path.write_bytes(path.read_bytes() + b"BAD")
            with self.assertRaisesRegex(ValueError, "BCSV SHA/bytes/Git blob"):
                build_report(root, artifacts, git, specs=specs)
            good = root / NCA / "Bcsv/FakeNPC.bcsv"
            path.write_bytes(good.read_bytes())
            git["Bcsv/FakeNPC.bcsv"] = "f"*40
            with self.assertRaisesRegex(ValueError, "Git Tree original blob mismatch"):
                build_report(root, artifacts, git, specs=specs)

    def test_reject_forged_provenance_and_runtime(self):
        with tempfile.TemporaryDirectory() as tmp:
            p = Path(tmp)
            root, artifacts, specs, git = self.setup_case(p)
            doc = build_report(root, artifacts, git, specs=specs)
            report = p / "report.json"
            doc["rows"][0]["source_sha256"] = "0"*64
            report.write_text(json.dumps(doc), encoding="utf8")
            with self.assertRaisesRegex(ValueError, "identity/status forged"):
                parse_report(report, git, specs=specs)
            doc = build_report(root, artifacts, git, specs=specs)
            doc["rows"][0]["native_runtime_parity_verified"] = True
            report.write_text(json.dumps(doc), encoding="utf8")
            with self.assertRaisesRegex(ValueError, "identity/status forged"):
                parse_report(report, git, specs=specs)
            doc = build_report(root, artifacts, git, specs=specs)
            doc["source_count"] += 1
            report.write_text(json.dumps(doc), encoding="utf8")
            with self.assertRaisesRegex(ValueError, "provenance report invalid"):
                parse_report(report, git, specs=specs)

    def test_bcsv_header_mandatory(self):
        data = b"0"*16
        with self.assertRaisesRegex(ValueError, "BCSV header"):
            validate_source(data, size=len(data), digest=sha256(data), blob=git_blob(data))


if __name__ == "__main__":
    unittest.main()
