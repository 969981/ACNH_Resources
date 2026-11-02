#!/usr/bin/env python3
"""Regress NintendoWare low-rate PCM and truncated WAV detection without real source mutations."""
from __future__ import annotations
import tempfile
import unittest
import wave
from pathlib import Path
from acnh303_media_l3 import validate_wav

class LowRateWavTest(unittest.TestCase):
    def test_realistic_valid_4000hz_12frames(self):
        with tempfile.TemporaryDirectory() as td:
            p = Path(td) / "tone.wav"
            with wave.open(str(p), "wb") as w:
                w.setnchannels(1)
                w.setsampwidth(2)
                w.setframerate(4000)
                w.writeframes(bytes(range(24)))
            v=validate_wav(p)
            self.assertEqual((v["sample_rate"],v["frames"],v["sample_width"]),(4000,12,2))
            self.assertAlmostEqual(v["seconds"],0.003)

    def test_truncated_frames_rejected(self):
        with tempfile.TemporaryDirectory() as td:
            p = Path(td) / "broken.wav"
            with wave.open(str(p), "wb") as w:
                w.setnchannels(1)
                w.setsampwidth(2)
                w.setframerate(4000)
                w.writeframes(bytes(range(24)))
            p.write_bytes(p.read_bytes()[:-2])
            with self.assertRaises(ValueError):
                validate_wav(p)

    def test_zero_frames_rejected(self):
        with tempfile.TemporaryDirectory() as td:
            p=Path(td)/"empty.wav"
            with wave.open(str(p),"wb") as w:
                w.setnchannels(1)
                w.setsampwidth(2)
                w.setframerate(4000)
                w.writeframes(b"")
            with self.assertRaises(ValueError):
                validate_wav(p)

if __name__=="__main__":
    unittest.main()
