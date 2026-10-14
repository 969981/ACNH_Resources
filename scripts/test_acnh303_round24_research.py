#!/usr/bin/env python3
"""R24 isolated parser tests with positive/negative authentic layout fixtures."""
import struct,unittest
from acnh303_round24_model_skeleton import parse_skeleton,parse_model
from acnh303_round24_native_resource_loader import mov_imm,combined32

def model_blob():
    d=bytearray(0x1000)
    d[0x40:0x44]=b"FMDL"
    struct.pack_into("<Q",d,0x40+8,0x700)
    d[0x700:0x707]=b"\x04\x00Test\x00"
    struct.pack_into("<Q",d,0x40+0x18,0x100)
    d[0x100:0x104]=b"FSKL"
    for off,ptr in [(8,0x180),(0x10,0x200),(0x18,0x500),(0x20,0x550)]:
        struct.pack_into("<Q",d,0x100+off,ptr)
    struct.pack_into("<HHH",d,0x100+0x38,2,1,1)
    for i,(p,name) in enumerate([(-1,b"Root"),(0,b"Child")]):
        o=0x200+i*0x60
        sp=0x740+i*0x30
        struct.pack_into("<Q",d,o,sp)
        struct.pack_into("<Hhh",d,o+0x28,i,p,i)
        struct.pack_into("<fff",d,o+0x38,1.,1.,1.)
        struct.pack_into("<ffff",d,o+0x44,0.,0.,0.,1.)
        struct.pack_into("<fff",d,o+0x54,float(i),0.,0.)
        struct.pack_into("<H",d,sp,len(name))
        d[sp+2:sp+2+len(name)+1]=name+b"\0"
    struct.pack_into("<HH",d,0x500,0,1)
    struct.pack_into("<12f",d,0x550,1,0,0,0,0,1,0,0,0,0,1,0)
    return d

class ModelTests(unittest.TestCase):
    def test_bone_parents_matrices_and_animation_overlap(self):
        d=parse_model(bytes(model_blob()),0x40,0,{"Root","Unrelated"})
        s=d["skeleton"]
        self.assertEqual(d["name"],"Test")
        self.assertEqual(s["bone_count"],2)
        self.assertEqual(s["root_bones"],["Root"])
        self.assertEqual(s["name_intersection_with_standalone_fska"],["Root"])
        self.assertEqual(s["issues"],[])
        self.assertEqual(len(s["inverse_matrix_sample"]),1)
        self.assertEqual(s["bones"][1]["parent"],0)
    def test_cycle_is_not_model_binding(self):
        b=model_blob()
        struct.pack_into("<h",b,0x200+0x2a,1)
        s=parse_skeleton(bytes(b),0x100,{"Root"})
        self.assertEqual(s["status"],"structural_issues")
        self.assertTrue(any(x["issue"]=="parent_cycles" for x in s["issues"]))
    def test_reject_matrix_out_of_bounds(self):
        b=model_blob()
        struct.pack_into("<Q",b,0x120,0xffff)
        with self.assertRaisesRegex(ValueError,"inverse model matrices"):
            parse_skeleton(bytes(b),0x100,set())
    def test_reject_bad_skeleton_pointer(self):
        b=model_blob()
        struct.pack_into("<Q",b,0x40+0x18,0x200)
        with self.assertRaisesRegex(ValueError,"FSKL"):
            parse_model(bytes(b),0x40,0,set())

class NativeTests(unittest.TestCase):
    def test_movewide_real_32bit_magic(self):
        target=int.from_bytes(b"FRES","little")
        lo=target&0xffff;hi=target>>16
        movz=0x52800000 | (lo<<5) | 9
        movk=0x72800000 | (1<<21) | (hi<<5) | 9
        self.assertEqual(combined32(mov_imm(movz),mov_imm(movk)),target)
    def test_distinct_register_is_not_a_parser(self):
        t=int.from_bytes(b"BARS","little")
        a=mov_imm(0x52800000|((t&0xffff)<<5)|1)
        b=mov_imm(0x72800000|(1<<21)|((t>>16)<<5)|2)
        self.assertIsNone(combined32(a,b))
if __name__=="__main__":unittest.main()
