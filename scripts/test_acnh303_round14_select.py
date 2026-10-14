"""R14 regression for Git-tree selection and overlap exclusion."""
import hashlib
import unittest
from unittest.mock import patch,Mock
from acnh303_round14_select import select,NCA

class Round14SelectionTests(unittest.TestCase):
    def test_no_repeat_and_hash_sharding(self):
        names=[f"{NCA}/1/Layout/Fixture{i:02d}.zs" for i in range(80)]
        rows=b"".join((b"100644 blob "+b"a"*40+b"\t"+s.encode()+b"\x00") for s in names)
        groups=[]
        with patch("acnh303_round14_select.baselines",return_value=(
            {names[0][len(NCA)+3:]},set()
        )),patch("acnh303_round14_select.subprocess.run",return_value=Mock(stdout=rows)) as run:
            for shard in range(4):
                doc=select("Layout",".zs",shard,4,2,checkout=False)
                self.assertEqual(doc["selected_files"],2)
                self.assertEqual(doc["excluded_core_media_r10"],1)
                self.assertNotIn(names[0],doc["paths"])
                groups.extend(doc["paths"])
            self.assertEqual(len(set(groups)),8)
            self.assertEqual(run.call_count,4)
            for shard,name in enumerate([]): pass
    def test_invalid_group_and_count(self):
        with self.assertRaises(ValueError):
            select("Model",".bars",0,4,2,checkout=False)
        with self.assertRaises(ValueError):
            select("Sound",".bwav",4,4,2,checkout=False)

if __name__=="__main__":
    unittest.main()
