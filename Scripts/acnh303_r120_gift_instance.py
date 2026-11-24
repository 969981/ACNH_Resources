#!/usr/bin/env python3
"""R120 source-backed, read-only 8-byte item gift callback model; not a live NPC transaction."""
import argparse,collections,json,struct,sqlite3
from pathlib import Path

def lookup_id(raw,normal,special):
    ident=int.from_bytes(raw[:2],"little");f=raw[3];s=f&3;t=(f>>2)&15
    if ident in (0x16a1,0x3100) or s==0:return ident
    if s==1:return normal[t]
    if s==2:return 0x1180
    if t==15:return normal[16]
    if t in (12,13,14):return special[t-11]
    return {10:0x306,11:0x3a19}.get(t,0x1225)

def descriptor(row):
    t=row["remake_type"];k=row["native_kind"]
    if t==0:return None
    if t==1:return 4 if row["can_ftr"] else None
    if t==2:
        if k==0x78:return None
        # Native outfit cache linkage still pending. All current Tool rows have count=0.
        return "unknown"
    if t==3:return 4 if k in (0xa8,0x61) else None
    if t==4:return 6 if k==0x78 else None
    if t==5:return 4 if k==0x9d else None
    return "unknown"

def remake_gate(raw,row):
    count=row["fabric_count"]
    if count==0:return False
    if count is None:return None
    off=descriptor(row)
    if off=="unknown":return None
    if off is None:return False
    return int.from_bytes(raw[off:off+2],"little")&0x18==0x10

def amount(raw,row):
    return min(raw[6],99) if row["interaction_enum"]==73 and row["can_ftr"] else 0

def can_wrap(raw,row):
    if not row["can_wrap"] or amount(raw,row)>0:return False
    block=remake_gate(raw,row)
    return None if block is None else not block

def package_allowed(flags):
    s=flags&3;t=(flags>>2)&15
    return s in (0,1) or (s==3 and t in (12,13,14,15))

class Model:
    def __init__(self,data,conditional_defaults=False):
        self.data=data;self.rows={x["item_id"]:x for x in data["items"]}
        self.normal=data["lookup_tables"]["normal"];self.special=data["lookup_tables"]["special"]
        self.conditional_defaults=conditional_defaults
    def query(self,raw):return lookup_id(raw,self.normal,self.special)
    def fallback(self,special):
        return struct.pack("<Q",2105 if special else 2500) if self.conditional_defaults else None
    def unpack(self,raw,trace):
        # Invoked only after stable source CanGift=true and source state nonzero.
        s=raw[3]&3;t=(raw[3]>>2)&15;special=s==3 and t in (12,13,14)
        b=raw[:3]+bytes([raw[3]&0x80])+raw[4:]
        q=self.query(b);r=self.rows.get(q)
        if r is not None:
            w=can_wrap(b,r)
            if w is None:
                trace.append({"gate":"unpack","result":"unknown_normalized_can_gift","query_id":q});return None
            if w and r["native_kind"] not in (0xb2,0xb3,0xb4,0xb9) and (not special or r["native_kind"]==0x86):
                trace.append({"gate":"unpack","result":"normalized","query_id":q,"record":b.hex()});return b
        f=self.fallback(special)
        trace.append({"gate":"unpack","result":"conditional_fallback" if f is not None else "unknown_default_record","default_id":2105 if special else 2500})
        return f
    def evaluate(self,raw,mode="ordinary"):
        if not isinstance(raw,bytes) or len(raw)!=8:raise ValueError("exactly eight bytes required")
        if mode not in ("ordinary","birthday"):raise ValueError("invalid mode")
        trace=[];q=self.query(raw);r=self.rows.get(q)
        if r is None:
            trace.append({"gate":"outer_lookup","query_id":q,"result":"absent_in_original_itemparam"});v=False
        elif amount(raw,r)>0:
            trace.append({"gate":"outer_moneybox","result":"reject","amount":amount(raw,r)});v=False
        else:v=self.leaf(raw,mode,trace,set())
        return {"raw":raw.hex(),"query_id":q,"mode":mode,"callback_model_result":v,"trace":trace,"resource_assumption":"original ItemParam and ItemKind loaded, stable gates","conditional_defaults":self.conditional_defaults,"runtime_verified":False,"actual_gift_success":None}
    def leaf(self,raw,mode,trace,seen):
        if raw in seen or len(seen)>=8:
            trace.append({"gate":"recursive_guard","result":"unknown"});return None
        seen.add(raw);q=self.query(raw);r=self.rows.get(q)
        if r is None:
            trace.append({"gate":"leaf_lookup","result":"unknown","query_id":q});return None
        block=remake_gate(raw,r);trace.append({"gate":"remake","query_id":q,"result":block})
        if block is True:return False
        if block is None:return None
        w=can_wrap(raw,r)
        if w is None:return None
        if w and not package_allowed(raw[3]):
            trace.append({"gate":"package","result":"reject"});return False
        if w and raw[3]&3 and (mode=="ordinary" or r["native_kind"]!=0xb9):
            b=self.unpack(raw,trace)
            return None if b is None else self.leaf(b,mode,trace,seen)
        v=bool(r["ordinary_kind_allowed"] if mode=="ordinary" else r["birthday_kind_allowed"])
        trace.append({"gate":"kind_permission","query_id":q,"result":v});return v

