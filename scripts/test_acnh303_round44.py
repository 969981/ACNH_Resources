#!/usr/bin/env python3
"""R44: all 2560 sources newly selected, never revisit previously SHA-audited R43."""
import unittest
from collections import Counter
from acnh303_round44_select import EXPECTED, R43, iterrows, exclude, choose
class TestR44(unittest.TestCase):
 def test_r43_snapshot(self):
  rows=list(iterrows(R43))
  self.assertEqual(len(rows),1408)
  self.assertEqual(len({r["source_path"] for r in rows}),1408)
  self.assertEqual(Counter(r["category"] for r in rows),{"Model":1280,"BARS":128})
 def test_exact_source_backlog(self):
  self.assertEqual(EXPECTED,{("Model",".zs"):55378})
  self.assertEqual(len(exclude("Model",".zs")),6894)
 def test_selection_invalid(self):
  for args in (("Sound",".bars",0,4,32),("Model",".zs",64,64,40),
               ("Model",".zs",0,65,40),("Model",".zs",0,64,41)):
   with self.assertRaises(ValueError):choose(*args,checkout=False)
if __name__=="__main__":unittest.main()
