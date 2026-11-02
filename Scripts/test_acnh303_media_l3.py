"""Strict output validators independent of external decoder packages."""
from __future__ import annotations
import json
from pathlib import Path
import struct
import tempfile
import unittest
import wave
import zlib

from acnh303_media_l3 import (
    find_leaf, member_path, validate_glb, validate_png, validate_wav,
)


def png_chunk(kind: bytes, data: bytes) -> bytes:
    return struct.pack(">I", len(data)) + kind + data + struct.pack(
        ">I", zlib.crc32(kind + data) & 0xFFFFFFFF
    )


class OutputValidation(unittest.TestCase):
    def test_png_requires_actual_crc_and_iend(self):
        ihdr = struct.pack(">IIBBBBB", 2, 3, 8, 6, 0, 0, 0)
        scan = b"".join(b"\x00"+b"\x00" * 8 for _ in range(3))
        content = (b"\x89PNG\r\n\x1a\n" + png_chunk(b"IHDR", ihdr) +
                   png_chunk(b"IDAT", zlib.compress(scan)) +
                   png_chunk(b"IEND", b""))
        with tempfile.TemporaryDirectory() as tmp:
            path = Path(tmp) / "image.png"
            path.write_bytes(content)
            self.assertEqual((validate_png(path)["width"], validate_png(path)["height"]), (2, 3))
            broken = bytearray(content)
            broken[20] ^= 1
            path.write_bytes(broken)
            with self.assertRaises(ValueError):
                validate_png(path)

    def test_glb_rejects_empty_and_accepts_real_accessor_references(self):
        doc = {"asset": {"version": "2.0"},
               "accessors": [{"count": 3, "type": "VEC3", "componentType": 5126}],
               "meshes": [{"primitives": [{"attributes": {"POSITION": 0}}]}]}
        payload = json.dumps(doc).encode("utf-8")
        payload += b" " * (-len(payload) % 4)
        data = struct.pack("<4sII", b"glTF", 2, len(payload) + 20)
        data += struct.pack("<I4s", len(payload), b"JSON") + payload
        with tempfile.TemporaryDirectory() as tmp:
            path = Path(tmp) / "model.glb"
            path.write_bytes(data)
            self.assertEqual(validate_glb(path)["meshes"], 1)
            path.write_bytes(data[:20] + payload.replace(b"POSITION", b"POS-----"))
            with self.assertRaises(ValueError):
                validate_glb(path)

    def test_wav_must_have_real_pcm_frames(self):
        with tempfile.TemporaryDirectory() as tmp:
            path = Path(tmp) / "audio.wav"
            with wave.open(str(path), "wb") as f:
                f.setnchannels(2)
                f.setsampwidth(2)
                f.setframerate(48000)
                f.writeframes(b"\x01\x00\x01\x00" * 100)
            self.assertEqual(validate_wav(path)["frames"], 100)


    def test_texture_only_switch_fres_embedded_bntx(self):
        from acnh303_media_l3 import (is_texture_only_switch_fres,
                                      extract_embedded_bntx, find_leaf)
        fake=bytearray(0x2000)
        fake[:4]=b"FRES"
        struct.pack_into("<I",fake,8,0x00090000)
        struct.pack_into("<H",fake,0x0C,0xFEFF)
        # No model/mesh/vertex headers or first model pointer.
        off=0x1000
        fake[off:off+4]=b"BNTX"
        struct.pack_into("<H",fake,off+12,0xFEFF)
        struct.pack_into("<I",fake,off+28,0x180)
        fake[off+32:off+36]=b"NX  "
        struct.pack_into("<I",fake,off+36,4)
        self.assertTrue(is_texture_only_switch_fres(bytes(fake)))
        item=list(extract_embedded_bntx(bytes(fake)))
        self.assertEqual(len(item),1)
        self.assertEqual(item[0][0],off)
        self.assertEqual(len(item[0][1]),0x180)
        leaves=list(find_leaf(bytes(fake),"BottomsTex.fake"))
        self.assertEqual(len(leaves),1)
        self.assertEqual(leaves[0]["format"],"bntx")
        self.assertEqual(leaves[0]["origin_type"],"texture_only_fres_bntx")
        fake[off+32:off+36]=b"NOPE"
        self.assertFalse(list(extract_embedded_bntx(bytes(fake))))
        with self.assertRaises(ValueError):
            list(find_leaf(bytes(fake),"corrupt.fres"))
        fake[off+32:off+36]=b"NX  "
        fake[0x200:0x204]=b"FMDL"
        self.assertFalse(is_texture_only_switch_fres(bytes(fake)))

    def test_leaf_unsafe_path(self):
        for bad in ("../x.bntx", "/absolute.bntx", "a/../x.bntx"):
            with self.assertRaises(ValueError):
                member_path(bad)
        self.assertEqual(next(find_leaf(b"BWAV" + b"\0" * 100, "a.bwav"))["format"], "bwav")


if __name__ == "__main__":
    unittest.main()
