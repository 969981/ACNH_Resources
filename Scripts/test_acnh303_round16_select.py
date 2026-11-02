"""R16 no-repeat, complete-final-BWAV and multi-group sharding regression."""
import unittest
from unittest.mock import patch
from types import SimpleNamespace
from acnh303_round16_select import select, NCA

def make_tree(category, suffix, length):
    rows=[]
    for i in range(length):
        path=f"{NCA}/1/{category}/f_{i:05d}{suffix}"
        rows.append(b"100644 blob " + (b"a"*40) + b"\t" + path.encode() + b"\0")
    return b"".join(rows)

class R16SelectTests(unittest.TestCase):
    def test_222_bwav_exactly_once_across_12_shards(self):
        tree=make_tree("Sound",".bwav",230)
        prior={f"Sound/f_{i:05d}.bwav" for i in range(8)}
        with patch("acnh303_round16_select.load_exclusions",return_value=prior), \
             patch("acnh303_round16_select.subprocess.run",
                   return_value=SimpleNamespace(stdout=tree)):
            results=[select("Sound",".bwav",j,12,20,True,False) for j in range(12)]
        paths=[x for row in results for x in row["paths"]]
        self.assertEqual(len(paths),222)
        self.assertEqual(len(set(paths)),222)
        self.assertEqual([len(row["paths"]) for row in results],[19]*6+[18]*6)
        self.assertFalse(any(x.endswith("f_00000.bwav") for x in paths))

    def test_expansion_disjoint_and_capped(self):
        tree=make_tree("Layout",".zs",100)
        with patch("acnh303_round16_select.load_exclusions",return_value=set()), \
             patch("acnh303_round16_select.subprocess.run",
                   return_value=SimpleNamespace(stdout=tree)):
            results=[select("Layout",".zs",j,6,8,False,False) for j in range(6)]
        names=[n for row in results for n in row["paths"]]
        self.assertEqual(len(names),48)
        self.assertEqual(len(set(names)),48)

    def test_missing_final_bwav_fails_closed(self):
        tree=make_tree("Sound",".bwav",221)
        with patch("acnh303_round16_select.load_exclusions",return_value=set()), \
             patch("acnh303_round16_select.subprocess.run",
                   return_value=SimpleNamespace(stdout=tree)):
            with self.assertRaisesRegex(ValueError,"222"):
                select("Sound",".bwav",0,12,20,True,False)

    def test_reject_all_remaining_on_model(self):
        with self.assertRaises(ValueError):
            select("Model",".zs",0,6,12,True,False)

if __name__=="__main__":
    unittest.main()
