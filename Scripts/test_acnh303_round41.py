#!/usr/bin/env python3
"""R41 source identity regression, never conflate L3 tests with semantic decoding."""
import unittest
from acnh303_round41_select import iterrows, R36, EXPECTED, exclude, choose

class R41Tests(unittest.TestCase):
    def test_r36_prior(self):
        r=list(iterrows(R36))
        self.assertEqual(len(r),320)
        self.assertEqual(len({x["source_path"] for x in r}),320)
        self.assertTrue(all(len(x["source_sha256"])==64 for x in r))
    def test_remaining_and_previous_counts(self):
        self.assertEqual(EXPECTED[("Model",".zs")],57618)
        self.assertEqual(EXPECTED[("Sound",".bars")],608)
        self.assertEqual(len(exclude("Model",".zs")),4654)
        self.assertEqual(len(exclude("Sound",".bars")),1088)
    def test_bad_shards_and_categories(self):
        for args in (("Layout",".zs",0,8,40),("Model",".zs",8,8,40),
                     ("Sound",".bars",0,4,41)):
            with self.assertRaises(ValueError):choose(*args,checkout=False)
if __name__=="__main__":unittest.main()
