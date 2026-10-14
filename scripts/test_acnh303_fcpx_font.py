import struct
import unittest
from acnh303_fcpx_font import parse_fcpx

def make(names):
    raw=bytearray(64)
    raw[:4]=b"FCPX"
    raw[4:6]=bytes([255,254])
    struct.pack_into("<H",raw,6,20)
    struct.pack_into("<I",raw,8,0x09030000)
    struct.pack_into("<I",raw,36,len(names))
    for n in names:raw+=n.encode("ascii")+bytes([0])
    struct.pack_into("<I",raw,12,len(raw))
    return bytes(raw)

class FontReferenceTests(unittest.TestCase):
    def test_header_count_and_names(self):
        doc=parse_fcpx(make(["SystemB_00.bfttf","Normal_00.bfotf"]))
        self.assertEqual(doc["declared_font_reference_count"],2)
        self.assertEqual(len(doc["fonts"]),2)
        self.assertEqual(doc["fonts"][1]["ext"],"bfotf")
        self.assertEqual(doc["scope"],"filename references only; no font glyph or character-map extraction")
    def test_source_length_and_count_rejection(self):
        data=bytearray(make(["Example.bfttf"]))
        struct.pack_into("<I",data,12,len(data)+1)
        with self.assertRaises(ValueError):parse_fcpx(bytes(data))
        data=bytearray(make(["Example.bfttf"]))
        struct.pack_into("<I",data,36,2)
        with self.assertRaises(ValueError):parse_fcpx(bytes(data))
if __name__=="__main__":
    unittest.main()
