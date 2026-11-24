#!/usr/bin/env python3
"""R113: separate resource bitmaps from per-player state and validate gift wrapper evidence."""
import argparse,collections,json,sqlite3,struct,unittest
from pathlib import Path
from capstone import Cs,CS_ARCH_ARM64,CS_MODE_ARM
import acnh303_r100_nso_decode as dec
import acnh303_r105_gift_db as db
from acnh303_round11_elf_xref import bl_target
S=0x100000
def wrapper_gate(valid_id,enum82,quantity_guard,leaf):
    """Snapshot inputs only: missing live data remains unknown."""
    if valid_id is False:return False
    if enum82==0x49 and quantity_guard is not None and quantity_guard>0:return False
    if valid_id is None or enum82 is None or (enum82==0x49 and quantity_guard is None):return None
    return leaf
def lookup_id(raw_id,flags,normal,special):
    """0277D6C4 raw record lookup ID, not unpacked underlying item."""
    if raw_id in (0x16a1,0x3100) or flags&3==0:return raw_id
    state=flags&3;sub=(flags>>2)&15
    if state==2:return 0x1180
    if state==1:return normal[sub]
    if sub==15:return normal[16]
    if sub in (12,13,14):return special[sub-11]
    return {11:0x3a19,10:0x306}.get(sub,0x1225)
def test():
    n=list(range(17));s=[100,101,102,103]
    assert lookup_id(0x16a1,3,n,s)==0x16a1
    assert lookup_id(42,0,n,s)==42
    assert lookup_id(42,2,n,s)==0x1180
    assert lookup_id(42,1|(5<<2),n,s)==5
    assert lookup_id(42,3|(15<<2),n,s)==16
    assert lookup_id(42,3|(12<<2),n,s)==101
    assert lookup_id(42,3|(13<<2),n,s)==102
    assert lookup_id(42,3|(14<<2),n,s)==103
    assert lookup_id(42,3|(11<<2),n,s)==0x3a19
    assert lookup_id(42,3|(10<<2),n,s)==0x306
    assert lookup_id(42,3,n,s)==0x1225
    assert wrapper_gate(True,0x49,1,True) is False
    assert wrapper_gate(True,0x49,0,True) is True
    assert wrapper_gate(True,0x49,None,True) is None
    assert wrapper_gate(True,0,None,False) is False
    assert wrapper_gate(False,None,None,None) is False
    assert wrapper_gate(None,0,None,True) is None
