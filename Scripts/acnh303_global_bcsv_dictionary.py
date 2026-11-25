#!/usr/bin/env python3
"""HASH-001..005: authenticated original BCSV descriptors and scoped CRC candidates."""
import argparse, csv, hashlib, json, re, sqlite3, struct, zlib
from collections import defaultdict, Counter
from pathlib import Path

DATA = Path("derived/3.0.3/global_bcsv_dictionary")
BCSV = Path("e10617820db06889e1638499478da0de_NCA/1/Bcsv")
DB = Path("assets/evidence/rom-database")
EVENT = Path("derived/3.0.3/npc_event_flags/semantics/field_semantics.json")

def require(ok, msg):
    if not ok: raise ValueError(msg)

def read(p):
    return json.loads(p.read_text(encoding="utf-8"))

def blob(b):
    return hashlib.sha1(b"blob "+str(len(b)).encode()+b"\0"+b).hexdigest()

def crc(s):
    return f"{zlib.crc32(s.encode('ascii')):08X}"

def key(h):
    return h.removeprefix("hash_").removeprefix("0x").upper()

def descriptors(b):
    require(len(b)>=28 and b[12:16]==b"VSCB","invalid BCSV magic")
    rows,size,count=struct.unpack_from("<IIH",b)
    start=28+count*8
    require(4<=size<=1<<20 and count<=4096 and start+rows*size<=len(b),"invalid dimensions")
    entries=[struct.unpack_from("<II",b,28+i*8) for i in range(count)]
    require(all(4<=o<size for h,o in entries),"invalid field offset")
    offsets=sorted({o for h,o in entries}|{size})
    widths={a:b-a for a,b in zip(offsets,offsets[1:])}
    return rows,size,[{"ordinal":i,"hash":f"{h:08X}","offset":o,"width_hint":widths[o]} for i,(h,o) in enumerate(entries)]

def split_signature(sig):
    if sig.endswith(".hshCstringRef"): return tuple(sig.rsplit(".",1))
    name, sep, typ = sig.partition(" ")
    return name, typ if sep else None

def width(typ):
    if typ=="hshCstringRef": return 4
    m=re.fullmatch(r"[usf](8|16|32|64)",typ or "")
    if m: return int(m[1])//8
    m=re.fullmatch(r"string(\d+)",typ or "")
    if m: return int(m[1])
    return None

