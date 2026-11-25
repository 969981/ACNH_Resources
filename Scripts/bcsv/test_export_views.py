import csv,struct,tempfile,unittest
from pathlib import Path
from bcsv import BCSV,crc32
from export_views import raw_value,headers,export_table
class ViewTests(unittest.TestCase):
    def test_raw(self):
        self.assertEqual(raw_value(b"\xff\xff"),"65535")
        self.assertEqual(raw_value(b"Chair\0"+b"\0"*10),"Chair")
        self.assertEqual(raw_value(b"\xff"*3),"hex:ffffff")
    def test_views_preserve_values(self):
        h=crc32("UniqueID u16")
        b=BCSV(struct.pack("<IIHBB",1,6,1,1,1)+b"VSCB"+bytes(12)+struct.pack("<II",h,4)+struct.pack("<IH",36,65535))
        idx={f"{h:08X}":{"occurrences":[{"table":"T","ordinal":0,"offset":4,"width":2,"compatible_signatures":["UniqueID u16"]}],"name_candidates":[{"signature":"UniqueID u16","name":"UniqueID","type":"u16","type_width":2}]}}
        cols=headers("T",b,idx)
        self.assertEqual(cols[0]["column"],"UniqueID")
        with tempfile.TemporaryDirectory() as tmp:
            a=Path(tmp)/"raw.csv";z=Path(tmp)/"named.csv"
            export_table(b,cols,a,z)
            self.assertEqual(a.read_text(encoding="utf-8-sig").splitlines()[1],z.read_text(encoding="utf-8-sig").splitlines()[1])
    def test_unknown(self):
        h=123
        b=BCSV(struct.pack("<IIHBB",1,6,1,1,1)+b"VSCB"+bytes(12)+struct.pack("<II",h,4)+bytes(6))
        idx={"0000007B":{"occurrences":[{"table":"T","ordinal":0,"offset":4,"width":2,"compatible_signatures":[]}],"name_candidates":[]}}
        self.assertEqual(headers("T",b,idx)[0]["column"],"hash_0000007B")
