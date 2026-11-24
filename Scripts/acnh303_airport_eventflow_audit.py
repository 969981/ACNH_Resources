#!/usr/bin/env python3
"""Read-only BFEVFL v3 airport graph audit against original files and R35 MSBT.
Format reference: https://zeldamods.org/wiki/Bfevfl
No live game calls, no scripts rewritten. Terminal edge != runtime completion.
"""
from __future__ import annotations
import argparse, collections, hashlib, json, sqlite3, struct
from pathlib import Path

ROM=Path("e10617820db06889e1638499478da0de_NCA/1/EventFlow")
DECODED=Path("UnPack/1/EventFlow")
NAMES=("SNPC_dod_AirPort",)+tuple("SNPC_dod_"+x for x in (
    "01_Airport_NormalSeq","02_Airport_GateCheck","10_Airport_LocalHost",
    "11_Airport_LocalVisitor","20_Airport_InetHost","21_Airport_InetVisitor",
    "22_Airport_InstallFriendList","30_Airport_DepartVisitor","40_Airport_Wherearen"))
DB_SHA="2f305599420421bec30ec44736e6dd4c4de472eca48852f8702725b55c0f754a"
def check(ok,msg):
    if not ok:raise ValueError(msg)
def digest(b):return hashlib.sha256(b).hexdigest()
def parse(b):
    def raw(p,n):
        check(0<=p<=len(b)-n,"binary bounds")
        return b[p:p+n]
    def num(p,n):return int.from_bytes(raw(p,n),"little")
    def u16(p):return num(p,2)
    def u32(p):return num(p,4)
    def ptr(p):return num(p,8)
    def text(p):
        return raw(p+2,u16(p)).decode("utf-8") if p else ""
    def sr(p):return text(ptr(p))
    def dic(p):
        check(raw(p,4)==b"DIC ","dictionary magic")
        n=u32(p+4)
        check(n<=65535 and p+24+16*n<=len(b),"dictionary bounds")
        return [sr(p+32+16*i) for i in range(n)]
    def params(p):
        if p==0:return {}
        check(raw(p,1)==b"\x01","container type")
        names=dic(ptr(p+8))
        check(len(names)==u16(p+2) and len(set(names))==len(names),"container names")
        result={}
        for i,k in enumerate(names):
            a=ptr(p+16+8*i);t=num(a,1);n=u16(a+2);q=a+16
            def integer(x):return int.from_bytes(raw(x,4),"little",signed=True)
            def floating(x):return struct.unpack("<f",raw(x,4))[0]
            if t==0:value={"argument":sr(q)}
            elif t==2:value=integer(q)
            elif t==3:value=bool(integer(q))
            elif t==4:value=floating(q)
            elif t==5:value=sr(q)
            elif t==12:value={"actor":sr(q),"sub":sr(q+8)}
            elif t in (7,8,9,10):
                check(n<=65535,"array count")
                fn={7:integer,8:lambda x:bool(integer(x)),9:floating,10:sr}[t]
                value=[fn(q+j*(8 if t==10 else 4)) for j in range(n)]
            else:raise ValueError("unsupported parameter type "+str(t))
            result[k]=value
        return result
    check(raw(0,8)==b"BFEVFL\0\0" and u16(8)==0x300 and u16(12)==0xfeff,"BFEVFL v3 LE required")
    check(u32(28)==len(b) and u16(32)==1 and u16(34)==0,"file size or flowchart count")
    f=ptr(ptr(40));check(raw(f,4)==b"EVFL","flowchart magic")
    ac,act,qc,ec,nc=[u16(f+i) for i in (16,18,20,22,24)]
    ap,ep,dp,ip=[ptr(f+i) for i in (40,48,56,64)]
    actors=[]
    for i in range(ac):
        p=ap+56*i;name,sub=sr(p),sr(p+8)
        actors.append(dict(identifier=name+("["+sub+"]" if sub else ""),argument_name=sr(p+16),
            actions=[sr(ptr(p+24)+8*j) for j in range(u16(p+48))],
            queries=[sr(ptr(p+32)+8*j) for j in range(u16(p+50))]))
    check(sum(len(a["actions"]) for a in actors)==act and sum(len(a["queries"]) for a in actors)==qc,"actor operation counts")
    def target(i,nullable=True):
        check((nullable and i==65535) or 0<=i<ec,"event index bounds")
        return None if i==65535 else i
    events=[]
    for i in range(ec):
        p=ep+40*i;t=num(p+8,1);x,y,z=[u16(p+j) for j in (10,12,14)]
        e=dict(index=i,name=sr(p),offset=p,type=("ActionEvent","SwitchEvent","ForkEvent","JoinEvent","SubFlowEvent")[t] if t<5 else "unsupported")
        if t in (0,1):
            check(y<ac,"actor index")
            a=actors[y];kind="actions" if t==0 else "queries"
            check(z<len(a[kind]),"operation index")
            e.update(actor=a["identifier"],params=params(ptr(p+16)))
            if t==0:e.update(action=a[kind][z],next=target(x))
            else:
                e.update(query=a[kind][z],cases=[dict(value=u32(ptr(p+24)+8*j),target=target(u16(ptr(p+24)+8*j+4),False)) for j in range(x)])
                check(len({q["value"] for q in e["cases"]})==x,"duplicate switch case")
        elif t==2:e.update(join=target(y,False),forks=[target(u16(ptr(p+16)+2*j),False) for j in range(x)])
        elif t==3:e.update(next=target(x))
        elif t==4:e.update(next=target(x),params=params(ptr(p+16)),flowchart=sr(p+24),entrypoint=sr(p+32))
        else:raise ValueError("unsupported event type "+str(t))
        events.append(e)
    names=dic(dp);check(len(names)==nc,"entrypoint count")
    entries=[dict(name=n,main_event=target(u16(ip+32*i+28))) for i,n in enumerate(names)]
    return dict(flowchart_name=sr(f+32),actors=actors,events=events,entrypoints=entries)
