#!/usr/bin/env python3
"""R105: extract authenticated bounded control flow, original names and pointer context."""
import argparse,json,struct
from collections import deque
from pathlib import Path
from capstone import Cs,CS_ARCH_ARM64,CS_MODE_ARM
import acnh303_r100_nso_decode as dec
BASE=Path("derived/3.0.3/npc_event_flags/r105_growup_modes")
SLIDE=0x100000
def run(root,out):
    e=json.loads((root/BASE/"evidence.json").read_text())
    elf,nso,mapped,segments,raw,tags,relocs=dec.decode(root)
    assert len(relocs)==380793
    cs=Cs(CS_ARCH_ARM64,CS_MODE_ARM)
    def ins_at(gh):
        a=next(cs.disasm(raw(gh-SLIDE,4),gh-SLIDE),None)
        if a is None:raise ValueError("invalid instruction at "+hex(gh))
        return a
    def row(i):return {"va":f"{i.address+SLIDE:08X}","bytes":i.bytes.hex(),"op":i.mnemonic,"args":i.op_str}
    def cstring(gh):
        b=bytearray()
        for i in range(128):
            v=raw(gh-SLIDE+i,1)
            if v==b"\0":return b.decode("ascii","replace")
            b.extend(v)
        return None
    def target(i):return int(i.op_str.rsplit("#",1)[1],16)+SLIDE
    def verify_call(site,callee):
        i=ins_at(int(site,16));assert i.mnemonic=="bl" and target(i)==int(callee,16)
    for x in e["growup"]["mode_labels"]:
        assert cstring(int(x["string_ghidra_va"],16))==x["label"]
    grow=e["growup"];start=int(grow["entry"],16);end=int(grow["last_instruction"],16)+4
    grow_ins=[row(ins_at(a)) for a in range(start,end,4)]
    assert len(grow_ins)==199 and grow_ins[-1]["op"]=="ret"
    # A registered range is a search bound, not a proven function end.
    def cfg(lo,hi):
        todo=deque([lo]);seen={};external=set();calls=[];returns=[];indirect=[];edges=[]
        while todo:
            p=todo.popleft()
            if p in seen:continue
            if not lo<=p<hi:external.add(p);continue
            i=ins_at(p);seen[p]=row(i);op=i.mnemonic
            if op in ("ret","retab"):returns.append(p);continue
            if op in ("br","braa","brab"):indirect.append(p);continue
            if op=="bl":calls.append((p,target(i)))
            if op=="blr":indirect.append(p)
            if op=="b":successors=[target(i)]
            elif op.startswith("b.") or op in ("cbz","cbnz","tbz","tbnz"):successors=[p+4,target(i)]
            elif op in ("brk","hlt","udf"):successors=[]
            else:successors=[p+4]
            for q in successors:
                edges.append([f"{p:08X}",f"{q:08X}"]);todo.append(q)
        return {"entry":f"{lo:08X}","bound_exclusive":f"{hi:08X}","instructions":[seen[a] for a in sorted(seen)],"edges":edges,"external_targets":[f"{a:08X}" for a in sorted(external)],"returns":[f"{a:08X}" for a in returns],"indirect_sites":[f"{a:08X}" for a in indirect],"calls":[{"site":f"{a:08X}","target":f"{b:08X}"} for a,b in calls],"full_function_proven":False}
    stage=cfg(0x2912030,0x291463c);batch=cfg(0x822c10,0x822f90)
    for site,callee in e["scene_stage"]["calls"]:verify_call(site,callee)
    verify_call("00822E10","00AD7410");verify_call("00DB85A8","0281CB30")
    slots=e["growup"]["code_pointer_run"];ptr=[]
    for a,t in zip(range(int(slots["start"],16),int(slots["end_exclusive"],16),8),slots["targets"],strict=True):
        r=relocs[a-SLIDE];assert r["type"]=="RELR" and r["addend"]==int(t,16)-SLIDE
        ptr.append({"slot":f"{a:08X}","target":t})
    # Neighbor bytes and relocation metadata: inspect possible typeinfo; no automatic class-name claim.
    contexts={}
    for a in (0x4955bf8,0x4a92a30,0x4bb4fc8,0x4bc38d8):
        records=[]
        for p in range(a-0x20,a+0x80,8):
            r=relocs.get(p-SLIDE)
            records.append({"slot":f"{p:08X}","raw":raw(p-SLIDE,8).hex(),"relocation":r})
        contexts[f"{a:08X}"]=records
    queue_label=cstring(int(grow["queue"]["task_label_ghidra_va"],16))
    migration_window=[row(ins_at(a)) for a in range(0x7baf38,0x7bafb8,4)]
    out.mkdir(parents=True,exist_ok=True)
    def write(n,o):(out/n).write_text(json.dumps(o,ensure_ascii=False,indent=2)+"\n",encoding="utf-8")
    write("growup_registration.json",{"instructions":grow_ins,"labels":grow["mode_labels"],"queue_label":queue_label,"code_pointers":ptr})
    write("stage_cfg.json",stage);write("batch_reset_cfg.json",batch)
    write("relocation_contexts.json",contexts);write("migration_reference_window.json",migration_window)
    report={"growup_labels_verified":4,"registration_instructions":len(grow_ins),"queue_label":queue_label,"stage_reachable_instructions":len(stage["instructions"]),"stage_returns":stage["returns"],"stage_external_targets":stage["external_targets"],"stage_calls_reachable":all(any(y["site"]==a and y["target"]==b for y in stage["calls"]) for a,b in e["scene_stage"]["calls"]),"batch_call_reachable":any(y["site"]=="00822E10" and y["target"]=="00AD7410" for y in batch["calls"]),"class_name":None,"runtime_verified":False}
    write("report.json",report);print(json.dumps(report,indent=2))
if __name__=="__main__":
    p=argparse.ArgumentParser(description=__doc__);p.add_argument("--root",type=Path,default=Path("."));p.add_argument("--out",type=Path,required=True);a=p.parse_args();run(a.root.resolve(),a.out.resolve())
