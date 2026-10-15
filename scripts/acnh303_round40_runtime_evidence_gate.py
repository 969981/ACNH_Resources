#!/usr/bin/env python3
"""R40 evidence-first validator for *external real-game* runtime traces.

It never captures/emulates a Nintendo process, never manufactures 'native'
frames, and never treats Blender outputs as native proof. Can compare
source-backed R39 46-joint GLB with genuine user-provided runtime matrices,
correlate AAL NAME -> OPEN -> READ -> CLOSE with 873 Git-byte originals,
and propagate the lawful external OneRoom source validation result.

Metadata cannot independently attest physical provenance: even accepted
capture is 'REPORTED_LIVE_RUNTIME_EVIDENCE_VALIDATED', not a cryptographic
console attestation. Missing inputs remain explicitly NOT_CAPTURED.
"""
from __future__ import annotations
import argparse,hashlib,json,math
from pathlib import Path
import numpy as np
from acnh303_round35_export_animated_glb import readglb
from acnh303_round37_pose_probe import globals_for,channels

ELF_SHA="83970061788f10049e2e60d687571b8dc87e5014521889ac4611a7f6b9c6e180"
R39_SHA="3b72c9384bf7f8f1e7bac4ca48555bc6119b94c8eb89a1c76b2d24e8eb596366"
BARS_SHA="b2a7131f6de904a8c381b25f1c890797ea09075c93c5b0c366833f45656c9a5c"
CLIPS={"Act_ArrangeRemoveFtrHigh":28,"Act_BookOpen_Player":30,"Act_BookRead_Player":32}
WATCH=("Clavicle_L","Clavicle_R","Wrist_L","Wrist_R","Arm_2_L","Arm_2_R","Neck","Head","Waist","Leg_1_L","Leg_1_R","Leg_2_L","Leg_2_R","Ankle_L","Ankle_R")
RUN_SCHEMA="acnh303-r40-external-read-only-game-session-v1"
def required(d,key,typ):
 v=d.get(key)
 if not isinstance(v,typ) or isinstance(v,typ if typ is bool else ()) or (isinstance(v,str) and not v.strip()):
  raise ValueError("required field missing/wrong: "+key)
 return v
def hex64(t):
 return isinstance(t,str) and len(t)==64 and all(c in "0123456789abcdef" for c in t)
def finite_xyz(v):
 return isinstance(v,list) and len(v)==3 and all(type(z) in (float,int) and math.isfinite(z) for z in v)
def finite_matrix(m):
 return isinstance(m,list) and len(m)==16 and all(type(z) in (int,float) and math.isfinite(z) for z in m)
def pairwise(a,b):
 x=np.linalg.norm(a[:,None,:]-a[None,:,:],axis=2)
 y=np.linalg.norm(b[:,None,:]-b[None,:,:],axis=2)
 i,j=np.triu_indices(len(a),1)
 xx=x[i,j];yy=y[i,j];ok=(xx>1e-6)
 if ok.sum()<30:raise ValueError("native pose pairwise distances degenerate")
 scale=float(np.dot(xx[ok],yy[ok])/np.dot(xx[ok],xx[ok]))
 if not 1e-5<scale<1e5:raise ValueError("unreasonable game model/native spatial units")
 err=np.abs(xx[ok]*scale-yy[ok])
 return {"paired_joint_count":len(a),"fitted_native_to_source_model_scale":scale,
         "p95_abs_joint_distance_error":float(np.percentile(err,95)),
         "max_abs_joint_distance_error":float(np.max(err)),
         "mean_abs_joint_distance_error":float(np.mean(err))}
def run_provenance(d):
 if d.get("schema")!=RUN_SCHEMA:raise ValueError("not a user-provided original game runtime session schema")
 p=required(d,"provenance",dict)
 if p.get("source_process_kind")!="acnh_3_0_3_live_game_read_only":
  raise ValueError("NOT_CAPTURED: source is not declared ACNH 3.0.3 live game")
 if p.get("original_elf_sha256")!=ELF_SHA:raise ValueError("wrong original game executable SHA")
 for k in ("capture_session_id","capture_instrumentation","instrumentation_version",
           "module_base_hex","source_device_kind","observer_raw_log_sha256"):
  required(p,k,str)
 if not hex64(p["observer_raw_log_sha256"]):raise ValueError("real raw observer log digest invalid")
 base=int(p["module_base_hex"],16)
 if base<=0 or base%4096:raise ValueError("module base invalid/unmapped")
 if p.get("source_device_kind")!="physical_nintendo_switch":
  raise ValueError("For native physical-console parity, actual source_device_kind must be physical_nintendo_switch")
 if p.get("native_game_runtime_observed") is not True:
  raise ValueError("No affirmative actual external runtime source")
 forbidden=" ".join(str(p.get(k,"")) for k in ("capture_instrumentation","source_device_kind")).lower()
 if any(x in forbidden for x in ("blender","synthetic","mock","fixture","source glb","emulated fake")):
  raise ValueError("Blender/mock/fixture cannot substitute native source")
 return p
