#!/usr/bin/env python3
"""R107 reproduce actual R105 instruction audit and extract new original NSO reference candidates."""
import argparse,collections,hashlib,itertools,json,re,struct,zipfile,zlib
from pathlib import Path
from capstone import Cs,CS_ARCH_ARM64,CS_MODE_ARM
from acnh303_round11_elf_xref import adrp_target,adr_target,add_imm
import acnh303_r100_nso_decode as dec
BASE=Path("derived/3.0.3/npc_event_flags/r107_lifecycle_audit")
SLIDE=0x100000
SLOT=re.compile(r"x8, \\[x8(?:, #0x([0-9a-f]+)|, #(\\d+))?\\]")
def run(root,artifact,out):
    e=json.loads((root/BASE/"evidence.json").read_text(encoding="utf-8"))
    assert hashlib.sha256(artifact.read_bytes()).hexdigest()==e["prior"]["r105_sha256"]
    with zipfile.ZipFile(artifact) as z:
        stage=json.loads(z.read("stage_cfg.json"));batch=json.loads(z.read("batch_reset_cfg.json"))
    by={int(x["va"],16):x for x in stage["instructions"]};rows=[]
    for site in stage["indirect_sites"]:
        a=int(site,16);p=by.get(a-4,{});q=by.get(a-8,{})
        match=None
        for x in (p,q):
            if x.get("op")=="ldr" and (match:=SLOT.fullmatch(x["args"])):break
        assert match and by[a]["op"]=="blr"
        off=int(match[1],16) if match[1] else int(match[2]) if match[2] else 0
        strict=p.get("op")=="ldr" and SLOT.fullmatch(p["args"]) is not None and q.get("op")=="ldr" and q["args"]=="x8, [x0]"
        rows.append({"site":site,"slot_offset":off,"strict_double_ldr":strict,"window":[by[x] for x in range(a-16,a+4,4) if x in by],"resolved_target":None})
    assert len(rows)==38 and sum(x["strict_double_ldr"] for x in rows)==32
    assert dict(collections.Counter(str(x["slot_offset"]) for x in rows))==e["stage"]["slot_counts"]
    for a in e["anchors"]:
        p=root/a["path"];b=p.read_bytes();assert hashlib.sha1(("blob %d"%len(b)).encode()+b"\0"+b).hexdigest()==a["blob"]
        ls=p.read_text(encoding="utf-8").splitlines();assert all(ls[x["line"]-1].strip()==x["text"] for x in a["lines"])
    bb={x["va"]:x for x in batch["instructions"]}
    for a,op,args in [("00822C20","cmp","w0, #6"),("00822C4C","cmp","w19, #2"),("00822D2C","cmp","w19, #2"),("00822DB4","cbnz","w19, #0x722e04"),("00822E2C","cmp","w8, #1")]:
        assert (bb[a]["op"],bb[a]["args"])==(op,args)
    name=e["name_search"];sigs={p+"".join(t)+" u8" for p in name["prefixes"] for n in (1,2,3) for t in itertools.product(name["words"],repeat=n)}
    assert len(sigs)==name["unique_signatures"]
    assert sorted(s for s in sigs if zlib.crc32(s.encode())==0x5140e4b4)==name["matches"]
    elf,nso,mapped,segments,raw,tags,relocs=dec.decode(root);assert len(relocs)==380793
    for a,t in e["migration"]["pointers"]:
        assert relocs[int(a,16)-SLIDE]["addend"]==int(t,16)-SLIDE
    cs=Cs(CS_ARCH_ARM64,CS_MODE_ARM)
    def window(pc,n):
        return [{"va":f"{i.address+SLIDE:08X}","op":i.mnemonic,"args":i.op_str,"bytes":i.bytes.hex()} for i in cs.disasm(raw(pc,n),pc)]
    # Scan actual text for bounded references to slots and global objects.
    wanted={int(x,16)-SLIDE for x in ("04BB8878","04955BE8","04955BF8","04BC38E8","04BC38F0","055B2610","055B2618","04BB4FC8","00822C10","00DB8274")}
    pages={v&~4095 for v in wanted};start,data=mapped[0];hits=[]
    def emit(pc,t,k):
        hits.append({"site":f"{pc+SLIDE:08X}","target":f"{t+SLIDE:08X}","kind":k,"window":window(pc-16,40)})
    for i,(w,) in enumerate(struct.iter_unpack("<I",data[:len(data)-len(data)%4])):
        pc=start+i*4;kind=w&0xfc000000
        if kind in (0x14000000,0x94000000):
            n=w&0x3ffffff
            if n&0x2000000:n-=0x4000000
            t=pc+4*n
            if t in wanted:emit(pc,t,"BL" if kind==0x94000000 else "B")
        if w&0x9f000000==0x10000000:
            t=adr_target(w,pc)
            if t in wanted:emit(pc,t,"ADR")
        if w&0x9f000000!=0x90000000:continue
        page=adrp_target(w,pc)
        if page not in pages:continue
        reg=w&31
        for j in range(i+1,min(i+9,len(data)//4)):
            n=struct.unpack_from("<I",data,j*4)[0];a=add_imm(n)
            if a and a["rn"]==reg and page+a["imm"] in wanted:emit(start+j*4,page+a["imm"],"ADRP_ADD_CANDIDATE")
            if n&0xffc00000 in (0xf9400000,0xf9000000) and (n>>5)&31==reg:
                t=page+((n>>10)&0xfff)*8
                if t in wanted:emit(start+j*4,t,"ADRP_MEMORY_CANDIDATE")
            if n&0x7c000000==0x14000000:break
    # Directly reachable candidate owner, bounded by the next registered entry.
    lo=0xdb8274;hi=0xdb8664;todo=[lo];seen={};external=set();indirect=[];calls=[];returns=[]
    while todo:
        p=todo.pop()
        if p in seen:continue
        if not lo<=p<hi:external.add(p);continue
        x=window(p-SLIDE,4)
        if not x:raise ValueError("invalid instruction")
        x=x[0];seen[p]=x;op=x["op"]
        if op in ("ret","retab"):returns.append(p);continue
        if op in ("br","braa","brab"):indirect.append(p);continue
        if op=="blr":indirect.append(p)
        if op=="bl" or op=="b" or op.startswith("b.") or op in ("cbz","cbnz","tbz","tbnz"):
            t=int(x["args"].rsplit("#",1)[1],16)+SLIDE
            if op=="bl":calls.append((p,t))
            else:
                todo.append(t)
                if op=="b":continue
        if op not in ("brk","hlt","udf"):todo.append(p+4)
    move={"entry":hex(lo),"bound":hex(hi),"instructions":[seen[p] for p in sorted(seen)],"returns":[hex(p) for p in returns],"external":[hex(p) for p in sorted(external)],"indirect":[hex(p) for p in indirect],"moveout_call_reachable":(0xdb85a8,0x281cb30) in calls,"calls":[[hex(a),hex(b)] for a,b in calls],"full_owner_verified":False}
    out.mkdir(parents=True,exist_ok=True)
    def write(n,x):(out/n).write_text(json.dumps(x,indent=2,ensure_ascii=False)+"\n",encoding="utf-8")
    write("stage_indirect_slots.json",rows);write("next_hop_candidates.json",hits);write("moveout_cfg.json",move)
    report={"stage_slots_classified":38,"strict_double_ldr":32,"actual_targets_resolved":0,"name_signatures":len(sigs),"name_matches":[],"source_anchors":len(e["anchors"]),"original_relocation_slots_verified":len(e["migration"]["pointers"]),"new_reference_candidates":len(hits),"moveout_call_reachable":move["moveout_call_reachable"],"runtime_verified":False}
    write("report.json",report);print(json.dumps(report,indent=2))
if __name__=="__main__":
    p=argparse.ArgumentParser(description=__doc__);p.add_argument("--root",type=Path,default=Path("."));p.add_argument("--artifact",type=Path,required=True);p.add_argument("--out",type=Path,required=True);a=p.parse_args();run(a.root.resolve(),a.artifact,a.out.resolve())
