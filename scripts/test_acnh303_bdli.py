"""Run against exact committed ACNH 3.0.3 BDLI.zs file bytes, no repository data download."""
import base64
import unittest
from acnh_formats import decompress
from acnh303_bdli import parse_bdli, BdliError

ARTICLE = base64.b64decode("KLUv/WA0AI0EABQHQkRMSQIAEgAUNAEAAExCTEkgAQAAxP7YJRDvsm4sAK6DdTXwnAuuO+CFz8M80BP/xEvACjupTLBSzt9SoEsKslWQeYJpW4AmWqeicD+eyqVgZ2u8u1B+r9G8QOif1ssw8Vu7zCCprs3SEAAAALBqoNUkqBCIkcsD0F0AECd8D52VLp7VRuJEueqCMr/ycTI=")
NOTICE = base64.b64decode("KLUv/SDsRQIARAJCRExJAgABABQkTEJMSQoAAAAQJgTs4WQAgD8BBBcHU02dCqERoDBqheUGMDNsA7+khEQyKaHJmsrhuaWQQXoDCxgAPDA7")
APPROACH = base64.b64decode("KLUv/WCAFC0NAFZQNzRQbYMAcPqfMNqiErWCezZFG1gYunB9aTHgtvZTicYTWBIppG2Wv4AWj7zvUSHwFDf8/KkHJgAsACkAAx7/fjosKj5i/FYER3z4COSXMBAp+fgZ/gvVLu2H+Av+hz+qZa4ONZsQoiqNjqub3SBBbeAy8Df1ylaakM7F5GIyYrqNuc7/wsWb4h8J+UyQfBB1ZInTv/H/jJVmRPhsXq/NJEcjd6tMkK7CHbjnEjFV3URsUiZ3QwIvD+m0Bpj/24CuitNevxuF8nCPo3kjS/VDaYJJ690qHHxTScaDhRJggK2oUdTX0NDQABArAQC2ARJgEPgAQDDo+G8CqAhmaDP8k7hlgdnqO3Sg/VfBm8Yi6jmwr3YbqlCsaOaB5SAe4nRhVsAQXH6DBFmAl9vI9T1oQDxRBRK37q47M0iDOIYRShhVFmA5/7vMtVzb0sCZvNXvWeQh5iLCnOydRjuIC5C7BcvMb+yLSJ+IA9/v7uofDEc8n679GfDcLYhOHzT54gMKri1PvwURvB9/vbboMGd4BS9RTMRpLoW9/x/6vcl3k8+Zfj4=")

EUEN_ARTICLE = base64.b64decode("KLUv/WCsAOUFAMQHQkRMSQIAEgAUNAEAAExCAAAgAQAAxP7YJTjvsm4sKK6DdTUYnAuuOwiFz8M8+BP/xEvoCjupTNhSzt9SAchLCrJVzHmCaVu8Jlqnoqw/nsqlnGdrvLugfq/RvJDon9bLgPFbu8yYqa7N0oiwaqDVFQAAAGQAQAKAPxZAUy+oICIEHAQxQA+YAOElibJiO7sBiHqtD2yl+EkV/B1oigwQOUcgMWBIEoA4zON1JonJckFYRgaMIN1gPAw9")

class RealBdliTests(unittest.TestCase):
    def test_actual_samples(self):
        for name, fixture, expected_sections, expected_unpacked in (
            ("STR_Article", ARTICLE, 18, 308),
            ("STR_Article_EUen_nonempty_multisection", EUEN_ARTICLE, 18, 428),
            ("STR_BestFriendNotice", NOTICE, 1, 236),
            ("AN_ApproachA_Always", APPROACH, 4, 5504),
        ):
            with self.subTest(name=name):
                raw, codec = decompress(fixture)
                self.assertEqual(codec, "zstd")
                self.assertEqual(len(raw), expected_unpacked)
                obj = parse_bdli(raw)
                self.assertEqual(obj["format"], "BDLI")
                self.assertEqual(obj["version"], 2)
                self.assertEqual(obj["section_count"], expected_sections)
                self.assertEqual(obj["payload_offset"], 20+16*expected_sections)
                self.assertEqual(len(obj["sections"]), expected_sections)
                for sec in obj["sections"]:
                    self.assertLessEqual(sec["offset_absolute"]+sec["byte_length"], len(raw))
                    self.assertEqual(len(sec["sha256"]), 64)
    def test_relative_pointer_is_per_descriptor(self):
        raw, _ = decompress(EUEN_ARTICLE)
        doc = parse_bdli(raw)
        self.assertEqual(doc["sections"][8]["offset_absolute"], 0x15C)
        self.assertEqual(doc["sections"][8]["count_raw"], 1)

    def test_reject_corruption(self):
        raw, _ = decompress(NOTICE)
        for corrupt in (raw[:12], b"XXXX"+raw[4:], raw[:6]+b"\xff\xff"+raw[8:]):
            with self.assertRaises(BdliError):
                parse_bdli(corrupt)
if __name__ == "__main__":
    unittest.main()
