#!/usr/bin/env python3
import unittest
from acnh303_round31_material_runtime_elf import direct_branch_target
class BranchValidation(unittest.TestCase):
    def test_forward_bl(self):
        # BL +8, ARM64 imm26=2
        self.assertEqual(direct_branch_target(0x94000002,0x1000),("BL",0x1008))
    def test_backward_bl(self):
        self.assertEqual(direct_branch_target(0x97ffffff,0x1000),("BL",0xffc))
    def test_unconditional_b(self):
        self.assertEqual(direct_branch_target(0x14000003,0x2000),("B",0x200c))
    def test_non_direct_control_flow(self):
        self.assertEqual(direct_branch_target(0xd63f0020,0x2000),(None,None))
if __name__=="__main__":unittest.main()
