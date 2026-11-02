#!/usr/bin/env python3
"""R44 small native-only FMAA header parser: exact original Cedar, not glTF playback.

FMAA Switch header field order grounded in KillzXGaming/BfresLibrary
Shared/MaterialAnim/MaterialAnim.cs MaterialAnim.Load, Switch version >=9.
The two 0x70-byte headers are a real contiguous array (FRES+0x68, +0xe4).
MaterialAnimDataList/AnimCurve are intentionally not claimed decoded.
"""
from __future__ import annotations
import argparse,hashlib,json,struct
from pathlib import Path
from acnh303_media_l3 import find_leaf,NCA
from acnh303_round44_fmaa_native import SOURCE,SOURCE_SHA,INNER_SHA,inspect_fmaa
def sha(b):return hashlib.sha256(b).hexdigest()
def u16(b,p):return struct.unpack_from("<H",b,p)[0]
def u32(b,p):return struct.unpack_from("<I",b,p)[0]
def u64(b,p):return struct.unpack_from("<Q",b,p)[0]
def strnw(b,ptr):
 if not ptr:return {"status":"NULL","text":None}
 if ptr<2 or ptr+2>len(b):return {"status":"UNREACHABLE","text":None}
 n=u16(b,ptr)
 if n>256 or ptr+2+n>len(b):return {"status":"OUT_OF_BOUNDS","length_field":n,"text":None}
 blob=b[ptr+2:ptr+2+n]
 try:
  name=blob.rstrip(b"\x00").decode("utf-8")
 except UnicodeDecodeError:
  return {"status":"NON_UTF8","text":None,"length_field":n}
 return {"status":"BOUNDED_SOURCE_STRING","name":name,"length_field":n,
   "original_bytes_sha256":sha(blob),"pointer":ptr}
def parse(b):
 probe=inspect_fmaa(b)
 ptr=probe["material_animation_array_pointer_u64_at_0x68"]
 count=probe["material_animation_count_u16_at_0xe4"]
 if count!=2 or ptr!=0xf0:raise ValueError("Cedar original source FMAA array pointer/count changed")
 stride=0x70
 if ptr+stride*count>len(b):raise ValueError("array records outside original FRES")
 hits=probe["fmaa_magic_offsets"]
 if hits!=[ptr+stride*i for i in range(count)]:
  raise ValueError("original array not contiguous 0x70 FMAA headers")
 entries=[]
 for i in range(count):
  p=ptr+i*stride
  if b[p:p+4]!=b"FMAA":raise ValueError("FMAA array record missing magic")
  offsets={"name":u64(b,p+8),"path":u64(b,p+0x10),
   "model":u64(b,p+0x18),"bind_indices":u64(b,p+0x20),
   "material_anim_data":u64(b,p+0x28),"runtime_reserved":u64(b,p+0x30),
   "texture_name_array":u64(b,p+0x38),"userdata_array":u64(b,p+0x40),
   "userdata_dictionary":u64(b,p+0x48),"texture_bind_array":u64(b,p+0x50)}
  ptr_validation={k:{"value":v,"inside_original_FRES":bool(v and v<len(b))}
     for k,v in offsets.items()}
  frame=u32(b,p+0x58)
  counts={"user_data":u16(b,p+0x60),"material":u16(b,p+0x62),
   "curve":u16(b,p+0x64),"shader_param":u16(b,p+0x66),
   "texture_pattern":u16(b,p+0x68),"visibility":u16(b,p+0x6a),
   "texture":u16(b,p+0x6c)}
  entries.append({"array_index":i,"offset":p,"record_sha256":sha(b[p:p+stride]),
    "flags_raw_u16":u16(b,p+4),"name":strnw(b,offsets["name"]),
    "path":strnw(b,offsets["path"]),"frame_count_raw":frame,
    "baked_size_raw":u32(b,p+0x5c),"counts_from_header":counts,
    "pointer_fields":ptr_validation,"curve_data_and_interpolation_verified":False})
 return {"schema":"acnh303-r44-native-switch-FMAA-0x70-records-v1",
  "original_source":SOURCE,"original_source_sha256":SOURCE_SHA,
  "original_fres_sha256":INNER_SHA,"version":"ACNH 3.0.3",
  "array_pointer":ptr,"array_count":count,"record_stride":stride,
  "material_animation_dictionary_ptr":probe["material_animation_dictionary_pointer_u64_at_0x70"],
  "material_animation_headers":entries,
  "name_decode_not_gameplay_binding":True,"native_runtime_playback_verified":False,
  "semantic_limits":"Header, names and bounded pointer fields are original byte evidence; no actual MaterialAnimData objects, AnimCurve keyframes, material bindings or native playback decoded."}
def main():
 p=argparse.ArgumentParser()
 p.add_argument("--root",type=Path,default=Path("."))
 p.add_argument("--out",type=Path,required=True)
 a=p.parse_args()
 raw=(a.root/NCA/"1"/SOURCE).read_bytes()
 if len(raw)!=470 or sha(raw)!=SOURCE_SHA:raise ValueError("Cedar source SHA drift")
 leaves=list(find_leaf(raw,SOURCE))
 if len(leaves)!=1 or sha(leaves[0]["data"])!=INNER_SHA:raise ValueError("Cedar FRES member SHA drift")
 v=parse(leaves[0]["data"])
 a.out.parent.mkdir(parents=True,exist_ok=True)
 a.out.write_text(json.dumps(v,indent=2,ensure_ascii=False,sort_keys=True)+"\n",encoding="utf8")
 print("R44_FMAA_DEEP",json.dumps([{"name":x["name"],"frames":x["frame_count_raw"],
     "counts":x["counts_from_header"]} for x in v["material_animation_headers"]],ensure_ascii=False))
if __name__=="__main__":main()
