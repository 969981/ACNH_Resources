#!/usr/bin/env python3
"""HASH-008Q: auditable mail reward candidate pools, never claim runtime final rewards."""
import argparse,collections,csv,json,sqlite3,struct,zlib
from pathlib import Path
from capstone import Cs,CS_ARCH_ARM64,CS_MODE_LITTLE_ENDIAN
from acnh303_hash008e import bcsv,decode,parse_elf,get_bytes_va,require,gitblob
from acnh303_hash008i import murmur
S=0x100000
# Kind union / From retain / inclusive numeric range (raw Price proxy only).
RULES={
0:([],None,None,[]),
1:([9,18],None,None,["island_source_mask","context_union","npc_four_item_exclusion"]),
2:([],None,None,["selector_36_41","selector_outside_range_behavior"]),
3:([],[2,5,7,3,4],[2000,20000],["predicate_049FF628_18","context_bitmap_exclusion","effective_price"]),
4:([9,10],None,None,["island_source_mask"]),
5:([84],None,None,["seasonal_seed_source_mask"]),
6:([20],None,None,["umbrella_shop_state"]),
7:([],None,None,["month_dependent_source_union"]),
8:([14],None,None,["island_source_mask"]),
9:([],None,None,["context_union","npc_four_item_exclusion"]),
10:([9],None,None,["island_source_mask","npc_four_item_exclusion"]),
11:([164,166,165,167],[103,104],None,[]),
12:([166,167],[104],None,[]),
13:([19],[90],[1000,1499],["effective_price"]),
14:([6],[93],[1000,1499],["effective_price"]),
15:([4],[11,13,12,14],[1000,1499],["effective_price"]),
16:([5],[11,13,12,14],[1000,1499],["effective_price"]),
17:([119],[5],[None,3000],["effective_price"]),
18:([165,167],[103,104],None,[])}
def hx(v):return f"{v:08X}"
def dump(p,x):p.write_text(json.dumps(x,ensure_ascii=False,indent=2)+"\n",encoding="utf8")
def price_ok(p,b):
    return b is None or (b[0] is None or p>=b[0]) and (b[1] is None or p<=b[1])
def exclude_restore(pool,excluded):
    reduced=pool-excluded
    return reduced if reduced else set(pool)
