#!/usr/bin/env python3
"""Inspect original furniture containers and first FSHP bound records.
A render-mesh bounding box is not a collision volume or support surface."""
import argparse,json,math,struct,re
from pathlib import Path
from acnh303_furniture_space import tree,gitblob,sha,check,write,NCA
from probe_acnh_babybed_textures import nested_files
from acnh303_round47_cedar_fmat import parse_fres
import acnh_formats as af
STEMS=("FtrBabybed","FtrLampJapan","FtrBearS","FtrMovingboxS","FtrMovingboxM","FtrMovingboxL","FtrTableSquareSimpleS","FtrTableSquareSimpleL")
def main(root,out):
    paths=tree(root);rows=[]
    for stem in STEMS:
        p=NCA+"/1/Model/"+stem+".Nin_NX_NVN.zs"
        raw=(root/p).read_bytes();check(gitblob(raw)==paths[p],"Original blob")
        related=[k for k in paths if Path(k).name.split(".",1)[0] in (stem,stem+"Col",stem+"_Col",stem+"Collision",stem+"_Collision",stem+"Physics",stem+"_Physics")]
        leaves=[]
        for name,b in nested_files(raw,p,af):
            leaf={"name":name,"magic":b[:8].hex(),"bytes":len(b),"sha256":sha(b)}
            if b.startswith(b"FRES"):
                f=parse_fres(b);shapes=[]
                for m in f["models"]:
                    mp=m["model_header_offset"];arr=struct.unpack_from("<Q",b,mp+0x28)[0];n=struct.unpack_from("<H",b,mp+0x6a)[0]
                    for i in range(n):
                        q=arr+i*0x60;check(b[q:q+4]==b"FSHP" and struct.unpack_from("<H",b,q+0x50)[0]==i,"FSHP identity")
                        ptr=struct.unpack_from("<Q",b,q+0x38)[0];check(0<ptr<=len(b)-24,"FSHP bounds pointer")
                        v=struct.unpack_from("<6f",b,ptr);check(all(math.isfinite(x) for x in v),"Bounds float")
                        shapes.append({"modelIndex":m["model_index"],"shapeIndex":i,"materialIndex":struct.unpack_from("<H",b,q+0x52)[0],"boundsPointer":ptr,"firstBoundsSixFloats":v,"rawHex":b[ptr:ptr+24].hex()})
                leaf["fshpBoundsRecords"]=shapes
                leaf["candidateStrings"]=sorted(set(x.decode("ascii") for x in re.findall(rb"[A-Za-z][A-Za-z0-9_]{2,60}\x00",b) if re.search(rb"(?:Collision|Collider|Physics|[Tt]able[Tt]op|[Ss]upport|[Pp]ut[Pp]os)",x)))[:100]
            leaves.append(leaf)
        rows.append({"stem":stem,"path":p,"sourceSha256":sha(raw),"relatedExactStems":related,"leaves":leaves})
    out.mkdir(parents=True,exist_ok=True);write(out/"model-space-samples.json",rows)
    print(json.dumps({"sources":len(rows),"leafMagicCounts":{k:sum(l["magic"][:8]==k for r in rows for l in r["leaves"]) for k in sorted({l["magic"][:8] for r in rows for l in r["leaves"]})},"shapeBounds":sum(len(l.get("fshpBoundsRecords",[])) for r in rows for l in r["leaves"]),"collisionGeometryVerified":False},ensure_ascii=False))
if __name__=="__main__":
    p=argparse.ArgumentParser();p.add_argument("--root",type=Path,default=Path("."));p.add_argument("--out",type=Path,required=True);a=p.parse_args();main(a.root.resolve(),a.out)
