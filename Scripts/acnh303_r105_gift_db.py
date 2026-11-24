#!/usr/bin/env python3
"""R105 original BCSV gift research DB; complete item coverage, conservative runtime claims."""
from pathlib import Path
import argparse,collections,csv,hashlib,json,sqlite3,struct,zlib
import acnh303_r104_gift_model as model
import acnh303_r100_nso_decode as dec
from capstone import Cs,CS_ARCH_ARM64,CS_MODE_ARM

ROM="e10617820db06889e1638499478da0de_NCA/1/Bcsv"
RANKS=("12D4D7A6","E8C448B2","FA71E75C","42CD8039") # Native order S,A,B,C
BODY1=("1B98FDF8","F45A96C6","1F6D2DC5","F0AF46FB","12735D82","FDB136BC","16868DBF","F944E681")
BODY2=("A3249A9D","4CE6F1A3","A7D14AA0","4813219E","AACF3AE7","450D51D9","AE3AEADA","41F881E4")
FAB1=("545F8769","BB9DEC57","50AA5754","BF683C6A","5DB42713","B2764C2D","5941F72E","B6839C10")
def crc(s):return zlib.crc32(s.encode())&0xffffffff
def digest(b):return hashlib.sha256(b).hexdigest()
def write(p,o):p.write_text(json.dumps(o,ensure_ascii=False,indent=2)+"\n",encoding="utf-8")
class BCSV:
    def __init__(self,root,name):
        self.path=root/ROM/(name+".bcsv");self.b=self.path.read_bytes()
        self.n,self.stride=struct.unpack_from("<II",self.b);nc=struct.unpack_from("<H",self.b,8)[0]
        start=0x1c if self.b[10] else 0xc
        self.start=start+nc*8
        self.cols={f"{h:08X}":p for h,p in struct.iter_unpack("<II",self.b[start:self.start])}
        if self.start+self.n*self.stride!=len(self.b) or len(self.cols)!=nc:raise ValueError(f"layout mismatch {name}")
        self.meta=json.loads((root/"UnPack/1/Bcsv"/(name+".json")).read_text("utf-8"))
        assert (self.n,self.stride)==(self.meta["row_count"],self.meta["row_size"])
        assert self.cols=={x["crc32"]:x["offset"] for x in self.meta["columns"]}
        self.width={x["crc32"]:x["width_hint"] for x in self.meta["columns"]}
    def raw(self,i,h,w=None):
        n=self.width[h] if w is None else w;p=self.start+i*self.stride+self.cols[h]
        assert 0<=i<self.n and self.cols[h]+n<=self.stride
        return self.b[p:p+n]
    def val(self,i,h,signed=False,w=None):return int.from_bytes(self.raw(i,h,w),"little",signed=signed)
    def string(self,i,h):return self.raw(i,h).split(b"\0",1)[0].decode("utf-8",errors="replace")
    def source(self):return {"file":str(self.path.name),"sha256":digest(self.b),"rows":self.n,"stride":self.stride}
