import struct,unittest
from build_message_data import parse
def fixture(raw):
    label=struct.pack("<III",1,2,12)+b"\x04"+b"0001"+struct.pack("<I",0)+b"\x05alias"+struct.pack("<I",0)
    txt=struct.pack("<II",1,8)+raw
    head=bytearray(32);head[:8]=b"MsgStdBn";head[8:10]=b"\xff\xfe";head[12]=1;struct.pack_into("<H",head,14,2)
    for tag,b in [(b"LBL1",label),(b"TXT2",txt)]:
        head+=tag+struct.pack("<I",len(b))+bytes(8)+b
        head+=bytes((-len(head))%16)
    return bytes(head)
class Tests(unittest.TestCase):
    def test_alias_control_and_raw(self):
        raw="A".encode("utf-16-le")+struct.pack("<HHHH",14,3,4,2)+b"\xaa\xbb"+"B".encode("utf-16-le")+b"\0\0"
        r=parse(fixture(raw))[3][0]
        self.assertEqual(r[2],raw);self.assertEqual([x[0] for x in r[3]],["0001","alias"])
        self.assertEqual(r[4],"AB");self.assertEqual(r[6][0]["payload_hex"],"aabb")
    def test_truncated(self):
        r=parse(fixture(struct.pack("<H",14)))[3][0]
        self.assertIsNone(r[4]);self.assertEqual(r[5],"truncated_control")
    def test_invalid(self):
        with self.assertRaises(ValueError):parse(b"bad")
