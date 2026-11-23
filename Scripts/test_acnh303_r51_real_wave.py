"""R51 genuine-source wave contract: no duplicate sources or fake runtime claims."""
import struct
import unittest

from acnh303_r51_real_wave import SAMPLES, COHORT, native_static_probe
from acnh_formats import FormatError
from test_acnh_unpack import YAZ0


class R51RealWaveContracts(unittest.TestCase):
    def test_reviewed_cohort_exact_and_unique(self):
        self.assertEqual(len(SAMPLES), 16)
        self.assertEqual(len(set(COHORT)), 16)
        self.assertEqual({mode for _, mode in SAMPLES}, {"basic", "archive"})
        self.assertEqual(sum(x.startswith("Bcsv/") for x in COHORT), 3)
        self.assertEqual(sum(x.startswith("BDLI/") for x in COHORT), 3)

    def test_native_probe_bars_header_is_static_only(self):
        bars = b"BARS" + struct.pack("<I", 16) + b"\xff\xfe" + struct.pack("<HI", 0x0100, 0)
        evidence = native_static_probe("Sound/Resource/test.bars", bars)
        self.assertEqual(evidence["asset_count"], 0)
        self.assertEqual(evidence["native_runtime_trace"], "NOT_CAPTURED")
        self.assertFalse(evidence["aal_external_pcm_read_verified"])
        self.assertEqual(evidence["semantic_level"], "STATIC_ONLY")

    def test_bdli_probe_never_interprets_labels_as_runtime_translation(self):
        import zstandard
        bdli = b"BDLI" + struct.pack("<HHIII", 2, 0, 0, 20, 20)
        compressed = zstandard.ZstdCompressor().compress(bdli)
        evidence = native_static_probe("BDLI/String/CNzh/example.bdli.zs", compressed)
        self.assertEqual(evidence["lbli_section_count"], 0)
        self.assertEqual(evidence["native_runtime_trace"], "NOT_CAPTURED")
        self.assertFalse(evidence["event_action_query_callback_verified"])

    def test_untrusted_format_is_not_declared_decoded(self):
        with self.assertRaises(ValueError):
            native_static_probe("Sound/Resource/bad.bars", b"not BARS")


if __name__ == "__main__":
    unittest.main()
