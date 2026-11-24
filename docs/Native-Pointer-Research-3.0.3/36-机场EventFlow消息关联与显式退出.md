---
title: 机场EventFlow消息关联与显式退出
version: 3.0.3
updated: 2026-11-24
status: static-partial
runtime_verified: false
tags: [ACNH, EventFlow, BFEVFL, MSBT, dialogue]
---
# 机场 EventFlow 消息关联与显式退出
[[35-原版MSBT属性审计与特殊NPC资源]] · [[34-选项属性分发与Ready消息续接]]

## 1. 原版输入和范围
原版目录 e10617820db06889e1638499478da0de_NCA/1/EventFlow 的 GitHub 目录清单876条。直接以base64取得10个原版BFEVFL，读取v3 LE header（0x0300, BOM FEFF）、flowchart pointer、Actor记录stride38h、事件stride28h、entry point stride20h、DIC键及参数container；每个事件索引和actor/action/query索引检查边界。另取得同名UnPack/1/EventFlow/*.json供独立对账。现有图的完整节点关系仍以原版为最终依据；新复核脚本逐节点比较已提交的解码图。
|原版名称（后9项统一SNPC_dod_前缀）|Git blob SHA1|节点|入口|
|---|---|---:|---:|
|SNPC_dod_AirPort|7fdc87d3bd6d1a94a45ff2bbe7949718cc5f0703|215|23|
|01_Airport_NormalSeq|8ef112cf458d3d1bb6fa4b9f63c4380a98408eff|348|38|
|02_Airport_GateCheck|d9a54b21c0b45f7d38b1c17b00820c48a933dda1|26|4|
|10_Airport_LocalHost|0892fa1536b930255aa36f64ecbc32ec66a9237c|54|1|
|11_Airport_LocalVisitor|be8cf6e5083fadcdff4c4dbd46d8e2106382b9dc|121|5|
|20_Airport_InetHost|ddf9abf24f844ef2af92d1afb86e7970f58b9c2f|122|9|
|21_Airport_InetVisitor|5fdd43236a85073dcc242f2af36b513490809133|135|5|
|22_Airport_InstallFriendList|7e6a3374b3f522b450d91b6222a5a885ab89897c|19|2|
|30_Airport_DepartVisitor|67c5116e347544bfeca74577dcc25bd41c46c941|25|1|
|40_Airport_Wherearen|8c754873e6c6f43afe81249d0feca743d1a65977|43|4|
合计1108节点92入口。格式参考 https://zeldamods.org/wiki/Bfevfl 与 https://github.com/zeldamods/evfl ，仅作为格式理解，不作为ACNH具体事件关系证据。

## 2. 事件操作与MSBT引用对账
读取10份现有解码图统计，并使用实际原版头、节点与参数交叉检查。OpenMessageWindow 232处（IsCloseMessageWindow true 60、false 172），GeneralTalkChoice2/3/4/5 59个query节点、65条直接open→choice边（多前驱可共享同一query）。SubFlowEvent 266个（范围内264个均能解析目标entry，外部2个未纳入本次范围）。next=null节点266个，包含子图终端调用及fork分支的终点，不代表全局事务结束。直接无next的OpenMessageWindow中true13、false16。显式ExitFlowchart 6个，均next=null。
R35 artifact14901455884 的实际SQLite只读打开，SHA256 2f305599420421bec30ec44736e6dd4c4de472eca48852f8702725b55c0f754a；ZIP SHA256 cdc348f394c9ee129c179430205ef9f84b99233f174584854521648e3bf6830f。
170个唯一MessageID按category/member/label精确join：
|资源|唯一标签|14语言命中|属性差异|
|---|---:|---:|---:|
|TalkSNpc/dod/SP_dod_AirPort|139|1946|0|
|TalkSNpc/dod/SP_dod_41_MultiPlayInet|21|294|0|
|TalkSys/SYS_Network|4|未纳入R35|未知|
|TalkSys/SYS_Save|1|未纳入R35|未知|
|Dialog/DIALOG_Msg|3|未纳入R35|未知|
|Dialog/DIALOG_WherearenMsg|2|未纳入R35|未知|
160/160 NPC唯一标签覆盖14语言（2240/2240），其他10个属于范围外，不作缺失结论。未直接将文本控制码解析为最终显示内容。
原版SNPC_dod_AirPort Event7 index1 file offset480：MainNpc/OpenMessageWindow，MessageID=TalkSNpc/dod/SP_dod_AirPort:700，IsCloseMessageWindow=false，next=3。Event8 index3 offset560：GeneralTalkChoice2，cases 0→134、1→2。Event9 index2 offset520：MessageID同文件701，IsCloseMessageWindow=true，next=null。R35实际700 ATR=02000000、700_a/700_b=00000000、701=00000000，四个标签每种语言均存在。NormalSeq Event5 index2 offset464引用002，ATR=04000000（mode4，3个选项标签002_a/b/c存在），next=3；Event6 index3 offset504 QueryGeneralTalkChoice3，cases0→52、1→18、2→4。InetHost Event47 index3 offset448引用SP_dod_41_MultiPlayInet:300，ATR=04000000、300_a/b/c存在，next=4；Event48 index4 QueryGeneralTalkChoice3。已验证资源到图的关联；query返回值和UI反向索引的映射尚未取得原生消费者证据，不能仅凭a/b/c顺序推断case语义。

## 3. 显式退出动作及原生消费者（C级证据）
显式ExitFlowchart：LocalVisitor Event116(index116)、InetHost Event128(index117)、InetVisitor Event125(index116)、Wherearen Event37/41/42(index24/25/26)。均为EventFlowSystemActor，params={}，next=null。关窗true并非退出：两者为不同原生操作，且关窗后有时继续执行事件。fork分支next=null也不代表整图退出。
原版Ghidra C：
- 010F5BB0（blob 0cb5d4cfdb2106815c83dcb1cec9aa65302e4be8）初始化字符串对象DAT_050B4C08，DAT_050B4C10="EventFlowActionExitFlowchart"，并注册Player/MainNpc/SubNpc/EventFlowSystemActor等角色名。
- 010F62F0（blob 4da462e1615cbc42cc470ca47a38c898d95b059e）处理动作记录，复制上下文+28/+30/+34/+38/+40/+41，受P(P(A+48)+288)+26门禁影响；在允许路径比较动作名，匹配ExitFlowchart进入LAB_010F64D0，写U8(A+50)=1并返回1。另有非Exit动作也可跳到同一写入点，因此不能把A+50命名为唯一退出标志。
- 010F6690（blob 5598aaac2ac15b789056d49700cf6f61b5e758fa）比较ExitFlowchart名称且A+50非零时返回true；其他路径读取H=P(P(A+48)+288)，条件U32(H+20)!=0且U8(H+24)==0。具体谓词调用位置与生命周期待机器码及上层验证。
- 0070F4F0（blob 993932832b2a7b481faa72d1386c5e032126769f）通过006BD550计算动作名称hash，读取owner+2C8 count、+2D0记录表，比较记录+10 hash，选出活动动作对象并写owner+280；通过虚表方法初始化/调用及维护+2E8、H+25字段。尚无OpenMessageWindow、GeneralTalkChoice的真实native callback绑定。
新增指令入口commit 5f7540a9cef8fd06b1b329bfc0c6b14e78c0f436，CI Run 45357517998。原生动作执行和终止仍需实际机器码及动态根，runtime_verified=false。

## 4. 可复现工具
Scripts/acnh303_airport_eventflow_audit.py commit 7ffabf4b7beb4907c287c0fef1ef0cc8bdf4f156；workflow commit 92ae815b3a80d7361f7d75ec35912254548d5d45；[CI 45357509626](https://github.com/969981/ACNH_Resources/actions/runs/45357509626) 已启动。新独立脚本对原版文件SHA、BFEVFL v3各表、边/入口/动作、已有图、标量参数、R35 SQLite hash及14语言join进行验收；导出完整图JSON与报告。以上人工/工具直接读取的证据不依赖尚未验收的CI。外部两处subflow与10个系统/对话框标签留作后续扩展。保持production_eligible=false，不修改生产指针表。