def main(root,out):
    test()
    elf,nso,mapped,segments,raw,tags,rel=dec.decode(root)
    cs=Cs(CS_ARCH_ARM64,CS_MODE_ARM)
    def ins(a,n):return [{"address":f"0x{i.address+S:08X}","bytes":i.bytes.hex(),"op":i.mnemonic+" "+i.op_str} for i in cs.disasm(raw(a-S,n),a-S)]
    previous=json.loads((out/"r112_report.json").read_text("utf8"))
    for name,site,target in [("cGiftToNpc",0xe0c778,0x1b07660),("cBirthdayPresent",0xe0c948,0x1b081a0)]:
        assert previous["callbacks"][name]["instructions"]==116 and not previous["callbacks"][name]["gaps"]
        assert bl_target(int.from_bytes(raw(site-S,4),"little"),site-S)==target-S
    # Prior direct consumer candidates are PLT stubs, not the UI object's consumer.
    consumers=json.loads((out/"r112_callback_consumers.json").read_text("utf8"))
    assert {x["load"] for x in consumers}=={"0x04004B94","0x04006B94"}
    # Authoritative C anchors and bounded machine windows; C anchors are not machine CFG proof.
    srcroot=root/"derived/3.0.3/ghidra12.2/c"
    anchors={
      "resource_bitmap_writer":("96/02629630",["memset((void *)(param_1 + 0xe98e0),0,0x300)","pvVar17 = (void *)(param_1 + 0xe99e0)","pvVar17 = (void *)(param_1 + 0xe98e0)","LAB_02629a14","0x54706054","0x3ccca419","lVar2 = param_1 + 0xe9ae0"]),
      "resource_classification":("6b/02636b00",["-0x164ca5","DAT_05558724 = CONCAT44(1,~uVar7)","DAT_05557778 + (long)(int)uVar21 * 2"]),
      "player_read0":("e6/0261e658",["0x194b0","0x8698","0x8690","0x86b0","0xe98e0"]),
      "player_read1":("e9/0261e9cc",["0x194b0","0x8698","0x8690","0x100","0xe98e0"]),
      "player_write1":("ea/0261eae4",["0x8698","0x8690","uStack_38 = 0x1400","*(byte *)(lVar1 + 0x100) ="]),
      "player_write2":("ec/0262ec70",["uStack_68 = 0x1400","*(byte *)(lVar11 + 0x200) ="]),
      "player_write3":("f2/0262f2e8",["uStack_38 = 0x1400","*(byte *)(lVar5 + 0x300) ="]),
      "lookup":("d6/0277d6c4",["DAT_04177938","DAT_04101d00","0x16a1","0x3100","0x1180","0x3a19","0x306","0x1225"]),
      "quantity_guard":("b5/01aeb510",["uVar9 != 0x49","-0x6f43f7ab","param_1 + 0xe","bVar8 = 99"])}
    evidence={}
    for name,(p,need) in anchors.items():
        f=srcroot/(p+".c");b=f.read_bytes()
        assert all(x.encode() in b for x in need),(name,[x for x in need if x.encode() not in b])
        evidence[name]={"file":str(f.relative_to(root)),"sha256":db.digest(b),"anchors":need}
    normal=list(struct.unpack("<17I",raw(0x4177938-S,68)))
    special=list(struct.unpack("<4I",raw(0x4101d00-S,16)))
    item=db.BCSV(root,"ItemParam");kind=db.BCSV(root,"ItemKind");recipe=db.BCSV(root,"RecipeCraftParam")
    assert db.crc("CanGift u8")==0x06012035 and db.crc("CanNpcPresent u8")==0x0732bb98 and db.crc("CanNpcBirthdayPresent u8")==0x2c1b3b5b
    assert recipe.cols["FFE9B35B"]==28 and recipe.cols["3CCCA419"]==70
    # classification cache writer hashes two English names: DIY=0, Cooking=1.
    # Preserve unknown source values, do not silently treat unknown as proven DIY.
    class_map={db.crc("DIY"):0,db.crc("Cooking"):1}
    data=[];bits=[bytearray(256) for _ in range(3)]
    for i in range(recipe.n):
        rid=recipe.val(i,"54706054");h=recipe.val(i,"FFE9B35B");flag=recipe.val(i,"3CCCA419")
        c=class_map.get(h)
        data.append({"recipe_id":rid,"item_id":recipe.val(i,"89A3482C"),"class_crc":f"{h:08X}","class_index":c,"third_flag_raw":flag})
        if rid<2048:
            if c is not None:bits[c][rid>>3]|=1<<(rid&7)
            if flag:bits[2][rid>>3]|=1<<(rid&7)
    kmap={db.crc(kind.string(i,"87BF00E8")):i for i in range(kind.n)}
    permissions=[]
    for i in range(item.n):
        k=kmap[item.val(i,"5270EB75")]
        permissions.append({"item_id":item.val(i,"54706054"),"kind":kind.string(k,"87BF00E8"),"can_wrap":kind.val(k,"06012035"),"ordinary_kind_allowed":kind.val(k,"0732BB98"),"birthday_kind_allowed":kind.val(k,"2C1B3B5B"),"quantity_kind_flag":kind.val(k,"90BC0855"),"actual_ordinary":None,"actual_birthday":None})
    assert len(permissions)==11178 and len(data)==924
    con=sqlite3.connect(out/"r105/acnh303_gift_research.sqlite3")
    con.execute("CREATE TABLE IF NOT EXISTS r113_recipe_class(recipe_id INTEGER PRIMARY KEY,item_id INTEGER NOT NULL,class_crc TEXT NOT NULL,class_index INTEGER,third_flag_raw INTEGER NOT NULL)")
    con.executemany("INSERT OR REPLACE INTO r113_recipe_class VALUES(?,?,?,?,?)",[(x["recipe_id"],x["item_id"],x["class_crc"],x["class_index"],x["third_flag_raw"]) for x in data])
    con.execute("CREATE TABLE IF NOT EXISTS r113_gift_permission(item_id INTEGER PRIMARY KEY,can_wrap INTEGER,ordinary_kind_allowed INTEGER,birthday_kind_allowed INTEGER,quantity_kind_flag INTEGER,actual_ordinary INTEGER,actual_birthday INTEGER)")
    con.executemany("INSERT OR REPLACE INTO r113_gift_permission VALUES(?,?,?,?,?,NULL,NULL)",[(x["item_id"],x["can_wrap"],x["ordinary_kind_allowed"],x["birthday_kind_allowed"],x["quantity_kind_flag"]) for x in permissions])
    con.commit();assert con.execute("PRAGMA integrity_check").fetchone()[0]=="ok";con.close()
    web=json.loads((out/"gift_web_sidecar_r112.json").read_text("utf8"));byid={x["item_id"]:x for x in permissions};recipes={x["item_id"]:x for x in data}
    for x in web["items"]:
        x["r113_permissions"]=byid[x["id"]];x["r113_recipe_class"]=recipes.get(x["id"])
    web["limitations"].append("Kind permissions are not instance eligibility; generated recipe bitmaps are source predictions, not live snapshots")
    db.write(out/"gift_web_sidecar_r113.json",web)
    report={"callback_edges_verified":2,"plt_false_candidates_excluded":2,"recipe_class_crc_counts":dict(collections.Counter(x["class_crc"] for x in data)),"recipe_classes_resolved":sum(x["class_index"] is not None for x in data),"recipe_class_counts":dict(collections.Counter(str(x["class_index"]) for x in data)),"third_flag_counts":dict(collections.Counter(str(x["third_flag_raw"]) for x in data)),"source_predicted_bitmap_popcounts":[sum(b.bit_count() for b in v) for v in bits],"lookup_tables":{"normal":normal,"special":special},"static_permissions_counts":{k:dict(collections.Counter(str(x[k]) for x in permissions)) for k in ("can_wrap","ordinary_kind_allowed","birthday_kind_allowed","quantity_kind_flag")},"player_descriptor":{"offset":"0x8690","base":"0x8698","observer":"0x86B0","notification_size":"0x1400","independent_confirmed_write_offsets":["0x100","0x200","0x300"]},"runtime_verified":False}
    for n,o in [("r113_report.json",report),("r113_c_evidence.json",evidence),("r113_recipe_class.json",data),("r113_static_permissions.json",permissions),("r113_predicted_bitmaps.json",{"scope":"source_prediction_only","hex":[b.hex() for b in bits]}),("r113_machine_windows.json",{"writer":ins(0x2629630,0x620),"lookup":ins(0x277d6c4,0x90),"player_writer":ins(0x261eae4,0x100)})]:db.write(out/n,o)
    print("R113 REPORT",json.dumps(report,ensure_ascii=False),flush=True)
if __name__=="__main__":
    p=argparse.ArgumentParser();p.add_argument("--root",type=Path,default=Path("."));p.add_argument("--out",type=Path,required=True);a=p.parse_args();main(a.root.resolve(),a.out.resolve())
