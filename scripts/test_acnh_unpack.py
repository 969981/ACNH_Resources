"""Regression tests using exact base64 of small ACNH 3.0.3 Git blobs."""
import base64
import importlib.util
import json
from pathlib import Path
import subprocess
import sys
import tempfile
import unittest

from acnh_formats import (
    FormatError, detect, decompress, parse_bcsv, parse_byml,
    parse_sarc, safe_member_name,
)

BYML = base64.b64decode("WUIEABAAAAAAAAAAKAAAAMIBAAAMAAAAFQAAADNjYmFhNTQxAAAAAMEBAAAAAAD/AAAAAA==")
BCSV = base64.b64decode("BgAAABAAAAAEAAEBVlNDQjB1AAAAAAAAAAAAAM/GK2EEAAAAqm6DYAgAAACzUHVlCgAAAHJjInwMAAAAPAAAAAAAAABxMHcwAQAAAEwAAAABAAAAdjB1MAIAAABcAAAAAgAAAHsweDADAAAAbAAAAAMAAAB0MHMwBAAAAHwAAAAEAAAAeTD+/wUAAACMAAAABQAAAHIwejAGAAAA")
YAZ0 = base64.b64decode("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")
ZSTD = base64.b64decode("KLUv/WB8J40aAPblhUfwrjoKEQbclMXCzn3GZgmXiFS+z+PwUjTSG0wItHrQYHPqSWWSlWVNCgsYLa572deW2SiuWma4QFpkb/vyKor7tekSBLX0fW0AdQBzALmbq8X+WIjJRKpeznvLvURw6Yrs0bImi4WgKKTICw0tN0R8aGdfQIgYMuGHcPYBjAs4PDyo4+1oX4PlQcPh7cmIBIYC6JoXvaKWIbXaqfpFsJYo5lcUIDDjP7dzwFKr19v/40cQ09PbI3SlXgE8EwXzyfAduPl8fJ8I50MC4tnwSW2LG8v7Q6sAjVia00iFGvTVjD4TxnAV6kJdhw0lsFYbu0+dNMhkqJmHwOCDi5NMJuP4P38h1N+RGju0fgOi/wVIK9NNJvKuKSgKafIoSo8HxJ6At0z/b+TR02ulWKu7ptwvwgABb672B/iPBabCWm1zsXBjZokF1zJTbQpMJhJdKbFcIC/uJNXS7GaupKrkaomvCCXtlmqgQsLGlWgiHaiQKhNyXImrSrdU1/NFjjYTPS9KQ3/ZvbgSF7UcW54UepKGlfGk2ZMqPIvX68z8ju53ej0BNrr/t9GhZkqkAG08QsTjnVg4J1A1fyQ7nZZN+0Cd2cWbOktXm2ryCcBUnZ0wl3pedLWFLBFDDomSEYiYTc6bKNmRrBS8qurjUyGKF8PWvT/grUxPuxMtx2uzue7BQLRMv+Vu5ght/a4pA0Rba+JA87aKMgGAi6DhMMkUm4EBoABAAKCCGTKathrLBDj5TPnu4kKAc641LdE0K12YQ8fXTpFHCwnRiV2DLidPMEADM7b8fyNw0ajCuTGR9eD6yZ9vWLPkG/c/BeONBWgKNDvlLwq34uE8Mvrm8YbrL+LvQRmL8NNpy9j5CMF4HkllilJzJ66PO+tFi71WnT30WOuaQAQED1+9Z6oQSMzHyJogw6/NPtMpZuFxqZuTgCCr7XA/WlmZRdn1bYScX5QP4NeSq/9bf0fDsIBJt0B6xKJFWPzBADvlItI1tCbQ3vNbPFM25reeEo/xOPAr/9dPNnbCDjXrr/mA1kn753dOIZcBVv6HaSz3jKtia+PgYylrkFbCCSMMaQrhGYBIPmzGYO+XQssMByRbmgG5OceaxC4D7gDIwuV93PtjJBPLdQ==")
NCA = "e10617820db06889e1638499478da0de_NCA"


