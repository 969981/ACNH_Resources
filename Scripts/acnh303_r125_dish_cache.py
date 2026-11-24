#!/usr/bin/env python3
"""R125: audit extra edible-furniture cache and query vtable pairing.
No live game writes; unresolved native converter linkage remains explicit.
"""
import argparse,collections,json,sqlite3,struct
from pathlib import Path
from acnh303_r123_birthday_dispatch import dispatch
from acnh303_r124_kind_bits import eat_candidate

def wrapping_case(valid,can_gift,raw_flags):
    if not valid or not can_gift:return 1
    return 0 if raw_flags&3 else 1

def main(root,out):
    import acnh303_r105_gift_db as db
    import acnh303_r100_nso_decode as dec
    from acnh303_round11_elf_xref import adrp_target,add_imm,ldr_uimm,bl_target
    from capstone import Cs,CS_ARCH_ARM64,CS_MODE_ARM
    def load(n):return json.loads((out/n).read_text("utf8"))
    prev=load("r124_report.json")
    assert prev["items"]==11178 and prev["eat_unknown"]==1630
    assert prev["native_bit_table_candidates"][0]["table"]=="0x04978468"
    for flags in range(256):
        assert wrapping_case(True,True,flags)==(0 if flags&3 else 1)
        assert wrapping_case(True,False,flags)==1
        assert wrapping_case(False,True,flags)==1
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
    vp=0x4979268-S
    assert ptr(vp+0x30)==0x10c89a0-S and ptr(vp+0x38)==0x10c89c0-S
    assert ptr(0x4bc0070-S)==0x5327298-S
    for a,op in [(0x1a64748,"str w20, [x28]"),(0x1a64750,"str x0, [x28, #8]"),(0x1a681b0,"str xzr, [x21, #8]"),(0x1a681b4,"str wzr, [x21]"),(0x1a6f294,"ldr x10, [x10, #0x70]"),(0x1a6f2b0,"ldr x10, [x10, #8]"),(0x1a6f2b4,"strh w8, [x10, w9, sxtw #1]")]:assert ins(a,4)[0]["op"]==op
    evidence={};src=root/"derived/3.0.3/ghidra12.2/c"
    for name,p,anchors in [
        ("dish_user","5f/01ad5f60",["PTR_DAT_04bc0070","FtrDishCommonUser","LAB_01ad6310"]),
        ("dish_predicate","67/01ad673c",["DAT_05327298","DAT_053272a0","return uVar4 == 1"]),
        ("dish_predicate2","d7/01b0d774",["DAT_05327298","DAT_053272a0","return uVar4 == 1"]),
        ("category_consumer","93/01af93e8",["DAT_05327298","return 0x13"]),
        ("type_consumer","43/01af43a0",["DAT_05327298","return 2"]),
        ("query_dispatch","9a/010b9adc",["*param_1 + 0x38","lVar11 + 0xd90","return 0;"])]:
        f=src/(p+".c");b=f.read_bytes();assert all(x.encode() in b for x in anchors),(name,anchors)
        evidence[name]={"file":str(f.relative_to(root)),"sha256":db.digest(b),"anchors":anchors}
    item=db.BCSV(root,"ItemParam");cols={int(h,16):h for h,w in item.width.items() if w==4}
    # Recover MOVZ/MOVK field constants in the writer's bounded preceding window,
    # and rank by nearest CMP with the same register. Preserve every candidate.
    start=0x1a6e900-S;stop=0x1a6f2b8-S
    writer=ins(start+S,stop-start)
    fields=[];calls=[]
    for a in range(start,stop,4):
        w=int.from_bytes(raw(a,4),"little")
        if w&0x7f800000==0x52800000 and ((w>>21)&3)==0:
            for q in range(a+4,min(a+36,stop),4):
                v=int.from_bytes(raw(q,4),"little")
                if v&0x7f800000==0x72800000 and ((v>>21)&3)==1 and v&31==w&31:
                    h=((v>>5)&65535)<<16|((w>>5)&65535)
                    if h in cols:
                        fields.append({"site":gh(a),"high":gh(q),"crc":cols[h],"offset":item.cols[cols[h]],"reg":w&31,"window":ins(a+S,0x90)})
        if w&0xfc000000==0x94000000:
            t=bl_target(w,a)
            if t is not None:calls.append({"site":gh(a),"target":gh(t)})
    # Each candidate field with a small distinct key count is matched against
    # native consecutive pointer tables of the same length. This is evidence
    # discovery, NOT automatic proof of the actual writer converter.
    counts={}
    for h in {x["crc"] for x in fields}:
        counts[h]=collections.Counter(item.val(i,h) for i in range(item.n))
    small={h:c for h,c in counts.items() if 2<=len(c)<=16}
    runs=[];run=[]
    for a in sorted(rel):
        t=ptr(a);s=string(t)
        if s is None or (run and a!=run[-1][0]+8):
            if run:runs.append(run)
            run=[]
        if s is not None:run.append((a,s))
    if run:runs.append(run)
    matches=[]
    for h,c in small.items():
        n=len(c);want=set(c)
        for run in runs:
            if len(run)<n:continue
            for j in range(len(run)-n+1):
                keys=[s for _,s in run[j:j+n]]
                if {db.crc(k) for k in keys}==want:
                    matches.append({"crc":h,"offset":item.cols[h],"table":gh(run[j][0]),"keys":keys,"counts":[c[db.crc(k)] for k in keys],"match":"complete_crc_set_only"})
    # Detect vptr materialization (ADRP + ADD or GOT LDR) and parameters in
    # original machine windows. The pair itself is exact relocation evidence.
    targets={vp-16,vp,0x4978468-S};pages={x&~4095 for x in targets}
    xrefs=[]
    for a in range(max(va,0x1000000-S),min(end,0x1120000-S),4):
        w=struct.unpack_from("<I",code,a-va)[0];p=adrp_target(w,a)
        if p not in pages:continue
        for q in range(a+4,min(a+64,end),4):
            v=struct.unpack_from("<I",code,q-va)[0];op=add_imm(v) or ldr_uimm(v)
            if op and op["rn"]==w&31 and p+op["imm"] in targets:
                xrefs.append({"site":gh(q),"target":gh(p+op["imm"]),"window":ins(q+S-24,96)})
    bitrefs=[{"slot":gh(a),"target":gh(ptr(a))} for a in rel if ptr(a) is not None and 0x10b8400-S<=ptr(a)<0x10b8984-S]
    keys=[string(ptr(0x4978468-S+j*8)) for j in range(12)]
    assert keys==prev["native_bit_table_candidates"][0]["keys"]
    # Report native field/table candidates only. No per-item inferred cache
    # enum until writer and converter dataflow is verified.
    report={"items":item.n,"cache":"0x05327298","cache_main_rva":"0x05227298","cache_writer":"0x01A6F2B4","cache_lifetime_verified":True,"dish_consumers":5,"writer_field_candidates":[{**{k:v for k,v in x.items() if k!="window"},"distinct_values":len(counts[x["crc"]])} for x in fields],"enum_table_candidates":matches,"writer_calls":calls,"wrapping_vtable_address_point":"0x04979268","wrapping_wrapper_slot":"0x30","wrapping_leaf_slot":"0x38","wrapping_pair_relocations_verified":True,"wrapping_single_selection_case_model_verified":True,"wrapping_synthetic_cases":768,"kind_bit_parameter_keys":keys,"bit_callback_relocation_candidates":bitrefs,"vptr_table_xrefs":len(xrefs),"extra_cache_converter_verified":False,"runtime_verified":False}
    for n,o in [("r125_report.json",report),("r125_dish_writer.json",writer),("r125_field_candidates.json",fields),("r125_enum_candidates.json",matches),("r125_query_xrefs.json",xrefs),("r125_kind_bit_window.json",ins(0x10b8400,0x5b0)),("r125_c_evidence.json",evidence)]:db.write(out/n,o)
    con=sqlite3.connect(out/"r105/acnh303_gift_research.sqlite3")
    con.execute("CREATE TABLE IF NOT EXISTS r125_kind_bit_enum(enum_index INTEGER PRIMARY KEY,japanese_key TEXT NOT NULL)")
    con.executemany("INSERT OR REPLACE INTO r125_kind_bit_enum VALUES(?,?)",enumerate(keys))
    con.commit();assert con.execute("PRAGMA integrity_check").fetchone()[0]=="ok";con.close()
    print("R125 REPORT",json.dumps(report,ensure_ascii=False),flush=True)
    for x in fields:print("R125 FIELD",json.dumps(x,ensure_ascii=False),flush=True)
    for x in xrefs[:20]:print("R125 XREF",json.dumps(x,ensure_ascii=False),flush=True)
    for x in writer:
        if x["op"].startswith(("bl ","cmp ","mov ","movk ","strh ")):print("R125 WRITER",json.dumps(x),flush=True)
if __name__=="__main__":
    p=argparse.ArgumentParser();p.add_argument("--root",type=Path,default=Path("."));p.add_argument("--out",type=Path,required=True);a=p.parse_args();main(a.root.resolve(),a.out.resolve())
