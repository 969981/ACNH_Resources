#!/usr/bin/env python3
"""Special remake evidence: raw field joins, native pointer table and source assets.
No upgrade to runtime or GPU coverage without native consumer proof."""
import argparse, collections, hashlib, json, sqlite3, subprocess
from pathlib import Path
from acnh303_remake_model_binding import BCSV,NCA,PREFIX,EXT,SOURCE_HASHES,sha,text,count,require
from acnh303_remake_fmat_bindings import parse_fres,parse_material,dictionary,names,u64,u32,nested_files,valid_bntx_slices,parse_bntx
import acnh_formats as af
ICE=[743,3497,3498,3499,3500,3501,3502,3503,3504,3505]
FENCE=[3402,4357,5207,5208,11711,11712,12894,14756,14758,14759]
LADDER=[13526,13530,13534]
OTHER=[8760]
def write(p,o):p.write_text(json.dumps(o,ensure_ascii=False,indent=2)+"\n",encoding="utf-8")
def git_blob(b):return hashlib.sha1(b"blob "+str(len(b)).encode()+b"\0"+b).hexdigest()
def plan(root):
    item,remake,fg=[BCSV(root,n) for n in ("ItemParam","ItemRemake","FgMainParam")]
    for n,t in (("ItemParam",item),("ItemRemake",remake)):require(sha(t.b)==SOURCE_HASHES[n],n+" hash")
    definitions={remake.val(i,"54706054",w=2):(count(remake.val(i,"B0304B0D",True,w=1)),count(remake.val(i,"0CB402A3",True,w=1))) for i in range(remake.n)}
    records=[]
    for i in range(item.n):
        id=item.val(i,"54706054",w=2);kind=item.string(i,"FC275E86");rid=item.val(i,"CB5EB33F",w=2)
        if id not in ICE+FENCE+LADDER+OTHER and not (kind=="Kind_Bromide" and rid==652):continue
        b,f=definitions[rid]
        records.append({"itemId":id,"remakeId":rid,"kind":kind,"label":text(item,i,"3FEBC642",50),"model":text(item,i,"48EF0398",64),"bodyCount":b,"fabricCount":f,"sourceRow":i})
    require(len(records)==503 and len({r["remakeId"] for r in records})==25,"Special coverage")
    fg_rows=[]
    for i in range(fg.n):
        id=fg.val(i,"B7A46956",w=2)
        if id not in FENCE+LADDER:continue
        fg_rows.append({"itemId":id,"fgId":fg.val(i,"54706054",w=2),"slot":fg.val(i,"64B8FFF8",w=1),"variantName":fg.string(i,"87BF00E8"),"groupName":fg.string(i,"39B5A93D"),"modelName":fg.string(i,"48EF0398"),"sourceRow":i})
    for r in records:
        if r["itemId"] in FENCE+LADDER:
            a=[x for x in fg_rows if x["itemId"]==r["itemId"]]
            require(sorted(x["slot"] for x in a)==list(range(r["bodyCount"])),"Fg slot coverage "+str(r["itemId"]))
    tree={}
    raw=subprocess.check_output(["git","-C",str(root),"ls-tree","-rz","HEAD","--",NCA+"/1"])
    for e in raw.split(b"\0"):
        if not e:continue
        m,p=e.split(b"\t",1);mode,kind,blob=m.decode().split()
        if kind=="blob":tree[p.decode()]=blob
    require(git_blob(fg.b)==tree[NCA+"/1/Bcsv/FgMainParam.bcsv"],"Fg original Git blob")
    model={p[len(PREFIX):-len(EXT)]:p for p in tree if p.startswith(PREFIX) and p.endswith(EXT)}
    selected=set()
    def add(stem):
        if stem in model:selected.add(model[stem]);return model[stem]
        return None
    for r in records:
        if r["itemId"] in ICE:r["basePath"]=add(r["model"])
    for r in fg_rows:
        r["modelPath"]=add(r["modelName"]);r["variantPath"]=add(r["variantName"])
        r["relatedPaths"]=[p for s,p in model.items() if s.startswith(r["modelName"]+"ReBody") or s.startswith(r["variantName"]+"_")]
        selected.update(r["relatedPaths"])
    photos=[]
    for s in ("FtrBromideFrame","FtrBromideFrameWall"):
        for i in range(-1,8):
            name=s if i==-1 else s+"ReBody"+str(i)
            photos.append({"stem":s,"slot":i,"path":add(name)})
    # Inventory candidate paths by explicit prefixes; do not assume same identity.
    candidates={k:[p for s,p in model.items() if s.startswith(k) and not s.startswith("Layout_")] for k in ("ToolSmartphone","Smartphone","LadderKit","FenceVerticalWood","FenceIce","FtrIce")}
    selected.update(p for k in ("ToolSmartphone","Smartphone") for p in candidates[k])
    # Native icon candidates: exact resource name + explicit slots only.
    icons=[]
    for r in records:
        if r["kind"]=="Kind_Bromide":continue
        for b in range(max(1,r["bodyCount"])):
            for f in range(max(1,r["fabricCount"])):
                stem="Layout_FtrIcon_"+r["label"]+"_Remake_"+str(b)+"_"+str(f)
                icons.append({"itemId":r["itemId"],"body":b,"fabric":f,"path":add(stem)})
    # shader inventory (names only; no unverified channel assignment).
    shaders=[{"path":p,"gitBlob":v} for p,v in tree.items() if "park_uber" in p.lower() or "park_uber" in Path(p).name.lower()]
    anchors={}
    for p,need in {"df/0152df00":["fVar32 = (float)uVar8 * 0.125","PTR_s_const_float0_049a7820","FUN_01530c60"],"9f/01af9f50":["0x64b8fff8"],"9d/01af9d70":["0x39b5a93d"],"e3/01afe3e0":["FtrBromideFrameWall","param_1 + 10"],"f9/01adf970":["0x48ef0398","TemplateDummyFurniture1x1"]}.items():
        raw_c=(root/"derived/3.0.3/ghidra12.2/c"/(p+".c")).read_bytes()
        require(all(x in raw_c.decode() for x in need),"C anchor "+p)
        anchors[p]={"sha256":sha(raw_c),"anchors":need}
    return {"items":records,"fgRows":fg_rows,"photos":photos,"icons":icons,"candidatePaths":candidates,"shaderPaths":shaders,"selected":{p:tree[p] for p in sorted(selected)},"fgSource":fg.source(),"anchors":anchors}