def normal(v):
    if isinstance(v,dict):
        return {k:normal(x) for k,x in v.items()}
    if isinstance(v,list):return [normal(x) for x in v]
    return v
def verify_existing(g,old):
    check(g["flowchart_name"]==old["flowchart_name"],"flowchart name differs")
    check(len(g["actors"])==len(old["actors"]) and len(g["events"])==len(old["events"]),"decoded counts")
    for a,b in zip(g["actors"],old["actors"]):
        check(all(a[k]==b[k] for k in a),"decoded actor differs")
    check(g["entrypoints"]==[{k:e[k] for k in ("name","main_event")} for e in old["entrypoints"]],"decoded entrypoint differs")
    # Compare all graph edges, names, actor/operation and scalar message parameters.
    # Rich non-scalar parameter representations can differ between decoders;
    # retain them and report differences, do not claim complete parameter identity.
    checked=0;differences=[]
    for a,b in zip(g["events"],old["events"]):
        for k,v in a.items():
            if k in ("offset","params"):continue
            check(v==b.get(k),f"decoded edge/operation differs {a['index']} {k}")
        for k,v in a.get("params",{}).items():
            if isinstance(v,(str,int,bool,float)):
                if v==b.get("params",{}).get(k):checked+=1
                else:differences.append({"index":a["index"],"param":k,"native":v,"decoded":b.get("params",{}).get(k)})
    return {"scalar_params_exact":checked,"scalar_param_differences":differences}
