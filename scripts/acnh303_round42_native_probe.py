#!/usr/bin/env python3
"""Read-only Cedar animation BFRES forensic check; output metadata, never fake GLB."""
from __future__ import annotations
import argparse,hashlib,json,struct
from pathlib import Path
from acnh303_media_l3 import find_leaf,NCA
from acnh303_round34_fska_source import inspect as inspect_fres
SOURCE="Model/PltTreeCedarDecoAnim.Nin_NX_NVN.zs"
EXPECTED_SHA="3284939356d4d1a086307b0586e7f4e8995971f7c642190fc84da331767cb97f"
def sha(b):return hashlib.sha256(b).hexdigest()
def evaluate(root):
 path=root/NCA/"1"/SOURCE
 raw=path.read_bytes()
 if sha(raw)!=EXPECTED_SHA:raise ValueError("Cedar original bytes SHA mismatch")
 leaves=list(find_leaf(raw,SOURCE))
 if not leaves:raise ValueError("no decompressible Cedar resource members")
 entries=[]
 for leaf in leaves:
  data=leaf["data"]
  if data[:4]!=b"FRES":
   entries.append({"member":leaf["source_member"],"size":len(data),"sha256":sha(data),
                   "format":leaf["format"],"semantic_status":"NATIVE_NOT_BFRES"})
   continue
  if len(data)<0x100:raise ValueError("truncated FRES header")
  ptr=struct.unpack_from("<Q",data,0x28)[0]
  native=inspect_fres(data)
  mesh_hits={k:data.count(k.encode()) for k in ("FMDL","FSHP","FVTX","FSKA","FMAA","BNTX")}
  entries.append({"member":leaf["source_member"],"size":len(data),"sha256":sha(data),
    "header_fmdl_pointer":ptr,"native_header":native["native_switch_fres_header"],
    "magic_occurrences_not_counts":mesh_hits,
    "candidate_class":"ANIMATION_CANDIDATE_NO_VERIFIED_MESH" if
        ptr==0 and mesh_hits["FSKA"]>0 and mesh_hits["FMDL"]==0 else
        "MODEL_CANDIDATE_NOT_YET_VERIFIED" if ptr!=0 or mesh_hits["FMDL"]>0 else
        "NON_GEOMETRY_OR_UNKNOWN_FRES",
    "animation_keyframe_semantics_verified":False,
    "native_playback_parity_verified":False})
 return {"schema":"acnh303-r42-cedar-original-FRES-native-structure-v1",
  "source_path":SOURCE,"source_sha256":EXPECTED_SHA,
  "source_bytes":len(raw),"leaves":entries,
  "note":"FRES pointers and occurrences are raw evidence only. No mesh or FSKA animation is fabricated."}
def main():
 p=argparse.ArgumentParser()
 p.add_argument("--root",type=Path,default=Path("."))
 p.add_argument("--out",type=Path,required=True)
 a=p.parse_args();v=evaluate(a.root)
 a.out.parent.mkdir(parents=True,exist_ok=True)
 a.out.write_text(json.dumps(v,ensure_ascii=False,sort_keys=True,indent=2)+"\n",encoding="utf8")
 print("CEDAR_NATIVE_EVIDENCE",json.dumps([{k:x[k] for k in ("member","candidate_class","magic_occurrences_not_counts")} for x in v["leaves"]],ensure_ascii=False))
if __name__=="__main__":main()
