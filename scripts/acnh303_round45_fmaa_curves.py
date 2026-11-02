#!/usr/bin/env python3
"""ACNH 3.0.3 read-only, SHA-bound Switch BFRES FMAA → material records → AnimCurve.

Layouts follow BfresLibrary MaterialAnimData.Load, ParamAnimInfo.Load,
AnimCurve.Load (Switch). Frame/key arrays are decoded from ACTUAL original bytes.
Unsupported frame/key encodings stay explicit, never synthesized.
"""
from __future__ import annotations
import argparse,hashlib,json,math,struct
from pathlib import Path
from acnh303_media_l3 import find_leaf,NCA
from acnh303_round44_fmaa_deep import SOURCE,SOURCE_SHA,INNER_SHA,parse as parse_headers,strnw
def hash256(b):return hashlib.sha256(b).hexdigest()
def checked(b,p,n,why):
 if not isinstance(p,int) or p<0 or n<0 or p+n>len(b):raise ValueError(f"{why}: pointer={p} length={n} beyond real FRES size {len(b)}")
 return b[p:p+n]
def u16(b,p):return struct.unpack("<H",checked(b,p,2,"u16"))[0]
def u32(b,p):return struct.unpack("<I",checked(b,p,4,"u32"))[0]
def u64(b,p):return struct.unpack("<Q",checked(b,p,8,"u64"))[0]
def f32(b,p):
 val=struct.unpack("<f",checked(b,p,4,"f32"))[0]
 if not math.isfinite(val):raise ValueError("nonfinite source f32 at "+str(p))
 return val
def words(b,p,count,typ):
 if not count:return []
 if count>4096:raise ValueError("unbounded array")
 size={"f32":4,"u32":4,"i16":2,"q10.5":2,"i8":1,"u8":1}[typ]
 data=checked(b,p,count*size,typ+" array")
 if typ=="f32":result=list(struct.unpack("<"+("f"*count),data))
 elif typ=="u32":result=list(struct.unpack("<"+("I"*count),data))
 elif typ=="i16":result=list(struct.unpack("<"+("h"*count),data))
 elif typ=="q10.5":result=[x/32 for x in struct.unpack("<"+("h"*count),data)]
 elif typ=="i8":result=list(struct.unpack("<"+("b"*count),data))
 else:result=list(data)
 if any(isinstance(x,float) and not math.isfinite(x) for x in result):
  raise ValueError("nonfinite decoded source array")
 return result
def parse_curve(b,p,anim_frame_count):
 checked(b,p,0x30,"Switch AnimCurve")
 frame_ptr=u64(b,p);key_ptr=u64(b,p+8)
 flags=u16(b,p+0x10);n=u16(b,p+0x12)
 frame_format=flags&3;key_format=flags&12;curve_type=flags&0x70
 kinds={0:"Cubic",0x10:"Linear",0x20:"BakedFloat",0x40:"StepInt",0x50:"BakedInt",0x60:"StepBool",0x70:"BakedBool"}
 if n>1024:raise ValueError("absurd original numKey "+str(n))
 elements=4 if curve_type==0 else 2 if curve_type==0x10 else 1
 ftype={0:"f32",1:"q10.5",2:"u8"}.get(frame_format)
 ktype={0:"f32",4:"i16",8:"i8"}.get(key_format)
 if curve_type not in kinds:raise ValueError("unknown original curve type "+hex(curve_type))
 info={"header_offset":p,"source_header_sha256":hash256(checked(b,p,0x30,"curve header")),
       "frame_array_pointer":frame_ptr,"key_array_pointer":key_ptr,"flags":flags,
       "frame_format":ftype or "UNSUPPORTED","key_format":ktype or "UNSUPPORTED",
       "curve_type":kinds[curve_type],"num_keys":n,"elements_per_key":elements,
       "animation_data_field_offset":u32(b,p+0x14),
       "start_frame":f32(b,p+0x18),"end_frame":f32(b,p+0x1c),
       "scale":f32(b,p+0x20),"raw_offset_u32":u32(b,p+0x24),"delta":f32(b,p+0x28),
       "native_runtime_interpolation_verified":False}
 if not n:
  info.update({"status":"ZERO_KEY_CURVE","frames":[],"keys":[]});return info
 if not ftype or not ktype:
  info["status"]="UNSUPPORTED_FRAME_OR_KEY_FORMAT";return info
 if not frame_ptr or not key_ptr:raise ValueError("original curve nonempty array pointer null")
 frames=words(b,frame_ptr,n,ftype)
 key_vals=words(b,key_ptr,n*elements,"u32" if ktype=="f32" and curve_type in (0x40,0x60) else ktype)
 # Treat StepInt/StepBool raw integer values as source 32-bit words, not floats.
 keys=[key_vals[i*elements:(i+1)*elements] for i in range(n)]
 if any(frames[i]>frames[i+1] for i in range(len(frames)-1)):
  raise ValueError("native curve source frame indices not monotonic")
 if any(f<-1 or f>max(anim_frame_count,info["end_frame"])+1 for f in frames):
  raise ValueError("native FMAA frame outside animation envelope")
 info.update({"status":"FRAME_AND_KEY_BYTES_DECODED","frames":frames,"keys":keys,
     "raw_frame_array_sha256":hash256(checked(b,frame_ptr,n*{"f32":4,"q10.5":2,"u8":1}[ftype],"frame bytes")),
     "raw_key_array_sha256":hash256(checked(b,key_ptr,n*elements*{"f32":4,"u32":4,"i16":2,"i8":1}[("u32" if ktype=="f32" and curve_type in (0x40,0x60) else ktype)],"key bytes"))})
 return info
