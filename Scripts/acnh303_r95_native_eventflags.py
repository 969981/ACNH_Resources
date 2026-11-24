#!/usr/bin/env python3
"""R95: correlate original scoped EventFlow accesses, Native literals and Murmur3 candidates."""
import argparse
import hashlib
import json
import re
import zlib
from collections import Counter, defaultdict
from pathlib import Path
BASE=Path("derived/3.0.3/npc_event_flags")
CROOT=Path("derived/3.0.3/ghidra12.2/c")
FLOW=Path("UnPack/1/EventFlow")
NS={"cNpcMemory":"npc_memory","cNpcSave":"npc_save","cNpcTemp":"npc_temp",
    "cPlayerActivity":"player_activity"}
H_NAMES=("5140E4B4","FA93F14B","5F77B61A","BED25A86","8D401DF7")
M=0xffffffff
def read(p): return json.loads(p.read_text(encoding="utf-8"))
def write(p,o):
    p.parent.mkdir(parents=True,exist_ok=True)
    p.write_text(json.dumps(o,ensure_ascii=False,indent=2)+"\n",encoding="utf-8")
def require(x,msg):
    if not x: raise ValueError(msg)
def rot(x,n): return ((x<<n)|(x>>(32-n)))&M
def murmur3(s):
    b=s.encode("utf-8"); h=0
    for i in range(0,len(b)//4*4,4):
        k=int.from_bytes(b[i:i+4],"little")
        k=rot((k*0xcc9e2d51)&M,15)*0x1b873593&M
        h=(rot(h^k,13)*5+0xe6546b64)&M
    tail=b[len(b)//4*4:]
    if tail:
        k=int.from_bytes(tail,"little")
        h^=rot(k*0xcc9e2d51&M,15)*0x1b873593&M
    h^=len(b)
    h=((h^(h>>16))*0x85ebca6b)&M
    h=((h^(h>>13))*0xc2b2ae35)&M
    return (h^(h>>16))&M
def refs(root,evidence,rows):
    keys={r["key"] for r in rows}
    kh=defaultdict(list)
    for key in sorted(keys): kh[murmur3(key)].append(key)
    field_h={int(x,16):x for x in H_NAMES}
    quoted=re.compile(r'"('+"|".join(re.escape(k) for k in sorted(keys,key=lambda x:(-len(x),x)))+r')"')
    hexpat=re.compile(r"(?<![0-9A-Za-z_])(-?0[xX][0-9a-fA-F]{1,8})(?![0-9a-fA-F])")
    idpat=re.compile(r'"([A-Za-z_][A-Za-z0-9_]{1,79})"')
    literals=defaultdict(list); numeric=defaultdict(list); columns=defaultdict(list)
    corpus=set()
    files=sorted((root/CROOT).rglob("*.c"))
    require(len(files)==59971,"Expected full 3.0.3 Ghidra C export")
    for p in files:
        s=p.read_text(encoding="utf-8")
        corpus.update(idpat.findall(s))
        path=p.relative_to(root).as_posix()
        for num,line in enumerate(s.splitlines(),1):
            for key in sorted(set(quoted.findall(line))):
                literals[key].append({"file":path,"line":num,"text":line.strip()})
            if "0x" not in line.lower(): continue
            for value in set(hexpat.findall(line)):
                v=int(value,16)&M
                if v in kh or v in field_h:
                    item={"file":path,"line":num,"literal":value,"text":line.strip()}
                    if v in field_h: columns[field_h[v]].append(item)
                    for key in kh.get(v,[]): numeric[key].append({**item,"hash_hex":f"{v:08X}",
                        "evidence":"MURMUR3_NUMERIC_CANDIDATE_NOT_DATAFLOW_PROOF"})
    # Field name candidates from actual decompiled quoted identifier corpus only.
    unresolved={int(x,16):x for x in H_NAMES if evidence["fields"][x]["native_name"] is None}
    candidates=defaultdict(list)
    for word in sorted(corpus):
        for suffix in (" u8"," s8"," bool"):
            sig=word+suffix; val=zlib.crc32(sig.encode("ascii"))&M
            if val in unresolved:
                candidates[unresolved[val]].append({"signature":sig,"status":"CRC_COLLISION_CANDIDATE_ONLY"})
    anchors=[]
    for rel,role,*need in evidence["native_sources"]:
        p=root/CROOT/(rel+".c"); s=p.read_text(encoding="utf-8")
        require(all(x in s for x in need),f"Native evidence drift {rel}")
        anchors.append({"file":p.relative_to(root).as_posix(),"role":role,
                        "sha256":hashlib.sha256(p.read_bytes()).hexdigest(),
                        "anchors":need})
    return literals,numeric,columns,candidates,anchors,len(files),len(corpus)
def walk(o):
    if isinstance(o,dict):
        for k,v in o.items():
            if k=="AccessKey" and isinstance(v,str): yield v
            yield from walk(v)
    elif isinstance(o,list):
        for v in o: yield from walk(v)
def flow_scan(root,rows):
    idx={(r["scope"],r["key"]):r for r in rows}
    refs=defaultdict(list); actions=defaultdict(list)
    unmapped=Counter(); scopes=Counter()
    paths=sorted((root/FLOW).rglob("*.json")); parsed=0
    for p in paths:
        j=read(p); g=j.get("graph") if isinstance(j,dict) else None
        if not isinstance(g,dict) or not isinstance(g.get("events"),list): continue
        parsed+=1
        for event in g["events"]:
            op=event.get("query") or event.get("action") or event.get("type")
            item={"file":p.relative_to(root).as_posix(),"event_index":event.get("index"),
                  "event_name":event.get("name"),"operation":op,
                  "params":event.get("params",{}),"cases":event.get("cases",[]),
                  "next":event.get("next"),"actor":event.get("actor")}
            for key in sorted(set(walk(event.get("params",{})))):
                ns,sep,name=key.partition(":")
                if not sep: continue
                scopes[ns]+=1
                if ns not in NS: unmapped[ns]+=1; continue
                identity=(NS[ns],name)
                if identity not in idx: unmapped[key]+=1; continue
                kind="query" if event.get("query") else ("action" if event.get("action") else "other")
                refs[identity].append({**item,"access_key":key,"operation_kind":kind,
                    "confidence":"SCOPE_MATCHED_ORIGINAL_EVENTFLOW"})
            if op in ("EventFlowActionNpcAddFriendship","EventFlowQueryNpcInviteCheck",
                      "EventFlowQueryIsCollaboNpc","EventFlowQueryNpcMoveOutState",
                      "EventFlowQueryCanInduceNpc","EventFlowQueryNpcIsMovingRoom",
                      "EventFlowActionNpcFixedInducement","EventFlowActionMoveIntoLandForSale",
                      "EventFlowQueryIsInduceFailedReasonFixUp","EventFlowQueryNpcHouseNum",
                      "EventFlowQueryIsAbandonedHouseNpc","EventFlowActionClearInduceFailRelationFlag"):
                actions[op].append(item)
    require(parsed>=800,"Expected complete EventFlow JSON mirror")
    return refs,actions,scopes,unmapped,parsed,len(paths)
def run(root,out):
    base=root/BASE
    rows=read(base/"integrated/eventflag_definitions_371.json")
    evidence=read(base/"r95/native_evidence.json")
    require(len(rows)==371,"371 source definitions required")
    require(murmur3("")==0 and murmur3("foo")==0xf6a5c420,"Murmur3 standard test")
    require(zlib.crc32(b"FlagsFlowAccess u8")&M==0xfa93f14b,"Field name CRC32 drift")
    literals,numeric,columns,candidates,anchors,n,c=refs(root,evidence,rows)
    flow,actions,scopes,unmapped,parsed,total_flow=flow_scan(root,rows)
    output=[]; usage=defaultdict(lambda:{"definitions":0,"query_nodes":0,"action_nodes":0,
         "other_nodes":0,"definitions_with_query":0,"definitions_with_action":0,"examples":[]})
    for r in rows:
        key=r["key"]; identity=(r["scope"],key)
        f=flow[identity]; l=literals[key]; h=numeric[key]
        a=r["raw_fields"]["hash_FA93F14B"]; u=usage[a]; u["definitions"]+=1
        cc=Counter(x["operation_kind"] for x in f)
        for k in ("query","action","other"): u[k+"_nodes"]+=cc[k]
        for k in ("query","action"): u["definitions_with_"+k]+=bool(cc[k])
        if f and len(u["examples"])<8: u["examples"].append({"scope":r["scope"],"key":key,"operations":dict(cc),"first_reference":f[0]})
        output.append({**r,"key_murmur3_seed0":f"{murmur3(key):08X}",
             "native_literal_references":l,"native_hash_candidates":h,"scope_matched_eventflow_references":f,
             "evidence":("NATIVE_LITERAL_AND_EVENTFLOW" if l and f else
                         "NATIVE_LITERAL_UNSCOPED" if l else "SCOPED_EVENTFLOW" if f else
                         "NUMERIC_HASH_CANDIDATE_ONLY" if h else "NO_DIRECT_MATCH"),
             "business_logic_fully_verified":False,"actual_value":None})
    require(all(r["actual_value"] is None for r in output),"Actual values cannot be fabricated")
    missing=[r for r in output if not r["native_literal_references"]]
    require(len(missing)==199,"R94 baseline literal coverage drift")
    # Keep source cases, adjacency and entrypoints in five relevant graphs; do not map case values to Boolean without proof.
    graphs={}
    for stem in ("NNPC_Reaction_Moving","NNPC_Spot_Camp_Invite","NNPC_Talk_Force",
                 "NNPC_Talk_General","Obj_RcoMachine_AmiiboCall","System_WherearenNPCMoveMode_Amiibo"):
        p=root/FLOW/(stem+".json"); j=read(p)["graph"]
        graphs[stem]={"source":p.relative_to(root).as_posix(),"sha256":hashlib.sha256(p.read_bytes()).hexdigest(),
                      "entrypoints":j.get("entrypoints"),"events":j["events"]}
    field_stats={h:dict(Counter(r["raw_fields"]["hash_"+h] for r in rows if "hash_"+h in r["raw_fields"])) for h in H_NAMES}
    report={"source_definitions":371,"native_c_files_scanned":n,"eventflow_json_files_scanned":total_flow,
            "eventflow_graphs_parsed":parsed,"quoted_identifier_corpus":c,
            "native_literal_definitions":sum(bool(r["native_literal_references"]) for r in output),
            "native_literal_references":sum(len(v) for v in literals.values()),
            "scoped_eventflow_definitions":sum(bool(r["scope_matched_eventflow_references"]) for r in output),
            "scoped_eventflow_reference_count":sum(len(v) for v in flow.values()),
            "r94_missing_literal_definitions":len(missing),
            "r94_missing_with_scoped_eventflow":sum(bool(r["scope_matched_eventflow_references"]) for r in missing),
            "r94_missing_with_numeric_hash_candidate":sum(bool(r["native_hash_candidates"]) for r in missing),
            "r94_missing_with_neither":sum(not r["scope_matched_eventflow_references"] and not r["native_hash_candidates"] for r in missing),
            "field_native_literal_counts":{h:len(columns[h]) for h in H_NAMES},
            "field_name_crc_candidate_counts":{h:len(candidates[h]) for h in H_NAMES},
            "flags_flow_access_usage":{k:{x:y for x,y in v.items() if x!="examples"} for k,v in sorted(usage.items())},
            "flow_namespaces":dict(scopes),"native_callback_permissions_verified":False,
            "fully_verified_adoption":False,"actual_values_known":False}
    write(out/"report.json",report)
    write(out/"eventflag_native_and_flow_xrefs_371.json",output)
    write(out/"unknown_hash_native_xrefs.json",{"fields":{h:{"raw_distribution":field_stats[h],
          "native_constant_references":columns[h],"name_crc_candidates":candidates[h]} for h in H_NAMES}})
    write(out/"flow_access_observed_usage.json",dict(usage))
    write(out/"native_static_evidence.json",{**evidence,"verified_source_anchors":anchors})
    write(out/"recruitment_and_friendship_eventflows.json",{"graphs":graphs,"operation_index":dict(actions)})
    write(out/"unmapped_flow_access_keys.json",dict(unmapped))
    print(json.dumps(report,ensure_ascii=False,indent=2))
if __name__=="__main__":
    p=argparse.ArgumentParser(description=__doc__)
    p.add_argument("--root",type=Path,default=Path("."))
    p.add_argument("--out",type=Path,required=True)
    a=p.parse_args(); run(a.root.resolve(),a.out.resolve())
