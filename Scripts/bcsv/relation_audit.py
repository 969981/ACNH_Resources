"""Read-only BCSV structural and residual CRC audit. No candidate is a native proof."""
import collections as C
import json, re
from pathlib import Path
from bcsv import BCSV, crc32
from field_hash_docs import signature_parts, table_cells
ROOT=Path(__file__).resolve().parents[2]
CAT=ROOT/"research/bcsv-catalog"
OUT=ROOT/"out/bcsv-relations"
def load(p): return json.loads(p.read_text(encoding="utf-8"))
def dump(n,v): (OUT/(n+".json")).write_text(json.dumps(v,ensure_ascii=False,indent=2)+"\n",encoding="utf-8")
def norm(s): return re.sub("[^a-z0-9]","",s.lower())
def main():
    inv=load(CAT/"inventory.json"); profiles=load(CAT/"table-profiles.json")
    refs=load(CAT/"reference-candidates.json")
    g={}
    for l in (ROOT/"docs/Sources/BCSV/Generated/Field-Hashes.md").read_text(encoding="utf-8").splitlines():
        if l.startswith("| hash_"):
            h,s,zh,*_=table_cells(l); g[h]=(*signature_parts(s),zh)
    assert len(inv)==len(profiles)==234 and len(g)==2075
    tables={}; fields=[]; keys=[]; nums={}; strings=C.defaultdict(set); scoped=C.defaultdict(set)
    for e in inv:
        t=e["table"]; b=BCSV.read(ROOT/e["path"]); tables[t]=b
        assert b.metadata()["sha256"]==e["sha256"] and b.metadata()["fields"]==e["fields"]
        for f in b.fields:
            name,typ,zh=g[f.key]
            d=dict(table=t,hash=f.key,offset=f.offset,span=f.width,name=name,zh=zh,type=typ,source_sha256=e["sha256"])
            if re.fullmatch(r"[us](8|16|32|64)",typ):
                bits=int(typ[1:]); n=bits//8
                raw=[b.raw(i,f) for i in range(b.count)]
                vals=[int.from_bytes(r[:n],"little",signed=typ[0]=="s") for r in raw if len(r)>=n and not any(r[n:])]
                c=C.Counter(vals)
                d.update(kind="numeric",valid_rows=len(vals),invalid_rows=b.count-len(vals),distinct=len(c),
                         minimum=min(c,default=None),maximum=max(c,default=None),
                         boolean_domain_candidate=bool(c) and set(c)<={0,1} and len(vals)==b.count,
                         low_cardinality=len(c)<=32,values=dict(sorted(c.items())) if len(c)<=32 else {},
                         bit_set_counts=[sum(k for v,k in c.items() if v&(1<<i)) for i in range(bits)])
                if vals and len(vals)==b.count:
                    nums[t,f.key]=(name,typ,vals)
                    if len(c)==len(vals) and re.search(r"(id|index|no)$",name,re.I):
                        keys.append(dict(table=t,hash=f.key,name=name,kind="numeric_unique_candidate"))
            elif re.fullmatch(r"string[0-9]+",typ):
                n=int(typ[6:]); vals=[]
                for i in range(b.count):
                    r=b.raw(i,f)
                    try: s=r[:n].split(b"\0",1)[0].decode("utf-8") if len(r)>=n and not any(r[n:]) else None
                    except UnicodeDecodeError: s=None
                    vals.append(s)
                    if s and re.fullmatch(r"[A-Za-z_][A-Za-z0-9_.-]{0,127}",s):
                        strings[crc32(s)].add((s,t,f.key))
                d.update(kind="string",distinct=len(set(vals)),invalid_rows=vals.count(None))
                if vals and all(vals) and len(set(vals))==len(vals) and re.search(r"(id|label|key|name)$",name,re.I):
                    keys.append(dict(table=t,hash=f.key,name=name,kind="string_unique_candidate"))
            fields.append(d)
    assert len(fields)==2898 and sum(b.count for b in tables.values())==58349
    residual=[]; observed=mapped=0
    for p in profiles:
        t=p["table"]; b=tables[t]
        assert b.metadata()["sha256"]==p["source_sha256"]
        for e in p["enum_fields"]:
            h=e["hash"]; f=b.by_hash[int(h[5:],16)]
            assert C.Counter(int.from_bytes(b.raw(i,f)[:4],"little") for i in range(b.count))=={int(v["raw"],16):v["count"] for v in e["values"]}
            for v in e["values"]:
                x=int(v["raw"],16); observed+=1
                if v["labels"]:
                    mapped+=1
                    for s in v["labels"]:
                        assert crc32(s)==x; scoped[h,x].add((s,t))
                else: residual.append(dict(table=t,hash=h,raw=v["raw"],rows=v["count"]))
    targets=C.defaultdict(set)
    for r in refs: targets[r["source_table"],r["source_hash"]].add((r["target_table"],r["target_label_hash"]))
    for r in residual:
        t,h,x=r["table"],r["hash"],int(r["raw"],16)
        same=sorted(scoped[h,x]); glob=sorted(strings[x]); direct=[a for a in glob if a[1:] in targets[t,h]]
        names={a[0] for a in same+glob}
        r.update(same_field_candidates=same,linked_label_candidates=direct,global_string_candidates=glob,
                 status="collision_or_multiple_labels" if len(names)>1 else "scoped_crc_candidate" if same or direct else "global_crc_candidate" if glob else "unresolved")
    fk=[]
    for k in keys:
        target,th=k["table"],k["hash"]
        if (target,th) not in nums: continue
        tn,tt,tv=nums[target,th]; domain=set(tv)
        expected={norm(tn),norm(Path(target).stem)+"id",re.sub(r"(param|data|info)$","",norm(Path(target).stem))+"id"}-{"id","uniqueid","index","no"}
        for (source,h),(sn,st,sv) in nums.items():
            if source==target or norm(sn) not in expected: continue
            c=C.Counter(sv); hits=set(c)&domain; nr=sum(c[v] for v in hits)
            if len(hits)>=3 and len(hits)/len(c)>=.8 and nr/len(sv)>=.8:
                fk.append(dict(source_table=source,source_hash=h,target_table=target,target_hash=th,
                               matched_distinct=len(hits),distinct=len(c),matched_rows=nr,rows=len(sv),
                               unmatched_values=sorted(set(c)-domain),status="numeric_fk_candidate"))
    native=load(ROOT/"research/hash008h/residual_fields.json")["fields"]
    summary=dict(tables=len(tables),fields=len(fields),rows=sum(b.count for b in tables.values()),
                 enum_observed=observed,enum_prior_mapped=mapped,enum_residual=len(residual),
                 residual_status=dict(C.Counter(r["status"] for r in residual)),
                 numeric_fields=len(nums),boolean_domain_candidates=sum(r.get("boolean_domain_candidate",False) for r in fields),
                 key_candidates=len(keys),numeric_fk_candidates=len(fk),existing_crc_fk_candidates=len(refs),
                 imported_native_fields=len(native),new_native_confirmed=0)
    assert observed==mapped+len(residual)
    OUT.mkdir(parents=True,exist_ok=True)
    for n,v in (("summary",summary),("enum-residual",residual),("field-profiles",fields),("key-candidates",keys),
                ("numeric-reference-candidates",fk),("existing-native-evidence",native)): dump(n,v)
    print(json.dumps(summary,ensure_ascii=False))
if __name__=="__main__": main()
