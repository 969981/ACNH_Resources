"""Round 9 regression: byte-accurate native payload extraction on synthetic fixtures."""
import json
import struct
import tempfile
import unittest
from pathlib import Path

from acnh303_bdli_section_export import export_bytes
from acnh303_bars_amta_export import parse_amta, run as amta_run
from acnh303_bdli_section_export import run as bdli_run

def bdli_fixture():
    return (struct.pack("<4sHHIII",b"BDLI",2,1,0,20,36) +
            struct.pack("<4sIII",b"LBLI",1,16,0x12ab34cd) + b"Real payload\x00")

def amta_fixture():
    return (b"AMTA" + b"\xff\xfe" + struct.pack("<HIIII",0x0100,48,24,32,40) +
            b"DATA"+struct.pack("<I",0) +
            b"MARK"+struct.pack("<I",0) +
            b"STRG"+struct.pack("<I",0))

class Round9NativeTests(unittest.TestCase):
    def test_bdli_exact_sections(self):
        blob=bdli_fixture()
        with tempfile.TemporaryDirectory() as root:
            target=Path(root)
            record=export_bytes(blob,target)
            sections=record["sections"]
            self.assertEqual(len(sections),1)
            self.assertEqual(sections[0]["count_raw"],1)
            self.assertEqual(sections[0]["offset"],36)
            self.assertEqual((target/"lbli_00000_12ab34cd.bin").read_bytes(),b"Real payload\x00")
            self.assertEqual(record["directory"]["sections"][0]["sha256"],sections[0]["sha256"])

    def test_amta_v1_native_directory(self):
        parsed=parse_amta(amta_fixture())
        self.assertEqual(parsed["declared_size"],48)
        self.assertEqual([s["actual_magic"] for s in parsed["sections"]],["DATA","MARK","STRG"])
        self.assertTrue(all(s["status"]=="structural" for s in parsed["sections"]))

    def test_real_acnh_v5_header_lossless_without_false_section_names(self):
        # Native ACNH 3.0.3 first sample: AMTA ff fe 00 05, length 92,
        # pointer-like raw words include +0x10 = 0x34 and +0x24 = 0x24.
        raw=bytearray(92)
        struct.pack_into("<4sHHI",raw,0,b"AMTA",0xfeff,0x0500,92)
        struct.pack_into("<I",raw,16,52)
        struct.pack_into("<I",raw,36,36)
        decoded=parse_amta(bytes(raw))
        self.assertEqual(decoded["version_hex"],"0x0500")
        self.assertEqual(decoded["declared_size"],92)
        self.assertEqual(decoded["payload"],bytes(raw))
        self.assertEqual(decoded["sections"],[])
        self.assertEqual(len(decoded["native_header_u32"]),10)
        self.assertIn("unknown",decoded["structure_status"])

    def test_amta_truncated_or_corrupt_rejected(self):
        good=amta_fixture()
        with self.assertRaises(ValueError):
            parse_amta(good[:-1])
        bad=bytearray(good)
        struct.pack_into("<I",bad,12,0xffffffff)
        with self.assertRaises(ValueError):
            parse_amta(bytes(bad))

    def test_selection_duplicate_rejected(self):
        with tempfile.TemporaryDirectory() as root:
            sel=Path(root)/"select.json"
            for cat,suffix,fn in (("Sound",".bars",amta_run),("BDLI",".zs",bdli_run)):
                sel.write_text(json.dumps({"category":cat,"suffix":suffix,
                    "selected_files":2,"paths":["duplicate","duplicate"]}))
                with self.assertRaises(ValueError):
                    fn(sel,Path(root)/"out",Path(root)/"reports")

if __name__=="__main__":
    unittest.main()
