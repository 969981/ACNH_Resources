import unittest
from acnh303_bflan_runtime_compare import compare, FIELDS
def frame(value):
    return dict(zip((*FIELDS,"value"),("Layout/Bell.Nin_NX_NVN.zs",
        "Layout/Bell/_members/anim/Bell.bflan","RootPane","FLPA","0","hermite","12",str(value))))
class NativeFidelityGateTests(unittest.TestCase):
    def test_matched_observation(self):
        result=compare([frame(5.0)],[frame(5.000001)],1e-4)
        self.assertEqual(result["native_observations_compared"],1)
        self.assertTrue(result["within_absolute_tolerance_for_all_matched"])
    def test_report_native_disagreement(self):
        result=compare([frame(5.0)],[frame(6.0)],1e-4)
        self.assertEqual(result["mismatch_total"],1)
        self.assertFalse(result["within_absolute_tolerance_for_all_matched"])
    def test_unknown_target_not_truthy(self):
        other=frame(5.0);other["target"]="WrongPane"
        result=compare([frame(5.0)],[other],1e-4)
        self.assertEqual(result["unknown_trace_records"],1)
        self.assertFalse(result["within_absolute_tolerance_for_all_matched"])
if __name__=="__main__":
    unittest.main()
