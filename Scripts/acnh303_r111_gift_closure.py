#!/usr/bin/env python3
"""R111 targeted recipe provenance, packaging initialization and filter jump-table closure."""
import argparse,collections,json,sqlite3,struct
from pathlib import Path
from capstone import Cs,CS_ARCH_ARM64,CS_MODE_ARM
from capstone.arm64 import ARM64_OP_IMM,ARM64_OP_MEM
import acnh303_r100_nso_decode as dec
import acnh303_r105_gift_db as db
from acnh303_round11_elf_xref import adrp_target,bl_target
S=0x100000
def main(root,out):
    elf,nso,mapped,segments,raw,tags,rel=dec.decode(root)
    cs=Cs(CS_ARCH_ARM64,CS_MODE_ARM);cs.detail=True
    va,code=mapped[0];end=va+len(code)
    def gh(a):return f"0x{a+S:08X}"
    def ins(a,n=4):return list(cs.disasm(raw(a,n),a))
    def row(i):return {"address":gh(i.address),"op":i.mnemonic+" "+i.op_str,"bytes":i.bytes.hex()}
    def check(a,op):
        i=ins(a-S)[0];assert i.mnemonic+" "+i.op_str==op,(hex(a),row(i))
    def ptr(a):
        r=rel.get(a,{})
        return r.get("addend") if r.get("type") in ("RELR",1027) and r.get("symbol")==0 else None
    def string(a):
        assert a is not None
        for b,d in mapped[1:]:
            if b<=a<b+len(d):
                p=a-b;k=d.find(b"\0",p,min(len(d),p+256))
                if k>=p:return d[p:k].decode("utf8")
        raise ValueError(gh(a))
    # Original static initializer, both paired stores.
    for a,op in [(0x1b17938,"add x8, x8, #0x758"),(0x1b1793c,"mov w9, #0xc"),(0x1b17940,"stp wzr, w9, [x8]"),(0x1b17944,"mov w9, #0xd"),(0x1b17948,"mov w10, #0xe"),(0x1b17954,"stp w9, w10, [x8, #8]")]:check(a,op)
    assert adrp_target(int.from_bytes(raw(0x1b17934-S,4),"little"),0x1b17934-S)+0x758==0x532a758-S
    pack=[0,12,13,14]
    # Independently validate the inferred field spelling and signed type.
    assert db.crc("DiyRecipeID s16")==0xbcf5d17a
    item=db.BCSV(root,"ItemParam");recipe=db.BCSV(root,"RecipeCraftParam")
    assert item.cols["BCF5D17A"]==266 and item.width["BCF5D17A"]==2
    assert item.n==11178 and recipe.n==924
    rindex=collections.defaultdict(list)
    for i in range(recipe.n):rindex[recipe.val(i,"54706054")].append(i)
    data=[]
    for i in range(item.n):
        v=item.val(i,"BCF5D17A",signed=True)
        matches=rindex.get(v,[]) if v>=0 else []
        data.append({"item_id":item.val(i,"54706054"),"diy_recipe_id":v if v>=0 else None,"raw_s16":v,"recipe_source_row":matches[0] if len(matches)==1 else None,"recipe_match_count":len(matches)})
    good=[x for x in data if x["diy_recipe_id"] is not None]
    # Reverse association: identify candidate recipe product field by comparing every 16-bit source column.
    expected={x["recipe_source_row"]:x["item_id"] for x in good if x["recipe_source_row"] is not None}
    product_fields=[]
    for h,w in recipe.width.items():
        if w==2:
            n=sum(recipe.val(i,h)==ident for i,ident in expected.items())
            product_fields.append({"crc32":h,"offset":recipe.cols[h],"matched_rows":n,"compared_rows":len(expected)})
    product_fields.sort(key=lambda x:-x["matched_rows"])
    # Decode actual jump table following the 39-entry FilterType string comparison.
    check(0xe0fe74,"cmp w8, #0x26")
    check(0xe0fe88,"ldrb w11, [x9, x8]")
    check(0xe0fe8c,"add x10, x10, x11, lsl #2")
    check(0xe0fe90,"br x10")
    jt=0x4169e3c-S;base=0xe0fe94-S
    assert adrp_target(int.from_bytes(raw(0xe0fe7c-S,4),"little"),0xe0fe7c-S)+0xe3c==jt
    filters=[]
    for i,b in enumerate(raw(jt,39)):
        slot=0x495ba18-S+8*i;dest=base+b*4
        assert va<=dest<end and dest%4==0
        filters.append({"index":i,"name":string(ptr(slot)),"slot":gh(slot),"table_byte":b,"target":gh(dest)})
    assert filters[18]["name"]=="cGiftToNpc" and filters[19]["name"]=="cBirthdayPresent"
    def cfg(entry):
        todo=[entry];seen={};calls=[];gaps=[];edges=[];refs=[]
        while todo:
            a=todo.pop()
            if a in seen:continue
            if not 0xe0fd10-S<=a<0xe10600-S or a%4:
                gaps.append({"site":gh(a),"reason":"outside_slot70_window"});continue
            ii=ins(a)
            if not ii:gaps.append({"site":gh(a),"reason":"decode"});continue
            i=ii[0];seen[a]=row(i);m=i.mnemonic;o=i.operands;t=o[-1].imm if o and o[-1].type==ARM64_OP_IMM else None
            if m in ("ret","br"):
                succ=[]
                if m=="br":gaps.append({"site":gh(a),"reason":"indirect_branch","op":i.op_str})
            elif m=="b":succ=[t]
            elif m.startswith("b.") or m in ("cbz","cbnz","tbz","tbnz"):succ=[a+4,t]
            else:
                succ=[a+4]
                if m in ("bl","blr"):calls.append({"site":gh(a),"target":gh(t) if m=="bl" else None})
            # Record relocated pointers reached by local ADRP + LDR/ADD, not necessarily callbacks.
            p=adrp_target(int.from_bytes(i.bytes,"little"),a)
            if p is not None:
                from acnh303_round11_elf_xref import add_imm,ldr_uimm
                for k in ins(a+4,24):
                    op=add_imm(int.from_bytes(k.bytes,"little")) or ldr_uimm(int.from_bytes(k.bytes,"little"))
                    if op and op["rn"]==(int.from_bytes(i.bytes,"little")&31):
                        q=p+op["imm"];r=ptr(q)
                        refs.append({"site":gh(k.address),"address":gh(q),"relocated_target":gh(r) if r is not None else None})
            for b in succ:
                if b is not None:edges.append([gh(a),gh(b)]);todo.append(b)
        return {"entry":gh(entry),"instructions":[seen[a] for a in sorted(seen)],"calls":calls,"gaps":gaps,"edges":edges,"address_candidates":refs}
    graphs={f["name"]:cfg(base+f["table_byte"]*4) for f in filters if f["index"] in (18,19)}
    # Confirm native bitmap root and distinguish borrowed source vs mutated destination.
    manager=ptr(0x4bb46f0-S);assert manager==0x55588d0-S
    checks={"0262af20":("af/0262af20",["param_2 + uVar11","param_4 + uVar11","0x800"]),"0262bed0":("be/0262bed0",["param_2 + uVar14","param_3 + uVar14","0xea6e0","0x800"]),"0262c270":("c2/0262c270",["param_2 + uVar6","param_3 + uVar6","0x800"]),"02618870":("88/02618870",["DAT_055588d0 + 0xe98e0","DAT_055588d0 + 0xe99e0","FUN_0262af20","FUN_0262c270"])}
    evidence={}
    for name,(p,anchors) in checks.items():
        src=(root/"derived/3.0.3/ghidra12.2/c"/(p+".c")).read_bytes()
        assert all(x.encode() in src for x in anchors),(name,anchors)
        evidence[name]={"sha256":db.digest(src),"anchors":anchors}
    # Reuse R110 candidate windows, no new whole-binary scan. Root publication requires an actual store.
    candidates=json.loads((out/"r110_global_candidates.json").read_text("utf8"))
    root_windows=[x for x in candidates if x["label"]=="bitmap_manager_slot"]
    offset_windows=json.loads((out/"r110_bitmap_offset_candidates.json").read_text("utf8"))
    report={"recipe_field":"DiyRecipeID s16","recipe_rows":recipe.n,"item_rows":item.n,"recipe_nonnegative":len(good),"recipe_exact_matches":sum(x["recipe_match_count"]==1 for x in good),"recipe_unmatched":[x for x in good if x["recipe_match_count"]!=1],"recipe_product_field_candidates":product_fields,"pack_subtypes":pack,"pack_init_stores":["0x01B17940","0x01B17954"],"bitmap_root_ghidra":gh(manager),"bitmap_root_main_offset":hex(manager),"bitmap_offsets":["0xE98E0","0xE99E0"],"bitmap_c_evidence":evidence,"root_candidate_windows":len(root_windows),"offset_candidate_windows":len(offset_windows),"filter_switch_table":gh(jt),"filter_cases":filters,"gift_cfg":{k:{"instructions":len(v["instructions"]),"calls":v["calls"],"gaps":v["gaps"]} for k,v in graphs.items()},"actual_item_predicate_proved":False,"runtime_verified":False}
    for n,o in [("r111_report.json",report),("r111_recipe_join.json",data),("r111_filter_cases.json",filters),("r111_filter_cfg.json",graphs),("r111_root_windows.json",root_windows),("r111_pack_init.json",[row(i) for i in ins(0x1b17934-S,0x24)])]:db.write(out/n,o)
    con=sqlite3.connect(out/"r105/acnh303_gift_research.sqlite3")
    con.execute("CREATE TABLE IF NOT EXISTS r111_recipe(item_id INTEGER PRIMARY KEY,diy_recipe_id INTEGER,raw_s16 INTEGER NOT NULL,recipe_source_row INTEGER,recipe_match_count INTEGER NOT NULL)")
    con.executemany("INSERT OR REPLACE INTO r111_recipe VALUES(?,?,?,?,?)",[(x["item_id"],x["diy_recipe_id"],x["raw_s16"],x["recipe_source_row"],x["recipe_match_count"]) for x in data])
    con.commit();assert con.execute("PRAGMA integrity_check").fetchone()[0]=="ok"
    assert con.execute("SELECT COUNT(*) FROM r111_recipe JOIN items ON item_id=id").fetchone()[0]==11178
    con.close()
    web=json.loads((out/"gift_web_sidecar_r110.json").read_text("utf8"));byid={x["item_id"]:x for x in data}
    for x in web["items"]:x["r111_recipe"]=byid[x["id"]]
    web["r111_pack_subtypes"]=pack
    web["limitations"].append("Recipe ID is static; actual DIY bitmaps and UI eligibility are not validated")
    db.write(out/"gift_web_sidecar_r111.json",web)
    print("R111 REPORT",json.dumps(report,ensure_ascii=False),flush=True)
    for k,g in graphs.items():
        print("R111 CASE",k,g["entry"])
        for i in g["instructions"]:print(i["address"],i["op"])
if __name__=="__main__":
    p=argparse.ArgumentParser();p.add_argument("--root",type=Path,default=Path("."));p.add_argument("--out",type=Path,required=True);a=p.parse_args();main(a.root.resolve(),a.out.resolve())