def pose_gate(d,glb):
 if glb is None:return {"status":"NOT_CAPTURED","native_source_frames":0,"reason":"No original R39 GLB provided for comparison"}
 entry=d.get("pose_capture")
 if entry is None:return {"status":"NOT_CAPTURED","native_source_frames":0,"reason":"No real native joint matrices from game"}
 raw,g,buf=readglb(glb)
 if hashlib.sha256(raw).hexdigest()!=R39_SHA:raise ValueError("pose validator must use exactly R39 +20 FSKA GLB source")
 ids=g["skins"][0]["joints"]
 nodes={g["nodes"][n].get("name"):n for n in ids}
 if len(nodes)!=46 or not all(k in nodes for k in WATCH):raise ValueError("source GLB 46 native FSKL joints missing")
 blocks=required(entry,"clips",list)
 if len(blocks)!=3 or {c.get("clip") for c in blocks}!=set(CLIPS):
  raise ValueError("actual native game must have 3 distinct FSKA action samples")
 out=[];count=0;full=True
 for item in blocks:
  name=item["clip"];frames=required(item,"frames",list)
  if len(frames)<3:raise ValueError("native capture requires >=3 actual frames per source animation")
  fnums=set();prev_clock=-1;prev_render=-1;measures=[];instance_ids=set()
  clip=next(x for x in g["animations"] if x["name"]==name)
  for row in frames:
   idx=row.get("source_frame")
   if type(idx) not in (float,int) or not math.isfinite(idx) or idx<0 or idx>CLIPS[name]:
    raise ValueError("actual native FSKA source_frame missing/out of range")
   if idx in fnums:raise ValueError("duplicate source frame without unique game data")
   fnums.add(idx)
   t=required(row,"monotonic_timestamp_ns",int)
   r=required(row,"game_render_frame",int)
   if t<=prev_clock or r<=prev_render:raise ValueError("native frame and timestamp must strictly increase")
   prev_clock=t;prev_render=r
   if not isinstance(row.get("game_action_instance"),str) or not row["game_action_instance"].strip():
    raise ValueError("observed action instance identity required")
   instance_ids.add(row["game_action_instance"])
   weight=row.get("active_action_weight")
   if type(weight) not in (float,int) or not 0<=weight<=1 or abs(weight-1)>1e-4:
    raise ValueError("blended action state: do not compare to isolated glTF as native parity")
   bones=required(row,"native_joint_model_space_translation",dict)
   if not all(k in bones and finite_xyz(bones[k]) for k in WATCH):
    raise ValueError("game sample missing required actual native FSKL joint positions")
   q=globals_for(g,channels(g,buf,clip,idx))
   src=np.asarray([q[nodes[k]][:3,3] for k in WATCH],dtype=float)
   native=np.asarray([bones[k] for k in WATCH],dtype=float)
   measures.append({"source_frame":idx,"game_render_frame":r,**pairwise(src,native)})
  if len(instance_ids)!=1:raise ValueError("Native clip capture interleaved multiple game action instances")
  if len(frames)!=CLIPS[name]+1 or set(fnums)!={float(x) for x in range(CLIPS[name]+1)}:full=False
  out.append({"clip":name,"actual_native_sampled_count":len(frames),
    "frame_metrics":measures,
    "worst_p95_abs_joint_distance":max(q["p95_abs_joint_distance_error"] for q in measures)})
  count+=len(frames)
 return {"status":"EXTERNAL_LIVE_RUNTIME_SAMPLE_ACCEPTED_NOT_INDEPENDENTLY_ATTESTED",
    "comparison_GLB_SHA256":R39_SHA,"source_game_ELF_SHA256":ELF_SHA,
    "native_source_frames":count,"all_93_source_integer_frames_captured":full,
    "clips":out,"not_renderer_pixel_parity":True}
