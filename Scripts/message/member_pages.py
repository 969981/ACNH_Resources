"""Generate one independent evidence page per original MSBT family/path."""
import json, re, hashlib, collections
from pathlib import Path
from member_docs import DATA, DOC, OUT, FAMILY, read_csv, sha, esc, main as base_index

def safe(v):
    return esc(v).replace("[","&#91;").replace("]","&#93;").replace(chr(96),"&#96;")
def display(r):
    if not r: return "—"
    val=json.loads(r["display_text_json"])
    if val is None: return "未安全解码"
    return safe(val[:400]+("…（截断）" if len(val)>400 else ""))
def filename(path):
    base=re.sub(r"[^A-Za-z0-9_.-]","_",Path(path).stem)[:96] or "member"
    return base+"-"+hashlib.sha256(path.encode()).hexdigest()[:12]+".md"
def main():
    base_index()
    index_path=DATA/"member-purpose-index.json"
    index=json.loads(index_path.read_text(encoding="utf-8"))
    manifest=json.loads((DATA/"manifest.json").read_text())["files"]
    archives={r["id"]:r for r in read_csv(DATA/"archive.csv")}
    members=collections.defaultdict(dict)
    for r in read_csv(DATA/"member.csv"):
        a=archives[r["archive_id"]]
        if r["format"]=="msbt" and r["status"]=="parsed":
            members[a["family"],r["path"]][a["locale"]]=r
    assert len(members)==3086 and all(len(v)==14 for v in members.values())
    byfam=collections.defaultdict(list)
    for item in index["members"]: byfam[item["family"]].append(item)
    total_samples=0; sample_pages=0
    for fam,items in byfam.items():
        rows=collections.defaultdict(list)
        for r in read_csv(DATA/f"entries/{fam}_CNzh.csv.gz"): rows[r["member"]].append(r)
        selected={}
        for path,rr in rows.items():
            rr.sort(key=lambda x:int(x["text_index"]))
            assert len({x["text_index"] for x in rr})==len(rr)
            chosen=range(len(rr)) if len(rr)<=8 else sorted({0,1,len(rr)//2,len(rr)-2,len(rr)-1})
            selected[path]=[rr[i] for i in chosen]
        wanted={p:{l[0] for r in rr for l in json.loads(r["labels_json"])} for p,rr in selected.items()}
        other={}
        for loc in ("JPja","USen"):
            p=f"entries/{fam}_{loc}.csv.gz"
            assert sha(DATA/p)==manifest[p]["stored_sha256"],p
            for r in read_csv(DATA/p):
                for label in json.loads(r["labels_json"]):
                    if label[0] in wanted.get(r["member"],set()):
                        k=r["member"],loc,label[0]
                        other[k]=None if k in other else r
        folder=OUT/fam; folder.mkdir(exist_ok=True)
        links={}
        for item in items:
            path=item["member"]; zh=item["zh"]; status=item["evidence"]; name=filename(path)
            locs=members[fam,path]; rr=selected.get(path,[])
            assert len(rows[path])==item["cnzh_entries"],path
            total_samples+=len(rr);sample_pages+=bool(rr)
            lines=[f"# {safe(path)} — {safe(zh)}","","返回 [归档目录](../"+fam+".md) · [全部 MSBT](../README.md) · [Message 专题](../../README.md) · [知识库首页](../../../../README.md)。","",
                   "## 一、原始文件与内容说明","","| 属性 | 内容 |","| --- | --- |",
                   f"| 中文名称及用途 | {safe(zh)} |",f"| 证据等级 | {safe(status)}；原生触发条件另行验证 |",
                   f"| 原版内部路径 | {safe(path)} |",f"| 原版归档 | {fam}_语言代码.sarc.zs |",
                   f"| 语言成员 | {len(locs)} |",f"| CNzh 文本条数 | {item['cnzh_entries']} |",
                   "| 文件格式 | MSBT / MsgStdBn；LBL1 标签，TXT2 文本 |","",
                   "## 二、原版语言文件与结构","","每种语言的归档来源、内部成员 SHA256 及实际节结构。MSBT 位于 SARC 内部，不是独立 Git 文件。","",
                   "| 语言 | 原始归档 | MSBT 字节数 | 成员 SHA256 | 节（起点:大小） |","| --- | --- | ---: | --- | --- |"]
            for loc,r in sorted(locs.items()):
                a=archives[r["archive_id"]]
                url="https://github.com/969981/ACNH_Resources/blob/daaf993a593ff128fa5cd66ced73a0b7ccc219b4/"+a["path"]
                sec=", ".join(f"{tag} {off}:{size}" for tag,off,size,*_ in json.loads(r["sections_json"]))
                lines.append(f"| {loc} | [{fam}_{loc}.sarc.zs]({url}) | {r['bytes']} | {r['sha256']} | {safe(sec)} |")
            lines+=["","## 三、实际原版文本内容","","小文件（<=8 条）展示全部 CNzh 文本，大文件取首、中、末等 5 条样本。JPja/USen 按原始标签唯一匹配；不按顺序猜测。显示文本省略控制码，不渲染变量；超过400字符的样本明确截断。","",
                    "| TXT2 索引 | 原始 LBL1 标签 | CNzh 原文 | JPja 原文 | USen 原文 | 控制码数 | TXT2 偏移 |","| ---: | --- | --- | --- | --- | ---: | ---: |"]
            for r in rr:
                ls=json.loads(r["labels_json"]); label=ls[0][0] if ls else ""
                lines.append("| "+" | ".join((r["text_index"],safe("、".join(l[0] for l in ls)),display(r),display(other.get((path,"JPja",label))),display(other.get((path,"USen",label))),str(len(json.loads(r["controls_json"]))),r["txt2_offset"]))+" |")
            if not rr: lines.append("| — | — | 无 CNzh 文本 | — | — | — | — |")
            lines+=["","## 四、业务关联与完整数据","","原版文本和标签是实际解析证据；用途是文件词典或文件名候选，不等同原生消费者确认。完整条目、原始 TXT2 字节和控制码可在 CSV 按 member 精确筛选。","",
                    "[MSBT 标签生成规则](../../Native-Label-Rules.md) · [业务映射](../../Business-Mapping.md) · [BCSV 专题](../../../BCSV/README.md)。","",
                    f"[CNzh 全量 CSV.gz](../../../../../research/message-data/entries/{fam}_CNzh.csv.gz) · [JPja](../../../../../research/message-data/entries/{fam}_JPja.csv.gz) · [USen](../../../../../research/message-data/entries/{fam}_USen.csv.gz) · [全量数据库](../../Text-Database.md)。",""]
            assert name not in links.values()
            (folder/name).write_text("\n".join(lines)+"\n",encoding="utf-8")
            links[path]=name
            item["document"]=f"docs/Sources/Message/Members/{fam}/{name}"
            item["sample_count"]=len(rr)
        p=OUT/(fam+".md")
        content=p.read_text(encoding="utf-8")
        for path,name in links.items():
            old="| "+esc(path)+" |"
            assert content.count(old)==1,(fam,path)
            content=content.replace(old,"| ["+esc(path)+"]("+fam+"/"+name+") |")
        p.write_text(content,encoding="utf-8")
    assert len(list(OUT.glob("*/*.md")))==len(index["members"])==3086
    index["summary"].update(individual_markdown_pages=3086,sampled_pages=sample_pages,cnzh_sample_rows=total_samples)
    index_path.write_text(json.dumps(index,ensure_ascii=False,indent=2)+"\n",encoding="utf-8")
    p=OUT/"README.md"
    p.write_text(p.read_text(encoding="utf-8")+"\n## 独立原始文件说明\n\n3,086 份 Markdown，每个 family/path 一页；从各归档目录点击原始文件名进入。每页包含 14 语言原始成员信息、实际文本及标签样例、用途说明和完整数据库链接。\n",encoding="utf-8")
    print(json.dumps(index["summary"],ensure_ascii=False))
if __name__=="__main__": main()
