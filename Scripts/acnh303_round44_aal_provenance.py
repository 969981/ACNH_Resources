#!/usr/bin/env python3
"""R44 independently cross-check real CRC-named Stream/BARS and negative runtime AAL evidence.

The R38 SHA-audited original stream source file evidence is *read*, not re-faked.
No emulator/native runtime logs were supplied here, so FileOpen/Read/Close stays false.
"""
from __future__ import annotations
import argparse,hashlib,json,zlib
from pathlib import Path
BASE=Path("derived/3.0.3")
def sha(path):return hashlib.sha256(path.read_bytes()).hexdigest()
def load(p):return json.loads(p.read_text("utf8"))
def run():
 r37p=BASE/"r37_stream/real_BgmBase_to_Stream_original_samples.json"
 r38p=BASE/"r38_stream_all/873_exact_original_byte_native_header_audit.json"
 r39p=BASE/"r39_oneroom_verified_source/18_external_original_full_BWAV_NOT_PROVIDED_negative_control.json"
 r40p=BASE/"r40_acceptance/runtime_animation_aal_audio_actual_input_status.json"
 r43p=BASE/"r43_cumulative/native_gap_matrix.json"
 r37,r38,r39,r40,r43=map(load,(r37p,r38p,r39p,r40p,r43p))
 original=r38["all_original_stream_filename_CRC_entries_preserved"]
 if len(original)!=873 or r38["audited_original_standalone_BWAV_file_count"]!=873:
  raise ValueError("verified 873 original file records missing")
 if r38["read_verified_original_source_bytes"]!=1724328411 or r38["unresolved_or_mismatch_name_matched_file_count"]!=0:
  raise ValueError("R38 exact native stream source coverage drift")
 pairs={};by_path=set()
 for x in original:
  key=x["name_crc32_hex"]
  path=x["path"]
  if not path.startswith("Sound/Resource/Stream/") or not path.endswith(".bwav") or len(x["sha256"])!=64:
   raise ValueError("invalid R38 real Stream source identity")
  computed="0x%08x"%(zlib.crc32(Path(path).stem.encode("utf8"))&0xffffffff)
  if key!=computed or key in pairs or path in by_path or x["status"]!="MATCH_NATIVE_HEADER_AND_REAL_PAYLOAD":
   raise ValueError("CRC duplicate, mismatched native header or source identity drift")
  pairs[key]=x;by_path.add(path)
 if r37["unmatched_BARS_name_CRC_count"]!=18 or r37["source_stream_name_crc_matches"]!=873:
  raise ValueError("R37 short member correlation mismatch")
 if r39["actually_supplied_and_SHA_header_payload_verified"]!=0 or r39["expected_full_OneRoom_BWAV_count"]!=18:
  raise ValueError("R39 OneRoom negative control no longer matches")
 if r40["actual_live_capture_declared"] or r40["native_AAL_FileOpen_Read_Close_trace_claim_allowed"]:
  raise ValueError("R40 runtime provenance negative control unexpectedly changed")
 failed=r43["new_BARS_failed_members"]
 if len(failed)!=3:raise ValueError("R43 exact last-three short BWAV audit absent")
 selected=[]
 for x in failed:
  crc=x["name_crc32_hex"];target=pairs.get(crc)
  selected.append({"bars_source":x["source_path"],"bars_source_sha256":x["source_sha256"],
     "original_bwav_member_sha256":x["member_sha256"],"crc_name":crc,
     "R38_real_stream_name_match":bool(target),
     "R38_matching_original_stream":target,
     "R43_member_is_header_only":x["category"]=="HEADER_ONLY_NO_INTERNAL_PAYLOAD",
     "AAL_runtime_open_read_close_proven":False})
 if any(not x["R43_member_is_header_only"] for x in selected):
  raise ValueError("R43 short member evidence unexpectedly changed")
 return {"schema":"acnh303-r44-independent-AAL-provenance-static-join-and-runtime-gap-v1",
 "R37_evidence_file_sha256":sha(r37p),"R38_evidence_file_sha256":sha(r38p),
 "R39_one_room_negative_control_sha256":sha(r39p),"R40_runtime_negative_control_sha256":sha(r40p),
 "historical_891_BARS_short_member_name_matches":873,
 "original_873_standalone_stream_bytes_verified":1724328411,
 "R38_crc_correlated_streams_with_original_real_payload":len(pairs),
 "historical_18_unmatched_CRCs_with_lawfully_supplied_full_audio":0,
 "R43_three_header_only_members":selected,
 "runtime_chain_acceptance":{"original_game_version":"ACNH 3.0.3",
    "needs_same_session_trace":["BARS asset id/CRC and effective sound command",
       "AAL provider resolving external Stream path",
       "actual filesystem FileOpen returned handle and exact path",
       "FileRead offset/size/returned bytes and SHA",
       "FileClose handle","decoded output / native playback observation"],
    "same_session_original_raw_log_sha256_verified":False,
    "full_AAL_file_open_read_close_proven":False,
    "native_external_stream_decoded_PCM_proven":False},
 "limits":"Original Stream SHA and Native BWAV payload evidence exists for 873 CRC-correlated names; CRC is not an AAL game runtime read trace or guarantee for the other 18."}
def main():
 p=argparse.ArgumentParser();p.add_argument("--out",type=Path,required=True);a=p.parse_args()
 d=run();a.out.parent.mkdir(parents=True,exist_ok=True)
 a.out.write_text(json.dumps(d,ensure_ascii=False,indent=2,sort_keys=True)+"\n",encoding="utf8")
 print("R44_AAL_EVIDENCE",d["R38_crc_correlated_streams_with_original_real_payload"],
   [(x["bars_source"],x["R38_real_stream_name_match"]) for x in d["R43_three_header_only_members"]])
if __name__=="__main__":main()