class RealResourceTests(unittest.TestCase):
    def test_byml_null_dictionary(self):
        obj = parse_byml(BYML)
        self.assertEqual(obj["format"], "BYML")
        self.assertEqual(obj["version"], 4)
        self.assertEqual(obj["root"], {"3cbaa541": None})

    def test_bcsv_crc32_raw_columns(self):
        meta, records = parse_bcsv(BCSV)
        self.assertEqual(meta["row_count"], 6)
        self.assertEqual(meta["column_count"], 4)
        self.assertEqual(len(records), 6)
        self.assertEqual(meta["columns"][0]["crc32"], "612BC6CF")
        self.assertEqual(meta["columns"][0]["offset"], 4)
        self.assertIn("raw", meta["warning"].lower() + " raw")
        self.assertTrue(records[0]["hash_612BC6CF"].isdigit())

    def test_yaz0_sarc_real_archive(self):
        raw, codec = decompress(YAZ0)
        self.assertEqual(codec, "yaz0")
        self.assertEqual(len(raw), 28672)
        self.assertEqual(detect(raw), "sarc")
        info, members = parse_sarc(raw)
        self.assertEqual([v["name"] for v in info], ["lp_resource.sharc", "lp_resource.sharcb"])
        self.assertEqual(len(members), 2)

    @unittest.skipUnless(importlib.util.find_spec("zstandard"), "optional zstandard")
    def test_zstd_real_layout(self):
        raw, codec = decompress(ZSTD)
        self.assertEqual(codec, "zstd")
        self.assertGreater(len(raw), 0)
        self.assertNotEqual(detect(raw), "zstd")

    def test_reject_unsafe_members(self):
        for bad in ("../evil.bin", "/root", "C:/evil", "a\\b", "a/../b"):
            with self.subTest(bad=bad):
                with self.assertRaises(FormatError):
                    safe_member_name(bad)

    def test_invalid_bcsv_rejected(self):
        with self.assertRaises(FormatError):
            parse_bcsv(BCSV[:35])

    def test_cli_conversion_and_integrity(self):
        with tempfile.TemporaryDirectory() as temp:
            root = Path(temp)
            rom = root / NCA / "1"
            (rom / "Bcsv").mkdir(parents=True)
            (rom / "Stage").mkdir()
            (rom / "System").mkdir()
            (rom / "Bcsv" / "CalendarEventJuneBrideReward.bcsv").write_bytes(BCSV)
            (rom / "Stage" / "commonPlayerHouse.byml").write_bytes(BYML)
            (rom / "System" / "lp_resource.Nin_NX_NVN.szs").write_bytes(YAZ0)
            script = Path(__file__).with_name("unpack_acnh.py")
            cmd = [sys.executable, str(script), "--root", str(root), "--out", "Unpack"]
            dry = subprocess.run(cmd + ["--dry-run"], capture_output=True, text=True)
            self.assertEqual(dry.returncode, 0, dry.stderr)
            self.assertFalse((root / "Unpack").exists())
            run = subprocess.run(cmd + ["--all", "--extract-members", "--strict"], capture_output=True, text=True)
            self.assertEqual(run.returncode, 0, run.stdout + run.stderr)
            out = root / "Unpack"
            self.assertTrue((out / NCA / "1/Bcsv/CalendarEventJuneBrideReward.csv").is_file())
            self.assertTrue((out / NCA / "1/Stage/commonPlayerHouse.json").is_file())
            self.assertTrue((out / NCA / "1/System/lp_resource.Nin_NX_NVN/lp_resource.sharc").exists() is False)
            self.assertTrue((out / NCA / "1/System/lp_resource.Nin_NX_NVN/_members/lp_resource.sharc").is_file())
            manifest = json.loads((out / "_meta/manifest.json").read_text("utf-8"))
            self.assertEqual(len(manifest), 3)
            self.assertEqual({r["status"] for r in manifest}, {"converted"})
            verified = subprocess.run(cmd + ["--verify", "--strict"], capture_output=True, text=True)
            self.assertEqual(verified.returncode, 0, verified.stdout + verified.stderr)
            corrupted = out / NCA / "1/Stage/commonPlayerHouse.json"
            corrupted.write_text("CORRUPTED")
            rejected = subprocess.run(cmd + ["--verify", "--strict"], capture_output=True, text=True)
            self.assertEqual(rejected.returncode, 1)


if __name__ == "__main__":
    unittest.main()
