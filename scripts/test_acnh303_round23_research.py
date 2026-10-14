#!/usr/bin/env python3
"""R23 synthetic boundary tests (not substitutes for original BFRES/ELF)."""
import unittest,struct,math
from acnh303_round23_binding_material import base_pose,material_header
from acnh303_round23_native_loader_triage import summarize_instructions
from types import SimpleNamespace
class Pose(unittest.TestCase):
    def test_no_flag(self):
        self.assertEqual(base_pose(bytes(80),0,0)["status"],"not_declared")
    def test_real_component_order(self):
        b=bytearray(96)
        struct.pack_into("<3f4f3f",b,8,1,2,3,0,0,0,1,4,5,6)
        d=base_pose(bytes(b),8,0x38)
        self.assertEqual(d["status"],"decoded_finite_components")
        self.assertEqual(d["components"]["scale"],[1,2,3])
        self.assertEqual(d["components"]["rotation"],[0,0,0,1])
        self.assertEqual(d["components"]["translation"],[4,5,6])
    def test_null_pointer_fails_closed(self):
        self.assertEqual(base_pose(bytes(90),0,0x38)["status"],"null_pointer_for_declared_components")
    def test_outside_and_nonfinite(self):
        self.assertEqual(base_pose(bytes(20),16,0x38)["status"],"out_of_bounds")
        a=bytearray(60);struct.pack_into("<f",a,16,math.nan)
        with self.assertRaisesRegex(ValueError,"nonfinite"):base_pose(bytes(a),16,8)
class Material(unittest.TestCase):
    def test_valid_one_child_and_curve(self):
        b=bytearray(0x250);at=0x10
        b[at:at+4]=b"FMAA"
        struct.pack_into("<Q",b,at+8,0x100)
        b[0x100:0x107]=b"\x04\x00Test\x00"
        struct.pack_into("<Q",b,at+0x28,0x120)
        struct.pack_into("<Q",b,at+0x20,0x1f0)
        struct.pack_into("<I",b,at+0x58,30)
        struct.pack_into("<H",b,at+0x62,1)
        struct.pack_into("<H",b,at+0x64,2)
        struct.pack_into("<H",b,0x1f0,65535)
        struct.pack_into("<Q",b,0x120,0x160)
        b[0x160:0x165]=b"\x02\x00M0\x00"
        struct.pack_into("<Q",b,0x120+0x18,0x190)
        struct.pack_into("<H",b,0x120+0x38,2)
        d=material_header(bytes(b),at,0)
        self.assertEqual(d["material_count"],1)
        self.assertEqual(d["parsed_child_curve_headers"],2)
        self.assertEqual(d["unbound_entries"],1)
    def test_reject_invalid_curves(self):
        b=bytearray(0x180);at=0
        b[:4]=b"FMAA";struct.pack_into("<Q",b,8,0x110)
        b[0x110:0x115]=b"\x02\x00AA\x00"
        struct.pack_into("<Q",b,0x28,0x120)
        struct.pack_into("<H",b,0x62,100)
        with self.assertRaisesRegex(ValueError,"outside source"):material_header(bytes(b),0,0)
class Native(unittest.TestCase):
    def test_ret_detected_without_loader_fantasy(self):
        seq=[SimpleNamespace(mnemonic="ret")]
        d=summarize_instructions(seq)
        self.assertEqual(d["returns"],1)
        self.assertEqual(d["loads"],0)
if __name__=="__main__":unittest.main()
