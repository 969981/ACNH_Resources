import tempfile
from pathlib import Path
import unittest

from batch_pipeline import MAX_SELECT, CATEGORIES, check_output, source_rel


class SourcePathTest(unittest.TestCase):
    def test_reject_absolute_and_traversal(self):
        for name in ("../x", "/tmp/x", "C:/Windows/file", r"C:\Windows\file"):
            with self.subTest(name=name):
                with self.assertRaises(ValueError):
                    source_rel(name)

    def test_accept_source_with_spaces(self):
        self.assertEqual(source_rel("Sound/Resource/Example Audio.bwav"),
                         Path("Sound/Resource/Example Audio.bwav"))

    def test_categories_include_media_and_tables(self):
        self.assertEqual(CATEGORIES["Sound"], (".bwav", "media"))
        self.assertEqual(CATEGORIES["Model"], (".zs", "media"))
        self.assertEqual(CATEGORIES["Bcsv"], (".bcsv", "basic"))
        self.assertEqual(CATEGORIES["Stage"], (".byml", "basic"))
        self.assertLessEqual(MAX_SELECT, 24)

    def test_real_sha256_and_bounded_output(self):
        import hashlib
        with tempfile.TemporaryDirectory() as tmp:
            root = Path(tmp)
            f = root / "UnPack" / "1" / "Bcsv" / "test.json"
            f.parent.mkdir(parents=True)
            f.write_bytes(b'{"a":1}\n')
            sha = hashlib.sha256(f.read_bytes()).hexdigest()
            record = check_output(root, f, sha, f.stat().st_size)
            self.assertEqual(record["sha256"], sha)
            with self.assertRaises(RuntimeError):
                check_output(root, f, "0" * 64)
            with self.assertRaises(RuntimeError):
                check_output(root, root / "unsafe.json", sha)


if __name__ == "__main__":
    unittest.main()
