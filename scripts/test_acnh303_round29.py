#!/usr/bin/env python3
"""Synthetic negative/positive tests, not substitute for real source audit."""
import struct,sys,unittest
from pathlib import Path
from tempfile import TemporaryDirectory
from unittest.mock import patch
from acnh303_round29_bnsh_links import audit
from acnh303_round29_select import EXPECTED

def fixture():
    a=bytearray(0x500)
    a[:8]=b"BNSH"+b"\0"*4
    a[8:12]=bytes.fromhex("0b010200")
    a[12:14]=b"\xff\xfe";a[14]=12;a[15]=64
    struct.pack_into("<HII",a,0x16,0x60,0x400,0x500)
    a[0x60:0x64]=b"grsc"
    struct.pack_into("<II",a,0x64,0,0x3a0)
    struct.pack_into("<I",a,0x70+12,1)
    struct.pack_into("<QQ",a,0x70+16,0x100,0x350)
    struct.pack_into("<Q",a,0x100+16,0x140)
    struct.pack_into("<Q",a,0x140+0x70,0x100)
    struct.pack_into("<Q",a,0x140+0x78,0x1f0)
    struct.pack_into("<Q",a,0x1f0,0x220) # vertex stage pointer
    struct.pack_into("<Q",a,0x220+2*8,0x2a0) # sampler dict
    a[0x2a0:0x2a4]=b"_DIC"
    struct.pack_into("<I",a,0x2a4,1)
    struct.pack_into("<Q",a,0x2a0+8+16+8,0x300)
    a[0x300:0x30a]=b"uTexture0\0"
    a[0x400:0x404]=b"_RLT"
    struct.pack_into("<II",a,0x404,0x400,1)
    # one section, pointer to 0x100 variation program pointer field
    struct.pack_into("<QIIII",a,0x410,0,0x100,0x40,0,1)
    struct.pack_into("<IHBB",a,0x428,16,1,1,0)
    return bytes(a)

class R29Tests(unittest.TestCase):
    def test_exclusion_remaining_counts(self):
        self.assertEqual(EXPECTED,{("Model",".zs"):58210,("Layout",".zs"):300,("Sound",".bars"):1240})
    def test_binary_file_and_relocation_and_grsc_and_names(self):
        doc=audit(fixture(),"fake.bnsh")
        self.assertEqual([x["magic"] for x in doc["linked_blocks"]],["grsc"])
        self.assertEqual(doc["relocation"]["magic"],"_RLT")
        self.assertEqual(doc["relocation"]["section_count"],1)
        self.assertEqual(doc["relocation"]["bounded_pointer_field_count"],1)
        self.assertEqual(len(doc["variation_records"]),1)
        self.assertEqual(len(doc["distinct_shader_programs"]),1)
        self.assertEqual(doc["resource_dictionaries"][0]["names"],["uTexture0"])
    def test_invalid_relocation_magic(self):
        raw=bytearray(fixture());raw[0x400:0x404]=b"FAIL"
        with self.assertRaises(ValueError):audit(bytes(raw),"badRLT")
    def test_refuse_truncated_and_size_mismatch(self):
        with self.assertRaises(ValueError):audit(fixture()[:-1],"truncated")
    def test_refuse_out_of_bounds_variation(self):
        raw=bytearray(fixture());struct.pack_into("<Q",raw,0x80,0xffeeaadd)
        doc=audit(bytes(raw),"invalid_variation")
        self.assertEqual(len(doc["variation_records"]),0)
        self.assertTrue(doc["warnings"])
if __name__=="__main__":unittest.main()
