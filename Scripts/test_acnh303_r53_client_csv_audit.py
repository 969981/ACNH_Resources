"""R53 strict test for name normalization and CSV parsing."""
import tempfile
from pathlib import Path
import unittest
from acnh303_r53_client_csv_audit import parse_pokercore_csv, screenshot_name_hints

class SourceSemanticsTest(unittest.TestCase):
    def test_literal_pokercore_split_and_hex_id(self):
        with tempfile.TemporaryDirectory() as d:
            p=Path(d)/"variations.csv"
            p.write_text("id ; iName ; eng ; \n017F ; FtrAcorsticguitar ; guitar ; \n",encoding="utf-8")
            a=parse_pokercore_csv(p)
            self.assertEqual(a["records"][0]["id_decimal"],383)
            self.assertEqual(a["records"][0]["iName"],"FtrAcorsticguitar")
    def test_40_name_heuristics_are_not_proof(self):
        self.assertEqual(screenshot_name_hints("CapWigZelda0_0.png"),["CapWigZelda0_0","CapWigZelda"])
        self.assertEqual(screenshot_name_hints("FtrSoftdrinkOrange_3.0.0.png"),["FtrSoftdrinkOrange_3.0.0","FtrSoftdrinkOrange"])
        self.assertEqual(screenshot_name_hints("FtrBambooLamp.png"),["FtrBambooLamp"])
if __name__=="__main__":
    unittest.main()
