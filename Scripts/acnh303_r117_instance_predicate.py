#!/usr/bin/env python3
"""R117: slot state getter, remake descriptor enum, conservative composable gift predicate."""
import argparse,collections,json,sqlite3,struct
from pathlib import Path
from capstone import Cs,CS_ARCH_ARM64,CS_MODE_ARM
import acnh303_r100_nso_decode as dec
import acnh303_r105_gift_db as db
from acnh303_round11_elf_xref import bl_target
from acnh303_r110_gift_predicate import package_state_allowed
S=0x100000

def slot_query(flags,mark):
    return not bool(flags&1) or bool(mark)

def remake_rejected(count,word):
    if count==0:return False
    if count is None:return None
    # word=None represents a proved null pointer, not an unknown snapshot.
    return word is not None and word&0x18==0x10

def gift_leaf(*,valid,interaction,can_ftr,raw,remake_block,can_wrap,kind,ordinary,birthday,mode,unpacked_result=None):
    """C-derived stable-input model. None is unknown, never coerced to true.
    Unpacked result is the independently evaluated recursive leaf, not a guessed ID.
    valid refers to the UI wrapper's initial lookup. Raw record is exactly 8 bytes.
    """
    if mode not in ("ordinary","birthday"):raise ValueError("mode")
    if len(raw)!=8:raise ValueError("item record")
    if valid is False:return False
    if interaction==73 and can_ftr is True and raw[6]!=0:return False
    if remake_block is True:return False
    if valid is None or interaction is None or remake_block is None:return None
    if interaction==73 and can_ftr is None and raw[6]!=0:return None
    # CanGift is a runtime predicate, not merely ItemKind CanGift.
    allowed=package_state_allowed(can_wrap,raw[3],[0,12,13,14])
    if allowed is False:return False
    if allowed is None:return None
    if can_wrap and raw[3]&3:
        if mode=="ordinary":return unpacked_result
        if kind is None:return None
        if kind!=0xb9:return unpacked_result
    return birthday if mode=="birthday" else ordinary

