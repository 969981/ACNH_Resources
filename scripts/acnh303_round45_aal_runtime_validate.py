#!/usr/bin/env python3
"""ACNH R45: fail-closed AAL same-session runtime observation validator.

This does not create or guess a real native runtime trace. Its no-input output is
NOT_CAPTURED. Even structurally consistent user-supplied captures are UNATTESTED
until origin and original-source audio data are independently verified.
"""
from __future__ import annotations
import argparse,hashlib,json,re
from collections import Counter
from pathlib import Path
ELF_SHA="83970061788f10049e2e60d687571b8dc87e5014521889ac4611a7f6b9c6e180"
STATIC_ANCHORS={"Bgm_Base_build":"0x290F258","Bgm_Base_call":"0x290F278",
 "Manager_call":"0x37316FC","AAL_vtable_hop1":"0x3E451FC","AAL_vtable_hop2":"0x3E45218"}
NEEDED=["AAL_Request","FileOpen","FileRead","FileClose","DecodedAudio"]
def sha(path):return hashlib.sha256(path.read_bytes()).hexdigest()
def classify(capture=None):
 out={"schema":"acnh303-r45-original-AAL-runtime-closure-gate-v1",
   "ACNH_version":"3.0.3","original_elf_sha256_expected":ELF_SHA,
   "static_entry_candidates":STATIC_ANCHORS,"trace_status":"NOT_CAPTURED",
   "native_AAL_FileOpen_Read_Close_proven":False,
   "native_audio_PCM_playback_proven":False,
   "user_supplied_capture_structure_validated":False,
   "raw_observer_log_source_independently_attested":False,
   "requirements":"Match one real game session, original SHA-verified ELF, BARS asset and CRC, actual path/handle, read range/buffer SHA and close, then original PCM/playback observation. Static BL/BLR instructions alone are not FileOpen."}
 if capture is None:return out
 if not capture.is_file():raise ValueError("nonexistent actual capture")
 raw=capture.read_bytes()
 rows=[json.loads(s) for s in raw.decode("utf8").splitlines() if s.strip()]
 if not rows:raise ValueError("empty capture")
 if len(rows)>200000:raise ValueError("unbounded runtime capture")
 required={"session_id","elf_sha256","sequence","type","module_base","pc"}
 for rec in rows:
  if not required.issubset(rec):raise ValueError("missing original session/ELF/module/pc or sequence")
  if rec["elf_sha256"]!=ELF_SHA:raise ValueError("wrong exact original ACNH 3.0.3 ELF")
  if not isinstance(rec["module_base"],int) or rec["module_base"]<0x10000:
   raise ValueError("invalid module base")
  if not isinstance(rec["sequence"],int) or rec["sequence"]<0:
   raise ValueError("invalid observation sequence")
 if len({r["session_id"] for r in rows})!=1 or not all(rows[i]["sequence"]<rows[i+1]["sequence"] for i in range(len(rows)-1)):
  raise ValueError("mixed/non-monotonic original capture session")
 out.update({"trace_sha256":sha(capture),"observation_count":len(rows),
  "captured_event_types":dict(Counter(r["type"] for r in rows)),
  "session_id":rows[0]["session_id"],
  "trace_status":"SOURCE_LOG_CAPTURED_NO_NATIVE_SEMANTIC_ATTESTATION",
  "user_supplied_capture_structure_validated":True})
 # The observer captures registers but intentionally does not invent file I/O.
 have={r["type"] for r in rows}
 out["required_event_types_present"]=all(k in have for k in NEEDED)
 if not all(k in have for k in NEEDED):
  out["missing_event_types"]=[x for x in NEEDED if x not in have]
  return out
 # Only candidate graph; check expected handle matching and read byte proof.
 requests=[r for r in rows if r["type"]=="AAL_Request"]
 opens=[r for r in rows if r["type"]=="FileOpen"]
 reads=[r for r in rows if r["type"]=="FileRead"]
 closes=[r for r in rows if r["type"]=="FileClose"]
 decoded=[r for r in rows if r["type"]=="DecodedAudio"]
 chains=[]
 for o in opens:
  handle=o.get("handle");path=o.get("path")
  if not isinstance(handle,(str,int)) or not isinstance(path,str) or not path.startswith("Sound/Resource/Stream/") or not path.endswith(".bwav"):
   continue
  rs=[x for x in reads if x.get("handle")==handle and x["sequence"]>o["sequence"] and
      isinstance(x.get("buffer_sha256"),str) and re.fullmatch(r"[a-f0-9]{64}",x["buffer_sha256"]) and
      isinstance(x.get("read_bytes"),int) and x["read_bytes"]>0]
  cs=[x for x in closes if x.get("handle")==handle and x["sequence"]>o["sequence"]]
  if not rs or not cs or max(x["sequence"] for x in rs)>=min(x["sequence"] for x in cs):continue
  request=[x for x in requests if x["sequence"]<o["sequence"] and isinstance(x.get("bars_crc32"),str)]
  dec=[x for x in decoded if x["sequence"]>max(x["sequence"] for x in rs) and isinstance(x.get("pcm_sha256"),str) and re.fullmatch(r"[a-f0-9]{64}",x["pcm_sha256"])]
  if request and dec:
   chains.append({"path":path,"handle":str(handle),"CRC":request[-1]["bars_crc32"],
    "read_events":len(rs),"provided_PCM_SHA":dec[0]["pcm_sha256"]})
 out["unattested_candidate_chains"]=chains
 out["trace_status"]="STRUCTURALLY_COHERENT_UNATTESTED" if chains else "INCOMPLETE_RUNTIME_IO_CHAIN"
 # No user-authored JSON can self-attest origin, and SHA strings aren't original sample proof.
 return out
def main():
 p=argparse.ArgumentParser();p.add_argument("--capture",type=Path)
 p.add_argument("--out",type=Path,required=True)
 a=p.parse_args();v=classify(a.capture)
 a.out.parent.mkdir(parents=True,exist_ok=True)
 a.out.write_text(json.dumps(v,ensure_ascii=False,indent=2,sort_keys=True)+"\n",encoding="utf8")
 print("R45_AAL_GATED",v["trace_status"],v["native_AAL_FileOpen_Read_Close_proven"])
if __name__=="__main__":main()