def inspect(root,p,h):
    raw=(root/p).read_bytes();require(git_blob(raw)==h,"Original blob "+p)
    out={"path":p,"sha256":sha(raw),"gitBlob":h,"textures":[],"materials":[],"status":"parsed"}
    try:
        leaves=[b for _,b in nested_files(raw,p,af) if b.startswith(b"FRES") or b.startswith(b"BNTX")]
        require(bool(leaves),"No FRES/BNTX")
        for b in leaves:
            for off,bn in ([(0,b)] if b.startswith(b"BNTX") else valid_bntx_slices(b)):
                for t in parse_bntx(bn):out["textures"].append({**t,"bntxSha256":sha(bn),"bntxOffset":off})
            if b.startswith(b"FRES"):
                require((u32(b,8)>>16)&255==9,"Unsupported FRES version")
                a=parse_fres(b)
                for m in a["materials"]:
                    q=m["header_offset"];z=parse_material(b,q);ptr=u64(b,q+0x20)
                    opts={}
                    if ptr:
                        keys=dictionary(b,u64(b,ptr+0x38))
                        vals=names(b,u64(b,ptr+0x30),len(keys))
                        opts=dict(zip(keys,vals))
                    out["materials"].append({"name":m["name"],"modelName":m["model_name"],"textureRefs":z["textureRefs"],"samplers":z["samplers"],"shaderAssign":z["shaderAssign"],"shaderOptions":opts,
                        "parameters":[x for x in m["shader_params"] if x["name"].startswith("const_float") or x["name"].startswith("const_color") or x["name"]=="tex_srt0"]})
    except (ValueError,UnicodeError,IndexError) as e:out.update(status="unsupported",error=str(e))
    return out
