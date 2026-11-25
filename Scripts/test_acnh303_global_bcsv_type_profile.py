import unittest,struct
from acnh303_global_bcsv_type_profile import inspect,choose

class TestTypeProfile(unittest.TestCase):
    def test_signed(self):
        r=inspect(b"\xff\xff\x01\x00",0,2,2,0,2,"s16")
        self.assertEqual((r["signed_min"],r["unsigned_max"]),(-1,65535))
    def test_float(self):
        r=inspect(struct.pack("<ff",1.0,float("nan")),0,4,2,0,4,"f32")
        self.assertEqual((r["float_finite"],r["float_nonfinite"]),(1,1))
    def test_string(self):
        r=inspect(b"a\0\0\0\xff\0\0\0",0,4,2,0,4,"string4")
        self.assertEqual(r["string_invalid_utf8"],1)
    def test_candidate_is_not_proof(self):
        v={"native_type":None,"candidates":[{"type":"s16","width_compatible":True}]}
        self.assertEqual(choose(v),("s16","historical_candidate"))
        v["candidates"].append({"type":"u16","width_compatible":True})
        self.assertEqual(choose(v),(None,"unresolved_or_conflict"))
    def test_zero_rows(self):
        self.assertIsNone(inspect(b"",0,4,0,0,4,"f32")["float_min"])

if __name__=="__main__":unittest.main()
