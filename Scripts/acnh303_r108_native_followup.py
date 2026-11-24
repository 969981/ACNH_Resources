#!/usr/bin/env python3
"""R108 follow-up: exact enum pointer tables and static predicate evidence."""
import argparse,collections,json,struct,re
from pathlib import Path
from capstone import Cs,CS_ARCH_ARM64,CS_MODE_ARM
from capstone.arm64 import ARM64_OP_IMM
import acnh303_r100_nso_decode as dec
import acnh303_r105_gift_db as db
from acnh303_round11_elf_xref import bl_target
S=0x100000
def main(root,out):
    elf,nso,mapped,segments,raw,tags,rel=dec.decode(root)
    cs=Cs(CS_ARCH_ARM64,CS_MODE_ARM);cs.detail=True
    def gh(a):return hex(a+S) if a is not None else None
    def ptr(a):
        x=rel.get(a,{})
        return x.get("addend") if x.get("type") in ("RELR",1027) and x.get("symbol")==0 else None
    def ins(a,n):return list(cs.disasm(raw(a,n),a))
    def row(i):return {"ghidra":gh(i.address),"bytes":i.bytes.hex(),"op":i.mnemonic+" "+i.op_str}
    def op(a):return row(ins(a-S,4)[0])["op"]
    def check(a,expected):assert op(a)==expected,(hex(a),op(a),expected)
    def string(a):
        if a is None:return None
        for va,b in mapped[1:]:
            if va<=a<len(b)+va:
                i=a-va;k=b.find(b"\0",i,min(i+160,len(b)))
                if k>=i:
                    try:return b[i:k].decode("ascii")
                    except UnicodeDecodeError:return None
        return None
    def cfg(a,limit):
        todo=[a];seen={};edges=[];calls=[];gaps=[]
        while todo:
            v=todo.pop()
            if v in seen:continue
            if not a<=v<limit:gaps.append({"target":gh(v),"reason":"outside_bound"});continue
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
                if m in ("bl","blr"):calls.append({"site":gh(v),"target":gh(t) if m=="bl" else None,"op":i.op_str})
            for x in succ:
                if x is not None:edges.append([gh(v),gh(x)]);todo.append(x)
        return {"entry":gh(a),"instructions":[row(seen[x]) for x in sorted(seen)],"edges":edges,"calls":calls,"gaps":gaps}
    # Exact split factory: allocation wrapper delegates to real constructor.
    check(0x112017c,"mov w8, #0x1d8");check(0x1120198,"mov x20, x0")
    check(0x112019c,"bl #0xd0fac0");check(0x11201a0,"mov x0, x20")
    check(0x11201ac,"ret ")
    p=root/"derived/3.0.3/ghidra12.2/c/fa/00e0fac0.c"
    src=p.read_text("utf8");assert all(x in src for x in ("PTR_LAB_0495b730","\"FilterType\"","\"ItemKindType\"","\"ItemFilterType\"","\"IsSingleSelect\""))
    vt=0x495b730-S
    slots={hex(d):{"target":gh(ptr(vt+d)),"relocation":rel.get(vt+d)} for d in range(0,0x60,8)}
    for d in (0,0x40,0x58):assert ptr(vt+d) is not None
    constructor={"allocation_size":0x1d8,"factory":"0x01120120","constructor":"0x00e0fac0","vtable":"0x0495b730","slots":slots,"source_sha256":db.digest(p.read_bytes()),"cfg":cfg(0xe0fac0-S,0xe0fac0-S+0x600)}
    # Actual AITag index table from the precise 51-item CRC loop, not BCSV row order.
    for a,e in [(0x1acbb04,"add x24, x24, #0x8f0"),(0x1acbb24,"cmp x26, #0x33"),(0x1acbb2c,"add x8, x24, x26, lsl #3"),(0x1acbb38,"ldr x20, [x8, #0x1f0]"),(0x1acbbe4,"stp w9, w26, [x8]"),(0x1acbe58,"ldr w0, [x8, #4]")]:check(a,e)
    table=0x4935000+0x8f0+0x1f0
    tag=db.BCSV(root,"AITag");lookup={tag.string(i,"87BF00E8"):i for i in range(tag.n)}
    # Retain exact raw names even if an alias prevents an exact join.
    tagrows=[]
    for i in range(51):
        a=table+8*i;t=ptr(a);name=string(t)
        assert t is not None and name is not None
        k=lookup.get(name)
        tagrows.append({"bit_index":i,"name":name,"crc32":f"{db.crc(name):08X}","pointer_slot":gh(a),"string_address":gh(t),"source_row":k,"unique_id":tag.val(k,"54706054") if k is not None else None})
    assert len({r["name"] for r in tagrows})==51
    # Actual second-style write: pointer loaded from exact GOT + count/index bounds.
    assert ptr(0x4bc0100-S)==0x5326c78-S
    for a,e in [(0x1a778e4,"ldr x10, [x10, #0x100]"),(0x1a778f0,"ldr w11, [x10]"),(0x1a778fc,"ldur w8, [x29, #-0xc]"),(0x1a77900,"ldr x10, [x10, #8]"),(0x1a77904,"strh w8, [x10, w9, sxtw #1]")]:check(a,e)
    # Determine field hash from preceding original field lookup chain and preserve full window.
    stylewindow=[row(i) for i in ins(0x1a77000-S,0xa00)]
    kindwindow=[row(i) for i in ins(0x1a74000-S,0x600)]
    # Exact UI FilterType names, contiguous RELR pointer array.
    filters=[]
    base=0x495ba18-S
    for a in range(base-0x40,base+0x180,8):
        t=ptr(a);n=string(t)
        if n and n.isprintable():filters.append({"slot":gh(a),"name":n,"target":gh(t),"index_relative_to_495ba18":(a-base)//8})
    assert any(x["name"]=="cGiftToNpc" and x["slot"]=="0x495baa8" for x in filters)
    # Read callback CFG for both executable slots; recover original C if available.
    callbacks={}
    for d in (0x40,0x58):
        a=ptr(vt+d);g=cfg(a,a+0x1000)
        h=f"{a+S:08x}";p=root/"derived/3.0.3/ghidra12.2/c"/h[-4:-2]/(h+".c")
        if p.is_file():g["source"]=p.relative_to(root).as_posix();g["source_sha256"]=db.digest(p.read_bytes())
        callbacks[hex(d)]=g
    # Identify direct BL sites to the proven predicate and candidate callers, preserve all.
    va,b=mapped[0];caller_hits=[]
    for i,(w,) in enumerate(struct.iter_unpack("<I",memoryview(b)[:len(b)//4*4])):
        a=va+i*4;t=bl_target(w,a)
        if t in (0x1b07660-S,0xefa550-S,0x1e25b28-S,0x2801040-S):caller_hits.append({"site":gh(a),"target":gh(t),"context":[row(x) for x in ins(a-16,48)]})
    for f,need in {"76/01b07660":["0x732bb98","FUN_01b085e0","FUN_01b079ec","FUN_01b07660(&local_38)","PTR_DAT_04bc00c8"],"81/01b081a0":["0x2c1b3b5b","FUN_01b081a0(&local_38)"],"a5/00efa550":["FUN_01b07660(param_1)"]}.items():
        p=root/"derived/3.0.3/ghidra12.2/c"/(f+".c");s=p.read_text("utf8");assert all(x in s for x in need)
    report={"tag_table_ghidra":gh(table),"tag_exact_name_matches":sum(x["unique_id"] is not None for x in tagrows),"tag_index_entries":len(tagrows),"style2_writer":"0x01a77904","style2_global":"0x05326c80","factory_vtable":constructor["vtable"],"factory_slots":slots,"gift_filter_pointer":"0x0495baa8","gift_filter_relative_index":18,"gift_filter_actual_dispatch_proved":False,"runtime_verified":False}
    for n,o in [("followup_report.json",report),("tag_bit_index_51.json",tagrows),("ui_real_constructor.json",constructor),("ui_real_callbacks.json",callbacks),("filter_enum_strings.json",filters),("style2_writer_window.json",stylewindow),("kind_writer_window.json",kindwindow),("gift_predicate_callers.json",caller_hits)]:db.write(out/n,o)
    print("R108 FOLLOWUP",json.dumps(report,indent=2))
    print("TAG MAPPING",json.dumps(tagrows,ensure_ascii=False))
    print("FILTERS",json.dumps(filters))
    for title,data in [("STYLE WRITER",stylewindow),("KIND WRITER",kindwindow)]:
        print(title)
        for i in data:print(i["ghidra"],i["op"])
    for d,g in callbacks.items():
        print("UI SLOT",d,g["entry"],"instructions",len(g["instructions"]),"gaps",g["gaps"])
        for i in g["instructions"][:300]:print(i["ghidra"],i["op"])
    # Upgrade only exact tag matches; preserve unknowns and full raw bit masks.
    if report["tag_exact_name_matches"]==51:
        import sqlite3
        con=sqlite3.connect(out/"r105/acnh303_gift_research.sqlite3")
        con.execute("CREATE TABLE r108_tag_bit_index(bit_index INTEGER PRIMARY KEY,unique_id INTEGER UNIQUE,name TEXT,source_row INTEGER,crc32 TEXT)")
        con.executemany("INSERT INTO r108_tag_bit_index VALUES(?,?,?,?,?)",[(x["bit_index"],x["unique_id"],x["name"],x["source_row"],x["crc32"]) for x in tagrows])
        con.commit();assert con.execute("PRAGMA integrity_check").fetchone()[0]=="ok";con.close()
        p=out/"gift_web_sidecar_r108.json";web=json.loads(p.read_text("utf8"));web["native_tag_bit_index"]=tagrows;db.write(p,web)
if __name__=="__main__":
    p=argparse.ArgumentParser();p.add_argument("--root",type=Path,default=Path("."));p.add_argument("--out",type=Path,required=True);a=p.parse_args();main(a.root.resolve(),a.out.resolve())
