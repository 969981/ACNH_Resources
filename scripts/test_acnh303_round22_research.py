#!/usr/bin/env python3
"""R22 cubic coefficient/Hermite and branch decoding synthetic regression."""
import unittest,math
from acnh303_round22_full_curves import cubic_eval,hermite_eval
from acnh303_round22_native_callee import branch_target

class HermiteMathTests(unittest.TestCase):
    def test_cubic_hermite_match_nontrivial_interval(self):
        # a,b,c,d of a cubic whose y0=2 and y1=9 at t=1
        coeff=[2,3,5,-1]
        dt=2
        end=cubic_eval(coeff,1)
        m0=coeff[1]/dt
        m1=(coeff[1]+2*coeff[2]+3*coeff[3])/dt
        self.assertEqual(end,9)
        for t in [0,.125,.25,.5,.75,1]:
            self.assertAlmostEqual(cubic_eval(coeff,t),hermite_eval(coeff[0],end,m0,m1,t,dt),places=7)
    def test_unit_frame_duration_does_not_lose_sign(self):
        coeff=[-0.5,2,-5,3.5]
        dt=1
        p1=cubic_eval(coeff,1)
        for t in [0,.2,.8,1]:
            self.assertAlmostEqual(cubic_eval(coeff,t),hermite_eval(coeff[0],p1,2,2+2*(-5)+3*3.5,t,dt),places=6)
    def test_not_reassign_next_key_silently(self):
        # discontinuous next-key coefficients still yield observable endpoint residual.
        coeff=[2,1,1,1]
        next_value=8
        self.assertNotEqual(cubic_eval(coeff,1),next_value)

class AArch64Tests(unittest.TestCase):
    def test_direct_bl_forward(self):
        self.assertEqual(branch_target(0x1000,0x94000002),0x1008)
    def test_direct_b_backward(self):
        self.assertEqual(branch_target(0x1000,0x17ffffff),0xffc)
    def test_ordinary_not_direct_branch(self):
        self.assertIsNone(branch_target(0x1000,0xd63f0100))

if __name__=="__main__":unittest.main()
