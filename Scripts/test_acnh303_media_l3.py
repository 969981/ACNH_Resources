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


    @staticmethod
    def _synthetic_fres(with_geometry: bool = False) -> bytes:
        data = bytearray(0x600)
        data[:4] = b"FRES"
        struct.pack_into("<I", data, 8, 0x00090000)
        struct.pack_into("<H", data, 0x0C, 0xFEFF)
        if with_geometry:
            struct.pack_into("<Q", data, 0x28, 0x200)
            data[0x200:0x204] = b"FMDL"
        else:
            # Cedar-like bounded header locations are *candidates* only.
            data[0xF0:0xF4] = b"FMAA"
            data[0x160:0x164] = b"FMAA"
            struct.pack_into("<I", data, 0xF4, 4)
            struct.pack_into("<I", data, 0x164, 4)
        return bytes(data)

    @staticmethod
    def _run_synthetic_media(source_data: bytes, mock_process=None):
        from contextlib import redirect_stdout
        from io import StringIO
        from unittest.mock import patch
        from acnh303_media_l3 import NCA, main
        with tempfile.TemporaryDirectory() as tmp:
            root = Path(tmp)
            rel = "Model/PltTreeCedarDecoAnim.Nin_NX_NVN.zs"
            source = root / NCA / "1" / rel
            source.parent.mkdir(parents=True)
            source.write_bytes(source_data)
            argv = ["media", "--root", str(root), "--source", rel]
            with patch("sys.argv", argv), redirect_stdout(StringIO()):
                if mock_process is not None:
                    with patch("acnh303_media_l3.subprocess.run", return_value=mock_process) as mocked:
                        result = main()
                        assert mocked.call_count == 1
                else:
                    with patch("acnh303_media_l3.subprocess.run") as mocked:
                        result = main()
                        assert mocked.call_count == 0, "meshless animation must not call wmdlt"
            output_dir = root / "Unpack_L3" / NCA / "1" / "Model" / (
                "PltTreeCedarDecoAnim.Nin_NX_NVN.zs.converted"
            )
            manifest = json.loads((output_dir / "_conversion_manifest.json").read_text("utf8"))
            logs = {
                p.name: p.read_bytes()
                for p in (output_dir / "_tool_logs").glob("*")
            } if (output_dir / "_tool_logs").exists() else {}
            return result, manifest, logs

    def test_animation_candidate_preserves_evidence_and_skips_geometry(self):
        import hashlib
        from acnh303_media_l3 import classify_animation_only_fres_candidate, find_leaf
        raw = self._synthetic_fres()
        evidence = classify_animation_only_fres_candidate(raw)
        self.assertEqual(evidence["classification"], "NON_GEOMETRY_ANIMATION_CANDIDATE")
        self.assertEqual(
            [x["offset"] for x in evidence["candidate_magic_offsets"]],
            [0xF0, 0x160],
        )
        self.assertEqual(next(find_leaf(raw, "cedar.zs"))["origin_type"],
                         "non_geometry_fres_animation_candidate")
        status, manifest, logs = self._run_synthetic_media(raw)
        self.assertEqual(status, 0)
        self.assertEqual(manifest["source_sha256"], hashlib.sha256(raw).hexdigest())
        self.assertEqual(manifest["converted_count"], 0)
        self.assertEqual(manifest["members"][0]["status"], "unsupported")
        self.assertNotIn("outputs", manifest["members"][0])
        self.assertFalse(logs)
        self.assertIsNone(classify_animation_only_fres_candidate(
            self._synthetic_fres(with_geometry=True)))
        broken = bytearray(raw)
        struct.pack_into("<Q", broken, 0x28, 0x200)
        self.assertIsNone(classify_animation_only_fres_candidate(bytes(broken)))

    def test_zero_exit_without_output_is_failure_and_keeps_full_logs(self):
        import hashlib
        import subprocess
        proc = subprocess.CompletedProcess(
            ["wmdlt"], 0, stdout=b"converter said success but no GLB\n",
            stderr=b"no model was emitted\n")
        status, manifest, logs = self._run_synthetic_media(
            self._synthetic_fres(with_geometry=True), proc)
        self.assertEqual(status, 0)
        self.assertEqual(manifest["converted_count"], 0)
        self.assertEqual(manifest["members"][0]["error_class"],
                         "tool_zero_exit_no_output")
        self.assertEqual(logs["leaf_00000.stdout.log"], proc.stdout)
        self.assertEqual(logs["leaf_00000.stderr.log"], proc.stderr)
        self.assertEqual(
            manifest["members"][0]["tool_stdout_log"]["sha256"],
            hashlib.sha256(proc.stdout).hexdigest())

    def test_nonzero_exit_records_distinct_failure_class(self):
        import subprocess
        proc = subprocess.CompletedProcess(
            ["wmdlt"], 2, stdout=b"", stderr=b"invalid input\n")
        _, manifest, logs = self._run_synthetic_media(
            self._synthetic_fres(with_geometry=True), proc)
        self.assertEqual(manifest["members"][0]["error_class"], "tool_nonzero_exit")
        self.assertIn("nonzero exit code 2", manifest["members"][0]["error"])
        self.assertEqual(logs["leaf_00000.stderr.log"], proc.stderr)


if __name__ == "__main__":
    unittest.main()
