"""Recover historical original PNG provenance and build navigable ZS/item/NPC mapping docs."""
import csv,json,hashlib,re,subprocess,collections,sqlite3
from pathlib import Path
from urllib.parse import quote
H=Path("historical")
REF="f09e15460d02790060a374b2ad6ba569ba9b97ed"
ROM="e10617820db06889e1638499478da0de_NCA/1/"
BASE="https://github.com/969981/ACNH_Resources/blob/"+REF+"/"
OUT=Path("research/image-mapping")
DOC=Path("docs/Sources/Images/Mapping")
SUF=".Nin_NX_NVN.zs"
def read(p):
    with Path(p).open(encoding="utf-8-sig",newline="") as f:return list(csv.DictReader(f))
def js(p):return json.loads(Path(p).read_text(encoding="utf-8"))
def tree(root,prefix):
    out={}
    for line in subprocess.check_output(["git","-C",str(root),"ls-tree","-rz","HEAD","--",prefix]).split(b"\0"):
        if line:
            meta,path=line.split(b"\t",1);out[path.decode()]=meta.decode().split()[2]
    return out
def write(name,rows):
    assert rows,name
    with (OUT/name).open("w",encoding="utf-8-sig",newline="") as f:
        w=csv.DictWriter(f,fieldnames=list(rows[0]));w.writeheader();w.writerows(rows)
def esc(x):return str(x or "").replace("|","\\|").replace("[","\\[").replace("]","\\]").replace("\n"," ").replace("\r"," ")
def url(p):return BASE+quote(p,safe="/")
def link(p,label=None):return "["+esc(label or Path(p).name)+"]("+url(p)+")" if p else "—"
def save(p,lines):p.write_text("\n".join(lines)+"\n",encoding="utf-8")
def chunks(rows,n):
    for start in range(0,len(rows),n):yield start,rows[start:start+n]
