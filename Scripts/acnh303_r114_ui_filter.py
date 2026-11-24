#!/usr/bin/env python3
"""R114: actual filter consumer, slot mask model, targeted enum provenance candidates."""
import argparse,collections,json,sqlite3,struct
from pathlib import Path
from capstone import Cs,CS_ARCH_ARM64,CS_MODE_ARM
import acnh303_r100_nso_decode as dec
import acnh303_r105_gift_db as db
from acnh303_round11_elf_xref import adrp_target,add_imm,ldr_uimm,bl_target
S=0x100000

def slot_mark(valid,empty,selected,bypass,primary,secondary):
    # Model the C export, preserving unknown external callbacks.
    if not valid:return False
    if not bypass:
        if selected is True:return True
        if selected is None:return None
    if empty or primary is True or secondary is True:return False
    if primary is None or secondary is None:return None
    return True

def test():
    assert slot_mark(False,False,True,False,False,False) is False
    assert slot_mark(True,True,False,False,False,False) is False
    assert slot_mark(True,False,True,False,True,True) is True
    assert slot_mark(True,False,True,True,True,False) is False
    assert slot_mark(True,False,False,False,False,True) is False
    assert slot_mark(True,False,False,False,False,False) is True
    assert slot_mark(True,False,False,False,None,False) is None

