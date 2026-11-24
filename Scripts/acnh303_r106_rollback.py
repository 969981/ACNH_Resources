#!/usr/bin/env python3
"""R106: verify actual R105 artifact, compute CFG dominance, reproduce name recovery."""
import argparse,csv,hashlib,itertools,json,zipfile,zlib
from collections import defaultdict,deque
from pathlib import Path
BASE=Path("derived/3.0.3/npc_event_flags/r106_rollback")
def reachable(entry,edges,skip=None):
    graph=defaultdict(list)
    for a,b in edges:graph[a].append(b)
    seen=set();todo=deque([entry])
    while todo:
        a=todo.popleft()
        if a==skip or a in seen:continue
        seen.add(a);todo.extend(graph[a])
    return seen
def verify(root,artifact,out,search):
    e=json.loads((root/BASE/"evidence.json").read_text(encoding="utf-8"))
    assert hashlib.sha256(artifact.read_bytes()).hexdigest()==e["prior_artifact"]["sha256"]
    with zipfile.ZipFile(artifact) as z:
        g=json.loads(z.read("growup_registration.json"))
        assert g["queue_label"]=="GrowUp"
        c=json.loads(z.read("relocation_contexts.json"))
        header={x["slot"]:x for x in c["04955BF8"]}
        assert [header[x]["raw"] for x in ["04955BE8","04955BF0"]]==["0000000000000000"]*2
        m={x["va"]:x for x in json.loads(z.read("migration_reference_window.json"))}
        assert m["007BAF68"]["op"]=="ldr" and m["007BAF68"]["args"]=="x8, [x8, #0x8d8]"
        assert m["007BAF6C"]["op"]=="stp" and m["007BAF6C"]["args"]=="x9, x8, [x21]"
        assert m["007BAF78"]["op"]=="str" and m["007BAF78"]["args"]=="x21, [x8]"
        report={}
        for name in ("batch","stage"):
            doc=json.loads(z.read(("batch_reset" if name=="batch" else name)+"_cfg.json"))
            expected=e["cfg"][name]
            assert len(doc["instructions"])==expected["instruction_count"]
            assert len(doc["calls"])==expected["direct_calls"]
            assert len(set(x["target"] for x in doc["calls"]))==expected["unique_targets"]
            assert len(doc["indirect_sites"])==expected["indirect_sites"]
            assert doc["returns"]==expected["returns"] and doc["external_targets"]==[]
            assert {x["va"] for x in doc["instructions"]}==reachable(doc["entry"],doc["edges"])
            sites=["00822E10","00822F54"] if name=="batch" else expected["scene_stage_calls"]
            dominators={s:not any(r in reachable(doc["entry"],doc["edges"],s) for r in doc["returns"]) for s in sites}
            assert dominators==({"00822E10":True,"00822F54":False} if name=="batch" else {s:False for s in sites})
            report[name]={"instructions":len(doc["instructions"]),"normal_return_dominance":dominators}
    for a in e["anchors"]:
        p=root/a["path"];b=p.read_bytes()
        assert hashlib.sha1(("blob %d"%len(b)).encode()+b"\0"+b).hexdigest()==a["blob"]
        ls=p.read_text(encoding="utf-8").splitlines()
        assert all(ls[x["line"]-1].strip()==x["text"] for x in a["lines"])
    assert zlib.crc32(b"AttrClearRollback u8")==0x3dad9135
    d=json.loads((root/"derived/3.0.3/npc_event_flags/semantics/field_semantics.json").read_text(encoding="utf-8"))
    assert d["additional_table_fields"]["hash_3DAD9135"]["reconstructed_name"]=="AttrClearRollback"
    assert d["additional_table_fields"]["hash_3DAD9135"]["native_name"] is None
    if search:
        matches=[];count=0
        for n in range(1,4):
            for t in itertools.product(e["search"]["words"],repeat=n):
                s="".join(t)
                for p in e["search"]["prefixes"]:
                    sig=p+s+" u8";count+=1
                    if zlib.crc32(sig.encode("ascii")) in (0x5140e4b4,0x3dad9135):matches.append(sig)
        assert count==3936220 and matches==["AttrClearRollback u8"]
        report["search"]={"checks":count,"matches":matches}
    report["runtime_verified"]=False
    out.parent.mkdir(parents=True,exist_ok=True);out.write_text(json.dumps(report,indent=2)+"\n")
    print(json.dumps(report,indent=2))
if __name__=="__main__":
    p=argparse.ArgumentParser(description=__doc__);p.add_argument("--root",type=Path,default=Path("."));p.add_argument("--artifact",type=Path,required=True);p.add_argument("--out",type=Path,required=True);p.add_argument("--search",action="store_true");a=p.parse_args();verify(a.root,a.artifact,a.out,a.search)
