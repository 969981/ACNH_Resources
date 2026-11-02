#!/usr/bin/env python3
import json,math,tempfile,unittest
from pathlib import Path
from acnh303_round46_texsrt_values import evaluate,interpolate_segment,offset_as_float,R45
from acnh303_round46_aal_dispatch import generate,ELF
class R46(unittest.TestCase):
 def test_shader_source_endpoint_values(self):
  x=evaluate(json.loads(R45.read_text("utf8")))
  self.assertFalse(x["runtime_shader_binding_and_gameplay_parity_verified"])
  for anim in x["animations"]:
   self.assertEqual(len(anim["materials"]),2)
   for mat in anim["materials"]:
    self.assertEqual(mat["param_name"],"tex_srt0")
    self.assertEqual(mat["sub_bind_index"],65535)
    self.assertFalse(mat["material_shader_parameter_slot_resolved"])
    vals=[z["value"] for z in mat["candidate_bounded_linear_segment"]]
    self.assertAlmostEqual(vals[2],0.25,places=6)
    self.assertAlmostEqual(vals[0]+vals[-1],0.5,places=6)
  self.assertAlmostEqual(offset_as_float(0x3e800000),0.25)
 def test_aal_no_runtime_source(self):
  x=generate()
  self.assertEqual(x["runtime_vtable_target_status"],"NOT_CAPTURED")
  self.assertFalse(x["live_AAL_file_IO_proven"])
  self.assertEqual(len(x["source_bound_static_BLR"]),2)
 def test_aal_reject_unproved_slots(self):
  with tempfile.TemporaryDirectory() as temp:
   p=Path(temp)/"test.jsonl"
   row={"schema":"acnh303-r46-gdb-indirect-dispatch-observer-v1",
    "ELF_reference_file_sha256":ELF,"session_id":"synthetic-unattested-test",
    "sequence":1,"type":"IndirectBLRX8","module_base":0x10000000,
    "pc":0x10000000+0x3e451fc,"rva":0x3e451fc,"resolved_target_va":0x10123456,
    "vtable_slot_offset":0x20,"slot_equals_register_x8":False}
   p.write_text(json.dumps(row)+"\n")
   with self.assertRaises(ValueError):generate(p)
   row["slot_equals_register_x8"]=True
   p.write_text(json.dumps(row)+"\n")
   x=generate(p)
   self.assertEqual(x["runtime_vtable_target_status"],"USER_GDB_OBSERVATION_STRUCTURALLY_VALID_UNATTESTED")
   self.assertFalse(x["live_AAL_file_IO_proven"])
if __name__=="__main__":unittest.main()
