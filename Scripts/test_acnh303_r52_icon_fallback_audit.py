"""Separate app fallback proof, ROM-source accounting and release provenance."""
import unittest
from acnh303_r52_icon_fallback_audit import classify_absent_name

class R52Tests(unittest.TestCase):
    def test_literal_version_suffix_not_release_proof(self):
        r=classify_absent_name("FtrSoftdrinkOrange_3.0.0.png")
        self.assertEqual(r["embedded_version_label"], "3.0.0")
        self.assertTrue(r["name_heuristics_are_not_verified_version_evidence"])

    def test_potential_collaboration_only_name_hint(self):
        r=classify_absent_name("CapWigZelda0_0.png")
        self.assertTrue(r["potential_collaboration_label"])
        self.assertTrue(r["has_zero_zero_variant_suffix"])

    def test_other_unknown_name_has_no_assumed_version(self):
        r=classify_absent_name("MissingUnknown.png")
        self.assertIsNone(r["embedded_version_label"])

if __name__ == "__main__":
    unittest.main()
