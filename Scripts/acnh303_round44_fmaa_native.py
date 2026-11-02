#!/usr/bin/env python3
"""ACNH 3.0.3 FMAA native pointer/array/count audit (zero invented keyframes).

For Switch BFRES v9/v10 FRES: +0x68 material animation array pointer,
+0x70 material animation name dictionary, +0xe4 material animation count.
Do not interpret magic occurrences alone as deserialized animation objects.
"""
from __future__ import annotations
import argparse,hashlib,json,struct
from pathlib import Path
from acnh303_media_l3 import find_leaf,NCA

SOURCE="Model/PltTreeCedarDecoAnim.Nin_NX_NVN.zs"
SOURCE_SHA="3284939356d4d1a086307b0586e7f4e8995971f7c642190fc84da331767cb97f"
INNER_SHA="6fe0ae7dbefc86e1fb5971f391f79343f330266716b4c791696ab70908ca6f4e"
def sha(data):return hashlib.sha256(data).hexdigest()
def u16(b,p):return struct.unpack_from("<H",b,p)[0]
def u32(b,p):return struct.unpack_from("<I",b,p)[0]
def u64(b,p):return struct.unpack_from("<Q",b,p)[0]
def inspect_fmaa(payload):
 if len(payload)<0xf0 or payload[:4]!=b"FRES":raise ValueError("Not a complete Switch FRES header")
 if sha(payload)!=INNER_SHA or len(payload)!=1536:raise ValueError("Cedar exact FRES original member SHA/length drift")
 first=u64(payload,0x68)
 dictionary=u64(payload,0x70)
 count=u16(payload,0xe4)
 model_count=u16(payload,0xdc)
 model_ptr=u64(payload,0x28)
 if count>4096:raise ValueError("unbounded material animation count")
 if (count and not first) or (first and first+4>len(payload)):
  raise ValueError("FRES material animation pointer/count invalid")
 if dictionary and dictionary+4>len(payload):raise ValueError("FMAA name dictionary pointer out of bounds")
 hits=[];pos=0
 while True:
  p=payload.find(b"FMAA",pos)
  if p<0:break
  if p+0x40>len(payload):raise ValueError("FMAA candidate header too short")
  # Raw qword candidates, not assumed to be valid offsets or object properties.
  fields=[]
  for offset in range(8,0x40,8):
   ptr=u64(payload,p+offset)
   fields.append({"offset_in_header":offset,"raw_u64":ptr,
      "points_inside_file":bool(ptr and ptr<len(payload)),
      "pointed_magic4":payload[ptr:ptr+4].hex() if ptr and ptr+4<=len(payload) else None})
  hits.append({"offset":p,"header_sha256_64bytes":sha(payload[p:p+0x40]),
    "header_raw_u32_at_0x04":u32(payload,p+4),"candidate_pointer_words":fields})
  pos=p+4
 if len(hits)>4096:raise ValueError("unbounded magic hits")
 positions=[x["offset"] for x in hits]
 if first and payload[first:first+4]!=b"FMAA":raise ValueError("declared material animation array head not FMAA")
 # No claim that hit count is exactly native count, since a magic can occur in opaque strings.
 count_relation="ARRAY_HEAD_AND_COUNT_CORROBORATED_BY_DISTINCT_FMAA_HEADERS" if count and first in positions and count==len(hits) else "MATERIAL_ANIMATION_ARRAY_PARTIALLY_RESOLVED"
 return {"schema":"acnh303-r44-cedar-switch-fmaa-pointer-count-evidence-v1",
  "source_relative":SOURCE,"source_sha256":SOURCE_SHA,"inner_fres_sha256":INNER_SHA,
  "fres_size":len(payload),"model_count":model_count,"model_array_pointer":model_ptr,
  "material_animation_count_u16_at_0xe4":count,
  "material_animation_array_pointer_u64_at_0x68":first,
  "material_animation_dictionary_pointer_u64_at_0x70":dictionary,
  "material_animation_dictionary_magic":payload[dictionary:dictionary+4].hex() if dictionary else None,
  "fmaa_magic_offsets":positions,
  "fmaa_header_candidates":hits,"native_structural_relation":count_relation,
  "animation_objects_deserialized":False,"material_curve_keyframes_deserialized":False,
  "runtime_texture_binding_verified":False,"native_playback_verified":False,
  "limits":"Validated original FRES array pointer/count and bounded FMAA candidate headers. Header candidates are not decoded curves or runtime provenance."}
def main():
 p=argparse.ArgumentParser()
 p.add_argument("--root",type=Path,default=Path("."))
 p.add_argument("--out",type=Path,required=True)
 a=p.parse_args()
 raw=(a.root/NCA/"1"/SOURCE).read_bytes()
 if len(raw)!=470 or sha(raw)!=SOURCE_SHA:raise ValueError("original source compressed bytes drift")
 leaves=list(find_leaf(raw,SOURCE))
 if len(leaves)!=1 or leaves[0]["data"][:4]!=b"FRES":raise ValueError("expected single native FRES leaf")
 result=inspect_fmaa(leaves[0]["data"])
 result["original_source_bytes"]=len(raw)
 result["original_member_name"]=leaves[0]["source_member"]
 a.out.parent.mkdir(parents=True,exist_ok=True)
 a.out.write_text(json.dumps(result,indent=2,ensure_ascii=False,sort_keys=True)+"\n",encoding="utf8")
 print("R44_FMAA_NATIVE_POINTERS",json.dumps({k:result[k] for k in ("material_animation_count_u16_at_0xe4","material_animation_array_pointer_u64_at_0x68","material_animation_dictionary_pointer_u64_at_0x70","fmaa_magic_offsets","native_structural_relation")}))
if __name__=="__main__":main()
