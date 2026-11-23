"""Source-backed Model+BDLI real shard selection and import anti-fabrication tests."""
from __future__ import annotations

import hashlib
import json
from pathlib import Path
import tempfile
import unittest

from acnh303_uncovered_model_bdli_wave import (
    SCHEMA, MODEL_COUNT, BDLI_COUNT, select_sources,
)
from acnh303_uncovered_wave_ledger import read_reports


class CompleteGitTreeTestFixture(dict):
    """Unit fixture only: bypasses 103400-file real Git tree, not CI verification."""
    def __len__(self):
        return 103400


def fixture():
    git = CompleteGitTreeTestFixture({
        **{f"Model/RoomMdlTest{i:03d}.zs": "a"*40 for i in range(48)},
        **{f"BDLI/String/CNzh/STR_Test{i:03d}.bdli.zs": "b"*40 for i in range(128)},
    })
    return git


def mockreport(shard=0, run_id=12345):
    selected = [{"source_path": f"Model/RoomMdlTest{i}.zs",
                 "source_git_blob_sha1": "a"*40} for i in range(MODEL_COUNT)]
    selected += [{"source_path": f"BDLI/String/CNzh/STR_Test{i}.zs",
                  "source_git_blob_sha1": "b"*40} for i in range(BDLI_COUNT)]
    rows = []
    for s in selected:
        model = s["source_path"].startswith("Model/")
        status = "partial" if model else "raw_extracted"
        row = {
            **s, "category": "Model" if model else "BDLI",
            "source_sha256": "c"*64,
            "source_bytes": 512,
            "original_bytes_sha256_and_git_blob_verified": True,
            "native_runtime_parity_verified": False,
            "status": status,
            "fresh_l3_files": 1 if model else 0,
            "evidence_level": ("L3_REAL_MEDIA_PARTIAL_SOURCE" if model else
                               "L2_LBLI_BOUNDS_AND_SECTION_SHA"),
        }
        if model:
            row["model_l3"] = {
                "status": "partial", "whole_model_media_and_native_parity_verified": False,
                "outputs": [{
                    "format": "glb", "path": "audit/sample.glb",
                    "sha256": "d"*64, "bytes": 1024,
                    "validation": {"type":"glb","meshes":1,"primitives":1},
                }],
            }
        else:
            row["bdli_static"] = {
                "status": "raw_extracted", "native_consumers_verified": False,
                "sections": 3, "nonempty_section_sha_verified": 2,
                "uncompressed_sha256": "e"*64,
            }
        rows.append(row)
    doc = {
        "schema": SCHEMA, "game_version": "3.0.3",
        "producer_workflow_run_id": run_id, "shard": shard,
        "selection": {
            "schema": SCHEMA, "shard": shard,
            "original_git_tree_sources": 103400,
            "per_category": {"Model": MODEL_COUNT,"BDLI":BDLI_COUNT},
            "selected": len(selected), "sources": selected,
        },
        "sample_count": len(rows), "rows": rows,
        "actual_original_git_and_sha256_verified": len(rows),
        "by_category": {"Model": MODEL_COUNT,"BDLI":BDLI_COUNT},
        "fresh_l3_files": MODEL_COUNT,
        "models_with_fresh_l3": MODEL_COUNT,
        "bdli_sources_static_verified": BDLI_COUNT,
        "native_runtime_evidence_captured": False,
        "full_model_l3_verified": False,
        "complete_original_corpus_verified": False,
    }
    git = {s["source_path"]: s["source_git_blob_sha1"] for s in selected}
    return doc, git


def write_report(directory: Path, doc: dict):
    path = directory / f"source_wave_shard_{doc['shard']:03d}_run_{doc['producer_workflow_run_id']}.json"
    path.write_text(json.dumps(doc), encoding="utf8")
    return path


class ShardWaveTests(unittest.TestCase):
    def test_only_unrepresented_originals_are_selected(self):
        git = fixture()
        all_model = sorted(n for n in git if n.startswith("Model/"))
        all_bdli = sorted(n for n in git if n.startswith("BDLI/"))
        known = {all_model[0], all_bdli[0]}
        plan = select_sources(git, known, shard=0, shards=1)
        self.assertEqual(plan["selected"], MODEL_COUNT + BDLI_COUNT)
        self.assertTrue(all(x["source_path"] not in known for x in plan["sources"]))
        self.assertEqual(plan["unrepresented_at_selection"],
                         {"Model": len(all_model)-1, "BDLI": len(all_bdli)-1})
        self.assertEqual(len({x["source_path"] for x in plan["sources"]}), plan["selected"])
        with self.assertRaisesRegex(ValueError, "invalid immutable"):
            select_sources(git, known, shard=64, shards=64)

    def test_existing_imports_require_real_media_proof_and_native_false(self):
        with tempfile.TemporaryDirectory() as directory:
            root = Path(directory)
            doc, expected = mockreport()
            write_report(root, doc)
            attempts, meta = read_reports(root, expected)
            self.assertEqual(len(attempts), MODEL_COUNT+BDLI_COUNT)
            self.assertEqual(meta["fresh_l3_media_files_claimed_from_real_CI"], MODEL_COUNT)
            self.assertEqual(meta["static_bdli_sources_verified_in_real_CI"], BDLI_COUNT)
            self.assertFalse(meta["native_runtime_evidence_captured"])
            self.assertTrue(all(x["status"] in ("partial","raw_extracted") for x in attempts))

    def test_forged_media_and_Native_status_block_entire_shard(self):
        with tempfile.TemporaryDirectory() as directory:
            root=Path(directory)
            doc, expected=mockreport()
            doc["rows"][0]["model_l3"]["outputs"][0]["validation"]["meshes"]=0
            file=write_report(root, doc)
            with self.assertRaisesRegex(ValueError, "GLB has no validated geometry"):
                read_reports(root, expected)
            doc["rows"][0]["model_l3"]["outputs"][0]["validation"]["meshes"]=1
            doc["rows"][MODEL_COUNT]["bdli_static"]["native_consumers_verified"]=True
            file.write_text(json.dumps(doc),encoding="utf8")
            with self.assertRaisesRegex(ValueError,"BDLI falsely claims Native"):
                read_reports(root, expected)
            doc["rows"][MODEL_COUNT]["bdli_static"]["native_consumers_verified"]=False
            doc["rows"][0]["source_git_blob_sha1"]="f"*40
            file.write_text(json.dumps(doc),encoding="utf8")
            with self.assertRaisesRegex(ValueError,"identity mismatch"):
                read_reports(root, expected)

    def test_repeated_source_and_invalid_aggregate_counts_fail(self):
        with tempfile.TemporaryDirectory() as directory:
            root=Path(directory)
            doc, expected=mockreport()
            doc["rows"][1]["source_path"] = doc["rows"][0]["source_path"]
            write_report(root, doc)
            with self.assertRaisesRegex(ValueError,"identity mismatch"):
                read_reports(root, expected)
            doc, expected=mockreport()
            doc["fresh_l3_files"] += 1
            write_report(root, doc)
            with self.assertRaisesRegex(ValueError,"counts inconsistent"):
                read_reports(root, expected)


if __name__ == "__main__":
    unittest.main()
