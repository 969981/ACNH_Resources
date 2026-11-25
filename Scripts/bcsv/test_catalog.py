import tempfile, struct, unittest
from pathlib import Path
from bcsv import BCSV, crc32
from catalog import run,reference_candidates,label_domains

def fixture(fields,rows,stride):
    return struct.pack("<IIHBB",len(rows),stride,len(fields),1,1)+b"VSCB"+bytes(12)+b"".join(struct.pack("<II",*f) for f in fields)+b"".join(rows)
class CatalogTests(unittest.TestCase):
    def test_reference(self):
        labels=["Chair","Sofa","Table"]
        target=BCSV(fixture([(0x87BF00E8,0)],[x.encode().ljust(16,b"\0") for x in labels],16))
        source=BCSV(fixture([(0x12345678,0)],[struct.pack("<I",crc32(x)) for x in labels],4))
        tables={"target.bcsv":target,"source.bcsv":source}
        r=list(reference_candidates(tables,label_domains(tables)))
        self.assertEqual(len(r),1);self.assertEqual(r[0]["matched_rows"],3)
        self.assertEqual(r[0]["status"],"candidate_not_verified")
    def test_catalog_keeps_failures(self):
        with tempfile.TemporaryDirectory() as tmp:
            root=Path(tmp)/"in";root.mkdir()
            (root/"ok.bcsv").write_bytes(fixture([(1,0)],[b"\0"*4],4))
            (root/"bad.bcsv").write_bytes(b"bad")
            out=Path(tmp)/"out";s=run(root,out)
            self.assertEqual((s["files"],s["parsed"],s["unsupported"],s["unique_field_hashes"]),(2,1,1,1))
            self.assertTrue((out/"docs/README.md").exists())

    def test_field_hash_docs(self):
        import json
        from field_hash_docs import render, GLOSSARY
        g = json.loads(GLOSSARY.read_text(encoding="utf-8"))
        h = f"{crc32('ItemUniqueID u16'):08X}"
        s = f"| hash_{h} | 1 | 2 | 未知 |\n"
        n = f"| {h} | ItemUniqueID u16 | 1 | — |\n"
        result = render(s, n, [], g)
        self.assertIn("道具唯一ID", result)
        self.assertEqual(render(result, n, [], g), result)
        with self.assertRaises(ValueError):
            render(s, n.replace("ItemUniqueID", "Invalid"), [], g)


    def test_table_dictionary_backfill(self):
        from field_hash_docs import enrich_tables, TABLE_HEADER
        with tempfile.TemporaryDirectory() as tmp:
            docs = Path(tmp)
            path = docs / "table-0000.md"
            path.write_text("# Sample.bcsv\n\n返回 [全量索引](README.md)。\n\n| Hash | 偏移 | 跨度 | 当前解释 |\n| --- | ---: | ---: | --- |\n| hash_12345678 | 4 | 4 | 未知，保留原值 |\n| hash_87654321 | 8 | 1 | id |\n", encoding="utf-8")
            global_text = "| hash_12345678 | Example.hshCstringRef | 示例 | 1 | 4 | 未知 | CRC 候选 |\n| hash_87654321 | 未知 | 示例别名 | 1 | 1 | 未知 | 原名未恢复 |\n"
            residual = [{"hash": "87654321", "occurrences": [{"table": "Sample", "offset": 8}], "semantic_status": "native_field_read", "observation": "example", "native_functions_ghidra_va": ["12345678"], "native_read_width": 1}]
            enrich_tables(docs, global_text, residual)
            content = path.read_text(encoding="utf-8")
            self.assertIn(TABLE_HEADER, content)
            self.assertIn("| hash_12345678 | Example | 示例 | 4 | 4 | hshCstringRef |", content)
            self.assertIn("Ghidra VA：12345678", content)
            self.assertIn("未登记表级业务证据", content)
            enrich_tables(docs, global_text, residual)
            self.assertEqual(path.read_text(encoding="utf-8"), content)
            with self.assertRaises(ValueError):
                enrich_tables(docs, global_text, [])
