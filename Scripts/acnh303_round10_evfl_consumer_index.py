#!/usr/bin/env python3
"""ACNH 3.0.3 BFEVFL static event consumer index from real native bytes.

Graph nodes/action/query/entrypoints and subflow references are grounded in
native evfl parser. Runtime gameplay producers and execution branches remain
UNVERIFIED, no invented pseudocode or control-flow semantics.
"""
from __future__ import annotations
import argparse,collections,hashlib,json
from pathlib import Path
from acnh303_asset_batch import parse_evfl

NCA="e10617820db06889e1638499478da0de_NCA"
MAX_SOURCE=16*1024*1024
def digest(data):return hashlib.sha256(data).hexdigest()
def write(path,obj):
    path.parent.mkdir(parents=True,exist_ok=True)
    path.write_text(json.dumps(obj,ensure_ascii=False,indent=2,sort_keys=True)+"\n",encoding="utf-8")

def summarize(graph):
    nodes=graph["events"]
    n=len(nodes)
    edges=[set() for _ in nodes]
    kinds=collections.Counter()
    actions=collections.Counter()
    queries=collections.Counter()
    subflows=collections.Counter()
    for i,node in enumerate(nodes):
        kind=node["type"]
        kinds[kind]+=1
        if kind=="ActionEvent":
            actions[(node.get("actor",""),node.get("action",""))]+=1
        if kind=="SwitchEvent":
            queries[(node.get("actor",""),node.get("query",""))]+=1
        if kind=="SubFlowEvent":
            subflows[(node.get("flowchart",""),node.get("entrypoint",""))]+=1
        candidates=[]
        candidates.extend([node.get("next"),node.get("join")])
        candidates.extend(node.get("forks",[]))
        candidates.extend(case.get("target") for case in node.get("cases",[]))
        for target in candidates:
            if target is None:continue
            if not isinstance(target,int) or not 0<=target<n:
                raise ValueError("BFEVFL graph has invalid edge target")
            edges[i].add(target)
    starts=[p.get("main_event") for p in graph["entrypoints"]]
    seen=set();queue=[i for i in starts if i is not None]
    if any(not isinstance(i,int) or i<0 or i>=n for i in queue):
        raise ValueError("entrypoint outside parsed events")
    while queue:
        node=queue.pop()
        if node in seen:continue
        seen.add(node)
        queue.extend(edges[node]-seen)
    indegrees=[0]*n
    for adjacency in edges:
        for j in adjacency:indegrees[j]+=1
    indegree=indegrees[:]
    ready=collections.deque(i for i,deg in enumerate(indegree) if deg==0)
    processed=0
    while ready:
        i=ready.popleft();processed+=1
        for j in edges[i]:
            indegree[j]-=1
            if indegree[j]==0:ready.append(j)
    # Kahn remainder can include downstream nodes; report only a candidate graph cycle indicator.
    return {"event_count":n,"entrypoints":graph["entrypoints"],
            "types":dict(kinds),"actors":len(graph["actors"]),
            "edge_count":sum(len(e) for e in edges),
            "reachable_event_count":len(seen),
            "unreachable_from_local_entrypoint_indices":sorted(set(range(n))-seen)[:100],
            "unreachable_indices_truncated":len(set(range(n))-seen)>100,
            "top_actions":[{"actor":a,"action":b,"nodes":v} for (a,b),v in actions.most_common(100)],
            "top_queries":[{"actor":a,"query":b,"nodes":v} for (a,b),v in queries.most_common(100)],
            "subflow_call_references":[{"flowchart":a,"entrypoint":b,"nodes":v} for (a,b),v in subflows.most_common(100)],
            "has_directed_cycle_candidate":processed<n,
            "unknowns":"This is a static flowchart. Runtime action implementations, event sources, script conditions and actual execution order are NOT proven."}

def main():
    p=argparse.ArgumentParser()
    p.add_argument("--selection",type=Path,default=Path("selection.json"))
    p.add_argument("--out",type=Path,default=Path("derived/3.0.3/evfl_native_round10"))
    a=p.parse_args()
    sel=json.loads(a.selection.read_text("utf-8"))
    if sel.get("category")!="EventFlow" or sel.get("suffix","").lower()!=".bfevfl":
        raise ValueError("only selected native EventFlow/*.bfevfl")
    if len(set(sel["paths"]))!=len(sel["paths"]) or sel["selected_files"]!=len(sel["paths"]):
        raise ValueError("eventflow selection is invalid")
    totals=collections.Counter()
    entries=[]
    for original in sel["paths"]:
        if not original.startswith(NCA+"/1/EventFlow/") or not original.lower().endswith(".bfevfl") or ".." in Path(original).parts:
            raise ValueError("invalid original EventFlow location")
        path=Path(original)
        rel=original[len(NCA+"/1/"):]
        blob=path.read_bytes()
        entry={"source_path":rel,"source_sha256":digest(blob),"source_bytes":len(blob),"status":"failed"}
        try:
            if len(blob)>MAX_SOURCE:raise ValueError("BFEVFL exceeds source limit")
            graph=parse_evfl(blob)
            structural=summarize(graph)
            output=a.out/"graphs"/(path.stem+".eventflow.json")
            write(output,graph)
            entry.update({"status":"static_graph_decoded","flowchart_name":graph["flowchart_name"],
                          "event_count":structural["event_count"],
                          "graph_output_path":output.as_posix(),
                          "graph_output_sha256":digest(output.read_bytes()),
                          "graph":structural})
            totals["static_graph_decoded"]+=1
            totals["events"]+=structural["event_count"]
            totals["edges"]+=structural["edge_count"]
        except (OSError,ValueError,TypeError,KeyError,IndexError) as exc:
            entry["error"]=str(exc)
            totals["failed"]+=1
        entries.append(entry)
        print("EVFL",rel,entry["status"],entry.get("event_count",0),flush=True)
    report={"schema":"acnh303-r10-real-bfevfl-native-static-calls-v1","source_count":len(entries),
            "counts":dict(totals),"records":entries,
            "limits":"Static BFEVFL graph and symbol references only: no execution, native actor consumer, event trigger or gameplay evidence."}
    write(a.out/"report.json",report)
    print("EVFL_TOTAL",json.dumps(report["counts"]),flush=True)
    if totals["failed"]:raise SystemExit(1)

if __name__=="__main__":main()
