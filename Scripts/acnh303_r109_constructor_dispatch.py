#!/usr/bin/env python3
"""Authenticate original NSO, recover bounded CFGs, verify local call target proofs."""
import argparse,collections,hashlib,json,struct,zipfile
from pathlib import Path
from capstone import Cs,CS_ARCH_ARM64,CS_MODE_ARM
from capstone.arm64 import ARM64_OP_MEM,ARM64_OP_REG
import acnh303_r100_nso_decode as dec
BASE=Path("derived/3.0.3/npc_event_flags/r109_constructor_dispatch")
SLIDE=0x100000
def run(root,prior,out):
    e=json.loads((root/BASE/"evidence.json").read_text(encoding="utf-8"))
    assert hashlib.sha256(prior.read_bytes()).hexdigest()==e["source_artifacts"]["r105"]["sha256"]
    with zipfile.ZipFile(prior) as z:s=json.loads(z.read("stage_cfg.json"))
    for a in e["sources"]:
        b=(root/a["path"]).read_bytes()
        assert hashlib.sha1(("blob %d"%len(b)).encode()+b"\0"+b).hexdigest()==a["blob"]
        assert all(x in b.decode("utf-8") for x in a["needles"])
    elf,nso,mapped,segments,raw,tags,relocs=dec.decode(root)
    assert len(relocs)==380793
    cs=Cs(CS_ARCH_ARM64,CS_MODE_ARM);cs.detail=True
    def ins(a):
        i=next(cs.disasm(raw(a-SLIDE,4),a-SLIDE),None)
        if i is None:raise ValueError("bad instruction "+hex(a))
        return i
    def row(i):
        return {"va":f"{i.address+SLIDE:08X}","bytes":i.bytes.hex(),"op":i.mnemonic,"args":i.op_str}
    def window(a,b):return [row(i) for i in cs.disasm(raw(a-SLIDE,b-a),a-SLIDE)]
    def target(i):return int(i.op_str.rsplit("#",1)[1],16)+SLIDE
    def cfg(lo,hi):
        seen={};todo=[lo];edges=[];calls=[];indirect=[];external=set();returns=[]
        while todo:
            a=todo.pop()
            if a in seen:continue
            if not lo<=a<hi:external.add(a);continue
            i=ins(a);seen[a]=row(i);m=i.mnemonic
            if m in ("ret","retab"):returns.append(a);continue
            if m in ("br","braa","brab"):indirect.append(a);continue
            if m in ("blr","blraa","blrab"):indirect.append(a)
            if m=="bl":calls.append({"site":f"{a:08X}","target":f"{target(i):08X}"})
            if m=="b":succ=[target(i)]
            elif m.startswith("b.") or m in ("cbz","cbnz","tbz","tbnz"):succ=[a+4,target(i)]
            elif m in ("brk","hlt","udf"):succ=[]
            else:succ=[a+4]
            for b in succ:edges.append([f"{a:08X}",f"{b:08X}"]);todo.append(b)
        return {"entry":f"{lo:08X}","bound":f"{hi:08X}","instructions":[seen[a] for a in sorted(seen)],"edges":edges,"calls":calls,"returns":[f"{a:08X}" for a in sorted(returns)],"external":[f"{a:08X}" for a in sorted(external)],"indirect":[f"{a:08X}" for a in sorted(indirect)]}
    def reloc(slot,target):
        r=relocs[int(slot,16)-SLIDE]
        assert r["type"]=="RELR" and r["addend"]==int(target,16)-SLIDE
    graphs={}
    for a in e["registered_candidates"]:
        reloc(a["slot"],a["entry"])
        g=cfg(int(a["entry"],16),int(a["bound"],16))
        g["focus_reachable"]=a["site"] in {i["va"] for i in g["instructions"]}
        graphs[a["entry"]]=g
    move=e["moveout"];g=cfg(int(move["entry"],16),int(move["bound"],16))
    g["focus_reachable"]={"site":move["site"],"target":move["target"]} in g["calls"]
    graphs[move["entry"]]=g
    # Check exact original bytes of each instruction from the prior CFG.
    by={i["va"]:i for i in s["instructions"]}
    for a,b in [(0x29139bc,0x2913a20),(0x2913ae4,0x2913b40)]:
        for p in range(a,b,4):
            old=by[f"{p:08X}"]
            assert raw(p-SLIDE,4).hex()==old["bytes"]
    # Pure leaf proof requires both original instructions and the C anchor.
    def pure_leaf(a):
        w=window(a,a+8)
        return w,w[0]["op"]=="mov" and w[0]["args"] in ("w0, #0xb","w0, #11") and w[1]["op"]=="ret"
    first,fok=pure_leaf(0x259b18c);second,sok=pure_leaf(0x25fd104)
    reloc("04A85788","0259B18C");reloc("04A86CB0","025FD104")
    reloc("04BC3298","04A85758");reloc("04BC3530","04A86C80")
    preds=collections.defaultdict(set)
    for a,b in s["edges"]:preds[b].add(a)
    def straight(a,b):
        return all(preds[f"{p:08X}"]=={f"{p-4:08X}"} for p in range(a+4,b+4,4))
    def r(a):return by[f"{a:08X}"]
    # Only local path proof, not a guarantee of runtime execution.
    aok=(fok and straight(0x29139ec,0x2913a0c) and target(ins(0x29139f4))==0x259b18c
         and r(0x29139d4)["args"]=="x19, x8, #0x10"
         and r(0x29139f0)["args"]=="x19, [sp, #0x10]"
         and r(0x2913a00)["args"]=="x8, [sp, #0x10]"
         and r(0x2913a08)["args"]=="x8, [x8, #0x20]")
    bok=(sok and straight(0x2913ae4,0x2913af8)
         and r(0x2913af4)["args"]=="x8, [sp, #0x10]"
         and r(0x2913af8)["op"]=="cbz" and target(ins(0x2913af8))==0x2913b0c
         and r(0x2913aec)["args"]=="x0, [sp, #0x50]"
         and r(0x2913b0c)["args"]=="x8, [x8, #0x20]"
         and straight(0x2913b0c,0x2913b2c))
    rollback={a:window(int(a,16)-0x40,int(a,16)+0x80) for a in e["rollback_sites"]}
    binding=window(0x7bde70,0x7bdf00)
    # Candidate readers: LDR Xn,[Xm,#0xf98] followed by a load from derived +0x58.
    # No inference across a call or branch except the null-test fall-through.
    start,data=mapped[0];hits=[]
    for idx,(w,) in enumerate(struct.iter_unpack("<I",data[:len(data)-len(data)%4])):
        if w&0xffc00000!=0xf9400000 or ((w>>10)&0xfff)*8!=0xf98:continue
        pc=start+idx*4;reg=w&31
        if reg==31:continue
        aliases={f"x{reg}"}
        for i in cs.disasm(data[4*(idx+1):4*(idx+17)],pc+4):
            m=i.mnemonic;op=i.operands
            if m in ("b","bl","blr","br","ret") or m.startswith("b."):break
            if m in ("cbz","cbnz","tbz","tbnz"):
                if m=="cbz" and i.reg_name(op[0].reg) in aliases:continue
                break
            if m=="ldr" and len(op)==2 and op[1].type==ARM64_OP_MEM and not i.writeback:
                mem=op[1].mem
                if i.reg_name(mem.base) in aliases and not mem.index and mem.disp==0x58:
                    hits.append({"first":f"{pc+SLIDE:08X}","read":f"{i.address+SLIDE:08X}","window":window(pc+SLIDE,i.address+SLIDE+4),"same_root_proven":False})
                    break
            try:_,writes=i.regs_access()
            except Exception:break
            copy=None
            if m=="mov" and len(op)==2 and all(o.type==ARM64_OP_REG for o in op) and i.reg_name(op[1].reg) in aliases:copy=i.reg_name(op[0].reg)
            for x in writes:
                n=i.reg_name(x);aliases.discard("x"+n[1:] if n.startswith("w") and n[1:].isdigit() else n)
            if copy:aliases.add(copy)
            if not aliases:break
    out.mkdir(parents=True,exist_ok=True)
    def write(n,o):(out/n).write_text(json.dumps(o,indent=2,ensure_ascii=False)+"\n",encoding="utf-8")
    write("bounded_cfg.json",graphs);write("rollback_registration_windows.json",rollback)
    write("migration_binding_window.json",binding);write("migration_reader_candidates.json",hits)
    write("stage_leaf_proof.json",{"first_leaf":first,"second_leaf":second,"first_local_path_verified":aok,"second_null_branch_verified":bok,"other_branch_unresolved":True,"runtime_verified":False})
    report={"cfg":{k:{"instructions":len(v["instructions"]),"returns":v["returns"],"external":v["external"],"focus_reachable":v["focus_reachable"]} for k,v in graphs.items()},"migration_local_read_candidates":len(hits),"stage_first_local_path_verified":aok,"stage_second_null_branch_verified":bok,"resolved_runtime_targets":0,"runtime_verified":False}
    write("report.json",report);print(json.dumps(report,indent=2))
if __name__=="__main__":
    p=argparse.ArgumentParser(description=__doc__);p.add_argument("--root",type=Path,default=Path("."));p.add_argument("--prior",type=Path,required=True);p.add_argument("--out",type=Path,required=True);a=p.parse_args();run(a.root.resolve(),a.prior,a.out.resolve())
