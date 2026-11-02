import struct
import unittest
from acnh303_ui2d_parser import parse_ui2d

def mksec(tag, body):
    return tag.encode() + struct.pack("<I",len(body)+8)+body

def mkfile(tag, sections):
    body=b"".join(sections)
    return tag.encode()+b"\xff\xfe"+struct.pack("<HIIHH",20,0x09000000,len(body)+20,len(sections),0)+body

class LayoutTests(unittest.TestCase):
    def test_pane_tree(self):
        pane=bytearray(76)
        pane[4:8]=b"Root"
        struct.pack_into("<3f",pane,36,10,20,30)
        struct.pack_into("<2f",pane,60,1,1)
        struct.pack_into("<2f",pane,68,100,50)
        layout=bytearray(25)
        struct.pack_into("<4f",layout,4,1920,1080,0,0)
        layout[20:25]=b"UI\0\0\0"
        result=parse_ui2d(mkfile("FLYT",[mksec("lyt1",layout),mksec("pan1",pane),mksec("pas1",b""),mksec("pan1",pane),mksec("pae1",b"")]))
        self.assertEqual(result["layout"]["width"],1920)
        self.assertEqual(len(result["panes"]),2)
        self.assertEqual(result["panes"][0]["children"],[1])
    def test_animation_name(self):
        pat=bytearray(48)
        struct.pack_into("<I",pat,4,36)
        pat[28:35]=b"FadeIn\0"
        pai=bytearray(12)
        struct.pack_into("<H",pai,0,12)
        pai[2]=1
        result=parse_ui2d(mkfile("FLAN",[mksec("pat1",pat),mksec("pai1",pai)]))
        self.assertEqual(result["animations"][0]["value"]["animation_name"],"FadeIn")
        self.assertTrue(result["animations"][1]["value"]["looping"])
    def test_length_integrity(self):
        doc=bytearray(mkfile("FLYT",[mksec("pae1",b"")]))
        with self.assertRaises(ValueError):parse_ui2d(doc)
        struct.pack_into("<I",doc,12,len(doc)+2)
        with self.assertRaises(ValueError):parse_ui2d(doc)
if __name__=="__main__":
    unittest.main()
