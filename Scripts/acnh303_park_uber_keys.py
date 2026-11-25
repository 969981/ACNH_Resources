#!/usr/bin/env python3
"""FSHA v8 option/program key audit, original ACNH bytes.
Format hints: KillzXGaming/ShaderLibrary BfshaLoader.cs blob faf5f6ea6d748bfbf79a007f67853500506de95f,
Structs.cs blob 9a9aeb10d8f425a96c8097bcc8acefc2df0e356c,
ShaderOptionSearcher.cs blob f00c14a6b7bf041447a47b4130bfd581f2c325c9.
Match known FMAT choices; never equate default or first candidate with actual runtime selection.
"""
import argparse,collections,hashlib,json,struct
from pathlib import Path
from acnh303_media_l3 import NCA,find_leaf
from acnh303_round47_cedar_fmat import parse_fres
from acnh303_remake_fmat_bindings import parse_material
SRC=NCA+"/1/"
EXPECTED="b290dd85bf7ca23bc5b969a79e520048f5bde1af"
def check(ok,msg):
    if not ok:raise ValueError(msg)
def sha(b):return hashlib.sha256(b).hexdigest()
def write(p,o):p.write_text(json.dumps(o,ensure_ascii=False,indent=2)+"\n",encoding="utf-8")
class Bin:
    def __init__(self,b):self.b=b
    def get(self,p,n):
        check(0<=p<=len(self.b) and 0<=n<=len(self.b)-p,"Range "+hex(p)+"/"+hex(n));return self.b[p:p+n]
    def u8(self,p):return self.get(p,1)[0]
    def u16(self,p):return struct.unpack("<H",self.get(p,2))[0]
    def u32(self,p):return struct.unpack("<I",self.get(p,4))[0]
    def u64(self,p):return struct.unpack("<Q",self.get(p,8))[0]
    def str(self,p):
        if not p:return None
        n=self.u16(p);check(n<=1024,"String length "+hex(p));raw=self.get(p+2,n);check(self.u8(p+2+n)==0,"String terminator");return raw.decode("utf-8")
    def dic(self,p):
        if not p:return []
        sig=self.get(p,4);check(sig in (b"\0"*4,b"_DIC"),"Dictionary signature "+hex(p))
        n=self.u32(p+4);check(n<=8192,"Dictionary count")
        keys=[]
        for i in range(n+1):
            q=p+8+16*i;_,l,r,s=struct.unpack("<IHHQ",self.get(q,16))
            check(l<=n and r<=n,"Dictionary child")
            if i:keys.append(self.str(s))
        check(all(keys) and len(set(keys))==n,"Dictionary keys");return keys
