#!/usr/bin/env python3
"""FSKL bone transforms and user-data names, not inferred collision meshes."""
import argparse,math,struct,json
from pathlib import Path
from acnh303_furniture_space import Table,tree,check,sha,gitblob,NCA,write
from probe_acnh_babybed_textures import nested_files
from acnh303_round47_cedar_fmat import parse_fres
import acnh_formats as af
STEMS=("FtrBabybed","FtrLampJapan","FtrBearS","FtrMovingboxS","FtrMovingboxM","FtrMovingboxL","FtrTableSquareSimpleS","FtrTableSquareSimpleL","FtrIronwoodKitchen","FtrKitchenIsland","FtrIceCounter","FtrAltar")
def inspect(b):
    def u16(p):return struct.unpack_from("<H",b,p)[0]
    def u32(p):return struct.unpack_from("<I",b,p)[0]
    def u64(p):return struct.unpack_from("<Q",b,p)[0]
    def name(p):
        n=u16(p);check(0<n<=1024 and p+2+n<len(b) and b[p+2+n]==0,"String")
        return b[p+2:p+2+n].decode("utf-8")
    def dic(p):
        if not p:return []
        check(b[p:p+4] in (b"_DIC",b"\0"*4),"Dictionary magic")
        n=u32(p+4);check(n<=8192 and p+8+16*(n+1)<=len(b),"Dictionary extent")
        return [name(u64(p+8+16*i+8)) for i in range(1,n+1)]
    check((u32(8)>>16)&255==9,"FRES version")
    models=[]
    for m in parse_fres(b)["models"]:
        p=m["model_header_offset"];sk=u64(p+0x18)
        check(b[sk:sk+4]==b"FSKL","Skeleton signature")
        d,a=u64(sk+8),u64(sk+16);keys=dic(d);n=u16(sk+0x38)
        check(n==len(keys) and a+n*0x60<=len(b),"Bone count")
        bones=[]
        for i in range(n):
            q=a+i*0x60;nm=name(u64(q));idx,par,sm,rig,bb,ud=struct.unpack_from("<HhhhhH",b,q+0x28)
            check(nm==keys[i] and idx==i and -1<=par<n and par!=i,"Bone identity")
            flags=u32(q+0x34);scale=struct.unpack_from("<3f",b,q+0x38);rot=struct.unpack_from("<4f",b,q+0x44);pos=struct.unpack_from("<3f",b,q+0x54)
            check(all(math.isfinite(x) for x in scale+rot+pos),"Transform")
            names=dic(u64(q+0x10));check(len(names)==ud,"Bone user data")
            bones.append({"index":i,"name":nm,"parent":par,"flags":hex(flags),"scale":scale,"rotation":rot,"translation":pos,"userDataNames":names})
        for bone in bones:
            visited={bone["index"]};parent=bone["parent"]
            while parent>=0:
                check(parent not in visited,"Bone cycle");visited.add(parent);parent=bones[parent]["parent"]
        models.append({"index":m["model_index"],"bones":bones,"modelUserDataNames":dic(u64(p+0x58))})
    return models
def main(root,out):
    paths=tree(root);it=Table(root,"ItemParam",paths)
    by={it.text(i,"48EF0398"):i for i in range(it.n) if it.text(i,"48EF0398") in STEMS}
    rows=[]
    for stem in STEMS:
        path=NCA+"/1/Model/"+stem+".Nin_NX_NVN.zs";raw=(root/path).read_bytes();check(gitblob(raw)==paths[path],"Original blob")
        fs=[b for _,b in nested_files(raw,path,af) if b.startswith(b"FRES")];check(len(fs)==1,"FRES count")
        models=inspect(fs[0]);i=by[stem];ride=struct.unpack("<f",it.raw(i,"B662662C",4))[0];height=struct.unpack("<f",it.raw(i,"C187C516",4))[0]
        rows.append({"stem":stem,"itemId":it.val(i,"54706054",2),"rideHeight":ride,"height":height,"sourceSha256":sha(raw),"models":models})
    out.mkdir(parents=True,exist_ok=True);write(out/"bone-samples.json",rows)
    print(json.dumps({"models":len(rows),"bones":sum(len(m["bones"]) for r in rows for m in r["models"]),"boneUserData":sum(len(b["userDataNames"]) for r in rows for m in r["models"] for b in m["bones"]),"modelUserData":sum(len(m["modelUserDataNames"]) for r in rows for m in r["models"]),"physicalCollisionVerified":False}))
if __name__=="__main__":
    p=argparse.ArgumentParser();p.add_argument("--root",type=Path,default=Path("."));p.add_argument("--out",type=Path,required=True);a=p.parse_args();main(a.root.resolve(),a.out)
