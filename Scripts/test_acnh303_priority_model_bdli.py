"""Real Model+BDLI priority wave: fail-closed selection and bounded static evidence."""
import hashlib
import json
from pathlib import Path
import struct
import tempfile
import unittest

import zstandard as zstd

from acnh303_full_audit import git_blob_sha1
from acnh303_priority_model_bdli import (
    NCA, analyze_source, build_plan, sha_shard, static_bdli, static_model,
)


class PriorityWaveTests(unittest.TestCase):
    def test_selection_deterministic_never_recounts_imported_paths(self):
        expected = {
            **{f"Model/M{i:03d}.zs": f"{i:040x}" for i in range(20)},
            **{f"BDLI/String/B{i:03d}.bdli.zs": f"{i+100:040x}" for i in range(20)},
        }
        excluded = {"Model/M001.zs", "BDLI/String/B004.bdli.zs"}
        a = build_plan(expected, excluded, shard=0, shards=1, per_category=4)
        b = build_plan(expected, excluded, shard=0, shards=1, per_category=4)
        self.assertEqual(a, b)
        self.assertEqual(len(a["sources"]), 8)
        self.assertTrue(all(s["source_path"] not in excluded for s in a["sources"]))
        self.assertEqual(a["categories"]["Model"]["selected"], 4)
        self.assertEqual(a["categories"]["BDLI"]["selected"], 4)
        with self.assertRaisesRegex(ValueError, "non-Git"):
            build_plan(expected, excluded | {"BDLI/nonexistent"}, shard=0, shards=1, per_category=1)
        with self.assertRaisesRegex(ValueError, "fewer"):
            build_plan(expected, excluded, shard=0, shards=1, per_category=20)

    def test_bdli_exact_sections_are_l2_not_language_semantics(self):
        plain = (struct.pack("<4sHHIII", b"BDLI", 2, 1, 0, 20, 36)
                 + struct.pack("<4sIII", b"LBLI", 1, 16, 0x12345678)
                 + b"payload")
        compressed = zstd.ZstdCompressor().compress(plain)
        parsed = static_bdli(compressed)
        self.assertEqual(parsed["directory_sections"], 1)
        self.assertEqual(parsed["nonempty_section_sha_verified"], 1)
        self.assertIn("NOT_LOCALIZATION", parsed["semantic_level"])
        corrupt = bytearray(plain)
        corrupt[:4] = b"XXXX"
        with self.assertRaises(ValueError):
            static_bdli(zstd.ZstdCompressor().compress(bytes(corrupt)))

    def test_real_source_bytes_git_hash_and_no_fabricated_media(self):
        with tempfile.TemporaryDirectory() as tmp:
            root = Path(tmp)
            name = "BDLI/String/test.bdli.zs"
            source = root / NCA / "1" / name
            source.parent.mkdir(parents=True)
            plain = (struct.pack("<4sHHIII", b"BDLI", 2, 1, 0, 20, 36)
                     + struct.pack("<4sIII", b"LBLI", 1, 16, 0x42) + b"exact")
            source.write_bytes(zstd.ZstdCompressor().compress(plain))
            blob = git_blob_sha1(source)
            record = analyze_source(root, name, blob)
            self.assertEqual(record["source_sha256"], hashlib.sha256(source.read_bytes()).hexdigest())
            self.assertEqual(record["source_git_blob_sha1"], blob)
            self.assertEqual(record["parser_status"], "structure_verified")
            self.assertEqual(record["status"], "no_output")
            self.assertEqual(record["evidence_level"], "L2_NATIVE_STRUCTURE")
            self.assertEqual(record["verified_media_outputs"], 0)
            self.assertFalse(record["native_runtime_parity_verified"])
            with self.assertRaisesRegex(ValueError, "Git blob mismatch"):
                analyze_source(root, name, "0" * 40)

    def test_model_leaf_probe_is_not_media_conversion(self):
        sample = static_model("Model/sample.zs", b"ordinary raw original bytes")
        self.assertEqual(sample["leaf_count"], 1)
        self.assertEqual(len(sample["leaf_digest_root"]), 64)
        self.assertIn("NOT_GLTF", sample["semantic_level"])


if __name__ == "__main__":
    unittest.main()
