#!/usr/bin/env python3
"""R38 recover all 18 missing Bgm_Base CRC labels from authentic AMTA strings.

Strict source SHA backed original AMTA source bytes prepared by R38. Actual
strings are not invented guesses; all 18 exact CRC32(stem) verified. This
recovers NAME identity, not external DLC BWAV data.
"""
from __future__ import annotations
import argparse,json,zlib
from pathlib import Path
BARS_SHA="b2a7131f6de904a8c381b25f1c890797ea09075c93c5b0c366833f45656c9a5c"
def crc(s):return "0x%08x"%(zlib.crc32(s.encode("utf8"))&0xffffffff)
def main():
 p=argparse.ArgumentParser()
 p.add_argument("--amta",type=Path,required=True)
 p.add_argument("--original-tree",type=Path,required=True)
 p.add_argument("--out",type=Path,required=True)
 a=p.parse_args()
 d=json.loads(a.amta.read_text());t=json.loads(a.original_tree.read_text())
 if d["original_source_BARS_sha256"]!=BARS_SHA or len(d["unresolved_AMTA_records"])!=18:
  raise ValueError("native original source provenance wrong")
 missing=set(t["original_unresolved_crc"])
 if len(missing)!=18:raise ValueError("R38 all original tree missing source list changed")
 matches=[]
 for x in d["unresolved_AMTA_records"]:
  strings=[r for r in x["amta_visible_printable_ascii_runs"] if
         r["offset_relative"]>=96 and r["ascii"].startswith("BGM_OneRoom_")]
  if len(strings)!=1:raise ValueError("original BARS AMTA name not unambiguously recovered")
  name=strings[0]["ascii"]
  computed=crc(name)
  if computed!=x["crc"] or computed not in missing:
   raise ValueError("AMTA recovered name CRC is not the exact original BARS name hash")
  matches.append({"original_bars_crc":x["crc"],"original_AMTA_sound_name":name,
   "recomputed_original_name_crc":computed,
   "AMTA_source_metadata_SHA256":x["amta_source_sha256"],
   "AMTA_name_byte_offset":x["source_meta_offset"]+strings[0]["offset_relative"],
   "source_original_BARS_member_index":x["bars_member_index"],
   "corresponding_stream_file_found_in_original_RomFS":False})
 if len(matches)!=len(missing) or len(set(x["original_AMTA_sound_name"] for x in matches))!=18:
  raise ValueError("incomplete 18 original AMTA name identities")
 res={"schema":"acnh303-r38-all-18-previously-unmatched-BARS-CRC-exact-original-AMTA-string-name-recovery-v1",
  "original_BARS_sha256":BARS_SHA,
  "original_Git_tree_files_scanned":t["original_source_git_tree_file_count"],
  "original_AMTA_name_found_and_CRC_proven":18,
  "all_eighteen_OneRoom_category":True,
  "R37_original_873_matched_external_stream_paths_remain_separate":True,
  "fully_named_BARS_header_only_members":891,
  "fully_named_BARS_direct_FilenameCRC_and_AMTA_sum":873+18,
  "original_one_room_Audio_name_labels":sorted(matches,key=lambda x:x["original_bars_crc"]),
  "external_full_BWAV_for_18_one_room_found":False,
  "DLC_HappyHomeParadise_origin_status":"candidate_from_OneRoom_semantics_not_external_DLC_bytes_verified",
  "limitations":"Names actually embedded in original Bgm_Base AMTA are CRC-verified. OneRoom looks consistent with Happy Home Paradise scene naming but the separate DLC Stream audio sources are not within the provided original 3.0.3 RomFS tree; no DLC container or runtime I/O was accessed."}
 a.out.parent.mkdir(parents=True,exist_ok=True)
 a.out.write_text(json.dumps(res,ensure_ascii=False,indent=2,sort_keys=True)+"\n")
 print("R38_ORIGINAL_AMTA_RESOLVED_ALL_18",res["original_AMTA_name_found_and_CRC_proven"],
   "FULLY_NAMED",res["fully_named_BARS_header_only_members"])
if __name__=="__main__":main()
