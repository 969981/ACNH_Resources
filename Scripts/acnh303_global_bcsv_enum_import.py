#!/usr/bin/env python3
"""HASH-009A: authenticated external enum/bitfield dictionary and original byte cross-check."""
import argparse, collections, concurrent.futures, hashlib, json, re, sqlite3, struct, urllib.request, urllib.parse, zlib
from pathlib import Path
from acnh303_global_bcsv_dictionary import DATA,read,blob,require,descriptors,width
from acnh303_global_bcsv_type_profile import inspect
from acnh303_global_bcsv_unknown_search import external

def crc(s): return zlib.crc32(s.encode("utf-8"))
def murmur(s):
    b=s.encode("utf-8"); h=0; mask=0xffffffff
    def rot(x,n):return ((x<<n)|(x>>(32-n)))&mask
    def mix(k):return (rot((k*0xcc9e2d51)&mask,15)*0x1b873593)&mask
    n=len(b)//4*4
    for i in range(0,n,4):
        h^=mix(int.from_bytes(b[i:i+4],"little")); h=(rot(h,13)*5+0xe6546b64)&mask
    if n<len(b):h^=mix(int.from_bytes(b[n:],"little"))
    h^=len(b);h^=h>>16;h=(h*0x85ebca6b)&mask;h^=h>>13;h=(h*0xc2b2ae35)&mask;h^=h>>16
    return h

def obtain(root,cache):
    m=read(root/DATA/"external_enum_sources.json")
    files=m["files"];require(len(files)==271,"source count")
    cache.mkdir(parents=True,exist_ok=True)
    unique={x["blob"]:x for x in files}
    def fetch(x):
        p=cache/x["blob"]
        if not p.exists():
            url="https://raw.githubusercontent.com/"+m["repo"]+"/"+m["commit"]+"/"+urllib.parse.quote(x["path"],safe="/")
            with urllib.request.urlopen(url,timeout=45) as res:b=res.read()
            require(blob(b)==x["blob"] and len(b)==x["bytes"],"bad source "+x["path"])
            p.write_bytes(b)
        b=p.read_bytes();require(blob(b)==x["blob"] and len(b)==x["bytes"],"bad cache")
        return x["blob"],b.decode("utf-8-sig").splitlines()
    with concurrent.futures.ThreadPoolExecutor(max_workers=12) as pool:
        content=dict(pool.map(fetch,unique.values()))
    return [(x,content[x["blob"]]) for x in files]

def field_hash(path):
    s=Path(path).stem.removeprefix("0x")
    return f"{int(s,16):08X}" if re.fullmatch(r"[0-9a-fA-F]{1,8}",s) else None

