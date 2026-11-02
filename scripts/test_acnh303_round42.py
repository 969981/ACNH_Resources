#!/usr/bin/env python3
"""R42: enforce audited R41 boundaries and fail-closed source-selection rules."""
import unittest
from collections import Counter
from acnh303_round42_select import iterrows,R41,EXPECTED,exclude,choose
class SelectionTests(unittest.TestCase):
 def test_prior_r41(self):
  items=list(iterrows(R41))
  self.assertEqual(len(items),480)
  self.assertEqual(len({x["source_path"] for x in items}),480)
  self.assertEqual(Counter(x["category"] for x in items),{"Model":320,"BARS":160})
 def test_exact_untested_and_prior_counts(self):
  self.assertEqual(EXPECTED[("Model",".zs")],57298)
  self.assertEqual(EXPECTED[("Sound",".bars")],448)
  self.assertEqual(len(exclude("Model",".zs")),4974)
  self.assertEqual(len(exclude("Sound",".bars")),1248)
 def test_invalid_selection(self):
  for args in (("Layout",".zs",0,16,40),("Model",".zs",16,16,40),
               ("Sound",".bars",0,8,41)):
   with self.assertRaises(ValueError):choose(*args,checkout=False)
if __name__=="__main__":unittest.main()
