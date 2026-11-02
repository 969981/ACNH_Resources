#!/usr/bin/env python3
import unittest
from acnh303_round28_select import EXPECTED
from acnh303_round28_bnsh_structure import inspect
class Gates(unittest.TestCase):
    def test_expected_remaining_after_r27(self):
        self.assertEqual(EXPECTED,{("Model",".zs"):58338,
            ("Layout",".zs"):348,("Sound",".bars"):1288})
    def test_bom_and_header_evidence(self):
        raw=bytearray(0x80)
        raw[0:4]=b"BNSH"
        raw[8:12]=bytes.fromhex("0b010200")
        raw[12:14]=b"\xff\xfe"
        raw[14]=0x0c
        d=inspect(bytes(raw),"synthetic.bnsh")
        self.assertEqual(d["format_version_raw"],"0b010200")
        self.assertEqual(d["bom_raw"],"fffe")
        self.assertIn("UNPROVEN" if "UNPROVEN" in d["verified_level"] else "RAW",d["verified_level"])
    def test_invalid_header_rejected(self):
        with self.assertRaises(ValueError):inspect(b"BNSH","invalid.bnsh")
        with self.assertRaises(ValueError):inspect(b"XXXX"+bytes(128),"invalid.bnsh")
if __name__=="__main__":unittest.main()
