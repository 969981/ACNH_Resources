#!/usr/bin/env python3
import unittest,struct
from acnh303_round30_shader_pool import parse_pool, program_details, analyze
from acnh303_round29_bnsh_links import Bin
from acnh303_round30_select import EXPECTED

def minimal():
    a=bytearray(0x600)
    a[:8]=b"BNSH"+b"\0"*4
    a[8:12]=bytes.fromhex("0b010200");a[12:14]=b"\xff\xfe"
    a[14]=12;a[15]=64
    struct.pack_into("<HII",a,0x16,0x60,0x500,0x600)
    a[0x60:0x64]=b"grsc";struct.pack_into("<II",a,0x64,0,0x4a0)
    g=0x70;struct.pack_into("<IQQ",a,g+12,1,0x100,0x320)
    struct.pack_into("<Q",a,0x100+16,0x140)
    struct.pack_into("<I",a,0x140+0x60,0x80)
    struct.pack_into("<Q",a,0x140+0x68,0x340)
    struct.pack_into("<Q",a,0x140+0x70,0x100)
    struct.pack_into("<Q",a,0x140+0x78,0x1f0)
    struct.pack_into("<Q",a,0x1f0,0x220)
    struct.pack_into("<Q",a,0x1f0+0x20,0x240)
    struct.pack_into("<Q",a,0x220+3*8,0x2a0)
    struct.pack_into("<Q",a,0x240+3*8,0x2a0)
    a[0x2a0:0x2a4]=b"_DIC"
    struct.pack_into("<I",a,0x2a4,1)
    struct.pack_into("<Q",a,0x2a0+8+0x10+8,0x310)
    a[0x310:0x316]=b"uBuf\0\0"
    struct.pack_into("<IIQ",a,0x320,1,0x80,0x340)
    a[0x340:0x344]=b"\x78\x56\x34\x12"
    a[0x500:0x504]=b"_RLT"
    struct.pack_into("<II",a,0x504,0x500,0)
    return bytes(a)

class RealEvidenceGates(unittest.TestCase):
    def test_r30_original_counts(self):
        self.assertEqual(EXPECTED,{("Model",".zs"):58178,("Layout",".zs"):276,("Sound",".bars"):1216})
    def test_binary_pool_bytes_and_program_bounds(self):
        data=minimal();b=Bin(data);pool=parse_pool(b,0x320)
        self.assertEqual(pool["status"],"bounded_native_memory_pool")
        p={"file_offset":0x140,"size_field_at_0x60":0x80,"object_pointer":0x340,
           "parent_matches_variation":True,"reflection_in_bounds":True,"code_type_byte":0}
        out=program_details(b,p,pool,{})
        self.assertEqual(out["object_status"],"object_inside_binary_pool")
        self.assertTrue(out["object_matches_nv_magic_first4"])
    def test_reject_outside_memory_pool(self):
        b=Bin(minimal());p=parse_pool(b,0x320)
        fake={"file_offset":0x140,"size_field_at_0x60":0x90,"object_pointer":0x5e0,
           "parent_matches_variation":True,"reflection_in_bounds":True,"code_type_byte":0}
        out=program_details(b,fake,p,{})
        self.assertEqual(out["object_status"],"object_unresolved")
    def test_wrong_memory_size_rejected(self):
        a=bytearray(minimal());struct.pack_into("<I",a,0x324,0x7fffffff)
        out=parse_pool(Bin(bytes(a)),0x320)
        self.assertEqual(out["status"],"declared_memory_out_of_file")

if __name__=="__main__":unittest.main()
