"""U12: Git-tree exact-set, Git SHA-1 versus actual source SHA-256, output checks."""
from pathlib import Path
import hashlib
import subprocess
import tempfile
import unittest

from acnh303_full_audit import inventory_from_git, reconcile
from acnh303_unified import NCA, run_one
from test_acnh_unpack import BYML, YAZ0


class WholeTreeGateTests(unittest.TestCase):
    @staticmethod
    def _repo(root):
        source = root / NCA / "1"
        for rel, payload in (("System/lp_resource.Nin_NX_NVN.szs", YAZ0),
                             ("Stage/house.byml", BYML)):
            path = source / rel
            path.parent.mkdir(parents=True, exist_ok=True)
            path.write_bytes(payload)
        def git(*args):
            subprocess.run(["git", *args], cwd=root, check=True,
                           stdout=subprocess.DEVNULL, stderr=subprocess.PIPE)
        git("init", "-q")
        git("config", "user.name", "test")
        git("config", "user.email", "unit@test.invalid")
        git("add", NCA)
        git("commit", "-q", "-m", "fixtures")
        return source

    def test_missing_source_cannot_pass_full_gate(self):
        with tempfile.TemporaryDirectory() as tmp:
            root = Path(tmp)
            src = self._repo(root)
            expected = inventory_from_git(root)
            self.assertEqual(len(expected), 2)
            out = root / "UnPack"
            row = run_one(root, out, src, src / "System/lp_resource.Nin_NX_NVN.szs",
                          mode="archive")
            report = reconcile(root, out, expected, {row["source_path"]: row})
            self.assertEqual(report["git_original_sources"], 2)
            self.assertEqual(report["ledger_source_count"], 1)
            self.assertEqual(report["source_paths_missing_from_ledger"], 1)
            self.assertFalse(report["full_l0_record_coverage"])
            self.assertFalse(report["strict_gate_pass"])
            self.assertEqual(report["original_sources_byte_and_git_blob_verified"], 1)
            self.assertEqual(report["verified_output_files"], 2)

    def test_source_git_blob_and_outputs_are_independently_checked(self):
        with tempfile.TemporaryDirectory() as tmp:
            root = Path(tmp)
            src = self._repo(root)
            expected = inventory_from_git(root)
            out = root / "UnPack"
            row = run_one(root, out, src, src / "System/lp_resource.Nin_NX_NVN.szs",
                          mode="archive")
            other = {
                "source_path": "Stage/house.byml",
                "source_bytes": len(BYML),
                "source_sha256": hashlib.sha256(BYML).hexdigest(),
                "evidence_level": "L0", "status": "unsupported", "outputs": [],
            }
            records = {row["source_path"]: row, other["source_path"]: other}
            report = reconcile(root, out, expected, records, require_real_sources=True)
            self.assertTrue(report["full_l0_record_coverage"])
            self.assertTrue(report["full_original_bytes_verified"])
            self.assertTrue(report["strict_gate_pass"])
            self.assertFalse(report["full_l4_semantic_parity"])
            (src / "Stage/house.byml").write_bytes(BYML + b"corrupt")
            report = reconcile(root, out, expected, records, require_real_sources=True)
            self.assertFalse(report["strict_gate_pass"])
            self.assertIn("source_sha_git_blob_or_size_mismatch",
                          [r["kind"] for r in report["problems"]])
            (src / "Stage/house.byml").write_bytes(BYML)
            (out / row["outputs"][0]["path"]).write_bytes(b"corrupt")
            report = reconcile(root, out, expected, records, require_real_sources=True)
            self.assertFalse(report["strict_gate_pass"])
            self.assertIn("output_missing_or_checksum_mismatch",
                          [r["kind"] for r in report["problems"]])

    def test_fake_l3_without_files_cannot_pass(self):
        with tempfile.TemporaryDirectory() as tmp:
            root = Path(tmp)
            source = self._repo(root)
            expected = inventory_from_git(root)
            bad = {"source_path": "Stage/house.byml", "source_bytes": len(BYML),
                   "source_sha256": hashlib.sha256(BYML).hexdigest(),
                   "status": "converted", "evidence_level": "L3", "outputs": []}
            report = reconcile(root, root / "UnPack", expected,
                               {bad["source_path"]: bad})
            self.assertFalse(report["strict_gate_pass"])
            self.assertIn("false_converted_no_outputs",
                          [x["kind"] for x in report["problems"]])


if __name__ == "__main__":
    unittest.main()
