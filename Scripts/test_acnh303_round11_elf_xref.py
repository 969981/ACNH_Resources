#!/usr/bin/env python3
"""Pure-stdlib ELF64/AArch64 synthetic regression, no user ELF redistribution."""
from __future__ import annotations
import struct,tempfile,unittest
from pathlib import Path
from acnh303_round11_elf_xref import (adr_target,adrp_target,add_imm,ldr_uimm,
                                      bl_target,parse_elf,survey,locate_xrefs,main)

def toy():
    blob=bytearray(0x1400)
    blob[0:16]=b"\x7fELF"+bytes([2,1,1])+bytes(9)
    struct.pack_into("<HHIQQQIHHHHHH",blob,16,3,183,1,0,64,0,0,64,56,1,0,0,0)
    struct.pack_into("<IIQQQQQQ",blob,64,1,5,0x1000,0x1000,0,0x400,0x400,0x1000)
    # PC=0x1000 ADRP X0 = same 0x1000 page; ADD X0,X0,#0x100 => 0x1100.
    struct.pack_into("<I",blob,0x1000,0x90000000)
    struct.pack_into("<I",blob,0x1004,0x91040000)
    blob[0x1100:0x1105]=b"AMTA\x00"
    return bytes(blob)
class InstructionTest(unittest.TestCase):
    def test_adrp_add_address(self):
        self.assertEqual(adrp_target(0x90000000,0x1000),0x1000)
        self.assertEqual(add_imm(0x91040000),{"rd":0,"rn":0,"imm":256})
        self.assertIsNone(adr_target(0x90000000,0x1000))
    def test_ldr_uimm_only_read(self):
        self.assertEqual(ldr_uimm(0xf9400800),{"rt":0,"rn":0,"imm":16})
        self.assertIsNone(ldr_uimm(0xf9000800)) # STR prohibited
    def test_branch_target(self):
        self.assertEqual(bl_target(0x94000002,0x2000),0x2008)
    def test_synthetic_elf_and_xref(self):
        data=toy()
        segments=parse_elf(data)
        self.assertEqual(segments[0]["vaddr"],0x1000)
        hits=survey(data,segments,["AMTA","LBLI"])
        self.assertEqual(hits["AMTA"]["locations"][0]["vaddr"],0x1100)
        refs,count=locate_xrefs(data,segments,hits)
        self.assertGreaterEqual(count,1)
        self.assertEqual(refs["AMTA"][0]["formed_va_hex"],"0x1100")
        self.assertEqual(refs["AMTA"][0]["pattern"],"ADRP_ADD")
        self.assertNotIn("LBLI",refs)
    def test_reject_bad_arch(self):
        blob=bytearray(toy())
        struct.pack_into("<H",blob,18,62)
        with self.assertRaisesRegex(ValueError,"AArch64"):parse_elf(bytes(blob))
if __name__=="__main__":unittest.main()
