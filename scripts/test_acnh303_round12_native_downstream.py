"""R12 synthetic ELF regressions; never mistake a synthetic hit for native proof."""
import struct
import unittest
from test_acnh303_round11_elf_xref import toy
from acnh303_round11_elf_xref import parse_elf
from acnh303_round12_native_downstream import branch_target, global_refs, local_cfg, Cs

class Round12Tests(unittest.TestCase):
    def test_direct_branches(self):
        self.assertEqual(branch_target({"mnemonic":"b.eq","op_str":"#0x1234"}),0x1234)
        self.assertEqual(branch_target({"mnemonic":"cbz","op_str":"w0, #0x2340"}),0x2340)
        self.assertIsNone(branch_target({"mnemonic":"blr","op_str":"x8"}))
    def test_adrp_add_global(self):
        b=bytearray(toy())
        # ADRP X4, #0x1000 ; ADD X4, X4, #0x80 at VA 0x1020
        struct.pack_into("<II",b,0x1020,0x90000004,0x91020084)
        result=global_refs(bytes(b),parse_elf(bytes(b)),{"matched":0x1080,"other":0x1090})
        self.assertEqual(result["matched"][0]["adrp"],"0x1020")
        self.assertEqual(result["other"],[])
    @unittest.skipIf(Cs is None,"Capstone not installed")
    def test_local_cfg_unconditional_branch(self):
        b=bytearray(toy())
        struct.pack_into("<III",b,0x1020,0x14000002,0xd4200000,0xd65f03c0)
        result=local_cfg(bytes(b),parse_elf(bytes(b)),0x1020,0x1020,0x1030)
        self.assertEqual(result["visited_count"],2)
        self.assertEqual(result["edges"][0]["to"],"0x1028")
    def test_invalid_window(self):
        with self.assertRaises(ValueError):
            local_cfg(b"",[],0x1000,0x2000,0x3000)

if __name__=="__main__":
    unittest.main()