def parse_material(b,p):
 checked(b,p,0x40,"MaterialAnimData")
 name_ptr=u64(b,p)
 shader_ptr=u64(b,p+8);texture_ptr=u64(b,p+16)
 curve_ptr=u64(b,p+24);constant_ptr=u64(b,p+32)
 shader_count=u16(b,p+0x32);texture_count=u16(b,p+0x34)
 constant_count=u16(b,p+0x36);curve_count=u16(b,p+0x38)
 if any(v>256 for v in (shader_count,texture_count,constant_count,curve_count)):
  raise ValueError("material animation count exceeds bounded native array")
 infos=[]
 if shader_count:
  checked(b,shader_ptr,shader_count*0x18,"ShaderParamAnimInfo")
  for i in range(shader_count):
   q=shader_ptr+0x18*i
   infos.append({"name":strnw(b,u64(b,q)),"source_offset":q,
    "begin_curve":u16(b,q+8),"float_curve_count":u16(b,q+10),
    "int_curve_count":u16(b,q+12),"begin_constant":u16(b,q+14),
    "constant_count":u16(b,q+16),"sub_bind_index":u16(b,q+18)})
 if texture_count:checked(b,texture_ptr,texture_count*0x18,"TexturePatternInfo candidate")
 if constant_count and not constant_ptr:raise ValueError("nonzero constant count with null source pointer")
 return {"offset":p,"header_sha256":hash256(checked(b,p,0x40,"material bytes")),
  "name":strnw(b,name_ptr),"shader_param_infos":infos,
  "shader_param_count":shader_count,"texture_pattern_count":texture_count,
  "constants_count":constant_count,"curve_count":curve_count,
  "curve_array_ptr":curve_ptr,"constant_array_ptr":constant_ptr,
  "curves":[parse_curve(b,curve_ptr+i*0x30,100) for i in range(curve_count)] if curve_count else [],
  "texture_pattern_status":"RAW_BOUNDED_NOT_DESERIALIZED" if texture_count else "NONE",
  "constant_values_status":"NOT_DESERIALIZED" if constant_count else "NONE"}
def parse(b):
 original=parse_headers(b)
 result=[]
 for head in original["material_animation_headers"]:
  name=head["name"].get("name");counts=head["counts_from_header"]
  n=counts["material"];p=head["pointer_fields"]["material_anim_data"]["value"]
  checked(b,p,n*0x40,"FMAA MaterialAnimData array")
  mat=[parse_material(b,p+0x40*i) for i in range(n)]
  curves=sum(x["curve_count"] for x in mat)
  params=sum(x["shader_param_count"] for x in mat)
  print("R45_DATA_COUNTS",name,"FMAA",counts,"MAT",[
   {"offset":x["offset"],"name":x["name"],"curves":x["curve_count"],
    "params":x["shader_param_count"],"header":x["header_sha256"]} for x in mat])
  # FMAA ShaderParamAnimCount is an aggregate channel count, not necessarily
  # the number of per-material ParamAnimInfo records. Keep both distinct.
  channels=sum(info["float_curve_count"]+info["int_curve_count"]
      for m in mat for info in m["shader_param_infos"])
  if curves!=counts["curve"]:
   raise ValueError(f"{name}: material curve count differs from original FMAA header")
  if params>counts["shader_param"] or channels>counts["shader_param"]:
   raise ValueError(f"{name}: shader param record/curve indices exceed header aggregate")
  result.append({"animation_name":name,"animation_header_offset":head["offset"],
   "animation_frame_count":head["frame_count_raw"],"material_anim_records":mat,
   "total_curve_count_verified":curves,"total_shader_param_info_records":params,
   "total_shader_param_channel_curve_counts":channels,
   "original_FMAA_shader_param_header_counter":counts["shader_param"],
   "shader_param_header_semantic_relationship":"RECORD_AND_CHANNEL_COUNTS_DISTINCT_NOT_ASSUMED_EQUAL"})
 return {"schema":"acnh303-r45-original-FMAA-material-data-curves-frames-keys-v1",
 "original_source_sha256":SOURCE_SHA,"fres_member_sha256":INNER_SHA,
 "native_animation_objects":result,"native_material_curve_bytes_decoded":all(
     c["status"]=="FRAME_AND_KEY_BYTES_DECODED" for a in result for m in a["material_anim_records"] for c in m["curves"]),
 "original_Nintendo_runtime_playback_verified":False,
 "shader_material_bindings_runtime_verified":False,
 "limits":"Frames/keys are physical decoded bytes where status permits; interpolated gameplay playback and bound material shader state need runtime capture."}
def main():
 p=argparse.ArgumentParser();p.add_argument("--out",type=Path,required=True);a=p.parse_args()
 raw=(Path(NCA)/"1"/SOURCE).read_bytes()
 if hash256(raw)!=SOURCE_SHA:raise ValueError("original source SHA mismatch")
 leaves=list(find_leaf(raw,SOURCE))
 if len(leaves)!=1 or hash256(leaves[0]["data"])!=INNER_SHA:raise ValueError("original FRES SHA mismatch")
 out=parse(leaves[0]["data"])
 a.out.parent.mkdir(parents=True,exist_ok=True)
 a.out.write_text(json.dumps(out,ensure_ascii=False,indent=2,sort_keys=True)+"\n",encoding="utf8")
 print("R45_FMAA_CURVES",json.dumps([{"name":a["animation_name"],
    "materials":[{"name":m["name"],"curves":[{"keys":c["num_keys"],"status":c["status"],"frames":c.get("frames")} for c in m["curves"]]} for m in a["material_anim_records"]]} for a in out["native_animation_objects"]],ensure_ascii=False))
if __name__=="__main__":main()
