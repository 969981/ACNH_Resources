#!/usr/bin/env python3
"""R24 synthetic valid/invalid FMDL/FSKL hierarchy tests, no fabricated game data."""
import unittest,struct
from acnh303_round24_real_skeleton import read_model_leaf
from acnh303_round24_resource_loader_xrefs import adrp_page,ref_next
class FMDLFSKLTests(unittest.TestCase):
    def data(self):
        b=bytearray(0x800)
        b[:4]=b"FRES"
        struct.pack_into("<I",b,8,9<<16)
        struct.pack_into("<H",b,0xc,0xfeff)
        struct.pack_into("<Q",b,0x28,0x100)
        b[0x100:0x104]=b"FMDL"
        struct.pack_into("<Q",b,0x108,0x410)
        b[0x410:0x416]=b"\x03\x00Obj\x00"
        struct.pack_into("<Q",b,0x118,0x200)
        b[0x200:0x204]=b"FSKL"
        struct.pack_into("<Q",b,0x210,0x300) # bone array
        struct.pack_into("<Q",b,0x218,0x580) # matrix-to-bone
        struct.pack_into("<Q",b,0x220,0x500) # inverse matrix
        struct.pack_into("<H",b,0x238,2)
        struct.pack_into("<H",b,0x23a,1)
        struct.pack_into("<H",b,0x580,0)
        for i,(off,name,ptr) in enumerate([(0, b"Skl_Root",0x600),(0x60,b"Skl_Child",0x620)]):
            at=0x300+off
            struct.pack_into("<Q",b,at,ptr)
            struct.pack_into("<H",b,at+0x28,i)
            struct.pack_into("<h",b,at+0x2a,i-1)
            struct.pack_into("<3f4f3f",b,at+0x38,1,1,1,0,0,0,1,0,0,0)
            struct.pack_into("<H",b,ptr,len(name))
            b[ptr+2:ptr+2+len(name)+1]=name+b"\0"
        return b
    def test_bone_hierarchy_and_transform(self):
        d=read_model_leaf(bytes(self.data()),"synthetic")
        self.assertEqual(d["bone_count"],2)
        self.assertEqual(d["bones"][0]["name"],"Skl_Root")
        self.assertEqual(d["bones"][1]["parent"],0)
        self.assertEqual(d["bones"][0]["rotation"],[0,0,0,1])
    def test_reject_false_fskl(self):
        b=self.data();b[0x200:0x204]=b"BAD!"
        with self.assertRaisesRegex(ValueError,"not a valid FSKL"):read_model_leaf(bytes(b),"synthetic")
    def test_reject_invalid_parent(self):
        b=self.data();struct.pack_into("<h",b,0x360+0x2a,999)
        with self.assertRaisesRegex(ValueError,"index/name/parent invalid"):read_model_leaf(bytes(b),"synthetic")
class Opcode(unittest.TestCase):
    def test_adrp_real_elf_instruction(self):
        self.assertEqual(adrp_page(0x3aca490,0x90007f56),0x4ab2000)
    def test_ref_next_only_proves_same_adrp(self):
        self.assertIs(ref_next(0x90007f56,0x3aca490,22,0x4ab2000,None),True)
if __name__=="__main__":unittest.main()
