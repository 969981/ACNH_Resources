#!/usr/bin/env python3
"""R119: outfit key/row audit, fallback record normalization proof, virtual call refinement."""
import argparse,collections,json,sqlite3,struct
from pathlib import Path
from capstone import Cs,CS_ARCH_ARM64,CS_MODE_ARM
import acnh303_r100_nso_decode as dec
import acnh303_r105_gift_db as db
from acnh303_round11_elf_xref import adrp_target,add_imm,ldr_uimm,bl_target
S=0x100000
def main(root,out):
    elf,nso,mapped,segments,raw,tags,rel=dec.decode(root)
    cs=Cs(CS_ARCH_ARM64,CS_MODE_ARM)
    va,code=mapped[0];end=va+len(code)
    def gh(a):return f"0x{a+S:08X}" if a is not None else None
    def ptr(a):
        r=rel.get(a,{})
        return r.get("addend") if r.get("type") in ("RELR",1027) and r.get("symbol")==0 else None
    def ins(a,n):return list(cs.disasm(raw(a,n),a))
    def row(i):return {"address":gh(i.address),"bytes":i.bytes.hex(),"op":i.mnemonic+" "+i.op_str}
    def string(a):
        if a is None:return None
        for b,d in mapped[1:]:
            if b<=a<b+len(d):
                k=a-b;j=d.find(b"\0",k,min(len(d),k+160))
                if j<=k:return None
                try:s=d[k:j].decode("utf8")
                except UnicodeDecodeError:return None
                return s if all(c.isprintable() for c in s) else None
        return None
    prev=json.loads((out/"r118_report.json").read_text("utf8"))
    assert prev["outfit_rows"]==162 and prev["outfit_item_crc_candidates"][0]["crc"]=="7724BF93"
    item=db.BCSV(root,"ItemParam");kind=db.BCSV(root,"ItemKind");outfit=db.BCSV(root,"ItemOutfitInfo")
    assert item.cols["7724BF93"]==180
    ofrows={outfit.string(i,"87BF00E8"):i for i in range(outfit.n)}
    ofhash={db.crc(k):i for k,i in ofrows.items()};assert len(ofhash)==162
    kindmap={db.crc(kind.string(i,"87BF00E8")):i for i in range(kind.n)}
    remake={x["item_id"]:x for x in json.loads((out/"r117_remake_items.json").read_text("utf8"))}
    native={x["item_id"]:x["native_kind"] for x in json.loads((out/"r110_items.json").read_text("utf8"))}
    records=[]
    for i in range(item.n):
        ident=item.val(i,"54706054");r=ofhash[item.val(i,"7724BF93")];mask=outfit.val(r,"C89FB7AF",False,2)&0xfffe
        first=next((j for j in range(1,14) if mask&(1<<j)),None)
        t=remake[ident]["remake_type_index"]
        records.append({"item_id":ident,"outfit_key":outfit.string(r,"87BF00E8"),"outfit_source_row":r,"outfit_unique_id":outfit.val(r,"54706054"),"mask":mask,"first_active_bit":first,"remake_type":t,"tool_descriptor_offset_candidate":4 if t==2 and native[ident]!=0x78 and first==9 else None})
    assert len(records)==11178
    # Extract contiguous native pointer tables containing all 162 exact English keys.
    candidates=[];run=[]
    def scan(run):
        if len(run)<162:return
        ns=[string(ptr(a)) for a in run]
        for j in range(len(run)-161):
            w=ns[j:j+162]
            if len(set(w))==162 and set(w)==set(ofrows):
                candidates.append({"table":gh(run[j]),"keys":w})
    for a in sorted(k for k in rel if isinstance(k,int) and ptr(k) is not None):
        if run and a!=run[-1]+8:scan(run);run=[]
        run.append(a)
    scan(run)
    cache=ptr(0x4bc0148-S);assert cache is not None
    targets={0x4bc0148-S,cache,cache+8};pages={a&~4095 for a in targets}
    refs=[];hashpairs=[]
    begin=max(va,0x1a60000-S);stop=min(end,0x1a90000-S)
    for a in range(begin,stop,4):
        w=struct.unpack_from("<I",code,a-va)[0]
        # Exact MOVZ/MOVK same-register low/high pair; adjacent or nearby.
        if w&0x7f800000==0x52800000 and ((w>>5)&0xffff)==0xbf93:
            for q in range(a+4,min(a+36,stop),4):
                v=struct.unpack_from("<I",code,q-va)[0]
                if v&0x7f800000==0x72800000 and (v>>21)&3==1 and (v>>5)&0xffff==0x7724 and v&31==w&31:
                    hashpairs.append({"site":gh(a),"high":gh(q),"window":[row(i) for i in ins(a-16,128)]})
        p=adrp_target(w,a)
        if p not in pages:continue
        for q in range(a+4,min(a+96,stop),4):
            v=struct.unpack_from("<I",code,q-va)[0];op=add_imm(v) or ldr_uimm(v)
            if op and op["rn"]==w&31 and p+op["imm"] in targets:
                refs.append({"site":gh(q),"target":gh(p+op["imm"]),"window":[row(i) for i in ins(q-32,160)]})
    # Fallback constructors: actual 01B079EC prologue, default normalizer and its leaf.
    source=root/"derived/3.0.3/ghidra12.2/c";ev={}
    for name,p,need in [
      ("initializer","79/01b079ec",["DAT_0532ace8 = 0x9c4","DAT_0532acf8 = 0x839","FUN_0277d4ac"]),
      ("normalizer","d4/0277d4ac",["0xfffffffd) != 0xa4","& 0x80","FUN_0277f248"]),
      ("normalizer_leaf","f2/0277f248",["== 0xa0","== 0x8d","== 0x71","FUN_01af0020","param_1[2] = (ushort)*(byte *)((long)param_1 + 5) << 8","== 0x12","0x1618","0x315a","0x3805","0x342f","local_54 != 0xb1"]),
      ("stack_gate","00/01af0020",["0x4c9ba961","< 2","FUN_01b032d0"]),
      ("outfit_consumer","ab/01adab50",["PTR_DAT_04bc0148","DAT_0532a7a0","-0x37604851"])]:
        f=source/(p+".c");b=f.read_bytes();assert all(x.encode() in b for x in need),(name,[x for x in need if x.encode() not in b]);ev[name]={"file":str(f.relative_to(root)),"sha256":db.digest(b),"anchors":need}
    inter={x["item_id"]:x for x in json.loads((out/"r115_interaction_items.json").read_text("utf8"))}
    defaults=[]
    for i in range(item.n):
        ident=item.val(i,"54706054")
        if ident not in (2500,2105):continue
        k=kindmap[item.val(i,"5270EB75")];nk=native[ident];enum=inter[ident]["candidate_enum"]
        assert nk not in (0xa4,0xa6,0xa0,0x8d,0x71,0xb1) and enum not in (0x12,0x13)
        defaults.append({"id":ident,"kind":kind.string(k,"87BF00E8"),"native_kind":nk,"interaction_enum":enum,"stack_max_signed":kind.val(k,"4C9BA961",True,2),"conditional_zero_tail_invariant":True,"expected_if_initial_full_record_zero_except_id":struct.pack("<Q",ident).hex(),"actual_runtime_record":None})
    assert len(defaults)==2
    init=[row(i) for i in ins(0x1b079ec-S,0x150)]
    # Refine prior candidate register chain, rejecting intervening LDR overwrites.
    old=json.loads((out/"r118_indirect_candidates.json").read_text("utf8"));virtual=[]
    for x in old:
        a=int(x["load"],16)-S;q=int(x["call"],16)-S
        w=struct.unpack_from("<I",code,a-va)[0];rt=w&31
        overwrites=[]
        for i in ins(a+4,q-a-4):
            v=int.from_bytes(i.bytes,"little")
            if v&0xffc00000==0xf9400000 and v&31==rt:overwrites.append(row(i))
        virtual.append({"load":x["load"],"call":x["call"],"intervening_ldr_overwrites":overwrites,"candidate_retained":not overwrites,"receiver_type_verified":False})
    report={"outfit_rows":len(records),"outfit_distinct_keys":len({x["outfit_key"] for x in records}),"tool_type_items":sum(x["remake_type"]==2 for x in records),"tool_descriptor_candidates":sum(x["tool_descriptor_offset_candidate"]==4 for x in records),"tool_descriptor_nonzero_fabric_count":sum(x["tool_descriptor_offset_candidate"]==4 and (remake[x["item_id"]]["fabric_count"] or 0)>0 for x in records),"outfit_table_candidates":[{"table":x["table"],"count":len(x["keys"])} for x in candidates],"outfit_cache":gh(cache),"cache_refs":len(refs),"field_constant_pairs":len(hashpairs),"defaults":defaults,"virtual_candidates":virtual,"runtime_verified":False}
    for n,o in [("r119_report.json",report),("r119_outfit_items.json",records),("r119_outfit_tables.json",candidates),("r119_cache_refs.json",refs),("r119_field_constant_pairs.json",hashpairs),("r119_default_initializer.json",init),("r119_c_evidence.json",ev)]:db.write(out/n,o)
    con=sqlite3.connect(out/"r105/acnh303_gift_research.sqlite3")
    con.execute("CREATE TABLE IF NOT EXISTS r119_outfit_item(item_id INTEGER PRIMARY KEY,outfit_key TEXT,outfit_source_row INTEGER,outfit_unique_id INTEGER,mask INTEGER,first_active_bit INTEGER,tool_descriptor_offset_candidate INTEGER)")
    con.executemany("INSERT OR REPLACE INTO r119_outfit_item VALUES(?,?,?,?,?,?,?)",[(x["item_id"],x["outfit_key"],x["outfit_source_row"],x["outfit_unique_id"],x["mask"],x["first_active_bit"],x["tool_descriptor_offset_candidate"]) for x in records])
    con.commit();assert con.execute("PRAGMA integrity_check").fetchone()[0]=="ok";con.close()
    web=json.loads((out/"gift_web_sidecar_r117.json").read_text("utf8"));byid={x["item_id"]:x for x in records}
    for x in web["items"]:x["r119_outfit"]=byid[x["id"]]
    web["limitations"].append("R119 outfit key joins are source-backed; native enum order and writer dataflow pending verification. Default runtime records remain null.")
    db.write(out/"gift_web_sidecar_r119.json",web)
    print("R119 REPORT",json.dumps(report,ensure_ascii=False),flush=True)
    for x in init:print("R119 INIT",json.dumps(x),flush=True)
    for x in refs[:15]:print("R119 CACHE",json.dumps(x),flush=True)
    for x in hashpairs[:5]:print("R119 HASH",json.dumps(x),flush=True)
if __name__=="__main__":
    p=argparse.ArgumentParser();p.add_argument("--root",type=Path,default=Path("."));p.add_argument("--out",type=Path,required=True);a=p.parse_args();main(a.root.resolve(),a.out.resolve())
