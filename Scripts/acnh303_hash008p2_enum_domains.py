#!/usr/bin/env python3
"""HASH-008P2: source-anchored ItemKind/ItemFrom joins and callback instruction evidence."""
import argparse,collections,csv,json,struct,zlib
from pathlib import Path
from capstone import Cs,CS_ARCH_ARM64,CS_MODE_LITTLE_ENDIAN
from capstone.arm64 import ARM64_OP_IMM,ARM64_OP_REG,ARM64_OP_MEM
from acnh303_hash008e import decode,parse_elf,get_bytes_va,require,bcsv,gitblob
from acnh303_hash008i import murmur
S=0x100000
DOMAINS=[("ItemKind",189,"5270EB75",0x05326EC0,0x04BC00C8,0x01A982A0,0x01A99D60,0x01A5F5A0,0x01A5F6C0),
         ("ItemFrom",318,"DB1A2F07",0x05327190,0x04BC0068,0x01A99D60,0x01A9B810,0x01A5F6C0,0x01A5F7C0)]
def dump(out,name,obj):(out/(name+".json")).write_text(json.dumps(obj,ensure_ascii=False,indent=2)+"\n",encoding="utf8")
def hx(v):return f"{v:08X}"
def run(root,out):
    out.mkdir(parents=True,exist_ok=True)
    elf,nso,mapped,segments,raw,tags,relocs=decode(root);segs=parse_elf(elf)
    md=Cs(CS_ARCH_ARM64,CS_MODE_LITTLE_ENDIAN);md.detail=True
    ib,n,w,ic,iv,ist,iw=bcsv(root,"ItemParam")
    require(n==11178 and gitblob(ib)=="431bbd26a575197a1bd963c1721b093ae3e4df84","ItemParam identity")
    all_rows=[{"row":i,"item_id":iv(i,"54706054",2),"resource_name":ist(i,"3FEBC642"),"raw_detail_kind":ist(i,"FC275E86")} for i in range(n)]
    summaries=[]
    for name,cap,h,cache,alias,entry,end,reg,reg_end in DOMAINS:
        b,nn,ww,c,v,st,width=bcsv(root,name);require(nn==cap,"domain row count")
        require(iw(h)==4,"ItemParam candidate width")
        label_h="87BF00E8";desc_h="036E8EBE"
        require(label_h in c and desc_h in c,"label schema")
        rows=[]
        for i in range(nn):
            label=st(i,label_h);p=label.encode()
            rows.append({"row_index":i,"unique_id":v(i,"54706054",2),"label":label,"name_ja":st(i,desc_h),"crc32":hx(zlib.crc32(p)),"murmur3":hx(murmur(p))})
        require(len({x["label"] for x in rows})==nn,"duplicate label")
        lookup={}
        for algo in ("crc32","murmur3"):
            by=collections.defaultdict(list)
            for x in rows:by[int(x[algo],16)].append(x)
            lookup[algo]=by
        vals=collections.Counter(iv(i,h,4) for i in range(n))
        counts={a:sum(k for x,k in vals.items() if len(by[x])==1) for a,by in lookup.items()}
        alg=max(counts,key=counts.get);by=lookup[alg]
        for row in rows:row["item_count_candidate"]=vals[int(row[alg],16)]
        dump(out,name+"_dictionary",rows)
        for i,x in enumerate(all_rows):
            val=iv(i,h,4);hits=by[val]
            x[name+"_raw"]=hx(val)
            x[name+"_row_candidate"]=hits[0]["row_index"] if len(hits)==1 else None
            x[name+"_label_candidate"]=hits[0]["label"] if len(hits)==1 else None
        # Source constructor registers these exact callbacks; read original
        # instructions to next registered entry (range, not certified CFG).
        callbacks=[]
        for role,a,z in (("resource_callback",entry,end),("registration_callback",reg,reg_end)):
            va=a-S;size=z-a;data=raw(va,size)
            require(data==get_bytes_va(elf,segs,va,size),"original instruction mismatch")
            ins=list(md.disasm(data,va))
            lines=[];crc=[];immediates=[];references=[];calls=[];regs={}
            for q in ins:
                m=q.mnemonic;ops=q.operands
                line={"va":hx(q.address+S),"asm":m+" "+q.op_str,"bytes":q.bytes.hex()}
                lines.append(line)
                if m.startswith("crc32"):crc.append(line)
                def rn(o):return q.reg_name(o.reg)
                dst=rn(ops[0]) if ops and ops[0].type==ARM64_OP_REG else None
                def canon(r):return "x"+r[1:] if r and r.startswith("w") and r[1:].isdigit() else r
                rd=canon(dst)
                value=None
                if m in ("adr","adrp","mov","movz","movn") and len(ops)==2 and ops[1].type==ARM64_OP_IMM:
                    value=ops[1].imm<<ops[1].shift.value
                    if m=="movn":value=~value
                elif m=="movk" and rd in regs and len(ops)==2 and ops[1].type==ARM64_OP_IMM:
                    shift=ops[1].shift.value;value=(regs[rd]&~(65535<<shift))|(ops[1].imm<<shift)
                elif m in ("add","sub") and len(ops)==3 and ops[1].type==ARM64_OP_REG and ops[2].type==ARM64_OP_IMM:
                    base=regs.get(canon(rn(ops[1])))
                    if base is not None:value=base+(1 if m=="add" else -1)*(ops[2].imm<<ops[2].shift.value)
                for o in ops:
                    if o.type!=ARM64_OP_MEM or o.mem.index:continue
                    base=regs.get(canon(q.reg_name(o.mem.base)))
                    if base is None:continue
                    addr=base+o.mem.disp
                    if addr+S in (cache,cache+4,cache+8,alias):
                        references.append({**line,"address":hx(addr+S)})
                    if m=="ldr" and dst and dst.startswith("x") and addr in relocs:
                        rr=relocs[addr]
                        if rr["symbol"]==0 and rr["type"] in ("RELR",1027):value=rr["addend"]
                if m=="bl" and ops and ops[0].type==ARM64_OP_IMM:calls.append({**line,"target":hx(ops[0].imm+S)})
                try:_,writes=q.regs_access()
                except Exception:writes=[]
                for rr in writes:regs.pop(canon(q.reg_name(rr)),None)
                if value is not None and rd:
                    value&=(0xffffffff if dst.startswith("w") else 0xffffffffffffffff)
                    regs[rd]=value
                    if value==int(h,16) or value in vals or value in lookup["crc32"] or value in lookup["murmur3"]:
                        immediates.append({**line,"value":hx(value),"is_field_hash":value==int(h,16),"matched_labels":[x["label"] for x in lookup["crc32"][value]+lookup["murmur3"][value]]})
                    if value+S in (cache,cache+4,cache+8,alias):
                        references.append({**line,"address":hx(value+S)})
                if m in ("bl","blr"):
                    for j in range(19):regs.pop("x"+str(j),None)
                if m in ("b","br","ret") or m.startswith(("b.","cbz","cbnz","tbz","tbnz")):regs.clear()
            dump(out,name+"_"+role,{"start":hx(a),"end_exclusive":hx(z),"instructions":lines,"crc_instructions":crc,"hash_immediates":immediates,"references":references,"calls":calls})
            callbacks.append({"role":role,"entry":hx(a),"instruction_count":len(lines),"crc_count":len(crc),"field_hash_sites":[x for x in immediates if x["is_field_hash"]],"matched_label_immediates":sum(bool(x["matched_labels"]) for x in immediates),"cache_references":references[:20],"calls":sorted({x["target"] for x in calls})})
        r=relocs.get(alias-S)
        require(r and r["addend"]==cache-S,"cache alias identity")
        summary={"table":name,"rows":nn,"blob":gitblob(b),"field":h,"field_offset":ic[h][1],"distinct_item_values":len(vals),"row_hash_matches":counts,"best_algorithm":alg,"unmatched_raw_values":[{"raw":hx(x),"count":k} for x,k in vals.items() if len(by[x])!=1],"callbacks":callbacks,"row_index_order_runtime_verified":False}
        summaries.append(summary)
        print("DOMAIN",json.dumps(summary,ensure_ascii=False))
        print("ENUM_ROWS",name,json.dumps([{k:x[k] for k in ("row_index","unique_id","label","item_count_candidate")} for x in rows],ensure_ascii=False))
    with (out/"itemparam_enum_candidates.csv").open("w",encoding="utf-8-sig",newline="") as f:
        wr=csv.DictWriter(f,fieldnames=list(all_rows[0]));wr.writeheader();wr.writerows(all_rows)
    dump(out,"summary",summaries)
if __name__=="__main__":
    p=argparse.ArgumentParser();p.add_argument("--root",type=Path,default=Path("."));p.add_argument("--out",type=Path,required=True);a=p.parse_args();run(a.root.resolve(),a.out.resolve())