def test():
    assert [slot_query(f,m) for f,m in ((0,0),(0,1),(1,0),(1,1))]==[True,True,False,True]
    assert remake_rejected(0,0x10) is False
    assert remake_rejected(1,0x10) is True
    assert remake_rejected(1,0x18) is False
    assert remake_rejected(1,None) is False
    assert remake_rejected(None,0x10) is None
    base=dict(valid=True,interaction=0,can_ftr=True,raw=bytes(8),remake_block=False,can_wrap=True,kind=0,ordinary=True,birthday=False,mode="ordinary")
    def g(**kw):return gift_leaf(**(base|kw))
    assert g() is True and g(mode="birthday") is False
    assert g(valid=False) is False and g(remake_block=True) is False
    assert g(remake_block=None) is None
    assert g(interaction=73,raw=bytes([0,0,0,0,0,0,1,0])) is False
    assert g(interaction=73,raw=bytes(8)) is True
    for subtype in range(16):
        flags=3|(subtype<<2);raw=bytes([0,0,0,flags,0,0,0,0])
        assert g(raw=raw,unpacked_result=True)==(subtype in (12,13,14,15))
    assert g(raw=bytes([0,0,0,1,0,0,0,0])) is None
    assert g(raw=bytes([0,0,0,1,0,0,0,0]),unpacked_result=False) is False
    assert g(raw=bytes([0,0,0,51,0,0,0,0]),kind=0xb9,mode="birthday",unpacked_result=True) is False

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
    def string(a):
        for b,d in mapped[1:]:
            if b<=a<b+len(d):
                k=a-b;j=d.find(b"\0",k,min(len(d),k+256));assert j>k
                return d[k:j].decode("utf8")
        raise ValueError(gh(a))
    prior=json.loads((out/"r116_report.json").read_text("utf8"));assert prior["english_enum_static_link_verified"]
    getter=0x30bfe5c-S
    actual=[(i.mnemonic,i.op_str) for i in ins(getter,24)]
    expected=[("ldrb","w9, [x0, #0x2c3]"),("tst","w9, #1"),("ldrb","w8, [x0, #0x315]"),("ccmp","w8, #0, #0, ne"),("cset","w0, ne"),("ret","")]
    assert actual==expected,actual
    # Direct call and relocation target evidence. A pointer slot is not necessarily a VTable.
    slots=[]
    for a in rel:
        if ptr(a)==getter:
            slots.append({"slot":gh(a),"nearby":[{"slot":gh(b),"target":gh(ptr(b)) if ptr(b) is not None else None} for b in range(a-32,a+40,8)]})
    calls=[]
    for a in range(max(va,0x3000000-S),min(end,0x3500000-S),4):
        w=struct.unpack_from("<I",code,a-va)[0]
        if bl_target(w,a)==getter:calls.append({"site":gh(a),"window":[row(i) for i in ins(a-24,72)]})
    src=root/"derived/3.0.3/ghidra12.2/c";evidence={}
    anchors={
      "ordinary":("76/01b07660",["FUN_01afcfa0","FUN_01afd600","(*puVar7 & 0x18) == 0x10","FUN_01b085e0","FUN_01b079ec","0x732bb98"]),
      "birthday":("81/01b081a0",["FUN_01afcfa0","FUN_01afd600","local_40 != 0xb9","FUN_01b079ec","0x2c1b3b5b"]),
      "remake_count":("cf/01afcfa0",["0xcb5eb33f","0xcb402a3","iVar4 < 8","iVar4 + 1"]),
      "descriptor":("d6/01afd600",["PTR_DAT_04bc0288","uVar9 < 6","switch(uVar9)","FUN_01ae4d10","return param_1 + 0xe","return param_1 + 0xc"]),
      "descriptor_writer":("3f/01a93f70",["0x6b749e8a","(&PTR_DAT_04a32a60)[lVar33]","(&PTR_DAT_04a32ac8)[lVar33]","PTR_DAT_04bc0288","= (short)uVar16"]),
      "package":("85/01b085e0",["FUN_01b03610","0x13U","bVar1 == 0xf"])}
    for name,(p,need) in anchors.items():
        f=src/(p+".c");b=f.read_bytes();assert all(x.encode() in b for x in need),(name,[x for x in need if x.encode() not in b])
        evidence[name]={"file":str(f.relative_to(root)),"sha256":db.digest(b),"anchors":need}
    item=db.BCSV(root,"ItemParam");kind=db.BCSV(root,"ItemKind");remake=db.BCSV(root,"ItemRemake")
    assert kind.cols["6B749E8A"]==16
    tables=[]
    for base in (0x4a32a60-S,0x4a32ac8-S):
        tables.append([{"index":i,"key":string(ptr(base+i*8)),"slot":gh(base+i*8)} for i in range(6)])
    counts=collections.Counter(kind.val(i,"6B749E8A") for i in range(kind.n))
    coverage=[]
    for t in tables:
        hashes={db.crc(x["key"]):x["index"] for x in t}
        coverage.append({"matches":sum(n for h,n in counts.items() if h in hashes),"distinct":len(counts.keys()&hashes.keys())})
    # Match the actual hash path by source coverage; report both if ambiguous.
    best=max(range(2),key=lambda i:coverage[i]["matches"])
    hashes={db.crc(x["key"]):x["index"] for x in tables[best]}
    rmap={remake.val(i,"54706054"):i for i in range(remake.n)}
    kmap={db.crc(kind.string(i,"87BF00E8")):i for i in range(kind.n)}
    data=[]
    for i in range(item.n):
        k=kmap[item.val(i,"5270EB75")];rid=item.val(i,"CB5EB33F")
        r=rmap.get(rid)
        # Signed byte used by native 01AFCFA0; preserve unresolved row as unknown.
        n=remake.val(r,"0CB402A3",True,1) if r is not None else None
        count=0 if rid==65535 else (None if n is None else n+1 if n<8 else 0)
        data.append({"item_id":item.val(i,"54706054"),"remake_id":rid,"fabric_count":count,"remake_type_crc":f"{kind.val(k,'6B749E8A'):08X}","remake_type_index":hashes.get(kind.val(k,"6B749E8A")),"actual_remake_block":None})
    report={"slot_getter":gh(getter),"direct_ui_calls":len(calls),"relocation_pointer_slots":slots,"remake_enum_tables":tables,"remake_enum_coverage":coverage,"remake_cache_target":gh(ptr(0x4bc0288-S)),"remake_item_rows":len(data),"remake_type_resolved":sum(x["remake_type_index"] is not None for x in data),"fabric_count_distribution":dict(collections.Counter(str(x["fabric_count"]) for x in data)),"runtime_verified":False}
    for n,o in [("r117_report.json",report),("r117_c_evidence.json",evidence),("r117_slot_getter.json",{"instructions":[row(i) for i in ins(getter,24)],"calls":calls,"slots":slots}),("r117_remake_items.json",data)]:db.write(out/n,o)
    con=sqlite3.connect(out/"r105/acnh303_gift_research.sqlite3")
    con.execute("CREATE TABLE IF NOT EXISTS r117_remake_item(item_id INTEGER PRIMARY KEY,remake_id INTEGER,fabric_count INTEGER,remake_type_crc TEXT,remake_type_index INTEGER,actual_remake_block INTEGER)")
    con.executemany("INSERT OR REPLACE INTO r117_remake_item VALUES(?,?,?,?,?,NULL)",[(x["item_id"],x["remake_id"],x["fabric_count"],x["remake_type_crc"],x["remake_type_index"]) for x in data])
    con.commit();assert con.execute("PRAGMA integrity_check").fetchone()[0]=="ok";con.close()
    web=json.loads((out/"gift_web_sidecar_r116.json").read_text("utf8"));byid={x["item_id"]:x for x in data}
    for x in web["items"]:x["r117_remake"]=byid[x["id"]]
    web["limitations"].append("R117 composite predicate requires snapshot-specific descriptor and recursive unpacking inputs; slot getter is not proven confirmation gate")
    db.write(out/"gift_web_sidecar_r117.json",web)
    print("R117 REPORT",json.dumps(report,ensure_ascii=False),flush=True)
    for c in calls[:30]:print("R117 SLOT CALL",json.dumps(c,ensure_ascii=False),flush=True)
if __name__=="__main__":
    p=argparse.ArgumentParser();p.add_argument("--root",type=Path,default=Path("."));p.add_argument("--out",type=Path,required=True);a=p.parse_args();main(a.root.resolve(),a.out.resolve())
