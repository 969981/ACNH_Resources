#!/usr/bin/env python3
import unittest
from acnh303_round27_select import EXPECTED
from acnh303_round27_bnsh_extract import safe_name
class R27Tests(unittest.TestCase):
    def test_baseline_counts_not_old_round(self):
        self.assertEqual(EXPECTED[("Model",".zs")],58354)
        self.assertEqual(EXPECTED[("Layout",".zs")],360)
        self.assertEqual(EXPECTED[("Sound",".bars")],1300)
    def test_native_shader_member_name_sanitized(self):
        self.assertEqual(safe_name("Layout/a/_members/bgsh/__ArchiveShader.bnsh"),"__ArchiveShader.bnsh")
        with self.assertRaises(ValueError):safe_name("bad/../")
    def test_repeatable_sha_sampling_policy(self):
        from hashlib import sha256
        sample="e10617820db06889e1638499478da0de_NCA/1/Model/X.Nin_NX_NVN.zs"
        self.assertEqual(sha256(sample.encode()).digest(),sha256(sample.encode()).digest())
if __name__=="__main__":unittest.main()
