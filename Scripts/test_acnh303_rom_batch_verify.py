"""Tests for original ACNH ROM batch provenance and unresolved filename accounting."""
import hashlib
import json
import tempfile
import unittest
from pathlib import Path
from acnh303_rom_batch_verify import EvidenceError, verify


class RomEvidenceTests(unittest.TestCase):
    def setUp(self):
        self.temp = tempfile.TemporaryDirectory()
        self.root = Path(self.temp.name)
        self.folder = self.root / "assets/evidence/rom-items"
        self.folder.mkdir(parents=True)
        self.image = self.root / "assets/images/items/Example.png"
        self.image.parent.mkdir(parents=True)
        self.image.write_bytes(b"original ROM decoder PNG fixture")
        self.sha = hashlib.sha256(self.image.read_bytes()).hexdigest()
        self.row = {"filename": "Example.png", "source_path": "ROM/Layout_FtrIcon_Example.zs",
                    "status": "new_original_rom_icon", "original_rom_native": True,
                    "output_path": "assets/images/items/Example.png", "native_png_sha256": self.sha}
        self.report = {"offset": 0, "end": 1, "source_count": 2, "total_attempted": 1,
                       "items": [self.row], "original_rom_icon_count": 1,
                       "preexisting_different_native_preserved": 0,
                       "preexisting_identical": 0, "quarantined": 0, "errors": 0}
        self.put("batch-00000-00001.json", self.report)
        self.put("next-offset.json", {"next_offset": 1, "total": 2})
        self.put("unmatched-candidate-audit.json", {"unmatched_names": 1, "entries": [
            {"filename": "Unknown.png", "status": "pending_original_rom_source_verification",
             "native_png_extracted_for_this_entry": False}]})

    def tearDown(self):
        self.temp.cleanup()

    def put(self, name, value):
        (self.folder / name).write_text(json.dumps(value), encoding="utf-8")

    def check(self):
        return verify(self.root, Path("assets/evidence/rom-items"),
                      Path("assets/evidence/rom-items/unmatched-candidate-audit.json"), 1)

    def test_verified_and_pending_are_separate(self):
        result = self.check()
        self.assertEqual(result["verified_original_pngs"], 1)
        self.assertEqual(result["sources_not_yet_attempted"], 1)
        self.assertEqual(result["unmatched_names_pending_original_source_verification"], 1)

    def test_wrong_pixels_fail(self):
        self.image.write_bytes(b"not the decoded original")
        with self.assertRaises(EvidenceError):
            self.check()

    def test_pending_cannot_be_promoted(self):
        audit = json.loads((self.folder / "unmatched-candidate-audit.json").read_text())
        audit["entries"][0]["native_png_extracted_for_this_entry"] = True
        self.put("unmatched-candidate-audit.json", audit)
        with self.assertRaises(EvidenceError):
            self.check()

    def test_gap_in_batches_fails(self):
        report = dict(self.report, offset=2, end=3)
        self.put("batch-00002-00003.json", report)
        self.put("next-offset.json", {"next_offset": 3, "total": 3})
        with self.assertRaises(EvidenceError):
            self.check()

    def test_failed_source_cannot_count_as_export(self):
        broken = {"filename": "Bad.png", "source_path": "ROM/Bad.zs",
                  "status": "rom_source_or_decoder_error", "original_rom_native": True,
                  "error": "invalid BNTX"}
        report = dict(self.report, offset=1, end=2, items=[broken],
                      original_rom_icon_count=0, errors=1)
        self.put("batch-00001-00002.json", report)
        self.put("next-offset.json", {"next_offset": 2, "total": 2})
        result = self.check()
        self.assertEqual(result["verified_original_pngs"], 1)
        self.assertEqual(len(result["unresolved_processed_sources"]), 1)


if __name__ == "__main__":
    unittest.main()
