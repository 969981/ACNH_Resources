#!/usr/bin/env python3
"""R34 never-tested original source invariants; no assumed converter success."""
import unittest
from acnh303_round34_select import EXPECTED
from acnh303_round34_bwav_native import analyze
class R34SourceTests(unittest.TestCase):
    def test_baseline(self):
        self.assertEqual(EXPECTED,{("Model",".zs"):58018,("Layout",".zs"):148,("Sound",".bars"):1088})
    def test_full_layout_target_and_increased_bars(self):
        self.assertEqual(4*20+4*37+4*40,388)
        self.assertEqual(4*37,EXPECTED[("Layout",".zs")])
    def test_no_opaque_pcm_success_for_invalid_magic(self):
        with self.assertRaises(ValueError):analyze(b"invalid"+b"\0"*161)
if __name__=="__main__":unittest.main()
