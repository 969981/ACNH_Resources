"""R19 authenticated GLB pilot must not invent source/output provenance."""
from __future__ import annotations

import gzip
import hashlib
import json
from pathlib import Path
import tempfile
import unittest

from acnh303_r19_real_glb_replay import choose_sources, run_replay, SCHEMA


class R19GLBReplayTests(unittest.TestCase):
    def setup_release(self, tmp):
        root = Path(tmp)
        release = root / "r19"
        release.mkdir()
        lines = []
        git = {}
        for i in range(3558):
            name = (f"Model/Source{i:05d}.zs" if i < 4 else
                    f"Layout/Source{i:05d}.zs")
            row = {
                "source_path": name,
                "sha256": hashlib.sha256(name.encode()).hexdigest(),
                "source_bytes": 100 + i,
                "validated_outputs": (
                    [{"path":f"GLB/{i}.glb","validation":{"type":"glb"}}]
                    if i < 4 else []
                ),
            }
            git[name] = "a"*40
            lines.append(json.dumps(row))
        path = release / "media_source_manifest.jsonl.gz"
        with gzip.open(path, "wt", encoding="utf8") as out:
            out.write("\n".join(lines) + "\n")
        (release / "SHA256SUMS.txt").write_text(
            hashlib.sha256(path.read_bytes()).hexdigest() +
            "  media_source_manifest.jsonl.gz\n", encoding="utf8")
        return release, git

    def test_selects_only_R19_real_GLBS_and_never_claims_fresh_conversion(self):
        with tempfile.TemporaryDirectory() as tmp:
            release, git = self.setup_release(tmp)
            doc = choose_sources(release, git, maximum=3)
            self.assertEqual(doc["schema"], SCHEMA)
            self.assertEqual(doc["selected"], 3)
            self.assertEqual(doc["historical_authentic_GLBS_originals_available"], 4)
            self.assertFalse(doc["new_L3_conversion_performed"])
            self.assertFalse(doc["native_runtime_verified"])
            self.assertTrue(all(x["source_path"].startswith("Model/") for x in doc["sources"]))

    def test_checksum_drift_fails_closed(self):
        with tempfile.TemporaryDirectory() as tmp:
            release, git = self.setup_release(tmp)
            with (release / "media_source_manifest.jsonl.gz").open("ab") as file:
                file.write(b"tampered")
            with self.assertRaisesRegex(ValueError, "checksum mismatch"):
                choose_sources(release, git)

    def test_converter_requires_actual_executable(self):
        with tempfile.TemporaryDirectory() as tmp:
            root = Path(tmp)
            with self.assertRaisesRegex(ValueError, "missing real decoder"):
                run_replay(root, {
                    "schema": SCHEMA, "game_version": "3.0.3",
                    "selected": 1, "sources": [{}],
                }, wmdlt=root / "nonexistent-wmdlt", out=root / "out")


if __name__ == "__main__":
    unittest.main()
