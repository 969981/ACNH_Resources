"""ACNH 3.0.3 web14 export: no invented pickup, stack or locale provenance."""
from __future__ import annotations

import hashlib
import json
from pathlib import Path
import sqlite3
import tempfile
import unittest
from unittest.mock import patch

import zstandard

from acnh303_web14_export import (
    LOCALES, EXPECTED, group_locales, names14, item_stack,
    unpack_verified_sqlite, load_item_originals, SCHEMA,
)


class ACNHWeb14ExportTests(unittest.TestCase):
    def test_all_native_locales_and_explicit_missing_name(self):
        self.assertEqual(len(LOCALES),14)
        self.assertEqual(len(set(LOCALES)),14)
        db=sqlite3.connect(":memory:")
        db.row_factory=sqlite3.Row
        db.execute("""CREATE TABLE item_locale (
            item_id integer, locale text, display_name text,
            association_status text, source_member text,source_label text
        )""")
        for l in LOCALES:
            db.execute("INSERT INTO item_locale VALUES(?,?,?,?,?,?)",
                (2,l,None if l=="EUfr" else "test",
                 "missing" if l=="EUfr" else "unique_text_from_ROM_ID_suffix",
                 "Item/STR_ItemName_01_Art.msbt","Art_00002"))
        d=group_locales(db,"item_locale",key_cols=("item_id",))
        result=names14(d,(2,))
        self.assertIsNone(result["EUfr"]["value"])
        self.assertEqual(result["USen"]["value"],"test")
        self.assertEqual(result["EUfr"]["status"],"missing")
        db.execute("DELETE FROM item_locale WHERE locale='JPja'")
        with self.assertRaisesRegex(ValueError,"Missing authentic locale"):
            names14(group_locales(db,"item_locale",key_cols=("item_id",)),(2,))
        db.close()

    def test_stacks_signed_minus_one_and_unmapped_parent_are_unknown(self):
        base={"base_kind_evidence":"exact_ItemKind_label"}
        self.assertEqual(item_stack(base,{"stack_s16":10})["max_stack"],10)
        self.assertEqual(item_stack(base,{"stack_s16":0})["max_stack"],1)
        special=item_stack(base,{"stack_s16":-1})
        self.assertIsNone(special["max_stack"])
        self.assertIn("special",special["status"])
        unknown=item_stack({"base_kind_evidence":"prefix_candidate_not_proven"},
                           {"stack_s16":30})
        self.assertIsNone(unknown["max_stack"])
        self.assertEqual(unknown["kind_raw_s16"],30)
        self.assertIsNone(item_stack(
            {"base_kind_evidence":"unmapped_unknown"},None)["max_stack"])

    def test_fake_sqlite_bytes_and_metadata_are_rejected(self):
        with tempfile.TemporaryDirectory() as d:
            p=Path(d)
            src=p/"db.sqlite3"
            src.write_bytes(b"real DB reference byte payload")
            archive=p/"db.sqlite3.zst"
            archive.write_bytes(zstandard.ZstdCompressor().compress(src.read_bytes()))
            report=p/"r82.json"
            proof={
                "game_version":"3.0.3",
                "normal_resident_rows":417,"special_npc_rows":74,
                "native_npc_rows":491,
                "all_raw_hashed_NPC_fields_preserved":True,
                "sqlite_integrity":"source_bytes_and_roundtrip_validated",
                "compressed_sqlite_sha256":hashlib.sha256(archive.read_bytes()).hexdigest(),
                "uncompressed_sqlite_sha256":hashlib.sha256(src.read_bytes()).hexdigest(),
                "uncompressed_sqlite_size":src.stat().st_size,
            }
            report.write_text(json.dumps(proof),encoding="utf8")
            restored=p/"restored"
            value=unpack_verified_sqlite(archive,report,restored)
            self.assertEqual(value["sqlite_bytes"],src.stat().st_size)
            archive.write_bytes(archive.read_bytes()+b"tamper")
            with self.assertRaisesRegex(ValueError,"compressed original SQLite SHA"):
                unpack_verified_sqlite(archive,report,restored)

    def test_original_item_107_row_and_id_bytes_required(self):
        with tempfile.TemporaryDirectory() as d:
            p=Path(d)
            fieldnames=["hash_%08X"%i for i in range(104)]+[
                "hash_54706054","hash_3FEBC642","hash_FC275E86"]
            fields=[]
            for i,hashname in enumerate(fieldnames):
                offset=4+4*i
                if hashname=="hash_54706054": width=2
                else: width=4
                fields.append({"crc32":hashname[5:],"offset":offset,"width_hint":width})
            raw=bytearray(600)
            raw[4+4*104:4+4*104+2]=(2).to_bytes(2,"little")
            bcsv=p/"source.bcsv";bcsv.write_bytes(bytes(raw))
            file=p/"item.csv"
            with file.open("w",encoding="utf-8",newline="") as f:
                import csv
                w=csv.DictWriter(f,fieldnames=["_row_index","_row_offset_raw"]+fieldnames)
                w.writeheader()
                w.writerow({"_row_index":0,"_row_offset_raw":0,
                            **{k: "2" if k=="hash_54706054" else
                                  "TestItem" if k=="hash_3FEBC642" else
                                  "Kind_Ftr" if k=="hash_FC275E86" else "0"
                                  for k in fieldnames}})
            schema=p/"meta.json"
            schema.write_text(json.dumps({"columns":fields,"row_count":11178,
                                          "row_size":548}),encoding="utf8")
            # Replace only known immutable digests for this isolated unit fixture.
            with patch("acnh303_web14_export.ITEM_SHA",hashlib.sha256(file.read_bytes()).hexdigest()), \
                 patch("acnh303_web14_export.ORIGINAL_ITEM_SHA",hashlib.sha256(bcsv.read_bytes()).hexdigest()), \
                 patch.dict(EXPECTED,{"items":1}):
                rows,source=load_item_originals(file,bcsv,schema)
                self.assertEqual(len(rows),1)
                self.assertEqual(source["field_count"],107)
                self.assertEqual(rows[2]["raw_field_hex"]["hash_54706054"],"0200")
                raw[4+4*104:4+4*104+2]=(3).to_bytes(2,"little")
                bcsv.write_bytes(bytes(raw))
                with patch("acnh303_web14_export.ORIGINAL_ITEM_SHA",hashlib.sha256(bcsv.read_bytes()).hexdigest()):
                    with self.assertRaisesRegex(ValueError,"original row bytes"):
                        load_item_originals(file,bcsv,schema)


if __name__=="__main__":
    unittest.main()
