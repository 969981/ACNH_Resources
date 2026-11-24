#!/usr/bin/env python3
"""R118: bounded unpack model, outfit descriptor evidence and virtual getter references."""
import argparse,collections,json,sqlite3,struct
from pathlib import Path
from capstone import Cs,CS_ARCH_ARM64,CS_MODE_ARM
import acnh303_r100_nso_decode as dec
import acnh303_r105_gift_db as db
from acnh303_r113_gift_semantics import lookup_id
from acnh303_round11_elf_xref import bl_target
S=0x100000

def tool_descriptor(kind,mask):
    if kind==0x78:return None
    if mask is None:return "unknown"
    first=next((i for i in range(1,14) if mask&(1<<i)),None)
    return 4 if first==9 else None

def unpack(raw,source_can_wrap,normalized_valid,normalized_kind,normalized_can_wrap,default_money,default_material):
    """Stable-snapshot reconstruction of 01B079EC.
    Return bytes only if necessary native lookup and gates are provided.
    Defaults are externally normalized records, not guessed zero tails.
    """
    if len(raw)!=8:raise ValueError("raw item")
    if source_can_wrap is None:return None
    b=bytearray(raw);state=raw[3]&3 if source_can_wrap else 0
    sub=(raw[3]>>2)&15 if source_can_wrap else 1
    if source_can_wrap:
        if state:b[3]&=0xbf
        b[3]&=0xc0
    special=state==3 and sub in (12,13,14)
    fallback=default_money if special else default_material
    if normalized_valid is False:return fallback
    if normalized_valid is None or normalized_kind is None:return None
    if special and normalized_kind!=0x86:return default_money
    if normalized_can_wrap is None:return None
    if not normalized_can_wrap or b[3]&3:return fallback
    if normalized_kind in (0xb2,0xb3,0xb4,0xb9):return fallback
    return bytes(b) if state else raw

def test():
    for i in range(1,14):assert tool_descriptor(0,1<<i)==(4 if i==9 else None)
    assert tool_descriptor(0,(1<<9)|(1<<3)) is None
    assert tool_descriptor(0,(1<<9)|(1<<12))==4
    assert tool_descriptor(0x78,1<<9) is None
    assert tool_descriptor(0,None)=="unknown"
    raw=bytes([0x12,0x34,5,0xff,6,7,8,9]);money=bytes.fromhex("3908000000000000");material=bytes.fromhex("c409000000000000")
    assert unpack(raw,True,True,0,True,money,material)==raw[:3]+bytes([0x80])+raw[4:]
    assert unpack(raw,True,True,0xb2,True,money,material)==material
    assert unpack(raw,True,False,None,None,money,material)==material
    special=raw[:3]+bytes([51])+raw[4:]
    assert unpack(special,True,True,0,True,money,material)==money
    assert unpack(special,True,True,0x86,True,money,material)==special[:3]+bytes([0])+special[4:]
    assert unpack(raw,False,True,0,True,money,material)==material
    assert unpack(bytes(8),False,True,0,True,money,material)==bytes(8)
    assert unpack(raw,None,True,0,True,money,material) is None

