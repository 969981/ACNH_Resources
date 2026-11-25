#!/usr/bin/env python3
"""Audit original ItemParam/ItemRemake against the committed Model tree.

Static consumer evidence only. Never identify PNGs as native renders, assume
all Cartesian products selectable, or use catalog variant ordinal as a word.
"""
import argparse, collections, csv, hashlib, json, re, struct, subprocess
from pathlib import Path
NCA="e10617820db06889e1638499478da0de_NCA"
PREFIX=NCA+"/1/Model/"
EXT=".Nin_NX_NVN.zs"
SOURCE_HASHES={"ItemParam":"9f31230158ab9ace881fe6e5c64579e206f5318646d8d77d8ac7c197abed3609",
"ItemRemake":"2de2e462e8d62ff630d8b242b7d96ebb2e1b3451c1e9add813e4bd23ae528697"}
ANCHORS={
 "e3/01afe3e0":['FUN_01adf970','*puVar4 & 7','uVar3 <= uVar6','"%sReBody%d"','"FtrBromideFrame"','"FtrBromideFrameWall"'],
 "ee/01afeef4":['*puVar4 >> 3 & 3','uVar1 != 3','"%sReFabric0"','"%sReFabric%d"','FUN_01ae3a80'],
 "3a/01ae3a80":['*puVar5 >> 5 & 0xff','*puVar5 >> 3 & 3','uVar6 == 2','uVar6 == 1'],
 "f9/01adf970":['0x48ef0398','"TemplateDummyFurniture1x1"'],
 "db/0152dba0":['FUN_01afe3e0','FUN_01afeef4','FUN_0074ed40','FUN_01aff000'],
 "0c/01530c60":['FUN_01afe3e0','FUN_01afeef4','FUN_0074f690','FUN_01664b40'],
 "4b/01664b40":['FUN_038fe510','lVar9 + 0x88','lVar9 + 0x90','plVar3[10]','plVar3[0xf]'],
 "f0/01aff000":['FUN_01afee38','0x5aebbfb5'],
 "72/01ad7260":['-0x34a14cc1','-0x4fcfb4f3'],
 "cf/01afcfa0":['0xcb402a3','-0x34a14cc1','iVar4 < 8']
}
def require(ok,msg):
    if not ok:raise ValueError(msg)
def sha(b):return hashlib.sha256(b).hexdigest()
class BCSV:
    # Same header/column checks as R105, independent of its native scanner dependencies.
    def __init__(self,root,name):
        self.path=root/NCA/"1/Bcsv"/(name+".bcsv");self.b=self.path.read_bytes()
        self.n,self.stride=struct.unpack_from("<II",self.b)
        nc=struct.unpack_from("<H",self.b,8)[0];start=28 if self.b[10] else 12
        self.start=start+nc*8
        self.cols={f"{h:08X}":p for h,p in struct.iter_unpack("<II",self.b[start:self.start])}
        meta=json.loads((root/"UnPack/1/Bcsv"/(name+".json")).read_text("utf-8"))
        require(len(self.cols)==nc and self.start+self.n*self.stride==len(self.b),"BCSV extent")
        require((self.n,self.stride)==(meta["row_count"],meta["row_size"]) and self.cols=={x["crc32"]:x["offset"] for x in meta["columns"]},"BCSV metadata mismatch")
        self.width={x["crc32"]:x["width_hint"] for x in meta["columns"]}
    def raw(self,i,h,w=None):
        w=self.width[h] if w is None else w
        require(0<=i<self.n and self.cols[h]+w<=self.stride,"BCSV field bounds")
        p=self.start+i*self.stride+self.cols[h];return self.b[p:p+w]
    def val(self,i,h,signed=False,w=None):return int.from_bytes(self.raw(i,h,w),"little",signed=signed)
    def string(self,i,h):return self.raw(i,h).split(b"\0",1)[0].decode("utf-8",errors="replace")
    def source(self):return {"file":self.path.name,"sha256":sha(self.b),"rows":self.n,"stride":self.stride}
def text(t,i,h,w):
    return t.raw(i,h,w).split(b'\0',1)[0].decode('utf-8',errors='strict')
