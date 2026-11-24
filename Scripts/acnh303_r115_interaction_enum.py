#!/usr/bin/env python3
"""R115: exact interaction enum candidate join, cache lifetime and UI slot state provenance."""
import argparse,collections,json,sqlite3
from pathlib import Path
from capstone import Cs,CS_ARCH_ARM64,CS_MODE_ARM
import acnh303_r100_nso_decode as dec
import acnh303_r105_gift_db as db
from acnh303_round11_elf_xref import adrp_target,bl_target,add_imm,ldr_uimm
S=0x100000
def main(root,out):
    elf,nso,mapped,segments,raw,tags,rel=dec.decode(root)
    cs=Cs(CS_ARCH_ARM64,CS_MODE_ARM);cs.detail=True
    va,code=mapped[0];end=va+len(code)
    def gh(a):return f"0x{a+S:08X}"
    def ptr(a):
        r=rel.get(a,{})
        return r.get("addend") if r.get("type") in ("RELR",1027) and r.get("symbol")==0 else None
    def ins(a,n):return list(cs.disasm(raw(a,n),a))
    def row(i):return {"address":gh(i.address),"bytes":i.bytes.hex(),"op":i.mnemonic+" "+i.op_str}
    def check(a,m,o):
        i=ins(a-S,4)[0];assert (i.mnemonic,i.op_str)==(m,o),(hex(a),row(i))
    def string(a):
        for b,d in mapped[1:]:
            if b<=a<b+len(d):
                k=a-b;j=d.find(b"\0",k,min(len(d),k+256));assert j>k
                return d[k:j].decode("utf8")
        raise ValueError(gh(a))
    prev=json.loads((out/"r114_report.json").read_text("utf8"))
    assert prev["best_enum_candidates"][0]["table"]=="0x04965EF0"
    assert ptr(0x4bc0048-S)==0x5326d48-S
    for a,m,o in [(0x1a641f0,"ldr","x28, [x28, #0x48]"),(0x1a64248,"str","w20, [x28]"),(0x1a64250,"str","x0, [x28, #8]"),(0x1a6800c,"ldr","x21, [x21, #0x48]"),(0x1a68048,"str","xzr, [x21, #8]"),(0x1a6804c,"str","wzr, [x21]"),(0x1a6c488,"ldr","x10, [x10, #0x48]"),(0x1a6c4a4,"ldr","x10, [x10, #8]"),(0x1a6c4a8,"strh","w8, [x10, w9, sxtw #1]")]:check(a,m,o)
    item=db.BCSV(root,"ItemParam");kind=db.BCSV(root,"ItemKind")
    assert item.cols["F1246E5F"]==48 and item.width["F1246E5F"]==4
    assert db.crc("CanFtr u8")==0x90bc0855 and kind.cols["90BC0855"]==36 and kind.width["90BC0855"]==1
    table=0x4965ef0-S
    enum=[{"index":i,"name":string(ptr(table+i*8)),"slot":gh(table+i*8),"target":gh(ptr(table+i*8))} for i in range(82)]
    assert enum[0x49]["name"]=="MoneyBox"
    em={db.crc(x["name"]):x for x in enum};assert len(em)==82
    km={db.crc(kind.string(i,"87BF00E8")):i for i in range(kind.n)}
    items=[]
    for i in range(item.n):
        e=em[item.val(i,"F1246E5F")];k=km[item.val(i,"5270EB75")]
        items.append({"item_id":item.val(i,"54706054"),"candidate_enum":e["index"],"candidate_name":e["name"],"can_ftr":kind.val(k,"90BC0855"),"kind":kind.string(k,"87BF00E8"),"res_name":item.string(i,"3FEBC642"),"ordinary_kind_allowed":kind.val(k,"0732BB98"),"birthday_kind_allowed":kind.val(k,"2C1B3B5B")})
    assert len(items)==11178 and len({x["candidate_enum"] for x in items})==79
    # The cache store is confirmed; capture preceding conversion logic without
    # claiming a table alias until its dataflow is inspected.
    begin=0x1a6bc00-S;stop=0x1a6c4ac-S
    win=ins(begin,stop-begin)
    calls=[]
    for i in win:
        target=bl_target(int.from_bytes(i.bytes,"little"),i.address)
        if target is None or not va<=target<end:continue
        refs=[]
        callee=ins(target,min(0x1800,end-target))
        for j,k in enumerate(callee):
            w=int.from_bytes(k.bytes,"little");page=adrp_target(w,k.address)
            if page is None:continue
            for h in callee[j+1:j+12]:
                op=add_imm(int.from_bytes(h.bytes,"little")) or ldr_uimm(int.from_bytes(h.bytes,"little"))
                if not op or op["rn"]!=(w&31):continue
                addr=page+op["imm"];p=ptr(addr)
                if addr==table or p==table or (p is not None and 0<=table-p<0x4000):
                    refs.append({"site":gh(h.address),"address":gh(addr),"relocated_target":gh(p) if p is not None else None,"table_delta":table-p if p is not None else None})
        calls.append({"site":gh(i.address),"target":gh(target),"table_ref_candidates":refs})
    # Read-only source evidence for slot-local display flag and mode selection.
    p=root/"derived/3.0.3/ghidra12.2/c/40/03194070.c";b=p.read_bytes()
    anchors=["*(bool *)((long)plVar25 + 0x315) = bVar6","0x387U","*(undefined4 *)(plVar25 + 0x56) = uVar18","*(byte *)(plVar25 + 0x58) = bVar7"]
    assert all(x.encode() in b for x in anchors)
    diff=[x for x in items if x["ordinary_kind_allowed"]!=x["birthday_kind_allowed"]]
    money=[x for x in items if x["candidate_enum"]==0x49]
    report={"enum_table_candidate":gh(table),"item_field":"F1246E5F","matched":len(items),"distinct_used":79,"unused_indices":sorted(set(range(82))-{x["candidate_enum"] for x in items}),"moneybox_candidates":money,"permission_differences":diff,"can_ftr_exact_crc":True,"can_ftr_true":sum(x["can_ftr"]!=0 for x in items),"cache_allocation":["0x01A64248","0x01A64250"],"cache_release":["0x01A68048","0x01A6804C"],"cache_store":"0x01A6C4A8","direct_calls_in_writer_window":calls,"slot_display_flag_offset":"0x315","slot_mode_mask_values":[i+1 for i in range(10) if (0x387>>i)&1],"display_source_sha256":db.digest(b),"native_enum_writer_table_alias_verified":False,"runtime_verified":False}
    for n,o in [("r115_report.json",report),("r115_interaction_enum_candidate.json",enum),("r115_interaction_items.json",items),("r115_writer_window.json",[row(i) for i in win])]:db.write(out/n,o)
    con=sqlite3.connect(out/"r105/acnh303_gift_research.sqlite3")
    con.execute("CREATE TABLE IF NOT EXISTS r115_interaction_candidate(item_id INTEGER PRIMARY KEY,enum_candidate INTEGER NOT NULL,name_candidate TEXT NOT NULL,can_ftr INTEGER NOT NULL)")
    con.executemany("INSERT OR REPLACE INTO r115_interaction_candidate VALUES(?,?,?,?)",[(x["item_id"],x["candidate_enum"],x["candidate_name"],x["can_ftr"]) for x in items])
    con.commit();assert con.execute("PRAGMA integrity_check").fetchone()[0]=="ok";con.close()
    web=json.loads((out/"gift_web_sidecar_r114.json").read_text("utf8"));byid={x["item_id"]:x for x in items}
    for x in web["items"]:
        q=byid[x["id"]];x["r115_interaction"]={"enum_candidate":q["candidate_enum"],"name_candidate":q["candidate_name"],"can_ftr":q["can_ftr"]}
    web["limitations"].append("R115 82-entry interaction enum order is a candidate pending writer conversion linkage; CanFtr is exact CRC")
    db.write(out/"gift_web_sidecar_r115.json",web)
    print("R115 REPORT",json.dumps(report,ensure_ascii=False),flush=True)
    for i in win:
        if i.mnemonic in ("bl","adrp","mov","movk","strh","crc32b","cmp"):print("R115 WRITER",gh(i.address),i.mnemonic,i.op_str)
if __name__=="__main__":
    p=argparse.ArgumentParser();p.add_argument("--root",type=Path,default=Path("."));p.add_argument("--out",type=Path,required=True);a=p.parse_args();main(a.root.resolve(),a.out.resolve())
