#!/usr/bin/env python3
"""R112: reproduce conditional callback/Getter mapping; extract bounded caller CFGs."""
import argparse,hashlib,json,sqlite3,tempfile,zipfile
from pathlib import Path
from capstone import Cs,CS_ARCH_ARM64,CS_MODE_ARM
import acnh303_r100_nso_decode as dec
BASE=Path("derived/3.0.3/npc_event_flags/r112_migration_thunk")
SLIDE=0x100000
def run(root,paths,out):
    e=json.loads((root/BASE/"evidence.json").read_text(encoding="utf-8"))
    for k,p in paths.items():assert hashlib.sha256(p.read_bytes()).hexdigest()==e["artifacts"][k]["sha256"]
    def load(k,n):
        with zipfile.ZipFile(paths[k]) as z:return json.loads(z.read(n))
    d=load("r111","migration_dispatch_windows.json")
    th=d["028BD090"];assert [[i["va"],i["bytes"]] for i in th]==e["migration"]["instructions"]
    assert [(i["op"],i["args"]) for i in th]==[("ldr","x2, [x0, #8]"),("cbz","x2, #0x27bd0a0"),("and","w0, w1, #1"),("br","x2"),("ret","")]
    init={i["va"]:i for i in load("r105","migration_reference_window.json")}
    bind={i["va"]:i for i in load("r109","migration_binding_window.json")}
    visit={i["va"]:i for i in d["01DE6420"]}
    for m,a,op,args in [(init,"007BAF4C","ldr","x9, [x9, #0x8f8]"),(init,"007BAF5C","add","x9, x9, #0x10"),(init,"007BAF68","ldr","x8, [x8, #0x8d8]"),(init,"007BAF6C","stp","x9, x8, [x21]"),(init,"007BAF78","str","x21, [x8]"),(bind,"007BDEA0","ldr","x8, [x8, #0xf98]"),(bind,"007BDEB4","str","x9, [x8, #0x58]"),(visit,"01DE6438","ldr","x0, [x19, #0x58]"),(visit,"01DE6450","ldrb","w1, [x8, x9]"),(visit,"01DE6458","ldr","x8, [x8]"),(visit,"01DE645C","blr","x8")]:
        assert (m[a]["op"],m[a]["args"])==(op,args)
    s=load("r105","stage_cfg.json");by={i["va"]:i for i in s["instructions"]}
    assert by["02912070"]["args"]=="x21, [x21, #0x6b0]"
    for i in s["instructions"]:
        if 0x2912070<int(i["va"],16)<=0x29127bc:
            # x21 is not redefined in the selected CFG (callee-saved across calls).
            assert not (i["args"].startswith(("x21,","w21,")) and i["op"] not in ("str","strb","cmp","cbz","cbnz","tbz","tbnz","stp"))
    getter=load("r111","backend_getters.json")
    proof=[]
    for group in e["stage"]["groups"]:
        for k,args in [("selector","w9, [x8, #0x453]"),("table","x8, [x8, #0x10]"),("ordinary_object","x0, [x8]"),("replacement_object","x0, [x8, #0x130]")]:
            assert by[group[k]]["args"]==args
        assert by[group["branch"]]["op"]=="tbnz" and by[group["branch"]]["args"].startswith("w9, #0,")
        assert by[group["ordinary_adjust"]]["op"]=="add" and by[group["ordinary_adjust"]]["args"].endswith(", x0, #0x70")
        for mode in ("ordinary","replacement"):
            a=int(group[mode],16);k=next(x for x in getter if x["mode"]==mode and x["slot_offset"]==56)
            assert by[f"{a-8:08X}"]["args"]=="x8, [x0]"
            assert by[f"{a-4:08X}"]["args"]=="x8, [x8, #0x38]"
            assert by[f"{a:08X}"]["op"]=="blr" and k["return_field"]==32
            proof.append({"site":group[mode],"mode":mode,"getter":k["method"],"group":group["name"],"vtable":k["vtable"],"condition":"same initialized backend type and coherent state","runtime_verified":False})
    elf,nso,mapped,segments,raw,tags,relocs=dec.decode(root);assert len(relocs)==380793
    cs=Cs(CS_ARCH_ARM64,CS_MODE_ARM)
    def win(a,b):return [{"va":f"{i.address+SLIDE:08X}","bytes":i.bytes.hex(),"op":i.mnemonic,"args":i.op_str} for i in cs.disasm(raw(a-SLIDE,b-a),a-SLIDE)]
    def verify(rows):
        for i in rows:assert raw(int(i["va"],16)-SLIDE,4).hex()==i["bytes"]
    for rows in (th,list(init.values()),list(bind.values()),list(visit.values())):verify(rows)
    for g in proof:
        a=int(g["site"],16);verify([by[f"{i:08X}"] for i in range(a-8,a+4,4)])
    for a in e["sources"]:
        b=(root/a["path"]).read_bytes()
        assert hashlib.sha1(("blob %d"%len(b)).encode()+b"\0"+b).hexdigest()==a["blob"]
        lines=b.decode("utf-8").splitlines();assert all(x["contains"] in lines[x["line"]-1] for x in a["anchors"])
    with tempfile.TemporaryDirectory() as td:
        p=Path(td)/"reloc.db"
        with zipfile.ZipFile(paths["r100"]) as z:p.write_bytes(z.read("acnh303_relocations.sqlite3"))
        db=sqlite3.connect(p)
        try:
            assert db.execute("select count(*) from relocations").fetchone()[0]==380793
            slots=[["04BC38D8","028BCB18"],["04BC38F8","04A92250"],["04A92260","028BD090"],["04BC38F0","055B2618"],["04BB21D0","05358908"],["04BB46B0","05574040"],["04A89760","0270BD50"],["04A8A768","02725C40"],["04BB4FD0","00822F90"]]+e["backend"]["copy_virtual_slots"]
            for a,t in slots:
                a,t=int(a,16),int(t,16)
                assert db.execute("select target_ghidra,table_name from relocations where slot_ghidra=?",(a,)).fetchone()==(t,"RELR")
                r=relocs[a-SLIDE];assert r["type"]=="RELR" and r["addend"]==t-SLIDE
        finally:db.close()
    def target(i):return int(i["args"].rsplit("#",1)[1],16)+SLIDE
    def cfg(lo,hi,focus):
        todo=[lo];seen={};edges=[];ext=set();calls=[];rets=[];ind=[]
        while todo:
            a=todo.pop()
            if a in seen:continue
            if not lo<=a<hi:ext.add(a);continue
            w=win(a,a+4)
            if not w:ext.add(a);continue
            i=w[0];seen[a]=i;op=i["op"]
            if op in ("ret","retab"):rets.append(a);continue
            if op in ("br","braa","brab"):ind.append(a);continue
            if op in ("blr","blraa","blrab"):ind.append(a)
            if op=="bl":calls.append((a,target(i)))
            if op=="b":nexts=[target(i)]
            elif op.startswith("b.") or op in ("cbz","cbnz","tbz","tbnz"):nexts=[a+4,target(i)]
            elif op in ("brk","hlt","udf"):nexts=[]
            else:nexts=[a+4]
            for b in nexts:edges.append([a,b]);todo.append(b)
        return {"entry":hex(lo),"bound":hex(hi),"focus_reachable":(focus,0x26f5030) in calls,"instructions":[seen[a] for a in sorted(seen)],"external":[hex(a) for a in sorted(ext)],"returns":[hex(a) for a in sorted(rets)],"indirect":[hex(a) for a in sorted(ind)],"calls":[[hex(a),hex(b)] for a,b in calls],"edges":edges,"owner_verified":False}
    callers={}
    for c in e["switch_callers"]:
        focus=int(c["call"],16);hi=int(c["bound"],16)
        if c["entry_candidate"]:entries=[int(c["entry_candidate"],16)]
        else:
            # Prologue candidates are not established owners. Keep only candidates that reach focus.
            region=win(int(c["search_lower"],16),focus)
            entries=[int(i["va"],16) for i in region if (i["op"]=="stp" and i["args"].startswith("x29, x30, [sp, #") and i["args"].endswith("!")) or (i["op"]=="sub" and i["args"].startswith("sp, sp, #"))][-20:]
        callers[c["call"]]=[cfg(a,hi,focus) for a in entries]
    switch=load("r111","switch_caller_windows.json")
    for w in switch.values():verify(w)
    assert any(i["va"]=="01D5D770" and i["args"]=="w11, [x20, #0x28]" for i in switch["01D5D73C"])
    assert any(i["va"]=="01D5D774" and i["args"]=="x10, [x20, #0x20]" for i in switch["01D5D73C"])
    copy={t:win(int(t,16),int(t,16)+0x30) for _,t in e["backend"]["copy_virtual_slots"]}
    rollback=load("r111","rollback_callbacks.json")
    assert target(rollback["rollback_0x10"][-1])==0x273e2d0
    assert target(rollback["rollback_0x20"][-1])==0x3ebb160
    out.mkdir(parents=True,exist_ok=True)
    def write(n,x):(out/n).write_text(json.dumps(x,indent=2,ensure_ascii=False)+"\n",encoding="utf-8")
    write("migration_thunk.json",th);write("stage_getter_mapping.json",proof)
    write("switch_caller_cfg.json",callers);write("copy_descriptor_windows.json",copy)
    result={"migration_thunk_instructions":5,"conditional_static_dispatch_verified":True,"stage_conditional_getter_sites":len(proof),"backend_layout_qwords":8,"relocation_slots_verified":len(slots),"switch_caller_candidates":{k:sum(x["focus_reachable"] for x in v) for k,v in callers.items()},"runtime_verified":False}
    write("report.json",result);print(json.dumps(result,indent=2))
if __name__=="__main__":
    p=argparse.ArgumentParser(description=__doc__);p.add_argument("--root",type=Path,default=Path("."))
    for k in ("r111","r105","r109","r100"):p.add_argument("--"+k,type=Path,required=True)
    p.add_argument("--out",type=Path,required=True);a=p.parse_args();run(a.root.resolve(),{k:getattr(a,k) for k in ("r111","r105","r109","r100")},a.out.resolve())
