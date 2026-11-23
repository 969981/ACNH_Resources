"""Historical SHA merge fail-closed unit tests: retries, conflicts, fabricated counts."""
import gzip
import hashlib
import json
from pathlib import Path
import tempfile
import unittest

from acnh303_history_sha_merge import (
    RELEASES, batch_attempts, deduplicate, normalize_status,
    release_sha, read_releases, aggregate, write_results, canonical,
    r51_attempts, read_r19_baseline, read_early_releases,
    BARS_BWAV, BARS_AMTA, EARLY_BDLI, read_priority_wave,
)


def attempt(path, sha=None, status="converted", outputs=1, source="release-R41"):
    return {
        "source_path": path,
        "source_sha256": sha or hashlib.sha256(path.encode()).hexdigest(),
        "source_bytes": 10,
        "source_git_blob_sha": None,
        "category": path.split("/")[0],
        "status": status,
        "raw_status": status,
        "source": source,
        "source_proof": "historical_verified",
        "output_proof": "historical_count_only",
        "claimed_verified_media_count": outputs,
        "evidence_level": "L3_ATTEMPT",
    }


class HistoricalLedgerTests(unittest.TestCase):
    def test_duplicate_same_source_sha_is_one_original_not_two(self):
        path = "Model/shared.zs"
        rows = [
            attempt(path, status="failed", outputs=0, source="committed-batch:retry-1"),
            attempt(path, status="converted", outputs=1, source="committed-batch:retry-2"),
            attempt(path, status="failed", outputs=0, source="committed-batch:retry-3"),
        ]
        ledger, counts = deduplicate({path: "a" * 40}, rows)
        self.assertEqual(len(ledger), 1)
        self.assertEqual(ledger[path]["best_status"], "converted")
        self.assertEqual(len(ledger[path]["history"]), 3)
        self.assertEqual(counts["deduplicated_retry_rows"], 2)

    def test_conflicting_source_sha_or_size_refused(self):
        path = "Model/shared.zs"
        a = attempt(path)
        b = attempt(path, sha="b" * 64, source="committed-batch:new")
        with self.assertRaisesRegex(ValueError, "conflicting SHA"):
            deduplicate({path: "a" * 40}, [a, b])
        b["source_sha256"] = a["source_sha256"]
        b["source_bytes"] += 1
        with self.assertRaisesRegex(ValueError, "conflicting SHA"):
            deduplicate({path: "a" * 40}, [a, b])

    def test_same_content_in_two_paths_is_two_original_sources(self):
        a = attempt("Model/one.zs", sha="f" * 64)
        b = attempt("Model/two.zs", sha="f" * 64, source="committed-batch:another")
        ledger, stats = deduplicate({a["source_path"]: "a" * 40, b["source_path"]: "b" * 40}, [a, b])
        self.assertEqual(len(ledger), 2)
        self.assertEqual(stats["identical_byte_content_different_original_paths"], 1)

    def test_overlapping_independent_release_deltas_rejected(self):
        p = "Model/one.zs"
        x, y = attempt(p), attempt(p, source="release-R42")
        with self.assertRaisesRegex(ValueError, "release deltas unexpectedly overlap"):
            deduplicate({p: "a" * 40}, [x, y])

    def test_missing_original_sha_is_quarantined_and_retry_does_not_fake_success(self):
        valid = attempt("Model/a.zs", status="failed", outputs=0)
        bad = {"source_path": "Model/b.zs", "source": "old-batch", "quarantined": True}
        ledger, stat = deduplicate({"Model/a.zs": "a" * 40, "Model/b.zs": "b" * 40},
                                   [valid, bad])
        self.assertEqual(len(ledger), 1)
        self.assertEqual(stat["quarantined_missing_sha_attempts"], 1)
        counts = aggregate({"Model/a.zs": "a" * 40, "Model/b.zs": "b" * 40},
                           ledger, stat, {})["categories"]["Model"]
        self.assertEqual(counts["historically_attempted"], 1)
        self.assertEqual(counts["not_in_imported_evidence"], 1)
        self.assertEqual(counts["failed_or_no_output"], 1)

    def test_zero_target_is_not_fake_conversion(self):
        self.assertEqual(normalize_status("converted", 0, layer="release"), "no_output")
        self.assertEqual(normalize_status("failed", 10, layer="release"), "failed")
        self.assertEqual(normalize_status("partial", 2, layer="release"), "partial")

    def test_sha256sums_exactly_one_entry_and_real_digest(self):
        with tempfile.TemporaryDirectory() as tmp:
            folder = Path(tmp)
            path = folder / "source_delta.jsonl.gz"
            path.write_bytes(b"abc")
            digest = hashlib.sha256(b"abc").hexdigest()
            sums = folder / "SHA256SUMS.txt"
            sums.write_text(digest + "  source_delta.jsonl.gz\n", encoding="utf8")
            self.assertEqual(release_sha(path, sums), digest)
            path.write_bytes(b"changed")
            with self.assertRaisesRegex(ValueError, "checksum mismatch"):
                release_sha(path, sums)
            sums.write_text(digest + "  source_delta.jsonl.gz\n" +
                            digest + "  source_delta.jsonl.gz\n", encoding="utf8")
            with self.assertRaisesRegex(ValueError, "missing/duplicate"):
                release_sha(path, sums)

    def test_next_shard_contains_only_missing_or_failed_and_is_deterministic(self):
        with tempfile.TemporaryDirectory() as tmp:
            p = Path(tmp)
            expected = {"Model/a.zs": "a" * 40, "Model/b.zs": "b" * 40,
                        "Model/c.zs": "c" * 40}
            rows, stats = deduplicate(expected, [
                attempt("Model/a.zs", status="converted"),
                attempt("Model/b.zs", status="failed", outputs=0),
            ])
            report = aggregate(expected, rows, stats, {})
            write_results(p, expected, rows, report, shard=0, shards=1,
                          limit=24, category="Model")
            q = json.loads((p / "next_sources.json").read_text("utf8"))
            self.assertEqual(len(q["candidates"]), 2)
            self.assertEqual({x["source_path"] for x in q["candidates"]},
                             {"Model/b.zs", "Model/c.zs"})
            self.assertEqual(len(list(gzip.open(p / "source_ledger.jsonl.gz", "rt"))), 2)


    def test_early_release_pairs_bars_and_limits_bdli_to_l2(self):
        """R9 2-track audio counts once; verified LBLI is not semantic conversion."""
        with tempfile.TemporaryDirectory() as tmp:
            home = Path(tmp) / "r9"
            home.mkdir()
            sha_bars = "a" * 64
            sha_bdli = "b" * 64
            rows = [
                {
                    "source_type": BARS_BWAV, "source_path": "Sound/Resource/one.bars",
                    "source_sha256": sha_bars, "original_bytes": 123, "status": "partial",
                    "members": [{"status": "converted_pcm_wav",
                                 "source_member_sha256": "c" * 64, "output_sha256": "d" * 64,
                                 "output_size": 128, "validation": {"frames": 32}}],
                },
                {
                    "source_type": BARS_AMTA, "source_path": "Sound/Resource/one.bars",
                    "source_sha256": sha_bars, "source_bytes": 123,
                    "members": [{"status": "lossless_amta_extracted", "amta_sha256": "e" * 64}],
                },
                {
                    "source_type": EARLY_BDLI, "source_path": "BDLI/String/test.zs",
                    "source_sha256": sha_bdli, "source_bytes": 62,
                    "status": "lossless_sections_partial_semantics",
                    "raw_sections_written": 1,
                    "sections": [{"status": "raw_extracted", "sha256": "f" * 64, "bytes": 7}],
                },
            ]
            original = home / "source_manifest.jsonl.gz"
            def write():
                with gzip.open(original, "wt", encoding="utf8") as stream:
                    for row in rows:
                        stream.write(json.dumps(row) + "\n")
                (home / "SHA256SUMS.txt").write_text(
                    hashlib.sha256(original.read_bytes()).hexdigest()
                    + "  source_manifest.jsonl.gz\n", encoding="utf8")
            write()
            rounds = {9: ("fake-r9-tag", "source_manifest.jsonl.gz", 1, 1)}
            expected = {"Sound/Resource/one.bars": "1" * 40,
                        "BDLI/String/test.zs": "2" * 40}
            recovered, assets = read_early_releases(home.parent, expected, rounds)
            self.assertEqual(len(recovered), 2)
            self.assertEqual(assets["R9-early"]["original_bdli"], 1)
            ledger, _ = deduplicate(expected, recovered)
            self.assertEqual(ledger["BDLI/String/test.zs"]["best_status"], "raw_extracted")
            self.assertEqual(ledger["Sound/Resource/one.bars"]["best_status"], "partial")
            self.assertEqual(ledger["BDLI/String/test.zs"]["historic_media_outputs_claimed"], 0)
            rows[1]["source_sha256"] = "0" * 64
            write()
            with self.assertRaisesRegex(ValueError, "paired BARS source identity mismatch"):
                read_early_releases(home.parent, expected, rounds)
            rows[1]["source_sha256"] = sha_bars
            rows[2]["raw_sections_written"] = 2
            write()
            with self.assertRaisesRegex(ValueError, "BDLI raw section counts conflict"):
                read_early_releases(home.parent, expected, rounds)



    def test_real_priority_source_import_not_fake_L3_or_native(self):
        with tempfile.TemporaryDirectory() as tmp:
            file = Path(tmp) / "priority_wave_model_bdli.json"
            expected = {"Model/M.zs": "a" * 40, "BDLI/B.zs": "b" * 40}
            def row(name, blob, static):
                category = name.split("/", 1)[0]
                return {
                    "source_path": name, "source_git_blob_sha1": blob,
                    "source_sha256": hashlib.sha256(name.encode()).hexdigest(),
                    "source_bytes": 120, "category": category, "status": "no_output",
                    "original_byte_and_git_identity_verified": True,
                    "native_runtime_parity_verified": False, "verified_media_outputs": 0,
                    "parser_status": "structure_verified",
                    "evidence_level": "L2_NATIVE_STRUCTURE",
                    "static_probe": static,
                }
            report = {
                "schema": "acnh303-priority-original-model-bdli-v1",
                "game_version": "3.0.3", "producer_workflow_run_id": 77,
                "original_git_tree_sources": 2,
                "selection": {
                    "schema": "acnh303-priority-original-model-bdli-v1",
                    "categories": {"BDLI": {"selected": 1}, "Model": {"selected": 1}},
                    "sources": [{"source_path": k, "source_git_blob_sha1": v}
                                for k, v in expected.items()],
                },
                "sample_count": 2, "exact_original_git_blob_verified": 2,
                "original_source_sha256_verified": 2,
                "native_runtime_evidence_captured": False,
                "media_conversion_performed": False, "original_corpus_fully_checked": False,
                "rows": [
                    row("Model/M.zs", "a" * 40,
                        {"type": "MODEL_LEAF_CLASSIFICATION", "leaf_count": 1}),
                    row("BDLI/B.zs", "b" * 40,
                        {"type": "BDLI_LBLI_STRUCTURAL_ONLY",
                         "semantic_level": "L2_RAW_STRUCTURE_NOT_LOCALIZATION_SEMANTICS"}),
                ],
            }
            def write():
                file.write_text(json.dumps(report), encoding="utf8")
            write()
            inputs, metadata = read_priority_wave(file, expected)
            self.assertEqual(len(inputs), 2)
            self.assertTrue(all(x["claimed_verified_media_count"] == 0 for x in inputs))
            self.assertTrue(all(x["status"] == "no_output" for x in inputs))
            self.assertEqual(metadata["original_source_count"], 2)
            report["rows"][0]["verified_media_outputs"] = 1
            write()
            with self.assertRaises(ValueError):
                read_priority_wave(file, expected)
            report["rows"][0]["verified_media_outputs"] = 0
            report["native_runtime_evidence_captured"] = True
            write()
            with self.assertRaises(ValueError):
                read_priority_wave(file, expected)


    def test_r19_paired_pcm_amta_never_counts_twice(self):
        from acnh303_history_sha_merge import BARS_BWAV, BARS_AMTA
        with tempfile.TemporaryDirectory() as tmp:
            directory = Path(tmp)
            media = []
            for n in range(3558):
                name = f"Model/r19_{n:05d}.zs"
                media.append({"source_path": name, "sha256": hashlib.sha256(name.encode()).hexdigest(),
                              "source_bytes": 123, "status": "no_target_leaf",
                              "validated_outputs": []})
            paired = []
            for n in range(80):
                name = f"Sound/Resource/r19_{n:05d}.bars"
                original = hashlib.sha256(name.encode()).hexdigest()
                paired.extend([
                    {"source_path": name, "source_type": BARS_BWAV,
                     "source_sha256": original, "original_bytes": 123,
                     "status": "partial", "members": []},
                    {"source_path": name, "source_type": BARS_AMTA,
                     "source_sha256": original, "source_bytes": 123,
                     "status": "partial", "members": []},
                ])
            sums = []
            for filename, rows in (("media_source_manifest.jsonl.gz", media),
                                   ("bars_source_manifest.jsonl.gz", paired)):
                path = directory / filename
                with gzip.open(path, "wt", encoding="utf8") as writer:
                    for row in rows:
                        writer.write(json.dumps(row) + "\n")
                sums.append(hashlib.sha256(path.read_bytes()).hexdigest() + "  " + filename)
            (directory / "SHA256SUMS.txt").write_text("\n".join(sums) + "\n")
            expected = {row["source_path"]: "a" * 40 for row in media + paired}
            attempts, evidence = read_r19_baseline(directory, expected)
            self.assertEqual(evidence["media_source_rows"], 3558)
            self.assertEqual(evidence["bars_track_rows"], 160)
            self.assertEqual(len(attempts), 3638)
            self.assertEqual(sum(x["category"] == "Sound" for x in attempts), 80)
            record = paired[1]
            record["source_sha256"] = "f" * 64
            path = directory / "bars_source_manifest.jsonl.gz"
            with gzip.open(path, "wt", encoding="utf8") as writer:
                for row in paired:
                    writer.write(json.dumps(row) + "\n")
            sums[-1] = hashlib.sha256(path.read_bytes()).hexdigest() + "  bars_source_manifest.jsonl.gz"
            (directory / "SHA256SUMS.txt").write_text("\n".join(sums) + "\n")
            with self.assertRaisesRegex(ValueError, "dual-track original source sha mismatch"):
                read_r19_baseline(directory, expected)

    def test_path_traversal_and_uncertified_github_blob_rejected(self):
        for raw in ("../Model/a.zs", "Model/./a.zs", "Model//a.zs", "C:/bad"):
            with self.subTest(raw=raw), self.assertRaises(ValueError):
                canonical(raw)
        row = attempt("Model/a.zs")
        row["source_git_blob_sha"] = "c" * 40
        with self.assertRaisesRegex(ValueError, "Git blob"):
            deduplicate({"Model/a.zs": "a" * 40}, [row])


if __name__ == "__main__":
    unittest.main()
