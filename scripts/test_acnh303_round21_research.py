#!/usr/bin/env python3
"""R21 synthetic negative/positive byte fixtures; real data runs separately."""
import unittest,struct
from acnh303_round21_anim_curves import parse_curve,parse_anim
from acnh303_round21_global_initializer import adrp_page

class CurveTests(unittest.TestCase):
    def sample(self):
        b=bytearray(0x700)
        struct.pack_into("<Q",b,0x100,0x200) # frame ptr
        struct.pack_into("<Q",b,0x108,0x300) # key ptr
        struct.pack_into("<H",b,0x110,0x10) # linear float32 frame+key
        struct.pack_into("<H",b,0x112,3)
        struct.pack_into("<I",b,0x114,0x8) # anim target offset
        struct.pack_into("<ff",b,0x118,0.0,20.0)
        struct.pack_into("<fff",b,0x120,1.0,0.0,0.0)
        struct.pack_into("<fff",b,0x200,0.0,10.0,20.0)
        struct.pack_into("<ffffff",b,0x300,1.0,0.0,2.0,1.0,3.0,2.0)
        return b
    def test_linear_real_frames_and_keys(self):
        c=parse_curve(bytes(self.sample()),0x100)
        self.assertEqual(c["keyframe_count"],3)
        self.assertEqual(c["mode"],"linear")
        self.assertEqual(c["frames_preview"],[0.0,10.0,20.0])
        self.assertEqual(c["key_rows_preview"][1],[2.0,1.0])
        self.assertTrue(c["frame_monotonic"])
        self.assertTrue(c["frame_range_matches_header"])
    def test_reject_invalid_header_pointer(self):
        b=self.sample()
        struct.pack_into("<Q",b,0x100,0xffff)
        with self.assertRaisesRegex(ValueError,"out_of_range"):parse_curve(bytes(b),0x100)
    def test_reject_bad_key_count(self):
        b=self.sample()
        struct.pack_into("<H",b,0x112,0)
        with self.assertRaisesRegex(ValueError,"key_count"):parse_curve(bytes(b),0x100)
    def test_reject_unsupported_flags(self):
        b=self.sample()
        struct.pack_into("<H",b,0x110,3)
        with self.assertRaisesRegex(ValueError,"curve_flags"):parse_curve(bytes(b),0x100)
    def test_real_bone_stride_and_single_curve(self):
        b=self.sample()
        at=0x50
        b[at:at+4]=b"FSKA"
        struct.pack_into("<Q",b,at+8,0x400)  # record name ptr
        b[0x400:0x406]=b"\x03\x00run\x00"
        struct.pack_into("<Q",b,at+0x28,0x480)
        struct.pack_into("<I",b,at+0x40,20)
        struct.pack_into("<I",b,at+0x44,1)
        struct.pack_into("<H",b,at+0x4c,1)
        struct.pack_into("<Q",b,0x480,0x430) # bone name
        b[0x430:0x439]=b"\x06\x00Bone01\x00"
        struct.pack_into("<Q",b,0x488,0x100)
        b[0x480+0x2e]=1
        a=parse_anim(bytes(b),at,0)
        self.assertEqual(a["bone_count"],1)
        self.assertEqual(a["observed_curve_headers"],1)
        self.assertEqual(a["bones"][0]["name"],"Bone01")
        self.assertEqual(a["bones"][0]["curves"][0]["mode"],"linear")
class AArch64Tests(unittest.TestCase):
    def test_adrp_pc_page(self):
        self.assertEqual(adrp_page(0x4ab2414,0x90000016),0x4ab2000)
    def test_not_adrp(self):
        self.assertIsNone(adrp_page(0x4ab2414,0xf9411ed6))
    def test_sign_extended_negative_page(self):
        op=0x90000001 | (0x7ffff<<5) | (3<<29)
        self.assertEqual(adrp_page(0x4000,op),0x3000)
if __name__=="__main__":unittest.main()
