#!/usr/bin/env python3
"""R44 separately expose native structure certainty and runtime semantic gaps."""
import argparse,json,hashlib
from pathlib import Path
def run(fmaa,aal,old):
 f=json.loads(fmaa.read_text("utf8"));a=json.loads(aal.read_text("utf8"))
 r43=json.loads(old.read_text("utf8"))
 if f["source_sha256"]!=r43["Cedar_FMAA_original_bytes_audit"]["source_sha256"]:
  raise ValueError("original Cedar source SHA lineage mismatch")
 if a["R38_crc_correlated_streams_with_original_real_payload"]!=873:
  raise ValueError("stream source evidence incomplete")
 if a["runtime_chain_acceptance"]["full_AAL_file_open_read_close_proven"]:
  raise ValueError("unexpected unproven runtime claim")
 return {"schema":"acnh303-r44-independent-native-semantic-evidence-v1",
 "R43_native_matrix_sha256":hashlib.sha256(old.read_bytes()).hexdigest(),
 "FMAA_native_structural_evidence":f,
 "AAL_original_stream_and_runtime_evidence":a,
 "independent_gates":{"FMAA_header_array_count":f["native_structural_relation"],
  "FMAA_curve_animation_semantics_proven":False,
  "AAL_full_original_audio_file_read_proven":False,
  "BDLI_LBLI_label_runtime_semantics_proven":False,
  "EventFlow_action_query_runtime_semantics_proven":False,
  "Shader_BNSH_GPU_binding_semantics_proven":False},
 "limits":"Source testing and native pointer consistency do not establish every animation/material/stream behavior."}
def main():
 p=argparse.ArgumentParser()
 p.add_argument("--fmaa",type=Path,required=True);p.add_argument("--aal",type=Path,required=True)
 p.add_argument("--r43",type=Path,required=True);p.add_argument("--out",type=Path,required=True)
 a=p.parse_args();r=run(a.fmaa,a.aal,a.r43)
 a.out.parent.mkdir(parents=True,exist_ok=True)
 a.out.write_text(json.dumps(r,ensure_ascii=False,sort_keys=True,indent=2)+"\n",encoding="utf8")
 print("R44_NATIVE_GATE",r["independent_gates"])
if __name__=="__main__":main()