def model(b,p,name):
    check(b.str(b.u64(p))==name,"Model name")
    stat,dy,prog=b.u16(p+0xe4),b.u16(p+0xe6),b.u16(p+0xe8)
    sk,dk=b.u8(p+0xea),b.u8(p+0xeb);k=sk+dk
    check(0<prog<=16384 and 0<k<=128,"Model counts")
    options=[]
    for kind,arr,dic,n in [("static",b.u64(p+8),b.u64(p+16),stat),("dynamic",b.u64(p+24),b.u64(p+32),dy)]:
        keys=b.dic(dic);check(len(keys)==n,"Option count")
        for i,name0 in enumerate(keys):
            q=arr+i*40;name1=b.str(b.u64(q));check(name0==name1,"Option identity")
            choices=b.dic(b.u64(q+8));cnt=b.u8(q+24);default=b.u8(q+25);ko=b.u8(q+29);idx=b.u8(q+30);shift=b.u8(q+31);mask=b.u32(q+32)
            check(cnt==len(choices) and default<cnt and shift<32,"Choice count/default "+name0)
            valueptr=b.u64(q+16);values=[b.u32(valueptr+j*4) for j in range(cnt)] if valueptr else None
            word=idx if kind=="static" else sk+idx-ko
            check(0<=word<k and mask and mask>>shift>=cnt-1,"Key field "+name0)
            options.append(dict(kind=kind,name=name0,offset=q,choices=choices,choiceValueArrayOffset=valueptr,values=values,default=default,word=word,rawWord=idx,keyOffset=ko,shift=shift,mask=mask))
    # Disjoint masks must hold if options occupy one shared key tuple.
    masks=[0]*k
    for o in options:
        check(not masks[o["word"]]&o["mask"],"Overlapping bitfield "+o["name"]);masks[o["word"]]|=o["mask"]
    pa,ka,bn=b.u64(p+0x88),b.u64(p+0x90),b.u64(p+0xa8)
    check(b.get(bn,4)==b"BNSH","Embedded BNSH")
    size=b.u32(bn+28); bb=Bin(b.get(bn,size))
    g=bb.u16(22)+16;vc=bb.u32(g+12);va=bb.u64(g+16)
    samplers=b.dic(b.u64(p+0x40));check(len(samplers)==b.u8(p+0xed),"Sampler count")
    programs=[];bad=[]
    for i in range(prog):
        q=pa+i*64;v=b.u64(q+32);parent=b.u64(q+40)
        check(parent==p,"Program parent "+str(i))
        delta=v-bn-va;check(delta>=0 and delta%64==0 and delta//64<vc,"Variation link")
        vi=delta//64;vp=v-bn;bp=bb.u64(vp+16);check(bb.u64(bp+0x70)==vp,"BNSH parent")
        key=[b.u32(ka+(i*k+j)*4) for j in range(k)]
        for o in options:
            val=(key[o["word"]]&o["mask"])>>o["shift"]
            if val>=len(o["choices"]):bad.append([i,o["name"],val])
        ns=b.u16(q+54);check(ns==len(samplers),"Program sampler count")
        sp=b.u64(q)
        sl=[{"name":n,"rawLocations":list(struct.unpack("<6i",b.get(sp+j*24,24)))} for j,n in enumerate(samplers)]
        programs.append({"index":i,"offset":q,"variation":vi,"variationOffset":v,"binaryProgramOffset":bp,"key":key,"samplerLocations":sl})
    check(not bad,"Invalid key choice "+str(bad[:5]))
    return {"name":name,"offset":p,"staticCount":stat,"dynamicCount":dy,"staticWords":sk,"dynamicWords":dk,"options":options,"programs":programs,"bnshOffset":bn,"variationCount":vc,"samplers":samplers,"keyTableOffset":ka,"programArrayOffset":pa,"defaultProgram":struct.unpack("<i",b.get(p+0xe0,4))[0]}
def material_options(b,p):
    ptr=b.u64(p+0x20)
    if not ptr:return {}
    keys=b.dic(b.u64(ptr+0x38));arr=b.u64(ptr+0x30)
    return {key:b.str(b.u64(arr+8*i)) for i,key in enumerate(keys)}
def match(m,provided):
    known={o["name"]:o for o in m["options"]}
    invalid={n:v for n,v in provided.items() if n in known and v not in known[n]["choices"]}
    unknown=sorted(set(provided)-set(known))
    missing=[o["name"] for o in m["options"] if o["name"] not in provided]
    if invalid:return {"invalidChoices":invalid,"unknownOptions":unknown,"missingOptions":missing,"candidates":[]}
    wanted=[(o,o["choices"].index(provided[o["name"]])) for o in m["options"] if o["name"] in provided]
    candidates=[p for p in m["programs"] if all((p["key"][o["word"]]&o["mask"])>>o["shift"]==v for o,v in wanted)]
    default=[p["index"] for p in candidates if all((p["key"][o["word"]]&o["mask"])>>o["shift"]==o["default"] for o in m["options"] if o["name"] not in provided)]
    varying={}
    for o in m["options"]:
        if o["name"] in provided:continue
        choices=sorted({o["choices"][(p["key"][o["word"]]&o["mask"])>>o["shift"]] for p in candidates})
        if len(choices)>1:varying[o["name"]]=choices
    return {"providedMatches":len(wanted),"invalidChoices":invalid,"unknownOptions":unknown,"missingOptions":missing,"varyingMissingOptions":varying,"candidates":[p["index"] for p in candidates],"defaultAssumptionCandidates":default,"runtimeSelectionVerified":False}
def geometry(f,parsed):
    result=[]
    for model0 in parsed["models"]:
        p=model0["model_header_offset"];arr=f.u64(p+0x28);n=f.u16(p+0x6a)
        keys=f.dic(f.u64(p+0x30));check(len(keys)==n,"Shape dict count")
        for i in range(n):
            q=arr+i*0x60
            check(f.get(q,4)==b"FSHP" and f.u16(q+0x50)==i,"Shape identity")
            name=f.str(f.u64(q+8));check(name==keys[i],"Shape dict identity")
            mat=f.u16(q+0x52);weight=f.u8(q+0x5a)
            check(mat<len(model0["materials"]) and weight<=8,"Shape material/weight")
            result.append({"name":name,"modelIndex":model0["model_index"],"material":model0["materials"][mat]["name"],"materialIndex":mat,"shapeIndex":i,"vertexSkinCount":weight,"shapeOffset":q})
    return result
def select_pass(m,match,weight,pass_name):
    o={o["name"]:o for o in m["options"]}
    wanted={"gsys_weight":str(weight),"gsys_assign_type":pass_name,"gsys_index_stream_format":"0","system_id":"0"}
    return [i for i in match["candidates"] if all((m["programs"][i]["key"][o[k]["word"]]&o[k]["mask"])>>o[k]["shift"]==o[k]["choices"].index(v) for k,v in wanted.items())]
def stages(b,m,prog,out):
    bb=Bin(b.get(m["bnshOffset"],b.u32(m["bnshOffset"]+28)))
    p=prog["binaryProgramOffset"];rows=[]
    for j,name in enumerate(("vertex","hull","domain","geometry","fragment","compute")):
        q=bb.u64(p+8+j*8)
        if not q:continue
        cp,bp=bb.u64(q+8),bb.u64(q+16);bs,cs=bb.u32(q+24),bb.u32(q+28)
        check(cp and bp and bs and cs,"Stage data extent")
        code=bb.get(bp,bs);control=bb.get(cp,cs)
        key=sha(code);dst=out/"gpu-code";dst.mkdir(exist_ok=True)
        for data,ext in ((code,".bin"),(control,".control.bin")):
            fn=dst/(sha(data)+ext)
            if not fn.exists():fn.write_bytes(data)
        rows.append({"stage":name,"stageRecordOffset":q,"byteCodeOffset":bp,"byteCodeSize":bs,"byteCodeSha256":key,"controlOffset":cp,"controlSize":cs,"controlSha256":sha(control),"first64Hex":code[:64].hex()})
    return rows
def main(root,out):
    raw=(root/SRC/"Shader/Park_UBER_All.Nin_NX_NVN.szs").read_bytes()
    check(hashlib.sha1(b"blob "+str(len(raw)).encode()+b"\0"+raw).hexdigest()==EXPECTED,"Original shader SHA")
    fs=[x["data"] for x in find_leaf(raw,"shader") if x["data"].startswith(b"FSHA")]
    check(len(fs)==1,"FSHA");b=Bin(fs[0]);check(b.u16(10)==8 and b.u32(28)==len(b.b),"FSHA v8")
    names=b.dic(b.u64(0x50));arr=b.u64(0x48);check(len(names)==2,"Model count")
    models=[model(b,arr+i*0x100,n) for i,n in enumerate(names)]
    out.mkdir(parents=True,exist_ok=True)
    write(out/"models.json",models)
    results=[]
    for stem in ("FtrBabybed","FtrLampJapan","FtrBearS","FtrIceTableL"):
        path=root/SRC/("Model/"+stem+".Nin_NX_NVN.zs");original=path.read_bytes()
        leaves=[x["data"] for x in find_leaf(original,stem) if x["data"].startswith(b"FRES")];check(len(leaves)==1,"Model FRES")
        f=Bin(leaves[0])
        parsed=parse_fres(f.b);shapes=geometry(f,parsed)
        for mat in parsed["materials"]:
            p=mat["header_offset"];a=parse_material(f.b,p);s=a["shaderAssign"]
            if not s:continue
            opts=material_options(f,p);m=next((m for m in models if m["name"]==s["shaderModel"]),None)
            r={"asset":stem,"sourceSha256":sha(original),"material":mat["name"],"shaderModel":s["shaderModel"],"options":opts,"shaderAssign":s}
            r["match"]=match(m,opts) if m else {"status":"unknown_shader_model"}
            r["shapes"]=[x for x in shapes if x["material"]==mat["name"] and x["modelIndex"]==mat["model_array_index"]]
            r["materialPassCandidates"]=[]
            if m:
                for weight in sorted({x["vertexSkinCount"] for x in r["shapes"]}):
                    ids=select_pass(m,r["match"],weight,"gsys_assign_material")
                    r["materialPassCandidates"].append({"vertexSkinCount":weight,"programs":[{"index":i,"variation":m["programs"][i]["variation"],"samplerLocations":m["programs"][i]["samplerLocations"],"stages":stages(b,m,m["programs"][i],out)} for i in ids],"condition":"FSHP vertexSkinCount equals gsys_weight; requested material pass, runtime producer not yet verified"})
            results.append(r)
    write(out/"matches.json",results)
    summary={"fshaSha256":sha(b.b),"models":[{k:v for k,v in m.items() if k not in ("options","programs","samplers")}|{"programCount":len(m["programs"])} for m in models],"materials":[{"asset":r["asset"],"material":r["material"],"shaderModel":r["shaderModel"],"providedMatches":r["match"].get("providedMatches"),"candidateCount":len(r["match"].get("candidates",[])),"defaultCandidates":r["match"].get("defaultAssumptionCandidates"),"invalid":r["match"].get("invalidChoices"),"varyingMissing":r["match"].get("varyingMissingOptions"),"shapeWeights":[x["vertexSkinCount"] for x in r["shapes"]],"materialPassPrograms":[{"weight":x["vertexSkinCount"],"programs":[p["index"] for p in x["programs"]]} for x in r["materialPassCandidates"]]} for r in results],"runtimeSelectionVerified":False}
    write(out/"audit.json",summary);print(json.dumps(summary,ensure_ascii=False))
if __name__=="__main__":
    p=argparse.ArgumentParser();p.add_argument("--root",type=Path,default=Path("."));p.add_argument("--out",type=Path,required=True);a=p.parse_args();main(a.root.resolve(),a.out)
