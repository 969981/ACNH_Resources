"""Fail-closed original ROM linkage regression smoke tests."""
import unittest
from pathlib import Path
import json
import tempfile
from acnh303_unmatched_rom_linkage import audit

class PendingNativeEvidenceTests(unittest.TestCase):
    def test_incomplete_original_batch_is_not_accepted(self):
        with tempfile.TemporaryDirectory() as temp:
            root=Path(temp)
            a=root/"assets/evidence/rom-items"
            b=root/"assets/evidence/rom-villager"
            a.mkdir(parents=True)
            b.mkdir(parents=True)
            (a/"unmatched-candidate-audit.json").write_text(json.dumps({"unmatched_names":1254,"entries":[]}))
            (a/"reconciliation.json").write_text(json.dumps({"sources_attempted":10,"source_count":26277,"verified_original_pngs":10,
                    "unmatched_names_pending_original_source_verification":1254,
                    "all_attempted_sources_exported":False}))
            (b/"reconciliation.json").write_text(json.dumps({"verified_png_files":1934,"original_source_sha256_reverified":True}))
            with self.assertRaises(ValueError):
                audit(root,verify=False)

if __name__=="__main__":
    unittest.main()
