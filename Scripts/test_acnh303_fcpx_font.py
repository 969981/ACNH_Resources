import struct
import unittest
from acnh303_fcpx_font import parse_fcpx

def make(names):
    raw=bytearray(0x40+40*len(names))
    raw[:4]=b"FCPX"
    raw[4:6]=bytes([255,254])
    struct.pack_into("<H",raw,6,20)
    struct.pack_into("<I",raw,8,0x09030000)
    struct.pack_into("<I",raw,0x24,len(names))
    raw+=bytes(16)
    for i,n in enumerate(names):
        off=len(raw)
        struct.pack_into("<I",raw,0x40+40*i+4,off-0x18)
        struct.pack_into("<I",raw,0x40+40*i+12,0x3f800000)
        raw+=n.encode("ascii")+bytes([0])
    struct.pack_into("<I",raw,12,len(raw))
    return bytes(raw)

class FontRecordTests(unittest.TestCase):
    def test_pointer_offset_and_opaque_words(self):
        doc=parse_fcpx(make(["ParkExt.bfttf","Normal_00.bfotf"]))
        self.assertEqual(doc["declared_font_reference_count"],2)
        self.assertEqual(doc["fonts"][1]["name"],"Normal_00.bfotf")
        self.assertEqual(doc["fonts"][0]["record_length"],40)
        self.assertEqual(doc["fonts"][1]["record_file_offset"],0x40+40)
        self.assertEqual(doc["fonts"][0]["record_words_u32_le"][3],0x3f800000)
        self.assertEqual(doc["font_reference_table"]["filename_pointer_bias"],24)
        self.assertIn("not proven",doc["font_reference_table"]["semantic_limit"])
    def test_bad_source_length(self):
        data=bytearray(make(["ParkExt.bfttf"]))
        struct.pack_into("<I",data,12,len(data)+4)
        with self.assertRaises(ValueError):parse_fcpx(bytes(data))
    def test_bad_record_pointer(self):
        data=bytearray(make(["ParkExt.bfttf"]))
        struct.pack_into("<I",data,0x44,0xffffffee)
        with self.assertRaises(ValueError):parse_fcpx(bytes(data))
    def test_wrong_font_count(self):
        data=bytearray(make(["ParkExt.bfttf"]))
        struct.pack_into("<I",data,0x24,2)
        with self.assertRaises(ValueError):parse_fcpx(bytes(data))
    def test_unknown_string_alias_rejected(self):
        data=bytearray(make(["ParkExt.bfttf"]))
        data+=b"Unreferenced.bfttf"+bytes([0])
        struct.pack_into("<I",data,12,len(data))
        with self.assertRaises(ValueError):parse_fcpx(bytes(data))

if __name__=="__main__":
    unittest.main()
