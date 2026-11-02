#!/usr/bin/env python3
"""Create an actually playable skinned PlayerBody GLB using original FMDL mesh,
original 46-bone FSKL node/skin mapping and native FSKA Hermite curves.

Animation visibility uses verified glTF Skin+mesh; 38 of 57 FSKA bones match.
Sample original cubic Hermite tracks at every integer animation frame, use
LINEAR glTF playback BETWEEN sampled frames (explicit, not native exact proof).
"""
from __future__ import annotations
import argparse,bisect,hashlib,json,math,struct
from pathlib import Path
def readglb(path):
    b=path.read_bytes()
    if len(b)<28 or b[:4]!=b"glTF":raise ValueError("no original glTF2 header")
    version,total=struct.unpack_from("<II",b,4)
    if version!=2 or total!=len(b):raise ValueError("glTF length/version mismatch")
    jsize,magic=struct.unpack_from("<II",b,12)
    if magic!=0x4e4f534a or 20+jsize+8>len(b):raise ValueError("GLB JSON chunk invalid")
    g=json.loads(b[20:20+jsize])
    off=20+jsize
    blen,btyp=struct.unpack_from("<II",b,off)
    if btyp!=0x004e4942 or off+8+blen>len(b):raise ValueError("GLB bin chunk absent")
    if len(g.get("buffers",[]))!=1:raise ValueError("only one original GLB embedded buffer supported")
    if g["buffers"][0]["byteLength"]>blen:raise ValueError("GLB buffer underflow")
    return b,g,bytearray(b[off+8:off+8+blen])
def read_model_source(node,source):
    if "matrix" in node:
        m=node["matrix"]
        if len(m)!=16:raise ValueError("non-affine matrix")
        s=[math.sqrt(sum(m[j*4+k]**2 for k in range(3))) for j in range(3)]
        if any(x<1e-8 for x in s):return None  # preserve exact original singular rest-matrix; do not animate this source joint
        r=[[m[j*4+i]/s[j] for j in range(3)] for i in range(3)]
        # 3x3 column-vector quaternion conversion.
        trace=r[0][0]+r[1][1]+r[2][2]
        if trace>0:
            q4=math.sqrt(1+trace)*2
            quat=[(r[2][1]-r[1][2])/q4,(r[0][2]-r[2][0])/q4,(r[1][0]-r[0][1])/q4,q4/4]
        else:
            j=max(range(3),key=lambda i:r[i][i])
            if j==0:
                q4=math.sqrt(1+r[0][0]-r[1][1]-r[2][2])*2
                quat=[q4/4,(r[0][1]+r[1][0])/q4,(r[0][2]+r[2][0])/q4,(r[2][1]-r[1][2])/q4]
            elif j==1:
                q4=math.sqrt(1+r[1][1]-r[0][0]-r[2][2])*2
                quat=[(r[0][1]+r[1][0])/q4,q4/4,(r[1][2]+r[2][1])/q4,(r[0][2]-r[2][0])/q4]
            else:
                q4=math.sqrt(1+r[2][2]-r[0][0]-r[1][1])*2
                quat=[(r[0][2]+r[2][0])/q4,(r[1][2]+r[2][1])/q4,q4/4,(r[1][0]-r[0][1])/q4]
        node.pop("matrix")
        node["translation"]=[m[12],m[13],m[14]]
        node["rotation"]=quat
        node["scale"]=s
    return {p:list(node.get(p,default)) for p,default in
      (("translation",(0.,0.,0.)),("scale",(1.,1.,1.)),("rotation",(0.,0.,0.,1.)))}
def asvec(v,default):
    if v is None:return list(default)
    if isinstance(v,str):
        t=[float(x) for x in v.split(";") if x!=""]
    elif isinstance(v,list):t=[float(x) for x in v]
    else:raise ValueError("invalid BFRES library vector")
    return (t+[0.]*(len(default)-len(t)))[:len(default)]
def quat_xyz_deg(deg):
    x,y,z=[math.radians(v)/2 for v in deg[:3]]
    cx,cy,cz=math.cos(x),math.cos(y),math.cos(z)
    sx,sy,sz=math.sin(x),math.sin(y),math.sin(z)
    q=[sx*cy*cz-cx*sy*sz,cx*sy*cz+sx*cy*sz,
       cx*cy*sz-sx*sy*cz,cx*cy*cz+sx*sy*sz]
    n=math.sqrt(sum(v*v for v in q))
    return [v/n for v in q]
def sample_hermite(c,frame,default):
    seq=sorted((float(t),v) for t,v in c["KeyFrames"].items())
    if not seq:return default
    times=[p[0] for p in seq]
    if frame<=times[0]:return float(seq[0][1]["Value"])
    if frame>=times[-1]:return float(seq[-1][1]["Value"])
    idx=bisect.bisect_right(times,frame)-1
    t0,a=seq[idx];t1,b=seq[idx+1];duration=t1-t0
    if duration<=0:raise ValueError("repeated source key frame")
    t=(frame-t0)/duration
    h00=2*t**3-3*t*t+1
    h10=t**3-2*t*t+t
    h01=-2*t**3+3*t*t
    h11=t**3-t*t
    return (h00*float(a["Value"])+h10*duration*float(a["Out"])+
           h01*float(b["Value"])+h11*duration*float(b["In"]))
