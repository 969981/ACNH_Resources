"""Build image-resource database from original Git tree and audited catalog rows."""
import collections,csv,json,sqlite3,hashlib,re,subprocess
from pathlib import Path
ROM="e10617820db06889e1638499478da0de_NCA/1/"
OUT=Path("out/image-sources")
DOC=Path("docs/Sources/Images")
CN={"Effect":"特效","Env":"环境","Font":"字体","Layout":"UI 布局","Movie":"视频","Pack":"打包资源","Shader":"着色器","Stage":"场景","Swkbd":"键盘","System":"系统","Videogame":"小游戏","Audio":"音频界面","BookDiveFishIcon":"海洋生物图鉴","BookFishIcon":"鱼类图鉴","BookInsectIcon":"昆虫图鉴","CategoryS":"分类小图标","CharaMakeIcon":"角色创建","ClosetIcon":"衣柜服装图标","CloudIslandSave":"梦境岛存储","CmnProc":"通用处理资源","CookingIcon":"料理图标","DIYRecipeIcon":"DIY 配方图标","DailyQuestIcon":"每日任务图标","DoorOrnamentIcon":"门饰图标","ExtraResHeap":"附加资源","FtrIcon":"家具物品图标","GardeningIcon":"园艺图标","HouseDoorIcon":"房门图标","HousePostIcon":"信箱图标","HouseRoofIcon":"屋顶图标","HouseShapeIcon":"房屋外形图标","HouseWallIcon":"外墙图标","ManpuIcon":"表情图标","MenuIcon":"菜单图标","MessageCard":"邮件卡片","MyDesignMask":"自定义设计遮罩","NpcBromide":"NPC照片","NpcIcon":"NPC图标","NpcPoster":"NPC海报","Other":"其他模型资源","PlayerIcon":"玩家图标","ReBody":"本体改造资源","ReFabric":"布料改造资源","RoomSketchMask":"房间设计遮罩","ShopPlant":"商店植物","SoundAmbient":"环境音界面","Tex name":"纹理命名资源","WherearenIslandsMap":"度假岛地图","WherearenIslandsSeason":"度假岛季节","WherearenMapArea":"度假岛区域","WherearenMsgPhoto":"度假岛消息照片"}
def load(path):
    with Path(path).open(encoding="utf-8-sig",newline="") as f:return list(csv.DictReader(f))
def write(path,rows,columns):
    with path.open("w",encoding="utf-8-sig",newline="") as f:
        w=csv.DictWriter(f,fieldnames=columns);w.writeheader();w.writerows(rows)