def main():
    OUT.mkdir(parents=True,exist_ok=True);DOC.mkdir(parents=True,exist_ok=True)
    now=tree(Path("."),ROM+"Model");old=tree(H,ROM+"Model");assert now==old and len(now)>60000
    pngs=tree(H,"assets/images/")
    sources=collections.defaultdict(list); records={}; stats=collections.Counter()
    hist=H/"assets/evidence"
    def add(src,png,brti,sha,pngsha,w,h,report,fmt="",mip="",member="",offset="",kind=""):
        assert src in now and png in pngs,(src,png)
        assert re.fullmatch("[0-9a-f]{64}",sha) and re.fullmatch("[0-9a-f]{64}",pngsha)
        assert brti==Path(png).stem and int(w)>0 and int(h)>0,(src,brti,png)
        family,stem=Path(src).name.removesuffix(SUF).removeprefix("Layout_").split("_",1)
        assert stem==brti,(src,brti)
        if sources[src]:assert sources[src][0]["source_sha256"]==sha,src
        key=(src,png,pngsha)
        if key in records:
            r=records[key];r["reports"]+=";"+report
            for k,v in [("format_hex",fmt),("mip_count",mip),("member",member),("bntx_offset",offset)]:
                if v!="" and r[k]=="":r[k]=v
            return
        r=dict(source_path=src,source_git_blob=now[src],family=family,brti_name=brti,source_sha256=sha,png_path=png,png_git_blob=pngs[png],png_sha256=pngsha,width=w,height=h,format_hex=fmt,mip_count=mip,member=member,bntx_offset=offset,reports=report,historical_commit=REF,pixel_rehashed_now=0,runtime_verified=0)
        records[key]=r;sources[src].append(r)
    files=sorted((hist/"rom-items").glob("batch-[0-9][0-9][0-9][0-9][0-9]-[0-9][0-9][0-9][0-9][0-9].json"))
    assert len(files)==53
    seen=set()
    for file in files:
        for r in js(file)["items"]:
            assert r["source_path"] not in seen;seen.add(r["source_path"])
            assert r["status"] in {"new_original_rom_icon","existing_identical_png","existing_cdn_preserved_native_separately"} and r["native_texture_count"]==1
            png=r.get("output_path") or ("assets/images/items/"+r["filename"] if r["status"]=="existing_identical_png" else "")
            add(r["source_path"],png,r["native_brti_name"],r["source_sha256"],r["native_png_sha256"],r["width"],r["height"],str(file.relative_to(H)))
    assert len(seen)==26277
    vill=[]
    def ingest(file,key,isvill=False):
        for r in js(file)[key]:
            assert r["status"]=="one_original_rom_texture_exported" and len(r["pngs"])==1
            p=r["pngs"][0];brti=p["native_brti_name_at_same_index_candidate"];bn=r.get("bntx",[]);t=bn[0]["native_brti"][0] if len(bn)==1 and len(bn[0]["native_brti"])==1 else {}
            add(r["source"],p["output"],brti,r["original_source_sha256"],p["sha256"],p["width"],p["height"],str(file.relative_to(H)),t.get("format_hex",""),t.get("mip_count",""),bn[0].get("member","") if bn else "",bn[0].get("embedded_offset","") if bn else "")
            if isvill:vill.append((r["category"],r["source"],p["output"],brti))
    for file in sorted((hist/"rom-villager").glob("batch-*.json")):ingest(file,"results",True)
    assert len(vill)==1934 and len({x[1] for x in vill})==1934
    assert collections.Counter(x[0] for x in vill)=={"photo":481,"icon":488,"poster":486,"bromide_item":479}
    ingest(hist/"rom-other-layout/report.json","results")
    ingest(hist/"rom-clothing-layout/reconciliation.json","source_records")
    ingest(hist/"rom-softdrink/report.json","source_records")
    for file in sorted((hist/"rom-completeness/native-layout-batches").glob("*.json")):
        if re.fullmatch(r"(FtrIcon|GardeningIcon|ClosetIcon)-\d{5}-\d{5}\.json",file.name):ingest(file,"entries")
    for fam,n in {"FtrIcon":25794,"ClosetIcon":5480,"NpcIcon":488,"GardeningIcon":383}.items():
        expected={s for s in now if s.startswith(ROM+"Model/Layout_"+fam+"_") and s.endswith(SUF)}
        assert len(expected)==n and expected<=sources.keys(),(fam,len(expected-sources.keys()))
    raw=sorted(records.values(),key=lambda r:(r["family"],r["source_path"],r["png_path"],r["png_sha256"]))
    write("source-png.csv",raw)
    items=read("research/catalog/item.csv");assert len(items)==11178
    byid={r["item_id"]:r for r in items}
    loc={r["item_id"]:r for r in read("research/catalog/item_locale.csv") if r["locale"]=="CNzh"};assert len(loc)==len(items)
    def name(i):return loc[i]["display_name"]
    def attach(r,p):
        hit=sources.get(p,[])
        if not hit:return [dict(**r,source_path=p,brti_name="",png_path="",png_sha256="",source_sha256="",width="",height="",historical_png_status="no_historical_report_for_path")]
        return [dict(**r,source_path=p,brti_name=x["brti_name"],png_path=x["png_path"],png_sha256=x["png_sha256"],source_sha256=x["source_sha256"],width=x["width"],height=x["height"],historical_png_status="historical_verified_png") for x in hit]
    il=[];vl=[];sl=[]
    for r in read("research/image-catalog/item-icon-links.csv"):
        i=r["item_id"];p=ROM+r["path"] if r["path"] else ""
        if p:assert now[p]==r["git_blob"]
        il+=attach(dict(item_id=i,name_CNzh=name(i),name_evidence=loc[i]["association_status"],res_name=r["res_name"],family=r["family"],mapping_status=r["status"],runtime_verified=0),p)
    for r in read("research/image-catalog/variant-icon-links.csv"):
        i=r["item_id"];p=ROM+r["path"] if r["path"] else ""
        if p:assert now[p]==r["git_blob"]
        vl+=attach(dict(item_id=i,name_CNzh=name(i),res_name=byid[i]["res_name"],remake_id=r["remake_id"],body_index=r["body_index"],fabric_index=r["fabric_index"],fabric_mode=r["fabric_mode"],expected_path=ROM+r["expected_path"],mapping_status=r["status"],runtime_verified=0),p)
    for r in read("research/catalog/variants/variant_slot.csv"):
        p=r["model_path_candidate"];blob=r["model_git_blob"];i=r["item_id"]
        if blob:assert now[p]==blob
        sl.append(dict(item_id=i,name_CNzh=name(i),res_name=byid[i]["res_name"],remake_id=r["remake_id"],axis=r["axis"],slot=r["slot"],expected_path=p,source_path=p if blob else "",source_git_blob=blob,role="material_not_composite_icon",status="path_exists" if blob else "missing_path"))
    write("item-image.csv",il);write("variant-image.csv",vl);write("variant-material.csv",sl)
    # Current original BCSV identity; historical R82 names are separately labelled.
    npc={}; keys=collections.defaultdict(set)
    for typ,table,count in [("normal","NmlNpcParam",417),("special","SpNpcParam",74)]:
        rr=read("research/bcsv-data/named/"+table+".csv");assert len(rr)==count
        for r in rr:
            s=r["ResName"];assert s not in npc
            npc[s]=dict(npc_type=typ,npc_id=r["UniqueID"],source_row=r["_row_index"],res_name=s,poster_item_id=r["PosterItemID"],bromide_item_id=r["BromideItemID"],name_CNzh="",name_evidence="")
            keys[re.sub(r"^Npc(Nml|Sp)","",s).lower()].add(s)
    oldnpc=read(H/"assets/evidence/rom-database/r82-villagers-source-enriched.csv")
    assert len(oldnpc)==491
    for r in oldnpc:
        n=npc[r["res_name"]];assert n["npc_id"]==str(int(r["unique_id"])) and n["npc_type"]==r["npc_type"]
        n["name_CNzh"]=r["name_CNzh"];n["name_evidence"]="historical_R82:"+r["name_status"]
    nl=[]; matched=set()
    for cat,p,png,brti in vill:
        token=brti
        if cat=="icon":k=keys.get(brti.lower(),set());token=next(iter(k)) if len(k)==1 else ""
        elif cat=="poster":token=brti.removeprefix("Poster")
        elif cat=="bromide_item":token=brti.removeprefix("Bromide").removesuffix("_Remake_0_0")
        n=npc.get(token)
        if n:matched.add(token)
        rec=next(x for x in sources[p] if x["png_path"]==png)
        itemid=n["poster_item_id"] if n and cat=="poster" else n["bromide_item_id"] if n and cat=="bromide_item" else ""
        # Record BCSV item-ID linkage separately; a suffix match is not a runtime rule.
        nl.append(dict(category=cat,npc_res_name=token if n else "",npc_type=n["npc_type"] if n else "",npc_id=n["npc_id"] if n else "",name_CNzh=n["name_CNzh"] if n else "",name_evidence=n["name_evidence"] if n else "",related_item_id=itemid,related_item_exists=int(itemid in byid),source_path=p,brti_name=brti,png_path=png,source_sha256=rec["source_sha256"],png_sha256=rec["png_sha256"],width=rec["width"],height=rec["height"],status="exact_resname_or_unique_npc_key" if n else "unlinked",runtime_verified=0))
    write("npc-image.csv",nl);write("npc.csv",list(npc.values()))
    # Markdown shards: full source-to-PNG, complete item/variant/material indexes, NPC images.
    def page_index(stem,title,rows,cols,n,render):
        pages=[]
        for start,part in chunks(rows,n):
            fn=f"{stem}-{start//n+1:03d}.md";pages.append((fn,start,len(part)))
            lines=["# "+title+" "+str(start//n+1),"","返回 [映射总目录](README.md) · [图片专题](../README.md)。","","| "+" | ".join(cols)+" |","| "+" | ".join(["---"]*len(cols))+" |"]
            for r in part:lines.append("| "+" | ".join(render(r))+" |")
            save(DOC/fn,lines)
        save(DOC/(stem+".md"),["# "+title,"","返回 [映射总目录](README.md)。","",f"共 {len(rows)} 条记录；原始像素证据是历史报告，未在本轮重新解码。",""]+[f"- [{title} {i+1}（{start+1}–{start+count}）]({fn})" for i,(fn,start,count) in enumerate(pages)])
        return len(pages)
    npage=page_index("Source","ZS → BRTI → PNG",raw,["原始 ZS","BRTI","历史 PNG","宽×高","格式"],250,lambda r:[link(r["source_path"]),esc(r["brti_name"]),link(r["png_path"]),f'{r["width"]}×{r["height"]}',esc(r["format_hex"]) or "未记录"])
    def itemrow(r):return [esc(r["item_id"]),esc(r["name_CNzh"]),esc(r["res_name"]),esc(r["family"]),link(r["source_path"]),link(r["png_path"]),esc(r["mapping_status"])]
    ipage=page_index("Item","道具 ItemID → ZS → PNG",sorted(il,key=lambda r:(int(r["item_id"]),r["source_path"],r["png_path"])),["ItemID","简中名","ResName","家族","ZS","PNG","关联状态"],200,itemrow)
    vpage=page_index("Variant","改造组合 → ZS → PNG",sorted(vl,key=lambda r:(int(r["item_id"]),int(r["body_index"]),int(r["fabric_index"]),r["png_path"])),["ItemID","简中名","本体/布料","实际 ZS / 预期路径","PNG","状态"],200,lambda r:[r["item_id"],esc(r["name_CNzh"]),r["body_index"]+"/"+r["fabric_index"],link(r["source_path"]) if r["source_path"] else esc(Path(r["expected_path"]).name),link(r["png_path"]),esc(r["mapping_status"])])
    mpage=page_index("Material","本体/布料材质源",sorted(sl,key=lambda r:(int(r["item_id"]),r["axis"],int(r["slot"]))),["ItemID","简中名","轴/索引","实际 ZS / 预期路径","状态"],250,lambda r:[r["item_id"],esc(r["name_CNzh"]),r["axis"]+"/"+r["slot"],link(r["source_path"]) if r["source_path"] else esc(Path(r["expected_path"]).name),r["status"]])
    np=page_index("NPC","村民 ResName → ZS → PNG",sorted(nl,key=lambda r:(r["npc_res_name"] or "~",r["category"],r["brti_name"])),["NPC","简中名","图片类别","道具ID","原始 ZS","历史 PNG","关联状态"],150,lambda r:[esc(r["npc_res_name"]) or "未关联",esc(r["name_CNzh"]),r["category"],esc(r["related_item_id"]),link(r["source_path"]),link(r["png_path"]),r["status"]])
    # Separate NPC roster includes characters with no exact image association.
    rp=page_index("NPC-Roster","原版 NPC 身份与图片覆盖",sorted(npc.values(),key=lambda r:(r["npc_type"],int(r["source_row"]))),["类型","ID","ResName","简中名","海报ID","照片道具ID","图片关联"],150,lambda r:[r["npc_type"],r["npc_id"],esc(r["res_name"]),esc(r["name_CNzh"]),r["poster_item_id"],r["bromide_item_id"],"有精确候选" if r["res_name"] in matched else "无精确关联"])
    report=dict(historical_commit=REF,original_model_tree_equal=True,historical_source_png_rows=len(raw),unique_original_sources=len(sources),four_family_sources=32145,villager_image_rows=len(nl),npc_count=len(npc),npc_linked_images=sum(bool(r["npc_res_name"]) for r in nl),npc_with_link=len(matched),item_rows=len(il),items_with_historical_png=len({r["item_id"] for r in il if r["png_path"]}),variant_rows=len(vl),variant_candidates_with_historical_png=len({(r["item_id"],r["body_index"],r["fabric_index"],r["fabric_mode"]) for r in vl if r["png_path"]}),material_slots=len(sl),generated_detail_pages=npage+ipage+vpage+mpage+np+rp,pixels_rehashed_now=False,runtime_verified=False)
    (OUT/"summary.json").write_text(json.dumps(report,ensure_ascii=False,indent=2)+"\n")
    save(DOC/"README.md",["# ZS、道具、款式与村民 PNG 全量映射","","返回 [图片专题](../README.md) · [知识库首页](../../../README.md)。","","原始 Model Git 树与固定历史提交完全一致。每条 PNG 来源来自历史原版提取报告，并检查历史 Git 中真实 PNG 路径；本轮未重解码、未验证运行时选图。","", "| 入口 | 范围 |","| --- | --- |","| [ZS → PNG](Source.md) | 原始文件、BRTI、真实导出图、尺寸、格式 |","| [道具 → PNG](Item.md) | ItemID、简中名、ResName、资源族 |","| [改造组合](Variant.md) | body/fabric、组合图标、缺失候选 |","| [改造材质](Material.md) | ReBody/ReFabric，非成品图标 |","| [村民图片](NPC.md) | 四类村民图片与原始身份 |","| [原版 NPC 名册](NPC-Roster.md) | 491 条身份，包含无匹配记录 |","","CSV/JSON：[机器可读映射](https://github.com/969981/ACNH_Resources/tree/research/research/image-mapping)。","","## 实际构建统计","","| 指标 | 数量 |","| --- | ---: |"]+[f"| {k} | {v} |" for k,v in report.items() if type(v)==int])
    print(json.dumps(report,ensure_ascii=False))
if __name__=="__main__":main()
