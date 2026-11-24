#!/usr/bin/env python3
"""R115: audit original dispatch instructions and extract unresolved wrapper CFGs."""
import argparse,hashlib,json,zipfile
from pathlib import Path
from capstone import Cs,CS_ARCH_ARM64,CS_MODE_ARM
import acnh303_r100_nso_decode as dec
BASE=Path("derived/3.0.3/npc_event_flags/r115_save_types")
SLIDE=0x100000
def run(root,prior,out):
    e=json.loads((root/BASE/"evidence.json").read_text(encoding="utf-8"))
    assert hashlib.sha256(prior.read_bytes()).hexdigest()==e["prior"]["sha256"]
    with zipfile.ZipFile(prior) as z:
        rep=json.loads(z.read("report.json"));low=json.loads(z.read("low_nibble_cfg.json"));cloud=json.loads(z.read("cloud_callbacks_cfg.json"));d=json.loads(z.read("dispatch_cfg.json"))
    assert rep["worker_instructions"]==899 and rep["completion_order_verified"] and rep["relocations_verified"]==16
    assert all(v=="0000000000000000" for v in rep["mode_slots_raw"].values())
    for a in e["sources"]:
        b=(root/a["path"]).read_bytes()
        assert hashlib.sha1(("blob %d"%len(b)).encode()+b"\0"+b).hexdigest()==a["blob"]
        ls=b.decode("utf-8").splitlines();assert all(x["contains"] in ls[x["line"]-1] for x in a["anchors"])
    elf,nso,mapped,segments,raw,tags,relocs=dec.decode(root);assert len(relocs)==380793
    cs=Cs(CS_ARCH_ARM64,CS_MODE_ARM)
    def win(a,b):return [{"va":f"{i.address+SLIDE:08X}","bytes":i.bytes.hex(),"op":i.mnemonic,"args":i.op_str} for i in cs.disasm(raw(a-SLIDE,b-a),a-SLIDE)]
    def verify(g):
        for i in g["instructions"]:assert raw(int(i["va"],16)-SLIDE,4).hex()==i["bytes"]
    def slot(a,t):
        r=relocs[int(a,16)-SLIDE];assert r["type"]=="RELR" and r["addend"]==int(t,16)-SLIDE
    for a in e["low"]:
        g=low[a["entry"]];verify(g);assert len(g["instructions"])==a["instructions"] and not g["external"]
        assert set(int(x,16) for x in a["calls"])<=set(t for _,t in g["direct"])
        slot(f"{0x4a916e0+(a['operation']-1)*16:08X}",a["entry"])
        if a["operation"]>=4:
            by={int(i["va"],16):i for i in g["instructions"]}
            for t in (0x2701270,0x27014c0):
                pc=next(pc for pc,v in g["direct"] if v==t)
                assert any(by[i]["op"]=="mov" and by[i]["args"]==f"w1, #{a['file_index']}" for i in range(pc-8,pc,4))
    assert sum(len(g["instructions"]) for g in low.values())==1800
    for a in e["cloud"]:
        g=cloud[a["entry"]];verify(g);assert len(g["instructions"])==a["instructions"]
        if a["record_offset"]==48:assert len(g["instructions"])==1 and g["instructions"][0]["bytes"]=="c0035fd6"
    g=d["028BE5F0"];verify(g);assert len(g["instructions"])==366 and g["external"]==[0x28bf25c]
    by={i["va"]:i for i in g["instructions"]}
    assert by["028BEB88"]["op"]=="b" and int(by["028BEB88"]["args"].split("#")[1],16)+SLIDE==0x28bf25c
    assert [(a,b) for a,b in g["direct"]]==[(0x28beb50,0x28beba8),(0x28beb6c,0x28bed14)]
    def cfg(lo,hi):
        todo=[lo];seen={};edges=[];ext=set();direct=[];ind=[];rets=[]
        while todo:
            a=todo.pop()
            if a in seen:continue
            if not lo<=a<hi:ext.add(a);continue
            i=win(a,a+4)[0];seen[a]=i;op=i["op"]
            if op in ("ret","retab"):rets.append(a);continue
            if op in ("br","braa","brab"):ind.append(a);continue
            if op in ("blr","blraa","blrab"):ind.append(a)
            def t():return int(i["args"].rsplit("#",1)[1],16)+SLIDE
            if op=="bl":direct.append([a,t()])
            if op=="b":ss=[t()]
            elif op.startswith("b.") or op in ("cbz","cbnz","tbz","tbnz"):ss=[a+4,t()]
            elif op in ("brk","hlt","udf"):ss=[]
            else:ss=[a+4]
            for b in ss:edges.append([a,b]);todo.append(b)
        return {"entry":f"{lo:08X}","bound":f"{hi:08X}","instructions":[seen[a] for a in sorted(seen)],"edges":edges,"direct":direct,"indirect":ind,"returns":rets,"external":sorted(ext),"full_owner_verified":False}
    wrappers={}
    for a,t,b in e["wrappers"]:
        slot(a,t);wrappers[t]=cfg(int(t,16),int(b,16))
    extra={f"{a:08X}":cfg(a,b) for a,b in [(0x28bf25c,0x28bf3d0),(0x26d16c0,0x26d17d8),(0x26d17d8,0x26d189c),(0x2833830,0x2833920),(0x28367f0,0x2836b14),(0x283bffc,0x283c2a8)]}
    def string(a):
        data=bytearray()
        for n in range(128):
            b=raw(a-SLIDE+n,1)
            if b==b"\0":return data.decode("utf-8","replace")
            data.extend(b)
        return None
    labels={a:{"va":b,"text":string(int(b,16))} for a,b in e["queue_labels"]}
    labels["file_index_0"]={"va":"040A9AF5","text":string(0x40a9af5)}
    out.mkdir(parents=True,exist_ok=True)
    def write(n,x):(out/n).write_text(json.dumps(x,ensure_ascii=False,indent=2)+"\n",encoding="utf-8")
    write("low_operations.json",e["low"]);write("cloud_callback_semantics.json",e["cloud"]);write("cloud_wrappers_cfg.json",wrappers);write("additional_cfg.json",extra);write("string_evidence.json",labels)
    def summary(gs):return {k:{"instructions":len(v["instructions"]),"external":[hex(a) for a in v["external"]],"returns":[hex(a) for a in v["returns"]]} for k,v in gs.items()}
    report={"prior_verified":True,"low_operations":7,"low_instructions":1800,"cloud_callbacks":15,"cloud_noops":5,"cloud_instruction_count":sum(len(g["instructions"]) for g in cloud.values()),"source_blobs":len(e["sources"]),"dispatch4_tail_verified":True,"wrappers":summary(wrappers),"additional_cfg":summary(extra),"labels":labels,"runtime_verified":False}
    write("report.json",report);print(json.dumps(report,indent=2))
if __name__=="__main__":
    p=argparse.ArgumentParser(description=__doc__);p.add_argument("--root",type=Path,default=Path("."));p.add_argument("--prior",type=Path,required=True);p.add_argument("--out",type=Path,required=True);a=p.parse_args();run(a.root.resolve(),a.prior,a.out.resolve())
