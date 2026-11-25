import unittest
from acnh303_remake_model_binding import ordinary_resource_names, count
class RemakeNames(unittest.TestCase):
    def test_ordinary_body_fabric(self):
        x=ordinary_resource_names("FtrBabybed",1|(1<<5),8,7)
        self.assertEqual((x["bodyResource"],x["fabricResource"]),("FtrBabybedReBody1","FtrBabybedReFabric1"))
    def test_bounds_and_modes(self):
        x=ordinary_resource_names("X",7|(7<<5),3,4)
        self.assertEqual((x["bodyResource"],x["fabricResource"]),("XReBody0","XReFabric0"))
        for mode in (1,2):
            x=ordinary_resource_names("X",1|(mode<<3)|(2<<5),3,4)
            self.assertEqual(x["fabricResource"],"XReFabric0")
            self.assertTrue(x["specialTexturePathUnresolved"])
        x=ordinary_resource_names("X",(3<<3)|(2<<5),3,4)
        self.assertEqual(x["fabricMode"],0)
        self.assertEqual(x["fabricResource"],"XReFabric2")
    def test_absent_channel(self):
        self.assertIsNone(ordinary_resource_names("X",0,0,0)["bodyResource"])
        self.assertIsNone(ordinary_resource_names("X",0,0,0)["fabricResource"])
        self.assertEqual([count(-1),count(7)],[0,8])
        with self.assertRaises(ValueError):count(8)
if __name__=="__main__":unittest.main()
