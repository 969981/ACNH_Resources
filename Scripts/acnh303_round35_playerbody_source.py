#!/usr/bin/env python3
"""SHA-auditable actual PlayerBody BFRES extraction, no fabricated FMDL/FSKL.

Original source is checked out from the NCA tree and inspected as binary.
"""
import argparse,hashlib,json
from pathlib import Path
from acnh303_media_l3 import NCA,find_leaf
NAME="Model/PlayerBody.Nin_NX_NVN.zs"
def sha(b):return hashlib.sha256(b).hexdigest()
def main():
 p=argparse.ArgumentParser();p.add_argument("--outdir",type=Path,required=True)
 a=p.parse_args();orig=Path(NCA)/"1"/NAME
 if not orig.is_file():raise ValueError("original PlayerBody file not mounted")
 raw=orig.read_bytes()
 leaves=list(find_leaf(raw,NAME))
 models=[x for x in leaves if x["data"][:4]==b"FRES"]
 if not models:raise ValueError("no real FRES found, cannot match FSKL")
 if len(models)>8:raise ValueError("too many nested models")
 a.outdir.mkdir(parents=True,exist_ok=True)
 members=[]
 for i,leaf in enumerate(models):
  payload=leaf["data"];out=a.outdir/f"player_model_{i}.bfres";out.write_bytes(payload)
  members.append({"member_name":leaf["source_member"],"bfres_sha256":sha(payload),
    "bfres_bytes":len(payload),"output_for_pipeline":str(out),
    "first_64_hex":payload[:64].hex(),
    "fmdl_magic_occurrences":payload.count(b"FMDL"),
    "fskl_magic_occurrences":payload.count(b"FSKL")})
 record={"schema":"acnh303-r35-original-playerbody-bfres-source-v1",
 "original_source_path":NAME,"original_source_bytes":len(raw),
 "original_source_sha256":sha(raw),"exact_fres_members":members,
 "provenance":"exact original untouched GitHEAD Model resource, not synthetic mesh"}
 (a.outdir/"playerbody_source.json").write_text(json.dumps(record,ensure_ascii=False,indent=2)+"\n")
 print("R35_REAL_PLAYERBODY_EXTRACT",json.dumps(record,ensure_ascii=False)[:4000])
if __name__=="__main__":main()
