#!/usr/bin/env python3
"""R110: exact native Kind hash consumer, bilingual styles, targeted global provenance."""
import argparse, collections, json, sqlite3, struct, zlib
from pathlib import Path
from capstone import Cs, CS_ARCH_ARM64, CS_MODE_ARM
from capstone.arm64 import ARM64_OP_MEM, ARM64_OP_REG, ARM64_OP_IMM
import acnh303_r100_nso_decode as dec
import acnh303_r105_gift_db as db
from acnh303_round11_elf_xref import adrp_target, bl_target, add_imm, ldr_uimm
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
    def check(a,m,o):
        i=ins(a-S)[0];assert (i.mnemonic,i.op_str)==(m,o),(gh(i.address),i.mnemonic,i.op_str)
    def string(a):
        if a is None:return None
        for b,d in mapped[1:]:
            if b<=a<b+len(d):
                p=a-b;k=d.find(b"\0",p,min(len(d),p+256))
                if k>=p:return d[p:k].decode("utf8")
        return None
    def table(a,n):
        return [{"index":i,"name":string(ptr(a+8*i)),"slot":gh(a+8*i),"string_address":gh(ptr(a+8*i))} for i in range(n)]
    item=db.BCSV(root,"ItemParam");kind=db.BCSV(root,"ItemKind")
    assert item.b[11]==1 and item.cols["164A5F24"]==140 and item.width["164A5F24"]==4
    assert bl_target(int.from_bytes(raw(0x1a74128-S,4),"little"),0x1a74128-S)==0x1a88150-S
    check(0x1a74118,"ldrb","w8, [x8, #0xb]")
    check(0x1a74120,"mov","w0, w25")
    # Resolve the table actually referenced by the hash-path consumer, not the Japanese fallback.
    p=root/"derived/3.0.3/ghidra12.2/c/81/01a88150.c"
    src=p.read_text("utf8")
    assert all(s in src for s in ("PTR_DAT_04bb8f90 + lVar19 * 8 + 0x830","crc32b","lVar19 != 0xbd"))
    keybase=ptr(0x4bb8f90-S);assert keybase is not None
    native=table(keybase+0x830,189);ja=table(0x4a1dd80-S,189)
    keys={kind.string(i,"87BF00E8"):i for i in range(kind.n)}
    assert len(keys)==kind.n==189
    for x,y in zip(native,ja):
        x["ja"]=y["name"];x["ja_slot"]=y["slot"]
        r=keys.get(x["name"])
        x["bcsv_row"]=r
        x["uid"]=kind.val(r,"54706054") if r is not None else None
        x["bcsv_ja"]=kind.string(r,"036E8EBE") if r is not None else None
        x["ja_equal"]=x["bcsv_ja"]==x["ja"] if r is not None else None
        x["crc32"]=f"{db.crc(x['name']):08X}" if x["name"] is not None else None
    bycrc=collections.defaultdict(list)
    for x in native:
        if x["crc32"] is not None:bycrc[int(x["crc32"],16)].append(x)
    # Second style data path: actual BCSV field, cache, hash value and store.
    for a,m,o in [(0x1a76ee4,"mov","w24, #0x5f24"),(0x1a76ee8,"movk","w24, #0x164a, lsl #16"),(0x1a76f84,"cmp","w10, w24"),(0x1a76fcc,"ldr","w25, [x8]"),(0x1a77904,"strh","w8, [x10, w9, sxtw #1]")]:check(a,m,o)
    style=table(0x4a26c10-S,7);alt=table(0x4a26ca8-S,7)
    styles={db.crc(x["name"]):x["index"] for x in style}
    assert len(styles)==7
    # Do not claim the complete machine state: these are static exact table transformations.
    data=[];special=[];bitmap=[]
    for i in range(item.n):
        ident=item.val(i,"54706054");h=item.val(i,"5270EB75");s=item.val(i,"164A5F24")
        matches=bycrc[h]
        k=matches[0] if len(matches)==1 and matches[0]["bcsv_row"] is not None else None
        data.append({"item_id":ident,"native_kind":k["index"] if k else None,"style2_crc":f"{s:08X}","style2_index":styles.get(s),"style2_name":style[styles[s]]["name"] if s in styles else None})
        if ident in (0x9c4,0x839):
            special.append({"id":ident,"res_name":item.string(i,"48EF0398"),"kind":k["name"] if k else None,"kind_crc":f"{h:08X}"})
        v=item.val(i,"BCF5D17A")
        if v<0x800:bitmap.append({"item_id":ident,"res_name":item.string(i,"48EF0398"),"kind":k["name"] if k else None,"index":v})
    assert len(data)==11178 and len({x["item_id"] for x in data})==11178
    # VTable +70 and previous external tail target are now explicit next layers.
    vt=0x495b730-S;slot70=ptr(vt+0x70);assert slot70 is not None and va<=slot70<end
    from acnh303_round11_elf_xref import sx
    def cfg(entry,limit=0x5000):
        seen={};todo=[entry];edges=[];calls=[];gaps=[]
        while todo:
            a=todo.pop()
            if a in seen:continue
            if not entry<=a<min(end,entry+limit) or a%4:
                gaps.append({"address":gh(a),"reason":"outside_bound"});continue
            ii=ins(a)
            if not ii:gaps.append({"address":gh(a),"reason":"decode"});continue
            i=ii[0];seen[a]=row(i);m=i.mnemonic;o=i.operands;t=o[-1].imm if o and o[-1].type==ARM64_OP_IMM else None
            if m=="ret":succ=[]
            elif m=="br":succ=[];gaps.append({"address":gh(a),"reason":"indirect_branch","operand":i.op_str})
            elif m=="b":succ=[t]
            elif m.startswith("b.") or m in ("cbz","cbnz","tbz","tbnz"):succ=[a+4,t]
            else:
                succ=[a+4]
                if m in ("bl","blr"):calls.append({"site":gh(a),"target":gh(t) if m=="bl" else None,"operand":i.op_str})
            for b in succ:
                if b is not None:edges.append([gh(a),gh(b)]);todo.append(b)
        return {"entry":gh(entry),"instructions":[seen[a] for a in sorted(seen)],"edges":edges,"calls":calls,"gaps":gaps}
    graphs={"slot70":cfg(slot70),"tail_3459e80":cfg(0x3459e80-S),"kind_hash":cfg(0x1a88150-S,0x1800)}
    # Exact GOT root and four-element packaging array; collect focused windows only.
    got=0x4bb46f0-S;manager=ptr(got);assert manager is not None
    pack=0x532a758-S
    focus={got:"bitmap_got",manager:"bitmap_manager_slot",pack:"pack_array",pack+4:"pack1",pack+8:"pack2",pack+12:"pack3"}
    for a in (0x4bb8f90-S,):focus[a]="kind_key_got"
    pages={a&~4095 for a in focus}
    refs=[];offsets=[];seen=set()
    def emit(bucket,site,label):
        key=(site,label)
        if key in seen:return
        seen.add(key)
        begin=max(va,site-16);n=min(end-begin,160)
        bucket.append({"site":gh(site),"label":label,"window":[row(i) for i in ins(begin,n)]})
    for j,(w,) in enumerate(struct.iter_unpack("<I",memoryview(code)[:len(code)//4*4])):
        a=va+j*4;page=adrp_target(w,a)
        if page in pages:
            reg=w&31
            for q in range(j+1,min(j+24,len(code)//4)):
                ww=struct.unpack_from("<I",code,4*q)[0]
                op=add_imm(ww) or ldr_uimm(ww)
                if op and op["rn"]==reg and page+op["imm"] in focus:
                    emit(refs,va+4*q,focus[page+op["imm"]])
                # These are candidate xrefs, not a reaching-definitions proof.
        # Track exact movz/movk construction of 0xE98E0; include independent intervening instructions.
        if w&0x7f800000==0x52800000 and ((w>>5)&0xffff)==0x98e0 and ((w>>21)&3)==0:
            for q in range(j+1,min(j+8,len(code)//4)):
                ww=struct.unpack_from("<I",code,4*q)[0]
                if ww&0x7f800000==0x72800000 and ww&31==w&31 and ((ww>>21)&3)==1 and ((ww>>5)&0xffff)==0xe:
                    emit(offsets,va+4*q,"bitmap_offset_candidate");break
    try:pack_raw=raw(pack,16).hex()
    except ValueError:pack_raw=None
    report={"native_key_table":gh(keybase+0x830),"native_japanese_table":gh(0x4a1dd80-S),"kind_exact_names":sum(x["bcsv_row"] is not None for x in native),"kind_ja_equal":sum(x["ja_equal"] is True for x in native),"kind_item_resolved":sum(x["native_kind"] is not None for x in data),"style2_resolved":sum(x["style2_index"] is not None for x in data),"style2_counts":dict(collections.Counter(x["style2_name"] for x in data)),"special_items":special,"bitmap_index_kind_counts":dict(collections.Counter(x["kind"] or "unknown" for x in bitmap)),"bitmap_manager_slot":gh(manager),"pack_array_raw_hex":pack_raw,"global_candidate_count":len(refs),"bitmap_offset_candidate_count":len(offsets),"cfg":{k:{"entry":v["entry"],"instructions":len(v["instructions"]),"calls":v["calls"],"gaps":v["gaps"]} for k,v in graphs.items()},"actual_ui_dispatch_proved":False,"runtime_verified":False}
    for name,value in [("r110_report.json",report),("r110_kind_bilingual.json",native),("r110_style_tables.json",{"key":style,"ja":alt}),("r110_items.json",data),("r110_special_items.json",special),("r110_bitmap_indices.json",bitmap),("r110_target_cfg.json",graphs),("r110_global_candidates.json",refs),("r110_bitmap_offset_candidates.json",offsets)]:db.write(out/name,value)
    con=sqlite3.connect(out/"r105/acnh303_gift_research.sqlite3")
    con.execute("CREATE TABLE IF NOT EXISTS r110_static_item(item_id INTEGER PRIMARY KEY,native_kind INTEGER,style2_crc TEXT,style2_index INTEGER,style2_name TEXT,actual_ui_eligible INTEGER)")
    con.executemany("INSERT OR REPLACE INTO r110_static_item VALUES(?,?,?,?,?,NULL)",[(x["item_id"],x["native_kind"],x["style2_crc"],x["style2_index"],x["style2_name"]) for x in data])
    con.commit();assert con.execute("PRAGMA integrity_check").fetchone()[0]=="ok"
    assert con.execute("SELECT COUNT(*) FROM r110_static_item JOIN items ON item_id=id").fetchone()[0]==11178
    con.close()
    web=json.loads((out/"gift_web_sidecar_r109.json").read_text("utf8"));byid={x["item_id"]:x for x in data}
    for x in web["items"]:x["r110_static"]=byid[x["id"]]
    web["r110_static_report"]={k:v for k,v in report.items() if k!="cfg"}
    web["limitations"].append("R110 static enum mapping does not establish UI dispatch or live bitmap state")
    db.write(out/"gift_web_sidecar_r110.json",web)
    print("R110 REPORT",json.dumps(report,ensure_ascii=False),flush=True)
    print("R110 KIND",json.dumps(native,ensure_ascii=False),flush=True)
    print("R110 GLOBAL CANDIDATES",json.dumps(refs,ensure_ascii=False),flush=True)
    print("R110 BITMAP OFFSET CANDIDATES",json.dumps(offsets,ensure_ascii=False),flush=True)
    for k,g in graphs.items():
        print("R110 CFG",k,g["entry"])
        for x in g["instructions"][:250]:print(x["address"],x["op"])
if __name__=="__main__":
    p=argparse.ArgumentParser();p.add_argument("--root",type=Path,default=Path("."));p.add_argument("--out",type=Path,required=True);a=p.parse_args();main(a.root.resolve(),a.out.resolve())
