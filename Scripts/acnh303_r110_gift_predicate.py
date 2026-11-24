#!/usr/bin/env python3
"""Offline reconstruction of evidenced leaf predicates. Not the full NPC gift/UI evaluator."""
import unittest
from typing import Optional, Sequence

def package_subtype(value:int, table:Optional[Sequence[int]])->Optional[int]:
    if table is None:return None
    if len(table)!=4:raise ValueError("native packaging table requires four entries")
    for index in (1,2,3):
        if table[index]==value:return index
    return 0

def package_state_allowed(can_gift:Optional[bool], flags:int, table:Optional[Sequence[int]])->Optional[bool]:
    """01B085E0, for a stable CanGift result across its repeated calls."""
    if not 0<=flags<=255:raise ValueError("flags must be u8")
    if can_gift is None:return None
    if not can_gift or flags&3==0:return True
    state=flags&3;subtype=(flags>>2)&15
    if state in (1,2):category=state
    elif subtype==15:category=1
    else:
        result=package_subtype(subtype,table)
        if result is None:return None
        category=4 if result else 5 if subtype==11 else 6 if subtype==10 else 3
    return category<5 and bool((0x13>>category)&1)

def bitmap_query(index:int, bitmap:Optional[bytes])->Optional[bool]:
    """01AE6420 for an existing row and valid field offset."""
    if not 0<=index<=0xffff:raise ValueError("index must be u16")
    if index>=0x800:return False
    if bitmap is None:return None
    if len(bitmap)!=256:raise ValueError("bitmap snapshot requires 256 bytes")
    return bool((bitmap[index>>3]>>(index&7))&1)

def extra_kind_predicate(kind:Optional[int], base_allowed:Optional[bool],
                         category_match:Optional[bool]=None, second_match:Optional[bool]=None,
                         bitmap_result:Optional[bool]=None)->Optional[bool]:
    """00EFA550 post-base branch ONLY; assumes all earlier checks passed."""
    if base_allowed is False:return False
    if kind is None or base_allowed is None:return None
    if kind in (0x60,0x69,0x6a,0x70):return True
    if kind in (9,10):
        if category_match is False or second_match is False:return False
        if category_match is None or second_match is None:return None
        return True
    if kind==0:return None if bitmap_result is None else not bitmap_result
    return False

class LeafTests(unittest.TestCase):
    def test_subtype(self):
        self.assertEqual(package_subtype(7,[0,7,8,9]),1)
        self.assertEqual(package_subtype(9,[0,7,8,9]),3)
        self.assertEqual(package_subtype(0,[0,7,8,9]),0)
        self.assertIsNone(package_subtype(1,None))
    def test_pack(self):
        self.assertTrue(package_state_allowed(False,2,None))
        self.assertTrue(package_state_allowed(True,0,None))
        self.assertTrue(package_state_allowed(True,1,None))
        self.assertFalse(package_state_allowed(True,2,None))
        self.assertTrue(package_state_allowed(True,63,None))
        self.assertIsNone(package_state_allowed(True,31,None))
        self.assertTrue(package_state_allowed(True,31,[0,7,8,9]))
        self.assertFalse(package_state_allowed(True,43,[0,7,8,9]))
    def test_bitmap(self):
        data=bytes([0x80])+bytes(254)+bytes([0x80])
        self.assertTrue(bitmap_query(7,data))
        self.assertTrue(bitmap_query(2047,data))
        self.assertFalse(bitmap_query(2048,None))
        self.assertFalse(bitmap_query(65535,None))
        self.assertFalse(bitmap_query(0,data))
        self.assertIsNone(bitmap_query(0,None))
    def test_extra(self):
        self.assertTrue(extra_kind_predicate(0x60,True))
        self.assertFalse(extra_kind_predicate(0x60,False))
        self.assertIsNone(extra_kind_predicate(0,True))
        self.assertTrue(extra_kind_predicate(0,True,bitmap_result=False))
        self.assertFalse(extra_kind_predicate(0,True,bitmap_result=True))
        self.assertTrue(extra_kind_predicate(9,True,True,True))
        self.assertIsNone(extra_kind_predicate(9,True,True,None))
        self.assertFalse(extra_kind_predicate(10,True,None,False))
        self.assertFalse(extra_kind_predicate(11,True))
if __name__=="__main__":unittest.main()