def main(root,out):
    test()
    elf,nso,mapped,segments,raw,tags,rel=dec.decode(root)
    cs=Cs(CS_ARCH_ARM64,CS_MODE_ARM);cs.detail=True
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
                p=a-b;k=d.find(b"\0",p,min(len(d),p+160))
                if k<=p:return None
                try:s=d[p:k].decode("utf8")
                except UnicodeDecodeError:return None
                if all(c.isprintable() for c in s):return s
        return None
    previous=json.loads((out/"r113_report.json").read_text("utf8"))
    assert previous["recipe_class_counts"]=={"0":783,"1":141}
    assert previous["source_predicted_bitmap_popcounts"]==[783,141,131]
    assert ptr(0x4bb2230-S)==0x5739190-S
    assert ptr(0x4bc0048-S)==0x5326d48-S
    src=root/"derived/3.0.3/ghidra12.2/c"
    evidence={}
    for name,p,need in [
        ("copy","0d/03190d10",["PTR_DAT_04bb2230 + 0x28","local_560 = *(code **)(lVar17 + 0xd80)","uVar23 = *(undefined8 *)(lVar17 + 0xd88)","FUN_03195e80(param_1,&local_560)"]),
        ("evaluate","5e/03195e80",["param_1 + 0x1c4f0","FUN_02672e00","FUN_02677ea0","FUN_0266a0c0","(*(code *)*param_2)(&local_48)","local_48 == -2","uVar7 == 0x28","*puVar2 = *puVar2 | 1L"]),
        ("display","40/03194070",["param_1 + 0x1c4f0","local_a8 = 7","plVar24[3] + 0x1c0","bVar5 = false"]),
        ("slot","7e/02677ea0",["0x194b0","0x57e58","0x158","0xb8","0xa0","0x14"]),
        ("selected","a0/0266a0c0",["0x1a88","0x1a80","FUN_0277d7b4","FUN_028169a0"]),
        ("guard","b5/01aeb510",["uVar9 != 0x49","-0x6f43f7ab","param_1 + 0xe"])]:
        f=src/(p+".c");b=f.read_bytes()
        assert all(x.encode() in b for x in need),(name,[x for x in need if x.encode() not in b])
        evidence[name]={"file":str(f.relative_to(root)),"sha256":db.digest(b),"anchors":need}
    # Machine-code windows from actual callbacks; report evidence separately from C.
    windows={"evaluate":[row(i) for i in ins(0x3195e80-S,0x160)],"copy_direct_calls":[]}
    # Direct calls from within exported consumer; use a bounded window of the large caller.
    for i in ins(0x3190d10-S,0x4000):
        if bl_target(int.from_bytes(i.bytes,"little"),i.address)==0x3195e80-S:
            windows["copy_direct_calls"].append([row(x) for x in ins(i.address-64,96)])
    # Find the full 82-entry enum candidates via original relocation strings and
    # exact CRC coverage of ItemParam fields. Only report candidates until writer tied.
    item=db.BCSV(root,"ItemParam");kind=db.BCSV(root,"ItemKind")
    columns={h:collections.Counter(item.val(i,h) for i in range(item.n)) for h,w in item.width.items() if w==4}
    # A native enum table must have distinct nonempty strings. Enumerate adjacent
    # relocated pointers only, then compare each sliding window of 82 keys.
    keys=sorted(a for a in rel if isinstance(a,int) and ptr(a) is not None)
    runs=[];cur=[];last=None
    for a in keys:
        if last is not None and a!=last+8:
            if len(cur)>=82:runs.append(cur)
            cur=[]
        cur.append(a);last=a
    if len(cur)>=82:runs.append(cur)
    candidates=[]
    for run in runs:
        names=[string(ptr(a)) for a in run]
        hashes=[db.crc(n) if n is not None else None for n in names]
        for j in range(len(run)-81):
            ns=names[j:j+82];hs=hashes[j:j+82]
            if None in hs or len(set(hs))!=82:continue
            hset=set(hs)
            for h,counts in columns.items():
                distinct=len(counts.keys()&hset)
                if distinct<3:continue
                matched=sum(counts[x] for x in counts.keys()&hset)
                if matched<item.n*0.8:continue
                candidates.append({"table":gh(run[j]),"field_crc":h,"field_offset":item.cols[h],"matched":matched,"distinct_matches":distinct,"distinct_values":len(counts),"enum_0x49":ns[0x49],"names":ns})
    candidates.sort(key=lambda x:(-x["matched"],-x["distinct_matches"],x["table"]))
    # Local xrefs to the precise enum cache descriptor in the known ItemParam
    # initialization area. Store windows as candidates; no unproven reaching defs.
    refs=[];targets={0x5326d48-S,0x5326d50-S,0x4bc0048-S};pages={a&~4095 for a in targets}
    begin=max(va,0x1a60000-S);stop=min(end,0x1a90000-S)
    for a in range(begin,stop,4):
        w=struct.unpack_from("<I",code,a-va)[0];p=adrp_target(w,a)
        if p not in pages:continue
        for q in range(a+4,min(a+96,stop),4):
            ww=struct.unpack_from("<I",code,q-va)[0];op=add_imm(ww) or ldr_uimm(ww)
            if op and op["rn"]==w&31 and p+op["imm"] in targets:
                refs.append({"site":gh(q),"target":gh(p+op["imm"]),"window":[row(x) for x in ins(max(va,q-32),160)]})
    # Actual difference between ordinary and birthday kind permissions.
    km={db.crc(kind.string(i,"87BF00E8")):i for i in range(kind.n)}
    diff=[];lookup=[]
    for i in range(item.n):
        k=km[item.val(i,"5270EB75")];a=kind.val(k,"0732BB98");b=kind.val(k,"2C1B3B5B")
        if a!=b:diff.append({"item_id":item.val(i,"54706054"),"kind":kind.string(k,"87BF00E8"),"ordinary":a,"birthday":b})
    for ident in sorted(set(previous["lookup_tables"]["normal"]+previous["lookup_tables"]["special"]+[0x1180,0x306,0x3a19,0x1225,0x839,0x9c4])):
        rows=[i for i in range(item.n) if item.val(i,"54706054")==ident]
        lookup.append({"id":ident,"matches":len(rows),"kind":kind.string(km[item.val(rows[0],"5270EB75")],"87BF00E8") if len(rows)==1 else None})
    report={"filter_consumer_c_verified":True,"filter_display_reader_c_verified":True,"filter_mask_offset":"0x1C4F0","slot_count":40,"enum_cache":"0x05326D48","enum_candidate_count":len(candidates),"best_enum_candidates":[{k:v for k,v in x.items() if k!="names"} for x in candidates[:12]],"enum_cache_ref_candidates":len(refs),"permission_differences":diff,"lookup_item_identities":lookup,"copy_direct_call_windows":len(windows["copy_direct_calls"]),"actual_runtime_verified":False}
    for n,o in [("r114_report.json",report),("r114_c_evidence.json",evidence),("r114_machine_windows.json",windows),("r114_enum_candidates.json",candidates),("r114_enum_cache_refs.json",refs)]:db.write(out/n,o)
    web=json.loads((out/"gift_web_sidecar_r113.json").read_text("utf8"))
    web["r114_filter_consumer"]={"source":"03190D10","evaluator":"03195E80","display_reader":"03194070","mask_offset":"0x1C4F0","slot_count":40,"runtime_verified":False}
    web["limitations"].append("Slot mark model is C-derived; actual screen state and live input callbacks not verified")
    db.write(out/"gift_web_sidecar_r114.json",web)
    print("R114 REPORT",json.dumps(report,ensure_ascii=False),flush=True)
    for c in candidates[:3]:print("R114 ENUM CANDIDATE",json.dumps(c,ensure_ascii=False),flush=True)
    for x in refs[:12]:print("R114 ENUM XREF",json.dumps(x,ensure_ascii=False),flush=True)
if __name__=="__main__":
    p=argparse.ArgumentParser();p.add_argument("--root",type=Path,default=Path("."));p.add_argument("--out",type=Path,required=True);a=p.parse_args();main(a.root.resolve(),a.out.resolve())