def main(root,out):
    test()
    elf,nso,mapped,segments,raw,tags,rel=dec.decode(root)
    cs=Cs(CS_ARCH_ARM64,CS_MODE_ARM)
    va,code=mapped[0];end=va+len(code)
    def gh(a):return f"0x{a+S:08X}"
    def ptr(a):
        r=rel.get(a,{})
        return r.get("addend") if r.get("type") in ("RELR",1027) and r.get("symbol")==0 else None
    def ins(a,n):return list(cs.disasm(raw(a,n),a))
    def row(i):return {"address":gh(i.address),"bytes":i.bytes.hex(),"op":i.mnemonic+" "+i.op_str}
    src=root/"derived/3.0.3/ghidra12.2/c";ev={}
    for name,p,need in [
      ("tool","4d/01ae4d10",["== 0x78","FUN_01adab50","uVar3 < 0xe","uVar3 != 9","param_1 = param_1 + 0xc"]),
      ("outfit_mask","ab/01adab50",["PTR_DAT_04bc0148","uVar3 < 0xa2","DAT_0532a7a0","-0x37604851","*(undefined2 *)param_2 = uVar11","*param_2 = *param_2 & 0xfe"]),
      ("unpack","79/01b079ec",["DAT_0532ace8 = 0x9c4","DAT_0532acf8 = 0x839","local_78 & 0xbfffffff","& 0xc3","& 0xfc","local_68 == 0x86","FUN_01af2868","local_68 != 0xb4","local_68 != 0xb3","local_64 = 0xb2","local_64 = 0xb9"]),
      ("source_gate","28/01af2868",["FUN_01b032d0","param_1 + 0xb"]),
      ("default_normalize","d4/0277d4ac",["FUN_0277d6c4","FUN_0277f248","& 0x80"])]:
        f=src/(p+".c");b=f.read_bytes();assert all(x.encode() in b for x in need),(name,[x for x in need if x.encode() not in b]);ev[name]={"file":str(f.relative_to(root)),"sha256":db.digest(b),"anchors":need}
    previous=json.loads((out/"r117_report.json").read_text("utf8"))
    assert previous["remake_type_resolved"]==11178
    outfit=db.BCSV(root,"ItemOutfitInfo");item=db.BCSV(root,"ItemParam")
    assert outfit.n==162 and outfit.cols["C89FB7AF"]==143 and item.cols["CB5EB33F"]==276
    assert db.crc("RemakeID s16")==0xcb5eb33f
    rows=[]
    for i in range(outfit.n):
        mask=outfit.val(i,"C89FB7AF",False,2)&0xfffe
        first=next((j for j in range(1,14) if mask&(1<<j)),None)
        rows.append({"source_row":i,"id":outfit.val(i,"54706054"),"key":outfit.string(i,"87BF00E8"),"mask":mask,"first_active_bit":first,"tool_descriptor_raw_offset_candidate":4 if first==9 else None})
    # Identify 162-entry table / ItemParam hash candidates using all source keys.
    # Do not assume BCSV ordinal equals runtime outfit index.
    keys={db.crc(x["key"]) for x in rows};cols=[]
    for h,w in item.width.items():
        if w!=4:continue
        vals=collections.Counter(item.val(i,h) for i in range(item.n))
        n=sum(v for k,v in vals.items() if k in keys)
        if n:cols.append({"crc":h,"offset":item.cols[h],"matched":n,"distinct":len(vals.keys()&keys)})
    cols.sort(key=lambda x:-x["matched"])
    # Relocated pointer run around each exact getter slot; locate possible table starts
    # by nearest preceding non-code pointer, retain as candidate not RTTI proof.
    getter=0x30bfe5c-S;slots=[]
    for a in rel:
        if ptr(a)!=getter:continue
        b=a
        while a-b<0x400 and ptr(b-8) is not None and va<=ptr(b-8)<end:b-=8
        slots.append({"slot":gh(a),"candidate_address_point":gh(b),"offset":a-b,"entries":[{"slot":gh(q),"target":gh(ptr(q)) if ptr(q) is not None else None} for q in range(b-16,a+16,8)]})
    offsets=sorted({x["offset"] for x in slots})
    indirect=[]
    # Exact load followed by indirect branch on the same register within 6 instructions.
    # This is not complete reaching-definition analysis.
    for a in range(max(va,0x3000000-S),min(end,0x3500000-S),4):
        w=struct.unpack_from("<I",code,a-va)[0]
        if w&0xffc00000!=0xf9400000 or ((w>>10)&0xfff)*8 not in offsets:continue
        rt=w&31
        for q in range(a+4,min(a+28,end),4):
            v=struct.unpack_from("<I",code,q-va)[0]
            if v&0xfffffc1f==0xd63f0000 and (v>>5)&31==rt:
                indirect.append({"load":gh(a),"call":gh(q),"offset":((w>>10)&0xfff)*8,"window":[row(i) for i in ins(a-12,q-a+20)]});break
    report={"outfit_rows":len(rows),"outfit_bit9_first_rows":[x for x in rows if x["first_active_bit"]==9],"outfit_mask_histogram":dict(collections.Counter(str(x["first_active_bit"]) for x in rows)),"outfit_item_crc_candidates":cols[:10],"remake_id_offset":276,"unpack_model":"stable_snapshot_inputs_required","default_item_ids":[2500,2105],"getter_slots":slots,"candidate_virtual_offsets":offsets,"indirect_call_candidates":len(indirect),"runtime_verified":False}
    for n,o in [("r118_report.json",report),("r118_c_evidence.json",ev),("r118_outfit_masks.json",rows),("r118_indirect_candidates.json",indirect),("r118_unpack_window.json",[row(i) for i in ins(0x1b079ec-S,0x710)])]:db.write(out/n,o)
    con=sqlite3.connect(out/"r105/acnh303_gift_research.sqlite3")
    con.execute("CREATE TABLE IF NOT EXISTS r118_outfit_mask(source_row INTEGER PRIMARY KEY,unique_id INTEGER,key TEXT,mask INTEGER,first_active_bit INTEGER,descriptor_offset_candidate INTEGER)")
    con.executemany("INSERT OR REPLACE INTO r118_outfit_mask VALUES(?,?,?,?,?,?)",[(x["source_row"],x["id"],x["key"],x["mask"],x["first_active_bit"],x["tool_descriptor_raw_offset_candidate"]) for x in rows])
    con.commit();assert con.execute("PRAGMA integrity_check").fetchone()[0]=="ok";con.close()
    print("R118 REPORT",json.dumps(report,ensure_ascii=False),flush=True)
    for x in indirect[:20]:print("R118 INDIRECT",json.dumps(x,ensure_ascii=False),flush=True)
if __name__=="__main__":
    p=argparse.ArgumentParser();p.add_argument("--root",type=Path,default=Path("."));p.add_argument("--out",type=Path,required=True);a=p.parse_args();main(a.root.resolve(),a.out.resolve())