def audio_gate(d,ref):
 events=d.get("aal_runtime_events")
 if events is None:return {"status":"NOT_CAPTURED","proven_playback_sources":0}
 if not isinstance(events,list) or not events:
  raise ValueError("AAL runtime events cannot be empty/fixture")
 originals=ref["all_original_stream_filename_CRC_entries_preserved"]
 bypath={r["path"]:r for r in originals}
 if len(bypath)!=873:raise ValueError("original 873 source SHA table incomplete")
 groups={}
 prev=-1
 for e in events:
  kind=required(e,"stage",str)
  if kind not in ("BGM_NAME_REGISTER","AAL_DISPATCH","FILE_OPEN","FILE_READ","FILE_CLOSE","DECODE_SUBMIT"):
   raise ValueError("unknown runtime AAL event")
  t=required(e,"monotonic_timestamp_ns",int)
  if t<=prev:raise ValueError("AAL event timestamps not in original observed chronological order")
  prev=t
  rid=required(e,"request_id",str)
  code=required(e,"observer_pc_rva_hex",str)
  if not code.startswith("0x"):raise ValueError("original AArch64 PC RVA required")
  groups.setdefault(rid,[]).append(e)
 verified=[];incomplete=[]
 for request,items in groups.items():
  stages={e["stage"] for e in items}
  reg=[e for e in items if e["stage"]=="BGM_NAME_REGISTER"]
  disp=[e for e in items if e["stage"]=="AAL_DISPATCH"]
  opens=[e for e in items if e["stage"]=="FILE_OPEN"]
  reads=[e for e in items if e["stage"]=="FILE_READ"]
  closes=[e for e in items if e["stage"]=="FILE_CLOSE"]
  if not reg or not disp or not opens or not reads or not closes:
   incomplete.append({"request_id":request,"stages":sorted(stages)})
   continue
  if reg[0].get("string_value")!="Bgm_Base" or reg[0]["observer_pc_rva_hex"] not in ("0x290f278","0x37316e4","0x37316fc"):
   incomplete.append({"request_id":request,"reason":"not the original Bgm_Base registration instance"})
   continue
  if disp[0].get("vtable_target_rva_hex") is None or disp[0].get("manager_object_rva_hex") is None:
   incomplete.append({"request_id":request,"reason":"no observed live virtual-call target and manager object"})
   continue
  op=opens[0]
  if op.get("success") is not True or not isinstance(op.get("opened_handle"),str):
   incomplete.append({"request_id":request,"reason":"no successful same-process FileOpen handle"})
   continue
  path=op.get("path","")
  if path not in bypath:
   incomplete.append({"request_id":request,"reason":"not a known 873 source BWAV path","path":path})
   continue
  expected=bypath[path]
  if op.get("original_file_sha256")!=expected["sha256"] or op.get("original_file_bytes")!=expected["bytes"]:
   incomplete.append({"request_id":request,"reason":"observed original source file SHA/bytes mismatch","path":path})
   continue
  if any(e.get("opened_handle")!=op["opened_handle"] for e in reads+closes):
   incomplete.append({"request_id":request,"reason":"open-read-close handle mismatch","path":path})
   continue
  ordered=[e["monotonic_timestamp_ns"] for e in [reg[0],disp[0],op,*reads,closes[-1]]]
  if ordered!=sorted(ordered) or len(set(ordered))!=len(ordered):
   incomplete.append({"request_id":request,"reason":"I/O stage chronology violated","path":path})
   continue
  spans=[]
  for re in reads:
   offset=re.get("source_file_offset");size=re.get("read_byte_count")
   if type(offset)!=int or type(size)!=int or offset<0 or size<=0 or offset+size>expected["bytes"]:
    raise ValueError("actual FileRead offset/bounds do not match original source file")
   sh=re.get("observed_bytes_sha256")
   if not hex64(sh):raise ValueError("no original read-buffer SHA256 per read span")
   spans.append((offset,size))
  verified.append({"request_id":request,"path":path,"original_full_file_sha256":expected["sha256"],
    "actual_read_spans":spans,"actual_total_bytes_read":sum(s for _,s in spans),
    "observation_level":"EXTERNAL_LOG_REPORTED_IO_CHAIN_PLUS_FILE_SHA; NOT_NATIVE_PCM_DECODE"})
 return {"status":"EXTERNAL_LIVE_IO_TRACE_ACCEPTED_NOT_INDEPENDENTLY_ATTESTED" if verified else "NO_COMPLETE_AAL_IO_CHAIN",
   "proven_playback_sources":len(verified),"successfully_correlated_requests":verified,
   "incomplete_events":incomplete,"does_not_prove_PCM_decode":True}
