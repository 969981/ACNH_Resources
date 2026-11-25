import struct, unittest
from acnh303_global_bcsv_dictionary import descriptors,crc,width,blob

class TestDictionary(unittest.TestCase):
    def fixture(self):
        b=bytearray(28+16+12);struct.pack_into("<IIH",b,0,1,12,2)
        b[12:16]=b"VSCB";struct.pack_into("<IIII",b,28,0x54706054,4,0x11223344,6)
        return b
    def test_descriptor(self):
        n,s,cols=descriptors(self.fixture())
        self.assertEqual((n,s),(1,12))
        self.assertEqual([(x["hash"],x["offset"],x["width_hint"]) for x in cols],[("54706054",4,2),("11223344",6,6)])
    def test_truncated(self):
        with self.assertRaises(ValueError): descriptors(self.fixture()[:-1])
    def test_offset(self):
        b=self.fixture();struct.pack_into("<I",b,32,12)
        with self.assertRaises(ValueError): descriptors(b)
    def test_crc_width(self):
        self.assertEqual(crc("UniqueID u16"),"54706054")
        self.assertEqual(crc("FlagsFlowAccess u8"),"FA93F14B")
        self.assertEqual(width("s16"),2)
        self.assertEqual(width("string64"),64)
        self.assertIsNone(width(None))
    def test_git_blob(self):
        self.assertEqual(blob(b""),"e69de29bb2d1d6434b8b29ae775ad8c2e48c5391")

if __name__=="__main__": unittest.main()
