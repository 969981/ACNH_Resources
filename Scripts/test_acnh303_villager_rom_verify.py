"""Ensure native villager image accounting fails closed on mismatched evidence."""
from __future__ import annotations
import hashlib
import json
from pathlib import Path
import sys
import tempfile
import unittest
from PIL import Image

sys.path.insert(0, str(Path(__file__).parent))
from acnh303_villager_rom_verify import ROM, EvidenceError, verify

class NativeVillagerTests(unittest.TestCase):
    def setUp(self):
        self.tmp = tempfile.TemporaryDirectory()
        self.addCleanup(self.tmp.cleanup)
        self.root = Path(self.tmp.name)
        self.ev = self.root / "assets/evidence/rom-villager"
        self.ev.mkdir(parents=True)
        self.src = ROM + "Layout_NpcBromide_NpcNmlAnt00.Nin_NX_NVN.zs"
        self.dst = "assets/images/villager/photos/NpcNmlAnt00.png"
        p = self.root / self.dst
        p.parent.mkdir(parents=True)
        Image.new("RGBA", (2,3), (1,2,3,255)).save(p)
        raw = self.root / self.src
        raw.parent.mkdir(parents=True)
        raw.write_bytes(b"ROM sample source bytes")
        self.row = {
            "source":self.src, "category":"photo",
            "requested_png_name":"NpcNmlAnt00.png",
            "status":"one_original_rom_texture_exported",
            "native_rom_source":True, "native_in_game_composition_verified":False,
            "bntx_count":1, "native_texture_count":1,
            "native_bnti_name_matches_filename":True,
            "original_source_bytes":raw.stat().st_size,
            "original_source_sha256":hashlib.sha256(raw.read_bytes()).hexdigest(),
            "pngs":[{"output":self.dst, "native_brti_name_at_same_index_candidate":"NpcNmlAnt00",
                     "sha256":hashlib.sha256(p.read_bytes()).hexdigest(),
                     "width":2, "height":3, "bytes":p.stat().st_size}],
        }
        self.report = {
            "schema":"acnh303_real_rom_villager_texture_export_v1",
            "native_rom_sources":True, "not_community_cdn_images":True,
            "native_in_game_render_composition_verified":False,
            "source_offset":0, "next_offset":1, "attempted":1,
            "single_rom_texture_png":1, "multi_texture_component_sources":0,
            "errors":[], "total_source_count":1, "source_counts":{"photo":1},
            "results":[self.row],
        }
        (self.ev / "next-offset.json").write_text('{"next_offset":1,"total":1}')
        self.save()

    def save(self):
        (self.ev / "batch-0000-0001.json").write_text(json.dumps(self.report))

    def run_verify(self):
        return verify(self.root, Path("assets/evidence/rom-villager"), 1, True)

    def test_accepted_real_png_and_source(self):
        self.assertEqual(self.run_verify()["verified_png_files"], 1)

    def test_changed_original_rom_rejected(self):
        (self.root / self.src).write_bytes(b"spoofed")
        with self.assertRaises(EvidenceError):
            self.run_verify()

    def test_unsafe_source_name_rejected(self):
        self.row["source"] += ".different"
        self.save()
        with self.assertRaises(EvidenceError):
            self.run_verify()

    def test_changed_png_rejected(self):
        (self.root / self.dst).write_bytes(b"spoofed")
        with self.assertRaises(EvidenceError):
            self.run_verify()

    def test_incomplete_cursor_rejected(self):
        (self.ev / "next-offset.json").write_text('{"next_offset":0,"total":1}')
        with self.assertRaises(EvidenceError):
            self.run_verify()

    def test_untracked_png_rejected(self):
        (self.root / "assets/images/villager/photos/other.png").write_bytes(b"untracked")
        with self.assertRaises(EvidenceError):
            self.run_verify()

if __name__=="__main__":
    unittest.main()