def run(root,dbpath,out):
    out.mkdir(parents=True,exist_ok=True)
    with dbpath.open("rb") as stream:
        sha=hashlib.file_digest(stream,"sha256").hexdigest()
    check(sha==DB_SHA,"R35 database SHA mismatch")
    db=sqlite3.connect(dbpath.resolve().as_uri()+"?mode=ro",uri=True)
    check(db.execute("PRAGMA quick_check").fetchone()[0]=="ok","R35 database integrity")
    graphs={};refcount=collections.Counter();report={"runtime_verified":False,"production_eligible":False,"r35_sqlite_sha256":sha,"flows":[]}
    for name in NAMES:
        raw=(root/ROM/(name+".bfevfl")).read_bytes()
        old=json.loads((root/DECODED/(name+".json")).read_text("utf-8"))
        check(digest(raw)==old["sha256"] and len(raw)==old["size"],"source SHA or size mismatch "+name)
        g=parse(raw);check(g["flowchart_name"]==name,"flowchart identity")
        comparison=verify_existing(g,old["graph"]);graphs[name]=g
        c=collections.Counter();direct=[];exits=[]
        for e in g["events"]:
            c[e["type"]]+=1
            if e.get("next",1) is None:c["null_next"]+=1
            if e.get("action")=="EventFlowActionOpenMessageWindow":
                c["open"]+=1;p=e["params"];mid=p.get("MessageID")
                check(isinstance(mid,str),"nonliteral MessageID")
                refcount[mid]+=1;close=p.get("IsCloseMessageWindow")
                check(isinstance(close,bool),"close flag type")
                c["close_true" if close else "close_false"]+=1
                if e["next"] is None:c["terminal_close_true" if close else "terminal_close_false"]+=1
                else:
                    q=g["events"][e["next"]]
                    if q.get("query","").startswith("EventFlowQueryGeneralTalkChoice"):
                        direct.append({"open_index":e["index"],"query_index":q["index"],"message_id":mid,"query":q["query"],"cases":q["cases"]})
            if e.get("query","").startswith("EventFlowQueryGeneralTalkChoice"):c["choice"]+=1
            if e.get("action")=="EventFlowActionExitFlowchart":exits.append(e)
        report["flows"].append({"name":name,"sha256":digest(raw),"size":len(raw),"events":len(g["events"]),"entrypoints":len(g["entrypoints"]),"counts":dict(c),"decoded_comparison":comparison,"direct_open_choice_edges":direct,"explicit_exit_nodes":exits})
    calls=[];missing=[]
    for name,g in graphs.items():
        for e in g["events"]:
            if e["type"]!="SubFlowEvent":continue
            t=e["flowchart"] or name
            target=graphs.get(t)
            hit=target is not None and any(x["name"]==e["entrypoint"] for x in target["entrypoints"])
            calls.append({"source":name,"index":e["index"],"target":t,"entrypoint":e["entrypoint"],"in_scope":target is not None,"entrypoint_verified":hit})
            if target is not None and not hit:missing.append(calls[-1])
    report["subflow_calls"]=calls;report["missing_in_scope_entries"]=missing
    rows=[]
    for mid,count in sorted(refcount.items()):
        r,label=mid.rsplit(":",1);cat,member=r.split("/",1);member+=".msbt"
        hits=db.execute("""SELECT a.locale,hex(m.attr),m.choice_mode,l.idx FROM archives a JOIN files f ON f.archive_id=a.id JOIN labels l ON l.file_id=f.id JOIN messages m ON m.file_id=l.file_id AND m.idx=l.idx WHERE a.category=? AND f.name=? AND l.label=? ORDER BY a.locale""",(cat,member,label)).fetchall()
        scope=cat in ("TalkNNpc","TalkSNpc")
        rows.append({"message_id":mid,"category":cat,"member":member,"label":label,"action_references":count,"in_r35_scope":scope,"locale_hits":[{"locale":a,"attribute_hex":b,"mode":c,"index":d} for a,b,c,d in hits],"attribute_identical":len({(b,c) for _,b,c,_ in hits})==1 if hits else None})
    db.close()
    report["message_refs"]=rows
    report["totals"]={"flows":len(graphs),"events":sum(x["events"] for x in report["flows"]),"entrypoints":sum(x["entrypoints"] for x in report["flows"]),"unique_message_ids":len(rows),"open_actions":sum(refcount.values()),"r35_unique_ids":sum(x["in_r35_scope"] for x in rows),"r35_locale_matches":sum(len(x["locale_hits"]) for x in rows),"out_of_scope_unique_ids":sum(not x["in_r35_scope"] for x in rows),"in_scope_subflow_calls":sum(x["in_scope"] for x in calls),"external_subflow_calls":sum(not x["in_scope"] for x in calls)}
    (out/"airport_eventflow_graphs.json").write_text(json.dumps(graphs,ensure_ascii=False,indent=2)+"\n","utf-8")
    (out/"summary.json").write_text(json.dumps(report,ensure_ascii=False,indent=2)+"\n","utf-8")
    print(json.dumps(report["totals"],indent=2))
    check(not missing,"unresolved in-scope subflow")
    check(all(len(x["locale_hits"])==14 and x["attribute_identical"] for x in rows if x["in_r35_scope"]),"R35 label coverage")
    check(all(not x["decoded_comparison"]["scalar_param_differences"] for x in report["flows"]),"scalar params mismatch")
if __name__=="__main__":
    p=argparse.ArgumentParser();p.add_argument("--root",type=Path,default=Path("."));p.add_argument("--msbt-db",type=Path,required=True);p.add_argument("--out",type=Path,default=Path("artifacts/acnh303-airport-eventflow"));a=p.parse_args();run(a.root,a.msbt_db,a.out)
