"""Generate loss-aware per-family MSBT original member documentation from archived data."""
import csv, gzip, hashlib, json, re
from collections import Counter, defaultdict
from pathlib import Path

ROOT=Path(__file__).resolve().parents[2]
DATA=ROOT/"research/message-data"
DOC=ROOT/"docs/Sources/Message"
OUT=DOC/"Members"
FAMILY={
"Dialog":"对话窗口或消息文本","LayoutMsg":"界面布局文字","Mail":"邮件文本与模板","String":"常用名称及词条",
"System":"系统消息","TalkFtr":"家具交互对话","TalkNNpc":"普通村民对话","TalkObj":"场景物件交互对话",
"TalkSNpc":"特殊NPC对话","TalkSys":"系统交互对话","Tutorials":"教程及操作提示"}
TOKENS={"birthday":"生日","event":"活动","shop":"商店","museum":"博物馆","airport":"机场","island":"岛屿","friend":"好友","visit":"访问","move":"搬家","house":"房屋","room":"房间","recipe":"配方","craft":"制作","item":"道具","fish":"鱼类","insect":"昆虫","fossil":"化石","art":"艺术品","ftr":"家具","remake":"改造","clothes":"服装","outfit":"服装搭配","color":"颜色","name":"名称","mail":"邮件","gift":"赠礼","reward":"奖励","greeting":"问候","greet":"问候","talk":"对话","tutorial":"教程","select":"选择","menu":"菜单","save":"存档","error":"错误","notice":"通知","quest":"任务","request":"请求","daily":"日常","season":"季节","winter":"冬季","summer":"夏季","spring":"春季","autumn":"秋季","weather":"天气","camp":"露营","hotel":"旅馆","photo":"照片","design":"设计","garden":"园艺","player":"玩家","trade":"交易","buy":"购买","sell":"出售","payment":"支付","title":"标题","button":"按钮","result":"结果","confirm":"确认","help":"帮助","guide":"指南","change":"更改","intro":"介绍","first":"初次","common":"通用","system":"系统","cooking":"料理","cook":"料理","hha":"快乐家协会","wherearen":"度假群岛","nook":"狸克","reaction":"表情","stamp":"集章","door":"门","floor":"地板","wall":"墙面","music":"音乐","race":"种族","npc":"NPC","birthdayparty":"生日派对"}
LOCALES={"CNzh","TWzh","JPja","USen","EUen","KRko","EUde","EUfr","EUes","EUit","EUnl","EUru","USes","USfr"}
def read_csv(p):
    opener=gzip.open if p.suffix==".gz" else open
    with opener(p,"rt",encoding="utf-8-sig",newline="") as f: yield from csv.DictReader(f)
def sha(p):
    h=hashlib.sha256()
    with p.open("rb") as f:
        for b in iter(lambda:f.read(1024*1024),b""): h.update(b)
    return h.hexdigest()
def esc(s):
    return str(s).replace("|","\\|").replace("\r"," ").replace("\n"," ").replace("<","&lt;").replace(">","&gt;")
def purpose(fam,path,known):
    if fam=="String" and path in known: return known[path],"既有 String 中文词典"
    tokens=re.findall(r"[A-Z]+(?=[A-Z][a-z]|[0-9]|$)|[A-Z]?[a-z]+|[A-Z]+",path.removesuffix(".msbt"))
    hints=list(dict.fromkeys(TOKENS[t.lower()] for t in tokens if t.lower() in TOKENS))
    return FAMILY[fam]+("；名称线索："+ "、".join(hints) if hints else "；具体触发情境未识别"),"归档/文件名候选"
