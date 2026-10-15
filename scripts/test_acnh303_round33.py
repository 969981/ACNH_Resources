#!/usr/bin/env python3
import unittest
from acnh303_round33_select import EXPECTED
class R33SelectedSourceContract(unittest.TestCase):
    def test_original_remaining_inventory(self):
        self.assertEqual(EXPECTED,{("Model",".zs"):58098,
            ("Layout",".zs"):228,("Sound",".bars"):1168})
    def test_shards_and_no_overlap_eligible(self):
        self.assertEqual(4*20*3,240)
        self.assertGreaterEqual(EXPECTED[("Layout",".zs")],4*20)
        self.assertGreaterEqual(EXPECTED[("Sound",".bars")],4*20)
if __name__=="__main__":unittest.main()
