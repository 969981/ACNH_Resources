#!/usr/bin/env python3
"""Verify all four genuine 92/128B NpcSP_kpp BWAV failures contain only metadata."""
import argparse,json,hashlib
from pathlib import Path
from acnh303_round35_short_bwav import inspect_short
SOURCE="Sound/Resource/NpcSP_kpp.bars"
SHA="8950cdc7b8c5174d3a8592f778a138a614741db5e2cc4e9fc7827e935c5c6744"
NCA=Path("e10617820db06889e1638499478da0de_NCA/1")
def hash(b):return hashlib.sha256(b).hexdigest()
def main():
 p=argparse.ArgumentParser();p.add_argument("--reported",type=Path,required=True);p.add_argument("--out",type=Path,required=True);a=p.parse_args()
 d=json.loads(a.reported.read_text("utf8"));rows=d["exact_failures"]
 if len(rows)!=4:raise ValueError("exactly 4 original failure records")
 original=(NCA/SOURCE).read_bytes()
 if len(original)!=988 or hash(original)!=SHA:raise ValueError("original BARS source SHA mismatch")
 checked=[]
 for x in rows:
    if x["original_source_path"]!=SOURCE or x["source_sha256"]!=SHA:
        raise ValueError("incorrect BARS source identity")
    start=x["asset_offset"];n=x["member_bytes"];data=original[start:start+n]
    if len(data)!=n or hash(data)!=x["member_sha256"]:
        raise ValueError("original BWAV member SHA mismatch")
    val=inspect_short(data)
    checked.append({"asset_index":x["asset_index"],"original_bytes":n,
      "asset_offset":start,"original_member_sha256":x["member_sha256"],"native":val})
 out={"schema":"acnh303-r35-4-original-npc-short-bwav-payload-bounds-v1",
   "source":SOURCE,"source_sha256":SHA,"members":checked,
   "valid_header_count":sum(x["native"]["status"]=="VALID_BOUNDED_NATIVE_HEADER" for x in checked),
   "missing_internal_sample_payload":sum(x["native"].get("no_channel_has_payload_in_member")==True for x in checked),
   "limits":"R35 original source bytes verified; no claim that missing audio lives in any external file without match."}
 a.out.parent.mkdir(parents=True,exist_ok=True)
 a.out.write_text(json.dumps(out,indent=2,ensure_ascii=False,sort_keys=True)+"\n")
 print("R35_NPC_SHORT_AUDIO",json.dumps({k:v for k,v in out.items() if k!="members"},ensure_ascii=False))
if __name__=="__main__":main()
