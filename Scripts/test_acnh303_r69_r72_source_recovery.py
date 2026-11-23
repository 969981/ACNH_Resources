"""Fail-closed tests for R69-R72 committed source-level texture evidence."""
from __future__ import annotations

import json
from pathlib import Path
import tempfile
import unittest

from acnh303_r69_r72_source_recovery import (
    SCHEMA, NCA_PREFIX, read_committed_native_layout_batches,
)
from acnh303_history_sha_merge import deduplicate


def record(family: str, suffix: str = "Example"):
    return {
        "source": NCA_PREFIX + f"Model/Layout_{family}_{suffix}.Nin_NX_NVN.zs",
        "category": family,
        "status": "one_original_rom_texture_exported",
        "native_rom_source": True,
        "native_full_BRTI_name_equal_expected": True,
        "original_image_UI_runtime_binding_verified": False,
        "original_source_sha256": "a" * 64,
        "original_source_bytes": 123,
        "pngs": [{
            "sha256": "b" * 64,
            "bytes": 345,
            "output": f"assets/images/{family}/{suffix}.png",
            "full_pixel_decode": "Pillow.Image.load",
            "native_PNG_crc_sha_reverified": True,
        }],
    }


def report(family: str, entries: list[dict]):
    return {
        "schema": SCHEMA,
        "family": family,
        "source_count": len(entries),
        "entries": entries,
        "native_exact_single_BRTI_PNGs": len(entries),
        "failed_sources": 0,
        "multi_texture_sources": 0,
        "no_texture_sources": 0,
        "source_and_output_sha_provenance_per_record": True,
        "UI_runtime_rendering_verified": False,
    }


class NativeIconSourceRecoveryTests(unittest.TestCase):
    def create_case(self, directory: Path):
        names = {
            "ClosetIcon": "ClosetIcon-00000-00001.json",
            "FtrIcon": "FtrIcon-00000-00001.json",
            "GardeningIcon": "GardeningIcon-00000-00003.json",
        }
        original = {}
        for family, filename in names.items():
            row = record(family)
            (directory / filename).write_text(
                json.dumps(report(family, [row])), encoding="utf8"
            )
            original[row["source"][len(NCA_PREFIX):]] = "f" * 40
        return names, original

    def recover(self, directory, originals):
        return read_committed_native_layout_batches(
            directory, originals,
            expected_counts={"ClosetIcon": 1, "FtrIcon": 1, "GardeningIcon": 1},
            expected_closet_shards=1,
        )

    def test_recovers_three_distinct_source_identities_not_native_parity(self):
        with tempfile.TemporaryDirectory() as temp:
            directory = Path(temp)
            _, originals = self.create_case(directory)
            rows, provenance = self.recover(directory, originals)
            self.assertEqual(len(rows), 3)
            self.assertEqual(provenance["original_source_count"], 3)
            self.assertFalse(provenance["native_runtime_semantics_verified"])
            self.assertTrue(all(r["status"] == "partial" for r in rows))
            self.assertTrue(all(r["source_git_blob_sha"] is None for r in rows))
            ledger, stats = deduplicate(originals, rows + [dict(rows[0])])
            self.assertEqual(len(ledger), 3)
            self.assertEqual(stats["deduplicated_retry_rows"], 1)

    def test_tampered_png_or_missing_source_is_rejected(self):
        with tempfile.TemporaryDirectory() as temp:
            directory = Path(temp)
            names, originals = self.create_case(directory)
            p = directory / names["ClosetIcon"]
            content = json.loads(p.read_text("utf8"))
            content["entries"][0]["pngs"][0]["native_PNG_crc_sha_reverified"] = False
            p.write_text(json.dumps(content), encoding="utf8")
            with self.assertRaisesRegex(ValueError, "PNG historical validation"):
                self.recover(directory, originals)
            content["entries"][0]["pngs"][0]["native_PNG_crc_sha_reverified"] = True
            p.write_text(json.dumps(content), encoding="utf8")
            originals.pop("Model/Layout_ClosetIcon_Example.Nin_NX_NVN.zs")
            with self.assertRaisesRegex(ValueError, "invalid/duplicate"):
                self.recover(directory, originals)

    def test_false_runtime_claim_duplicate_source_or_sha_is_rejected(self):
        with tempfile.TemporaryDirectory() as temp:
            directory = Path(temp)
            names, originals = self.create_case(directory)
            p = directory / names["FtrIcon"]
            content = json.loads(p.read_text("utf8"))
            content["entries"][0]["original_image_UI_runtime_binding_verified"] = True
            p.write_text(json.dumps(content), encoding="utf8")
            with self.assertRaisesRegex(ValueError, "semantically overstated"):
                self.recover(directory, originals)
            content["entries"][0]["original_image_UI_runtime_binding_verified"] = False
            content["entries"][0]["original_source_sha256"] = "fake"
            p.write_text(json.dumps(content), encoding="utf8")
            with self.assertRaisesRegex(ValueError, "SHA-256 absent/invalid"):
                self.recover(directory, originals)
            content["entries"][0]["original_source_sha256"] = "a" * 64
            p.write_text(json.dumps(content), encoding="utf8")
            p = directory / names["ClosetIcon"]
            content = json.loads(p.read_text("utf8"))
            content["source_count"] += 1
            p.write_text(json.dumps(content), encoding="utf8")
            with self.assertRaisesRegex(ValueError, "rows/count"):
                self.recover(directory, originals)


if __name__ == "__main__":
    unittest.main()
