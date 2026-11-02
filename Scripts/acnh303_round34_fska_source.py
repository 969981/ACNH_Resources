#!/usr/bin/env python3
"""Original SHA 3.0.3 Switch FRES FSKA candidate header and exact nested BFRES export.

This Python scanner is NOT the actual FSKA interpolation deserializer. Invoke the
BfresLibrary C# parser on the extracted exact source payload separately.
"""
import argparse,hashlib,json,struct
from pathlib import Path
from acnh303_media_l3 import find_leaf,NCA
SOURCE="Model/CharactorAnimation20000.Nin_NX_NVN.zs"
SHA="97c70c9355a66f7b4623956357d824f307ae0855411acc584bfc9af1ca73111a"
def sha(data):return hashlib.sha256(data).hexdigest()
def u16(d,o):return struct.unpack_from("<H",d,o)[0]
def u32(d,o):return struct.unpack_from("<I",d,o)[0]
def u64(d,o):return struct.unpack_from("<Q",d,o)[0]
def inspect(b):
    if len(b)<0xf0 or b[:4]!=b"FRES":raise ValueError("not Switch FRES")
    pos=[];start=0
    while True:
        at=b.find(b"FSKA",start)
        if at<0:break
        pos.append(at);start=at+4
        if len(pos)>4096:raise ValueError("too many magic occurrences")
    first=u64(b,0x58);count=u16(b,0xe2);mdl=u16(b,0xdc)
    linked=bool(first and first<len(b)-4 and b[first:first+4]==b"FSKA")
    probes=[]
    for index,at in enumerate(pos):
        if at+0x80>len(b):continue
        probes.append({"candidate_index":index,"offset":at,"first128_hex":b[at:at+0x80].hex(),
          "aligned_4":at%4==0,
          "header_u32_at_0x04":u32(b,at+4),
          "header_u32_at_0x30":u32(b,at+0x30),
          "header_qwords_at_0x08_0x30":[u64(b,at+o) for o in (0x08,0x10,0x18,0x20,0x28,0x30)],
          "header_qword_file_target_count":sum(0<u64(b,at+o)<len(b) for o in (0x08,0x10,0x18,0x20,0x28,0x30))})
    return {"native_switch_fres_header":{"magic":"FRES","source_bytes":len(b),
             "fska_array_pointer_at_0x58":first,
             "header_skeletal_animation_count_u16_at_0xe2":count,
             "header_model_count_u16_at_0xdc":mdl,
             "first_skeletal_animation_array_pointer_matches_fska_magic":linked},
          "fska_magic_occurrence_count":len(pos),"fska_magic_offsets":pos,
          "fska_candidate_headers":probes,
          "animation_deserialization":"PENDING_EXTERNAL_BFRESLIBRARY",
          "limits":"Raw FSKA magic occurrences are not animation count; parsed library animations/curves are independent required evidence."}
def main():
    p=argparse.ArgumentParser();p.add_argument("--root",type=Path,default=Path("."))
    p.add_argument("--outdir",type=Path,required=True);a=p.parse_args()
    path=a.root/NCA/"1"/SOURCE
    b=path.read_bytes()
    if sha(b)!=SHA or len(b)!=2418203:raise ValueError("original compressed source SHA/size mismatch")
    leaves=list(find_leaf(b,SOURCE))
    if len(leaves)!=1:raise ValueError("exactly one historical FRES member required")
    orig=leaves[0]
    content=orig["data"]
    if len(content)!=6528992:raise ValueError("exact original FRES payload length drift")
    name=orig["source_member"]
    if not name.endswith("/output.bfres"):raise ValueError("wrong nested member")
    d=inspect(content)
    d["provenance"]={"original_relative_path":SOURCE,"original_sha256":SHA,
         "nested_member":name,"nested_sha256":sha(content)}
    a.outdir.mkdir(parents=True,exist_ok=True)
    (a.outdir/"original_exact_output.bfres").write_bytes(content)
    (a.outdir/"fska_native_header_candidates.json").write_text(
       json.dumps(d,indent=2,sort_keys=True,ensure_ascii=False)+"\n",encoding="utf8")
    print("R34_REAL_FSKA_FRES",json.dumps({k:v for k,v in d.items() if k not in ("fska_candidate_headers","fska_magic_offsets")},ensure_ascii=False))
if __name__=="__main__":main()
