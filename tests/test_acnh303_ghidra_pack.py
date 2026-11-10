#!/usr/bin/env python3
"""Fixture-only tests: no game assets and no Ghidra installation required."""
import hashlib
import importlib.util
import json
from pathlib import Path
import sqlite3
import tempfile
import unittest

PATH = Path(__file__).resolve().parents[1] / "tools/ghidra/acnh_ghidra_pack.py"
spec = importlib.util.spec_from_file_location("acnh_pack", PATH)
pack = importlib.util.module_from_spec(spec)
spec.loader.exec_module(pack)

def jsonlines(path, lines):
    path.parent.mkdir(parents=True, exist_ok=True)
    with path.open("w", encoding="utf-8", newline="\n") as f:
        for row in lines:
            f.write(json.dumps(row, ensure_ascii=False) + "\n")

class ShardsTest(unittest.TestCase):
    def test_raw_binary_exact_roundtrip_and_corruption(self):
        with tempfile.TemporaryDirectory() as t:
            root = Path(t)
            source = root / "project.tar"
            payload = bytes(range(256)) * 113 + b"\x00\xff\x00END"
            source.write_bytes(payload)
            manifest = pack.split_bytes(source, root / "shards", 499)
            self.assertGreater(len(manifest["parts"]), 1)
            output = root / "recovered.tar"
            pack.join_bytes(root / "shards/project.tar.manifest.json", output)
            self.assertEqual(output.read_bytes(), payload)
            self.assertEqual(hashlib.sha256(payload).hexdigest(), manifest["sha256"])
            part = root / "shards" / manifest["parts"][0]["file"]
            part.write_bytes(b"X" + part.read_bytes()[1:])
            with self.assertRaises(ValueError):
                pack.join_bytes(root / "shards/project.tar.manifest.json", output)

    def test_ndjson_only_complete_lines(self):
        with tempfile.TemporaryDirectory() as t:
            root = Path(t)
            path = root / "functions.ndjson"
            rows = [{"index": i, "name": f"村民_{i}", "content": "A" * i} for i in range(12)]
            jsonlines(path, rows)
            manifest = pack.shard_jsonl(path, root / "parts", maxbytes=100)
            self.assertEqual(manifest["lines"], len(rows))
            self.assertGreater(len(manifest["parts"]), 1)
            recovered = b""
            for entry in manifest["parts"]:
                data = (root / "parts" / entry["file"]).read_bytes()
                self.assertEqual(data.count(b"\n"), entry["lines"])
                self.assertTrue(data.endswith(b"\n"))
                for line in data.splitlines():
                    self.assertIsInstance(json.loads(line), dict)
                recovered += data
            self.assertEqual(recovered, path.read_bytes())
            path.write_bytes(path.read_bytes()[:-1])
            with self.assertRaises(ValueError):
                pack.shard_jsonl(path, root / "bad")

    def test_incremental_sqlite_catalog_and_exact_reassembly(self):
        with tempfile.TemporaryDirectory() as t:
            root = Path(t)
            published, work = root / "published", root / "work"
            def fn(idx, status):
                return {"index":idx,"address":f"{idx:08x}","name":f"FUN_{idx}",
                        "namespace":"Global","signature":"void f(void)",
                        "byte_count":16,"is_thunk":False,"is_external":False,
                        "decompile_status":status,
                        "c_path":f"c/00/{idx:08x}.c" if status=="ok" else None,
                        "error":None if status=="ok" else "timeout"}
            first = root / "first"
            jsonlines(first / "functions.ndjson", [fn(0,"ok"), fn(1,"failed")])
            jsonlines(first / "symbols.ndjson", [{"address":"00000000","name":"Entry",
                "symbol_type":"Function","source_type":"ANALYSIS"}])
            jsonlines(first / "xrefs.ndjson", [{"source":"00000004","target":"00000000",
                "ref_type":"UNCONDITIONAL_CALL","operand_index":0}])
            pack.write_json(first / "export-summary.json", {
                "total_functions":3,"start_index":0,"processed":2,
                "decompiled_ok":1,"decompiled_failed":1
            })
            cfile=first / "c/00/00000000.c"
            cfile.parent.mkdir(parents=True)
            cfile.write_text("void f(void) {}\n")
            status=pack.ingest(first,published,work,chunk_mib=1)
            self.assertEqual(status["next_index"],2)
            self.assertFalse(status["complete"])
            self.assertEqual((published/"c/00/00000000.c").read_text(), cfile.read_text())
            second=root/"second"
            jsonlines(second/"functions.ndjson",[fn(2,"ok")])
            c2=second/"c/00/00000002.c"
            c2.parent.mkdir(parents=True)
            c2.write_text("void f2(void) {}\n")
            pack.write_json(second/"export-summary.json",{
                "total_functions":3,"start_index":2,"processed":1,
                "decompiled_ok":1,"decompiled_failed":0
            })
            status=pack.ingest(second,published,root/"work2",chunk_mib=1)
            self.assertTrue(status["complete"])
            self.assertEqual(status["decompiled_ok"],2)
            self.assertEqual(status["decompiled_failed"],1)
            dbfile=root/"verified.sqlite"
            pack.join_bytes(published/"sqlite/acnh303_ghidra.sqlite.manifest.json",dbfile)
            with sqlite3.connect(dbfile) as db:
                self.assertEqual(db.execute("PRAGMA integrity_check").fetchone()[0],"ok")
                self.assertEqual(db.execute("SELECT COUNT(*) FROM functions").fetchone()[0],3)
                self.assertEqual(db.execute("SELECT COUNT(*) FROM symbols").fetchone()[0],1)
                self.assertEqual(db.execute("SELECT COUNT(*) FROM xrefs").fetchone()[0],1)
            with self.assertRaises(ValueError):
                pack.ingest(second,published,root/"work3",chunk_mib=1)

if __name__ == "__main__":
    unittest.main()
