"""Audit native resource routing, shared RemakeID image counterexamples, and model rendering inputs."""
import csv,json,collections,hashlib,zlib,sys,re,subprocess
from pathlib import Path
from urllib.parse import quote
R="e10617820db06889e1638499478da0de_NCA/1/"
H=Path("historical");REF="f09e15460d02790060a374b2ad6ba569ba9b97ed"
BASE="https://github.com/969981/ACNH_Resources/blob/"+REF+"/"
O=Path("research/image-mapping/native-selection");DOC=Path("docs/Sources/Images/Native-Resource-Selection.md")
def read(p):
    with Path(p).open(encoding="utf-8-sig",newline="") as f:return list(csv.DictReader(f))
def write(name,rs):
    assert rs,name
    with (O/name).open("w",encoding="utf-8-sig",newline="") as f:
        w=csv.DictWriter(f,fieldnames=list(rs[0]));w.writeheader();w.writerows(rs)
def sha(b):return hashlib.sha256(b).hexdigest()
def crc(s):return zlib.crc32(s.encode())&0xffffffff
def esc(s):return str(s or "").replace("|","\\|").replace("\n"," ")
def link(p):return "["+esc(Path(p).name)+"]("+BASE+quote(p,safe="/")+")" if p else "—"
def main():
    O.mkdir(parents=True,exist_ok=True)
    data=Path("research/bcsv-data/named");m=Path("research/image-mapping");res=m/"residual"
    items={r["item_id"]:r for r in read("research/catalog/item.csv")}
    raw={r["UniqueID"]:r for r in read(data/"ItemParam.csv")}
    assert len(raw)==len(items)==11178
    kinds={r["Label"]:r for r in read(data/"ItemKind.csv")};assert len(kinds)==189
    menu=read(data/"ItemMenuIcon.csv")
    menu_crc=collections.defaultdict(list);menu_id=collections.defaultdict(list)
    for r in menu:menu_crc[crc(r["Label"])].append(r);menu_id[int(r["UniqueID"])].append(r)
    source={R+r["path"]:r for r in read("research/image-catalog/source-catalog.csv")}
    prov=collections.defaultdict(set)
    for r in read(m/"source-png.csv"):prov[r["source_path"]].add(r["png_sha256"])
    suffix=".Nin_NX_NVN.zs"
    def path(stem):return R+"Model/"+stem+suffix
    def icon(stem):return path("Layout_FtrIcon_"+stem)
    # Field hash must be tied to the actual field name/type rather than guessed from offset.
    hashes={name:[t for t in ("bool","u8","s8","char","uint8","uint8_t","int8","int8_t") if crc(name+" "+t)==0x90bc0855] for name in kinds[next(iter(kinds))]}
    matches=[(k,t) for k,ts in hashes.items() for t in ts]
    anchors={"f9/01adf970":["FUN_01ae59b0","0x48ef0398","TemplateDummyFurniture1x1"],"59/01ae59b0":["PTR_DAT_04bc00c8","0x90bc0855","param_1 + 10"],"e3/01afe3e0":["FUN_01adf970","FtrBromideFrame","FtrBromideFrameWall","%sReBody%d"],"ee/01afeef4":["FUN_01adf970","%sReFabric0","%sReFabric%d"],"db/0152dba0":["FUN_01afe3e0","FUN_01afeef4","FUN_0074ed40"],"0c/01530c60":["FUN_01afe3e0","FUN_01afeef4","FUN_01664b40"],"4b/01664b40":["FUN_038fe510","plVar3[10]","plVar3[0xf]"]}
    ev={}
    for a,need in anchors.items():
        p=H/"derived/3.0.3/ghidra12.2/c"/(a+".c");b=p.read_bytes();s=b.decode();assert all(x in s for x in need),a
        ev[a]=dict(path=str(p.relative_to(H)),sha256=sha(b),anchors=need)
    (O/"native-anchors.json").write_text(json.dumps(dict(commit=REF,field_hash_90bc0855_matches=matches,functions=ev),indent=2)+"\n")
    missing=[r for r in read(res/"item-final-model-candidates.csv") if r["status"]=="unresolved"]
    assert len(missing)==53 and all(not raw[r["item_id"]]["ResName"] for r in missing)
    # Compare all table rows to infer representation, keeping CRC and ID matches separate.
    field="ItemMenu" if "ItemMenu" in next(iter(raw.values())) else "hash_348D7B06"
    assert crc("ItemMenu.hshCstringRef")==0x348d7b06 and field in next(iter(raw.values()))
    domain=collections.Counter()
    for r in raw.values():
        v=int(r[field]);domain["crc_unique"]+=len(menu_crc[v])==1;domain["id_unique"]+=len(menu_id[v])==1
    special=[];stat=collections.Counter()
    for r in missing:
        i=r["item_id"];it=raw[i];k=kinds[r["kind"]];v=int(it[field])
        ms=menu_crc[v];ids=menu_id[v]
        opts=[]
        for rule,rr in (("exact_Label_CRC32",ms),("UniqueID_candidate",ids)):
            for q in rr:
                p=path("Layout_MenuIcon_"+q["ResName"])
                if p in source:opts.append((rule,q,p))
        # Keep menu symbol separate from FtrIcon and dummy fallback conditional.
        stat["menu_path_crc" if any(a[0]=="exact_Label_CRC32" for a in opts) else "menu_path_id_only" if opts else "no_menu_path"]+=1
        for rule,q,p in opts or [("unresolved",{},"")]:
            special.append(dict(item_id=i,name_CNzh=r["name_CNzh"],kind=r["kind"],label=it["Label"],res_name=it["ResName"],capture_type_raw=k["FtrIconCaptureType"],can_ftr=k["CanFtr"],can_put=k["CanPut"],menu_icon_raw=v,menu_rule=rule,menu_label=q.get("Label",""),menu_res_name=q.get("ResName",""),menu_source_path=p,menu_source_blob=source[p]["git_blob"] if p else "",historical_png_count=len(prov.get(p,[])),product_png="",dummy_fallback_condition="FUN_01ae59b0_true_and_empty_ResName",runtime_verified=0))
    write("special-items.csv",special)
    # All shared remake definitions, comparing actual source and PNG sets for SAME coordinates.
    rem={r["item_id"]:r for r in read("research/catalog/variants/item_remake.csv")}
    groups=collections.defaultdict(list)
    for r in rem.values():groups[r["remake_id"]].append(r["item_id"])
    shared={rid:ids for rid,ids in groups.items() if len(ids)>1}
    variants=read("research/image-catalog/variant-icon-links.csv")
    combos={(r["item_id"],r["body_index"],r["fabric_index"],r["fabric_mode"]):r for r in variants}
    pair=[];cmp=collections.Counter(); examples=[]
    for r in variants:
        i=r["item_id"];rid=r["remake_id"]
        if rid not in shared:continue
        rep=rem[i]["representative_item_id"]
        if rep==i:continue
        other=combos.get((rep,r["body_index"],r["fabric_index"],r["fabric_mode"]))
        p=R+r["path"] if r["path"] else "";q=R+other["path"] if other and other["path"] else ""
        a=prov.get(p,set());b=prov.get(q,set())
        if not other:state="representative_same_slot_absent"
        elif not p or not q:state="direct_icon_missing"
        elif p==q:state="same_original_path"
        elif source[p]["git_blob"]==source[q]["git_blob"]:state="same_original_blob"
        elif a and b and a.isdisjoint(b):state="distinct_png_sha_sets"
        elif a and b and a==b:state="same_png_sha_set"
        elif a and b:state="partial_png_sha_overlap"
        else:state="distinct_source_png_unknown"
        cmp[state]+=1
        row=dict(remake_id=rid,item_id=i,representative_item_id=rep,kind=rem[i]["kind"],res_name=items[i]["res_name"],representative_res_name=items.get(rep,{}).get("res_name",""),body_index=r["body_index"],fabric_index=r["fabric_index"],fabric_mode=r["fabric_mode"],direct_path=p,representative_path=q,direct_png_sha=";".join(sorted(a)),representative_png_sha=";".join(sorted(b)),comparison=state,automatic_substitution_allowed=0)
        pair.append(row)
        if state=="distinct_png_sha_sets" and len(examples)<12:examples.append(row)
    write("shared-remake-comparison.csv",pair)
    # Specific render test cases: actual BFRES/BNTX inputs for all 10 gaps, not renders.
    sys.path.insert(0,str(H/"Scripts"))
    import acnh_formats as af
    from probe_acnh_babybed_textures import nested_files,valid_bntx_slices,parse_bntx
    modelrows=read(res/"variant-final-model-candidates.csv");paths=sorted({r["model_path"] for r in modelrows if r["model_path"]})
    samples=[];texture=[];assert len(paths)==12
    for p in paths:
        b=Path(p).read_bytes();assert hashlib.sha1(("blob "+str(len(b))+"\0").encode()+b).hexdigest()==source[p]["git_blob"]
        entry=dict(path=p,source_sha256=sha(b),bytes=len(b),leaves=[],textures=[],fmdl_magic_offsets=[],fmat_magic_offsets=[])
        for member,data2 in nested_files(b,p,af):
            kind=af.detect(data2);entry["leaves"].append(dict(member=member,kind=kind,bytes=len(data2)))
            if kind=="bfres":
                for key,magic in (("fmdl_magic_offsets",b"FMDL"),("fmat_magic_offsets",b"FMAT")):
                    entry[key].extend(x.start() for x in re.finditer(magic,data2))
            for off,bn in ([(0,data2)] if kind=="bntx" else valid_bntx_slices(data2)):
                for t in parse_bntx(bn):
                    entry["textures"].append(dict(member=member,bntx_offset=off,**t))
                    texture.append(dict(source_path=p,source_sha256=entry["source_sha256"],member=member,bntx_offset=off,**t))
        samples.append(entry)
    write("render-textures.csv",texture)
    (O/"render-inputs.json").write_text(json.dumps(samples,ensure_ascii=False,indent=2)+"\n")
    plan=[]
    for i,b,f in sorted({(r["item_id"],r["body_index"],r["fabric_index"]) for r in modelrows}):
        stem=items[i]["res_name"];base=path(stem)
        body=path(stem+"ReBody"+b);fabric=path(stem+"ReFabric"+f)
        plan.append(dict(item_id=i,body_index=b,fabric_index=f,base=base,body=body if body in paths else "",fabric=fabric if fabric in paths else "",capture_preset=items[i]["capture_preset"],render_status="not_rendered",camera_verified=0,shader_verified=0))
    assert len(plan)==10
    write("render-plan.csv",plan)
    summary=dict(special_items=53,special_empty_resname=53,menu_field=field,menu_reference_domain=dict(domain),special_menu_paths=dict(stat),kind_field_hash_90bc0855=matches,shared_remake_groups=len(shared),shared_remake_items=sum(map(len,shared.values())),representative_slot_comparisons=len(pair),comparison=dict(cmp),render_model_sources=len(samples),render_texture_descriptors=len(texture),render_cases=len(plan),actual_rendered_pngs=0,runtime_verified=False)
    (O/"summary.json").write_text(json.dumps(summary,ensure_ascii=False,indent=2)+"\n")
    lines=["# 特殊道具原生资源选择、共享改造图标与模型渲染输入","","返回 [图片专题](README.md) · [图片映射](Image-File-Mapping.md) · [改造款式](../../Items/Native-Variants.md) · [知识库首页](../../README.md)。","","## 原生消费证据","","FUN_01adf970：读取 ItemParam hash 48EF0398 (ResName)，只有 FUN_01ae59b0 返回真且字符串空时使用 TemplateDummyFurniture1x1；不能对所有空 ResName 自动使用占位模型。FUN_01ae59b0 查类别索引缓存及 90BC0855，并受 wrapper+10 bit5 影响，不能简化为无条件 CanFtr。","","FUN_01afe3e0 / 01afeef4 生成本体/布料名；0152dba0 预加载，01530c60 查实际资源并经 01664b40 更新材质纹理绑定。照片有单独的 FtrBromideFrame/Wall 分支。该路径证明模型材质选择，不证明 UI 图标选择。","","## 53 个特殊物品","","| ItemID | 名称 | Kind | 菜单图标引用 | 菜单 ZS | 证据 |","| --- | --- | --- | --- | --- | --- |"]
    lines+=["| "+" | ".join([r["item_id"],esc(r["name_CNzh"]),r["kind"],str(r["menu_icon_raw"]),link(r["menu_source_path"]),r["menu_rule"]])+" |" for r in special]
    lines+=["","菜单图标是库存/UI 符号候选，不是物品完整外观，未输出冒充商品的 PNG。","","## 共享 RemakeID 对账","","| 状态 | 数量 |","| --- | ---: |"]+[f"| {k} | {v} |" for k,v in cmp.items()]
    lines+=["","以下为真实原版路径不同且历史 PNG SHA 集合不相交的反例。哈希差异不单独证明视觉差异，但足以拒绝字节等价假设。","","| ItemID | 代表物品 | 款式 | 自身 ZS | 代表 ZS |","| --- | --- | --- | --- | --- |"]
    lines+=["| "+" | ".join([r["item_id"],r["representative_item_id"],r["body_index"]+"/"+r["fabric_index"],link(r["direct_path"]),link(r["representative_path"])])+" |" for r in examples]
    lines+=["","## 10 个模型渲染试验输入","","| ItemID | Body/Fabric | 基础模型 | 本体 | 布料 |","| --- | --- | --- | --- | --- |"]
    lines+=["| "+" | ".join([r["item_id"],r["body_index"]+"/"+r["fabric_index"],link(r["base"]),link(r["body"]),link(r["fabric"])])+" |" for r in plan]
    lines+=["","原版模型实际解压与纹理描述读取，不等于已完成 FMDL 顶点/索引、FMAT shader、骨骼、色彩空间、相机、光照和透明背景的渲染。FMDL/FMAT magic 命中仅为定位线索。后续以已存在的 Babybed 原版图标为基准校准相机和渲染；生成 PNG 单独存储为 derived_render，不覆盖原版。","","[数据及完整证据](https://github.com/969981/ACNH_Resources/tree/research/research/image-mapping/native-selection)。","","实际汇总：", "",'~~~json',json.dumps(summary,ensure_ascii=False,indent=2),'~~~']
    DOC.write_text("\n".join(lines)+"\n",encoding="utf-8");print(json.dumps(summary,ensure_ascii=False))
if __name__=="__main__":main()
