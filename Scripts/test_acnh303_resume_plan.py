"""Regression tests for source-aware, nonoverlapping ACNH batch resume."""
import json
import tempfile
import unittest
from pathlib import Path
from acnh303_resume_plan import plan_one


class PlanTests(unittest.TestCase):
    def setUp(self):
        self.dir = tempfile.TemporaryDirectory()
        self.addCleanup(self.dir.cleanup)
        self.root = Path(self.dir.name)

    def add(self, filename, offset, names, total=64, states=None):
        folder = self.root / "Layout" / "s000-of-008"
        folder.mkdir(parents=True, exist_ok=True)
        states = states or ["partial"] * len(names)
        report = {"category": "Layout", "source_count": len(names),
                  "selection": {"category": "Layout", "shard": 0, "shards": 8,
                                "skip_count": offset, "matched_in_shard": total,
                                "sources": [{"path": name} for name in names]},
                  "rows": [{"source_path": name, "status": state}
                           for name, state in zip(names, states)]}
        (folder / filename).write_text(json.dumps(report), encoding="utf-8")

    def test_retry_not_double_counted(self):
        paths = [f"p{i}" for i in range(8)]
        self.add("first.json", 0, paths, states=["failed"] * 8)
        self.add("retry.json", 0, paths, states=["no_output"] * 8)
        actual = plan_one(self.root, "Layout", 0, 8, 8)
        self.assertEqual(actual["skip_count"], 8)
        self.assertEqual(actual["unique_attempted_sources"], 8)
        self.assertEqual(actual["duplicate_retry_rows"], 8)

    def test_gap_not_skipped(self):
        self.add("a.json", 0, ["a", "b"])
        self.add("b.json", 4, ["e", "f"])
        self.assertEqual(plan_one(self.root, "Layout", 0, 8, 8)["skip_count"], 2)

    def test_inconsistent_source_rejected(self):
        self.add("a.json", 0, ["a"])
        self.add("b.json", 0, ["other"])
        with self.assertRaises(ValueError):
            plan_one(self.root, "Layout", 0, 8, 8)

    def test_changed_total_rejected(self):
        self.add("a.json", 0, ["a"])
        self.add("b.json", 1, ["b"], total=65)
        with self.assertRaises(ValueError):
            plan_one(self.root, "Layout", 0, 8, 8)


if __name__ == "__main__":
    unittest.main()