def run(root,out):
    source=read(root/DATA/"original_manifest.json")
    inventory=source["files"]
    require(len(inventory)==234 and len({x["path"] for x in inventory})==234,"original inventory changed")
    require({x["path"] for x in inventory}=={p.relative_to(root).as_posix() for p in (root/BCSV).glob("*.bcsv")},"source paths differ")
    tables=[]; fields=[]; index=defaultdict(list)
    for f in inventory:
        p=root/f["path"]; b=p.read_bytes()
        require(len(b)==f["bytes"] and blob(b)==f["blob"],"original blob mismatch "+str(p))
        rows,size,cols=descriptors(b)
        meta=read(root/"UnPack/1/Bcsv"/(p.stem+".json"))
        require((rows,size,len(cols))==(meta["row_count"],meta["row_size"],meta["column_count"]),"metadata dimensions "+p.stem)
        require([(c["hash"],c["offset"],c["width_hint"]) for c in cols]==[(key(c["crc32"]),c["offset"],c["width_hint"]) for c in meta["columns"]],"metadata descriptors "+p.stem)
        tables.append({"table":p.stem,"path":f["path"],"git_blob":f["blob"],"sha256":hashlib.sha256(b).hexdigest(),"rows":rows,"row_size":size,"field_count":len(cols)})
        for col in cols:
            v={"table":p.stem,**col,"evidence":[],"candidates":[]}
            fields.append(v);index[col["hash"]].append(v)
    hist=defaultdict(dict); hist_count=Counter()
    def candidate(sig,h,src,record):
        h=key(h)
        require(crc(sig)==h,"historical CRC mismatch "+sig)
        hist_count[src]+=1
        name,typ=split_signature(sig)
        entry=hist[h].setdefault(sig,{"signature":sig,"name":name,"type":typ,"sources":[]})
        entry["sources"].append({"source":src,"record":record})
    corpus=read(root/DATA/"r100_corpus.json")
    for x in corpus["verified_signatures"]:
        candidate(x["name"]+" "+x["type"],x["hash"],"R100 historical corpus",x)
    supplement=read(root/DATA/"r100_historical_supplement.json")
    for x in supplement["preset"]["signatures"]:
        candidate(x["signature"],x["hash"],"R100 CylindricalEarth preset",x)
    def evidence(table,h,source,*,name=None,typ=None,alias=None,grade="scoped_semantic",details=None):
        matches=[v for v in index[key(h)] if v["table"]==table]
        require(bool(matches),"missing scoped evidence "+table+" "+h)
        if name and typ: require(crc(name+" "+typ)==key(h),"scoped CRC mismatch "+name)
        for v in matches:
            w=width(typ)
            require(w is None or w<=v["width_hint"],"scoped width mismatch "+table+" "+h)
            v["evidence"].append({"source":source,"name":name,"type":typ,"semantic_alias":alias,"grade":grade,"details":details})
    with (root/DB/"r82-npc-bcsv-field-dictionary.csv").open(newline="",encoding="utf-8-sig") as f:
        for x in csv.DictReader(f):
            if x["field_name_verified"]:
                evidence({"normal":"NmlNpcParam","special":"SpNpcParam"}[x["npc_type"]],x["original_field_hash"],"R82",name=x["field_name_verified"],typ=x["field_type_verified"],grade="scoped_crc")
    r84=DB/"r84/r84-field-hash-dictionary.csv"
    with (root/r84).open(newline="",encoding="utf-8-sig") as f:
        for x in csv.DictReader(f):
            if x["verified_semantics"]!="unknown_keep_raw":
                evidence("ItemParam",x["field_hash"],"R84",alias=x["verified_semantics"],details=x)
    r74=read(root/DB/"r74-original-item-npc-stack-schema.json")["ItemKind"]
    for name,h in r74["hash_field_mapping"].items():
        evidence("ItemKind",h,"R74",name=name,typ="u8",grade="scoped_crc")
    for h,n,t in [(r74["stack_hash"],"MultiHoldMaxNum","s16"),(r74["kind_label_hash"],"Label","string32"),("54706054","UniqueID","u16")]:
        evidence("ItemKind",h,"R74/R77",name=n,typ=t,grade="scoped_crc")
    evidence("ItemParam","54706054","R84/R82",name="UniqueID",typ="u16",grade="scoped_crc")
    evidence("ItemParam","FC275E86","R77",alias="original_item_kind")
    evidence("NmlNpcParam","04F52F6A","R91",alias="looks_enum")
    for h,table,alias in [("48EF0398","ItemParam","model_base_name"),("CB5EB33F","ItemParam","remake_id_reference"),("B0304B0D","ItemRemake","remake_slot_count"),("0CB402A3","ItemRemake","remake_slot_count")]:
        evidence(table,h,"PR122 static C (unmerged)",alias=alias,grade="unmerged_static_candidate")
    events=["EventFlagsNpcSaveParam","EventFlagsNpcMemoryParam","EventFlagsNpcTempParam","EventFlagsPlayerActivityParam"]
    for file,src,grade in [(root/EVENT,"R94","scoped_crc"),(root/DATA/"r101_field_semantics.json","R101 unmerged","unmerged_reconstruction")]:
        d=read(file)
        for h,x in d["known"].items():
            if src!="R94": continue
            for table in events:
                if any(v["table"]==table for v in index[key(h)]):
                    evidence(table,h,src,name=x["native_name"],typ=x["native_type"],grade=grade,details=x)
        for h,x in d["unknown"].items():
            if src!="R94" and not x.get("reconstructed_name") and key(h)!="5140E4B4": continue
            for table in events:
                if any(v["table"]==table for v in index[key(h)]):
                    evidence(table,h,src,name=x.get("reconstructed_name"),typ=x.get("native_type"),alias=x.get("semantic_alias"),grade="unmerged_reconstruction" if src!="R94" else "scoped_semantic",details=x)
    for v in fields:
        v["candidates"]=[{**c,"width_compatible":None if width(c["type"]) is None else width(c["type"])<=v["width_hint"]} for c in sorted(hist[v["hash"]].values(),key=lambda x:x["signature"])]
        scoped={(e["name"],e["type"]) for e in v["evidence"] if e["grade"]=="scoped_crc"}
        v["native_name"],v["native_type"]=next(iter(scoped)) if len(scoped)==1 else (None,None)
        v["status"]="scoped_crc" if len(scoped)==1 else "scoped_conflict" if scoped else "historical_candidate" if any(c["width_compatible"] is not False for c in v["candidates"]) else "semantic_only" if v["evidence"] else "unresolved"
        v["runtime_verified"]=None
    by_hash=[{"hash":h,"occurrences":[{k:v[k] for k in ("table","ordinal","offset","width_hint","status")} for v in vs],"historical_signatures":sorted(hist[h])} for h,vs in sorted(index.items())]
    stats={"tables":len(tables),"rows":sum(t["rows"] for t in tables),"field_occurrences":len(fields),"distinct_hashes":len(index),"cross_table_hashes":sum(len({v["table"] for v in vs})>1 for vs in index.values()),"historical_input_signatures":dict(hist_count),"historical_distinct_signatures":sum(len(x) for x in hist.values()),"historical_matched_hashes":sum(bool(hist[h]) for h in index),"occurrence_status":dict(Counter(v["status"] for v in fields)),"crc_candidate_collision_hashes":sum(len(hist[h])>1 for h in index),"scoped_crc_occurrences":sum(v["status"]=="scoped_crc" for v in fields),"width_mismatch_candidates":sum(c["width_compatible"] is False for v in fields for c in v["candidates"]),"runtime_verified":0}
    require(sum(stats["occurrence_status"].values())==len(fields),"status count mismatch")
    out.mkdir(parents=True,exist_ok=True)
    for name, obj in [("tables",tables),("fields",fields),("hash_index",by_hash),("summary",stats),("historical_signature_index",hist)]:
        (out/(name+".json")).write_text(json.dumps(obj,ensure_ascii=False,indent=2,sort_keys=True)+"\n",encoding="utf-8")
    columns=["table","ordinal","hash","offset","width_hint","native_name","native_type","status","runtime_verified"]
    with (out/"fields.csv").open("w",newline="",encoding="utf-8") as f:
        w=csv.DictWriter(f,fieldnames=columns,extrasaction="ignore");w.writeheader();w.writerows(fields)
    with sqlite3.connect(out/"dictionary.sqlite3") as db:
        db.executescript("DROP TABLE IF EXISTS field; CREATE TABLE field(table_name TEXT, ordinal INTEGER, hash TEXT, offset INTEGER, width_hint INTEGER, native_name TEXT, native_type TEXT, status TEXT, evidence_json TEXT, candidate_json TEXT, PRIMARY KEY(table_name,ordinal)); CREATE INDEX idx_field_hash ON field(hash);")
        db.executemany("INSERT INTO field VALUES(?,?,?,?,?,?,?,?,?,?)",[(v["table"],v["ordinal"],v["hash"],v["offset"],v["width_hint"],v["native_name"],v["native_type"],v["status"],json.dumps(v["evidence"],ensure_ascii=False),json.dumps(v["candidates"],ensure_ascii=False)) for v in fields])
        require(db.execute("SELECT count(*) FROM field").fetchone()[0]==len(fields),"SQLite count mismatch")
        require(db.execute("PRAGMA integrity_check").fetchone()[0]=="ok","SQLite integrity")
    print(json.dumps(stats,ensure_ascii=False,indent=2))
    return stats

if __name__=="__main__":
    p=argparse.ArgumentParser();p.add_argument("--root",type=Path,default=Path("."));p.add_argument("--out",type=Path,required=True)
    a=p.parse_args();run(a.root.resolve(),a.out.resolve())
