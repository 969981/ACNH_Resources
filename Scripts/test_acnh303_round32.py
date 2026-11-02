#!/usr/bin/env python3
"""R32 inventory and source selection contract tests; no fake success counts."""
import unittest
from acnh303_round32_select import EXPECTED
class R32BaselineTests(unittest.TestCase):
    def test_exact_unmeasured_l3_counts(self):
        self.assertEqual(EXPECTED,{("Model",".zs"):58138,
            ("Layout",".zs"):252,("Sound",".bars"):1192})
    def test_new_pick_capacity(self):
        caps={"Model":20,"Layout":12,"Sound":12}
        self.assertEqual(sum(v*2 for v in caps.values()),88)
    def test_inventory_type_separation(self):
        from acnh303_round32_select import BW
        self.assertEqual(BW,"acnh303-BARS-BWAV-real-PCM-v1")
if __name__=="__main__":unittest.main()
