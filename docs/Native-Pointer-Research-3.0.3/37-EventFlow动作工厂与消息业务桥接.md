---
title: EventFlow动作工厂与消息业务桥接
version: 3.0.3
updated: 2026-11-24
status: static-partial
runtime_verified: false
tags: [ACNH, EventFlow, ELF, MessageWindow]
---
# EventFlow 动作工厂与消息业务桥接
[[36-机场EventFlow消息关联与显式退出]] · [[34-选项属性分发与Ready消息续接]]

## 1. 原版验收
Run 45357517998 / artifact14903496260 ZIP SHA256 5769b225303e5416d9160a195973ea47792fba6588505f9a2b126312a89e9d08 实际下载一致。010F5BB0 115/0，010F62F0 231/0，010F6690 64/0，0070F4F0 188/0，006BD550 65/0，0068A838 69/0（含尾跳调度函数），0068A870 1/0，010F6294 21/2（已知跨函数尾跳）。
Run [45373210203](https://github.com/969981/ACNH_Resources/actions/runs/45373210203) / [artifact14909612218](https://github.com/969981/ACNH_Resources/actions/runs/45373210203/artifacts/14909612218) ZIP SHA256 68fe92dbe935dc892bd01dc3822e0ce419d8948f1c95ee03005ea4cca661ab6d 实际下载一致，816 anchors/107607 rows/278 gaps（含重叠）。R100 SQLite quick_check=ok，ELF/NSO hash及Build ID一致。VA=RVA+100000。
0070FB10 112/0，0070F160 118/0，0070FCD0 210/0，0068D480 51/1（0068D550间接跳转未展开），0068F970及0068FA40各50/0。

## 2. EventFlow运行时记录与完成回调
010F62F0明确比较ExitFlowchart字符串后写入：
|VA|bytes|instruction|
|---|---|---|
|010F64D0|20008052|mov w0,#1|
|010F64D4|80420139|strb w0,[x20,#50]|
|010F6690 内 010F6730/6740|68424139|ldrb w8,[x19,#50]|
+50并非Exit独占。010F6294接收调用记录 K，若K+29非零、P(K+10)非空、s32(K+18)>=0、P(K+20)非空、K+28==0，010F62C0写K+28=1后尾跳0068A838；另一分支010F62DC写同标志后尾跳0068A870（RET）。
|VA|bytes|instruction|
|---|---|---|
|0068A838|080840f9|ldr x8,[x0,#10]|
|0068A840|081d40f9|ldr x8,[x8,#38]|
|0068A844|09284329|ldp w9,w10,[x0,#18]|
|0068A84C|0815098b|add x8,x8,x9,lsl #5|
|0068A850|091140b9|ldr w9,[x8,#10]|
|0068A854|3f010a6b|cmp w9,w10|
|0068A85C|89008052|mov w9,#4|
|0068A860|09690039|strb w9,[x8,#1a]|
|0068A868|620a0014|b #58d1f0|
D=P(K+10)，E=P(D+38)+s32(K+18)*20h；仅当E+10与K+1C的generation值匹配时写E+1A=4，随后0068D1F0调度。D+40为记录数量，D+90重入标志、+91后续扫描请求；遍历E+1A>1调用0068D480。C显示该函数按原始事件记录+8类型处理：Action从2转3等待完成4；Switch调用query后逐case比较u32结果，命中转下一节点；下一个节点非FFFF时写E+14并回到2，更新generation；终止路径可能释放记录或传播至父记录，尚需完整机器码认证。不得将单节点完成4等同整图结束。

## 3. Receptor双工厂表及哈希
参考既有R98 derived/3.0.3/npc_event_flags/r98/evidence.json。0070F160对象名EventFlowReceptor，+278类别。0070FCD0构建Action表：0070FDA0 str w24,[x20,#2c8]，FDA4 str x0,[x20,#2d0]，FE30 BLR工厂；Query表0070FEF0/FEF4写+2D8/+2E0，0070FF80 BLR工厂。工厂参数{receptor,u32 hash}。0070F4F0和0070FB10均调用006BD550(name,0)（MurmurHash3 x86_32，机器码常量CC9E2D51、1B873593、E6546B64、85EBCA6B、C2B2AE35）。按对象+10哈希查询Action/Query表。Action vcall+40/+58，Query vcall+30返回结果。
全局工厂字段（VA / RVA）：Action count04C8DED8 / 4B8DED8，pointer04C8DEE0 / 4B8DEE0；Query count04C8DEE8 / 4B8DEE8，pointer04C8DEF0 / 4B8DEF0。类别索引VA04C8DEF8/04C8DF68。均非file-backed，不能直接当作静态指针表。RELR alias VA04BB31F8/3200/3208/3210分别对应两个count及类别索引。动态表写入者仍未闭合。

## 4. 五个Action工厂及VTable
commit 44f65c6ce717f76dcc794eb4c02ce7c4e37295f0，artifact中的dialogue_event_factories.json：对15个名称扫描所有非text映射，要求8字节对齐、16字节ELF/NSO一致、+4为0、+8有可执行RELR/RELATIVE目标；全EventFlow名称语料中命中hash均唯一。5个匹配，其他10个无同布局记录（不代表没有回调）。
|操作|hash|记录RVA|构造VA|rows/gaps|对象大小|VTable RVA|
|---|---|---|---|---|---|---|
|OpenMessageWindow|D7A099C4|487ED20|01138EF0|96/0|1B8|4833A58|
|MessageSuspend|8FF858BB|487D690|01124104|50/0|B8|48370A0|
|MessageLockNext|B663E4F7|487E2D0|0112F220|68/0|E8|484ED40|
|MessageUnlockNext|2DC50673|487B880|011083D8|49/0|B8|484EDB0|
|SetSubflowResult|D0D947B6|487EAE0|01136BDC|74/0|110|4848E10|
构造函数实际从参数+8读hash写对象+10，构造对象+8写receptor。OpenMessageWindow 01138FB8 091000b9 str w9,[x0,#10]，01139000 add x9,x9,#10；01139008 090000f9 str x9,[x0]。alias RVA4AB6540→4833A48，加10得最终VTable地址点4833A58。通过R100 RELR解出OpenMessageWindow +20=00AD948C,+30=00AD9498,+38=00ADA684,+40=00AD8904,+48=00AD8E80,+58=00AD94AC。其他：Suspend +40=00B2CB98；LockNext +58=00D4B978；UnlockNext +40=00D4BBA0；SetSubflowResult +58=00CE21F8。构造/虚表静态关联已证，运行时工厂表成员身份仍需验证。Query2/3/4/5/6/7 hash=7F083600/CF1B5F9D/672A8861/74CD8C2E/62B5EAA3/AB67A566；没有符合当前静态记录筛选条件的匹配。ExitFlowchart hash1FD29521无匹配，与独立字符串处理路径相符，但不能排除其他注册格式。

## 5. OpenMessageWindow 到消息业务的C证据
00AD8904 blob ba8241a6f7713fc300a9cc6082704aac21b64c3e；00AD8E80 blob ae8d9b03e649151532c4a7814155cb9a8e118d6c；00AD8430 blob 0651465f51a0c0ffa86c3e29b902c0e54555c4ce；00AD8794 blob 3d4acd78e83ba1e1154f8a6170f5795711c45e10。
设动作O，Receptor=P(O+8)，X=P(Receptor+290)，业务对象B'=P(X+10)，空时若P(X+20)非空则B'=P(P(X+20))。不能假定B'必然等于全局R+8，仍需验证绑定。
入口00AD8904通过O+ B8内嵌字符串接口调用00AD8430，以冒号切分MessageID、取路径最后一段和标签；01BE5D00识别归档类型。普通消息类型走00AD8794；Dialog另走02DFA190。O+152区分这两条处理路径。00AD8794调用01BE5840规范化资源名称，01C01FF0初始化描述符，虚接口将其送至B'+170，条件性附加通知，清B'+2474，最终03EBB160(B'+40,1)请求Ready，与R30–34业务状态机布局吻合。
更新00AD8E80实际检查B'+48当前状态、B'+2548结果状态和B'+254C结果值，部分条件触发O+B0=1；Dialog路径检查独立UI双请求槽及状态。当前C证据已经把EventFlow动作工厂、构造对象、VTable入口及消息业务Ready相连。注意O+B0完成状态不等于EventFlow运行时节点E+1A；尚需00ADA684及上层回调闭合，不能认定旧IsChatEnded等价字段。
新增commit a11549110d2b187a97d4b9fa084e066859970ff8 导出上述实际回调、MessageID拆分、Ready桥接及辅助函数。待独立CI验收。
runtime_verified=false，production_eligible=false。
