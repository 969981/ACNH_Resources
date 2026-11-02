"""R48 source-evidence-only regression tests; zero game-runtime assumptions."""
import copy
import json
import unittest
from acnh303_r48_join_texsrt_fmat import R46, R47, join


class R48Join(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.curves = json.loads(R46.read_text("utf-8"))
        cls.models = json.loads(R47.read_text("utf-8"))

    def test_original_evidence_candidate_grid(self):
        out = join(self.curves, self.models)
        self.assertEqual(out["candidate_materials"], 8)
        self.assertEqual(out["offline_curve_samples"], 40)
        self.assertEqual(out["hypothesized_translation_x_source_offset"], "0x194")
        self.assertEqual(len(out["unmatched_fmaa_material_records"]), 2)
        self.assertFalse(out["runtime_shader_binding_verified"])
        self.assertFalse(out["runtime_AAL_FileOpen_Read_Close_verified"])

    def test_wrong_source_byte_offset_rejected(self):
        altered = copy.deepcopy(self.models)
        altered["matches"][0]["source_shader_param_data_offset"] = 0x180
        with self.assertRaises(ValueError):
            join(self.curves, altered)

    def test_forged_runtime_binding_rejected(self):
        altered = copy.deepcopy(self.curves)
        altered["animations"][0]["materials"][1]["sub_bind_index"] = 0
        with self.assertRaises(ValueError):
            join(altered, self.models)


if __name__ == "__main__":
    unittest.main()
