#!/usr/bin/env python3
"""Original ACNH v9 FMAT source binding and 2x2 texture source differential.
Reference layout: BfresLibrary 65c005275deed1e085069e72fea523247f955b87
Switch/Model/MaterialParser.cs, SamplerSwitch.cs, Shared/Common/ResDict.cs,
Shared/Models/Material/ShaderAssign.cs. No GPU or live runtime claim.
"""
import argparse, hashlib, json, math, struct
from pathlib import Path
import acnh_formats as af
from acnh303_round47_cedar_fmat import parse_fres, nw_name, u64, u32, bounds
from probe_acnh_babybed_textures import NCA,nested_files,valid_bntx_slices,parse_bntx,babybed_sources

def require(x,msg):
    if not x:raise ValueError(msg)
def sha(b):return hashlib.sha256(b).hexdigest()
def names(data,p,n):
    if not n:return []
    require(p!=0,"Null name array");bounds(data,p,n*8,"Name array")
    return [nw_name(data,u64(data,p+8*i)) for i in range(n)]
def dictionary(data,p):
    if not p:return []
    bounds(data,p,8,"Dictionary header");n=u32(data,p+4)
    require(n<=1024,"Dictionary count")
    bounds(data,p+8,(n+1)*16,"Dictionary nodes")
    out=[]
    for i in range(1,n+1):
        q=p+8+16*i
        ref,left,right,ptr=struct.unpack_from("<IHHQ",data,q)
        require(left<=n and right<=n,"Dictionary link bounds")
        name=nw_name(data,ptr);require(bool(name),"Dictionary empty name")
        out.append(name)
    require(len(set(out))==n,"Duplicate dictionary names")
    return out
def assignment(data,p):
    if not p:return None
    bounds(data,p,0x48,"ShaderAssign")
    keys=dictionary(data,u64(data,p+0x28))
    values=names(data,u64(data,p+0x20),len(keys))
    require(len(keys)==data[p+0x45],"ShaderAssign sampler count")
    return {"shaderArchive":nw_name(data,u64(data,p)),"shaderModel":nw_name(data,u64(data,p+8)),
      "samplerAssigns":[{"shaderSampler":k,"materialSampler":v} for k,v in zip(keys,values)]}
def parse_material(data,p):
    bounds(data,p,0xa8,"FMAT")
    require(data[p:p+4]==b"FMAT","FMAT magic")
    count_a,count_b=data[p+0x9c:p+0x9e]
    # v9 reader/writer in reference differ in count order. Native 01664B40
    # explicitly uses descriptor +0x9d for texture count. Check equal counts
    # and dictionary count for this sample; refuse other layouts.
    keys=dictionary(data,u64(data,p+0x48))
    require(count_a==count_b==len(keys),"Ambiguous sampler/texture count")
    n=count_b;tex=names(data,u64(data,p+0x30),n)
    sam=u64(data,p+0x40)
    if n:bounds(data,sam,n*32,"Sampler array")
    slots=[]
    for i,(k,t) in enumerate(zip(keys,tex)):
        q=sam+i*32;raw=data[q:q+32]
        u,v,w,cmp,border,aniso,flags,mn,mx,bias=struct.unpack_from("<6BH3f",raw)
        require(all(math.isfinite(z) for z in (mn,mx,bias)),"Sampler nonfinite")
        slots.append({"index":i,"sampler":k,"texture":t,"textureNamePointer":u64(data,u64(data,p+0x30)+8*i),
         "samplerOffset":q,"wrapRaw":[u,v,w],"compareRaw":cmp,"borderRaw":border,"anisotropyRaw":aniso,
         "filterFlags":flags,"minLod":mn,"maxLod":mx,"lodBias":bias,"rawHex":raw.hex()})
    a=assignment(data,u64(data,p+0x20))
    # Shader assignment values are material sampler names; unused aliases remain explicit.
    if a:
        for x in a["samplerAssigns"]:
            x["materialSlotIndices"]=[s["index"] for s in slots if s["sampler"]==x["materialSampler"]]
    return {"name":nw_name(data,u64(data,p+8)),"offset":p,"countBytes":[count_a,count_b],"slots":slots,"shaderAssign":a}
