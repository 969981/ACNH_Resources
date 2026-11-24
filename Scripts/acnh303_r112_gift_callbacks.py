#!/usr/bin/env python3
"""R112 authenticated callback CFG and narrowly scoped bitmap/root source evidence."""
import argparse,collections,json,re,sqlite3,struct
from pathlib import Path
from capstone import Cs,CS_ARCH_ARM64,CS_MODE_ARM
from capstone.arm64 import ARM64_OP_IMM,ARM64_OP_MEM,ARM64_OP_REG
import acnh303_r100_nso_decode as dec
import acnh303_r105_gift_db as db
from acnh303_round11_elf_xref import adrp_target,adr_target,bl_target
S=0x100000
def main(root,out):
    elf,nso,mapped,segments,raw,tags,rel=dec.decode(root)
    cs=Cs(CS_ARCH_ARM64,CS_MODE_ARM);cs.detail=True
    va,code=mapped[0];end=va+len(code)
    def gh(a):return f"0x{a+S:08X}" if a is not None else None
    def ins(a,n=4):return list(cs.disasm(raw(a,n),a))
    def row(i):return {"address":gh(i.address),"bytes":i.bytes.hex(),"op":i.mnemonic+" "+i.op_str}
    def ptr(a):
        r=rel.get(a,{})
        return r.get("addend") if r.get("type") in ("RELR",1027) and r.get("symbol")==0 else None
    previous=json.loads((out/"r111_report.json").read_text("utf8"))
    assert previous["recipe_exact_matches"]==924 and previous["recipe_product_field_candidates"][0]["crc32"]=="89A3482C" and previous["recipe_product_field_candidates"][0]["matched_rows"]==924
    assert db.crc("Item u16")==0x89a3482c
    cb={}
    for name,site,entry in [("cGiftToNpc",0xe0ffe4,0xe0c5b0),("cBirthdayPresent",0xe0fff0,0xe0c780)]:
        assert adr_target(int.from_bytes(raw(site-S,4),"little"),site-S)==entry-S
        cb[name]=entry-S
    got=0x4bb2230-S;ui_root=ptr(got)
    assert ui_root is not None
    assert ptr(0x4bb46f0-S)==0x55588d0-S
    # Explicit reachable CFG: direct tails within bounded region; outside edges are retained.
    def cfg(entry,limit=0x1000):
        seen={};todo=[entry];calls=[];edges=[];gaps=[]
        while todo:
            a=todo.pop()
            if a in seen:continue
            if not entry<=a<min(end,entry+limit) or a%4:
                gaps.append({"address":gh(a),"reason":"external_or_outside_bound"});continue
            ii=ins(a)
            if not ii:gaps.append({"address":gh(a),"reason":"decode"});continue
            i=ii[0];seen[a]=row(i);m=i.mnemonic;o=i.operands
            t=o[-1].imm if o and o[-1].type==ARM64_OP_IMM else None
            if m=="ret":succ=[]
            elif m=="br":succ=[];gaps.append({"address":gh(a),"reason":"indirect_branch","op":i.op_str})
            elif m=="b":
                if t is not None and not entry<=t<entry+limit:calls.append({"site":gh(a),"target":gh(t),"type":"tail"})
                succ=[t]
            elif m.startswith("b.") or m in ("cbz","cbnz","tbz","tbnz"):succ=[a+4,t]
            elif m=="udf":succ=[];gaps.append({"address":gh(a),"reason":"udf"})
            else:
                succ=[a+4]
                if m in ("bl","blr"):calls.append({"site":gh(a),"target":gh(t) if m=="bl" else None,"type":m})
            for b in succ:
                if b is not None:edges.append([gh(a),gh(b)]);todo.append(b)
        return {"entry":gh(entry),"instructions":[seen[a] for a in sorted(seen)],"calls":calls,"edges":edges,"gaps":gaps}
    # Known next function provides an upper boundary on the ordinary callback.
    graphs={name:cfg(entry,0x1d0 if name=="cGiftToNpc" else 0x1000) for name,entry in cb.items()}
    predicates={"0x01B07660":"ordinary","0x01B081A0":"birthday","0x00EFA550":"extra"}
    # No implicit attribution through a nearby BL; direct reachable call evidence only.
    for g in graphs.values():g["known_predicate_edges"]=[x for x in g["calls"] if x["target"] in predicates]
    # Resolve callback structure base and collect candidate consumers of +D80 via
    # an exact unsigned LDR Xn,[Xm,#D80] followed by same-register BLR/BR.
    # A local candidate is not a proven object alias.
    consumer=[]
    for j,(w,) in enumerate(struct.iter_unpack("<I",memoryview(code)[:len(code)//4*4])):
        if w&0xffc00000!=0xf9400000 or ((w>>10)&0xfff)*8!=0xd80:continue
        reg=w&31;a=va+4*j
        for i in ins(a+4,min(48,end-a-4)):
            if i.mnemonic in ("blr","br") and i.operands and i.operands[0].type==ARM64_OP_REG and i.reg_name(i.operands[0].reg)==f"x{reg}":
                start=max(va,a-32)
                consumer.append({"load":gh(a),"call":gh(i.address),"window":[row(x) for x in ins(start,min(112,end-start))]});break
            if i.mnemonic in ("b","bl","blr","br","ret","cbz","cbnz","tbz","tbnz") or i.mnemonic.startswith("b."):break
            if any(i.reg_name(r) in (f"x{reg}",f"w{reg}") for r in i.regs_access()[1]):break
    # Targeted C evidence retrieval on existing exports (no new broad disassembly).
    # Exact token matching, classify direct assignment separately from address mentions.
    srcroot=root/"derived/3.0.3/ghidra12.2/c"
    root_mentions=[];bitmap_mentions=[];ui_mentions=[]
    for p in srcroot.rglob("*.c"):
        s=p.read_text("utf8",errors="replace")
        if not any(x in s for x in ("DAT_055588d0","PTR_DAT_04bb46f0","0xe98e0","0xe99e0","PTR_DAT_04bb2230")):continue
        ls=s.splitlines()
        for i,line in enumerate(ls):
            kind=None
            if re.search(r"(?<![\w])DAT_055588d0\s*=(?!=)",line) or re.search(r"\*\([^;]*\)PTR_DAT_04bb46f0\s*=(?!=)",line):
                kind=root_mentions
            elif ("0xe98e0" in line or "0xe99e0" in line) and not line.lstrip().startswith("/*"):
                kind=bitmap_mentions
            elif "PTR_DAT_04bb2230" in line and ("0xd80" in s or "0xd88" in s):
                kind=ui_mentions
            if kind is not None:kind.append({"file":str(p.relative_to(root)),"line":i+1,"context":"\n".join(ls[max(0,i-2):i+3])})
    # Lifecycle evidence is pinned to existing decompiled source and exact layout arithmetic.
    lifecycle={}
    for name,p,anchors in [
        ("create","aa/0261aa48",["malloc(0xea908)","FUN_0261ab30(pvVar4)","DAT_055588d0 = pvVar4","0xea8e8"]),
        ("construct","ab/0261ab30",["memset(param_1 + 0x1d2fc,0,0xd01)","PTR_LAB_04a86fa0"]),
        ("unregister","a8/0261a890",["DAT_055576c8 == param_1","DAT_055588d0 = 0","FUN_0261b7f0","FUN_0261b994"])]:
        p=srcroot/(p+".c");b=p.read_bytes();assert all(x.encode() in b for x in anchors)
        lifecycle[name]={"source":str(p.relative_to(root)),"sha256":db.digest(b),"anchors":anchors}
    begin=0x1d2fc*8;stop=begin+0xd01
    assert begin<=0xe98e0 and 0xe99e0+256<=stop
    lifecycle["initial_zero_range"]={"start":hex(begin),"end_exclusive":hex(stop),"both_bitmaps_covered":True}
    db.write(out/"r112_diy_lifecycle.json",lifecycle)
    # Explicit direct C evidence for record conversion; preserve exact 8-byte records
    # and avoid assigning final replacement names from Kind alone.
    item=db.BCSV(root,"ItemParam");recipe=db.BCSV(root,"RecipeCraftParam")
    items={item.val(i,"54706054"):i for i in range(item.n)}
    records=[]
    for i in range(recipe.n):
        ident=recipe.val(i,"89A3482C");j=items[ident];rid=recipe.val(i,"54706054")
        assert item.val(j,"BCF5D17A",signed=True)==rid
        records.append({"recipe_id":rid,"item_id":ident,"recipe_row":i})
    assert len(records)==924 and len({x["recipe_id"] for x in records})==924
    con=sqlite3.connect(out/"r105/acnh303_gift_research.sqlite3")
    con.execute("CREATE TABLE IF NOT EXISTS r112_recipe_product(recipe_id INTEGER PRIMARY KEY,item_id INTEGER NOT NULL UNIQUE,recipe_row INTEGER NOT NULL)")
    con.executemany("INSERT OR REPLACE INTO r112_recipe_product VALUES(?,?,?)",[(x["recipe_id"],x["item_id"],x["recipe_row"]) for x in records])
    con.commit();assert con.execute("PRAGMA integrity_check").fetchone()[0]=="ok"
    con.close()
    web=json.loads((out/"gift_web_sidecar_r111.json").read_text("utf8"))
    web["r112_recipe_product_field"]={"name":"Item u16","hash":"89A3482C","matched":924}
    web["r112_filter_registration"]={k:gh(v) for k,v in cb.items()}
    web["limitations"].append("Registered callback does not prove actual UI evaluation; live bitmap state remains unknown")
    db.write(out/"gift_web_sidecar_r112.json",web)
    report={"recipe_product_field":"Item u16","recipe_product_matches":924,"ui_root_ghidra":gh(ui_root),"ui_root_main_offset":hex(ui_root),"filter_parameter_offset":"0xD80","callbacks":{k:{"entry":v["entry"],"instructions":len(v["instructions"]),"calls":v["calls"],"gaps":v["gaps"],"known_predicate_edges":v["known_predicate_edges"]} for k,v in graphs.items()},"indirect_consumer_candidates":len(consumer),"diy_lifecycle":lifecycle,"root_assignment_candidates":len(root_mentions),"bitmap_source_mentions":len(bitmap_mentions),"ui_source_mentions":len(ui_mentions),"runtime_verified":False}
    for n,o in [("r112_report.json",report),("r112_callback_cfg.json",graphs),("r112_callback_consumers.json",consumer),("r112_diy_root_assignments.json",root_mentions),("r112_bitmap_mentions.json",bitmap_mentions),("r112_ui_source_mentions.json",ui_mentions),("r112_recipe_product.json",records)]:db.write(out/n,o)
    print("R112 REPORT",json.dumps(report,ensure_ascii=False),flush=True)
    print("R112 ROOT ASSIGNMENTS",json.dumps(root_mentions,ensure_ascii=False),flush=True)
    print("R112 CONSUMERS",json.dumps(consumer[:60],ensure_ascii=False),flush=True)
    for name,g in graphs.items():
        print("R112 CALLBACK",name,g["entry"])
        for x in g["instructions"]:print(x["address"],x["op"])
if __name__=="__main__":
    p=argparse.ArgumentParser();p.add_argument("--root",type=Path,default=Path("."));p.add_argument("--out",type=Path,required=True);a=p.parse_args();main(a.root.resolve(),a.out.resolve())
