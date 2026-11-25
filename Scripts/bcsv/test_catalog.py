import tempfile, struct, unittest
from pathlib import Path
from bcsv import BCSV, crc32
from catalog import run,reference_candidates,label_domains

def fixture(fields,rows,stride):
    return struct.pack("<IIHBB",len(rows),stride,len(fields),1,1)+b"VSCB"+bytes(12)+b"".join(struct.pack("<II",*f) for f in fields)+b"".join(rows)
class CatalogTests(unittest.TestCase):
    def test_reference(self):
        labels=["Chair","Sofa","Table"]
        target=BCSV(fixture([(0x87BF00E8,0)],[x.encode().ljust(16,b"\0") for x in labels],16))
        source=BCSV(fixture([(0x12345678,0)],[struct.pack("<I",crc32(x)) for x in labels],4))
        tables={"target.bcsv":target,"source.bcsv":source}
        r=list(reference_candidates(tables,label_domains(tables)))
        self.assertEqual(len(r),1);self.assertEqual(r[0]["matched_rows"],3)
        self.assertEqual(r[0]["status"],"candidate_not_verified")
    def test_catalog_keeps_failures(self):
        with tempfile.TemporaryDirectory() as tmp:
            root=Path(tmp)/"in";root.mkdir()
            (root/"ok.bcsv").write_bytes(fixture([(1,0)],[b"\0"*4],4))
            (root/"bad.bcsv").write_bytes(b"bad")
            out=Path(tmp)/"out";s=run(root,out)
            self.assertEqual((s["files"],s["parsed"],s["unsupported"],s["unique_field_hashes"]),(2,1,1,1))
            self.assertTrue((out/"docs/README.md").exists())
