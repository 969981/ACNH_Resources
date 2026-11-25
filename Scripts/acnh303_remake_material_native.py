#!/usr/bin/env python3
"""Authenticate the native material pointer table, calls and texture ref update.
Static evidence only; no claim of an executed render or complete function boundary.
"""
import argparse, hashlib, json, struct
from pathlib import Path
from capstone import Cs, CS_ARCH_ARM64, CS_MODE_ARM
from capstone.arm64 import ARM64_OP_IMM
import acnh303_r100_nso_decode as dec
BASE=0x100000
TABLE=0x049a7730
WINDOWS={0x01afe3e0:0x300,0x01afeef4:0x110,0x01ae3a80:0x180,0x0152dba0:0x380,
 0x01530c60:0x1000,0x01664b40:0x400,0x038fe510:0x200,0x01533310:0x500,0x01afd600:0x1000}
ANCHORS={
 "0c/01530c60":["DAT_0520f368 = 0","DAT_0520f378 = 1","PTR_s_mReBody_049a7730","FUN_01664b40"],
 "4b/01664b40":["param_2 + 0xd8","param_2 + 0x120","*plVar3 + 0x9d","*plVar3 + 0x30","FUN_038fe510","lVar9 + 0x88","lVar9 + 0x90","plVar3[10]","plVar3[0xf]"],
 "e5/038fe510":["lVar4 + 0x38","memcmp","lVar4 + 0x28"],
 "33/01533310":['"mReFabric_Alb"','"mReFabric_OP"']}
def require(x,msg):
    if not x:raise ValueError(msg)
def sha(b):return hashlib.sha256(b).hexdigest()
def hx(a):return f"0x{a+BASE:08X}"
def build(root,out):
    elf,nso,mapped,segments,raw,tags,relocs=dec.decode(root)
    cs=Cs(CS_ARCH_ARM64,CS_MODE_ARM);cs.detail=True
    def ptr(a):
        r=relocs.get(a)
        require(r is not None and r["type"] in ("RELR",1027) and r["symbol"]==0 and r["addend"] is not None,"Missing relative relocation "+hx(a))
        return r["addend"],r
    def string(a):
        for va,b in mapped[1:]:
            if va<=a<va+len(b):
                p=a-va;q=b.find(b"\0",p,min(len(b),p+256))
                require(q>=p,"String bounds "+hx(a))
                return b[p:q].decode("utf-8")
        raise ValueError("Unmapped string "+hx(a))
    table=[]
    for i in range(12):
        a=TABLE-BASE+i*8;t,r=ptr(a)
        table.append({"index":i,"pointerVA":hx(a),"stringVA":hx(t),"name":string(t),"relocation":r})
    require([r["name"] for r in table[:2]]==["mReBody","mReFabric"],"Unexpected native material index 0/1")
    anchors={}
    for p,need in ANCHORS.items():
        raw_c=(root/"derived/3.0.3/ghidra12.2/c"/(p+".c")).read_bytes()
        require(all(x in raw_c.decode("utf-8") for x in need),"Source anchor "+p)
        anchors[p]={"sha256":sha(raw_c),"anchors":need}
    windows={};all_calls=[]
    for a,n in WINDOWS.items():
        data=raw(a-BASE,n);code=list(cs.disasm(data,a-BASE))
        require(bool(code),"Empty machine window")
        ins=[{"va":hx(i.address),"bytes":i.bytes.hex(),"asm":i.mnemonic+" "+i.op_str} for i in code]
        calls=[{"site":hx(i.address),"target":hx(i.operands[0].imm),"op":i.mnemonic} for i in code if i.mnemonic=="bl" and i.operands and i.operands[0].type==ARM64_OP_IMM]
        windows[hx(a-BASE)]={"sha256":sha(data),"size":n,"instructions":ins,"directCalls":calls,"windowNotFunctionBoundary":True}
        all_calls.extend(calls)
    edges={0x0152dba0:[0x01afe3e0,0x01afeef4,0x0074ed40],0x01530c60:[0x01afe3e0,0x01afeef4,0x0074f690,0x01664b40],0x01664b40:[0x038fe510]}
    verified=[]
    for a,targets in edges.items():
        for t in targets:
            sites=[x["site"] for x in windows[hx(a-BASE)]["directCalls"] if x["target"]==hx(t-BASE)]
            require(bool(sites),"Missing raw BL "+hex(a)+" -> "+hex(t))
            verified.append({"sourceWindow":hex(a),"target":hex(t),"sites":sites})
    # Raw BRTI inventory previously extracted from 16 original Babybed resources.
    evidence=root/"assets/evidence/babybed_bntx_native.json";old=json.loads(evidence.read_text("utf-8"))
    out.mkdir(parents=True,exist_ok=True)
    report={"schema":"acnh303-remake-material-native-v1","nsoSha256":sha(nso),"elfSha256":sha(elf),"segments":segments,
       "materialTable":table,"materialIndices":{"body":0,"fabric":1},"sourceAnchors":anchors,"directEdges":verified,
       "textureUpdate":{"materialInstanceStride":128,"textureCountOffset":157,"textureNameTableOffset":48,
         "sourceTextureValueOffsets":[136,144],"runtimeReferenceArrayOffsets":[80,88],"changeCallbackOffset":120,
         "evidence":"static C consumer; field type and actual runtime values not yet proven"},
       "babybedPriorEvidenceSha256":sha(evidence.read_bytes()),"runtimeVerified":False,"pixelRenderVerified":False}
    for name,obj in (("remake-material-native-audit.json",report),("remake-material-native-windows.json",windows)):
        (out/name).write_text(json.dumps(obj,ensure_ascii=False,indent=2)+"\n",encoding="utf-8")
    print(json.dumps({"materialNames":[r["name"] for r in table],"directEdges":verified,"runtimeVerified":False},ensure_ascii=False))
if __name__=="__main__":
    p=argparse.ArgumentParser();p.add_argument("--root",type=Path,default=Path("."));p.add_argument("--out",type=Path,required=True);a=p.parse_args();build(a.root.resolve(),a.out)
