#!/usr/bin/env python3
"""Residual BCSV evidence: original rows, label relations, and reproducible CRC search."""
import argparse,collections,json,re,zlib,struct,hashlib
from pathlib import Path
from acnh303_hash008e import bcsv,gitblob,require,ROM
def crc(s):return f"{zlib.crc32(s.encode('utf-8')):08X}"
def run(root,out):
    out.mkdir(parents=True,exist_ok=True)
    reg=json.loads((root/"research/hash008h/residual_fields.json").read_text())
    fields=reg["fields"];require(len(fields)==28 and len({x["hash"] for x in fields})==28 and sum(len(x["occurrences"]) for x in fields)==32,"residual count")
    tables={};profiles=[]
    def get(t):
        if t not in tables:tables[t]=bcsv(root,t)
        return tables[t]
    for x in fields:
        require(x["original_name"] is None and x["name_status"]=="unresolved","unverified name promoted")
        for o in x["occurrences"]:
            t=o["table"];h=x["hash"];b,n,w,c,v,s,width=get(t)
            require(c[h]==(o["ordinal"],o["offset"]) and width(h)==o["width_hint"],"schema drift "+t+" "+h)
            off=c[h][1];start=28+8*len(c);span=width(h)
            vals=collections.Counter(b[start+i*w+off:start+i*w+off+span].hex() for i in range(n))
            profiles.append({"table":t,"hash":h,"git_blob":gitblob(b),"rows":n,"ordinal":c[h][0],"offset":off,"width_hint":span,"distinct_raw_values":len(vals),"top_raw_values":vals.most_common(20)})
    b,n,w,c,v,s,width=get("WherearenFacilityActionTypeParam")
    lookup=collections.defaultdict(list)
    for i in range(n):lookup[s(i,"036E8EBE")].append({"id":v(i,"54706054",2),"label":s(i,"13AB5198")})
    relations=[]
    for i in range(n):
        target=s(i,"630F2B53")
        if target:relations.append({"id":v(i,"54706054",2),"label":s(i,"13AB5198"),"target_name":target,"matches":lookup[target]})
    require(n==61 and len(relations)==10 and all(len(x["matches"])==1 for x in relations),"NPC target name join")
    b,n,w,c,v,s,width=get("ItemAct")
    enums=collections.defaultdict(list)
    for i in range(n):enums[f'{v(i,"8B1904B9",4):08X}'].append(s(i,"87BF00E8"))
    enum_rows=[{"value":h,"count":len(labels),"crc_label_matches":[x for x in labels if crc(x)==h],"labels":labels} for h,labels in sorted(enums.items())]
    require(n==82 and len(enums)==6 and len(enums["629B9E5B"])==77 and sum(len(x["crc_label_matches"]) for x in enum_rows)==5,"mailbox values")
    b,n,w,c,v,s,width=get("ItemParam")
    require(gitblob(b)=="431bbd26a575197a1bd963c1721b093ae3e4df84" and n==11178,"ItemParam original identity")
    cats=collections.defaultdict(list)
    for i in range(n):cats[f'{v(i,"70E19913",4):08X}'].append({"item_id":v(i,"54706054",2),"model":s(i,"48EF0398"),"kind":s(i,"FC275E86")})
    b,n,w,c,v,s,width=get("ItemMailAttachCategoryGroup")
    groups=[]
    for i in range(n):
        tokens=s(i,"E4361C86").upper().split("|")
        require(all(re.fullmatch("[0-9A-F]{8}",x) for x in tokens),"invalid list token")
        groups.append({"id":v(i,"54706054",2),"label":s(i,"3FEBC642"),"categories":[{"hash":h,"item_count":len(cats[h]),"kind_counts":dict(collections.Counter(x["kind"] for x in cats[h])),"examples":cats[h][:12]} for h in tokens]})
    # Exact stored hash joins, never infer missing category names from collisions.
    summary={"residual_hashes":len(fields),"residual_occurrences":len(profiles),"source_tables":len(tables),"name_status":dict(collections.Counter(x["name_status"] for x in fields)),"semantic_status":dict(collections.Counter(x["semantic_status"] for x in fields)),"npc_target_join":{"nonempty":len(relations),"unique_matches":sum(len(x["matches"])==1 for x in relations)},"mailbox_enum_labels":sum(len(x["crc_label_matches"]) for x in enum_rows),"mail_category_tokens":sum(len(x["categories"]) for x in groups),"mail_category_tokens_with_item_matches":sum(y["item_count"]>0 for x in groups for y in x["categories"])}
    for name,obj in [("summary",summary),("profiles",profiles),("npc_target_relations",relations),("mailbox_enum_values",enum_rows),("mail_attachment_category_join",groups)]:
        (out/(name+".json")).write_text(json.dumps(obj,ensure_ascii=False,indent=2)+"\n",encoding="utf-8")
    print("NPC_TARGET_JOIN",json.dumps(relations,ensure_ascii=False))
    print("MAIL_CATEGORY_JOIN",json.dumps(groups,ensure_ascii=False))
    print(json.dumps(summary,indent=2))
if __name__=="__main__":
    p=argparse.ArgumentParser();p.add_argument("--root",type=Path,default=Path("."));p.add_argument("--out",type=Path,required=True);a=p.parse_args();run(a.root.resolve(),a.out.resolve())
