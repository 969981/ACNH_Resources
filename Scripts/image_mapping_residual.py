"""Second pass: explicit missing image candidate associations; never invent PNG or runtime bindings."""
import csv,json,collections,re
from pathlib import Path
from urllib.parse import quote
D=Path("research/image-mapping"); O=D/"residual"; DOC=Path("docs/Sources/Images/Mapping")
ROOT="e10617820db06889e1638499478da0de_NCA/1/"
REF="f09e15460d02790060a374b2ad6ba569ba9b97ed"
BASE="https://github.com/969981/ACNH_Resources/blob/"+REF+"/"
SUF=".Nin_NX_NVN.zs"
def read(p):
    with Path(p).open(encoding="utf-8-sig",newline="") as f:return list(csv.DictReader(f))
def write(p,rs):
    with p.open("w",encoding="utf-8-sig",newline="") as f:
        w=csv.DictWriter(f,fieldnames=list(rs[0]));w.writeheader();w.writerows(rs)
def esc(s):return str(s or "").replace("|","\\|").replace("[","\\[").replace("]","\\]").replace("\n"," ")
def link(p):return "["+esc(Path(p).name)+"]("+BASE+quote(p,safe="/")+")" if p else "—"
def main():
    O.mkdir(exist_ok=True);DOC.mkdir(exist_ok=True)
    items={r["item_id"]:r for r in read("research/catalog/item.csv")}
    assert len(items)==11178
    src={ROOT+r["path"]:r for r in read("research/image-catalog/source-catalog.csv")}
    prov=collections.defaultdict(list)
    for r in read(D/"source-png.csv"):prov[r["source_path"]].append(r)
    stems=collections.defaultdict(list)
    for p in src:
        if p.startswith(ROOT+"Model/Layout_") and p.endswith(SUF):
            fam,stem=Path(p).name.removesuffix(SUF).removeprefix("Layout_").split("_",1)
            stems[stem].append((fam,p))
    irows=read(D/"item-image.csv");vrows=read(D/"variant-image.csv");nrows=read(D/"npc-image.csv")
    has={r["item_id"] for r in irows if r["png_path"]}; assert len(has)==7553
    missing=set(items)-has;assert len(missing)==3625
    cn={r["item_id"]:r["name_CNzh"] for r in irows}
    rem={r["item_id"]:r for r in read("research/catalog/variants/item_remake.csv")}
    npcs=read(D/"npc.csv")
    byres=collections.defaultdict(list);bykey=collections.defaultdict(list);byitem=collections.defaultdict(list)
    for n in npcs:
        if n["res_name"]:
            byres[n["res_name"]].append(n);bykey[re.sub(r"^Npc(Nml|Sp)","",n["res_name"]).lower()].append(n)
        for fld in ("poster_item_id","bromide_item_id"):
            if n[fld] in items:byitem[(fld,n[fld])].append(n)
    # NPC names from historical roster retained; no identity inferred from translated text.
    itemres=collections.defaultdict(set)
    for i,r in items.items():
        for key in ("res_name","label"):
            if r[key]:itemres[r[key]].add(i)
    def row_candidates(i,opts,base):
        rs=[]
        for (p,rule) in sorted(opts):
            if p not in src:continue
            for im in prov.get(p,[{}]):
                rs.append(dict(**base,rule=rule,source_path=p,source_git_blob=src[p]["git_blob"],png_path=im.get("png_path",""),png_sha256=im.get("png_sha256",""),brti_name=im.get("brti_name",""),status="historical_png_candidate" if im else "source_only_candidate",runtime_verified=0))
        return rs or [dict(**base,rule="no_supported_candidate",source_path="",source_git_blob="",png_path="",png_sha256="",brti_name="",status="unresolved",runtime_verified=0)]
    def add_stem(opts,stem,rule,only_ftr=False):
        if stem:
            for fam,p in stems.get(stem,[]):
                if not only_ftr or fam=="FtrIcon":opts.add((p,rule))
    # Native Label and ResName are distinct columns; default image is application fallback only.
    il=[]; istat=collections.Counter();kindstats=collections.Counter()
    for i in sorted(missing,key=int):
        r=items[i];opts=set()
        for field in ("label","res_name"):
            s=r[field]
            add_stem(opts,s,"exact_ItemParam_"+field)
            if s:add_stem(opts,s+"_Remake_0_0","ItemParam_"+field+"_default_variant_candidate",True)
        if i in rem:
            rep=rem[i]["representative_item_id"]
            if rep!=i and rep in items:
                for f in ("res_name","label"):
                    s=items[rep][f]
                    add_stem(opts,s,"shared_RemakeID_representative_"+f)
                    if s:add_stem(opts,s+"_Remake_0_0","shared_RemakeID_representative_default",True)
        for fld,prefix,suffix in [("poster_item_id","Poster",""),("bromide_item_id","Bromide","_Remake_0_0")]:
            for n in byitem.get((fld,i),[]):
                add_stem(opts,prefix+n["res_name"]+suffix,"BCSV_NPC_"+fld,True)
        rs=row_candidates(i,opts,dict(item_id=i,name_CNzh=cn.get(i,""),kind=r["kind_label"],res_name=r["res_name"],label=r["label"]))
        il+=rs
        state="png_candidate" if any(x["png_path"] for x in rs) else "source_only" if any(x["source_path"] for x in rs) else "unresolved"
        istat[state]+=1
        if state=="unresolved":kindstats[r["kind_label"]]+=1
    vl=[];vstat=collections.Counter();vk=collections.Counter()
    gaps=[r for r in vrows if not r["png_path"]];assert len(gaps)==4049
    for r in gaps:
        i=r["item_id"];it=items[i];b=r["body_index"];f=r["fabric_index"];opts=set();end="_Remake_"+b+"_"+f
        for field in ("label","res_name"):
            s=it[field]
            if s:add_stem(opts,s+end,"ItemParam_"+field+"_same_indices",True)
        rep=rem[i]["representative_item_id"]
        if rep!=i and rep in items:
            for field in ("label","res_name"):
                s=items[rep][field]
                if s:add_stem(opts,s+end,"shared_RemakeID_representative_same_indices",True)
        # For photo-frame variants, the actual per-NPC label may differ from shared model ResName.
        for n in byitem.get(("bromide_item_id",i),[]):
            add_stem(opts,"Bromide"+n["res_name"]+end,"NPC_BromideItemID_same_indices",True)
        # Only 0/0 may use an ordinary stem as a candidate. Never substitute a different colour.
        if b=="0" and f=="0":
            for field in ("label","res_name"):add_stem(opts,it[field],"zero_zero_base_icon_candidate",True)
        rs=row_candidates(i,opts,dict(item_id=i,name_CNzh=r["name_CNzh"],kind=it["kind_label"],remake_id=r["remake_id"],body_index=b,fabric_index=f,fabric_mode=r["fabric_mode"],original_expected_path=r["expected_path"]))
        vl+=rs
        state="png_candidate" if any(x["png_path"] for x in rs) else "source_only" if any(x["source_path"] for x in rs) else "unresolved"
        vstat[state]+=1
        if state=="unresolved":vk[it["kind_label"]]+=1
    nr=[];nst=collections.Counter()
    for r in nrows:
        if r["status"]=="exact_resname_or_unique_npc_key":continue
        cat=r["category"];brti=r["brti_name"];tok=brti
        if cat=="poster":tok=brti.removeprefix("Poster")
        if cat=="bromide_item":tok=brti.removeprefix("Bromide").removesuffix("_Remake_0_0")
        opts={}
        def add(n,rule):
            k=(n["npc_type"],n["source_row"],rule);opts[k]=n
        exact=bykey.get(tok.lower(),[]) if cat=="icon" else byres.get(tok,[])
        for n in exact:add(n,"shared_exact_ResName_or_key")
        # Explicit suffix alternatives, retain separately as candidate rather than collapsing variant identity.
        if cat!="icon" and re.search(r"_\d+$",tok):
            for n in byres.get(re.sub(r"_\d+$","",tok),[]):add(n,"alternate_appearance_suffix_candidate")
        if cat=="icon" and re.search(r"[A-Z]$",tok):
            for n in bykey.get(tok[:-1].lower(),[]):add(n,"alternate_key_suffix_candidate")
        if cat!="icon" and re.search(r"[A-Z]$",tok):
            for n in byres.get(tok[:-1],[]):add(n,"alternate_resource_suffix_candidate")
        # Exact ItemParam.Label/ResName on poster/photo item, then reverse original NPC item field.
        if cat in ("poster","bromide_item"):
            name=brti.removesuffix("_Remake_0_0")
            fld="poster_item_id" if cat=="poster" else "bromide_item_id"
            for i in itemres.get(name,set()):
                for n in byitem.get((fld,i),[]):add(n,"exact_ItemParam_name_to_NPC_"+fld)
        state="shared_identity" if exact else "candidate" if opts else "generic_icon" if brti=="Villager" else "unresolved"
        nst[state]+=1
        base=dict(category=cat,brti_name=brti,source_path=r["source_path"],png_path=r["png_path"],png_sha256=r["png_sha256"],status=state,runtime_verified=0)
        for (typ,ix,rule),n in sorted(opts.items()):
            nr.append(dict(**base,npc_type=typ,npc_source_row=ix,npc_id=n["npc_id"],npc_res_name=n["res_name"],name_CNzh=n["name_CNzh"],rule=rule))
        if not opts:nr.append(dict(**base,npc_type="",npc_source_row="",npc_id="",npc_res_name="",name_CNzh="",rule="generic_not_individual" if state=="generic_icon" else "no_supported_candidate"))
    assert sum(nst.values())==29 and sum(istat.values())==3625 and sum(vstat.values())==4049
    write(O/"item-candidates.csv",il);write(O/"variant-candidates.csv",vl);write(O/"npc-candidates.csv",nr)
    # Third pass: propagate only explicitly evidenced shared NPC groups and identical PNGs.
    # Source groups are not single identity claims; all candidate rows retain the reason.
    group=collections.defaultdict(dict)
    def token(cat,brti):
        if cat=="icon":return brti.lower()
        if cat=="poster":brti=brti.removeprefix("Poster")
        if cat=="bromide_item":brti=brti.removeprefix("Bromide").removesuffix("_Remake_0_0")
        return re.sub(r"^Npc(Nml|Sp)","",brti).lower()
    identmap={(n["npc_type"],n["source_row"]):n for n in npcs}
    hashgroup=collections.defaultdict(dict)
    for r in nr:
        if r["npc_source_row"]:
            k=(r["npc_type"],r["npc_source_row"])
            group[token(r["category"],r["brti_name"])][k]=identmap[k]
            hashgroup[r["png_sha256"]][k]=identmap[k]
    for r in nrows:
        if r["status"]=="exact_resname_or_unique_npc_key":
            for n in byres.get(r["npc_res_name"],[]):
                k=(n["npc_type"],n["source_row"])
                group[token(r["category"],r["brti_name"])][k]=n
                hashgroup[r["png_sha256"]][k]=n
    lastnpc=[]; nlast=collections.Counter()
    for r in nr:
        if r["status"]!="unresolved":continue
        t=token(r["category"],r["brti_name"])
        opts={}
        for k,n in group.get(t,{}).items():opts[(k,"same_native_group_with_cross_family_identity_evidence")]=n
        for k,n in hashgroup.get(r["png_sha256"],{}).items():opts[(k,"identical_historical_PNG_SHA256_shared_image_candidate")]=n
        if t=="rcmt":
            # Explicit observed related resource names only, not a proved NPC identity.
            for k,n in group.get("rcm",{}).items():opts[(k,"rcmt_rcm_resource_stem_candidate_only")]=n
        nlast["candidate" if opts else "unresolved"]+=1
        if not opts:lastnpc.append(r)
        for (k,rule),n in sorted(opts.items()):
            lastnpc.append(dict(r,npc_type=n["npc_type"],npc_source_row=n["source_row"],npc_id=n["npc_id"],npc_res_name=n["res_name"],name_CNzh=n["name_CNzh"],rule=rule,status="shared_group_candidate"))
    assert sum(nlast.values())==6
    write(O/"npc-final-candidates.csv",lastnpc)
    # Model resources are not PNGs; preserve exact source paths for remaining IDs.
    lastitem=[];lastvariant=[];modelstats=collections.Counter();vmstats=collections.Counter()
    def modelpaths(i,b=None,f=None):
        it=items[i];out=set()
        for field in ("res_name","label"):
            stem=it[field]
            if not stem:continue
            for suffix in ([""] if b is None else ["","ReBody"+b,"ReFabric"+f]):
                p=ROOT+"Model/"+stem+suffix+SUF
                if p in src:out.add((p,"exact_"+field+("_material" if suffix else "_base_model")))
        return sorted(out)
    for r in il:
        if r["status"]!="unresolved":continue
        i=r["item_id"];ps=modelpaths(i);modelstats["model_candidate" if ps else "no_exact_model"]+=1
        for p,rule in ps or [("","no_exact_model")]:
            lastitem.append(dict(item_id=i,name_CNzh=r["name_CNzh"],kind=r["kind"],res_name=r["res_name"],label=r["label"],model_path=p,git_blob=src[p]["git_blob"] if p else "",rule=rule,png_path="",status="model_only_not_png" if p else "unresolved"))
    for r in vl:
        if r["status"]!="unresolved":continue
        ps=modelpaths(r["item_id"],r["body_index"],r["fabric_index"]);vmstats["model_candidate" if ps else "no_exact_model"]+=1
        for p,rule in ps or [("","no_exact_model")]:
            lastvariant.append(dict(item_id=r["item_id"],name_CNzh=r["name_CNzh"],kind=r["kind"],body_index=r["body_index"],fabric_index=r["fabric_index"],model_path=p,git_blob=src[p]["git_blob"] if p else "",rule=rule,png_path="",status="model_only_not_png" if p else "unresolved"))
    assert sum(modelstats.values())==383 and sum(vmstats.values())==10
    write(O/"item-final-model-candidates.csv",lastitem);write(O/"variant-final-model-candidates.csv",lastvariant)
    # Compact residual-only Markdown with every prior gap, actual paths and explicit status.
    def pages(stem,title,rs,columns,render):
        names=[]
        for start in range(0,len(rs),200):
            fn=f"{stem}-{start//200+1:03d}.md";names.append(fn)
            lines=["# "+title+" "+str(start//200+1),"","返回 [补充关联](Residual.md) · [映射总目录](README.md)。","","| "+" | ".join(columns)+" |","| "+" | ".join(["---"]*len(columns))+" |"]
            lines+=["| "+" | ".join(render(r))+" |" for r in rs[start:start+200]]
            (DOC/fn).write_text("\n".join(lines)+"\n",encoding="utf-8")
        return names
    a=pages("Residual-Item","道具缺口关联",il,["ItemID","简中名","规则","ZS","PNG","状态"],lambda r:[r["item_id"],esc(r["name_CNzh"]),r["rule"],link(r["source_path"]),link(r["png_path"]),r["status"]])
    b=pages("Residual-Variant","改造缺口关联",vl,["ItemID","本体/布料","规则","ZS","PNG","状态"],lambda r:[r["item_id"],r["body_index"]+"/"+r["fabric_index"],r["rule"],link(r["source_path"]),link(r["png_path"]),r["status"]])
    c=pages("Residual-NPC","NPC缺口关联",nr,["BRTI","NPC","原始表行","规则","ZS","PNG","状态"],lambda r:[esc(r["brti_name"]),esc(r["npc_res_name"]),r["npc_type"]+"/"+r["npc_source_row"],r["rule"],link(r["source_path"]),link(r["png_path"]),r["status"]])
    d=pages("Residual-Final-Item","最后道具缺口原始模型",lastitem,["ItemID","简中名","类别","模型 ZS","状态"],lambda r:[r["item_id"],esc(r["name_CNzh"]),esc(r["kind"]),link(r["model_path"]),r["status"]])
    e=pages("Residual-Final-Variant","最后款式缺口原始模型",lastvariant,["ItemID","本体/布料","模型 ZS","状态"],lambda r:[r["item_id"],r["body_index"]+"/"+r["fabric_index"],link(r["model_path"]),r["status"]])
    f=pages("Residual-Final-NPC","最后 NPC 缺口候选",lastnpc,["BRTI","NPC","规则","PNG","状态"],lambda r:[esc(r["brti_name"]),esc(r["npc_res_name"]),r["rule"],link(r["png_path"]),r["status"]])
    report=dict(final_npc=dict(nlast),final_item_model=dict(modelstats),final_variant_model=dict(vmstats),item_gap=3625,item=dict(istat),variant_gap=4049,variant=dict(vstat),npc_gap=29,npc=dict(nst),item_unresolved_kind=dict(kindstats),variant_unresolved_kind=dict(vk),candidate_rows=dict(item=len(il),variant=len(vl),npc=len(nr)),pages=len(a+b+c+d+e+f),runtime_verified=False,pixels_rehashed_now=False)
    (O/"summary.json").write_text(json.dumps(report,ensure_ascii=False,indent=2)+"\n",encoding="utf-8")
    lines=["# 剩余道具、款式及 NPC 图片补充关联","","返回 [全量映射](README.md) · [图片专题](../README.md) · [首页](../../../README.md)。","","原有精确关联不修改；补充候选使用 ItemParam.Label/ResName、ItemRemake 代表物品、NPC 的原始道具 ID。不同材质/图标族及同名 NPC 保留候选，不把候选当运行时已确认。","", "| 范围 | 原缺口 | PNG候选 | 仅源路径 | 未关联 |","| --- | ---: | ---: | ---: | ---: |",f"| 道具 | 3625 | {istat['png_candidate']} | {istat['source_only']} | {istat['unresolved']} |",f"| 改造 | 4049 | {vstat['png_candidate']} | {vstat['source_only']} | {vstat['unresolved']} |","","NPC："+esc(json.dumps(dict(nst),ensure_ascii=False)),"","CSV/JSON：[补充映射](https://github.com/969981/ACNH_Resources/tree/research/research/image-mapping/residual)。","","第三轮剩余资源模型关联："+esc(json.dumps({"item":dict(modelstats),"variant":dict(vmstats),"npc":dict(nlast)},ensure_ascii=False)),"","模型候选不是 PNG；NPC 跨家族与相同 SHA 证据也不等于独占身份。","","## 明细文档"]
    lines += ["- ["+x+"]("+x+")" for x in a+b+c+d+e+f]
    (DOC/"Residual.md").write_text("\n".join(lines)+"\n",encoding="utf-8")
    print(json.dumps(report,ensure_ascii=False))
if __name__=="__main__":main()
