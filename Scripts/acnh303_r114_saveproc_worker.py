#!/usr/bin/env python3
"""R114: authenticate R113, partition all reachable instructions, expand Native dispatch CFGs."""
import argparse,collections,hashlib,json,zipfile
from pathlib import Path
from capstone import Cs,CS_ARCH_ARM64,CS_MODE_ARM
import acnh303_r100_nso_decode as dec
BASE=Path("derived/3.0.3/npc_event_flags/r114_saveproc_worker")
SLIDE=0x100000
def run(root,prior,out):
    e=json.loads((root/BASE/"evidence.json").read_text(encoding="utf-8"))
    assert hashlib.sha256(prior.read_bytes()).hexdigest()==e["prior"]["sha256"]
    with zipfile.ZipFile(prior) as z:
        graphs=json.loads(z.read("saveproc_bounded_cfg.json"))
    elf,nso,mapped,segments,raw,tags,relocs=dec.decode(root);assert len(relocs)==380793
    cs=Cs(CS_ARCH_ARM64,CS_MODE_ARM)
    def win(a,b):return [{"va":f"{i.address+SLIDE:08X}","bytes":i.bytes.hex(),"op":i.mnemonic,"args":i.op_str} for i in cs.disasm(raw(a-SLIDE,b-a),a-SLIDE)]
    for a in e["sources"]:
        b=(root/a["path"]).read_bytes()
        assert hashlib.sha1(("blob %d"%len(b)).encode()+b"\0"+b).hexdigest()==a["blob"]
        lines=b.decode("utf-8").splitlines();assert all(x["contains"] in lines[x["line"]-1] for x in a["anchors"])
    w=graphs["0283D4C4"];rows=w["instructions"];by={int(i["va"],16):i for i in rows}
    assert len(rows)==len(by)==899 and len(w["calls"])==33 and len(w["indirect"])==26
    for i in rows:assert raw(int(i["va"],16)-SLIDE,4).hex()==i["bytes"]
    def slot(a,t):
        r=relocs[int(a,16)-SLIDE];assert r["type"]=="RELR" and r["addend"]==int(t,16)-SLIDE
    for a,t in e["reloc"]:slot(a,t)
    unrelocated={}
    for a in e["unrelocated_mode_slots"]:
        v=int(a,16)-SLIDE
        assert v not in relocs
        unrelocated[a]=raw(v,8).hex()
    annotated=[];covered=set()
    # Block leaders from actual edges. BL targets are outside the intraprocedural graph.
    preds=collections.defaultdict(set);succ=collections.defaultdict(set)
    for a,b in w["edges"]:preds[b].add(a);succ[a].add(b)
    leaders={int(w["entry"],16)}
    for a in by:
        if len(preds[a])!=1 or preds[a]!={a-4}:leaders.add(a)
        if a-4 in by and succ[a-4]!={a}:leaders.add(a)
    block=None;calls=dict(w["calls"]);indirect=set(w["indirect"])
    for p in e["phases"]:
        lo,hi=int(p["start"],16),int(p["end"],16)
        rr=[i for i in rows if lo<=int(i["va"],16)<hi]
        assert len(rr)==p["instructions"] and sum(lo<=a<hi for a in calls)==p["direct"] and sum(lo<=a<hi for a in indirect)==p["indirect"]
        for i in rr:
            a=int(i["va"],16);assert a not in covered;covered.add(a)
            if a in leaders or block is None:block=a
            note="instruction-level opcode and operands retained; specific field semantics require source proof"
            if a in calls:note=f"direct call Ghidra VA {calls[a]:08X}"
            elif a in indirect:note="indirect dispatch; dynamic target not universally established"
            annotated.append(dict(i,region=p["role"],block=f"{block:08X}",successors=[f"{b:08X}" for b in sorted(succ[a])],annotation=note))
    assert len(covered)==899
    completion={0x283e1c4:("str","w9, [x8, #8]"),0x283e200:("str","w8, [x0, #8]"),0x283e1e4:("blr","x8"),0x283e21c:("blr","x8"),0x283e234:("blr","x8"),0x283e274:("str","w9, [x8, #0x54]"),0x283e29c:("blr","x8"),0x283e2ac:("bl","#0x3f04360")}
    for a,v in completion.items():assert (by[a]["op"],by[a]["args"])==v
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
    dispatch={}
    for d in e["dispatch"]:
        a,b=int(d["target"],16),int(d["bound"],16)
        if d.get("thunk"):
            th=win(int(d["thunk"],16),int(d["thunk"],16)+4)[0]
            assert th["op"]=="b" and int(th["args"].split("#")[1],16)+SLIDE==a
        dispatch[d["target"]]=cfg(a,b)
    cloud={}
    # These are registered callback entries, not guaranteed full function boundaries.
    seq=[(n,k,int(a,16)) for n,*aa in e["cloud_states"] for k,a in zip((16,32,48),aa)]
    for j,(n,k,a) in enumerate(seq):
        b=seq[j+1][2] if j+1<len(seq) else 0x283d404
        cloud[f"{a:08X}"]=dict(cfg(a,b),state=n,record_offset=k)
    low={}
    seq2=[int(a,16) for a in e["low_nibble_targets"]]+[0x2835540]
    for a,b in zip(seq2,seq2[1:]):low[f"{a:08X}"]=cfg(a,b)
    out.mkdir(parents=True,exist_ok=True)
    def write(n,x):(out/n).write_text(json.dumps(x,ensure_ascii=False,indent=2)+"\n",encoding="utf-8")
    write("worker_instruction_ledger.json",annotated)
    write("dispatch_cfg.json",dispatch);write("cloud_callbacks_cfg.json",cloud);write("low_nibble_cfg.json",low)
    write("completion_window.json",[i for i in rows if int(i["va"],16)>=0x283e1b8])
    def summary(gs):return {k:{"instructions":len(v["instructions"]),"returns":v["returns"],"external":v["external"],"indirect":len(v["indirect"])} for k,v in gs.items()}
    report={"worker_instructions":len(annotated),"basic_block_leaders":len(leaders),"worker_direct_calls":33,"worker_indirect_sites":26,"source_blobs":len(e["sources"]),"relocations_verified":len(e["reloc"]),"mode_slots_raw":unrelocated,"completion_order_verified":True,"dispatch_cfg":summary(dispatch),"cloud_callbacks":summary(cloud),"low_nibble_cfg":summary(low),"runtime_verified":False}
    write("report.json",report);print(json.dumps(report,indent=2))
if __name__=="__main__":
    p=argparse.ArgumentParser(description=__doc__);p.add_argument("--root",type=Path,default=Path("."));p.add_argument("--prior",type=Path,required=True);p.add_argument("--out",type=Path,required=True);a=p.parse_args();run(a.root.resolve(),a.prior,a.out.resolve())
