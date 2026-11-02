#!/usr/bin/env python3
import json
import struct
import tempfile
import unittest
from pathlib import Path
from acnh303_round47_cedar_fmat import parse_fres, git_blob_sha
from acnh303_round47_aal_target_audit import audit, ELF_SHA, R46_SCHEMA, R47_SCHEMA

class R47(unittest.TestCase):
    def test_single_synthetic_fmat_parser_contract_not_native_evidence(self):
        b=bytearray(0x600)
        b[0:4]=b"FRES"
        struct.pack_into("<Q",b,0x28,0x100)
        struct.pack_into("<H",b,0xdc,1)
        b[0x100:0x104]=b"FMDL"
        struct.pack_into("<Q",b,0x108,0x400)
        struct.pack_into("<Q",b,0x138,0x200)
        struct.pack_into("<H",b,0x16c,1)
        b[0x200:0x204]=b"FMAT"
        struct.pack_into("<Q",b,0x208,0x420)
        struct.pack_into("<Q",b,0x250,0x300)
        struct.pack_into("<Q",b,0x260,0x380)
        struct.pack_into("<H",b,0x29e,1)
        struct.pack_into("<H",b,0x2a2,0x30)
        struct.pack_into("<Q",b,0x308,0x440)
        b[0x310]=30
        b[0x311]=24
        struct.pack_into("<H",b,0x312,0x10)
        struct.pack_into("<I5f",b,0x390,0,1.0,1.0,0.0,0.0,0.0)
        for ptr,s in [(0x400,b"Cedar"),(0x420,b"mPltTreeDeco"),(0x440,b"tex_srt0")]:
            struct.pack_into("<H",b,ptr,len(s))
            b[ptr+2:ptr+2+len(s)]=s
        result=parse_fres(bytes(b))
        self.assertEqual(result["status"],"STRUCTURAL_FMDL_FMAT_SHADERPARAM_READ")
        p=result["materials"][0]["shader_params"][0]
        self.assertEqual(p["name"],"tex_srt0")
        self.assertEqual(p["data_offset_within_source"],0x10)
        self.assertEqual(p["raw_source_param_prefix_hex"],"000000000000803f0000803f000000000000000000000000")
        self.assertEqual(p["texture_transform_source_fields"]["type_name_from_BfresLibrary"],"TexSrt")
        self.assertEqual(p["texture_transform_source_fields"]["FMAA_AnimDataOffset_0x10_field_candidate"],"translation_x")
        self.assertFalse(p["texture_transform_source_fields"]["native_animation_binding_verified"])
        self.assertFalse(result["binding_verified"])
        self.assertEqual(len(git_blob_sha(bytes(b))),40)

    def test_no_observed_aal(self):
        d=audit()
        self.assertEqual(d["file_path_open_read_close_observed"],"NOT_CAPTURED")
        self.assertFalse(d["runtime_FileOpen_Read_Close_proven"])

    def test_reject_uncorrelated_r47_target_entry(self):
        base=0x10000000
        snap={"status":"INVALID_POINTER"}
        with tempfile.TemporaryDirectory() as temp:
            r46=Path(temp)/"r46.jsonl"
            r47=Path(temp)/"r47.jsonl"
            e46={"schema":R46_SCHEMA,"ELF_reference_file_sha256":ELF_SHA,
                 "type":"IndirectBLRX8","session_id":"test-only","module_base":base,
                 "pc":base+0x3e451fc,"rva":0x3e451fc,
                 "slot_equals_register_x8":True,"resolved_target_va":base+0x1000}
            e47={"schema":R47_SCHEMA,"reference_ELF_file_sha256":ELF_SHA,
                 "type":"ObservedCandidateTargetEntry","session_id":"test-only","module_base":base,
                 "pc":base+0x2000,"rva":0x2000,"sequence":1,
                 "registers":{"pc":base+0x2000},
                 "instruction_bytes":snap,"argument_pointer_snapshots":{n:snap for n in ["x0","x1","x2","x3"]}}
            r46.write_text(json.dumps(e46)+"\n")
            r47.write_text(json.dumps(e47)+"\n")
            with self.assertRaises(ValueError):audit(r47,r46)
            e47["pc"]=base+0x1000
            e47["rva"]=0x1000
            e47["registers"]["pc"]=base+0x1000
            r47.write_text(json.dumps(e47)+"\n")
            result=audit(r47,r46)
            self.assertEqual(result["candidate_target_entries"],"STRUCTURALLY_COHERENT_UNATTESTED")
            self.assertFalse(result["runtime_FileOpen_Read_Close_proven"])
if __name__=="__main__": unittest.main()
