#!/usr/bin/env python3
"""R116: authenticate savefile index and expand registered worker CFGs."""
import argparse,hashlib,json,zipfile
from pathlib import Path
from capstone import Cs,CS_ARCH_ARM64,CS_MODE_ARM
import acnh303_r100_nso_decode as dec
BASE=Path("derived/3.0.3/npc_event_flags/r116_savefile_index")
SLIDE=0x100000
def run(root,paths,out):
    e=json.loads((root/BASE/"evidence.json").read_text(encoding="utf-8"))
    for k,p in paths.items():assert hashlib.sha256(p.read_bytes()).hexdigest()==e["artifacts"][k]["sha256"]
    with zipfile.ZipFile(paths["r115"]) as z:wrappers=json.loads(z.read("cloud_wrappers_cfg.json"))
    with zipfile.ZipFile(paths["r114"]) as z:cloud=json.loads(z.read("cloud_callbacks_cfg.json"))
    for a in e["sources"]:
        b=(root/a["path"]).read_bytes()
        assert hashlib.sha1(("blob %d"%len(b)).encode()+b"\0"+b).hexdigest()==a["blob"]
        ls=b.decode("utf-8").splitlines();assert all(x["contains"] in ls[x["line"]-1] for x in a["anchors"])
    elf,nso,mapped,segments,raw,tags,relocs=dec.decode(root);assert len(relocs)==380793
    cs=Cs(CS_ARCH_ARM64,CS_MODE_ARM)
    def win(a,b):return [{"va":f"{i.address+SLIDE:08X}","bytes":i.bytes.hex(),"op":i.mnemonic,"args":i.op_str} for i in cs.disasm(raw(a-SLIDE,b-a),a-SLIDE)]
    def verify(rows):
        for i in rows:assert raw(int(i["va"],16)-SLIDE,4).hex()==i["bytes"]
    def slot(a,t):
        r=relocs[int(a,16)-SLIDE];assert r["type"]=="RELR" and r["addend"]==int(t,16)-SLIDE
    for j,(a,off,reg) in enumerate(e["wrappers"]):
        r=wrappers[a]["instructions"];verify(r);assert len(r)==11
        assert r[0]["args"]==f"{reg}, x9, [x0, #0x{off:x}]"
        assert r[1]["args"]=="x8, x9, #1" and r[4]["args"]=="x10, [x0, #8]"
        assert r[5]["args"]=="x0, x10, x9, asr #1"
        assert r[8]["args"]==f"{reg}, [x8, {reg}]" and r[9]["op"]=="br" and r[9]["args"]==reg
        assert r[10]["bytes"]=="c0035fd6";slot(f"{0x4a91c70+j*8:08X}",a)
    for a in e["selector_region"]:slot(a["slot"],a["target"])
    for a in ("0283CF18","0283D204","0283D320"):verify(cloud[a]["instructions"])
    def cfg(lo,hi):
        todo=[lo];seen={};edges=[];ext=set();direct=[];ind=[];rets=[]
        while todo:
            a=todo.pop()
            if a in seen:continue
            if not lo<=a<hi:ext.add(a);continue
            rows=win(a,a+4)
            if not rows:ext.add(a);continue
            i=rows[0];seen[a]=i;op=i["op"]
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
    workers={a:cfg(int(a,16),int(b,16)) for _,a,b,*_ in e["workers"]}
    seq=[int(a["target"],16) for a in e["selector_region"]]+[0x283efa0]
    selectors={f"{a:08X}":cfg(a,b) for a,b in zip(seq,seq[1:])}
    reader=cfg(0x2836b14,0x2837b00);adapter=cfg(0x283bde0,0x283bf14)
    out.mkdir(parents=True,exist_ok=True)
    def write(n,x):(out/n).write_text(json.dumps(x,ensure_ascii=False,indent=2)+"\n",encoding="utf-8")
    write("savefile_index.json",e["files"]);write("cloud_worker_cfg.json",workers)
    write("cloud_selector_cfg.json",selectors);write("player_reader_cfg.json",reader);write("paired_validation_adapter_cfg.json",adapter)
    write("task_dispatch_cfg.json",cfg(0x2840a60,0x2840a94));write("saveproc_constructor_window.json",win(0x283c6a8,0x283cb14))
    def summary(gs):return {k:{"instructions":len(v["instructions"]),"external":[hex(a) for a in v["external"]],"direct_calls":[[hex(a),hex(t)] for a,t in v["direct"]],"returns":[hex(a) for a in v["returns"]]} for k,v in gs.items()}
    result={"wrapper_instructions_verified":33,"worker_entries":3,"file_types":10,"data_sizes_known":7,"selector_region_slots":len(selectors),"source_blobs":len(e["sources"]),"workers":summary(workers),"player_reader_instructions":len(reader["instructions"]),"player_reader_external":[hex(a) for a in reader["external"]],"validation_adapter_instructions":len(adapter["instructions"]),"runtime_verified":False}
    write("report.json",result);print(json.dumps(result,indent=2))
if __name__=="__main__":
    p=argparse.ArgumentParser(description=__doc__);p.add_argument("--root",type=Path,default=Path("."))
    for k in ("r115","r114"):p.add_argument("--"+k,type=Path,required=True)
    p.add_argument("--out",type=Path,required=True);a=p.parse_args();run(a.root.resolve(),{k:getattr(a,k) for k in ("r115","r114")},a.out.resolve())
