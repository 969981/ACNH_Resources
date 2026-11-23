"""Cross-platform case-safe media decoder lookup regressions."""
from pathlib import Path
import tempfile
import unittest

from acnh303_media_batch import find_media_decoder


class MediaBatchPaths(unittest.TestCase):
    def test_resolves_canonical_scripts_directory_on_linux(self):
        with tempfile.TemporaryDirectory() as tmp:
            root = Path(tmp)
            expected = root / "Scripts" / "acnh303_media_l3.py"
            expected.parent.mkdir()
            expected.write_text("# decoder", encoding="utf8")
            self.assertEqual(find_media_decoder(root), expected)

    def test_legacy_lowercase_fallback_without_wrong_casing(self):
        with tempfile.TemporaryDirectory() as tmp:
            root = Path(tmp)
            expected = root / "scripts" / "acnh303_media_l3.py"
            expected.parent.mkdir()
            expected.write_text("# decoder", encoding="utf8")
            self.assertEqual(find_media_decoder(root), expected)

    def test_missing_decoder_rejected(self):
        with tempfile.TemporaryDirectory() as tmp:
            with self.assertRaisesRegex(FileNotFoundError, "ACNH media decoder missing"):
                find_media_decoder(Path(tmp))


if __name__ == "__main__":
    unittest.main()
