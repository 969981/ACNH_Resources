#!/usr/bin/env python3
"""R104 authenticated machine-code CFG for selected item price and clothing affinity."""
import argparse,collections,hashlib,json,re,struct
from pathlib import Path
from capstone import Cs,CS_ARCH_ARM64,CS_MODE_ARM
from capstone.arm64 import ARM64_OP_IMM
import acnh303_r103_gift_modes as r103
import acnh303_r100_nso_decode as dec
import acnh303_r96_native_tables as r96
import acnh303_r95_native_eventflags as r95
import acnh303_r104_gift_model as model
S=0x100000
def main(root,out):
    out.mkdir(parents=True,exist_ok=True);prior=out/"r103";r103.main(root,prior)
    elf,nso,mapped,segments,raw,tags,relocs=dec.decode(root)
    cs=Cs(CS_ARCH_ARM64,CS_MODE_ARM);cs.detail=True
    def hx(v):return hex(v)
    def ins(v,n):return list(cs.disasm(raw(v,n),v))
    def ir(i):return {"ghidra":hx(i.address+S),"bytes":i.bytes.hex(),"op":i.mnemonic+" "+i.op_str}
    def cfg(start,end):
        lo,hi=start-S,end-S;todo=[lo];seen={};edges=[];calls=[];unknown=[]
        while todo:
            v=todo.pop()
            if v in seen:continue
            if not lo<=v<hi:unknown.append({"site":hx(v+S),"reason":"outside_bound"});continue
            code=ins(v,4)
            if not code:unknown.append({"site":hx(v+S),"reason":"decode"});continue
            i=code[0];seen[v]=ir(i);m=i.mnemonic;o=i.operands;t=o[-1].imm if o and o[-1].type==ARM64_OP_IMM else None
            if m=="ret":succ=[]
            elif m=="br":succ=[];unknown.append({"site":hx(v+S),"reason":"indirect_branch","op":i.op_str})
            elif m=="b":succ=[t]
            elif m.startswith("b.") or m in ("cbz","cbnz","tbz","tbnz"):succ=[v+4,t]
            else:
                succ=[v+4]
                if m in ("bl","blr"):calls.append({"site":hx(v+S),"target":hx(t+S) if t is not None and m=="bl" else None,"op":i.op_str})
            for x in succ:
                if x is not None:edges.append([hx(v+S),hx(x+S)]);todo.append(x)
        return {"entry":hx(start),"upper_bound":hx(end),"instructions":[seen[v] for v in sorted(seen)],"edges":edges,"calls":calls,"unresolved":unknown}
    specs={"selected_item_price_wrapper":(0x10bf15c,0x10bf17c),"selected_item_price_consumer":(0x10bf17c,0x10bf500),"delivery_item_is_favor":(0xef16c0,0xef2380),"wrapping_wrapper":(0x10c89a0,0x10c89c0),"percent_choice":(0xfbb188,0xfbb20c),"friendship_query":(0xeec6ec,0xeec87c)}
    cfs={k:cfg(*v) for k,v in specs.items()}
    # Retrieve exact downstream C source for all direct calls when available.
    call_sources={}
    for key,x in cfs.items():
        for c in x["calls"]:
            t=c["target"]
            if t is None:continue
            h=f"{int(t,16):08x}";p=root/r96.CROOT/h[-4:-2]/(h+".c")
            if p.is_file():
                data=p.read_bytes();call_sources[t]={"path":p.relative_to(root).as_posix(),"sha256":hashlib.sha256(data).hexdigest(),"called_by":sorted({key}|set(call_sources.get(t,{}).get("called_by",[])))}
    price=cfs["selected_item_price_consumer"]
    print("R104 PRICE TAIL")
    for i in price["instructions"]:
        if int(i["ghidra"],16)>=0x10bf39c:print(i["ghidra"],i["op"])
    print("R104 FAVOR CALLS",json.dumps(cfs["delivery_item_is_favor"]["calls"]))
    # Source-backed event path correction: query returns 6-level, percent case0 is r<percent.
    expected={"0xeec820":"sub w9, w9, w8","0xfbb200":"cset w0, ls","0x10bf170":"cset w0, eq"}
    for addr,op in expected.items():
        i=ins(int(addr,16)-S,4)[0];assert i.mnemonic+" "+i.op_str==op
    graphs=r95.read(prior/"gift_graphs.json")
    equipment=graphs["NNPC_Select_Equipment"]["graph"]["events"];nodes={e["index"]:e for e in equipment}
    assert nodes[19]["cases"]==[{"target":20,"value":0},{"target":21,"value":1}] and nodes[20]["next"]==17
    assert nodes[17]["params"]["AddValue"]==2 and nodes[21]["params"]["AddValue"]==1
    # Check all direct callers of selected lower-level photo functions, then classify exact C exports only.
    targets={0x02845d90-S:"reward_mode",0x00baab34-S:"delivery_reward",0x021f5c40-S:"photo_item",0x026b7690-S:"photo_history"}
    edges=[]
    for va,b in mapped[:1]:
        for j,(w,) in enumerate(struct.iter_unpack("<I",memoryview(b)[:len(b)//4*4])):
            if w&0xfc000000!=0x94000000:continue
            t=(w&0x3ffffff);t=t-(1<<26) if t&(1<<25) else t
            pc=va+4*j;dest=pc+t*4
            if dest in targets:edges.append({"site":hx(pc+S),"target":hx(dest+S),"kind":targets[dest]})
    # Exact 39 reward nodes and 40 routes retained; direct delivery callback has no direct skip literal.
    delivery=(root/r96.CROOT/"ab/00baab34.c").read_text("utf-8")
    assert '"Friendship"' in delivery and "FUN_021f5c40" in delivery
    photo={"delivery_sub2_direct_skip_literal": "BromideRewardSkipCount" in delivery,"direct_call_sites":edges,"global_cooldown_bypass_proved":False}
    # Expand six allocation-based constructor candidates: true CFG, return sites, preserve undecided.
    review=r95.read(prior/"constructor_review_78.json");ctors=[]
    registry=r95.read(prior/"r102/r101/factory_registry_2214.json")
    for r in review:
        if not r["same_base_store_candidates"]:continue
        g=int(r["constructor"],16);nexts=sorted({int(x["constructor_ghidra"],16) for x in registry[r["kind"]] if int(x["constructor_ghidra"],16)>g})
        upper=min(g+0x1000,nexts[0] if nexts else g+0x1000);c=cfg(g,upper)
        ret_moves=[i for i in c["instructions"] if i["op"] in {"mov x0, "+s["base_register"] for s in r["same_base_store_candidates"]}]
        ctors.append({**r,"cfg":c,"return_register_move_candidates":ret_moves,"object_return_path_proved":False})
    # Additional name evidence via original BindInfo and exact original C literals not covered by R103.
    pending=r95.read(prior/"remaining_registry_names.json");wanted={(r["kind"],r["hash"]):r for r in pending}
    found=collections.defaultdict(lambda:collections.defaultdict(set))
    for f in sorted((root/r96.CROOT).rglob("*.c")):
        t=f.read_text("utf-8")
        for n in set(re.findall(r'"(EventFlow(?:Action|Query)[A-Za-z0-9_]+)"',t)):
            kind="action" if n.startswith("EventFlowAction") else "query"
            k=(kind,f"{r95.murmur3(n):08X}")
            if k in wanted:found[k][n].add(f.relative_to(root).as_posix())
    names=[{**wanted[k],"new_candidates":[{"name":n,"sources":sorted(src)} for n,src in v.items()]} for k,v in sorted(found.items())]
    release_hash=f"{r95.murmur3('EventFlowActionReleaseVersionFile'):08X}"
    release={"hash":release_hash,"registry_matches":[x for x in registry["action"] if x["hash"]==release_hash],"raw_literal_addresses":[],"special_dispatch_proved":False}
    needle=b"EventFlowActionReleaseVersionFile\0"
    for va,b in mapped[1:]:
        p=0
        while True:
            p=b.find(needle,p)
            if p<0:break
            release["raw_literal_addresses"].append(hx(va+p+S));p+=1
    model.selftest()
    outmodel=[model.model(f,0,0,k,e) for f in (0,59,60,149,150,175,200,255) for k in (0,1,10) for e in ("Trade","Root_OverFlow_case0","Low_Trade")]
    for n,o in [("native_cfg.json",cfs),("direct_call_sources.json",call_sources),("photo_call_sites.json",photo),("constructor_return_review.json",ctors),("additional_name_candidates.json",names),("release_version_review.json",release),("conditional_gift_model_examples.json",outmodel)]:
        r96.write(out/n,o)
    report={"cfg":{k:{"instructions":len(v["instructions"]),"unresolved":v["unresolved"],"calls":len(v["calls"])} for k,v in cfs.items()},"price_calls":price["calls"],"direct_call_sources":len(call_sources),"photo_call_sites":dict(collections.Counter(e["kind"] for e in edges)),"allocation_candidates":len(ctors),"return_move_candidates":sum(bool(x["return_register_move_candidates"]) for x in ctors),"additional_name_candidates":len(names),"release_version":release,"runtime_verified":False,"real_save_verified":False,"ghidra_gui_verified":False}
    r96.write(out/"report.json",report);print(json.dumps(report,indent=2))
if __name__=="__main__":
    p=argparse.ArgumentParser(description=__doc__);p.add_argument("--root",type=Path,default=Path("."));p.add_argument("--out",type=Path,required=True);a=p.parse_args();main(a.root.resolve(),a.out.resolve())