def append_accessor(g,buffer,raw,comps,minimum=None,maximum=None):
    while len(buffer)%4:buffer.append(0)
    off=len(buffer);buffer.extend(raw)
    views=g.setdefault("bufferViews",[])
    access=g.setdefault("accessors",[])
    bv=len(views);views.append({"buffer":0,"byteOffset":off,"byteLength":len(raw)})
    ai=len(access)
    acc={"bufferView":bv,"byteOffset":0,"componentType":5126,
         "count":len(raw)//(4*comps),"type":{1:"SCALAR",3:"VEC3",4:"VEC4"}[comps]}
    if minimum is not None:acc["min"]=[minimum];acc["max"]=[maximum]
    access.append(acc)
    return ai
def from_hermite_curve_file(g,buffer,fska,allowed_nodes,fps):
    if len(g.get("skins",[]))!=1:raise ValueError("real FMDL mesh must have one actual skin")
    skin=g["skins"][0];joints=set(skin["joints"])
    nodes=g["nodes"];nmap={}
    for idx,n in enumerate(nodes):
        name=n.get("name")
        if name in allowed_nodes and idx in joints:
            if name in nmap:raise ValueError("duplicate animated skin node")
            nmap[name]=idx
    if len(nmap)!=46:raise ValueError("source 46 FSKL bones missing from actual mesh skin")
    anims=[]
    metadata=[]
    for a in fska["animations"]:
        if a.get("FlagsRotate") not in ("EulerXYZ","Quaternion"):
            raise ValueError("source rotation type unsupported: "+str(a.get("FlagsRotate")))
        total=a["FrameCount"]
        if not 1<=total<=2000:raise ValueError("animation frame bound")
        frames=list(range(total+1))
        times=[f/fps for f in frames]
        times_raw=struct.pack("<"+"f"*len(times),*times)
        time_acc=append_accessor(g,buffer,times_raw,1,min(times),max(times))
        channels=[];samplers=[];used_bones=set();targets_used=[]
        for ba in a["BoneAnims"]:
            name=ba["Name"]
            if name not in nmap:continue
            bone_node=nmap[name]
            node=nodes[bone_node]
            rest=read_model_source(node,None)
            if rest is None:continue  # exact GLB skin joint remains, but no invented TRS for singular original
            base=ba.get("BaseData",{})
            original={
              "translation":asvec(base.get("Translate"),rest["translation"]),
              "scale":asvec(base.get("Scale"),rest["scale"]),
              "rotation":asvec(base.get("Rotate"),(0.,0.,0.))}
            cur={c["Target"]:c for c in ba["Curves"]}
            specs=[
             ("translation",["PositionX","PositionY","PositionZ"],3),
             ("scale",["ScaleX","ScaleY","ScaleZ"],3),
             ("rotation",["RotateX","RotateY","RotateZ","RotateW"],4)]
            for path,targets,components in specs:
                if not any(t in cur for t in targets):continue
                if path=="rotation":
                    if a["FlagsRotate"]=="EulerXYZ":
                        samples=[]
                        for f in frames:
                            val=[sample_hermite(cur[t],f,original["rotation"][i]) if t in cur else original["rotation"][i] for i,t in enumerate(targets[:3])]
                            samples.append(quat_xyz_deg(val))
                    else:
                        samples=[]
                        for f in frames:
                            v=[sample_hermite(cur[t],f,rest["rotation"][i]) if t in cur else rest["rotation"][i] for i,t in enumerate(targets)]
                            norm=math.sqrt(sum(z*z for z in v))
                            if norm<1e-9:raise ValueError("invalid real quaternion")
                            samples.append([z/norm for z in v])
                    for i in range(1,len(samples)):
                        if sum(x*y for x,y in zip(samples[i],samples[i-1]))<0:
                            samples[i]=[-x for x in samples[i]]
                    dim=4
                else:
                    vals=original[path]
                    samples=[[sample_hermite(cur[t],f,vals[i]) if t in cur else vals[i]
                         for i,t in enumerate(targets)] for f in frames]
                    dim=3
                flattened=[v for sample in samples for v in sample]
                if not all(math.isfinite(x) for x in flattened):raise ValueError("nonfinite source animation curves")
                payload=struct.pack("<"+"f"*len(flattened),*flattened)
                val_acc=append_accessor(g,buffer,payload,dim)
                sid=len(samplers)
                samplers.append({"input":time_acc,"output":val_acc,"interpolation":"LINEAR"})
                channels.append({"sampler":sid,"target":{"node":bone_node,"path":path}})
                used_bones.add(name);targets_used.append(path)
        if not channels:raise ValueError("no matched bone curves for actual PlayerBody mesh "+a["Name"])
        anims.append({"name":a["Name"],"channels":channels,"samplers":samplers,
          "extras":{"originalFSKAName":a["Name"],"sourceFrames":total,
             "fps_assumption":fps,"sampledAtEveryIntegerSourceFrame":True,
             "nativeCubicInterpolationBetweenFramesUnverified":True,
             "matchedBoneCountWithActualAnimatedCurve":len(used_bones),
             "fullAnimationSkeletonCoverage":False}})
        metadata.append({"name":a["Name"],"channels":len(channels),
            "bones_with_animated_channels":len(used_bones),
            "paths":dict((p,targets_used.count(p)) for p in sorted(set(targets_used))),
            "frames":total,"glTF_duration_seconds":times[-1]})
    g.setdefault("animations",[]).extend(anims)
    g["buffers"][0]["byteLength"]=len(buffer)
    return metadata
def pack_glb(g,binary):
    j=json.dumps(g,ensure_ascii=False,separators=(",",":"),allow_nan=False).encode("utf8")
    while len(j)%4:j+=b" "
    while len(binary)%4:binary.append(0)
    total=12+8+len(j)+8+len(binary)
    b=b"glTF"+struct.pack("<II",2,total)
    b+=struct.pack("<II",len(j),0x4e4f534a)+j
    b+=struct.pack("<II",len(binary),0x004e4942)+bytes(binary)
    if len(b)!=total:raise ValueError("glTF packed length mismatch")
    return b
def main():
 p=argparse.ArgumentParser()
 p.add_argument("--manifest",type=Path,required=True)
 p.add_argument("--hermite",type=Path,required=True)
 p.add_argument("--match",type=Path,required=True)
 p.add_argument("--out-glb",type=Path,required=True)
 p.add_argument("--out-report",type=Path,required=True)
 p.add_argument("--fps",type=float,default=30.)
 a=p.parse_args()
 if not 1<=a.fps<=120:raise ValueError("sampling FPS invalid")
 hermite=json.loads(a.hermite.read_text("utf8"))
 match=json.loads(a.match.read_text("utf8"))
 if len(hermite["animations"])!=3 or match["animation_unique_bones"]!=57:
    raise ValueError("original animation provenance absent")
 entries=json.loads(a.manifest.read_text("utf8"))
 glbs=[o for e in entries for o in e["validated_outputs"] if o["validation"]["type"]=="glb"]
 if len(glbs)!=1:raise ValueError("actual PlayerBody converter GLB output missing")
 pglb=Path(glbs[0]["path"]);original,model,binbuf=readglb(pglb)
 if hashlib.sha256(original).hexdigest()!=glbs[0]["sha256"]:raise ValueError("original mesh GLB SHA mismatch")
 skeleton=match["actual_matches"][0]
 nodes={n["name"] for n in skeleton["source_bone_hierarchy"]}
 infos=from_hermite_curve_file(model,binbuf,hermite,nodes,a.fps)
 new=pack_glb(model,binbuf)
 a.out_glb.parent.mkdir(parents=True,exist_ok=True);a.out_glb.write_bytes(new)
 reread,check,_=readglb(a.out_glb)
 if len(check["animations"])<3 or len(check["skins"])!=1 or len(check["meshes"])<1:
    raise ValueError("animated real-skinned GLB failed post serialization")
 for a2 in check["animations"]:
    for c in a2["channels"]:
        if c["target"]["node"] not in check["skins"][0]["joints"]:
            raise ValueError("animation targets non-skin bone; invalid binding")
 report={"schema":"acnh303-r35-real-playerbody-skinned-mesh-with-FSKA-frame-sampled-animations-v1",
 "original_mesh_source_glb_sha256":hashlib.sha256(original).hexdigest(),
 "original_fska_hermite_sha256":hashlib.sha256(a.hermite.read_bytes()).hexdigest(),
 "skinned_meshes":len(model["meshes"]),"skins":len(model["skins"]),
 "joint_count":len(model["skins"][0]["joints"]),
 "source_animation_unique_bones":57,"source_bones_matched_in_playerbody":38,
 "animated_glb_path":str(a.out_glb),"animated_glb_bytes":len(new),
 "animated_glb_sha256":hashlib.sha256(new).hexdigest(),
 "animations":infos,
 "frame_rate_assumption":a.fps,
 "validation":"genuine original FMDL converted mesh, real Skin/46 FSKL joints, FSKA Helper cubic Hermite keyframe values sampled at integer frames; all glTF animation target nodes are original glTF skin joints",
 "limitations":"View/playback appearance not yet pixel-diffed against original game. 19 FSKA bones absent from this PlayerBody skeleton; their tracks are intentionally not invented. LINEAR glTF interpolation between integer-frame samples approximates native cubic; 30fps is an export assumption."}
 a.out_report.parent.mkdir(parents=True,exist_ok=True)
 a.out_report.write_text(json.dumps(report,indent=2,ensure_ascii=False,sort_keys=True)+"\n")
 print("R35_PLAYER_ANIMATED_GLTF",json.dumps({k:v for k,v in report.items() if k not in ("validation","limitations")},ensure_ascii=False))
if __name__=="__main__":main()
