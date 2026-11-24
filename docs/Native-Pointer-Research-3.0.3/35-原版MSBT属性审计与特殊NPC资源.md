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


## 6. 同轮追加：28份真实归档全部验收（覆盖第3节待执行状态）
[Run 45352855792](https://github.com/969981/ACNH_Resources/actions/runs/45352855792) success；[Artifact 14901455884](https://github.com/969981/ACNH_Resources/actions/runs/45352855792/artifacts/14901455884) 实际下载 ZIP 113919912字节，SHA256 cdc348f394c9ee129c179430205ef9f84b99233f174584854521648e3bf6830f 与GitHub digest一致。解包SQLite 360910848字节，以只读URI再次执行PRAGMA quick_check，结果ok。
|类别|归档|MSBT|消息|单语言消息|ATR1 stride|
|---|---:|---:|---:|---:|---:|
|TalkNNpc|14|25270|752570|53755|8|
|TalkSNpc|14|8120|297738|21267|4|
|合计|28|33390|1050308|75022|—|
labels=1050308，errors=0，bucket mismatch=0，missing ATR1=0，ATR/TXT2 count mismatch=0，alias excess=0。以(category,member,label)对JPja进行跨语言原始属性比较：TalkNNpc 698815/698815完全一致，TalkSNpc 276471/276471完全一致，合计975286/975286。匹配覆盖对应基准记录，不将字节一致推断为Heap地址一致。
schema1非零u16生成的同文件目标候选9520条，9492命中、28未命中；其中choice suffix候选3416条全部命中。单语言680/678，choice suffix 244/244。真实CNzh例：B1_Bo/Free/BO_FreeA_Questions.msbt，001 ATR1=0000030100000000，001_a=0200000000000000→002，001_b=0300000000000000→003，001_c=0400000000000000→004；目标存在且属性记录均已读取。两条未命中模式（每种语言重复）：B1_Bo/Free/BO_FreeG_Visitor.msbt 与 G3_Ot/Free/OT_FreeG_Visitor.msbt 的003，属性0900000100000000，目标009。未匹配不等于解析错误，跨资源/特殊路径尚待研究。

## 7. 机场特殊NPC实际文件清单
按TalkSNpc中doc/、dod/前缀逐语言查询：每种语言17个MSBT、919条消息、132条非零choice mode记录，全部14语言数量一致。每种语言合计模式分布0:787,1:7,2:61,3:1,4:32,6:24,8:5,11:1,12:1。11/12为dispatcher的特殊模式，不直接等价于生成选项数量。
|文件|消息数|非零mode|
|---|---:|---:|
|doc/SP_doc_30_Flight_Announce.msbt|7|0|
|doc/SP_doc_31_Flight_WherearenAnnounce.msbt|6|0|
|doc/SP_doc_51_MysteryTour.msbt|72|15|
|doc/SP_doc_52_CommuneIsland.msbt|64|9|
|doc/SP_doc_53_Wherearen.msbt|42|8|
|doc/SP_doc_Amiibo.msbt|3|0|
|doc/SP_doc_Spot_WherearenGarden.msbt|87|12|
|doc/SP_doc_Spot_WherearenMainField.msbt|4|0|
|doc/SP_doc_Spot_WherearenOrder.msbt|9|1|
|dod/SP_dod_41_MultiPlayInet.msbt|50|9|
|dod/SP_dod_50_PostOffice.msbt|99|12|
|dod/SP_dod_99_Select.msbt|65|0|
|dod/SP_dod_AirPort.msbt|308|53|
|dod/SP_dod_Amiibo.msbt|3|0|
|dod/SP_dod_Spot_WherearenGarden.msbt|87|12|
|dod/SP_dod_Spot_WherearenMainField.msbt|4|0|
|dod/SP_dod_Spot_WherearenOrder.msbt|9|1|
其中AirPort及MultiPlayInet为机场联机资源候选；尚未证明EventFlow actor/action与消息标签的实际绑定，不将资源文件目录直接认定为运行时操作顺序。schema2四字节原始记录与其reader完全符合，不能从schema1的u16构造同类续接边。下一步应提取特殊NPC事件脚本和其调用消息的实际参数，再关联该库的归档/文件/标签。

可复现SQL（只读）：
```sql
SELECT a.locale, count(DISTINCT f.id), count(*),
       sum(m.choice_mode BETWEEN 1 AND 23)
FROM archives a JOIN files f ON a.id=f.archive_id
JOIN messages m ON f.id=m.file_id
WHERE a.category='TalkSNpc'
 AND (f.name LIKE 'doc/%' OR f.name LIKE 'dod/%')
GROUP BY a.locale ORDER BY a.locale;
```
结构化证据更新commit c0682634143b94eaaf4a4a05842192d4a349375a。全库保留原始文本字节及控制码，不宣称已完成控制码语义渲染。runtime_verified=false，production_eligible=false；旧Heap字段映射、机场事件结束通知、实机验证仍未闭合。
