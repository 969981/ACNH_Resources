import unittest
from acnh303_global_bcsv_native_reader import pair,movwide

class TestNativeReader(unittest.TestCase):
    def test_mov_pair(self):
        a=0x52800000|(0x6054<<5)|2
        b=0x72800000|(1<<21)|(0x5470<<5)|2
        self.assertEqual(pair(a,b),(0x54706054,2))
        self.assertIsNone(pair(a,b^1))
    def test_reverse_halves(self):
        a=0x52800000|(1<<21)|(0x5140<<5)|1
        b=0x72800000|(0xe4b4<<5)|1
        self.assertEqual(pair(a,b),(0x5140e4b4,1))
    def test_invalid(self):
        self.assertIsNone(movwide(0xd65f03c0))
        self.assertIsNone(pair(0x52800000,0x72800000))
if __name__=="__main__":unittest.main()
