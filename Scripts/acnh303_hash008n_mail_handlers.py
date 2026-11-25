#!/usr/bin/env python3
"""HASH-008N: original dispatch targets, bounded CFG, and runtime template initializer.
No handler name or native execution is inferred from a pointer alone.
"""
import argparse, collections, hashlib, json, struct, subprocess
from pathlib import Path
from capstone import Cs, CS_ARCH_ARM64, CS_MODE_LITTLE_ENDIAN
from capstone.arm64 import ARM64_OP_IMM
from acnh303_hash008e import decode,parse_elf,get_bytes_va,require,bcsv,gitblob

SLIDE=0x100000
DISPATCH=0x04A39630
VTABLE=0x049FF3A8
TEMPLATE=0x052E0120
LEGACY="f09e15460d02790060a374b2ad6ba569ba9b97ed"
ANCHORS={
 0x01A45128:"a6c59ab58426e00e3f7965c153e32f607d2352f3",
 0x01A45160:"b153ba6b8cf35c02208edb965e9d31b7e58623d1",
 0x01A44810:"3428c178bd8214e18c988e328dbec963fb71e925",
 0x01A45210:"c5281c64b0ad2b6bc262cc12d533cb5841d98fa6",
 0x0277D4AC:"b9836819660eabda59cd7eace467ebad2e6df08c",
 0x0277F248:"136bc58057ac7b33baeead8628eaa1edf299314c",
 0x01B8CB50:"e29cb88958d7cee2372b93584de2eb067d55d16b",
 0x01B8E370:"15f927898ad08899e9eef38f41c5f4ff9ee80027",
}
def hx(x):return f"{x:08X}"
def dump(out,n,o):(out/(n+".json")).write_text(json.dumps(o,ensure_ascii=False,indent=2)+"\n")
def run(root,out,source_ref):
    out.mkdir(parents=True,exist_ok=True)
    elf,nso,mapped,segments,raw,tags,relocs=decode(root);segs=parse_elf(elf)
    md=Cs(CS_ARCH_ARM64,CS_MODE_LITTLE_ENDIAN);md.detail=True
    def executable(a):
        return any(s["flags"]&1 and s["vaddr"]<=a<s["vaddr"]+s["filesz"] for s in segs)
    def ptr(ghidra):
        a=ghidra-SLIDE;r=relocs.get(a)
        require(r is not None and r["symbol"]==0 and r["type"] in ("RELR",1027) and r["addend"] is not None,"missing relative relocation "+hx(ghidra))
        return {"slot":hx(ghidra),"target":hx(r["addend"]+SLIDE),"target_elf":r["addend"],"relocation":r,"raw":raw(a,8).hex()}
    dispatch=[{"handling":i,**ptr(DISPATCH+8*(i-1))} for i in range(1,19)]
    for row in dispatch:require(executable(row["target_elf"]),"nonexecutable dispatch target")
    vtable=[{"offset":i*8,**ptr(VTABLE+i*8)} for i in range(5)]
    constructor=vtable[2]
    cache_alias=ptr(0x04BBFE58);empty_alias=ptr(0x04BB37E0)
    dump(out,"dispatch_pointers",dispatch);dump(out,"vtable",vtable)
    dump(out,"template_pointer_evidence",{"cache_alias":cache_alias,"default_alias":empty_alias,"cache_alias_matches":cache_alias["target"]==hx(TEMPLATE),"constructor_matches_candidate":constructor["target"]=="01A45128"})
    print("DISPATCH",json.dumps(dispatch));print("VTABLE",json.dumps(vtable))
    print("TEMPLATE",json.dumps({"cache_alias":cache_alias,"empty_alias":empty_alias,"constructor":constructor}))
    # Archive available Ghidra export for each actual target; a LAB may be inside
    # another function and have no independent export. Do not claim no code.
    def source(va,expected=None):
        s=hx(va).lower();path=f"derived/3.0.3/ghidra12.2/c/{s[4:6]}/{s}.c"
        p=subprocess.run(["git","show",source_ref+":"+path],cwd=root,capture_output=True)
        if p.returncode:return {"path":path,"available":False,"error":p.stderr.decode(errors="replace")[:500]}
        blob=gitblob(p.stdout)
        if expected:require(blob==expected,"Ghidra anchor drift "+s)
        (out/"ghidra").mkdir(exist_ok=True);(out/"ghidra"/(s+".c")).write_bytes(p.stdout)
        return {"path":path,"available":True,"blob":blob}
    sources={hx(a):source(a,b) for a,b in ANCHORS.items()}
    targets={x["target_elf"] for x in dispatch+vtable}
    # Bounded intra-entry CFG: follow conditional and unconditional direct
    # branches locally, collect direct calls, stop on indirect exits or other
    # known entries. This is not a complete function recovery.
    def cfg(entry):
        todo=[entry];seen=set();rows=[];exits=[];calls=set()
        while todo and len(seen)<4096:
            pc=todo.pop()
            if pc in seen:continue
            if pc!=entry and pc in targets:
                exits.append({"target":hx(pc+SLIDE),"reason":"another_known_entry"});continue
            if not executable(pc) or abs(pc-entry)>0x10000:
                exits.append({"target":hx(pc+SLIDE),"reason":"outside_bound"});continue
            data=get_bytes_va(elf,segs,pc,4)
            if data is None:continue
            require(raw(pc,4)==data,"ELF/NSO instruction mismatch")
            ins=next(md.disasm(data,pc),None)
            if ins is None:
                exits.append({"target":hx(pc+SLIDE),"reason":"decode_failure"});continue
            seen.add(pc);m=ins.mnemonic;ops=ins.operands
            rows.append({"address":hx(pc+SLIDE),"bytes":data.hex(),"mnemonic":m,"operands":ins.op_str})
            target=ops[-1].imm if ops and ops[-1].type==ARM64_OP_IMM else None
            if m=="bl" and target is not None:calls.add(target);todo.append(pc+4)
            elif m=="b" and target is not None:todo.append(target)
            elif m.startswith("b.") or m in ("cbz","cbnz","tbz","tbnz"):
                todo.append(pc+4)
                if target is not None:todo.append(target)
            elif m in ("ret","retaa","retab","br","braa","brab","eret"):
                exits.append({"address":hx(pc+SLIDE),"reason":m})
            else:todo.append(pc+4)
        return {"entry":hx(entry+SLIDE),"instruction_count":len(rows),"instruction_budget_exhausted":bool(todo),"calls":[hx(a+SLIDE) for a in sorted(calls)],"exits":exits,"instructions":sorted(rows,key=lambda x:x["address"]),"status":"bounded_original_instruction_graph"}
    for entry in sorted(targets):
        if not executable(entry):continue
        s=hx(entry+SLIDE)
        if s not in sources:sources[s]=source(entry+SLIDE)
        data=cfg(entry);dump(out,"cfg_"+s,data)
    dump(out,"source_inventory",sources)
    b,n,w,c,v,s,width=bcsv(root,"ItemParam")
    require(n==11178 and gitblob(b)=="431bbd26a575197a1bd963c1721b093ae3e4df84","ItemParam identity")
    ids={v(i,"54706054",2) for i in range(n)}
    # Offline initializer input model, NOT reconstructed runtime bytes.
    with (out/"template_inputs.jsonl").open("w") as f:
        for idx in range(15000):
            f.write(json.dumps({"index":idx,"initial_item_hex":struct.pack("<HHI",idx,0,0).hex(),"itemparam_id_exists":idx in ids,"runtime_item_hex":None,"status":"initial_input_only"})+"\n")
    summary={"dispatch_slots":len(dispatch),"distinct_dispatch_targets":len({x["target"] for x in dispatch}),"available_handler_exports":sum(sources[x["target"]]["available"] for x in dispatch),"constructor_target":constructor["target"],"constructor_candidate_matches":constructor["target"]=="01A45128","cache_alias_matches":cache_alias["target"]==hx(TEMPLATE),"template_input_rows":15000,"itemparam_ids_in_domain":sum(0<=i<15000 for i in ids),"runtime_templates_recovered":0,"handler_semantics_verified":0}
    dump(out,"summary",summary);print("SUMMARY",json.dumps(summary))
    require(summary["constructor_candidate_matches"],"constructor target differs; inspect artifact")
    require(summary["cache_alias_matches"],"template cache alias differs; inspect artifact")
if __name__=="__main__":
    p=argparse.ArgumentParser();p.add_argument("--root",type=Path,default=Path("."));p.add_argument("--out",type=Path,required=True);p.add_argument("--source-ref",default=LEGACY);a=p.parse_args();run(a.root.resolve(),a.out.resolve(),a.source_ref)