def main():
    manifest=json.loads((DATA/"manifest.json").read_text())["files"]
    summary=json.loads((DATA/"summary.json").read_text())
    inputs=["archive.csv","member.csv"]+[f"entries/{f}_CNzh.csv.gz" for f in FAMILY]
    for p in inputs:
        assert sha(DATA/p)==manifest[p]["stored_sha256"],p
    archive={r["id"]:r for r in read_csv(DATA/"archive.csv")}
    assert len(archive)==155
    assert Counter(r["family"] for r in archive.values() if r["status"]=="parsed")=={f:14 for f in FAMILY}
    members=defaultdict(dict); counts=Counter()
    for r in read_csv(DATA/"member.csv"):
        a=archive[r["archive_id"]]
        if r["format"]!="msbt" or r["status"]!="parsed": continue
        fam,loc=a["family"],a["locale"]; k=fam,r["path"]
        assert loc not in members[k];members[k][loc]=r; counts[fam]+=1
    assert sum(counts.values())==summary["stats"]["parsed"]==43204
    assert all(counts[f]==summary["families"][f]["parsed"] for f in FAMILY)
    known={}
    for l in (DOC/"String-Member-Index.md").read_text(encoding="utf-8").splitlines():
        m=re.match(r"^\| `(.+?\.msbt)` \| \d+ \| (.*?) \|",l)
        if m: known[m[1]]=m[2]
    assert len(known)==133
    samples={}; textcounts=Counter()
    for fam in FAMILY:
        for r in read_csv(DATA/f"entries/{fam}_CNzh.csv.gz"):
            k=fam,r["member"]
            assert k in members and "CNzh" in members[k]
            textcounts[k]+=1
            if k not in samples:
                labels=json.loads(r["labels_json"])
                label=labels[0][0] if labels else ""
                samples[k]=label
    OUT.mkdir(exist_ok=True)
    result=[]
    for fam,desc in FAMILY.items():
        rows=[(k,v) for k,v in sorted(members.items()) if k[0]==fam]
        lines=[f"# {fam} — {desc}","","返回 [全部 MSBT 原始文件](README.md) · [Message 专题](../README.md) · [知识库首页](../../../README.md)。","",
               f"原版归档：`{fam}_<locale>.sarc.zs`。{len(rows)} 种不同内部路径，{counts[fam]} 个语言成员。中文说明为研究用途，不等于原生调用语义确认。CNzh 记录数来自已归档 TXT2 明细；标签为首条原版 LBL1 标签示例。","",
               "| 原版 MSBT 内部路径 | 中文用途说明 | CNzh 条数 | 语言数 | 原版标签样例 | 证据 |",
               "| --- | --- | ---: | ---: | --- | --- |"]
        for k,locs in rows:
            _,path=k; zh,status=purpose(fam,path,known);n=textcounts[k] if "CNzh" in locs else "—"
            lines.append("| "+" | ".join(esc(x) for x in (path,zh,n,len(locs),samples.get(k,"—"),status))+" |")
            result.append(dict(family=fam,member=path,zh=zh,evidence=status,cnzh_entries=n,
                               locales=sorted(locs),first_cnzh_label=samples.get(k),source_cnzh_sha256=locs.get("CNzh",{}).get("sha256")))
        (OUT/(fam+".md")).write_text("\n".join(lines)+"\n",encoding="utf-8")
    index=["# MSBT 原始文件全量中文目录","","返回 [知识库首页](../../../README.md) · [Message 专题](../README.md) · [原版归档](../Archive-Index.md) · [格式](../MSBT.md)。","",
           "从原始 155 个 Message 文件（154 个语言归档、1 个 App.msbp 项目文件）解压出的全部已解析 MSBT。按归档族和原版内部路径去重；各语言成员数独立统计。","",
           "| 归档 | 中文用途 | 不同路径 | 语言成员数 | CNzh 文本数 | 14 语言文本总数 |","| --- | --- | ---: | ---: | ---: | ---: |"]
    for fam,desc in FAMILY.items():
        index.append(f"| [{fam}]({fam}.md) | {desc} | {sum(k[0]==fam for k in members)} | {counts[fam]} | {sum(v for k,v in textcounts.items() if k[0]==fam)} | {summary['families'][fam]['entries']} |")
    index+=["",f"合计 {len(members)} 种 family/path、{sum(counts.values())} 个 MSBT 语言成员；全语言 TXT2 记录 {summary['stats']['entries']}。","",
            "用途证据分层：String 复用既有中文用途说明，其余依据归档与文件名线索，不能从名称推断确切触发条件。原始标签帮助定位文本，业务消费者仍待逐项验证。App.msbp 仅清点，非 MSBT。","",
            "[机器可读目录](../../../../research/message-data/member-purpose-index.json) · [全量文本数据库](../Text-Database.md) · [标签规则](../Native-Label-Rules.md)。"]
    (OUT/"README.md").write_text("\n".join(index)+"\n",encoding="utf-8")
    report=dict(unique_members=len(members),localized_members=sum(counts.values()),family_counts=dict(counts),
                cnzh_entries=sum(textcounts.values()),all_entries=summary["stats"]["entries"],
                full_14_locale_paths=sum(set(v)==LOCALES for v in members.values()),
                string_existing_purpose=len(known),name_based_purpose=len(members)-len(known))
    (DATA/"member-purpose-index.json").write_text(json.dumps(dict(summary=report,members=result),ensure_ascii=False,indent=2)+"\n",encoding="utf-8")
    print(json.dumps(report,ensure_ascii=False))
if __name__=="__main__": main()
