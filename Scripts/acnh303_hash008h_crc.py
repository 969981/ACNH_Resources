#!/usr/bin/env python3
import argparse,json,itertools,zlib
from pathlib import Path
def run(vocab,out):
    out.mkdir(parents=True,exist_ok=True)
    result=[]
    for g in json.loads(vocab.read_text()):
        expected=int(g["h"],16);n=0;hits=set()
        for p,q,q2,s,t in itertools.product(g["p"],g["q"],[""]+g["q"],g["s"],g["types"]):
            sig=p+q+q2+s+t;n+=1
            if zlib.crc32(sig.encode("utf-8"))==expected:hits.add(sig)
        result.append({"hash":g["h"],"evaluations":n,"exact_crc_matches":sorted(hits),"promoted_original_names":0})
    (out/"crc_search.json").write_text(json.dumps(result,indent=2)+"\n")
    print(json.dumps(result,indent=2))
if __name__=="__main__":
    p=argparse.ArgumentParser();p.add_argument("--vocab",type=Path,default=Path("research/hash008h/crc_vocabulary.json"));p.add_argument("--out",type=Path,required=True);a=p.parse_args();run(a.vocab,a.out)
