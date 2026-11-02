"""Regression tests: never turn a candidate model/portrait into an item icon."""
import unittest
from acnh303_unmatched_rom_audit import NCA, EXT, audit, family_path


class UnmatchedRomAuditTests(unittest.TestCase):
    def test_direct_layout_does_not_enter_pending(self):
        tree = {family_path("FtrIcon", "10000Bell")}
        result = audit(["10000Bell.png", "Missing.png"], tree)
        self.assertEqual(result["direct_same_named_layout_sources"], 1)
        self.assertEqual(result["unmatched_names"], 1)
        self.assertEqual(result["entries"][0]["filename"], "Missing.png")
        self.assertFalse(result["entries"][0]["native_png_extracted_for_this_entry"])

    def test_villager_photo_is_not_an_item_icon(self):
        tree = {family_path("NpcBromide", "NpcNmlAnt00")}
        result = audit(["NpcNmlAnt00.png"], tree)
        self.assertEqual(result["unmatched_names"], 1)
        self.assertEqual(result["entries"][0]["category"], "villager_photo_other_family")
        self.assertFalse(result["entries"][0]["candidates"][0]["mapping_verified"])

    def test_remake_candidate_is_not_verified(self):
        tree = {family_path("FtrIcon", "FtrBambooLamp_Remake_0_0")}
        result = audit(["FtrBambooLamp.png"], tree)
        self.assertEqual(result["entries"][0]["category"], "variant_mapping_needed")
        self.assertTrue(result["candidate_is_not_proven_image"])

    def test_model_does_not_become_an_icon(self):
        tree = {f"{NCA}/FtrBambooLamp{EXT}"}
        result = audit(["FtrBambooLamp.png"], tree)
        self.assertEqual(result["entries"][0]["category"], "model_or_base_resource_only")
        self.assertEqual(result["native_pngs_produced_by_this_audit"], 0)


if __name__ == "__main__":
    unittest.main()
