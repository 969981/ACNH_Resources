#!/usr/bin/env python3
"""Read-only R109: bounded UI CFG, original field and global references, nullable database evidence."""
import argparse, collections, json, struct, sqlite3
from pathlib import Path
from capstone import Cs, CS_ARCH_ARM64, CS_MODE_ARM
from capstone.arm64 import ARM64_OP_IMM, ARM64_OP_MEM, ARM64_OP_REG
import acnh303_r100_nso_decode as dec
import acnh303_r105_gift_db as db
from acnh303_round11_elf_xref import adrp_target, bl_target

S=0x100000
def main(root,out):
    elf,nso,mapped,segments,raw,tags,rel=dec.decode(root)
    cs=Cs(CS_ARCH_ARM64,CS_MODE_ARM);cs.detail=True
    va,code=mapped[0];end=va+len(code)
    def gh(a):return f"0x{a+S:08X}" if isinstance(a,int) else None
    def ptr(a):
        r=rel.get(a,{})
        return r.get("addend") if r.get("type") in ("RELR",1027) and r.get("symbol")==0 else None
    def ins(a,n=4):return list(cs.disasm(raw(a,n),a))
    def row(i):return {"address":gh(i.address),"bytes":i.bytes.hex(),"op":i.mnemonic+" "+i.op_str}
    def cfg(entry,limit=0x5000):
        todo=[entry];seen={};edges=[];calls=[];gaps=[]
        while todo:
            a=todo.pop()
            if a in seen:continue
            if not entry<=a<min(end,entry+limit) or a%4:
                gaps.append({"address":gh(a),"reason":"outside_bound"});continue
            v=ins(a)
            if not v:gaps.append({"address":gh(a),"reason":"decode"});continue
            i=v[0];seen[a]=row(i);m=i.mnemonic;o=i.operands
            t=o[-1].imm if o and o[-1].type==ARM64_OP_IMM else None
            if m=="ret":succ=[]
            elif m=="br":
                succ=[];gaps.append({"address":gh(a),"reason":"indirect_branch","operand":i.op_str})
            elif m=="b":succ=[t]
            elif m.startswith("b.") or m in ("cbz","cbnz","tbz","tbnz"):succ=[a+4,t]
            else:
                succ=[a+4]
                if m in ("bl","blr"):calls.append({"site":gh(a),"target":gh(t) if m=="bl" else None,"operand":i.op_str})
            for b in succ:
                if b is not None:edges.append([gh(a),gh(b)]);todo.append(b)
        return {"entry":gh(entry),"instructions":[seen[a] for a in sorted(seen)],"edges":edges,"calls":calls,"gaps":gaps}
    vt=0x495b730-S;target=ptr(vt+0x60)
    assert target is not None and va<=target<end
    assert ins(0xdf4500-S)[0].op_str=="x1, [x8, #0x60]"
    assert ins(0xdf4504-S)[0].mnemonic=="br"
    slots={f"0x{d:X}":{"target":gh(ptr(vt+d)),"relocation":rel.get(vt+d)} for d in range(0,0x68,8)}
    graphs={"slot60":cfg(target),"pack_subtype":cfg(0x1b03610-S,0x400),"bitset":cfg(0x1ae6420-S,0x1000)}
    # Direct call sites are evidence of a call, not evidence of a selected filter.
    wanted={0x1b07660-S:"ordinary",0x1b081a0-S:"birthday",0xefa550-S:"extra",0x1b03610-S:"pack_subtype",0x1ae6420-S:"bitset",target:"slot60"}
    globals_={a-S for a in (0x532a75c,0x532a760,0x532a764,0x532ace8,0x532acf8)}
    pages={a&~4095 for a in globals_}
    refs=[];calls=[]
    def rn(i,r):
        n=i.reg_name(r)
        return "x"+n[1:] if n.startswith("w") and n[1:].isdigit() else n
    for j,(w,) in enumerate(struct.iter_unpack("<I",memoryview(code)[:len(code)//4*4])):
        a=va+4*j;t=bl_target(w,a)
        if t in wanted:calls.append({"site":gh(a),"target":gh(t),"label":wanted[t]})
        page=adrp_target(w,a)
        if page not in pages:continue
        reg=f"x{w&31}"
        for i in ins(a+4,min(48,end-a-4)):
            if i.mnemonic in ("b","br","bl","blr","ret","cbz","cbnz","tbz","tbnz") or i.mnemonic.startswith("b."):break
            for o in i.operands:
                if o.type==ARM64_OP_MEM and not o.mem.index and rn(i,o.mem.base)==reg and page+o.mem.disp in globals_:
                    refs.append({"site":gh(i.address),"global":gh(page+o.mem.disp),"op":i.mnemonic,"instruction":row(i)})
                if i.mnemonic=="add" and len(i.operands)==3 and i.operands[1].type==ARM64_OP_REG and rn(i,i.operands[1].reg)==reg and i.operands[2].type==ARM64_OP_IMM:
                    q=page+(i.operands[2].imm<<i.operands[2].shift.value)
                    if q in globals_:refs.append({"site":gh(i.address),"global":gh(q),"op":"address_candidate","instruction":row(i)})
            if any(rn(i,r)==reg for r in i.regs_access()[1]):break
    item=db.BCSV(root,"ItemParam")
    assert item.width["BCF5D17A"]==2 and item.cols["BCF5D17A"]==266
    field=[{"id":item.val(i,"54706054"),"raw_u16":item.val(i,"BCF5D17A")} for i in range(item.n)]
    hist=collections.Counter(x["raw_u16"] for x in field)
    assert len(field)==11178
    # Preserve a broad pre-writer window, including prior field lookup branches.
    pre=[row(i) for i in ins(0x1a76000-S,0x1920)]
    doc={"schema":"acnh303-r109-gift-dispatch","source_nso_sha256":dec.SOURCE_SHA,"vtable":gh(vt),"slot60_target":gh(target),"vtable_slots":slots,"cfg":{k:{"instructions":len(v["instructions"]),"gaps":v["gaps"],"calls":v["calls"]} for k,v in graphs.items()},"pack_global_refs":len(refs),"field_BCF5D17A":{"offset":266,"width":2,"distinct":len(hist),"histogram":dict(hist),"within_bitmap_limit":sum(n for v,n in hist.items() if v<0x800),"semantic_name":None},"actual_ui_dispatch_proved":False,"runtime_verified":False}
    for n,o in [("r109_dispatch_report.json",doc),("r109_cfg.json",graphs),("r109_pack_global_refs.json",refs),("r109_predicate_calls.json",calls),("r109_style2_input_window.json",pre),("r109_bitmap_field.json",field)]:db.write(out/n,o)
    con=sqlite3.connect(out/"r105/acnh303_gift_research.sqlite3")
    con.execute("CREATE TABLE IF NOT EXISTS r109_bitmap_field(item_id INTEGER PRIMARY KEY,raw_u16 INTEGER NOT NULL,actual_bitmap_result INTEGER,actual_ui_eligible INTEGER)")
    con.executemany("INSERT OR REPLACE INTO r109_bitmap_field VALUES(?,?,NULL,NULL)",[(x["id"],x["raw_u16"]) for x in field])
    con.commit();assert con.execute("PRAGMA integrity_check").fetchone()[0]=="ok"
    assert con.execute("SELECT COUNT(*) FROM r109_bitmap_field JOIN items ON item_id=id").fetchone()[0]==11178
    con.close()
    p=out/"gift_web_sidecar_r108.json";web=json.loads(p.read_text("utf8"))
    byid={x["id"]:x["raw_u16"] for x in field}
    for x in web["items"]:x["r109_bitmap_field"]={"raw_u16":byid[x["id"]],"result":None}
    web["limitations"].append("BCF5D17A raw field retained; live global bitmap and cGiftToNpc dispatch unresolved")
    db.write(out/"gift_web_sidecar_r109.json",web)
    print("R109 REPORT",json.dumps(doc,ensure_ascii=False),flush=True)
    print("R109 PACK GLOBAL REFS",json.dumps(refs),flush=True)
    for name,g in graphs.items():
        print("R109 CFG",name,g["entry"],len(g["instructions"]))
        for x in g["instructions"][:240]:print(x["address"],x["op"])
    print("R109 STYLE INPUT")
    for x in pre[:1100]:print(x["address"],x["op"])
if __name__=="__main__":
    p=argparse.ArgumentParser();p.add_argument("--root",type=Path,default=Path("."));p.add_argument("--out",type=Path,required=True);a=p.parse_args();main(a.root.resolve(),a.out.resolve())