def bitmap(ids):
    b=bytearray(1876)
    for i in ids:
        require(0<=i<15000,"bitmap index")
        b[i//8]|=1<<(i%8)
    return b
def rank_pick(pool,rng_u32):
    require(0<=rng_u32<2**32,"random u32")
    return sorted(pool)[(rng_u32*len(pool))>>32] if pool else None
def context_pool(base, *, additions, retain_ids, effective_prices, price_bounds, exclusions, restore_if_empty, validity_ids):
    """Explicit scenario adapter, not a native context interpreter.
    Caller supplies the actual context-derived additions/retention and price values.
    Missing inputs are rejected rather than defaulting to an empty set.
    """
    require(all(x is not None for x in (additions,retain_ids,exclusions,validity_ids)),"missing runtime context")
    p=(set(base)|set(additions))&set(retain_ids)
    if price_bounds is not None:
        require(effective_prices is not None and p<=set(effective_prices),"missing effective price")
        p={i for i in p if price_ok(effective_prices[i],price_bounds)}
    p=exclude_restore(p,set(exclusions)) if restore_if_empty else p-set(exclusions)
    return p&set(validity_ids)
def test():
    require(exclude_restore({1,2},{1})=={2},"partial exclusion")
    require(exclude_restore({1,2},{1,2})=={1,2},"empty rollback")
    require(exclude_restore(set(),{1})==set(),"empty initial")
    require(rank_pick({0,14999},0)==0 and rank_pick({0,14999},2**32-1)==14999,"rank endpoints")
    require(rank_pick(set(),0) is None,"empty selection")
    require(bitmap({14999})[-2:]==b"\x80\x00","padding")
    require(context_pool({1},additions={2},retain_ids={1,2},effective_prices={1:1000,2:1499},price_bounds=[1000,1499],exclusions={1,2},restore_if_empty=True,validity_ids={2})=={2},"explicit context pipeline")
    require(price_ok(1000,[1000,1499]) and price_ok(1499,[1000,1499]) and not price_ok(1500,[1000,1499]),"price range")
def run(root,out):
    test();out.mkdir(parents=True,exist_ok=True)
    native=json.loads((root/"research/hash008p-mail/native_enum_dictionary.json").read_text())
    mail=json.loads((root/"research/hash008j/mail_category_dictionary.json").read_text())
    ev=json.loads((root/"research/hash008o-mail/handler_evidence.json").read_text())
    evidence={x["type"]:x for x in ev["handlers"]}
    kinds=native["domains"]["ItemKind"]["rows"];sources=native["domains"]["ItemFrom"]["rows"];cats=mail["categories"]
    require(len(kinds)==189 and len(sources)==318 and len(cats)==79,"dictionary domain")
    kmap={int(x["crc32"],16):x for x in kinds};smap={int(x["crc32"],16):x for x in sources}
    cmap={int(x["crc32"],16):x for x in cats};mmap={int(x["murmur3"],16):x for x in cats}
    require(len(kmap)==189 and len(smap)==318 and len(cmap)==79 and len(mmap)==79,"dictionary uniqueness")
    b,n,w,c,v,s,width=bcsv(root,"ItemParam")
    require(n==11178 and gitblob(b)=="431bbd26a575197a1bd963c1721b093ae3e4df84","ItemParam identity")
    kb,kn,kw,kc,kv,ks,kwidth=bcsv(root,"ItemKind")
    require(kn==189 and gitblob(kb)=="0541661b1409455962c73c9cc7e2ea4f13d709fd","ItemKind identity")
    require(zlib.crc32(b"CanGift u8")==0x06012035,"CanGift field CRC")
    gift={i:kv(i,"06012035",1) for i in range(kn)}
    require(set(gift.values())<={0,1},"CanGift bool")
    items={}
    for i in range(n):
        iid=v(i,"54706054",2);require(iid not in items and 0<=iid<15000,"item identity")
        k=kmap[v(i,"5270EB75",4)];f=smap[v(i,"DB1A2F07",4)]
        rawcat=v(i,"70E19913",4);cat=cmap.get(rawcat)
        price=v(i,"718B024D",4);price=price-2**32 if price>=2**31 else price
        items[iid]={"item_id":iid,"row":i,"res_name":s(i,"3FEBC642"),"kind_index":k["native_index"],"kind":k["label"],"from_index":f["native_index"],"source":f["label"],"mail_raw":hx(rawcat),"mail_index":cat["index"] if cat else None,"mail_category":cat["name"] if cat else None,"raw_price":price,"can_gift":gift[k["bcsv_row"]]}
    require(sum(x["mail_index"] is None for x in items.values())==2452,"unknown mail category count")
    require(sum(x["mail_index"] not in (None,0) for x in items.values())==587,"non-none mail categories")
    gb,gn,gw,gc,gv,gs,gwidth=bcsv(root,"ItemMailAttachCategoryGroup");require(gn==3,"group count")
    groups=[]
    for i in range(gn):
        tokens=gs(i,"E4361C86").split("|")
        ix=[mmap[int(t,16)]["index"] for t in tokens]
        g=mail["groups"][i]
        require(ix==g["category_indices"] and gv(i,"54706054",2)==g["id"],"group dictionary mismatch")
        groups.append({"row":i,"unique_id":g["id"],"label":g["label"],"indices":ix})
    rules=[]
    for t,(ku,sf,pr,deps) in RULES.items():
        rules.append({"type":t,"handler":evidence[t]["target_ghidra"] if t else None,"union_kind_indices":ku,"union_kind_labels":[kinds[i]["label"] for i in ku],"retain_from_indices":sf,"retain_from_labels":[sources[i]["label"] for i in sf] if sf is not None else None,"raw_price_proxy_bounds":pr,"dynamic_dependencies":deps,"observed_operations":evidence[t]["observed_operations"] if t else [],"native_semantic_complete":False})
    # Fixed scenario alternatives, not assertions that every branch is reachable.
    scenarios={4:[("island_shop_79",[79]),("island_shop_79_80",[79,80])],8:[("island_shop_79",[79]),("island_shop_79_80",[79,80])],6:[("umbrella_small",[15]),("umbrella_both",[15,16])]}
    configs=[];members=[];alternatives=[];table_counts={}
    for table,expected in (("MessageCardSelectPresent",125),("MessageCardSelectPresentSp",19)):
        bb,nn,ww,cc,vv,ss,wd=bcsv(root,table);require(nn==expected,"config count")
        table_counts[table]=gitblob(bb)
        for row in range(nn):
            t=vv(row,"E060D3CD",2);ci=vv(row,"368210C4",4);gi=vv(row,"128A3D9B",4);remake=vv(row,"C233727B",1)
            require(t in RULES and 0<=ci<79 and 0<=gi<3 and remake in (0,1),"config range")
            key=("N" if expected==125 else "S")+f"{row:03d}"
            catset=(set(groups[gi]["indices"])|{ci})-{0}
            base={iid for iid,x in items.items() if x["mail_index"] in catset}
            ku,sf,pr,deps=RULES[t]
            addition={iid for iid,x in items.items() if x["kind_index"] in ku}
            pre=base|addition
            known={iid for iid in pre if sf is None or items[iid]["from_index"] in sf}
            proxy={iid for iid in known if price_ok(items[iid]["raw_price"],pr)}
            gift_proxy={iid for iid in proxy if items[iid]["can_gift"]}
            # Some special handlers have an unclosed union producer; empty modeled
            # pool must not be interpreted as an empty real pool.
            pending=["mail_category_row_cache_runtime","native_remake_and_special_kind_exceptions","runtime_item_template_normalization"]+list(deps)
            if expected==125:pending.append("ordinary_npc_context_filter")
            if remake:pending.append("random_item_remake")
            for stage,pool in (("category_base",base),("kind_union",pre),("known_source_filter",known),("raw_price_proxy",proxy),("can_gift_proxy",gift_proxy)):
                members.extend((key,stage,iid) for iid in sorted(pool))
                require(bitmap(pool)[-1]==0,"padding")
            for scenario,mask in scenarios.get(t,[]):
                p={iid for iid in known if items[iid]["from_index"] in mask}
                alternatives.append({"config_id":key,"scenario":scenario,"source_indices":mask,"item_ids":sorted(p),"status":"illustrative_explicit_context_not_final"})
            if t==2:
                for selector in range(36,42):
                    category=selector+7
                    p=base|{iid for iid,x in items.items() if x["mail_index"]==category}
                    alternatives.append({"config_id":key,"scenario":f"selector_{selector}","source_indices":None,"category_indices":[category],"item_ids":sorted(p),"status":"native_selector_branch_pre_final_filter"})
            configs.append({"config_id":key,"table":table,"row":row,"text_key":hx(vv(row,"37571146",4)),"category_index":ci,"group_row":gi,"group_unique_id":groups[gi]["unique_id"],"category_indices":sorted(catset),"category_names":[cats[i]["name"] for i in sorted(catset)],"handling":t,"remake":remake,"base_count":len(base),"union_count":len(pre),"source_count":len(known),"proxy_count":len(proxy),"gift_proxy_count":len(gift_proxy),"pending_dependencies":pending,"final_candidate_ids":None,"final_reward_id":None,"status":"partial_static_model"})
    require(len(configs)==144 and len({x["config_id"] for x in configs})==144,"config coverage")
    require(len({x["text_key"] for x in configs})==144,"text key uniqueness")
    require(len({x["handling"] for x in configs})==19,"handling coverage")
    # Resolve native predicates and preserve exact code windows to guide next closure.
    elf,nso,mapped,segments,raw,tags,relocs=decode(root);segs=parse_elf(elf);md=Cs(CS_ARCH_ARM64,CS_MODE_LITTLE_ENDIAN)
    predicates=[]
    for slot in (0x04A395F0,0x04A39618,0x049FF948,0x04A395C8,0x049FF628):
        r=relocs.get(slot-S);require(r and r["symbol"]==0 and r["addend"] is not None,"predicate relocation")
        a=r["addend"];data=raw(a,256);require(data==get_bytes_va(elf,segs,a,256),"native predicate window mismatch")
        predicates.append({"slot":hx(slot),"target":hx(a+S),"instructions":[{"address":hx(i.address+S),"asm":i.mnemonic+" "+i.op_str} for i in md.disasm(data,a)],"status":"bounded_window_not_full_semantics"})
    dump(out/"predicate_evidence.json",predicates)
    # SQLite is source-backed, with staged membership and NULL final fields.
    dbpath=out/"mail_rewards.sqlite"
    if dbpath.exists():dbpath.unlink()
    db=sqlite3.connect(dbpath);db.execute("PRAGMA foreign_keys=ON")
    db.executescript("""
    CREATE TABLE item(item_id INTEGER PRIMARY KEY,row_index INTEGER UNIQUE,res_name TEXT,kind_index INTEGER,kind_label TEXT,from_index INTEGER,from_label TEXT,mail_raw TEXT,mail_index INTEGER,mail_category TEXT,raw_price INTEGER,can_gift INTEGER);
    CREATE TABLE enum_value(domain TEXT,native_index INTEGER,label TEXT,crc32 TEXT,murmur3 TEXT,PRIMARY KEY(domain,native_index));
    CREATE TABLE category_group(row_index INTEGER PRIMARY KEY,unique_id INTEGER,label TEXT,indices_json TEXT);
    CREATE TABLE handler(type INTEGER PRIMARY KEY,entry TEXT,rule_json TEXT);
    CREATE TABLE config(config_id TEXT PRIMARY KEY,source_table TEXT,row_index INTEGER,text_key TEXT,category_index INTEGER,group_row INTEGER REFERENCES category_group(row_index),handling INTEGER REFERENCES handler(type),remake INTEGER,base_count INTEGER,union_count INTEGER,source_count INTEGER,proxy_count INTEGER,gift_proxy_count INTEGER,final_reward_id INTEGER,final_candidate_count INTEGER,status TEXT,UNIQUE(source_table,row_index));
    CREATE TABLE candidate(config_id TEXT REFERENCES config(config_id),stage TEXT,item_id INTEGER REFERENCES item(item_id),PRIMARY KEY(config_id,stage,item_id));
    CREATE TABLE dependency(config_id TEXT REFERENCES config(config_id),name TEXT,PRIMARY KEY(config_id,name));
    CREATE TABLE scenario(config_id TEXT REFERENCES config(config_id),scenario TEXT,source_indices_json TEXT,category_indices_json TEXT,status TEXT,PRIMARY KEY(config_id,scenario));
    CREATE TABLE scenario_candidate(config_id TEXT,scenario TEXT,item_id INTEGER REFERENCES item(item_id),PRIMARY KEY(config_id,scenario,item_id),FOREIGN KEY(config_id,scenario) REFERENCES scenario(config_id,scenario));
    CREATE INDEX candidate_item ON candidate(item_id,stage);
    CREATE VIEW candidate_detail AS SELECT c.config_id,c.stage,i.* FROM candidate c JOIN item i USING(item_id);
    """)
    db.executemany("INSERT INTO item VALUES(?,?,?,?,?,?,?,?,?,?,?,?)",[tuple(x[k] for k in ("item_id","row","res_name","kind_index","kind","from_index","source","mail_raw","mail_index","mail_category","raw_price","can_gift")) for x in items.values()])
    db.executemany("INSERT INTO enum_value VALUES(?,?,?,?,?)",[(d,x["native_index"] if d!="MailCategory" else x["index"],x["label"] if d!="MailCategory" else x["name"],x["crc32"],x["murmur3"]) for d,rows in (("ItemKind",kinds),("ItemFrom",sources),("MailCategory",cats)) for x in rows])
    db.executemany("INSERT INTO category_group VALUES(?,?,?,?)",[(x["row"],x["unique_id"],x["label"],json.dumps(x["indices"])) for x in groups])
    db.executemany("INSERT INTO handler VALUES(?,?,?)",[(x["type"],x["handler"],json.dumps(x,ensure_ascii=False)) for x in rules])
    db.executemany("INSERT INTO config VALUES(?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?)",[(x["config_id"],x["table"],x["row"],x["text_key"],x["category_index"],x["group_row"],x["handling"],x["remake"],x["base_count"],x["union_count"],x["source_count"],x["proxy_count"],x["gift_proxy_count"],None,None,x["status"]) for x in configs])
    db.executemany("INSERT INTO candidate VALUES(?,?,?)",members)
    db.executemany("INSERT INTO dependency VALUES(?,?)",[(x["config_id"],d) for x in configs for d in x["pending_dependencies"]])
    db.executemany("INSERT INTO scenario VALUES(?,?,?,?,?)",[(x["config_id"],x["scenario"],json.dumps(x["source_indices"]),json.dumps(x.get("category_indices")),x["status"]) for x in alternatives])
    db.executemany("INSERT INTO scenario_candidate VALUES(?,?,?)",[(x["config_id"],x["scenario"],i) for x in alternatives for i in x["item_ids"]])
    require(db.execute("PRAGMA integrity_check").fetchone()[0]=="ok","SQLite integrity")
    require(not db.execute("PRAGMA foreign_key_check").fetchall(),"SQLite FK")
    for col,stage in (("base_count","category_base"),("union_count","kind_union"),("source_count","known_source_filter"),("proxy_count","raw_price_proxy"),("gift_proxy_count","can_gift_proxy")):
        require(db.execute(f"SELECT count(*) FROM config c WHERE {col} != (SELECT count(*) FROM candidate p WHERE p.config_id=c.config_id AND stage=?)",(stage,)).fetchone()[0]==0,"stage count mismatch")
    db.commit();db.close()
    dump(out/"configs.json",configs);dump(out/"handlers.json",rules);dump(out/"scenarios.json",alternatives)
    dump(out/"groups.json",groups)
    with (out/"candidates.csv").open("w",encoding="utf-8-sig",newline="") as f:
        wr=csv.writer(f);wr.writerow(["config_id","stage","item_id"]);wr.writerows(members)
    with (out/"items.csv").open("w",encoding="utf-8-sig",newline="") as f:
        wr=csv.DictWriter(f,fieldnames=list(next(iter(items.values()))));wr.writeheader();wr.writerows(items.values())
    counts=collections.Counter(x[1] for x in members)
    summary={"configs":len(configs),"normal_configs":125,"special_configs":19,"handling_types":19,"items":len(items),"enum_values":586,"category_groups":3,"stage_memberships":dict(counts),"configs_with_base_candidates":sum(x["base_count"]>0 for x in configs),"configs_with_proxy_candidates":sum(x["proxy_count"]>0 for x in configs),"configs_empty_proxy":sum(x["proxy_count"]==0 for x in configs),"distinct_proxy_items":len({x[2] for x in members if x[1]=="raw_price_proxy"}),"scenario_rows":len(alternatives),"configs_with_gift_proxy":sum(x["gift_proxy_count"]>0 for x in configs),"distinct_gift_proxy_items":len({x[2] for x in members if x[1]=="can_gift_proxy"}),"runtime_final_configs":0,"unknown_category_items":2452,"sqlite_integrity":"ok","source_blobs":table_counts,"predicates":[{"slot":p["slot"],"target":p["target"]} for p in predicates]}
    dump(out/"summary.json",summary);print("REWARD_SUMMARY",json.dumps(summary));print("CONFIG_COUNTS",json.dumps([{k:x[k] for k in ("config_id","text_key","handling","category_indices","base_count","union_count","source_count","proxy_count","gift_proxy_count","remake")} for x in configs]))
    print("SCENARIO_COUNTS",json.dumps([{"config_id":x["config_id"],"scenario":x["scenario"],"count":len(x["item_ids"])} for x in alternatives]))
if __name__=="__main__":
    p=argparse.ArgumentParser();p.add_argument("--root",type=Path,default=Path("."));p.add_argument("--out",type=Path,required=True);a=p.parse_args();run(a.root.resolve(),a.out.resolve())
