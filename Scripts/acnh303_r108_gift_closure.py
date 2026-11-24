#!/usr/bin/env python3
"""R108 targeted factory/enum CFG and provenance-aware ItemKind catalog extension."""
import argparse,bisect,collections,json,struct,re,sqlite3
from pathlib import Path
from capstone import Cs,CS_ARCH_ARM64,CS_MODE_ARM
from capstone.arm64 import ARM64_OP_IMM,ARM64_OP_REG,ARM64_OP_MEM
import acnh303_r100_nso_decode as dec
import acnh303_r105_gift_db as db
from acnh303_round11_elf_xref import adrp_target,adr_target,bl_target
S=0x100000
def main(root,out):
    out.mkdir(parents=True,exist_ok=True)
    elf,nso,mapped,segments,raw,tags,rel=dec.decode(root)
    cs=Cs(CS_ARCH_ARM64,CS_MODE_ARM);cs.detail=True
    def gh(a):return hex(a+S) if isinstance(a,int) else None
    def ptr(a):
        r=rel.get(a,{})
        return r.get("addend") if r.get("type") in ("RELR",1027) and r.get("symbol")==0 else None
    def ins(a,n):
        try:return list(cs.disasm(raw(a,n),a))
        except ValueError:return []
    def row(i):return {"ghidra":gh(i.address),"bytes":i.bytes.hex(),"op":i.mnemonic+" "+i.op_str}
    va,code=mapped[0];end=va+len(code)
    def executable(a):return isinstance(a,int) and va<=a<end and a%4==0
    exports={int(p.stem,16)-S:p for p in (root/"derived/3.0.3/ghidra12.2/c").rglob("*.c") if re.fullmatch("[0-9a-f]{8}",p.stem)}
    addresses=sorted(exports)
    def nearest(a):
        k=bisect.bisect_right(addresses,a)
        return addresses[k-1] if k else None
    def source(a):
        p=exports.get(a)
        return p.relative_to(root).as_posix() if p else None
    def cfg(a,hi):
        todo=[a];seen={};edges=[];calls=[];gaps=[]
        while todo:
            v=todo.pop()
            if v in seen:continue
            if not a<=v<hi or not executable(v):
                gaps.append({"target":gh(v),"reason":"outside_bound"});continue
            ii=ins(v,4)
            if not ii:gaps.append({"site":gh(v),"reason":"decode"});continue
            i=ii[0];seen[v]=i;m=i.mnemonic;o=i.operands
            t=o[-1].imm if o and o[-1].type==ARM64_OP_IMM else None
            if m=="ret":succ=[]
            elif m=="br":succ=[];gaps.append({"site":gh(v),"reason":"indirect_branch","op":i.op_str})
            elif m=="b":succ=[t]
            elif m.startswith("b.") or m in ("cbz","cbnz","tbz","tbnz"):succ=[v+4,t]
            else:
                succ=[v+4]
                if m in ("bl","blr"):calls.append({"site":gh(v),"target":gh(t) if m=="bl" else None,"op":i.op_str,"export":source(t)})
            for q in succ:
                if q is not None:edges.append([gh(v),gh(q)]);todo.append(q)
        return {"entry":gh(a),"upper_bound":gh(hi),"instructions":[row(seen[x]) for x in sorted(seen)],"edges":edges,"calls":calls,"gaps":gaps},seen
    # Factory entry has exact original registration record.
    rec=0x487d220
    assert struct.unpack("<I",raw(rec,4))[0]==0x80f8f65e and ptr(rec+8)==0x1020120
    ctor,ci=cfg(0x1020120,0x1020120+0x600)
    # Path-independent static constants, track object pointer aliases in straight-line blocks.
    # Require reachable instructions, vptr store and ABI executable slots. A return move alone is not runtime proof.
    regs={};candidates=[];stores=[];return_moves=[]
    def rn(i,r):
        n=i.reg_name(r);return "x"+n[1:] if n.startswith("w") and n[1:].isdigit() else n
    prev=None
    for a,i in sorted(ci.items()):
        if prev is not None and a!=prev+4:regs.clear()
        prev=a;m=i.mnemonic;o=i.operands;pending={}
        if m in ("b","br","ret","cbz","cbnz","tbz","tbnz") or m.startswith("b."):regs.clear();continue
        if m in ("bl","blr"):
            for k in range(19):regs.pop("x"+str(k),None)
            continue
        if m in ("adr","adrp") and len(o)==2 and o[1].type==ARM64_OP_IMM:pending[rn(i,o[0].reg)]=o[1].imm
        elif m=="add" and len(o)==3 and o[1].type==ARM64_OP_REG:
            x=regs.get(rn(i,o[1].reg));y=o[2].imm if o[2].type==ARM64_OP_IMM else regs.get(rn(i,o[2].reg)) if o[2].type==ARM64_OP_REG else None
            if x is not None and y is not None:pending[rn(i,o[0].reg)]=x+(y<<o[2].shift.value)
        elif m=="mov" and len(o)==2 and o[1].type==ARM64_OP_REG:
            n=rn(i,o[1].reg);x=regs.get(n)
            if x is not None:pending[rn(i,o[0].reg)]=x
            if rn(i,o[0].reg)=="x0":return_moves.append({**row(i),"object_register":n})
        elif m=="ldr" and len(o)==2 and o[1].type==ARM64_OP_MEM and not o[1].mem.index and not i.writeback:
            x=regs.get(rn(i,o[1].mem.base))
            if x is not None:
                y=ptr(x+o[1].mem.disp)
                if y is not None:pending[rn(i,o[0].reg)]=y
        elif m in ("str","stur","stp") and not i.writeback:
            for j,x in enumerate(o):
                if x.type!=ARM64_OP_MEM or x.mem.index:continue
                base=rn(i,x.mem.base)
                for k in range(j):
                    if o[k].type!=ARM64_OP_REG:continue
                    src=i.reg_name(o[k].reg);width=8 if src.startswith("x") else 4;off=x.mem.disp+k*width
                    v=regs.get(rn(i,o[k].reg))
                    if base!="sp" and off in (0,0x10):stores.append({**row(i),"base":base,"offset":off,"source":src,"value":gh(v)})
                    if base!="sp" and off==0 and width==8 and v is not None and all(executable(ptr(v+d)) for d in (0,0x40,0x58)):
                        candidates.append({**row(i),"object_register":base,"vtable":gh(v),"slots":{hex(d):gh(ptr(v+d)) for d in range(0,0x60,8)},"slot_relocations":{hex(d):rel.get(v+d) for d in range(0,0x60,8)}})
        for r in i.regs_access()[1]:regs.pop(rn(i,r),None)
        regs.update(pending)
    ctor.update({"vtable_candidates":candidates,"object_stores":stores,"return_moves":return_moves,"runtime_verified":False})
    # Inspect filter enum descriptor: find relocation pointers to the exact name and to nearby string/table entries.
    literal=0x495b8a9-S
    assert raw(literal,11)==b"cGiftToNpc\0"
    desc=[]
    for p,r in rel.items():
        t=ptr(p)
        if t is not None and abs(t-literal)<=0x100:
            desc.append({"slot":gh(p),"target":gh(t),"delta":t-literal,"relocation":r})
    def window(a,n):
        return [row(x) for x in ins(a,n)]
    # Identify nearest export and backwards prologue candidates, but do not treat as exact function boundaries.
    site=0x1a778e4-S;near=nearest(site)
    prologues=[]
    for i in ins(max(va,site-0x800),0x800):
        if i.mnemonic=="stp" and i.op_str.startswith("x29, x30, [sp, #-") and i.writeback:prologues.append(i.address)
    candidates_entry=sorted(set([x for x in [near,*prologues[-3:]] if x is not None]))
    style_cfgs=[]
    for a in candidates_entry:
        if site-a>0x3000:continue
        g,si=cfg(a,min(end,site+0x1000));g["contains_target"]=site in si;g["nearest_export"]=source(a);style_cfgs.append(g)
    # R107's two unexported callbacks, recover reachable instructions including conditional branches.
    tagcfg={}
    for a,n in [(0x1a60c10,0x400),(0x1acb930,0x1800)]:
        g,_=cfg(a-S,a-S+n);tagcfg[hex(a)]=g
    # Find all direct references to selected fields, including split immediate construction.
    needles={0x5270eb75:"ItemKind field",0x0732bb98:"CanNpcPresent",0x2c1b3b5b:"CanNpcBirthdayPresent",0x06012035:"CanGift",0x87bf00e8:"Key",0x54706054:"UniqueID",0x9ba040c2:"style1"}
    # Target descriptors and actual global slots. Include base and +8.
    data={0x5326c78-S:"style2_count",0x5326c80-S:"style2_data",0x4bc0100-S:"style2_got"}
    for x in desc:data[int(x["slot"],16)-S]="filter_string_pointer"
    pages={a&~4095 for a in data}
    hashrefs=[];refs=[]
    for i,(w,) in enumerate(struct.iter_unpack("<I",memoryview(code)[:len(code)//4*4])):
        pc=va+4*i
        if w&0x7f800000 in (0x52800000,0x12800000):
            rd=w&31;shift=16*((w>>21)&3);v=((w>>5)&0xffff)<<shift
            if w&0x7f800000==0x12800000:v=(~v)&0xffffffff
            for j in range(1,min(7,len(code)//4-i)):
                q=struct.unpack_from("<I",code,4*(i+j))[0]
                if q&0x7f800000==0x72800000 and q&31==rd:
                    sh=16*((q>>21)&3);v=(v&~(0xffff<<sh))|(((q>>5)&0xffff)<<sh)
                    if v in needles:hashrefs.append({"site":gh(pc),"end":gh(pc+4*j),"field":needles[v],"hash":f"{v:08X}","nearest_export":source(nearest(pc)),"window":window(max(va,pc-12),64)})
                    break
                # Permit independent instructions but not a branch or any overwrite of target reg.
                qq=ins(pc+4*j,4)
                if not qq:break
                z=qq[0]
                if z.mnemonic in ("b","br","bl","blr","ret","cbz","cbnz","tbz","tbnz") or z.mnemonic.startswith("b.") or any(rn(z,r)==f"x{rd}" for r in z.regs_access()[1]):break
        page=adrp_target(w,pc)
        if page not in pages:continue
        reg=w&31
        for q in ins(pc+4,min(64,len(code)-4*i-4)):
            if q.mnemonic in ("b","br","bl","blr","ret","cbz","cbnz","tbz","tbnz") or q.mnemonic.startswith("b."):break
            ds=[]
            for o in q.operands:
                if o.type==ARM64_OP_MEM and not o.mem.index and rn(q,o.mem.base)==f"x{reg}":ds.append(page+o.mem.disp)
            if q.mnemonic=="add" and len(q.operands)==3 and q.operands[2].type==ARM64_OP_IMM and rn(q,q.operands[1].reg)==f"x{reg}":ds.append(page+(q.operands[2].imm<<q.operands[2].shift.value))
            for d in ds:
                if d in data:refs.append({"site":gh(q.address),"label":data[d],"op":q.mnemonic,"address":gh(d),"nearest_export":source(nearest(q.address)),"window":window(max(va,q.address-24),96)})
            if any(rn(q,r)==f"x{reg}" for r in q.regs_access()[1]):break
    # Database: exact all-row CRC key correspondence, still separate from actual filter result.
    prior=out/"r105";db.build(root,prior)
    conn=sqlite3.connect(prior/"acnh303_gift_research.sqlite3")
    item,kind,tag=[db.BCSV(root,n) for n in ("ItemParam","ItemKind","AITag")]
    keys={db.crc(kind.string(i,"87BF00E8")):i for i in range(kind.n)}
    assert len(keys)==kind.n
    perms=[]
    for i in range(item.n):
        key=item.val(i,"5270EB75");k=keys[key]
        perms.append({"item_id":item.val(i,"54706054"),"kind_key":kind.string(k,"87BF00E8"),"kind_uid":kind.val(k,"54706054"),"kind_crc32":f"{key:08X}","can_npc_present":kind.val(k,"0732BB98"),"can_birthday_present":kind.val(k,"2C1B3B5B"),"can_gift":kind.val(k,"06012035"),"actual_eligible":None})
    assert len(perms)==11178
    conn.execute("CREATE TABLE r108_kind_crc_join(item_id INTEGER PRIMARY KEY,kind_key TEXT,kind_uid INTEGER,kind_crc32 TEXT,can_npc_present INTEGER,can_birthday_present INTEGER,can_gift INTEGER,actual_eligible INTEGER)")
    conn.executemany("INSERT INTO r108_kind_crc_join VALUES(?,?,?,?,?,?,?,?)",[tuple(p.values()) for p in perms]);conn.commit()
    assert conn.execute("PRAGMA integrity_check").fetchone()[0]=="ok"
    assert conn.execute("SELECT COUNT(*) FROM items JOIN r108_kind_crc_join ON id=item_id").fetchone()[0]==11178
    conn.close()
    web=json.loads((prior/"gift_web_sidecar.json").read_text("utf8"));web["schema"]="acnh303-gift-research-r108"
    byid={x["item_id"]:x for x in perms}
    for x in web["items"]:x["kind_crc_join"]=byid[x["id"]];x["actual_gift_eligible"]=None
    web["limitations"].append("5270EB75 exact CRC32 join; actual UI predicate not proved")
    db.write(out/"gift_web_sidecar_r108.json",web)
    callbacks={}
    for c in candidates:
        for k in ("0x40","0x58"):
            a=int(c["slots"][k],16)-S
            g,_=cfg(a,a+0x1000);callbacks[gh(a)]=g
    for n,x in [("ui_constructor_cfg.json",ctor),("ui_callback_cfgs.json",callbacks),("filter_literal_relocations.json",desc),("style2_cfg_candidates.json",style_cfgs),("style2_reference_window.json",window(site-0x100,0x240)),("tag_callback_cfgs.json",tagcfg),("field_hash_refs.json",hashrefs),("target_data_refs.json",refs),("kind_crc_join_11178.json",perms)]:db.write(out/n,x)
    report={"constructor_instructions":len(ci),"constructor_gaps":ctor["gaps"],"vtable_candidates":candidates,"return_moves":return_moves,"filter_literal_relocations":len(desc),"filter_exact_pointer_refs":sum(x["delta"]==0 for x in desc),"style_nearest_export":gh(near),"style_cfg_candidates":len(style_cfgs),"style_cfg_contains_site":sum(x["contains_target"] for x in style_cfgs),"tag_cfg":{k:{"instructions":len(v["instructions"]),"gaps":v["gaps"]} for k,v in tagcfg.items()},"field_hash_hits":dict(collections.Counter(x["field"] for x in hashrefs)),"target_refs":dict(collections.Counter(x["label"] for x in refs)),"kind_join_count":len(perms),"can_npc_present_counts":dict(collections.Counter(p["can_npc_present"] for p in perms)),"native_filter_proved":False,"style2_writer_proved":False,"tag_index_proved":False,"runtime_verified":False}
    db.write(out/"report.json",report);print(json.dumps(report,indent=2))
    for title,lines in [("CTOR",ctor["instructions"]),("STYLE",window(site-0x100,0x240)),*[(k,v["instructions"]) for k,v in tagcfg.items()]]:
        print("R108",title)
        for x in lines[:350]:print(x["ghidra"],x["op"])
    print("R108 FILTER RELOCS",json.dumps(desc))
    for x in hashrefs:
        if x["field"] in ("ItemKind field","CanNpcPresent"):print("FIELD",json.dumps(x))
if __name__=="__main__":
    p=argparse.ArgumentParser();p.add_argument("--root",type=Path,default=Path("."));p.add_argument("--out",type=Path,required=True);a=p.parse_args();main(a.root.resolve(),a.out.resolve())
