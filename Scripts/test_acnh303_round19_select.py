"""R19 reproducible path-hash selection and no-repeat tests."""
import unittest
from unittest.mock import patch
from types import SimpleNamespace
from acnh303_round19_select import choose,NCA

def tree(category,suffix,number):
    return b"".join(
        b"100644 blob "+b"a"*40+b"\t"+
        f"{NCA}/1/{category}/sample{i:04d}{suffix}".encode()+b"\0"
        for i in range(number)
    )

class R19Selection(unittest.TestCase):
    def check_category(self,category,suffix,prior,count,shards,cap):
        prefix=f"{category}/"
        old={f"{prefix}sample{i:04d}{suffix}" for i in range(prior)}
        with patch("acnh303_round19_select.excluded",return_value=old),\
             patch("acnh303_round19_select.CHOICES",{(category,suffix):count}),\
             patch("acnh303_round19_select.subprocess.run",return_value=SimpleNamespace(stdout=tree(category,suffix,prior+count))):
            allrows=[choose(category,suffix,k,shards,cap,False) for k in range(shards)]
            again=[choose(category,suffix,k,shards,cap,False) for k in range(shards)]
        names=[p for row in allrows for p in row["paths"]]
        self.assertEqual(allrows,again)
        self.assertEqual(len(names),shards*cap)
        self.assertEqual(len(set(names)),len(names))
        self.assertTrue(all(p.split("/1/",1)[1] not in old for p in names))
        self.assertEqual({r["remaining_before_r19"] for r in allrows},{count})

    def test_model_distributed(self):self.check_category("Model",".zs",13,167,6,20)
    def test_layout_distributed(self):self.check_category("Layout",".zs",10,68,4,12)
    def test_bars_distributed(self):self.check_category("Sound",".bars",10,68,4,12)

    def test_incomplete_inventory_fails(self):
        with patch("acnh303_round19_select.excluded",return_value=set()),\
             patch("acnh303_round19_select.CHOICES",{("Layout",".zs"):12}),\
             patch("acnh303_round19_select.subprocess.run",return_value=SimpleNamespace(stdout=tree("Layout",".zs",11))):
            with self.assertRaisesRegex(ValueError,"uncounted"):
                choose("Layout",".zs",0,2,3,False)

    def test_reject_bwav_already_closed(self):
        with self.assertRaises(ValueError):choose("Sound",".bwav",0,2,10,False)

if __name__=="__main__":unittest.main()
