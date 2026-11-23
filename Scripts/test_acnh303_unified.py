"""U01: unified source runner, resume and strict SHA verification."""
from contextlib import redirect_stdout
from io import StringIO
import json
from pathlib import Path
import sys
import tempfile
import unittest
from unittest.mock import patch

from acnh303_unified import (
    NCA, main, run_one, safe_read_ledger, persist_ledger,
    select_files, verify_one,
)
from test_acnh_unpack import YAZ0


class UnifiedRunnerTests(unittest.TestCase):
    def _source(self, root):
        romfs = root / NCA / "1"
        rel = Path("System/lp_resource.Nin_NX_NVN.szs")
        file = romfs / rel
        file.parent.mkdir(parents=True)
        file.write_bytes(YAZ0)
        return romfs, rel, file

    def test_auto_selects_archive_and_never_calls_media_converter(self):
        with tempfile.TemporaryDirectory() as tmp:
            root = Path(tmp)
            romfs, rel, file = self._source(root)
            row = run_one(root, root / "UnPack", romfs, file, "auto")
            self.assertEqual(row["route"], "archive")
            self.assertEqual(row["evidence_level"], "L1")
            self.assertEqual(row["status"], "raw_extracted")
            self.assertEqual(len(row["outputs"]), 2)
            verify_one(romfs, root / "UnPack", row)
            target = root / "UnPack" / row["outputs"][0]["path"]
            target.write_bytes(b"tampered")
            with self.assertRaisesRegex(ValueError, "SHA-256"):
                verify_one(romfs, root / "UnPack", row)

    def test_cli_file_resume_verify_and_ledger_integrity(self):
        with tempfile.TemporaryDirectory() as tmp:
            root = Path(tmp)
            romfs, rel, file = self._source(root)
            argv = ["acnh303_unified", "--root", str(root), "--file", rel.as_posix(), "--strict"]
            with patch.object(sys, "argv", argv), redirect_stdout(StringIO()):
                self.assertEqual(main(), 0)
            ledger = root / "UnPack/_meta/unified/source_manifest.jsonl"
            rows = safe_read_ledger(ledger)
            self.assertEqual(list(rows), [rel.as_posix()])
            self.assertEqual(rows[rel.as_posix()]["source_sha256"],
                             __import__("hashlib").sha256(YAZ0).hexdigest())
            with patch.object(sys, "argv", argv + ["--resume"]), redirect_stdout(StringIO()):
                self.assertEqual(main(), 0)
            self.assertEqual(len(safe_read_ledger(ledger)), 1)
            with patch.object(sys, "argv", ["acnh303_unified", "--root", str(root),
                                           "--verify", "--strict"]), redirect_stdout(StringIO()):
                self.assertEqual(main(), 0)
            content = ledger.read_text("utf8")
            ledger.write_text(content + content, encoding="utf8")
            with self.assertRaisesRegex(ValueError, "duplicate original source"):
                safe_read_ledger(ledger)

    def test_stable_sharding_and_no_traversal(self):
        with tempfile.TemporaryDirectory() as tmp:
            root = Path(tmp)
            romfs, _, file = self._source(root)
            chosen = [i for i in range(16)
                      if select_files(romfs, None, "System", i, 16, 0)]
            self.assertEqual(len(chosen), 1)
            self.assertEqual(select_files(romfs, None, "System", chosen[0], 16, 0), [file])
            for name in ("../bad", "C:/bad", "/abs"):
                with self.assertRaises((ValueError, OSError)):
                    select_files(romfs, name, None, 0, 1, 10)


if __name__ == "__main__":
    unittest.main()
