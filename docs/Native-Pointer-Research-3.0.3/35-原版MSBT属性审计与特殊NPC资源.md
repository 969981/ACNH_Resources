---
title: 原版MSBT属性审计与特殊NPC资源
version: 3.0.3
updated: 2026-11-24
status: static-partial
runtime_verified: false
tags: [ACNH, MSBT, ATR1, TalkNNpc, TalkSNpc]
---
# 原版 MSBT 属性审计与特殊 NPC 资源
[[34-选项属性分发与Ready消息续接]] · [[33-选项标识来源与MSBT文本处理]]

## 1. 原版文件范围
仓库3.0.3_Unpack的 e10617820db06889e1638499478da0de_NCA/1/Message 目录实际列出TalkNNpc、TalkSNpc各14种语言的压缩归档，共28份：JPja,USen,USes,USfr,EUen,EUes,EUfr,EUde,EUit,EUnl,EUru,KRko,CNzh,TWzh。CNzh普通归档2391061字节/blob e0aad9eac88586fba312f2b3876d9a0369296135；特殊归档778727字节/blob 4a0c31932f5bcd4988eea3fd898f8957b99f6aa6。存在性证据不等于已解析ATR1。

## 2. 原版属性宽度与消费者
R34 artifact14899794443（SHA256 9957ceb3501835ae9d594ccc61fc906aa9221c3f01ff704087ea22a7adea3974）Functions/FUN_*.json 中6个reader各171条/0gap。原始上限比较：
|schema|reader VA|比较VA|bytes|最大宽度|
|---:|---|---|---|---:|
|1|01B977E0|01B978D8|1f210071|8|
|2|01B97A90|01B97B88|1f110071|4|
|3|01B97D40|01B97E38|1f0d0071|3|
|5|01B97FF0|01B980E8|1f090071|2|
|6|01B982A0|01B98398|1f050071|1|
|7|01B98550|01B98648|1f210071|8|
reader按实际ATR stride复制到输出结构；未读取字节不能据此认定已清零。Schema1输出A+4，因此ATR+0为续接标识u16，ATR+2为mode，ATR+4为辅助enum；Schema2输出A+C，因此ATR+0为mode、ATR+2为辅助enum。01B9CBC0读取模式，01B97400读取辅助值；01B9CD50/01B9D2D0/01BF8800仅对schema1使用u16续接标识。schema2不得套用schema1标识解析。
Ghidra C依据01B97A90 blob ef735c2dec01cabc1963b499474d317e3d179d61、01B97D40 blob 64ad5829f0eeedfe417728d86e003c99a60fe5cf、01B982A0 blob 0489fcc45ce8ca67bc16e55c05562a1590f961b7。

## 3. 独立原版MSBT审计
Scripts/acnh303_dialogue_msbt_audit.py（commit 8eef9fc303d21c40f90dc4b5f4864044b23c8354），.github/workflows/acnh303-dialogue-msbt-audit.yml（commit 0c63805f6d2f1d5da71e18a542e13b9be1d96380）。不修改现有acnh_formats.py；复用SARC与zstd解压，独立审计MSBT。保留LBL1所有标签别名、文本索引、原bucket、u32 hash；每条ATR原始字节和TXT2原始字节（包含控制码，不声称已还原显示文本）；缺ATR/长度不足时字段NULL；schema1非零u16生成%03d目标候选，记录同文件目标是否存在；schema2不生成这种边。ATR与TXT2数量差异独立报告，不静默丢弃额外ATR。按(category,member,label)与JPja进行原始属性对账；文件名筛选仅候选，不证明NPC控制链。
输出 artifacts/acnh303-dialogue-msbt/dialogue_msbt.sqlite3 与 summary.json。SQLite表archives/files/messages/labels/attribute_edges/errors，保留源路径/压缩SHA256/member SHA256/实际stride/encoding/section长度。检查quick_check、28归档覆盖、解析异常、label哈希bucket匹配。测试含大小端、同索引标签别名、schema1/2属性、截断拒绝。CI Run [45352855792](https://github.com/969981/ACNH_Resources/actions/runs/45352855792) py_compile及selftest均已通过；全28归档解析与跨语言对账尚在执行。当前没有实测记录数、ATR分布、目标命中率，等待真实产物验收。

## 4. 机场角色原版身份
UnPack/1/Bcsv/SpNpcParam.csv（blob 346e01b2f533470b92e748385f17935f019e71d0）记录序号58 NpcSpDod、62 NpcSpDoc。原版 VTrigDict/CNzh_keyword.csv（blob 2fd5aa10742dea58d15cf93d3185514284ac67f7）及 USen_keyword.csv（blob 1214b5076d9248620acaf6cfd17bf493fe1cb5d1）的检索记录分别含id dod/ORVILLE/莫里/Orville，doc/WILBUR/陆德里/Wilbur；关联基于原版资源名称后缀和词典id。尚未读取实际对应TalkSNpc member、场景事件及EventFlow绑定。不能仅按文件名推断机场业务状态机。

## 5. 验收边界
原版资源审计代码与CI已入库。原始属性字节≠最终UI显示文本，%03d同文件目标命中≠实机执行，schema2的业务分支及EventFlow结束仍需继续追踪。ChatId、TextSpeed、IsChatEnded、0x7000及生产指针保持未确认，不改生产表。
