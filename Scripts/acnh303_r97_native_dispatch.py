#!/usr/bin/env python3
"""R97 source-backed light layout, bind aliases, gift paths and hash candidates."""
import argparse,hashlib,json,re,struct,zlib
from pathlib import Path
from collections import defaultdict,Counter
import acnh303_r95_native_eventflags as r95
import acnh303_r96_native_tables as r96
BASE=r96.BASE
MASK=0xffffffff
def hashes(name):
    return {"murmur3_seed0":r95.murmur3(name),"crc32":zlib.crc32(name.encode())&MASK}
def search_hashes(blob,segments,names):
    targets=defaultdict(list)
    for name in sorted(names):
        for alg,v in hashes(name).items():targets[v].append((name,alg))
    hits=defaultdict(list); counts=Counter()
    def record(v,obj):
        for name,alg in targets.get(v,[]):
            k=(name,alg,obj["kind"]);counts[k]+=1
            if counts[k]<=32:hits[name].append({**obj,"hash_algorithm_candidate":alg,"hash_hex":f"{v:08X}"})
    # Exact aligned word constants in mapped non-executable regions.
    for seg in segments:
        start=seg["file_offset"];va=seg["vaddr"];end=start+seg["filesz"]
        if not seg["flags"]&1:
            for val in targets:
                needle=struct.pack("<I",val);pos=start
                while True:
                    p=blob.find(needle,pos,end)
                    if p<0:break
                    pos=p+1
                    addr=va+p-start
                    if addr%4==0:record(val,{"kind":"aligned_data_word","va":hex(addr)})
        else:
            # Consecutive MOVZ/MOVK with same register and distinct halfword.
            # Deliberately bounded pattern, not a disassembly/dataflow proof.
            prev=None
            for i,(w,) in enumerate(struct.iter_unpack("<I",memoryview(blob)[start:end-(end-start)%4])):
                pc=va+4*i
                if prev is not None and (w&0x7f800000)==0x72800000:
                    pw,pp=prev; rd=w&31; sh=((w>>21)&3)*16; psh=((pw>>21)&3)*16
                    if rd==pw&31 and sh!=psh and sh<32 and psh<32:
                        v=(((pw>>5)&0xffff)<<psh)|(((w>>5)&0xffff)<<sh)
                        record(v,{"kind":"adjacent_movz_movk","va":hex(pp),"second_va":hex(pc),"words":[f"{pw:08X}",f"{w:08X}"]})
                prev=(w,pc) if (w&0x7f800000)==0x52800000 else None
    return {n:{"hashes":{k:f"{v:08X}" for k,v in hashes(n).items()},"candidates":hits[n],
            "counts":{f"{a}:{k}":v for (name,a,k),v in counts.items() if name==n},"callback_verified":False} for n in sorted(names)}
