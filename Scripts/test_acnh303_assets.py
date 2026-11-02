"""Tests for filename provenance and real-PNG-only assets import."""
import importlib.util
import json
import struct
import subprocess
import sys
import tempfile
import unittest
import zlib
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
SPEC = importlib.util.spec_from_file_location("acnh303_assets", ROOT / "Scripts/acnh303_assets.py")
asset = importlib.util.module_from_spec(SPEC)
SPEC.loader.exec_module(asset)


def chunk(tag, data=b""):
    return struct.pack(">I", len(data)) + tag + data + struct.pack(">I", zlib.crc32(tag + data) & 0xFFFFFFFF)


def valid_png():
    ihdr = struct.pack(">IIBBBBB", 1, 1, 8, 6, 0, 0, 0)
    pixel_data = zlib.compress(b"\x00\xfe\x80\x30\xff")
    return asset.PNG_SIG + chunk(b"IHDR", ihdr) + chunk(b"IDAT", pixel_data) + chunk(b"IEND")


class AssetTests(unittest.TestCase):
    def test_fifty_six_babybed_combinations_indexed(self):
        catalog = asset.load_catalog(ROOT / "assets/catalog/expected-png-names.txt")
        baby = {s for s in catalog if s.startswith("FtrBabybed_Remake_")}
        self.assertEqual(baby, {
            f"FtrBabybed_Remake_{body}_{fabric}.png"
            for body in range(8) for fabric in range(7)
        })

    def test_listing_utf16_is_names_only(self):
        with tempfile.TemporaryDirectory() as d:
            file = Path(d) / "listing.txt"
            file.write_text(
                "D:.\n│  FtrBabybed_Remake_0_0.png\n"
                "│  FtrBabybed_Remake_0_0.png\n└─ FtrBabybed_Remake_7_6.png\n",
                encoding="utf-16"
            )
            self.assertEqual(
                set(asset.listing_to_names(file)),
                {"FtrBabybed_Remake_0_0.png", "FtrBabybed_Remake_7_6.png"}
            )

    def test_png_crc_and_source_manifest(self):
        with tempfile.TemporaryDirectory() as d:
            base = Path(d)
            src = base / "source"
            src.mkdir()
            p = src / "FtrBabybed_Remake_0_0.png"
            p.write_bytes(valid_png())
            self.assertEqual(asset.png_info(p)["width"], 1)
            damaged = base / "bad.png"
            payload = bytearray(valid_png())
            payload[-6] ^= 1
            damaged.write_bytes(payload)
            with self.assertRaises(ValueError):
                asset.png_info(damaged)
            catalog = base / "expected.txt"
            catalog.write_text("FtrBabybed_Remake_0_0.png\nFtrBabybed_Remake_0_1.png\n")
            dest = base / "output"
            report = base / "report.json"
            command = [
                sys.executable, str(ROOT / "Scripts/acnh303_assets.py"),
                "--catalog", str(catalog), "--dest", str(dest),
                "--report", str(report), "import", "--images", str(src)
            ]
            subprocess.run(command, check=True, capture_output=True, text=True)
            data = json.loads(report.read_text())
            self.assertEqual(data["verified_png_files"], 1)
            self.assertEqual(data["missing_png_files"], 1)
            self.assertFalse(data["imported"][0]["native_game_icon_verified"])
            self.assertFalse((dest / "FtrBabybed_Remake_0_1.png").exists())

    def test_refuses_conflicting_same_name(self):
        with tempfile.TemporaryDirectory() as d:
            root = Path(d)
            src = root / "images"
            (src / "a").mkdir(parents=True)
            (src / "b").mkdir()
            name = "FtrBabybed_Remake_0_0.png"
            (src / "a" / name).write_bytes(valid_png())
            other = valid_png().replace(b"\xfe\x80\x30", b"\x00\x00\x00")  # may not affect compressed stream
            # Use a different but valid ancillary chunk to ensure distinct contents.
            (src / "b" / name).write_bytes(asset.PNG_SIG +
                chunk(b"IHDR", struct.pack(">IIBBBBB", 1, 1, 8, 6, 0, 0, 0)) +
                chunk(b"tEXt", b"notice\x00different") +
                chunk(b"IDAT", zlib.compress(b"\x00\xfe\x80\x30\xff")) + chunk(b"IEND"))
            expected = root / "expected.txt"
            expected.write_text(name + "\n")
            dest = root / "out"
            report = root / "audit.json"
            command = [
                sys.executable, str(ROOT / "Scripts/acnh303_assets.py"),
                "--catalog", str(expected), "--dest", str(dest),
                "--report", str(report), "import", "--images", str(src)
            ]
            proc = subprocess.run(command, capture_output=True, text=True)
            self.assertNotEqual(proc.returncode, 0)
            self.assertFalse((dest / name).exists())
            self.assertEqual(len(json.loads(report.read_text())["source_conflicts_or_invalid"]), 1)


if __name__ == "__main__":
    unittest.main()
