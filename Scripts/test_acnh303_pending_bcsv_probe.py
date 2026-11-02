"""No semantic promotion from a string hit or similar ROM filename."""
import tempfile,unittest
from pathlib import Path
from acnh303_pending_bcsv_probe import csv_occurrences,tree_probes

class ProbeTests(unittest.TestCase):
    def test_exact_cell_only_and_row_provenance(self):
        with tempfile.TemporaryDirectory() as d:
            p=Path(d)/"sample.csv"
            p.write_text("_row_index,_row_offset_raw,field\n0,10,FtrBambooLamp\n1,11,FtrBambooLamp_Remake_0_0\n")
            r=csv_occurrences(p,{"FtrBambooLamp"})
            self.assertEqual(len(r["matches"]["FtrBambooLamp"]),1)
            self.assertEqual(r["matches"]["FtrBambooLamp"][0]["row_index"],"0")
    def test_tree_related_name_is_not_exact(self):
        t=["rom/Other_FtrBambooLamp_v1.Nin_NX_NVN.zs"]
        got=tree_probes("FtrBambooLamp",t)
        self.assertEqual(got["exact_stem_path_count"],0)
        self.assertEqual(got["related_name_path_count"],1)
if __name__=="__main__":
    unittest.main()
