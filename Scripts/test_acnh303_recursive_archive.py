"""U02: real historical Yaz0/SARC bytes, bounded recursion, collision safety."""
import hashlib
import json
from pathlib import Path
import tempfile
import unittest

from acnh_formats import FormatError, safe_member_name
from acnh303_recursive_archive import (
    NCA, expand_archive, materialize, process_source, sha,
)
from test_acnh_unpack import YAZ0


class RecursiveArchiveTests(unittest.TestCase):
    def test_original_yaz0_sarc_two_raw_leaves_and_sha_provenance(self):
        layers, leaves = expand_archive(YAZ0)
        self.assertEqual([x["format"] for x in layers[:2]], ["yaz0", "sarc"])
        self.assertEqual(len(leaves), 2)
        self.assertEqual(leaves[0]["relative_path"], "source.members/lp_resource.sharc")
        self.assertEqual(leaves[1]["relative_path"], "source.members/lp_resource.sharcb")
        self.assertEqual(layers[0]["sha256"], hashlib.sha256(YAZ0).hexdigest())
        for leaf in leaves:
            self.assertEqual(leaf["sha256"], sha(leaf["_raw"]))
            self.assertEqual(leaf["container_chain"], ["yaz0", "sarc"])
            self.assertEqual(leaf["status"], "raw_leaf_not_semantically_decoded")

    def test_real_yaz0_strict_total_budget_and_depth(self):
        with self.assertRaises(FormatError):
            expand_archive(YAZ0, max_bytes=len(YAZ0) + 100)
        with self.assertRaises(FormatError):
            expand_archive(YAZ0, max_depth=1)
        with self.assertRaises(FormatError):
            expand_archive(YAZ0, max_leaves=1)
        with self.assertRaises(FormatError):
            expand_archive(YAZ0, max_members=1)

    def test_nested_zstd_over_real_yaz0_sarc(self):
        import zstandard
        wrapped = zstandard.ZstdCompressor(level=1).compress(YAZ0)
        layers, leaves = expand_archive(wrapped)
        self.assertEqual([x["format"] for x in layers[:3]], ["zstd", "yaz0", "sarc"])
        self.assertEqual(len(leaves), 2)
        self.assertEqual(leaves[0]["container_chain"], ["zstd", "yaz0", "sarc"])

    def test_raw_materialization_no_source_write_and_tamper_reject(self):
        with tempfile.TemporaryDirectory() as tmp:
            root = Path(tmp)
            rel = Path("System/lp_resource.Nin_NX_NVN.szs")
            source = root / NCA / "1" / rel
            source.parent.mkdir(parents=True)
            source.write_bytes(YAZ0)
            out = root / "UnPack"
            report = process_source(root, rel, out, write_leaves=True)
            self.assertEqual(report["status"], "raw_extracted")
            self.assertEqual(len(report["outputs"]), 2)
            self.assertEqual(source.read_bytes(), YAZ0)
            self.assertEqual(process_source(root, rel, out, write_leaves=True)["outputs"],
                             report["outputs"])
            first = out / report["outputs"][0]["path"]
            first.write_bytes(b"corrupt")
            with self.assertRaisesRegex(FormatError, "overwrite"):
                process_source(root, rel, out, write_leaves=True)

    def test_original_spelling_rejected_before_posix_normalization(self):
        for bad in ("a//b", "a/./b", "a/../b", "a/", "C:/foo",
                    "../b", "a\\b", "a/\x00/b"):
            with self.subTest(path=bad):
                with self.assertRaises(FormatError):
                    safe_member_name(bad)


if __name__ == "__main__":
    unittest.main()
