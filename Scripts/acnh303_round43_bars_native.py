#!/usr/bin/env python3
"""Read-only original BARS failed-BWAV member bounds and native-header inspection."""
from __future__ import annotations
import argparse,collections,hashlib,json
from pathlib import Path
from acnh303_bars_probe import NCA
from acnh303_round35_short_bwav import inspect_short
def sha(b):return hashlib.sha256(b).hexdigest()
def run(selection,report):
 s=json.loads(selection.read_text("utf8"))
 d=json.loads(report.read_text("utf8"))
 if s["category"]!="Sound" or len(d["records"])!=s["selected_files"]:
  raise ValueError("R43 original BARS shard incorrect")
 seen=set();members=[];statuses=collections.Counter()
 for rec in d["records"]:
  path=rec["source_path"]
  if path in seen:raise ValueError("duplicate BARS original")
  seen.add(path)
  raw=(Path(NCA)/"1"/path).read_bytes()
  if len(raw)!=rec["original_bytes"] or sha(raw)!=rec["source_sha256"]:
   raise ValueError("original source SHA or length drift "+path)
  for m in rec["members"]:
   if m["status"]!="decode_failed":continue
   start=m["source_asset_offset"]; size=m["source_member_bytes"]
   if not isinstance(start,int) or not isinstance(size,int) or start<0 or size<16 or start+size>len(raw):
    raise ValueError("failed member physical bounds invalid "+path)
   payload=raw[start:start+size]
   if sha(payload)!=m["source_member_sha256"]:raise ValueError("failed BWAV exact member SHA drift")
   parsed=inspect_short(payload)
   if parsed["status"]!="VALID_BOUNDED_NATIVE_HEADER":
    category="INVALID_OR_UNSUPPORTED_HEADER"
   elif parsed["no_channel_has_payload_in_member"]:
    category="HEADER_ONLY_NO_INTERNAL_PAYLOAD"
   else:
    category="DECODER_FAILED_WITH_BOUNDED_MEMBER_PAYLOAD"
   statuses[category]+=1
   members.append({"source_path":path,"source_sha256":rec["source_sha256"],
    "index":m["asset_index"],"asset_offset":start,"asset_bytes":size,
    "member_sha256":sha(payload),"name_crc32_hex":m["name_crc32_hex"],
    "category":category,"header":parsed,"converter_exit_code":m.get("converter_exit_code"),
    "error":m.get("error"),"external_stream_location_proven":False})
 if seen!={x.split("/1/",1)[1] for x in s["paths"]}:raise ValueError("shard has unaccounted originals")
 return {"schema":"acnh303-r43-failed-native-bwav-member-evidence-v1",
   "original_sources_verified":len(seen),"failed_member_count":len(members),
   "categories":dict(sorted(statuses.items())),"failed_members":members,
   "limits":"CRC matches or header-only members do not prove external playback routing or source file identity."}
def main():
 a=argparse.ArgumentParser()
 a.add_argument("--selection",type=Path,required=True)
 a.add_argument("--report",type=Path,required=True)
 a.add_argument("--out",type=Path,required=True)
 p=a.parse_args();o=run(p.selection,p.report)
 p.out.parent.mkdir(parents=True,exist_ok=True)
 p.out.write_text(json.dumps(o,ensure_ascii=False,indent=2,sort_keys=True)+"\n",encoding="utf8")
 print("R43_BARS_NATIVE",o["original_sources_verified"],o["failed_member_count"],o["categories"])
if __name__=="__main__":main()