def count(raw):
    # Standard slot count only, do not infer special fabric mode capacity.
    require(-1<=raw<=7,"Unexpected signed count: "+str(raw))
    return raw+1
def ordinary_resource_names(stem,word,body_count,fabric_count):
    require(0<=word<=65535 and 0<=body_count<=8 and 0<=fabric_count<=8,"Invalid inputs")
    body=word&7;mode=(word>>3)&3;fabric=(word>>5)&255
    normalized_mode=0 if mode==3 else mode
    body_index=body if body<body_count else 0
    fabric_index=fabric if fabric<max(1,fabric_count) else 0
    return {"bodyRaw":body,"fabricModeRaw":mode,"fabricMode":normalized_mode,"fabricIndexRaw":fabric,
      "bodyResource":stem+"ReBody"+str(body_index) if body_count else None,
      "fabricResource":stem+"ReFabric"+str(fabric_index if normalized_mode==0 else 0) if fabric_count else None,
      "specialTexturePathUnresolved":bool(fabric_count and normalized_mode)}
def build(root,out):
    root=root.resolve();out.mkdir(parents=True,exist_ok=True)
    item,remake=(BCSV(root,n) for n in ("ItemParam","ItemRemake"))
    for name,t in (("ItemParam",item),("ItemRemake",remake)):
        require(sha(t.b)==SOURCE_HASHES[name],name+" original source mismatch")
    require(item.n==11178,"ItemParam count")
    require(item.cols["3FEBC642"]==425 and item.cols["48EF0398"]==476,"Original field offsets")
    anchors={}
    for path,need in ANCHORS.items():
        p=root/"derived/3.0.3/ghidra12.2/c"/(path+".c");raw=p.read_bytes();s=raw.decode("utf-8")
        require(all(n in s for n in need),"Native anchor mismatch "+path)
        anchors[path]={"sha256":sha(raw),"anchors":need}
    head=subprocess.check_output(["git","-C",str(root),"rev-parse","HEAD"],text=True).strip()
    tree=subprocess.check_output(["git","-C",str(root),"ls-tree","-rz","HEAD","--",PREFIX]).split(b"\0")
    paths={}
    for record in tree:
        if not record:continue
        meta,path=record.split(b"\t",1);mode,kind,blob=meta.decode().split()
        if kind=="blob":
            p=path.decode("utf-8");paths[p]=blob
    require(bool(paths),"Model tree empty; cannot claim file coverage")
    def resource(stem):
        p=PREFIX+stem+EXT
        return {"resource":stem,"path":p,"gitBlobSha1":paths.get(p),"exists":p in paths}
    definitions={}
    for i in range(remake.n):
        rid=remake.val(i,"54706054",w=2)
        require(rid not in definitions,"Duplicate RemakeID")
        b=remake.val(i,"B0304B0D",True,w=1);f=remake.val(i,"0CB402A3",True,w=1)
        definitions[rid]={"remakeId":rid,"sourceRow":i,"reverseItemId":remake.val(i,"FD9AF1E1",w=2),"bodyCountRaw":b,"fabricCountRaw":f,"bodyCount":count(b),"fabricCount":count(f)}
    stats=collections.Counter();diff=[];records=[];referenced=set()
    for i in range(item.n):
        ident=item.val(i,"54706054",w=2);label=text(item,i,"3FEBC642",50);model=text(item,i,"48EF0398",64)
        kind=item.string(i,"FC275E86");rid=item.val(i,"CB5EB33F",w=2)
        if label!=model:
            stats["differentResourceNames"]+=1
            diff.append({"itemId":ident,"label":label,"modelName":model,"remakeId":rid,"kind":kind})
        if not model:stats["emptyModelName"]+=1
        if rid==65535:continue
        stats["nonSentinelRemakeReferences"]+=1
        if label!=model:stats["differentRemakeResourceNames"]+=1
        d=definitions.get(rid)
        if not d:
            stats["missingRemakeDefinition"]+=1
            records.append({"itemId":ident,"label":label,"modelName":model,"kind":kind,"remakeId":rid,"status":"missing_remake_definition"})
            continue
        referenced.add(rid)
        stats["linkedRemakeReferences"]+=1
        if d["reverseItemId"]!=ident:stats["sharedOrMismatchingReverseId"]+=1
        # Photo names take a separate native category path; do not assert kind index 0x74.
        if kind=="Kind_Bromide":
            stats["photoSpecialCandidates"]+=1
            records.append({"itemId":ident,"label":label,"modelName":model,"kind":kind,"remakeId":rid,"definition":d,
               "status":"photo_special_candidate","bodyStemCandidates":["FtrBromideFrame","FtrBromideFrameWall"],"nativeKindIndexVerified":False})
            continue
        if not model:
            stats["remakeMissingModelName"]+=1
            records.append({"itemId":ident,"label":label,"modelName":model,"kind":kind,"remakeId":rid,"definition":d,"status":"empty_model_name"})
            continue
        base=resource(model);body=[resource(model+"ReBody"+str(j)) for j in range(d["bodyCount"])]
        fabric=[resource(model+"ReFabric"+str(j)) for j in range(d["fabricCount"])]
        for ch,rs in (("body",body),("fabric",fabric)):
            stats[ch+"Expected"]+=len(rs);stats[ch+"Found"]+=sum(x["exists"] for x in rs)
        stats["baseFound"]+=base["exists"]
        full=base["exists"] and all(x["exists"] for x in body+fabric)
        stats["completeOrdinaryNameCandidates"]+=full
        records.append({"itemId":ident,"sourceRow":i,"label":label,"modelName":model,"kind":kind,"remakeId":rid,
           "definition":d,"base":base,"body":body,"fabric":fabric,"status":"all_expected_names_present" if full else "missing_expected_names",
           "nativeModeVerified":False,"runtimeBindingVerified":False,"pixelRenderVerified":False})
    expected={79:"FtrBabybed",725:"FtrLampJapan",1501:"FtrBearS"}
    samples={str(r["itemId"]):r for r in records if r["itemId"] in expected}
    require(len(samples)==len(expected) and all(samples[str(k)]["modelName"]==v for k,v in expected.items()),"Sample identity mismatch")
    baby=samples["79"];require(baby["definition"]["bodyCount"]==8 and baby["definition"]["fabricCount"]==7,"Babybed count")
    require(all(x["exists"] for x in [baby["base"]]+baby["body"]+baby["fabric"]),"Babybed model tree incomplete")
    photo_models={stem:[resource(stem+"ReBody"+str(i)) for i in range(8)] for stem in ("FtrBromideFrame","FtrBromideFrameWall")}
    report={"schema":"acnh303-remake-model-binding-v1","commit":head,"sourceBCSV":{"ItemParam":item.source(),"ItemRemake":remake.source()},
      "anchors":anchors,"modelTreeFiles":len(paths),"remakeDefinitions":len(definitions),"referencedDefinitions":len(referenced),
      "statistics":dict(stats),"samples":samples,"photoModelCandidates":photo_models,"runtimeBindingVerified":False,
      "limitations":["Git tree exact names and blob IDs only, not successful model decode","ordinary names conditional on native mode and resource manager","no all-combination selectability or icon pixel equivalence claim"]}
    for name,obj in (("remake-model-audit.json",report),("remake-model-links.json",records),("item-resource-name-differences.json",diff)):
        (out/name).write_text(json.dumps(obj,ensure_ascii=False,indent=2)+"\n",encoding="utf-8")
    with (out/"remake-model-missing.csv").open("w",encoding="utf-8-sig",newline="") as f:
        w=csv.writer(f);w.writerow(["item_id","label","model","remake_id","status","missing_paths"])
        for r in records:
            if r["status"]=="all_expected_names_present":continue
            w.writerow([r["itemId"],r["label"],r["modelName"],r["remakeId"],r["status"],";".join(x["path"] for x in ([r["base"]]+r["body"]+r["fabric"] if "base" in r else []) if not x["exists"])])
    print(json.dumps({"modelTreeFiles":len(paths),"remakeDefinitions":len(definitions),"statistics":dict(stats)},ensure_ascii=False))
if __name__=="__main__":
    p=argparse.ArgumentParser();p.add_argument("--root",type=Path,default=Path("."));p.add_argument("--out",type=Path,required=True);a=p.parse_args();build(a.root,a.out)
