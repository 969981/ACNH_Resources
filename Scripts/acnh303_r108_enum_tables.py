#!/usr/bin/env python3
"""R108 final evidence: native enum tables and writer input field provenance."""
import argparse,collections,json,struct,sqlite3,zlib
from pathlib import Path
from capstone import Cs,CS_ARCH_ARM64,CS_MODE_ARM
from capstone.arm64 import ARM64_OP_IMM
import acnh303_r100_nso_decode as dec
import acnh303_r105_gift_db as db
S=0x100000
def main(root,out):
    elf,nso,mapped,segments,raw,tags,rel=dec.decode(root)
    cs=Cs(CS_ARCH_ARM64,CS_MODE_ARM);cs.detail=True
    def gh(a):return hex(a+S)
    def ptr(a):
        x=rel.get(a,{})
        return x.get("addend") if x.get("type") in ("RELR",1027) and x.get("symbol")==0 else None
    def string(a):
        for va,b in mapped[1:]:
            if a is not None and va<=a<va+len(b):
                i=a-va;k=b.find(b"\0",i,min(i+128,len(b)))
                if k>=i:return bytes(b[i:k])
        return None
    def ins(a,n):return list(cs.disasm(raw(a-S,n),a-S))
    def row(i):return {"ghidra":gh(i.address),"op":i.mnemonic+" "+i.op_str,"bytes":i.bytes.hex()}
    def check(a,e):
        i=ins(a,4)[0];assert i.mnemonic+" "+i.op_str==e,(hex(a),i.mnemonic,i.op_str,e)
    # Both physical style string lists feed CRC lookup into the same store.
    for a,e in [(0x1a774b8,"add x20, x20, #0xbe0"),(0x1a774e4,"cmp x28, #7"),(0x1a774f8,"ldr x22, [x8, #0x30]"),(0x1a775a8,"stp w9, w28, [x8]"),(0x1a770d0,"add x20, x20, #0xc48"),(0x1a77104,"cmp x28, #7"),(0x1a77118,"ldr x22, [x8, #0x60]"),(0x1a771c8,"stp w9, w28, [x8]"),(0x1a77904,"strh w8, [x10, w9, sxtw #1]")]:check(a,e)
    def table(a,n):
        rs=[]
        for i in range(n):
            slot=a+8*i;t=ptr(slot)
            assert t is not None
            name_bytes=string(t);assert name_bytes is not None,(gh(slot),gh(t))
            try:name=name_bytes.decode("utf-8")
            except UnicodeDecodeError:name=None
            rs.append({"index":i,"name":name,"raw_hex":name_bytes.hex(),"crc32":f"{zlib.crc32(name_bytes)&0xffffffff:08X}","slot":gh(slot),"string_address":gh(t)})
        return rs
    style=table(0x4926be0+0x30,7);alt=table(0x4926c48+0x60,7)
    kind=table(0x491cb20+0x1260,189)
    # Confirm source field hash -> exact Native category enum -> actual row write.
    check(0x1a74014,"mov w24, #0xeb75");check(0x1a74018,"movk w24, #0x5270, lsl #16")
    check(0x1a74224,"cmp x25, #0xbd");check(0x1a74238,"ldr x23, [x8, #0x1260]")
    check(0x1a745f8,"ldr x10, [x10, #0xc8]")
    kw=ins(0x1a745f4,0x40)
    stores=[row(i) for i in kw if i.mnemonic=="strh"]
    assert len(stores)==1
    item=db.BCSV(root,"ItemParam");k=db.BCSV(root,"ItemKind")
    knames={k.string(i,"87BF00E8"):i for i in range(k.n)}
    kcrc=collections.defaultdict(list)
    for name,i in knames.items():kcrc[db.crc(name)].append(i)
    khash=collections.defaultdict(list)
    for x in kind:khash[int(x["crc32"],16)].append(x)
    # Native table and BCSV are independent namespaces. Never infer index from row order.
    for x in kind:
        candidates=kcrc[int(x["crc32"],16)]
        exact=[i for i in candidates if k.string(i,"87BF00E8")==x["name"]]
        x["bcsv_matches"]=[{"row":i,"key":k.string(i,"87BF00E8"),"uid":k.val(i,"54706054")} for i in candidates]
        x["exact_name_match"]=len(exact)==1
    unmatched_bcsv=[name for name in knames if name not in {x["name"] for x in kind}]
    duplicate_crc={f"{h:08X}":[x["index"] for x in xs] for h,xs in khash.items() if len(xs)>1}
    data=[]
    for i in range(item.n):
        value=item.val(i,"5270EB75");ks=kcrc[value]
        assert len(ks)==1,(i,value,ks)
        r=ks[0];key=k.string(r,"87BF00E8")
        matches=khash[value];exact=[x for x in matches if x["name"]==key]
        resolved=len(matches)==len(exact)==1
        data.append({"item_id":item.val(i,"54706054"),"kind_enum":exact[0]["index"] if resolved else None,"kind_key":key,"kind_uid":k.val(r,"54706054"),"native_candidates":[x["index"] for x in matches],"status":"exact_unique_crc_and_name" if resolved else "unresolved"})
    assert len(data)==11178 and len({x["item_id"] for x in data})==11178
    discrepancy={"native_rows":len(kind),"bcsv_rows":k.n,"native_exact_name_matches":sum(x["exact_name_match"] for x in kind),"unmatched_bcsv_keys":unmatched_bcsv,"unmatched_native":[x for x in kind if not x["exact_name_match"]],"duplicate_native_crc":duplicate_crc,"item_resolved":sum(x["kind_enum"] is not None for x in data),"item_unresolved":sum(x["kind_enum"] is None for x in data)}
    db.write(out/"kind_enum_discrepancy.json",discrepancy)
    print("R109 KIND DISCREPANCY",json.dumps(discrepancy,ensure_ascii=False),flush=True)
    print("R109 STYLE TABLES",json.dumps({"primary":style,"alternate":alt},ensure_ascii=False),flush=True)
    print("R109 NATIVE KIND",json.dumps(kind,ensure_ascii=False),flush=True)
    # Enumerated style field coverage is an independent candidate, not proof until writer input is traced.
    hashes={int(x["crc32"],16) for x in style+alt}
    fields=[]
    for h,w in item.width.items():
        if w!=4:continue
        vals=[item.val(i,h) for i in range(item.n)];counts=collections.Counter(vals)
        if all(v in hashes for v in counts) and len(counts)>1:
            fields.append({"hash":h,"distinct":len(counts),"counts":{f"{v:08X}":n for v,n in counts.items()}})
    # Preceding instructions expose exact field comparison, and input cache slot.
    pre=[row(i) for i in ins(0x1a76000,0x1100)]
    # Follow the real VTable +0x60 tail call recovered in +0x40.
    check(0xdf4500,"ldr x1, [x8, #0x60]");check(0xdf4504,"br x1")
    target=ptr(0x495b730-S+0x60);assert target is not None
    ui=[row(i) for i in ins(target+S,0x600)]
    info={"style_enum_table":style,"style_alternate_table":alt,"item_kind_enum_count":len(kind),"item_kind_native_store":stores[0],"item_kind_matches":discrepancy["item_resolved"],"item_kind_unresolved":discrepancy["item_unresolved"],"style_field_candidates":fields,"item_header_byte_0b":item.b[11],"ui_slot60":gh(target),"runtime_verified":False}
    for n,x in [("enum_tables_report.json",info),("kind_enum_189.json",kind),("item_kind_native_enum_11178.json",data),("style_writer_input_window.json",pre),("ui_slot60_window.json",ui)]:db.write(out/n,x)
    con=sqlite3.connect(out/"r105/acnh303_gift_research.sqlite3")
    con.execute("CREATE TABLE r108_native_kind_enum(item_id INTEGER PRIMARY KEY,kind_enum INTEGER,kind_key TEXT,kind_uid INTEGER)")
    con.executemany("INSERT INTO r108_native_kind_enum VALUES(?,?,?,?)",[(x["item_id"],x["kind_enum"],x["kind_key"],x["kind_uid"]) for x in data]);con.commit();assert con.execute("PRAGMA integrity_check").fetchone()[0]=="ok";con.close()
    p=out/"gift_web_sidecar_r108.json";web=json.loads(p.read_text("utf8"));byid={x["item_id"]:x for x in data}
    for x in web["items"]:x["native_kind_enum"]=byid[x["id"]]["kind_enum"]
    web["style_enum_tables"]={"primary":style,"alternate":alt}
    web["native_kind_coverage"]=discrepancy
    web["limitations"].append("Native Kind values are nullable until unique exact name/CRC match; style source-field and actual filter dispatch remain unverified")
    db.write(p,web)
    print("R108 ENUM TABLES",json.dumps(info,ensure_ascii=False,indent=2))
    print("STYLE INPUT")
    for x in pre:
        if "movk" in x["op"] or "mov w24" in x["op"] or "cmp w10, w24" in x["op"] or "ldr w25" in x["op"]:print(x["ghidra"],x["op"])
    print("UI SLOT60",gh(target))
    for x in ui[:140]:print(x["ghidra"],x["op"])
if __name__=="__main__":
    p=argparse.ArgumentParser();p.add_argument("--root",type=Path,default=Path("."));p.add_argument("--out",type=Path,required=True);a=p.parse_args();main(a.root.resolve(),a.out.resolve())
