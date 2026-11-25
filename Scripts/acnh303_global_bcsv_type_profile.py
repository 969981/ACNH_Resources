#!/usr/bin/env python3
"""HASH-006: profile original value slices without promoting candidate types."""
import argparse, csv, json, math, sqlite3, struct
from collections import Counter
from pathlib import Path
from acnh303_global_bcsv_dictionary import read, descriptors, require, blob, width, DATA

def inspect(data, start, stride, rows, offset, span, typ):
    # Width is inferred from adjacent offsets. Candidate may use only part.
    w=width(typ)
    n=w if w is not None and w<=span else span
    counts=Counter(data[start+i*stride+offset:start+i*stride+offset+n] for i in range(rows))
    result={"rows":rows,"distinct_raw":len(counts),"slice_bytes":n,
            "all_zero":counts.get(bytes(n),0),"all_ff":counts.get(b"\xff"*n,0),
            "top_raw":[{"hex":b.hex(),"count":c} for b,c in sorted(counts.items(),key=lambda x:(-x[1],x[0]))[:8]]}
    if n in (1,2,4,8):
        for signed,label in [(False,"unsigned"),(True,"signed")]:
            vals=[int.from_bytes(b,"little",signed=signed) for b in counts]
            result[label+"_min"]=min(vals,default=None);result[label+"_max"]=max(vals,default=None)
    if n in (4,8):
        code="<f" if n==4 else "<d"
        pairs=[(struct.unpack(code,b)[0],c) for b,c in counts.items()]
        finite=[v for v,c in pairs if math.isfinite(v)]
        result.update(float_finite=sum(c for v,c in pairs if math.isfinite(v)),float_nonfinite=sum(c for v,c in pairs if not math.isfinite(v)),float_min=min(finite,default=None),float_max=max(finite,default=None))
    if typ and typ.startswith("string"):
        invalid=unterminated=nonzero_tail=0
        for b,c in counts.items():
            head,sep,tail=b.partition(b"\0")
            if not sep: unterminated+=c
            if sep and any(tail): nonzero_tail+=c
            try: head.decode("utf-8",errors="strict")
            except UnicodeDecodeError: invalid+=c
        result.update(string_invalid_utf8=invalid,string_no_nul=unterminated,string_nonzero_tail=nonzero_tail)
    return result

def choose(v):
    if v["native_type"]: return v["native_type"],"scoped_crc"
    candidates={c["type"] for c in v["candidates"] if c["type"] and c["width_compatible"] is True}
    if len(candidates)==1: return next(iter(candidates)),"historical_candidate"
    return None,"unresolved_or_conflict"

def run(root, dictionary, out):
    fields=read(dictionary/"fields.json"); tables=read(dictionary/"tables.json")
    baseline=read(dictionary/"summary.json")
    require(len(tables)==234 and len(fields)==baseline["field_occurrences"],"dictionary mismatch")
    by_table={}
    for v in fields: by_table.setdefault(v["table"],[]).append(v)
    profiles=[]; unknown=[]
    for t in tables:
        b=(root/t["path"]).read_bytes();require(blob(b)==t["git_blob"],"source blob mismatch "+t["table"])
        rows,stride,cols=descriptors(b)
        require(rows==t["rows"] and stride==t["row_size"],"table dimensions")
        require(len(cols)==len(by_table.get(t["table"],[])),"field count")
        start=28+len(cols)*8
        for col,v in zip(cols,by_table.get(t["table"],[])):
            require(all(v[k]==col[k] for k in ("ordinal","hash","offset","width_hint")),"descriptor drift")
            typ,grade=choose(v)
            w=width(typ)
            fit=None if w is None else w<=col["width_hint"]
            stats=inspect(b,start,stride,rows,col["offset"],col["width_hint"],typ)
            flag=[]
            if fit is False: flag.append("width_mismatch")
            if typ and typ.startswith("f") and stats.get("float_nonfinite",0): flag.append("nonfinite_float")
            if typ and typ.startswith("string") and stats.get("string_invalid_utf8",0): flag.append("invalid_utf8")
            if typ and typ.startswith("string") and stats.get("string_no_nul",0): flag.append("no_nul")
            rec={"table":t["table"],**col,"candidate_type":typ,"type_evidence":grade,"width_fits":fit,"flags":flag,"value_profile":stats}
            profiles.append(rec)
            if grade=="unresolved_or_conflict":
                unknown.append({"table":t["table"],**col,"rows":rows,"distinct_raw":stats["distinct_raw"],"top_raw":stats["top_raw"]})
    require(len(profiles)==len(fields),"profile count mismatch")
    out.mkdir(parents=True,exist_ok=True)
    summary={"tables":len(tables),"profiled_occurrences":len(profiles),"type_candidate_occurrences":sum(x["candidate_type"] is not None for x in profiles),"type_evidence_counts":dict(Counter(x["type_evidence"] for x in profiles)),"candidate_type_distribution":dict(Counter(x["candidate_type"] for x in profiles if x["candidate_type"])),"flag_counts":dict(Counter(flag for x in profiles for flag in x["flags"])),"unknown_type_distinct_hashes":len({x["hash"] for x in unknown}),"runtime_verified":0}
    for name,obj in [("type_profiles",profiles),("type_summary",summary),("unresolved_types",unknown)]:
        (out/(name+".json")).write_text(json.dumps(obj,ensure_ascii=False,indent=2,allow_nan=False)+"\n",encoding="utf-8")
    with (out/"type_profiles.csv").open("w",encoding="utf-8",newline="") as f:
        w=csv.writer(f);w.writerow(["table","ordinal","hash","offset","width_hint","candidate_type","type_evidence","flags","distinct_raw","rows"])
        for x in profiles:w.writerow([x[k] for k in ("table","ordinal","hash","offset","width_hint","candidate_type","type_evidence")]+[";".join(x["flags"]),x["value_profile"]["distinct_raw"],x["value_profile"]["rows"]])
    with sqlite3.connect(dictionary/"dictionary.sqlite3") as db:
        db.execute("DROP TABLE IF EXISTS field_type_profile")
        db.execute("CREATE TABLE field_type_profile(table_name TEXT, ordinal INTEGER, candidate_type TEXT, type_evidence TEXT NOT NULL, profile_json TEXT NOT NULL, PRIMARY KEY(table_name,ordinal), FOREIGN KEY(table_name,ordinal) REFERENCES field(table_name,ordinal))")
        db.executemany("INSERT INTO field_type_profile VALUES(?,?,?,?,?)",[(x["table"],x["ordinal"],x["candidate_type"],x["type_evidence"],json.dumps(x,ensure_ascii=False,allow_nan=False)) for x in profiles])
        require(db.execute("SELECT count(*) FROM field JOIN field_type_profile USING(table_name,ordinal)").fetchone()[0]==len(fields),"profile join mismatch")
        require(db.execute("PRAGMA integrity_check").fetchone()[0]=="ok","SQLite integrity")
    print(json.dumps(summary,ensure_ascii=False,indent=2))
    return summary

if __name__=="__main__":
    p=argparse.ArgumentParser();p.add_argument("--root",type=Path,default=Path("."));p.add_argument("--dictionary",type=Path,required=True);p.add_argument("--out",type=Path,required=True)
    a=p.parse_args();run(a.root.resolve(),a.dictionary.resolve(),a.out.resolve())
