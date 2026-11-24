#!/usr/bin/env python3
"""R111: cross-verify authenticated NSO/ELF artifacts and extract unresolved dispatch windows."""
import argparse,collections,hashlib,json,sqlite3,tempfile,zipfile
from pathlib import Path
from capstone import Cs,CS_ARCH_ARM64,CS_MODE_ARM
import acnh303_r100_nso_decode as dec
BASE=Path("derived/3.0.3/npc_event_flags/r111_backend_dispatch")
SLIDE=0x100000
def run(root,paths,out):
    e=json.loads((root/BASE/"evidence.json").read_text(encoding="utf-8"))
    for k,p in paths.items():
        assert hashlib.sha256(p.read_bytes()).hexdigest()==e["artifacts"][k]["sha256"]
    with zipfile.ZipFile(paths["r110"]) as z:
        states=json.loads(z.read("migration_states.json"))
        calls=json.loads(z.read("direct_calls.json"))
        roots=json.loads(z.read("root_reference_candidates.json"))
        report=json.loads(z.read("report.json"))
    assert report["rollback_queue_label"]=="SequenceSubProcessor"
    assert len(roots)==2835 and dict(collections.Counter(x["kind"] for x in roots))==e["root_counts"]
    assert sorted(x["site"] for x in calls if x["target"]=="026F5030")==e["backend"]["switch_call_sites"]
    with zipfile.ZipFile(paths["backend"]) as z:backend=json.loads(z.read("save_backend_elf.json"))
    assert backend["elf_sha256"]=="145903c25d37a7c90e8818440bcf462b3dca490e11e45cf435605ab00d709664"
    instructions={int(i["ghidra_va"],16):i for w in backend["windows"].values() for i in w["instructions"]}
    elf,nso,mapped,segments,raw,tags,relocs=dec.decode(root)
    assert len(relocs)==380793
    cs=Cs(CS_ARCH_ARM64,CS_MODE_ARM)
    def win(a,b):
        return [{"va":f"{i.address+SLIDE:08X}","bytes":i.bytes.hex(),"op":i.mnemonic,"args":i.op_str} for i in cs.disasm(raw(a-SLIDE,b-a),a-SLIDE)]
    def verify_source(i):
        a=int(i.get("va",i.get("ghidra_va")),16)
        assert raw(a-SLIDE,4).hex()==i["bytes"]
    for a in e["sources"]:
        b=(root/a["path"]).read_bytes()
        assert hashlib.sha1(("blob %d"%len(b)).encode()+b"\0"+b).hexdigest()==a["blob"]
        assert all(x in b.decode("utf-8") for x in a["needles"])
    for i in instructions.values():verify_source(i)
    for s in states.values():
        for rows in s.values():
            for i in rows:verify_source(i)
    methods=[]
    with tempfile.TemporaryDirectory() as t:
        p=Path(t)/"reloc.sqlite3"
        with zipfile.ZipFile(paths["reloc"]) as z:p.write_bytes(z.read("acnh303_relocations.sqlite3"))
        c=sqlite3.connect(p)
        try:
            assert c.execute("select count(*) from relocations").fetchone()[0]==380793
            def slot(a,t):
                assert c.execute("select target_ghidra,table_name from relocations where slot_ghidra=?",(a,)).fetchone()==(t,"RELR")
                r=relocs[a-SLIDE];assert r["type"]=="RELR" and r["addend"]==t-SLIDE
            for mode in ("ordinary","replacement"):
                b=e["backend"][mode];v=int(b["vptr"],16)
                for off,f,name in zip(e["backend"]["getter_slots"],e["backend"]["getter_field_offsets"],b["getters"],strict=True):
                    a=int(name,16);slot(v+off,a)
                    ins=win(a,a+8)
                    assert ins[0]["op"]=="ldr" and ins[0]["args"]==f"x0, [x0, #0x{f:x}]" and ins[1]["op"]=="ret"
                    methods.append({"mode":mode,"vtable":b["vptr"],"slot_offset":off,"method":name,"return_field":f,"instructions":ins})
                for a in b["writers"]:assert instructions[int(a,16)]["instruction"].startswith("str ")
            for a,t in [(0x4a92260,0x28bd090),(0x4bc38d8,0x28bcb18),(0x4bc38f8,0x4a92250),(0x4bc38f0,0x55b2618),(0x4bb21d0,0x5358908)]:slot(a,t)
        finally:c.close()
    visit={i["va"]:i for i in states["State::cVisitStartSave"]["callback_0x10"]}
    for a,args in [("01DE642C","w8, [x0, #0x70]"),("01DE6438","x0, [x19, #0x58]"),("01DE6454","x8, [x0]"),("01DE6458","x8, [x8]"),("01DE645C","x8")]:
        assert visit[a]["args"]==args
    assert visit["01DE645C"]["op"]=="blr"
    for a in e["migration"]["host_sync_rollback_noops"]:
        assert win(int(a,16),int(a,16)+4)[0]["bytes"]=="c0035fd6"
    rb0=win(0x1de6a90,0x1de6b0c);rb1=win(0x1de6b0c,0x1de6b28)
    assert any(i["va"]=="01DE6AC0" and i["args"]=="x9, x9, #0x4000" for i in rb0)
    assert rb1[-1]["op"]=="b" and int(rb1[-1]["args"].split("#")[1],16)+SLIDE==0x3ebb160
    # Inspect the actual secondary-table method; do not infer final dispatch from vtable alone.
    thunk_windows={f"{a:08X}":win(a,a+n) for a,n in [(0x28bd090,0x14),(0x28bd0a4,0x30),(0x1d3fa88,0x60),(0x1de6420,0x110)]}
    switch_windows={a:win(int(a,16)-0x60,int(a,16)+0x60) for a in e["backend"]["switch_call_sites"]}
    for a,w in switch_windows.items():
        i=next(i for i in w if i["va"]==a)
        assert i["op"]=="bl" and int(i["args"].split("#")[1],16)+SLIDE==0x26f5030
    out.mkdir(parents=True,exist_ok=True)
    def write(n,x):(out/n).write_text(json.dumps(x,ensure_ascii=False,indent=2)+"\n",encoding="utf-8")
    write("backend_getters.json",methods);write("migration_dispatch_windows.json",thunk_windows)
    write("rollback_callbacks.json",{"host_noops":e["migration"]["host_sync_rollback_noops"],"rollback_0x10":rb0,"rollback_0x20":rb1})
    write("switch_caller_windows.json",switch_windows)
    result={"backend_vtables_verified":2,"getter_slots_verified":len(methods),"switch_calls_verified":3,"visit_child_read_verified":True,"secondary_target_candidate":"028BD090","final_dispatch_verified":False,"host_sync_rollback_noops":2,"root_candidates":len(roots),"runtime_verified":False}
    write("report.json",result);print(json.dumps(result,indent=2))
if __name__=="__main__":
    p=argparse.ArgumentParser(description=__doc__);p.add_argument("--root",type=Path,default=Path("."))
    for k in ("r110","backend","reloc"):p.add_argument("--"+k,type=Path,required=True)
    p.add_argument("--out",type=Path,required=True);a=p.parse_args();run(a.root.resolve(),{k:getattr(a,k) for k in ("r110","backend","reloc")},a.out.resolve())
