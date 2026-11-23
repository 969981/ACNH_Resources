"""R8/R19 cumulative evidence reconciliation is strictly read-only."""
from __future__ import annotations

import gzip
import hashlib
import json
from pathlib import Path
import tempfile
import unittest

from acnh303_r8_r19_media_reconcile import read_media, reconcile, read_imported_ledger


def media(source, sha="a"*64, size=10):
    return {
        "source_path": source, "sha256": sha, "source_bytes": size,
        "status": "partial", "validated_outputs": [{"sha256": "b"*64}],
    }


def manifest(directory: Path, rows: list[dict]):
    directory.mkdir(exist_ok=True, parents=True)
    path = directory / "media_source_manifest.jsonl.gz"
    with gzip.open(path, "wt", encoding="utf8") as stream:
        for row in rows:
            stream.write(json.dumps(row) + "\n")
    (directory / "SHA256SUMS.txt").write_text(
        hashlib.sha256(path.read_bytes()).hexdigest()
        + "  media_source_manifest.jsonl.gz\n", encoding="utf8"
    )


class R8R19Tests(unittest.TestCase):
    def test_overlap_never_becomes_new_identity(self):
        with tempfile.TemporaryDirectory() as temp:
            directory = Path(temp)
            a = media("Layout/one.zs")
            b = media("Sound/two.bwav", "c" * 64, 20)
            manifest(directory / "r8", [a, b])
            manifest(directory / "r19", [a, media("Model/three.zs")])
            r8, proof = read_media(directory / "r8", tag="R8", expected_rows=2)
            r19, _ = read_media(directory / "r19", tag="R19", expected_rows=2)
            result = reconcile(r8, r19, {
                "Layout/one.zs": {"sha256": "a"*64, "source_bytes": 10}
            }, r8_proof=proof)
            self.assertEqual(result["r8_in_r19_same_original_identity"], 1)
            self.assertEqual(result["r8_not_in_r19"], 1)
            self.assertEqual(result["r8_in_current_ledger_same_original_identity"], 1)
            self.assertEqual(result["r8_not_in_current_ledger"], 1)
            self.assertEqual(result["new_imported_ledger_source_records"], 0)
            self.assertFalse(result["native_runtime_semantics_verified"])

    def test_same_path_changed_original_sha_fails(self):
        a = {"Layout/one.zs": {"sha256": "a"*64, "source_bytes": 10}}
        b = {"Layout/one.zs": {"sha256": "c"*64, "source_bytes": 10}}
        with self.assertRaisesRegex(ValueError, "R8/R19 original source identity conflict"):
            reconcile(a, b, {})
        with self.assertRaisesRegex(ValueError, "R8/imported-ledger identity conflict"):
            reconcile(a, {}, b)

    def test_tampered_release_and_duplicate_manifest_fail_closed(self):
        with tempfile.TemporaryDirectory() as temp:
            directory = Path(temp)
            p = directory / "r8"
            manifest(p, [media("Layout/one.zs")])
            rows, _ = read_media(p, tag="R8", expected_rows=1)
            self.assertEqual(len(rows), 1)
            with (p / "media_source_manifest.jsonl.gz").open("ab") as stream:
                stream.write(b"tamper")
            with self.assertRaisesRegex(ValueError, "checksum mismatch"):
                read_media(p, tag="R8", expected_rows=1)
            manifest(p, [media("Layout/one.zs"), media("Layout/one.zs")])
            with self.assertRaisesRegex(ValueError, "duplicate"):
                read_media(p, tag="R8", expected_rows=2)

    def test_current_ledger_has_unique_source_paths(self):
        with tempfile.TemporaryDirectory() as temp:
            path = Path(temp) / "ledger.jsonl.gz"
            rows = [{"source_path":"Model/a.zs","source_sha256":"a"*64,"source_bytes":10}]
            with gzip.open(path, "wt") as out:
                for row in rows:
                    out.write(json.dumps(row)+"\n")
            self.assertEqual(len(read_imported_ledger(path)), 1)
            with gzip.open(path, "wt") as out:
                for row in rows + rows:
                    out.write(json.dumps(row)+"\n")
            with self.assertRaisesRegex(ValueError, "duplicate"):
                read_imported_ledger(path)


if __name__ == "__main__":
    unittest.main()
