"""R13 synthetic regression for object lineage scanner; no original ELF distributed."""
import struct
import unittest
from test_acnh303_round11_elf_xref import toy
from acnh303_round11_elf_xref import parse_elf
from acnh303_round13_object_provenance import (
    slot_references, register_window, direct_calls_near, file_backing, Cs,
)

class R13ObjectScanner(unittest.TestCase):
    def test_slot_adrp_ldr_real_opcode(self):
        blob=bytearray(toy())
        # ADRP x4 -> page 0x1000, LDR x5,[x4,#0x80]
        struct.pack_into("<II",blob,0x1020,0x90000004,0xF9404085)
        matches=slot_references(bytes(blob),parse_elf(bytes(blob)),
                                {"match":0x1080,"wrong":0x1088})
        self.assertEqual(len(matches["match"]),1)
        self.assertEqual(matches["match"][0]["access"],"read")
        self.assertEqual(matches["match"][0]["access_at"],"0x1024")
        self.assertEqual(matches["wrong"],[])
    def test_static_bl_to_target(self):
        blob=bytearray(toy())
        # BL from VA 0x1020 -> 0x1100
        struct.pack_into("<I",blob,0x1020,0x94000038)
        found=direct_calls_near(bytes(blob),parse_elf(bytes(blob)),0x1100,0x1104)
        self.assertEqual(found,[{"call_at":"0x1020","target":"0x1100"}])
    @unittest.skipIf(Cs is None,"capstone unavailable")
    def test_register_writes(self):
        blob=bytearray(toy())
        struct.pack_into("<II",blob,0x1020,0x90000014,0xF9404296)
        rows=register_window(bytes(blob),parse_elf(bytes(blob)),0x1020,0x1028)
        self.assertIn("x20",rows[0]["writes"])
        self.assertEqual(rows[1]["op"],"ldr")
        self.assertIn("x22",rows[1]["writes"])
    def test_file_backed_pointer_is_not_runtime(self):
        blob=toy()
        row=file_backing(blob,parse_elf(blob),0x1100)
        self.assertTrue(row["file_backed"])
        self.assertIn("runtime",row["note"])
    def test_invalid_window(self):
        with self.assertRaises(ValueError):
            register_window(b"",[],0x1001,0x1011)

if __name__=="__main__":
    unittest.main()
