#!/usr/bin/env python3
import json, tempfile,unittest
from pathlib import Path
from acnh303_round45_aal_runtime_validate import classify,ELF_SHA
from acnh303_round45_fmaa_curves import words,checked
class R45Tests(unittest.TestCase):
 def test_missing_runtime_stays_not_captured(self):
  x=classify()
  self.assertEqual(x["trace_status"],"NOT_CAPTURED")
  self.assertFalse(x["native_AAL_FileOpen_Read_Close_proven"])
 def test_no_file_io_from_raw_register_snapshots(self):
  with tempfile.TemporaryDirectory() as d:
   p=Path(d)/"trace.jsonl"
   p.write_text(json.dumps({"session_id":"real-test-only","elf_sha256":ELF_SHA,
     "sequence":1,"type":"RegisterSnapshot","module_base":0x100000,
     "pc":0x290F278})+"\n")
   x=classify(p)
   self.assertEqual(x["trace_status"],"SOURCE_LOG_CAPTURED_NO_NATIVE_SEMANTIC_ATTESTATION")
   self.assertFalse(x["required_event_types_present"])
 def test_fmaa_raw_unsigned_signed_array_decoding(self):
  self.assertEqual(words(bytes([0x81,0,127,0]),0,2,"i16"),[129,127])
  self.assertEqual(words(bytes([0x81,0x7f]),0,2,"i8"),[-127,127])
  self.assertEqual(words(bytes([0,0x20]),0,1,"q10.5"),[256.0])
  with self.assertRaises(ValueError):checked(bytes(4),2,5,"bounds")
if __name__=="__main__":unittest.main()
