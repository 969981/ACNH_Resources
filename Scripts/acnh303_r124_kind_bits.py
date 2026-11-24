#!/usr/bin/env python3
"""R124 original Kind bit accessors and selected wrapping evidence.
Conservative dispatch under original loaded resources; no live state mutations.
"""
import argparse,collections,json,sqlite3,struct
from pathlib import Path
from acnh303_r123_birthday_dispatch import dispatch

def eat_candidate(kind,raw_can_eat,extra_cache=None):
    # 01B04AB0: valid nonzero kind bypasses the alternate cache path.
    # The unsigned 16-bit comparison (kind-189)&0xffff < 0xff44
    # selects kind 0 and out-of-range values. Only original 0..188 supported.
    if not 0<=kind<189:return None
    if raw_can_eat:return True
    if kind==0:return None if extra_cache is None else extra_cache==1
    return False

def main(root,out):
    import acnh303_r105_gift_db as db
    import acnh303_r100_nso_decode as dec
    from acnh303_round11_elf_xref import adrp_target,add_imm,ldr_uimm,bl_target
    from capstone import Cs,CS_ARCH_ARM64,CS_MODE_ARM
    def load(n):return json.loads((out/n).read_text("utf8"))
    prev=load("r123_report.json");assert prev["dispatch_items"]==11178 and prev["birthday_matrix_cases"]==162
    assert prev["kind_57_name"]=="Fruit"
    assert db.crc("CanEat u8")==0x9b433dd5 and db.crc("CanPlant u8")==0xd4697ff8
    assert eat_candidate(0,False) is None and eat_candidate(0,False,1) is True and eat_candidate(1,False) is False
    assert all((((k-189)&65535)<0xff44)==(k==0) for k in range(189))
    src=root/"derived/3.0.3/ghidra12.2/c";ev={}
    for name,p,need in [
      ("eat","4a/01b04ab0",["-0x64bcc22b","puVar5 + 0x28","PTR_DAT_04bc0070","== 1","<\n            0xff44"]),
      ("plant","4e/01b14e50",["-0x2b968008","puVar5 + 0x3c"]),
      ("bit_dispatch","2e/01b12e40",["case 7:","-0x2b968008","case 0xb:","FUN_01b04ab0"]),
      ("selected_item_dispatch","9a/010b9adc",["PTR_s_cItemSelect_04bbb488","*param_1 + 0x38","lVar11 + 0xd90","FUN_02677ea0","return 0;"])]:
        f=src/(p+".c");b=f.read_bytes();assert all(x.encode() in b for x in need),(name,[x for x in need if x.encode() not in b]);ev[name]={"file":str(f.relative_to(root)),"sha256":db.digest(b),"anchors":need}
    elf,nso,mapped,segments,raw,tags,rel=dec.decode(root);S=0x100000
    cs=Cs(CS_ARCH_ARM64,CS_MODE_ARM);va,code=mapped[0];end=va+len(code)
    def gh(a):return f"0x{a+S:08X}" if a is not None else None
    def ptr(a):
        r=rel.get(a,{})
        return r.get("addend") if r.get("type") in ("RELR",1027) and r.get("symbol")==0 else None
    def ins(a,n):return [{"address":gh(i.address),"bytes":i.bytes.hex(),"op":i.mnemonic+" "+i.op_str} for i in cs.disasm(raw(a-S,n),a-S)]
    def string(a):
        if a is None:return None
        for b,d in mapped[1:]:
            if b<=a<b+len(d):
                k=a-b;j=d.find(b"\0",k,min(len(d),k+128))
                if j<=k:return None
                try:s=d[k:j].decode("utf8")
                except UnicodeDecodeError:return None
                return s if all(c.isprintable() for c in s) else None
        return None
    for a,op in [(0x10c89b0,"cmp w0, #0"),(0x10c89b4,"cset w0, eq"),(0x10c8ad4,"ldrb w8, [sp, #0x13]"),(0x10c8ad8,"tst w8, #3"),(0x10c8adc,"cset w8, ne"),(0x10c8ae0,"and w0, w0, w8")]:assert ins(a,4)[0]["op"]==op
    for a,t in [(0x10c89ac,0x10b9adc),(0x10c8ac4,0x1b032d0),(0x10c8ad0,0x1b032d0)]:assert bl_target(int.from_bytes(raw(a-S,4),"little"),a-S)==t-S
    targets={a-S for a in (0x1b12e40,0x1b04ab0,0x1b14e50,0x10c89a0,0x10c89c0)}
    refs=[{"slot":gh(a),"target":gh(ptr(a)),"nearby":[{"slot":gh(q),"target":gh(ptr(q))} for q in range(a-0x40,a+0x48,8)]} for a in rel if ptr(a) in targets]
    calls=[]
    for j,(w,) in enumerate(struct.iter_unpack("<I",memoryview(code)[:len(code)//4*4])):
        if w&0xfc000000!=0x94000000:continue
        a=va+j*4;t=bl_target(w,a)
        if t in targets:calls.append({"site":gh(a),"target":gh(t),"window":ins(a+S-24,64)})
    # Candidate native parameter enum table: plant=7, eat=11 from bit dispatch.
    tables=[]
    for a in sorted(rel):
        if string(ptr(a))!="植える":continue
        b=a-7*8
        if string(ptr(b+11*8))=="食べる":
            tables.append({"table":gh(b),"keys":[string(ptr(b+j*8)) for j in range(12)]})
    # Extra eat cache lifetime/consumer scan, no writer semantics guessed.
    cache=ptr(0x4bc0070-S);assert cache is not None
    focus={0x4bc0070-S,cache,cache+8};pages={x&~4095 for x in focus};cache_refs=[]
    for a in range(max(va,0x1a60000-S),min(end,0x1a90000-S),4):
        w=struct.unpack_from("<I",code,a-va)[0];p=adrp_target(w,a)
        if p not in pages:continue
        for q in range(a+4,min(a+96,end),4):
            v=struct.unpack_from("<I",code,q-va)[0];op=add_imm(v) or ldr_uimm(v)
            if op and op["rn"]==w&31 and p+op["imm"] in focus:
                cache_refs.append({"site":gh(q),"target":gh(p+op["imm"]),"window":ins(q+S-48,192)})
    item=db.BCSV(root,"ItemParam");kind=db.BCSV(root,"ItemKind")
    assert kind.cols["9B433DD5"]==35 and kind.cols["D4697FF8"]==40
    km={db.crc(kind.string(i,"87BF00E8")):i for i in range(kind.n)}
    native={x["item_id"]:x["native_kind"] for x in load("r110_items.json")}
    g=json.loads((root/"UnPack/1/EventFlow/NNPC_Select_Present.json").read_text("utf8"));g=g.get("graph",g)
    names={x["index"]:x["name"] for x in load("r110_kind_bilingual.json")}
    old={x["item_id"]:x for x in load("r123_dispatch_items.json")}
    special_ids={v for x in g["events"] if x.get("query")=="EventFlowQueryMultiItemSelectInclude" for k,v in x["params"].items() if k.startswith("ItemUniqueID") and v!=65534}
    records=[];hist=collections.Counter();routecache={}
    for i in range(item.n):
        ident=item.val(i,"54706054");k=km[item.val(i,"5270EB75")];nk=native[ident]
        e=bool(kind.val(k,"9B433DD5"));p=bool(kind.val(k,"D4697FF8"));ec=eat_candidate(nk,e)
        bits={"植える":p}
        if ec is not None:bits["食べる"]=ec
        key=(nk,ident if ident in special_ids else -1,ec,p)
        if key not in routecache:routecache[key]=dispatch(g,names[nk],key[1],bits)
        z=routecache[key]
        assert set(z["candidates"])<=set(old[ident]["category_candidates"])
        records.append({"item_id":ident,"native_kind":nk,"kind_can_eat":e,"kind_can_plant":p,"eat_accessor_candidate":ec,"category_candidates":z["candidates"],"all_routes_same_category":z["all_routes_same_category"],"actual_dispatch":None})
        hist[str(len(z["candidates"]))]+=1
    assert len(records)==11178
    con=sqlite3.connect(out/"r105/acnh303_gift_research.sqlite3")
    con.execute("CREATE TABLE IF NOT EXISTS r124_kind_bit_dispatch(item_id INTEGER PRIMARY KEY,kind_can_eat INTEGER,kind_can_plant INTEGER,eat_accessor_candidate INTEGER,category_candidates_json TEXT,actual_dispatch TEXT)")
    con.executemany("INSERT OR REPLACE INTO r124_kind_bit_dispatch VALUES(?,?,?,?,?,NULL)",[(x["item_id"],x["kind_can_eat"],x["kind_can_plant"],x["eat_accessor_candidate"],json.dumps(x["category_candidates"],ensure_ascii=False)) for x in records])
    con.commit();assert con.execute("PRAGMA integrity_check").fetchone()[0]=="ok";con.close()
    report={"items":len(records),"kind_can_eat":sum(x["kind_can_eat"] for x in records),"kind_can_plant":sum(x["kind_can_plant"] for x in records),"eat_unknown":sum(x["eat_accessor_candidate"] is None for x in records),"candidate_histogram":dict(hist),"single_route_candidates":sum(x["all_routes_same_category"] for x in records),"narrowed_items":sum(len(x["category_candidates"])<len(old[x["item_id"]]["category_candidates"]) for x in records),"native_bit_table_candidates":tables,"extra_eat_cache":gh(cache),"cache_refs":len(cache_refs),"direct_calls":dict(collections.Counter(x["target"] for x in calls)),"relocated_refs":len(refs),"wrapping_leaf_polarity_verified":True,"wrapping_query_vtable_link_verified":False,"event_query_native_polarity_verified":False,"runtime_verified":False}
    for n,o in [("r124_report.json",report),("r124_kind_bits.json",records),("r124_direct_calls.json",calls),("r124_relocation_refs.json",refs),("r124_cache_refs.json",cache_refs),("r124_c_evidence.json",ev)]:db.write(out/n,o)
    web=load("gift_web_sidecar_r123.json");byid={x["item_id"]:x for x in records}
    for x in web["items"]:x["r124_kind_bits"]=byid[x["id"]]
    web["limitations"].append("R124 uses static Kind bit accessors for candidate pruning; Ftr extra cache and native EventFlow parameter dispatch remain unresolved")
    db.write(out/"gift_web_sidecar_r124.json",web)
    print("R124 REPORT",json.dumps(report,ensure_ascii=False),flush=True)
    for x in cache_refs[:15]:print("R124 CACHE",json.dumps(x,ensure_ascii=False),flush=True)
    for x in calls:
        if x["target"]=="0x01B12E40":print("R124 BIT CALL",json.dumps(x,ensure_ascii=False),flush=True)
    for x in refs:print("R124 VTABLE",json.dumps(x),flush=True)
if __name__=="__main__":
    p=argparse.ArgumentParser();p.add_argument("--root",type=Path,default=Path("."));p.add_argument("--out",type=Path,required=True);a=p.parse_args();main(a.root.resolve(),a.out.resolve())