def run(root,out):
    out.mkdir(parents=True,exist_ok=True)
    e=r95.read(root/BASE/"r97/evidence.json")
    verified=[]
    for rel,role,needles in e["anchors"]:
        p=root/r96.CROOT/(rel+".c");s=p.read_text(encoding="utf-8")
        if not all(n in s for n in needles):raise ValueError("Anchor mismatch "+rel)
        verified.append({"file":p.relative_to(root).as_posix(),"sha256":hashlib.sha256(p.read_bytes()).hexdigest(),"role":role,"anchors":needles})
    # R96 reproduces 62 unresolved and filters the 34 with address formation.
    prior=out/"r96_reproduced";r96.run(root,prior)
    missing=[x for x in r95.read(prior/"unresolved_62.json") if not x["elf_reference"]["code_address_candidates"]]
    if len(missing)!=28:raise ValueError("R96 remaining candidate baseline changed")
    bp=root/r96.FLOW/"Info/BindInfo.json";bind=r95.read(bp);tables=bind["tree"]["root"]
    action={x["Key"]:x["Value"] for x in tables["ActionBindData"]}
    query={x["Key"]:x["Value"] for x in tables["QueryBindData"]}
    terms={"EventFlowQueryNpcInviteCheck","EventFlowQueryIsCollaboNpc","EventFlowActionNpcAddFriendship","EventFlowActionNpcDecideGeneralQuestReward","EventFlowQueryCheckNpcFavorLevel"}
    resolved={k:{"kind":"action" if k.startswith("EventFlowAction") else "query",
                 "direct_alias":(action if k.startswith("EventFlowAction") else query).get(k),
                 "dispatch_binding_proven":False} for k in sorted(terms)}
    names=set(terms)|{x["direct_alias"] for x in resolved.values() if x["direct_alias"]}|{x["key"] for x in missing}
    names|={re.sub(r"^EventFlow(?:Action|Query)","",n) for n in names}
    b=(root/r96.ELF).read_bytes()
    if hashlib.sha256(b).hexdigest()!=r96.SHA:raise ValueError("ELF mismatch")
    matches=search_hashes(b,r96.parse_elf(b),names)
    flows={}
    for stem in ("NNPC_Select_Present","NNPC_Select_Creature","NNPC_Select_Furniture","NNPC_Select_Equipment","NNPC_Select_Etc","NNPC_Select_Tool","NNPC_Select_Sell_Gift","NNPC_GEvent_BirthdayN_H","NNPC_Quest_AllReward","NNPC_Reaction_Moving","NNPC_Talk_Force"):
        p=root/r96.FLOW/(stem+".json");g=r95.read(p)["graph"]
        flows[stem]={"source":p.relative_to(root).as_posix(),"sha256":hashlib.sha256(p.read_bytes()).hexdigest(),"entrypoints":g["entrypoints"],"events":g["events"]}
    by_index={n:{x["index"]:x for x in f["events"]} for n,f in flows.items()}
    checks=[("NNPC_Select_Present",8,"JudgeTarget","cItemSelect"),("NNPC_Select_Present",92,"AddValue",1),("NNPC_Select_Present",93,"AddValue",1),("NNPC_Select_Present",34,"Border",1000),("NNPC_Select_Sell_Gift",0,"Border",3000),("NNPC_GEvent_BirthdayN_H",93,"Border",2000),("NNPC_GEvent_BirthdayN_H",94,"Border",2001),("NNPC_GEvent_BirthdayN_H",95,"Border",8000),("NNPC_GEvent_BirthdayN_H",96,"Border",501)]
    for n,i,k,v in checks:
        if by_index[n][i]["params"][k]!=v:raise ValueError("Gift evidence drift")
    # Constrain source-name candidate generation to actual identifiers, plus explicit type suffix.
    candidates=defaultdict(list);unknown={int(x,16) for x in e["unknown_field_names"]}
    nameset=set()
    for p in sorted((root/r96.CROOT).rglob("*.c")):
        nameset.update(re.findall(r'"([A-Za-z_][A-Za-z0-9_]{1,79})"',p.read_text(encoding="utf-8")))
    for n in sorted(nameset):
        for t in ("u8","s8","bool"):
            sig=f"{n} {t}";v=zlib.crc32(sig.encode())&MASK
            if v in unknown:candidates[f"{v:08X}"].append({"signature":sig,"status":"candidate_not_original_name_proof"})
    remaining=[{**x,"hash_candidates":matches[x["key"]]} for x in missing]
    report={"native_anchors":len(verified),"light_records_per_resident":160,"light_flags_per_record":256,
            "real_save_fixture_verified":False,"binding_action_aliases":len(action),"binding_query_aliases":len(query),
            "target_bindings":resolved,"query_callback_verified":False,"gift_graphs":len(flows),"gift_parameter_checks":len(checks),
            "remaining_prior_unresolved":len(remaining),"remaining_with_numeric_hash_candidates":sum(bool(x["hash_candidates"]["candidates"]) for x in remaining),
            "unknown_original_name_candidates":dict(candidates),"photo_probability_verified":False}
    r96.write(out/"report.json",report);r96.write(out/"native_evidence.json",{**e,"verified_anchors":verified})
    r96.write(out/"bind_aliases.json",{"source":bp.relative_to(root).as_posix(),"sha256":hashlib.sha256(bp.read_bytes()).hexdigest(),"source_original_sha256":bind["sha256"],"actions":action,"queries":query,"targets":resolved})
    r96.write(out/"elf_hash_candidates.json",matches);r96.write(out/"remaining_28.json",remaining)
    r96.write(out/"gift_and_recruitment_graphs.json",flows)
    print(json.dumps(report,ensure_ascii=False,indent=2))
if __name__=="__main__":
    p=argparse.ArgumentParser(description=__doc__);p.add_argument("--root",type=Path,default=Path("."));p.add_argument("--out",type=Path,required=True);a=p.parse_args();run(a.root.resolve(),a.out.resolve())
