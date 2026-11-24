#!/usr/bin/env python3
"""R116: close English interaction enum and validate MoneyBox instance amount semantics."""
import argparse,collections,json,sqlite3,struct
from pathlib import Path
from capstone import Cs,CS_ARCH_ARM64,CS_MODE_ARM
import acnh303_r100_nso_decode as dec
import acnh303_r105_gift_db as db
from acnh303_round11_elf_xref import bl_target
S=0x100000
def amount(enum,can_ftr,raw):
    if enum!=73 or not can_ftr:return 0
    return min(raw[6],99)
def with_amount(enum,can_ftr,raw,value):
    result=bytearray(raw)
    if enum==73 and can_ftr:result[6]=max(0,min(99,value))
    return bytes(result)
def test():
    raw=bytes([0x55,0x07,0,0,0,0,255,0])
    assert amount(73,True,raw)==99
    assert amount(73,False,raw)==0
    assert amount(0,True,raw)==0
    for n in (-1,0,1,98,99,100,255):
        r=with_amount(73,True,raw,n);assert amount(73,True,r)==max(0,min(99,n))
        assert r[:6]==raw[:6] and r[7]==raw[7]
    assert with_amount(0,True,raw,0)==raw
    assert with_amount(73,False,raw,0)==raw
def main(root,out):
    test()
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
    prev=json.loads((out/"r115_report.json").read_text("utf8"))
    assert prev["matched"]==11178 and prev["distinct_used"]==79
    assert ptr(0x4bb9950-S)+0x430==0x4965ef0-S
    assert ptr(0x4bc0048-S)==0x5326d48-S
    for a,m,o in [(0x1a6beb4,"mov","w25, #0x6e5f"),(0x1a6beb8,"movk","w25, #0xf124, lsl #16"),(0x1a6bf54,"cmp","w10, w25"),(0x1a6bfc0,"mov","w0, w21"),(0x1a6bfc4,"mov","x1, xzr"),(0x1a6bfcc,"cmp","w0, #0x52"),(0x1a6c4a8,"strh","w8, [x10, w9, sxtw #1]")]:check(a,m,o)
    assert bl_target(int.from_bytes(raw(0x1a6bfc8-S,4),"little"),0x1a6bfc8-S)==0x1a86140-S
    src=root/"derived/3.0.3/ghidra12.2/c"
    evidence={}
    for name,p,need in [
        ("converter","61/01a86140",["PTR_DAT_04bb9950","puVar4 + lVar20 * 8 + 0x430","lVar20 != 0x52","crc32b","DAT_0530c948 = uVar6"]),
        ("getter","b5/01aeb510",["uVar9 != 0x49","-0x6f43f7ab","*(byte *)(param_1 + 0xe)","bVar8 = 99"]),
        ("setter","b1/01aeb1f0",["uVar8 != 0x49","-0x6f43f7ab","param_2 = 99","*(byte *)(param_1 + 0xe) ="]),
        ("price_a","07/01af0770",["FUN_01aed730","FUN_01aeb510(param_1)","iVar8 = iVar8 + iVar4 * 1000"]),
        ("price_b","0b/01af0bc4",["FUN_01aed730","FUN_01aeb510(param_1)","uVar8 = uVar8 + iVar4 * 1000"]),
        ("price_base","d7/01aed730",["0x718b024d"]),
        ("actor_read","42/01454200",["FUN_01aeb510(&local_48)","*(undefined4 *)(param_1 + 0x540) = uVar3"]),
        ("actor_write","40/014540a0",["FUN_01aeb1f0(&local_58,param_2)","local_5c = 3","FUN_0150bc50"]),
        ("actor_copy","6a/01476a50",["FUN_01aeb1f0(&local_70,(int)plVar15[0xa8])"]),
        ("copy_reset","20/027d2090",["uVar7 == 0x49","FUN_01aeb1f0(&local_78,0)"]),
        ("slot_set","b8/0313b820",["0x2b0) = param_3","0x315) = param_3 == 2","0x2c0"]),
        ("slot_bulk","b8/0349b820",["0x2b0) = iVar7","0x315) = iVar7 == 2","0x2c0"])]:
        f=src/(p+".c");b=f.read_bytes()
        assert all(x.encode() in b for x in need),(name,[x for x in need if x.encode() not in b])
        evidence[name]={"file":str(f.relative_to(root)),"sha256":db.digest(b),"anchors":need}
    # Verify actual calls by opcode; C anchors provide separate semantic evidence.
    calls={}
    for name,a,n,t in [("price_a",0x1af0770,0x200,0x1aeb510),("price_b",0x1af0bc4,0x200,0x1aeb510),("actor_read",0x1454200,0x140,0x1aeb510),("actor_write",0x14540a0,0x160,0x1aeb1f0),("copy_reset",0x27d2090,0x240,0x1aeb1f0)]:
        matches=[row(i) for i in ins(a-S,n) if bl_target(int.from_bytes(i.bytes,"little"),i.address)==t-S]
        calls[name]=matches
    # Collect exact LDRB/STRB +315 candidates in UI code, not a proven object alias.
    slot_refs=[]
    for a in range(max(va,0x3000000-S),min(end,0x3500000-S),4):
        w=struct.unpack_from("<I",code,a-va)[0]
        if w&0xffc00000 not in (0x39400000,0x39000000) or (w>>10)&0xfff!=0x315:continue
        slot_refs.append({"site":gh(a),"window":[row(i) for i in ins(a-24,72)]})
    items=json.loads((out/"r115_interaction_items.json").read_text("utf8"))
    money=[x for x in items if x["candidate_enum"]==73]
    assert {x["item_id"] for x in money}=={1877,14479,14714}
    report={"english_enum_static_link_verified":True,"table":"0x04965EF0","converter":"0x01A86140","field_crc":"F1246E5F","field_original_name":None,"moneybox_items":money,"amount_raw_offset":6,"amount_wrapper_offset":14,"amount_range":[0,99],"price_contribution_per_unit":1000,"slot_offset_candidates":len(slot_refs),"calls":calls,"runtime_verified":False}
    for n,o in [("r116_report.json",report),("r116_c_evidence.json",evidence),("r116_slot_flag_refs.json",slot_refs),("r116_converter_window.json",[row(i) for i in ins(0x1a86140-S,0x500)])]:db.write(out/n,o)
    con=sqlite3.connect(out/"r105/acnh303_gift_research.sqlite3")
    con.execute("CREATE TABLE IF NOT EXISTS r116_interaction(item_id INTEGER PRIMARY KEY,interaction_enum INTEGER NOT NULL,interaction_key TEXT NOT NULL,can_ftr INTEGER NOT NULL,moneybox_amount_applicable INTEGER NOT NULL)")
    con.executemany("INSERT OR REPLACE INTO r116_interaction VALUES(?,?,?,?,?)",[(x["item_id"],x["candidate_enum"],x["candidate_name"],x["can_ftr"],int(x["candidate_enum"]==73 and x["can_ftr"]!=0)) for x in items])
    con.commit();assert con.execute("PRAGMA integrity_check").fetchone()[0]=="ok";con.close()
    web=json.loads((out/"gift_web_sidecar_r115.json").read_text("utf8"));byid={x["item_id"]:x for x in items}
    for x in web["items"]:
        q=byid[x["id"]];x["r116_interaction"]={"enum":q["candidate_enum"],"key":q["candidate_name"],"can_ftr":q["can_ftr"],"moneybox_amount_applicable":q["candidate_enum"]==73 and bool(q["can_ftr"]),"actual_instance_amount":None}
    web["limitations"].append("R116 confirms English enum static linkage; actual instance amount and final screen behavior remain unverified")
    db.write(out/"gift_web_sidecar_r116.json",web)
    print("R116 REPORT",json.dumps(report,ensure_ascii=False),flush=True)
    for x in slot_refs[:30]:print("R116 SLOT REF",json.dumps(x,ensure_ascii=False),flush=True)
if __name__=="__main__":
    p=argparse.ArgumentParser();p.add_argument("--root",type=Path,default=Path("."));p.add_argument("--out",type=Path,required=True);a=p.parse_args();main(a.root.resolve(),a.out.resolve())