def txt(v):return str(v).replace("|","\\|").replace("\n"," ")
def main():
    raw=load(OUT/"original-files.csv")
    summary=json.loads((OUT/"summary.json").read_text())
    assert len(raw)==summary["candidate_files"]==61646
    paths={r["path"]:r for r in raw};assert len(paths)==len(raw)
    groups=collections.Counter(r["category"] for r in raw)
    for r in raw:
        r["zh_purpose"]=CN.get(r["category"].split("/")[-1],"具体用途未知")
        r["purpose_evidence"]="family_name_candidate"
        r["format_hint"]="outer_suffix_only:"+Path(r["path"]).suffix
    write(OUT/"source-catalog.csv",raw,list(raw[0]))
    items=load("research/catalog/item.csv");assert len(items)==11178
    byid={r["item_id"]:r for r in items};assert len(byid)==len(items)
    index=collections.defaultdict(list)
    suffix=".Nin_NX_NVN.zs"
    for path,r in paths.items():
        if path.startswith("Model/Layout_") and path.endswith(suffix):
            family,stem=path[len("Model/Layout_"):-len(suffix)].split("_",1)
            index[stem].append((family,path))
    links=[]; stats=collections.Counter(); used=set()
    for item in items:
        ident=item["item_id"];stem=item["res_name"]
        matches=index.get(stem,[]) if stem else []
        # Retain all matching resource families; no arbitrary preferred icon.
        if not matches:
            links.append(dict(item_id=ident,res_name=stem,family="",path="",git_blob="",status="no_exact_stem"))
            stats["item_no_exact_stem"]+=1
        else:
            stats["items_with_exact_stem"]+=1
            stats["items_multiple_families"]+=len(matches)>1
            for fam,p in matches:
                used.add(p);links.append(dict(item_id=ident,res_name=stem,family=fam,path=p,git_blob=paths[p]["git_blob"],status="exact_res_name_candidate"))
    variants=load("research/catalog/variants/variant_combination.csv")
    vl=[];vseen=set()
    for r in variants:
        ident=r["item_id"];assert ident in byid
        key=(ident,r["body_index"],r["fabric_index"],r["fabric_mode"])
        assert key not in vseen;vseen.add(key)
        p=r["icon_path_candidate"].removeprefix(ROM)
        expected="Model/Layout_FtrIcon_"+byid[ident]["res_name"]+"_Remake_"+r["body_index"]+"_"+r["fabric_index"]+suffix
        assert p==expected,(p,expected)
        blob=paths.get(p,{}).get("git_blob","")
        assert blob==r["icon_git_blob"],(p,blob,r["icon_git_blob"])
        vl.append(dict(item_id=ident,remake_id=r["remake_id"],body_index=r["body_index"],fabric_index=r["fabric_index"],fabric_mode=r["fabric_mode"],path=p if blob else "",git_blob=blob,expected_path=p,status="static_combo_path_candidate" if blob else "missing_path",runtime_verified=0))
        stats["variant_paths_found" if blob else "variant_paths_missing"]+=1
    assert sum(x["item_id"]=="79" for x in vl)==56
    write(OUT/"item-icon-links.csv",links,list(links[0]));write(OUT/"variant-icon-links.csv",vl,list(vl[0]))
    # Actual sample descriptors from raw bytes, not suffix inference.
    textures=[];leaves=[]
    for sample in summary["samples"]:
        for leaf in sample.get("leaves",[]):leaves.append(dict(source=sample["path"],**leaf))
        for t in sample.get("textures",[]):textures.append(dict(source=sample["path"],**t))
    write(OUT/"sample-textures.csv",textures,list(textures[0]));write(OUT/"sample-members.csv",leaves,list(leaves[0]))
    formats=collections.Counter(t["format_hex"] for t in textures)
    # SQLite tables separate source identity, candidate relations and observed texture metadata.
    db=sqlite3.connect(OUT/"images.sqlite3")
    db.executescript("PRAGMA foreign_keys=ON; CREATE TABLE source(path TEXT PRIMARY KEY,category TEXT,git_blob TEXT,zh_purpose TEXT,purpose_evidence TEXT,format_hint TEXT);CREATE TABLE item(item_id INTEGER PRIMARY KEY,res_name TEXT);CREATE TABLE item_icon(item_id INTEGER REFERENCES item,path TEXT REFERENCES source,family TEXT,status TEXT);CREATE TABLE variant_icon(item_id INTEGER REFERENCES item,remake_id INTEGER,body_index INTEGER,fabric_index INTEGER,fabric_mode INTEGER,path TEXT REFERENCES source,expected_path TEXT,status TEXT,runtime_verified INTEGER,PRIMARY KEY(item_id,body_index,fabric_index,fabric_mode));CREATE TABLE texture(source TEXT REFERENCES source,member TEXT,embedded_offset INTEGER,texture_index INTEGER,name TEXT,width INTEGER,height INTEGER,format_hex TEXT,mip_count INTEGER,PRIMARY KEY(source,member,embedded_offset,texture_index));")
    db.executemany("INSERT INTO source VALUES(?,?,?,?,?,?)",[(r["path"],r["category"],r["git_blob"],r["zh_purpose"],r["purpose_evidence"],r["format_hint"]) for r in raw])
    db.executemany("INSERT INTO item VALUES(?,?)",[(r["item_id"],r["res_name"]) for r in items])
    db.executemany("INSERT INTO item_icon VALUES(?,?,?,?)",[(r["item_id"],r["path"] or None,r["family"],r["status"]) for r in links])
    db.executemany("INSERT INTO variant_icon VALUES(?,?,?,?,?,?,?,?,?)",[(r["item_id"],r["remake_id"],r["body_index"],r["fabric_index"],r["fabric_mode"],r["path"] or None,r["expected_path"],r["status"],0) for r in vl])
    db.executemany("INSERT INTO texture VALUES(?,?,?,?,?,?,?,?,?)",[(r["source"],r["member"],r["embedded_offset"],r["index"],r["name"],r["width"],r["height"],r["format_hex"],r["mip_count"]) for r in textures])
    db.executescript("CREATE INDEX source_category ON source(category); CREATE INDEX item_icon_item ON item_icon(item_id); CREATE INDEX item_icon_path ON item_icon(path);")
    db.commit();assert db.execute("PRAGMA integrity_check").fetchone()[0]=="ok";assert not db.execute("PRAGMA foreign_key_check").fetchall();db.close()
    report=dict(source_files=len(raw),group_count=len(groups),items=len(items),item_link_rows=len(links),distinct_linked_source_paths=len(used),variant_candidates=len(vl),sample_textures=len(textures),sample_formats=dict(formats),sqlite_integrity="ok",**stats)
    (OUT/"catalog-summary.json").write_text(json.dumps(report,ensure_ascii=False,indent=2)+"\n",encoding="utf-8")
    DOC.mkdir(exist_ok=True)
    lines=["# 全量原始素材分类字典","","返回 [图片素材专题](README.md) · [知识库首页](../../README.md)。","","路径存在性以原版 Git Tree 为证据；中文说明为资源族名候选，非全量像素验证。","", "| 原始资源族 | 中文用途 | 文件数 |","| --- | --- | ---: |"]
    for k,n in sorted(groups.items()):lines.append(f"| {txt(k)} | {CN.get(k.split('/')[-1],'未知')} | {n} |")
    lines+=["", "## 实际原始容器样例","","| 文件 | 内部格式 | BRTI 数量 |","| --- | --- | ---: |"]
    for r in summary["samples"]:lines.append(f"| {txt(r['path'])} | {txt(r.get('outer'))} → {', '.join(sorted(set(l['format'] for l in r.get('leaves',[]))))} | {len(r.get('textures',[]))} |")
    lines+=["","## 实际纹理描述样例","","| 原始资源 | BRTI 名称 | 宽×高 | Format | Mip |","| --- | --- | --- | --- | ---: |"]
    for t in textures:lines.append(f"| {txt(t['source'])} | {txt(t['name'])} | {t['width']}×{t['height']} | {t['format_hex']} | {t['mip_count']} |")
    lines+=["","## 商品图标候选关联","","| 指标 | 数量 |","| --- | ---: |"]
    for k,n in report.items():
        if isinstance(n,int):lines.append(f"| {k} | {n} |")
    lines+=["","所有映射仅为 exact ResName 或静态改造路径候选。保留缺失和多族匹配；不等于运行时选图。数据库源文件、CSV 与 SQLite 见 [研究产物](https://github.com/969981/ACNH_Resources/tree/research/research/image-catalog)（SQLite 仅 CI artifact）。",""]
    (DOC/"Source-Catalog.md").write_text("\n".join(lines),encoding="utf-8")
    print(json.dumps(report,ensure_ascii=False))
if __name__=="__main__":main()
