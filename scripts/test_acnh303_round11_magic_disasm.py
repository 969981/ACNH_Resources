#!/usr/bin/env python3
import unittest,struct
from test_acnh303_round11_elf_xref import toy
from acnh303_round11_magic_disasm import decode_movwide,scan_magic
from acnh303_round11_elf_xref import parse_elf
class NativeMagicTests(unittest.TestCase):
    def test_magic_arm64_movz_movk(self):
        b=bytearray(toy())
        value=int.from_bytes(b"AMTA","little")
        lo=value&65535
        hi=value>>16
        movz=0x52800000|(lo<<5)|1
        movk=0x72a00000|(hi<<5)|1
        struct.pack_into("<II",b,0x1020,movz,movk)
        self.assertEqual(decode_movwide(movz)["imm"],lo)
        self.assertEqual(decode_movwide(movk)["shift"],16)
        r=scan_magic(bytes(b),parse_elf(bytes(b)))
        self.assertEqual(r["AMTA"][0]["movz_pc_hex"],"0x1020")
        self.assertFalse(r["BARS"])
    def test_movwide_other_rejected(self):
        self.assertIsNone(decode_movwide(0x94000001))
if __name__=="__main__":unittest.main()
