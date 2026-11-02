"""R62: classify direct original PNGs separately from pending filename alias candidates."""
import unittest
from acnh303_r62_full_catalog_lookup import FIELDS
class FullCatalogTests(unittest.TestCase):
    def test_explicit_two_semantics_dimensions(self):
        self.assertIn("source_status",FIELDS)
        self.assertIn("application_runtime_filename_equivalence_verified",FIELDS)
        self.assertIn("original_filename_matched_native_texture",FIELDS)
    def test_original_rom_sha_provenance(self):
        self.assertIn("original_rom_source_sha256",FIELDS)
        self.assertIn("native_png_sha256",FIELDS)
if __name__=="__main__":unittest.main()
