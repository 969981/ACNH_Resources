#!/usr/bin/env python3
"""R43 exact prior SHA lineage and full final BARS backlog selection regressions."""
import unittest
from collections import Counter
from acnh303_round43_select import iterrows,R42,EXPECTED,exclude,choose
class SourceAudit(unittest.TestCase):
 def test_prior_r42(self):
  rec=list(iterrows(R42))
  self.assertEqual(len(rec),960)
  self.assertEqual(len({x["source_path"] for x in rec}),960)
  self.assertEqual(Counter(x["category"] for x in rec),{"Model":640,"BARS":320})
  self.assertTrue(all(len(x["source_sha256"])==64 for x in rec))
 def test_remaining_and_dedup(self):
  self.assertEqual(EXPECTED[("Model",".zs")],56658)
  self.assertEqual(EXPECTED[("Sound",".bars")],128)
  self.assertEqual(len(exclude("Model",".zs")),5614)
  self.assertEqual(len(exclude("Sound",".bars")),1568)
 def test_invalid_selection(self):
  for args in (("Layout",".zs",0,32,40),("Sound",".bars",4,4,32),
               ("Model",".zs",32,32,40),("Model",".zs",0,0,40)):
   with self.assertRaises(ValueError):choose(*args,checkout=False)
if __name__=="__main__":unittest.main()
