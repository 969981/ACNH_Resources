#!/usr/bin/env python3
"""R110: verify R109 artifact against authenticated NSO, identify migration state and backend xrefs."""
import argparse,hashlib,json,struct,zipfile,collections
from pathlib import Path
from capstone import Cs,CS_ARCH_ARM64,CS_MODE_ARM
from capstone.arm64 import ARM64_OP_REG,ARM64_OP_MEM,ARM64_OP_IMM
import acnh303_r100_nso_decode as dec
BASE=Path("derived/3.0.3/npc_event_flags/r110_save_backend")
SLIDE=0x100000
def run(root,prior,out):
    e=json.loads((root/BASE/"evidence.json").read_text(encoding="utf-8"))
    assert hashlib.sha256(prior.read_bytes()).hexdigest()==e["r109"]["sha256"]
    with zipfile.ZipFile(prior) as z:
        g=json.loads(z.read("bounded_cfg.json"));r=json.loads(z.read("rollback_registration_windows.json"))
        leaf=json.loads(z.read("stage_leaf_proof.json"));binding=json.loads(z.read("migration_binding_window.json"))
    elf,nso,mapped,segments,raw,tags,relocs=dec.decode(root)
    assert len(relocs)==380793
    cs=Cs(CS_ARCH_ARM64,CS_MODE_ARM);cs.detail=True
    def window(a,b):
        return [{"va":f"{i.address+SLIDE:08X}","bytes":i.bytes.hex(),"op":i.mnemonic,"args":i.op_str} for i in cs.disasm(raw(a-SLIDE,b-a),a-SLIDE)]
    def check_bytes(rows):
        for i in rows:assert raw(int(i["va"],16)-SLIDE,4).hex()==i["bytes"]
    for a in e["sources"]:
        b=(root/a["path"]).read_bytes()
        assert hashlib.sha1(("blob %d"%len(b)).encode()+b"\0"+b).hexdigest()==a["blob"]
        assert all(x in b.decode("utf-8") for x in a["needles"])
    for d in g.values():check_bytes(d["instructions"])
    for rows in r.values():check_bytes(rows)
    check_bytes(binding)
    grow=g["01106A2C"];b={i["va"]:i for i in grow["instructions"]}
    assert len(b)==73 and grow["returns"]==["01106B4C"] and not grow["external"]
    assert b["01106A88"]["args"]==b["01106A98"]["args"].replace("w0,","w8,")=="w8, #0x118"
    for a,op,args in e["growup"]["stores"]:assert (b[a]["op"],b[a]["args"])==(op,args)
    m=g["00DB8278"];assert len(m["instructions"])==251 and m["returns"]==["00DB8544"] and not m["external"]
    assert {"site":"00DB85A8","target":"0281CB30"} in m["calls"]
    assert leaf["first_local_path_verified"] and leaf["second_null_branch_verified"]
    for k in ("first_leaf","second_leaf"):check_bytes(leaf[k]);assert [x["op"] for x in leaf[k]]==["mov","ret"]
    for a in e["rollback"]["registrations"]:
        rows={i["va"]:i for i in r[a["site"]]}
        for k in ("parameter","callback"):
            i=rows[a[k+"_store"]];assert (i["op"],i["args"])==("str",a[k+"_args"])
    def check_reloc(a,b):
        r=relocs[int(a,16)-SLIDE];assert r["type"]=="RELR" and r["addend"]==int(b,16)-SLIDE
    for a,b in [("04BB46B0","05574040"),("04BB21D0","05358908"),("04BC38F0","055B2618"),("04BB4FC8","00822C10"),("04BB4FF0","04CD0E38"),("04BB49D8","055A0FF0"),("04A44F98","01CA5890"),("04A5BC70","01DE6FA8")]:check_reloc(a,b)
    def cstring(a):
        b=bytearray()
        for n in range(128):
            x=raw(a-SLIDE+n,1)
            if x==b"\0":return b.decode("utf-8","replace")
            b.extend(x)
        return None
    label=cstring(int(e["rollback"]["queue_label_ghidra"],16))
    # Preserve real state callback windows, not fabricated function boundaries.
    state_windows={x["name"]:{k:window(int(x[k],16),int(x[k],16)+0x60) for k in ("callback_0x10","callback_0x20")} for x in e["migration"]["states"]}
    backend_windows={a:window(int(a,16),int(a,16)+0x100) for a in ["026F5030","026EEB9C","026EEBF4","026EEC4C","026EED64","026EEAEC"]}
    # Original text direct calls and bounded alias tracking around manager globals.
    targets={int(x,16)-SLIDE for x in ("026F5030","01C9CC70","01DE57A8","01DE61C8","01DE61CC","01DE6A90","01DE6B0C")}
    roots={int(a,16)-SLIDE:int(b,16)-SLIDE for a,b in [("04BB46B0","05574040"),("04BB21D0","05358908"),("04BC38F0","055B2618")]}
    globals_=set(roots.values());pages={x&~4095 for x in set(roots)|globals_}
    start,data=mapped[0];hits=[];calls=[]
    def addhit(i,origin,kind):
        hits.append({"site":f"{i.address+SLIDE:08X}","origin":f"{origin+SLIDE:08X}","kind":kind,"instruction":i.mnemonic+" "+i.op_str})
    for n,(w,) in enumerate(struct.iter_unpack("<I",data[:len(data)-len(data)%4])):
        pc=start+n*4
        if w&0xfc000000 in (0x94000000,0x14000000):
            d=w&0x3ffffff
            if d&0x2000000:d-=0x4000000
            t=pc+4*d
            if t in targets:calls.append({"site":f"{pc+SLIDE:08X}","target":f"{t+SLIDE:08X}","kind":"BL" if w&0xfc000000==0x94000000 else "B"})
        if w&0x9f000000!=0x90000000:continue
        # ADRP signed 21-bit page displacement.
        d=(((w>>5)&0x7ffff)<<2)|((w>>29)&3)
        if d&0x100000:d-=0x200000
        if (pc&~4095)+(d<<12) not in pages:continue
        tracked={}
        for i in cs.disasm(data[n*4:n*4+96],pc):
            m=i.mnemonic;o=i.operands
            if m in ("bl","blr","br","b","ret") or m.startswith("b."):break
            if m in ("cbz","cbnz","tbz","tbnz"):
                # Only bounded fall-through candidate, not dominance proof.
                continue
            new={}
            def reg(x):return i.reg_name(x)
            if m in ("adrp","adr") and len(o)==2 and o[1].type==ARM64_OP_IMM:
                new[reg(o[0].reg)]=("addr",o[1].imm)
            elif m=="add" and len(o)==3 and o[1].type==ARM64_OP_REG and o[2].type==ARM64_OP_IMM:
                a=tracked.get(reg(o[1].reg))
                if a and a[0]=="addr":new[reg(o[0].reg)]=("addr",a[1]+(o[2].imm<<o[2].shift.value))
            elif m=="mov" and len(o)==2 and all(x.type==ARM64_OP_REG for x in o):
                if reg(o[1].reg) in tracked:new[reg(o[0].reg)]=tracked[reg(o[1].reg)]
            elif m in ("ldr","str","ldp","stp","ldrb","strb") and not i.writeback:
                mem=next((x.mem for x in o if x.type==ARM64_OP_MEM),None)
                if mem and not mem.index:
                    a=tracked.get(reg(mem.base));off=mem.disp
                    if a:
                        typ,base=a;v=base+off
                        if typ=="addr" and m=="ldr" and v in roots:new[reg(o[0].reg)]=("addr",roots[v])
                        elif typ=="addr" and m=="ldr" and v in globals_:new[reg(o[0].reg)]=("obj",v)
                        elif typ=="obj":
                            fields={0x5574040-SLIDE:{0x10,0x453},0x5358908-SLIDE:{0xf98},0x55b2618-SLIDE:{0x8}}
                            if off in fields.get(base,set()):
                                addhit(i,base,("write" if m.startswith("st") else "read")+f"_0x{off:x}")
                                if m=="ldr" and base==0x5358908-SLIDE and off==0xf98:new[reg(o[0].reg)]=("migration_child",base)
                        elif typ=="migration_child" and off==0x58:addhit(i,base,("write" if m.startswith("st") else "read")+"_child_0x58")
            try:_,writes=i.regs_access()
            except Exception:break
            for rr in writes:
                nm=reg(rr);tracked.pop("x"+nm[1:] if nm.startswith("w") and nm[1:].isdigit() else nm,None)
            tracked.update(new)
    hits=list({(x["site"],x["origin"],x["kind"]):x for x in hits}.values())
    out.mkdir(parents=True,exist_ok=True)
    def write(n,x):(out/n).write_text(json.dumps(x,ensure_ascii=False,indent=2)+"\n",encoding="utf-8")
    write("growup_cfg.json",grow);write("rollback_registration_windows.json",r)
    write("migration_states.json",state_windows);write("backend_windows.json",backend_windows)
    write("direct_calls.json",calls);write("root_reference_candidates.json",hits)
    report={"growup_instructions":73,"growup_size":280,"moveout_instructions":251,"moveout_call_verified":True,"rollback_registration_stores":4,"rollback_queue_label":label,"migration_state_count":11,"source_blobs":len(e["sources"]),"stage_local_proof_sites":1,"stage_conditional_proof_sites":2,"root_candidate_count":len(hits),"direct_call_count":len(calls),"backend_vtables_verified":0,"runtime_verified":False}
    write("report.json",report);print(json.dumps(report,indent=2))
if __name__=="__main__":
    p=argparse.ArgumentParser(description=__doc__);p.add_argument("--root",type=Path,default=Path("."));p.add_argument("--prior",type=Path,required=True);p.add_argument("--out",type=Path,required=True);a=p.parse_args();run(a.root.resolve(),a.prior,a.out.resolve())
