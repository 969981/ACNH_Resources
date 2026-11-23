"""Fail-closed R50–R62 53-shard original-image source recovery regression."""
from __future__ import annotations

import hashlib
import json
from pathlib import Path
import tempfile
import unittest

from acnh303_r50_r62_icon_source_recovery import (
    NCA, SCHEMA, recover_icon_source_reports,
)
from acnh303_history_sha_merge import deduplicate


def native_row(name="A"):
    return {
        "filename": name + ".png",
        "source_path": NCA + "Model/Layout_FtrIcon_" + name + ".Nin_NX_NVN.zs",
        "layout_kind": "FtrIcon",
        "status": "new_original_rom_icon",
        "original_rom_native": True,
        "in_game_ui_composition_verified": False,
        "source_bytes": 10,
        "source_sha256": hashlib.sha256(name.encode()).hexdigest(),
        "native_texture_count": 1,
        "native_brti_name": name,
        "width": 128, "height": 128,
        "native_png_sha256": "f"*64,
        "output_path": "assets/images/items/" + name + ".png",
    }


def write_batch(directory, rows, start=0):
    target = directory / ("batch-%05d-%05d.json" % (start, start+len(rows)))
    doc = {
        "schema": SCHEMA,
        "native_rom_not_cdn": True,
        "offset": start, "end": start+len(rows),
        "source_count": len(rows),
        "unmapped_count": 1254,
        "errors": 0, "quarantined": 0,
        "total_attempted": len(rows), "items": rows,
    }
    target.write_text(json.dumps(doc), encoding="utf8")
    return target


class SourceRecoveryTests(unittest.TestCase):
    def base(self, tmp):
        p = Path(tmp)
        a, b = native_row("A"), native_row("B")
        original = {r["source_path"][len(NCA):]: "1"*40 for r in (a, b)}
        output = {r["output_path"] for r in (a, b)}
        path = write_batch(p, [a, b])
        return p, path, original, output

    def recover(self, p, original, output):
        return recover_icon_source_reports(
            p, original, output, expected_manifests=1,
            expected_records=2, expected_total_originals=2,
        )

    def test_historical_source_proof_is_partial_not_complete_glb(self):
        with tempfile.TemporaryDirectory() as tmp:
            p, _, originals, output = self.base(tmp)
            rows, metadata = self.recover(p, originals, output)
            self.assertEqual(len(rows), 2)
            self.assertTrue(all(x["status"] == "partial" for x in rows))
            self.assertEqual(metadata["distinct_original_source_paths_in_batches"], 2)
            self.assertFalse(metadata["full_BFRES_or_GLB_conversion_verified"])
            self.assertFalse(metadata["native_game_UI_semantics_verified"])
            same = dict(rows[0])
            same["source"] = "committed-retry"
            ledger, stats = deduplicate(originals, rows + [same])
            self.assertEqual(len(ledger), 2)
            self.assertEqual(stats["deduplicated_retry_rows"], 1)

    def test_report_without_genuine_source_or_output_is_rejected(self):
        with tempfile.TemporaryDirectory() as tmp:
            p, path, originals, output = self.base(tmp)
            with self.assertRaisesRegex(ValueError, "native PNG not in original Git Tree"):
                self.recover(p, originals, set())
            doc = json.loads(path.read_text("utf8"))
            doc["items"][0]["source_sha256"] = "not-a-sha"
            path.write_text(json.dumps(doc), encoding="utf8")
            with self.assertRaisesRegex(ValueError, "SHA-256 absent/invalid"):
                self.recover(p, originals, output)

    def test_native_semantics_forgery_and_gap_are_rejected(self):
        with tempfile.TemporaryDirectory() as tmp:
            p, path, originals, output = self.base(tmp)
            doc = json.loads(path.read_text("utf8"))
            doc["items"][0]["in_game_ui_composition_verified"] = True
            path.write_text(json.dumps(doc), encoding="utf8")
            with self.assertRaisesRegex(ValueError, "unverified historical"):
                self.recover(p, originals, output)
            doc["items"][0]["in_game_ui_composition_verified"] = False
            doc["offset"] = 1
            path.write_text(json.dumps(doc), encoding="utf8")
            with self.assertRaisesRegex(ValueError, "metadata"):
                self.recover(p, originals, output)

    def test_duplicate_icon_name_and_source_identity_conflict(self):
        with tempfile.TemporaryDirectory() as tmp:
            p, path, originals, output = self.base(tmp)
            doc = json.loads(path.read_text("utf8"))
            doc["items"][1]["filename"] = "A.png"
            path.write_text(json.dumps(doc), encoding="utf8")
            with self.assertRaisesRegex(ValueError, "duplicate or invalid"):
                self.recover(p, originals, output)
            doc["items"][1]["filename"] = "B.png"
            doc["items"][1]["source_path"] = doc["items"][0]["source_path"]
            doc["items"][1]["source_sha256"] = "0"*64
            path.write_text(json.dumps(doc), encoding="utf8")
            with self.assertRaisesRegex(ValueError, "conflicting source SHA"):
                self.recover(p, originals, output)


if __name__ == "__main__":
    unittest.main()