def build(root,out):
    out.mkdir(parents=True,exist_ok=True)
    tables={n:BCSV(root,n) for n in ("NmlNpcParam","ItemParam","ItemRemake","ItemColor","AITag","ItemClothGroup","ItemKind")}
    npc,item,remake,color,tag,cloth,kind=(tables[x] for x in tables)
    assert (npc.n,item.n,tag.n,color.n)==(417,11178,51,15)
    assert digest(npc.b)=="5a68a96c7962058ec8119536b53a713acd125747d2c6f2c057d8c788d5f3a797"
    # Four rank fields are byte arrays, not 56-bit scalar gameplay IDs.
    for name,h in zip(("S","A","B","C"),RANKS):
        assert crc("AITagBitRank"+name+" u8")==int(h,16) and item.width[h]==7
    anchors={}
    for path,need in {
        "ec/01a5ec80":["0x12d4d7a6","-0x173bb74e","-0x58e18a4","0x42cd8039","0x23","pbVar16[0x1c]"],
        "0e/007b0ea4":["uVar2 < 0x33","return 0;","return 1;","return 2;","return 3;","return 4;"],
        "0d/007b0de0":["DAT_04ca7a08","* 0x23"],
        "11/007b1100":["DAT_04ca7a00","uVar3 < 4"],
        "32/01ae3210":["PTR_DAT_04bc0028","0xcb5eb33f","0x1b98fdf8","0x545f8769"],
        "3b/01ae3bc0":["PTR_DAT_04bc0030","0xcb5eb33f","0xa3249a9d","0xece3e00c"],
        "0c/01ae0cf0":["-0x645fbf3e","uVar4 < 7"],
        "76/026b7690":["FUN_021f5aa0","FUN_0277d7b4(auStack_88,param_2)","FUN_026917f4","BromideRewardSkipCount","FUN_02747170(pbVar8 + 0x38,&local_98,10)"],
    }.items():
        p=root/"derived/3.0.3/ghidra12.2/c"/(path+".c");s=p.read_text("utf-8")
        assert all(x in s for x in need),(path,[x for x in need if x not in s])
        anchors[path]={"sha256":digest(p.read_bytes()),"anchors":need}
    # Extract exact names and group hashes from original AITag table. Row ordinal is NOT assumed to be native enum index.
    tags=[{"source_row":i,"unique_id":tag.val(i,"54706054"),"key":tag.string(i,"87BF00E8"),"ja":tag.string(i,"977ADFCE"),"group_crc32":f"{tag.val(i,'A8EACF70'):08X}","native_bit_index":None} for i in range(tag.n)]
    assert len({x["unique_id"] for x in tags})==51 and len({x["group_crc32"] for x in tags})==4
    colors=[{"id":color.val(i,"54706054"),"key":color.string(i,"87BF00E8"),"ja":color.string(i,"977ADFCE")} for i in range(color.n)]
    assert {x["id"] for x in colors}==set(range(15))
    cmap={crc(x["key"]):x["id"] for x in colors}
    # Color1/2 base field candidates selected by exact enum-key hash coverage, not silently inferred from position alone.
    # For 3.0.3 the old schema ordering suggests these two columns; validate each raw value against original enum names.
    color_candidates={}
    for h in ("A6B1A7FD","B7CCCD84"):
        vals=collections.Counter(item.val(i,h) for i in range(item.n))
        color_candidates[h]={"distinct":len(vals),"crc_join_rows":sum(n for v,n in vals.items() if v in cmap),"raw_numeric_join_rows":sum(n for v,n in vals.items() if v<15),"raw_values":{str(v):n for v,n in vals.items()}}
    # Keep exact per-remake color fields, verify the second fabric switch mapping from source, including case numbers.
    import re
    s=(root/"derived/3.0.3/ghidra12.2/c/3b/01ae3bc0.c").read_text("utf-8")
    def switches(s,var):
        result=[]
        for block in re.finditer(r"switch\([^)]+\)\s*\{(.*?)default:",s,re.S):
            pairs=[]
            for k,body in re.findall(r"case (\d):\s*(.*?)(?=case \d:|$)",block.group(1),re.S):
                m=re.search(var+r"\s*=\s*0x([0-9a-f]+);",body)
                if m:pairs.append((int(k),m.group(1).upper().zfill(8)))
            if len(pairs)==8:result.append(tuple(h for k,h in sorted(pairs)))
        return result
    sec=switches(s,"uVar12")
    f2=[x for x in sec if x[0]=="ECE3E00C"];assert len(f2)==1
    fabric2=f2[0];assert all(h in remake.cols for h in BODY1+BODY2+FAB1+fabric2)
    # Reconstruct raw 35-byte runtime rank record S,A,B,C, complement. 51-bit consumer only.
    # We do NOT claim all item IDs appear in the initialized live table (range + manager checks remain).
    mask=(1<<51)-1
    def bitrank(i):
        vals=[int.from_bytes(item.raw(i,h),"little") for h in RANKS]
        return vals+[~(vals[0]|vals[1]|vals[2]|vals[3]) & ((1<<56)-1)]
    def rank_at(r,t):
        if not 0<=t<51:return 4
        return next((k for k,v in enumerate(r[:4]) if v&(1<<t)),4)
    assert rank_at([1,1,0,0,0],0)==0 and rank_at([0,0,0,0,0],50)==4 and rank_at([1<<51,0,0,0,0],51)==4
    db=out/"acnh303_gift_research.sqlite3"
    if db.exists():raise FileExistsError(db)
    con=sqlite3.connect(db);con.executescript("""
      CREATE TABLE metadata(key TEXT PRIMARY KEY,value TEXT);
      CREATE TABLE npc(id INTEGER PRIMARY KEY,res_name TEXT UNIQUE,color1 INTEGER,color2 INTEGER,style1 INTEGER,style2 INTEGER,tag1 INTEGER,tag2 INTEGER,initial_tops INTEGER,initial_remake INTEGER);
      CREATE TABLE colors(id INTEGER PRIMARY KEY,key TEXT,ja TEXT);
      CREATE TABLE ai_tags(source_row INTEGER PRIMARY KEY,unique_id INTEGER UNIQUE,key TEXT,ja TEXT,group_crc32 TEXT,native_bit_index INTEGER);
      CREATE TABLE items(id INTEGER PRIMARY KEY,source_row INTEGER,kind_raw TEXT,res_name TEXT,price_s32 INTEGER,remake_id INTEGER,color1_raw INTEGER,color2_raw INTEGER,base_color1_candidate INTEGER,base_color2_candidate INTEGER,style_raw INTEGER,rank_s INTEGER,rank_a INTEGER,rank_b INTEGER,rank_c INTEGER,rank_none INTEGER,clothing_kind_candidate INTEGER,gift_eligibility INTEGER,source_json TEXT);
      CREATE TABLE remakes(id INTEGER PRIMARY KEY,item_fk INTEGER,source_row INTEGER);
      CREATE TABLE remake_color_slots(remake_id INTEGER,channel TEXT,slot INTEGER,color1 INTEGER,color2 INTEGER,PRIMARY KEY(remake_id,channel,slot));
      CREATE INDEX item_kind ON items(kind_raw);
      CREATE INDEX item_price ON items(price_s32);
      CREATE INDEX remake_item ON remakes(item_fk);
      CREATE VIEW item_gift_pairs AS SELECT n.id AS npc_id,i.id AS item_id,
        CASE WHEN i.clothing_kind_candidate=1 AND i.style_raw BETWEEN 1 AND 6 AND i.style_raw IN (n.style1,n.style2)
        THEN 'direct_style_match_conditional' ELSE 'unknown' END AS affinity_status,
        i.gift_eligibility AS gift_eligibility,
        NULL AS final_photo_probability
        FROM npc n CROSS JOIN items i;
    """)
    for t in tags:con.execute("INSERT INTO ai_tags VALUES(?,?,?,?,?,?)",tuple(t.values()))
    con.executemany("INSERT INTO colors VALUES(?,?,?)",[(x["id"],x["key"],x["ja"]) for x in colors])
    npcs=[]
    for i in range(npc.n):
        v=lambda h:npc.val(i,h)
        row=(v("54706054"),npc.string(i,"48EF0398"),v("34EB5DC3"),v("265EF22D"),v("5EF86F1F"),v("195815CF"),v("A54F92FD"),v("E2EFE82D"),v("870F1E29"),v("566F1D31"))
        assert all(0<=x<15 for x in row[2:4]) and all(0<=x<7 for x in row[4:6]) and all(0<=x<51 for x in row[6:8])
        npcs.append(row)
    con.executemany("INSERT INTO npc VALUES(?,?,?,?,?,?,?,?,?,?)",npcs)
    # Candidate classification is the original kind label prefix only; never a proved CanGive predicate.
    def is_cloth(s):return s.startswith(("Top_","Onepiece_","Bottoms_","Shoes_","Kind_Cap","Kind_Helmet","Kind_Socks","Kind_Accessory","Kind_Bag"))
    item_rows=[];duplicate_rank_bits=0
    for i in range(item.n):
        v=lambda h:item.val(i,h)
        k=item.string(i,"FC275E86");r=bitrank(i)
        duplicate_rank_bits+=sum((r[a]&r[b]&mask).bit_count() for a in range(4) for b in range(a+1,4))
        c1,c2=v("A6B1A7FD"),v("B7CCCD84")
        item_rows.append((v("54706054"),i,k,item.string(i,"48EF0398"),item.val(i,"718B024D",True),v("CB5EB33F"),c1,c2,cmap.get(c1),cmap.get(c2),v("9BA040C2"),*r,int(is_cloth(k)),None,json.dumps({"raw_rank_bytes":[item.raw(i,h).hex() for h in RANKS],"gift_eligibility_evidence":"unknown","base_color_mapping":"enum_crc_candidate","runtime_style1_reader":"01AE0CF0"},ensure_ascii=False)))
    con.executemany("INSERT INTO items VALUES("+",".join("?"*19)+")",item_rows)
    variants=[]
    for i in range(remake.n):
        rid=remake.val(i,"54706054");fk=remake.val(i,"FD9AF1E1")
        con.execute("INSERT INTO remakes VALUES(?,?,?)",(rid,fk,i))
        for ch,a,b in [("body",BODY1,BODY2),("fabric",FAB1,fabric2)]:
            for j,(x,y) in enumerate(zip(a,b)):
                variants.append((rid,ch,j,remake.val(i,x),remake.val(i,y)))
    con.executemany("INSERT INTO remake_color_slots VALUES(?,?,?,?,?)",variants)
    sources={k:v.source() for k,v in tables.items()}
    for k,v in {"schema":"acnh303-r105-gift-research-v1","sources":sources,"tag_order_verified":False,"style_names_verified":False,"runtime_verified":False,"color_candidates":color_candidates,"body_color_fields":[BODY1,BODY2],"fabric_color_fields":[FAB1,fabric2]}.items():
        con.execute("INSERT INTO metadata VALUES(?,?)",(k,json.dumps(v,ensure_ascii=False)))
    con.commit();assert con.execute("PRAGMA integrity_check").fetchone()[0]=="ok"
    pairs=con.execute("SELECT count(*) FROM item_gift_pairs").fetchone()[0];assert pairs==417*11178
    direct=con.execute("SELECT count(*) FROM item_gift_pairs WHERE affinity_status='direct_style_match_conditional'").fetchone()[0]
    # Full ItemID-indexed lightweight web sidecar; no fake all-pairs or names.
    web={"schema":"acnh303-gift-research-v1","npc":[dict(zip(("id","res_name","color1","color2","style1","style2","tag1","tag2","initial_tops","initial_remake"),x)) for x in npcs],
        "items":[{"id":r[0],"kind":r[2],"price":r[4],"remake_id":r[5],"color_candidates":[r[8],r[9]],"style1":r[10],"rank_bits_hex":[f"{x:014x}" for x in r[11:15]],"clothing_kind_candidate":bool(r[16]),"gift_eligibility":None} for r in item_rows],
        "colors":colors,"tags":tags,"limitations":["style names unresolved","base color enum join candidate","gift eligibility unknown","variant color slots not validated as selectable Body/Fabric combinations"]}
    write(out/"gift_web_sidecar.json",web);write(out/"tag_dictionary_51.json",tags);write(out/"source_manifest.json",{"tables":sources,"native_anchors":anchors})
    # Verify exact photo-history callers in authenticated original code.
    elf,nso,mapped,segments,raw,dt,rel=dec.decode(root);cs=Cs(CS_ARCH_ARM64,CS_MODE_ARM)
    sites=[]
    for va,data in mapped[:1]:
        for i,(w,) in enumerate(struct.iter_unpack("<I",memoryview(data)[:len(data)//4*4])):
            if w&0xfc000000!=0x94000000:continue
            d=w&0x3ffffff;d=d-(1<<26) if d&(1<<25) else d;pc=va+i*4
            if pc+d*4==0x026b7690-0x100000:
                lo=max(va,pc-0x60)
                sites.append({"site_ghidra":hex(pc+0x100000),"window":[{"ghidra":hex(x.address+0x100000),"op":x.mnemonic+" "+x.op_str} for x in cs.disasm(raw(lo,pc-lo+0x30),lo)]})
    write(out/"photo_history_callers.json",{"sites":sites,"setting":"matching resident photo Item plus matched full/light player identity => SkipCount=10","final_delivery_proved":False})
    report={"source_tables":sources,"npc":len(npcs),"items":len(item_rows),"all_item_npc_pairs":pairs,"conditional_style_pairs":direct,"unknown_pairs":pairs-direct,
      "clothing_kind_candidates":sum(r[16] for r in item_rows),"raw_remake_rows":remake.n,"color_slots":len(variants),"base_color_mapping_candidates":color_candidates,
      "ai_tags":len(tags),"ai_tag_groups":dict(collections.Counter(t["group_crc32"] for t in tags)),"tag_rank_bit_overlap_pairs":duplicate_rank_bits,
      "npc_style_value_counts":[dict(collections.Counter(r[k] for r in npcs)) for k in (4,5)],"photo_history_callers":len(sites),
      "native_tag_index_mapping_verified":False,"gift_eligibility_verified":False,"final_photo_delivery_verified":False,"runtime_verified":False}
    write(out/"report.json",report);print(json.dumps(report,indent=2,ensure_ascii=False));con.close()
def query(db,npc_id,item_id,quantity,solo,friendship,wrapped,skip,pocket):
    con=sqlite3.connect(f"file:{db.resolve()}?mode=ro",uri=True);con.row_factory=sqlite3.Row
    n=con.execute("SELECT * FROM npc WHERE id=?",(npc_id,)).fetchone();i=con.execute("SELECT * FROM items WHERE id=?",(item_id,)).fetchone()
    if n is None or i is None:raise ValueError("unknown original NPC UniqueID or ItemID")
    pair=dict(con.execute("SELECT * FROM item_gift_pairs WHERE npc_id=? AND item_id=?",(npc_id,item_id)).fetchone())
    result={"npc":dict(n),"item":dict(i),"affinity":pair,"model":None}
    # Only conditional ordinary-price and explicit positive-style branch, not automatic final recommendation.
    if i["price_s32"]>=0:
        try:
            price=model.ordinary_price(i["price_s32"],quantity,solo)
            result["ordinary_price_candidate"]=price
            result["conditional_entry"]=model.present_entry(price,pocket)
            if pair["affinity_status"]=="direct_style_match_conditional":
                result["model"]=model.model(friendship,2,int(wrapped),skip,result["conditional_entry"])
        except ValueError as e:result["model_error"]=str(e)
    result["warning"]="Assumes selected item is giftable, ordinary price and applicable Equipment path. Final delivery probability unknown."
    return result
if __name__=="__main__":
    p=argparse.ArgumentParser(description=__doc__);p.add_argument("--root",type=Path,default=Path("."));p.add_argument("--out",type=Path);p.add_argument("--db",type=Path);p.add_argument("--npc-id",type=int);p.add_argument("--item-id",type=int);p.add_argument("--quantity",type=int,default=1);p.add_argument("--solo",action="store_true");p.add_argument("--friendship",type=int,default=200);p.add_argument("--wrapped",action="store_true");p.add_argument("--skip",type=int,default=0);p.add_argument("--no-pocket-space",action="store_true");a=p.parse_args()
    if a.db:print(json.dumps(query(a.db,a.npc_id,a.item_id,a.quantity,a.solo,a.friendship,a.wrapped,a.skip,not a.no_pocket_space),ensure_ascii=False,indent=2))
    elif a.out:build(a.root.resolve(),a.out.resolve())
    else:p.error("requires --out or --db")
