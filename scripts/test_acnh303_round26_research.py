#!/usr/bin/env python3
"""R26 bounded decoder safety gates. Source run remains SHA-pinned in Actions."""
import unittest
from acnh303_round26_three_callees import (immtarget, TARGETS, ANCHORS, function_cfg)
from acnh303_round25_bnsh_callers import (direct_target, adrp_page)
class Smoke(unittest.TestCase):
    def test_exact_aarch64_control_transfer(self):
        self.assertEqual(direct_target(0x1000,0x94000002),0x1008)
        self.assertEqual(direct_target(0x1000,0x17ffffff),0xffc)
        self.assertIsNone(direct_target(0x1000,0xd65f03c0))
    def test_targets_are_only_expected_three(self):
        self.assertEqual(set(TARGETS),{"allocation_candidate",
            "header_initialize_candidate","resource_object_consumer_candidate"})
        self.assertEqual(len(ANCHORS["allocation_candidate"]),2)
    def test_branch_operand_parser(self):
        class I:
            op_str="w8, #0x1, #0x20"
        self.assertEqual(immtarget(I()),0x20)
    def test_empty_boundaries_do_not_invent_a_function(self):
        d=function_cfg(b"",[],0x25001c,{})
        self.assertEqual(d["reachable_instruction_count"],0)
        self.assertEqual(d["direct_calls"],[])
        self.assertFalse(d["bounded_not_proven_function_extent"] is False)
if __name__=="__main__":
    unittest.main()
