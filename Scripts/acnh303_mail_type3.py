#!/usr/bin/env python3
"""HASH-008R3: exact compiled situation enums and type3 conditional candidate stages."""
import argparse,collections,csv,json,sqlite3,zlib
from pathlib import Path
from acnh303_hash008e import decode,parse_elf,get_bytes_va,require,bcsv,gitblob
S=0x100000
DOMAINS=[("ItemHHASituation1","A7C79784",0x04A1BD10,0x05327430,0x01A729B4,0x01A87710),
         ("ItemHHASituation2","B6BAFDFD",0x04A1C110,0x05327440,0x01A72B94,0x01A87C30)]
def hx(x):return f"{x:08X}"
def dump(p,o):p.write_text(json.dumps(o,ensure_ascii=False,indent=2)+"\n")
def type3_exclusion(pool,excluded):
    if excluded is None:raise ValueError("explicit player history set required")
    reduced=set(pool)-set(excluded)
    return reduced if reduced else set(pool)
def run(root,out):
    elf,nso,mapped,segments,raw,tags,relocs=decode(root);segs=parse_elf(elf)
    b,n,w,c,v,st,width=bcsv(root,"ItemParam");require(n==11178 and gitblob(b)=="431bbd26a575197a1bd963c1721b093ae3e4df84","ItemParam identity")
    maps=[];domains=[]
    for name,field,base,cache,store,fn in DOMAINS:
        entries=[];counts=collections.Counter(v(i,field,4) for i in range(n))
        for i in range(47):
            a=base-S+i*8;r=relocs[a];require(r["symbol"]==0 and r["type"] in ("RELR",1027) and r["addend"] is not None,"native enum slot")
            t=r["addend"];buf=bytearray()
            for j in range(100):
                x=raw(t+j,1);require(x==get_bytes_va(elf,segs,t+j,1),"NSO/ELF string mismatch")
                if x==b"\0":break
                buf.extend(x)
            else:raise ValueError("unterminated native string")
            crc=zlib.crc32(buf);entries.append({"index":i,"label":buf.decode("ascii"),"crc32":hx(crc),"item_count":counts[crc],"slot_ghidra":hx(a+S),"string_ghidra":hx(t+S)})
        by={int(e["crc32"],16):e for e in entries}
        require(len(by)==47 and set(by)==set(counts),"complete CRC join")
        require(entries[18]["label"]=="LivingRoom","type3 ordinal18")
        maps.append(by);domains.append({"name":name,"field":field,"table_ghidra":hx(base),"cache_ghidra":hx(cache),"store_ghidra":hx(store),"lookup":hx(fn),"itemparam_rows":sum(counts.values()),"entries":entries})
    require([x["label"] for x in domains[0]["entries"]]==[x["label"] for x in domains[1]["entries"]],"domain order differs")
    db=sqlite3.connect(out/"mail_rewards.sqlite");db.execute("pragma foreign_keys=on")
    db.executescript("""CREATE TABLE IF NOT EXISTS item_hha_situation(item_id INTEGER PRIMARY KEY REFERENCES item(item_id),situation1_index INTEGER,situation1_label TEXT,situation2_index INTEGER,situation2_label TEXT);
    CREATE TABLE IF NOT EXISTS type3_stage(config_id TEXT REFERENCES config(config_id),stage TEXT,item_id INTEGER REFERENCES item(item_id),PRIMARY KEY(config_id,stage,item_id));""")
    db.execute("DELETE FROM item_hha_situation");db.execute("DELETE FROM type3_stage")
    records=[]
    for i in range(n):
        a,b=(maps[j][v(i,DOMAINS[j][1],4)] for j in range(2))
        records.append((v(i,"54706054",2),a["index"],a["label"],b["index"],b["label"]))
    db.executemany("INSERT INTO item_hha_situation VALUES(?,?,?,?,?)",records)
    rows=db.execute("select item_id,from_index,raw_price,can_gift,situation1_index,situation2_index from item join item_hha_situation using(item_id)").fetchall()
    living={i for i,f,p,g,a,b in rows if a==18 or b==18}
    # Exact type3 attribute OR; raw price and CanGift are static proxies.
    selected={i for i,f,p,g,a,b in rows if i in living and 2000<=p<=20000}
    retained={i for i,f,p,g,a,b in rows if i in selected and f in (2,5,7,3,4)}
    gift={i for i,f,p,g,a,b in rows if i in retained and g}
    # Five original type3 rows have empty direct mail categories; never mix unknown base.
    configs=db.execute("select config_id,base_count from config where handling=3").fetchall()
    require(len(configs)==5 and all(x[1]==0 for x in configs),"type3 config scope")
    for key,_ in configs:
        for stage,pool in (("situation_union",living),("raw_price_proxy",selected),("source_filter",retained),("can_gift_proxy",gift)):
            db.executemany("INSERT INTO type3_stage VALUES(?,?,?)",[(key,stage,i) for i in sorted(pool)])
    require(type3_exclusion({1,2},{1})=={2} and type3_exclusion({1,2},{1,2})=={1,2},"rollback test")
    require(db.execute("pragma integrity_check").fetchone()[0]=="ok" and not db.execute("pragma foreign_key_check").fetchall(),"database integrity")
    db.commit()
    coverage=db.execute("""select count(*) from config c where proxy_count>0 or exists(select 1 from scenario_candidate s where s.config_id=c.config_id) or exists(select 1 from context_case_candidate d where d.config_id=c.config_id) or exists(select 1 from type3_stage t where t.config_id=c.config_id and t.stage='can_gift_proxy')""").fetchone()[0]
    remaining=db.execute("""select config_id,handling,text_key from config c where proxy_count=0 and not exists(select 1 from scenario_candidate s where s.config_id=c.config_id) and not exists(select 1 from context_case_candidate d where d.config_id=c.config_id) and not exists(select 1 from type3_stage t where t.config_id=c.config_id and t.stage='can_gift_proxy')""").fetchall()
    db.close()
    dump(out/"hha_situation_dictionary.json",domains)
    with (out/"item_hha_situation.csv").open("w",encoding="utf-8-sig",newline="") as f:
        cw=csv.writer(f);cw.writerow(["item_id","situation1_index","situation1_label","situation2_index","situation2_label"]);cw.writerows(records)
    dump(out/"type3_candidates.json",{"config_ids":[x[0] for x in configs],"situation_union":sorted(living),"raw_price_proxy":sorted(selected),"source_filter":sorted(retained),"can_gift_proxy":sorted(gift),"final_runtime_pool":None})
    summary={"dictionary_slots":94,"distinct_labels":47,"joined_item_fields":2*n,"situation1_18":sum(x[1]==18 for x in records),"situation2_18":sum(x[3]==18 for x in records),"living_room_union":len(living),"raw_price_proxy":len(selected),"source_filter":len(retained),"can_gift_proxy":len(gift),"type3_configs":len(configs),"covered_configs":coverage,"remaining":remaining,"runtime_final_verified":0,"sqlite_integrity":"ok"}
    dump(out/"type3_summary.json",summary);print("TYPE3_SUMMARY",json.dumps(summary));print("TYPE3_ENUM",json.dumps(domains));print("TYPE3_IDS",json.dumps(sorted(gift)))
if __name__=="__main__":
    p=argparse.ArgumentParser();p.add_argument("--root",type=Path,default=Path("."));p.add_argument("--out",type=Path,required=True);a=p.parse_args();run(a.root.resolve(),a.out.resolve())
