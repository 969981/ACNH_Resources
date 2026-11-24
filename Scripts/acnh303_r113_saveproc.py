#!/usr/bin/env python3
"""R113 authenticate R112 artifact, cross-check CFG and recover original NSO windows."""
import argparse,hashlib,json,zipfile
from pathlib import Path
from capstone import Cs,CS_ARCH_ARM64,CS_MODE_ARM
import acnh303_r100_nso_decode as dec
BASE=Path("derived/3.0.3/npc_event_flags/r113_saveproc")
SLIDE=0x100000
def run(root,prior,out):
    e=json.loads((root/BASE/"evidence.json").read_text(encoding="utf-8"))
    assert hashlib.sha256(prior.read_bytes()).hexdigest()==e["artifact"]["sha256"]
    with zipfile.ZipFile(prior) as z:
        report=json.loads(z.read("report.json"));callers=json.loads(z.read("switch_caller_cfg.json"));copy=json.loads(z.read("copy_descriptor_windows.json"))
    assert report["conditional_static_dispatch_verified"] and report["stage_conditional_getter_sites"]==6 and report["relocation_slots_verified"]==13
    for a in e["sources"]:
        b=(root/a["path"]).read_bytes()
        assert hashlib.sha1(("blob %d"%len(b)).encode()+b"\0"+b).hexdigest()==a["blob"]
        ls=b.decode("utf-8").splitlines();assert all(x["contains"] in ls[x["line"]-1] for x in a["anchors"])
    elf,nso,mapped,segments,raw,tags,relocs=dec.decode(root);assert len(relocs)==380793
    cs=Cs(CS_ARCH_ARM64,CS_MODE_ARM)
    def win(a,b):
        return [{"va":f"{i.address+SLIDE:08X}","bytes":i.bytes.hex(),"op":i.mnemonic,"args":i.op_str} for i in cs.disasm(raw(a-SLIDE,b-a),a-SLIDE)]
    def verify(rows):
        for i in rows:assert raw(int(i["va"],16)-SLIDE,4).hex()==i["bytes"]
    def slot(a,t):
        r=relocs[int(a,16)-SLIDE];assert r["type"]=="RELR" and r["addend"]==int(t,16)-SLIDE
    accepted={}
    for a in e["callers"]:
        candidates=[g for g in callers[a["site"]] if g["focus_reachable"]]
        assert len(candidates)==1;g=candidates[0];verify(g["instructions"])
        assert int(g["entry"],16)==int(a["entry"],16) and len(g["instructions"])==a["instructions"]
        assert g["returns"]==([a["return"]] if a["return"] else []) and g["external"]==a["external"]
        assert len(g["calls"])==a["direct"] and len(g["indirect"])==a["indirect"]
        assert [hex(int(a["site"],16)),hex(0x26f5030)] in g["calls"]
        accepted[a["entry"]]=g
    methods=[]
    for a in e["copy_methods"]:
        slot(a["slot"],a["entry"]);n=len(a["bytes"]);rows=copy[a["entry"]][:n];verify(rows)
        assert [i["bytes"] for i in rows]==a["bytes"] and rows[-1]["op"]=="ret"
        methods.append(dict(a,instructions=rows))
    for a,t in e["saveproc"]["dispatch_slots"]:slot(a,t)
    reason={i["va"]:i for i in accepted["01D5D6A0"]["instructions"]}
    assert reason["01D5D75C"]["args"]=="w11, #3"
    assert reason["01D5D770"]["args"]=="w11, [x20, #0x28]"
    assert reason["01D5D774"]["args"]=="x10, [x20, #0x20]"
    slot("04BB4FD0","00822F90")
    assert raw(0x1de6b08-SLIDE,4).hex()=="f25d2914"
    assert win(0x1de6b08,0x1de6b0c)[0]["args"]=="#0x273e2d0"
    def cfg(lo,hi):
        todo=[lo];seen={};edges=[];ext=set();calls=[];ind=[];rets=[]
        while todo:
            a=todo.pop()
            if a in seen:continue
            if not lo<=a<hi:ext.add(a);continue
            w=win(a,a+4)
            if not w:raise ValueError("bad instruction "+hex(a))
            i=w[0];seen[a]=i;op=i["op"]
            if op in ("ret","retab"):rets.append(a);continue
            if op in ("br","braa","brab"):ind.append(a);continue
            if op in ("blr","blraa","blrab"):ind.append(a)
            def target():return int(i["args"].rsplit("#",1)[1],16)+SLIDE
            if op=="bl":calls.append([a,target()])
            if op=="b":succ=[target()]
            elif op.startswith("b.") or op in ("cbz","cbnz","tbz","tbnz"):succ=[a+4,target()]
            elif op in ("brk","hlt","udf"):succ=[]
            else:succ=[a+4]
            for b in succ:edges.append([a,b]);todo.append(b)
        return {"entry":hex(lo),"bound":hex(hi),"instructions":[seen[a] for a in sorted(seen)],"returns":list(map(hex,sorted(rets))),"external":list(map(hex,sorted(ext))),"calls":calls,"indirect":ind,"edges":edges,"full_owner_verified":False}
    ranges=[(0x283e2d0,0x283e518),(0x283c2a8,0x283c42c),(0x283cb14,0x283cb2c),(0x283cb2c,0x283cba8),(0x283d4c4,0x283e2d0),(0x3ebb160,0x3ebb34c),(0x822f90,0x823430),(0x28bdff0,0x28be5e4),(0x28be5e4,0x28be5e8),(0x28be5e8,0x28be5ec),(0x28be5ec,0x28be5f0),(0x28be5f0,0x28be600)]
    graphs={f"{a:08X}":cfg(a,b) for a,b in ranges}
    out.mkdir(parents=True,exist_ok=True)
    def write(n,x):(out/n).write_text(json.dumps(x,indent=2,ensure_ascii=False)+"\n",encoding="utf-8")
    write("verified_switch_callers.json",accepted);write("copy_methods.json",methods);write("saveproc_bounded_cfg.json",graphs)
    result={"r112_accepted":True,"switch_callers":len(accepted),"copy_methods":len(methods),"source_blobs":len(e["sources"]),"saveproc_dispatch_slots":5,"new_bounded_cfg":{k:{"instructions":len(g["instructions"]),"external":g["external"],"returns":g["returns"]} for k,g in graphs.items()},"runtime_verified":False}
    write("report.json",result);print(json.dumps(result,indent=2))
if __name__=="__main__":
    p=argparse.ArgumentParser(description=__doc__);p.add_argument("--root",type=Path,default=Path("."));p.add_argument("--prior",type=Path,required=True);p.add_argument("--out",type=Path,required=True);a=p.parse_args();run(a.root.resolve(),a.prior,a.out.resolve())
