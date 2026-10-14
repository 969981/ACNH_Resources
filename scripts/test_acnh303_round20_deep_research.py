#!/usr/bin/env python3
"""R20 bounded synthetic positive/negative tests, no model-data fabricated claims."""
import struct,unittest
from types import SimpleNamespace
from acnh303_round20_fres_arrays import parse_leaf,decode_dictionary
from acnh303_round20_blr_provenance import trace,find_vtable_pattern

def sample():
    b=bytearray(0x800)
    b[:8]=b"FRES    "
    b[8:12]=b"\0\0\x09\0"
    b[0xC:0xE]=b"\xff\xfe"
    struct.pack_into("<I",b,0x1c,len(b))
    for ptr,value in [(0x58,0xf0),(0x60,0x350),(0x68,0x190),(0x70,0x450)]:
        struct.pack_into("<Q",b,ptr,value)
    struct.pack_into("<H",b,0xe2,2)
    struct.pack_into("<H",b,0xe4,1)
    b[0xf0:0xf4]=b"FSKA";b[0x140:0x144]=b"FSKA";b[0x190:0x194]=b"FMAA"
    for dic,count,names in [(0x350,2,[(0x600,b"walk"),(0x620,b"run")]),
                            (0x450,1,[(0x640,b"color")])]:
        b[dic:dic+4]=b"_DIC";struct.pack_into("<I",b,dic+4,count)
        for idx,(at,name) in enumerate(names,1):
            struct.pack_into("<Q",b,dic+8+idx*0x10+8,at)
            b[at:at+len(name)+1]=name+b"\0"
    return b

class AnimationHeaderTests(unittest.TestCase):
    def test_arrays_count_stride_dictionary(self):
        d=parse_leaf(bytes(sample()))
        self.assertEqual([(t["kind"],t["count"]) for t in d["tables"]],[("FSKA",2),("FMAA",1)])
        self.assertTrue(all(t["all_magic_validated"] for t in d["tables"]))
        self.assertTrue(all(t["dictionary"]["status"]=="count_and_name_keys_confirmed" for t in d["tables"]))
    def test_reject_false_magic(self):
        a=sample();a[0x140:0x144]=b"BAD!"
        with self.assertRaisesRegex(ValueError,"magic mismatch"):parse_leaf(bytes(a))
    def test_reject_outside_array(self):
        a=sample();struct.pack_into("<Q",a,0x58,0x7f0)
        with self.assertRaisesRegex(ValueError,"out of bounds"):parse_leaf(bytes(a))
    def test_reject_bad_declared_size(self):
        a=sample();struct.pack_into("<I",a,0x1c,len(a)+1)
        with self.assertRaisesRegex(ValueError,"declared bytes"):parse_leaf(bytes(a))
    def test_dictionary_does_not_invent_broken_name(self):
        a=sample();struct.pack_into("<Q",a,0x350+8+1*0x10+8,0xffff)
        d=decode_dictionary(bytes(a),0x350,2)
        self.assertEqual(d["status"],"nodes_unverified")

def ins(va,name,ops):
    return SimpleNamespace(address=va,mnemonic=name,op_str=ops,
                           bytes=b"\x00\x00\x00\x00")

class BlrTests(unittest.TestCase):
    def test_two_deref_slot_chain(self):
        arr=[ins(0x1000,"ldr","x8, [x23]"),
             ins(0x1004,"ldr","x8, [x8, #0x18]"),
             ins(0x1008,"blr","x8")]
        d=trace(arr,2,"x8")
        p=find_vtable_pattern(d["expression"])
        self.assertIsNotNone(p)
        self.assertEqual(p["candidate_virtual_slot_bytes"],0x18)
        self.assertEqual(p["object_to_vtable_offset"],0)
    def test_branch_barrier(self):
        arr=[ins(0x1000,"mov","x8, x21"),
             ins(0x1004,"b.eq","#0x1020"),
             ins(0x1008,"blr","x8")]
        d=trace(arr,2,"x8")
        self.assertEqual(d["expression"]["reason"],"control_flow_boundary")
    def test_no_unproven_target(self):
        arr=[ins(0x1000,"mov","x8, x22"),ins(0x1004,"blr","x8")]
        d=trace(arr,1,"x8")
        self.assertIsNone(find_vtable_pattern(d["expression"]))
if __name__=="__main__":unittest.main()
