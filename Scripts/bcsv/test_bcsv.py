import struct
import unittest
from bcsv import BCSV,crc32

def fixture():
    header=struct.pack("<IIHBB",2,8,2,1,1)+b"VSCB"+bytes(12)
    fields=struct.pack("<IIII",1,2,2,4)
    return header+fields+b"\xAA\xBB\x02\x00abc\0"+b"\x00\x00\x03\x00xyz\0"

class Tests(unittest.TestCase):
    def test_parse(self):
        b=BCSV(fixture())
        self.assertEqual((b.count,b.stride,b.start),(2,8,44))
        self.assertEqual(b.uint(0,1),2)
        self.assertEqual(b.string(1,2),"xyz")
        self.assertEqual(b.raw(0,2),b"abc\0")
    def test_bad_length(self):
        for data in (b"",fixture()[:-1],fixture()+b"x"):
            with self.assertRaises(ValueError): BCSV(data)
    def test_bad_magic(self):
        with self.assertRaises(ValueError): BCSV(fixture()[:12]+b"NOPE"+fixture()[16:])
    def test_row_bounds(self):
        with self.assertRaises(IndexError): BCSV(fixture()).raw(-1,1)
    def test_crc(self):
        self.assertEqual(crc32("Chair"),0x64C26B81)
        self.assertEqual(crc32("0_5x0_5_Pillar"),0x2B28C88F)
    def test_duplicate_offset(self):
        data=bytearray(fixture());struct.pack_into("<I",data,40,2)
        with self.assertRaises(ValueError): BCSV(bytes(data))
if __name__=="__main__": unittest.main()