def native(root):
    import acnh303_r100_nso_decode as dec
    from capstone import Cs,CS_ARCH_ARM64,CS_MODE_ARM
    elf,nso,mapped,segments,raw,tags,relocs=dec.decode(root);base=0x100000
    table=[]
    for i in range(12):
        a=0x049a7820-base+8*i;r=relocs.get(a)
        if not r or r["type"] not in ("RELR",1027):table.append({"index":i,"status":"unresolved"});continue
        t=r["addend"];s=None
        for v,b in mapped[1:]:
            if v<=t<v+len(b):
                off=t-v;end=b.find(b"\0",off,min(len(b),off+256))
                if end>=0:s=b[off:end].decode("utf-8",errors="replace")
        table.append({"index":i,"pointerVA":hex(a+base),"stringVA":hex(t+base),"name":s})
    require(table[0].get("name")=="const_float0","parameter pointer index0")
    cs=Cs(CS_ARCH_ARM64,CS_MODE_ARM);data=raw(0x0152df00-base,0x2200)
    ins=[{"va":hex(i.address+base),"bytes":i.bytes.hex(),"asm":i.mnemonic+" "+i.op_str} for i in cs.disasm(data,0x0152df00-base)]
    return {"nsoSha256":sha(nso),"parameterTable":table,"instructions":ins,"runtimeVerified":False}
def main(root,out,prepare):
    out.mkdir(parents=True,exist_ok=True);a=plan(root);write(out/"special-plan.json",a)
    if prepare:
        (out/"paths.txt").write_text("\n".join("/"+p for p in a["selected"])+"\n",encoding="utf-8");return
    scans=[inspect(root,p,h) for p,h in a["selected"].items()];by={x["path"]:x for x in scans}
    n=native(root);write(out/"special-native.json",n);write(out/"special-resources.json",scans)
    ice=[]
    for r in a["items"]:
        if r["itemId"] not in ICE:continue
        z=by.get(r.get("basePath"),{});ice.append({"itemId":r["itemId"],"materials":[{"name":m["name"],"textureRefs":[t["texture"] for t in m["textureRefs"]],"const_float0":[p for p in m["parameters"] if p["name"]=="const_float0"]} for m in z.get("materials",[])]})
    report={"definitions":25,"items":503,"fgRows":len(a["fgRows"]),"fgFenceRows":sum(r["itemId"] in FENCE for r in a["fgRows"]),"fgLadderRows":sum(r["itemId"] in LADDER for r in a["fgRows"]),"fgModelPathMatches":sum(bool(r["modelPath"]) for r in a["fgRows"]),"fgVariantPathMatches":sum(bool(r["variantPath"]) for r in a["fgRows"]),"photoPaths":sum(bool(r["path"]) for r in a["photos"]),"iconPaths":sum(bool(r["path"]) for r in a["icons"]),"iconCandidates":len(a["icons"]),"scanStatuses":dict(collections.Counter(r["status"] for r in scans)),"ice":ice,"parameterTable":n["parameterTable"][:2],"shaderPaths":a["shaderPaths"],"runtimeVerified":False,"pixelVerified":False}
    write(out/"audit.json",report);print(json.dumps({k:v for k,v in report.items() if k!="ice"},ensure_ascii=False))
if __name__=="__main__":
    p=argparse.ArgumentParser();p.add_argument("--root",type=Path,default=Path("."));p.add_argument("--out",type=Path,required=True);p.add_argument("--prepare",action="store_true");a=p.parse_args();main(a.root.resolve(),a.out,a.prepare)