def build(root,out):
    old=json.loads((root/"assets/evidence/babybed_bntx_native.json").read_text("utf-8"))
    expected={r["source_path"]:r for r in old["sources"]}
    paths=babybed_sources();sources={}
    for path in paths:
        raw=(root/NCA/"1"/path).read_bytes()
        require(sha(raw)==expected[path]["source_sha256"],"Original source drift "+path)
        leaves=[b for _,b in nested_files(raw,path,af) if b.startswith(b"FRES")]
        require(len(leaves)==1,"FRES leaf count "+path)
        b=leaves[0];require((u32(b,8)>>16)&255==9,"Not v9 FRES")
        tex={}
        for off,bn in valid_bntx_slices(b):
            for t in parse_bntx(bn):
                name=t["name"];require(name not in tex,"Duplicate BRTI name")
                tex[name]={**t,"bntxSha256":sha(bn),"bntxOffset":off}
        require(bool(tex),"No texture data "+path)
        require(set(tex)=={t["name"] for n in expected[path]["bntx"] for t in n["textures"]},"Prior BRTI parity")
        sources[Path(path).name.split(".")[0]]={"sourcePath":path,"sha256":sha(raw),"fresSha256":sha(b),"textures":tex}
        if path==paths[0]:base=b
    parsed=parse_fres(base)
    mats=[parse_material(base,m["header_offset"]) for m in parsed["materials"]]
    require({m["name"] for m in mats}=={"mBody","mReBody","mReFabric"},"Unexpected Babybed materials")
    def binding(body,fabric):
        result=[]
        for m in mats:
            source="FtrBabybed"+("ReBody"+str(body) if m["name"]=="mReBody" else "ReFabric"+str(fabric) if m["name"]=="mReFabric" else "")
            for s in m["slots"]:
                name=s["texture"]
                # Baseline then override by exact name, per native 01664B40.
                # Missing in both => unresolved external texture, never fabricated.
                base_tex=sources["FtrBabybed"]["textures"].get(name)
                override=sources[source]["textures"].get(name) if source!="FtrBabybed" else None
                selected=override or base_tex
                result.append({"material":m["name"],"slot":s["index"],"sampler":s["sampler"],"texture":name,
                  "source":source if override else "FtrBabybed" if base_tex else None,
                  "bntxSha256":selected["bntxSha256"] if selected else None,
                  "status":"exact_override_name" if override else "base_retained" if base_tex else "unresolved"})
        return result
    combos={f"{b}_{f}":binding(b,f) for b in range(8) for f in range(7)}
    controls={k:combos[k] for k in ("0_0","1_0","0_1","1_1")}
    def diff(a,b):
        require(len(a)==len(b),"Slot count drift")
        return [dict(material=x["material"],slot=x["slot"],texture=x["texture"],before=x["source"],after=y["source"])
            for x,y in zip(a,b) if (x["source"],x["bntxSha256"])!=(y["source"],y["bntxSha256"])]
    ds={k:diff(controls["0_0"],v) for k,v in controls.items() if k!="0_0"}
    require(ds["1_0"] and all(x["material"]=="mReBody" for x in ds["1_0"]),"Body isolation")
    require(ds["0_1"] and all(x["material"]=="mReFabric" for x in ds["0_1"]),"Fabric isolation")
    require(len(ds["1_1"])==len(ds["1_0"])+len(ds["0_1"]),"Combined isolation")
    unresolved=[x for x in controls["0_0"] if x["status"]=="unresolved"]
    report={"schema":"acnh303-babybed-fmat-binding-v1","sources":sources,"materials":mats,"controlCombinations":controls,
        "sourceDifferentials":ds,"all56Combinations":combos,"unresolvedBaseSlots":unresolved,
        "sourceNameMappingVerified":True,"runtimeBindingVerified":False,"pixelRenderVerified":False,
        "limitations":["BNTX container hashes are not individual texture payload hashes","equal texture/sampler counts only","shader assignments are source dictionary pairs, not GPU binding slots","static native-rule replay; no live runtime execution"]}
    out.mkdir(parents=True,exist_ok=True)
    (out/"babybed-fmat-bindings.json").write_text(json.dumps(report,ensure_ascii=False,indent=2)+"\n",encoding="utf-8")
    print(json.dumps({"materials":[{"name":m["name"],"slots":m["slots"],"shaderAssign":m["shaderAssign"]} for m in mats],"sourceDiffCounts":{k:len(v) for k,v in ds.items()},"unresolved":unresolved,"combos":len(combos)},ensure_ascii=False))
if __name__=="__main__":
    p=argparse.ArgumentParser();p.add_argument("--root",type=Path,default=Path("."));p.add_argument("--out",type=Path,required=True);a=p.parse_args();build(a.root.resolve(),a.out)