def oneroom_gate(report):
 if report is None:return {"status":"SOURCE_MISSING","matching_full_files":0}
 x=json.loads(report.read_text())
 if x.get("schema")!="acnh303-r39-lawfully-supplied-OneRoom-18-BWAV-native-short-header-full-source-independent-SHA-validator-v1":
  raise ValueError("not original external OneRoom file matching validator")
 n=x.get("actually_supplied_and_SHA_header_payload_verified")
 if type(n)!=int or n<0 or n>18:raise ValueError("impossible original source count")
 rows=x.get("verified_one_room_source_files")
 if not isinstance(rows,list) or len(rows)!=18:raise ValueError("missing original 18 named channels")
 actual=sum(r.get("status")=="SOURCE_SHA_AND_NATIVE_STREAM_CHANNELS_VERIFIED" for r in rows)
 if actual!=n:raise ValueError("OneRoom full original source report dishonest/inconsistent")
 return {"status":"ALL_18_EXTERNAL_ORIGINAL_SOURCE_MATCHED_NOT_OFFICIAL_DLC_PROVENANCE_ATTESTED" if n==18 else "SOURCE_MISSING_OR_PARTIAL",
   "matching_full_files":n,"missing_full_files":18-n,
   "real_dlc_original_source_NCA_proven":False}
def main():
 p=argparse.ArgumentParser()
 p.add_argument("--capture",type=Path)
 p.add_argument("--observer-raw-log",type=Path,help="actual binary/raw log captured from device; SHA must match capture provenance")
 p.add_argument("--r39-glb",type=Path)
 p.add_argument("--source-873",type=Path,required=True)
 p.add_argument("--oneroom-source-audit",type=Path)
 p.add_argument("--out",type=Path,required=True)
 p.add_argument("--require-live",action="store_true")
 a=p.parse_args()
 ref=json.loads(a.source_873.read_text())
 if ref.get("audited_original_standalone_BWAV_file_count")!=873 or ref.get("read_verified_original_source_bytes")!=1724328411:
  raise ValueError("real original R38 873 BWAV SHA audit changed")
 if a.capture is None:
  pose={"status":"NOT_CAPTURED","native_source_frames":0}
  aal={"status":"NOT_CAPTURED","proven_playback_sources":0}
  p=None;capture_sha=None
 else:
  data=a.capture.read_bytes();session=json.loads(data)
  p=run_provenance(session)
  if a.observer_raw_log is None:
   raise ValueError("Cannot accept user-declared native runtime trace without real raw observer log bytes")
  rawlog=a.observer_raw_log.read_bytes()
  if not rawlog or hashlib.sha256(rawlog).hexdigest()!=p["observer_raw_log_sha256"]:
   raise ValueError("Real raw device observer log source SHA256 absent/mismatched; cannot attest self-reported capture")
  capture_sha=hashlib.sha256(data).hexdigest()
  pose=pose_gate(session,a.r39_glb)
  aal=audio_gate(session,ref)
 room=oneroom_gate(a.oneroom_source_audit)
 status={"schema":"acnh303-r40-real-runtime-animation-AAL-external-audio-evidence-gate-v1",
   "recorded_native_source_session_sha256":capture_sha,
   "actual_live_capture_declared":p is not None,
   "pose":pose,"aal_IO":aal,"OneRoom_full_source":room,
   "native_animation_all_93_frames_claim_allowed":bool(p and pose.get("all_93_source_integer_frames_captured")),
   "native_AAL_FileOpen_Read_Close_trace_claim_allowed":bool(p and aal.get("proven_playback_sources",0)>0),
   "OneRoom_18_external_full_file_claim_allowed":room.get("matching_full_files",0)==18,
   "independent_game_hardware_attestation_available":False,
   "externally_supplied_raw_observer_log_sha256_verified":bool(p and a.observer_raw_log is not None),
   "limitations":"No real source capture input -> explicit NOT_CAPTURED. Source GLB/Blender never substitutes Nintendo runtime. Even a future accepted external JSON is only internally consistent reported evidence, not independent authenticity; retain original observer raw logs, original device confirmation and external source provenance."}
 a.out.parent.mkdir(parents=True,exist_ok=True)
 a.out.write_text(json.dumps(status,indent=2,sort_keys=True,ensure_ascii=False)+"\n")
 print("R40_EVIDENCE_GATE",pose["status"],aal["status"],room["status"],flush=True)
 if a.require_live and not (status["native_animation_all_93_frames_claim_allowed"] and status["native_AAL_FileOpen_Read_Close_trace_claim_allowed"] and status["OneRoom_18_external_full_file_claim_allowed"]):
  raise SystemExit("R40 strict native + AAL + external original 18 evidence gate remains NOT_CLOSED; no invented runtime evidence accepted")
if __name__=="__main__":main()