def main(root,out):
    import acnh303_r100_nso_decode as dec
    import acnh303_r105_gift_db as db
    from acnh303_round11_elf_xref import adrp_target,add_imm,ldr_uimm,bl_target
    from capstone import Cs,CS_ARCH_ARM64,CS_MODE_ARM
    S=0x100000
    def load(n):return json.loads((out/n).read_text("utf8"))
    old=load("r119_report.json")
    assert old["tool_type_items"]==old["tool_descriptor_candidates"]==69 and old["tool_descriptor_nonzero_fabric_count"]==0
    native={x["item_id"]:x for x in load("r110_items.json")}
    perms={x["item_id"]:x for x in load("r113_static_permissions.json")}
    inter={x["item_id"]:x for x in load("r115_interaction_items.json")}
    remake={x["item_id"]:x for x in load("r117_remake_items.json")}
    outfit={x["item_id"]:x for x in load("r119_outfit_items.json")}
    items=[]
    for ident,n in sorted(native.items()):
        p=perms[ident];i=inter[ident];r=remake[ident];o=outfit[ident]
        items.append({"item_id":ident,"native_kind":n["native_kind"],"can_wrap":p["can_wrap"],"ordinary_kind_allowed":p["ordinary_kind_allowed"],"birthday_kind_allowed":p["birthday_kind_allowed"],"can_ftr":i["can_ftr"],"interaction_enum":i["candidate_enum"],"remake_type":r["remake_type_index"],"fabric_count":r["fabric_count"],"outfit_mask":o["mask"]})
    assert len(items)==11178
    data={"version":"3.0.3","lookup_tables":load("r113_report.json")["lookup_tables"],"items":items}
    m=Model(data);conditional=Model(data,True)
    def record(ident,flags=0,b4=0,b6=0):return struct.pack("<HBBBBBB",ident,0,flags,b4,0,b6,0)
    counts=collections.Counter();examples=[];baseline=[]
    for r in items:
        ident=r["item_id"]
        for mode in ("ordinary","birthday"):
            for name,b4,b6 in (("zero_tail",0,0),("raw4_flag10",16,0),("raw6_flag10",0,16)):
                result=m.evaluate(record(ident,b4=b4,b6=b6),mode)
                counts[mode+":"+name+":"+str(result["callback_model_result"])]+=1
                if name=="zero_tail":baseline.append({"item_id":ident,"mode":mode,"result":result["callback_model_result"],"synthetic_record":True})
    for ident in (1877,14479,14714):
        for mode in ("ordinary","birthday"):
            assert m.evaluate(record(ident,b6=1),mode)["callback_model_result"] is False
            assert m.evaluate(record(ident),mode)["callback_model_result"] is True
    assert m.evaluate(record(0xfffe))["callback_model_result"] is False
    # Exhaustive all flag bytes for a bounded set of genuine IDs; only synthetic records.
    flag_counts=collections.Counter()
    for ident in (1877,2500,2105,7699,14042,2389):
        for flags in range(256):
            for mode in ("ordinary","birthday"):
                a=m.evaluate(record(ident,flags),mode);b=conditional.evaluate(record(ident,flags),mode)
                flag_counts[str(a["callback_model_result"])]+=1
                if a["callback_model_result"] is not None:assert a["callback_model_result"]==b["callback_model_result"]
                if flags in (0,1,2,3,51,63,255):examples.append(a)
    # Machine evidence from the actual cache writer and fallback guard blocks.
    elf,nso,mapped,segments,raw,tags,rel=dec.decode(root)
    cs=Cs(CS_ARCH_ARM64,CS_MODE_ARM);va,code=mapped[0];end=va+len(code)
    def gh(a):return f"0x{a+S:08X}" if a is not None else None
    def ptr(a):
        r=rel.get(a,{})
        return r.get("addend") if r.get("type") in ("RELR",1027) and r.get("symbol")==0 else None
    def ins(a,n):return list(cs.disasm(raw(a-S,n),a-S))
    def row(i):return {"address":gh(i.address),"bytes":i.bytes.hex(),"op":i.mnemonic+" "+i.op_str}
    def check(a,m,o):
        i=ins(a,4)[0];assert (i.mnemonic,i.op_str)==(m,o),(hex(a),row(i))
    assert ptr(0x4bc0148-S)==0x5326af0-S
    for a,op,arg in [(0x1a66248,"str","w20, [x28]"),(0x1a66250,"str","x0, [x28, #8]"),(0x1a68948,"str","xzr, [x21, #8]"),(0x1a6894c,"str","wzr, [x21]"),(0x1a7af84,"mov","w24, #0xbf93"),(0x1a7af88,"movk","w24, #0x7724, lsl #16"),(0x1a7b588,"strh","w8, [x10, w9, sxtw #1]")]:check(a,op,arg)
    table=0x49c0770-S
    writer=ins(0x1a7af84,0x608)
    calls=[]
    for i in writer:
        t=bl_target(int.from_bytes(i.bytes,"little"),i.address)
        if t is None or not va<=t<end:continue
        refs=[];win=list(cs.disasm(raw(t,min(0x1400,end-t)),t))
        for j,k in enumerate(win):
            w=int.from_bytes(k.bytes,"little");p=adrp_target(w,k.address)
            if p is None:continue
            for h in win[j+1:j+12]:
                op=add_imm(int.from_bytes(h.bytes,"little")) or ldr_uimm(int.from_bytes(h.bytes,"little"))
                if not op or op["rn"]!=w&31:continue
                a=p+op["imm"];v=ptr(a)
                if a==table or (v is not None and 0<=table-v<0x4000):refs.append({"site":gh(h.address),"address":gh(a),"target":gh(v),"delta":table-v if v is not None else None})
        calls.append({"site":gh(i.address),"target":gh(t),"table_ref_candidates":refs})
    init=[row(i) for i in ins(0x1b08134,0x8c)]
    report={"items":len(items),"synthetic_matrix_cases":len(items)*6,"matrix":dict(counts),"flag_cases":6*256*2,"flag_results":dict(flag_counts),"default_records_conditional_only":True,"outfit_writer_verified":True,"outfit_converter_call_candidates":calls,"runtime_verified":False}
    for n,o in [("r120_report.json",report),("r120_gift_model_data.json",data),("r120_synthetic_baseline.json",baseline),("r120_examples.json",examples),("r120_outfit_writer.json",[row(i) for i in writer]),("r120_default_guard_blocks.json",init)]:db.write(out/n,o)
    con=sqlite3.connect(out/"r105/acnh303_gift_research.sqlite3")
    con.execute("CREATE TABLE IF NOT EXISTS r120_synthetic_callback(item_id INTEGER NOT NULL,mode TEXT NOT NULL,synthetic_zero_tail_result INTEGER,actual_gift_success INTEGER,PRIMARY KEY(item_id,mode))")
    con.executemany("INSERT OR REPLACE INTO r120_synthetic_callback VALUES(?,?,?,NULL)",[(x["item_id"],x["mode"],x["result"]) for x in baseline])
    con.commit();assert con.execute("SELECT COUNT(*) FROM r120_synthetic_callback").fetchone()[0]==22356;assert con.execute("PRAGMA integrity_check").fetchone()[0]=="ok";con.close()
    web=load("gift_web_sidecar_r119.json")
    byid={x["item_id"]:x for x in items};results={(x["item_id"],x["mode"]):x["result"] for x in baseline}
    for x in web["items"]:
        ident=x["id"];x["r120_model_input"]=byid[ident];x["r120_synthetic_zero_tail"]={"ordinary":results[(ident,"ordinary")],"birthday":results[(ident,"birthday")],"actual_gift_success":None}
    web["limitations"].append("R120 callback results are synthetic zero-tail instance predictions under original loaded resources; not live UI eligibility or gift completion")
    db.write(out/"gift_web_sidecar_r120.json",web)
    print("R120 REPORT",json.dumps(report,ensure_ascii=False),flush=True)
    for i in init:print("R120 DEFAULT",json.dumps(i),flush=True)
    for i in writer:
        if i.mnemonic in ("bl","mov","movk","cmp","strh"):print("R120 OUTFIT",gh(i.address),i.mnemonic,i.op_str,flush=True)

if __name__=="__main__":
    p=argparse.ArgumentParser();p.add_argument("--root",type=Path,default=Path("."));p.add_argument("--out",type=Path);p.add_argument("--model",type=Path);p.add_argument("--raw");p.add_argument("--mode",choices=["ordinary","birthday"],default="ordinary");p.add_argument("--conditional-defaults",action="store_true");a=p.parse_args()
    if a.raw:
        if not a.model:p.error("--raw requires --model")
        print(json.dumps(Model(json.loads(a.model.read_text("utf8")),a.conditional_defaults).evaluate(bytes.fromhex(a.raw),a.mode),ensure_ascii=False,indent=2))
    elif a.out:main(a.root.resolve(),a.out.resolve())
    else:p.error("supply --out or --raw and --model")