def run(root,out,cache):
    require(murmur("")==0 and murmur("foo")==0xf6a5c420 and crc("123456789")==0xcbf43926,"hash controls")
    fields=read(out/"fields.json"); tables=read(out/"tables.json")
    unknown=read(out/"unknown_hash_candidates.json")
    by_hash=collections.defaultdict(list)
    for f in fields:by_hash[f["hash"]].append(f)
    require(len(by_hash)==2075 and len(fields)==2898,"baseline drift")
    enums=[]; bits=[]; hints=[]; names=[]; scope_values=collections.defaultdict(lambda:collections.defaultdict(set)); global_murmur=collections.defaultdict(set)
    source_rows=[]
    for spec,lines in obtain(root,cache):
        role=spec["role"];h=field_hash(spec["path"]);source_rows.append((spec["path"],spec["blob"],role,len(lines)))
        if role=="bitfield":
            require(h is not None,"bitfield key")
            for i,label in enumerate(lines):
                bits.append((h,i,label,spec["path"]))
            continue
        if role=="crc_enum":require(h is not None,"enum key")
        for i,label in enumerate(lines):
            if not label:continue
            algo="crc32" if role=="crc_enum" else "murmur3_x86_32_seed0"
            value=crc(label) if role=="crc_enum" else murmur(label)
            enums.append((h,algo,value,label,spec["path"],i))
            if h is not None:scope_values[(h,algo)][value].add(label)
            if role=="murmur":global_murmur[value].add(label)
    for spec,lines in external(root,cache):
        if spec["role"]!="type":continue
        for s in lines:
            if "=" not in s:continue
            h,t=s.split("=",1)
            if re.fullmatch(r"[0-9a-fA-F]{1,8}",h):hints.append((f"{int(h,16):08X}",t,spec["path"]))
    for x in unknown:
        for c in x["candidates"]:
            require(f"{crc(c['signature']):08X}"==x["hash"],"candidate crc")
            compatible={(v["table"],v["ordinal"]) for v in c["compatible_occurrences"]}
            for f in by_hash[x["hash"]]:
                names.append((f["table"],f["ordinal"],x["hash"],c["signature"],c["name"],c["type"],int((f["table"],f["ordinal"]) in compatible),json.dumps(c["sources"],ensure_ascii=False)))
    ext_murmur={x["hash"] for x in unknown if any(c["type"]=="stringMurmurHash" for c in x["candidates"])}
    require(len(ext_murmur)==23,"special signature count")
    remaining={x["hash"] for x in unknown if not x["candidates"]}
    require(len(remaining)==28,"unknown baseline changed: review before replacing snapshot")
    hints_map=collections.defaultdict(set)
    for h,t,s in hints:hints_map[h].add(t)
    table_map={t["table"]:t for t in tables}; table_bytes={}
    def data(f):
        name=f["table"]
        if name not in table_bytes:
            t=table_map[name];b=(root/t["path"]).read_bytes()
            require(blob(b)==t["git_blob"],"original blob mismatch")
            rows,stride,cols=descriptors(b);table_bytes[name]=(b,rows,stride,28+len(cols)*8)
        return table_bytes[name]
    enum_profiles=[]; unresolved=[]; murmur_profiles=[]; bit_profiles=[]
    for f in fields:
        h=f["hash"];b,rows,stride,start=data(f)
        if h in remaining:
            stats=inspect(b,start,stride,rows,f["offset"],f["width_hint"],None)
            unresolved.append({**{k:f[k] for k in ("table","ordinal","hash","offset","width_hint")},"external_type_hints":sorted(hints_map[h]),"value_profile":stats})
        for algo in ("crc32","murmur3_x86_32_seed0"):
            labels=scope_values.get((h,algo))
            if algo=="murmur3_x86_32_seed0" and h in ext_murmur:
                require(f["width_hint"]>=4,"Murmur field span")
            if not labels and not (algo=="murmur3_x86_32_seed0" and h in ext_murmur):continue
            if f["width_hint"]<4:
                enum_profiles.append({"table":f["table"],"ordinal":f["ordinal"],"hash":h,"algorithm":algo,"status":"insufficient_span"});continue
            counts=collections.Counter(struct.unpack_from("<I",b,start+i*stride+f["offset"])[0] for i in range(rows))
            known=labels or {}
            vals=[{"value":f"{v:08X}","count":c,"scoped_labels":sorted(known.get(v,())),"global_murmur_labels":sorted(global_murmur.get(v,())) if algo.startswith("murmur") else []} for v,c in sorted(counts.items())]
            p={"table":f["table"],"ordinal":f["ordinal"],"hash":h,"algorithm":algo,"rows":rows,"distinct_values":len(counts),"zero_rows":counts.get(0,0),"scoped_match_rows":sum(c for v,c in counts.items() if v in known),"global_murmur_match_rows":sum(c for v,c in counts.items() if v in global_murmur) if algo.startswith("murmur") else None,"values":vals,"runtime_verified":None}
            enum_profiles.append(p)
            if h in ext_murmur and algo.startswith("murmur"):murmur_profiles.append(p)
    for h,entries in __import__("itertools").groupby(sorted(bits),key=lambda x:x[0]):
        labels=list(entries);span=(max(x[1] for x in labels)+8)//8
        for f in by_hash.get(h,[]):
            b,rows,stride,start=data(f)
            p={"table":f["table"],"ordinal":f["ordinal"],"hash":h,"label_count":len(labels),"span_required":span,"width_hint":f["width_hint"],"runtime_verified":None}
            if span<=f["width_hint"]:
                vals=[int.from_bytes(b[start+i*stride+f["offset"]:start+i*stride+f["offset"]+span],"little") for i in range(rows)]
                p["candidate_bit_frequencies"]=[{"bit":i,"label":label,"set_rows":sum(bool(v&(1<<i)) for v in vals)} for _,i,label,_ in labels]
            else:p["status"]="span_conflict"
            bit_profiles.append(p)
    with sqlite3.connect(out/"dictionary.sqlite3") as db:
        db.execute("PRAGMA foreign_keys=ON")
        db.executescript("""
        CREATE TABLE external_source(path TEXT PRIMARY KEY,git_blob TEXT,role TEXT,line_count INTEGER);
        CREATE TABLE field_name_candidate(table_name TEXT,ordinal INTEGER,hash TEXT,signature TEXT,name TEXT,type TEXT,width_compatible INTEGER,source_json TEXT,PRIMARY KEY(table_name,ordinal,signature),FOREIGN KEY(table_name,ordinal) REFERENCES field(table_name,ordinal));
        CREATE TABLE external_enum_value(field_hash TEXT,algorithm TEXT,value INTEGER,label TEXT,source TEXT,line_index INTEGER,PRIMARY KEY(source,line_index));
        CREATE INDEX ext_enum_hash ON external_enum_value(field_hash,value);
        CREATE TABLE external_bit_label(field_hash TEXT,bit_index INTEGER,label TEXT,source TEXT,PRIMARY KEY(source,bit_index));
        CREATE TABLE external_type_hint(field_hash TEXT,type TEXT,source TEXT,PRIMARY KEY(field_hash,type,source));
        CREATE TABLE enum_value_profile(table_name TEXT,ordinal INTEGER,algorithm TEXT,profile_json TEXT,PRIMARY KEY(table_name,ordinal,algorithm),FOREIGN KEY(table_name,ordinal) REFERENCES field(table_name,ordinal));
        """)
        db.executemany("INSERT INTO external_source VALUES(?,?,?,?)",source_rows)
        db.executemany("INSERT INTO field_name_candidate VALUES(?,?,?,?,?,?,?,?)",names)
        db.executemany("INSERT INTO external_enum_value VALUES(?,?,?,?,?,?)",enums)
        db.executemany("INSERT INTO external_bit_label VALUES(?,?,?,?)",bits)
        db.executemany("INSERT OR IGNORE INTO external_type_hint VALUES(?,?,?)",hints)
        db.executemany("INSERT INTO enum_value_profile VALUES(?,?,?,?)",[(p["table"],p["ordinal"],p["algorithm"],json.dumps(p,ensure_ascii=False)) for p in enum_profiles])
        require(db.execute("PRAGMA integrity_check").fetchone()[0]=="ok","sqlite integrity")
        require(not db.execute("PRAGMA foreign_key_check").fetchall(),"foreign keys")
        require(db.execute("SELECT count(DISTINCT hash) FROM field_name_candidate").fetchone()[0]==220,"candidate import count")
    summary={"authenticated_external_files":len(source_rows),"crc_enum_files":sum(x[2]=="crc_enum" for x in source_rows),"bitfield_files":sum(x[2]=="bitfield" for x in source_rows),"murmur_files":sum(x[2]=="murmur" for x in source_rows),"enum_and_murmur_label_records":len(enums),"crc_enum_label_records":sum(x[1]=="crc32" for x in enums),"bit_label_records":len(bits),"type_hint_hashes":len(hints_map),"type_hint_hashes_in_original":len(set(hints_map)&set(by_hash)),"unknown_hashes_with_type_hint":len(remaining&set(hints_map)),"external_name_candidate_hashes":len({n[2] for n in names}),"external_name_candidate_occurrences":len(names),"enum_profile_occurrences":len(enum_profiles),"murmur_signature_hashes":len(ext_murmur),"murmur_original_occurrences":len(murmur_profiles),"murmur_scoped_match_rows":sum(p["scoped_match_rows"] for p in murmur_profiles),"murmur_global_match_rows":sum(p["global_murmur_match_rows"] for p in murmur_profiles),"murmur_original_rows":sum(p["rows"] for p in murmur_profiles),"murmur_zero_rows":sum(p["zero_rows"] for p in murmur_profiles),"bitfield_profile_occurrences":len(bit_profiles),"unresolved_hashes":len(remaining),"unresolved_occurrences":len(unresolved),"runtime_verified":0}
    for n,obj in [("enum_import_summary",summary),("enum_value_profiles",enum_profiles),("murmur_value_profiles",murmur_profiles),("bitfield_profiles",bit_profiles),("remaining_unknown_profiles",unresolved)]:
        (out/(n+".json")).write_text(json.dumps(obj,ensure_ascii=False,indent=2)+"\n",encoding="utf-8")
    print(json.dumps(summary,ensure_ascii=False,indent=2))
    for p in unresolved:
        v=p["value_profile"];print("UNKNOWN_PROFILE",p["hash"],p["table"],json.dumps({"rows":v["rows"],"distinct":v["distinct_raw"],"type_hints":p["external_type_hints"],"top_raw":[{"hex":x["hex"][:32],"count":x["count"]} for x in v["top_raw"][:4]]},ensure_ascii=False))
    return summary
if __name__=="__main__":
    p=argparse.ArgumentParser();p.add_argument("--root",type=Path,default=Path("."));p.add_argument("--out",type=Path,required=True);p.add_argument("--cache",type=Path,required=True)
    a=p.parse_args();run(a.root.resolve(),a.out.resolve(),a.cache.resolve())
