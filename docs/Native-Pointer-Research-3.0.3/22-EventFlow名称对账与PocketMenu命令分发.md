---
title: EventFlow 名称对账与 PocketMenu 命令分发
version: 3.0.3
updated: 2026-11-24
tags: [ACNH, Native, EventFlow, PocketMenu, ELF, RELR]
status: static-chain-verified
runtime_verified: false
---
# EventFlow 名称对账与 PocketMenu 命令分发

[[21-EventFlow构造链与选择结果生产者验收]] · [[20-背包查找删除语义与EventFlow工厂审计]] · [[19-共享选择结果对象与扣减回调重定位]]

## 1. 实际产物验收

全部地址为 Ghidra VA，Main RVA=VA-0x100000。原始 NSO SHA256 68c7fbeda353f8e4a283eac6a9b99e713e72a327048214bf6a4e7214616b87c1，ELF SHA256 145903c25d37a7c90e8818440bcf462b3dca490e11e45cf435605ab00d709664；Build ID ff1d1c05670db6021c85b624a710b96300000000000000000000000000000000。重新读取 R100 SQLite，查询原始 RELR，实际下载以下 CI 产物并复算 SHA256：

|CI run|artifact|ZIP SHA256|
|---|---|---|
|45331794062|14892486427|09567e63711f8abd819c8978333aa262c701e6efeecf33d771205a9d40dfaf9f|
|45332582509|14891569537|75a264a567db1212a620da29635a980ddf4a6e4de34414199383ad706094ec45|
|45332650597|14891979401|7726bbc54dd22e27f6207ad5147e53205ddcdc9a0ab3f0653b1222df20cd0538|

最终run head 4a40c064aaf0c738b810115c188e6aa4107a287d，success；266入口/锚点，35969匹配指令记录，99 gap（包含并行研究，记录可重复）。本轮没有运行时验证。

## 2. 七项 EventFlow 名称全部对账

使用 Scripts/acnh303_delivery_factory_audit.py 遍历实际UnPack/1/EventFlow JSON图，收集事件action与actor声明中EventFlowAction前缀名称，Murmur3 x86_32 seed0逐项匹配原始16字节记录。875 graph，1201不同名称，0 JSON parse error，7项均恰好一个匹配。不是对未知的完整游戏名称空间宣称全局无碰撞。

|原生名称（公共前缀EventFlowAction）|hash|记录VA|构造入口|业务入口|来源文件数|
|---|---|---|---|---|---:|
|SystemDeletePlayerItem|2E485D5F|0497B8F0|011089F8|00DA8F70|19|
|DeleteSelectUIItem|36406CCC|0497BB20|0110A8B4|00D97E30|3|
|PynDeleteTargetExchangeEgg|881A7311|0497D480|01122264|00C04EE0|1|
|MncBoxSetMaterialCount|9B9E46C6|0497DA20|011273CC|00C31AE0|1|
|DeleteTargetItem|D47C0E73|0497EC30|01137FB0|00D982B0|14|
|DeleteSelectedSettlerQuestInsideMaterial|EE6C2097|0497F400|0113F544|00DD7A70|1|
|UIItemSelectWindowHandling|80F8F65E|0497D220|01120120|未在本专项重新验收|46|

独立读取原版样例：
- NNPC_GEvent_Easter.json blob b97d40c9049e8a72730fe2ed6015facc437f7b76 index96，DeleteSelectUIItem，DeleteNum=3。
- SNPC_pyn_02_EasterDay.json blob b120933f5aa0928dc6cb85a33cacb99e6533fb0a index140，PynDeleteTargetExchangeEgg，actor MainNpc，params为空。
- Obj_WherearenMncBox.json blob 2e77b1a43b355ac8fea6b958d36daabcf9eedc62 index14，MncBoxSetMaterialCount，params为空。
- Obj_ReservedPlaceBox.json blob 9ed1379f8feb41c0c4f5b822213106a1bf341ab0 共9个匹配事件，index407/409/411/413的参数InsideMaterialType与SettlerType分别(0,0)/(1,0)/(2,1)/(2,0)。

六组新增扣减业务回调均已由前轮工厂记录+8 RELR、构造器实际vtable写入和执行槽+58建立强静态名称绑定。不是普通地面PutUnitIcon持久化证明。全局工厂发布和实际运行分发未验收。

## 3. PocketMenu 输入注册和槽位字段

03187560原始指令（374记录/0 gap）从布局对象self+210的+430/+434维度及+438数组按0x20步长查找记录并填入：
|VA|bytes|instruction|
|---|---|---|
|031875F0|8b2a0010|adr x11,#0x3087b40|
|0318761C|4815088b|add x8,x10,x8,lsl #5|
|03187620|0b7d01a9|stp x11,xzr,[x8,#0x10]|
|03187624|094d00a9|stp x9,x19,[x8]|

记录+0为包装器地址候选，+8 owner，+10成员回调，+18调整值0。非下文0x10业务表。
03187B40有562记录/2 gap；输入event+8控件指针匹配布局+590/+630两组40槽，成功03187BD0/BD4/BD8将索引写self+1C515；失败03187BBC/BC0/BC4/BC8写FF。原始bytes 756a2e38及696a2838。031884B0/03188650/031886C0分别在03188568/031886A0/03188710写self+1C518，并对+1C51A标志OR4/8/10h。控件比较来源同类，标志的真实输入事件名仍需验证。

## 4. 1C514 实际动态写入者恢复

03189918.c blob 0e0f3fce3f1bf974d4fb44976a7fbedade75951a：PocketMenu 20态注册，state3=State::cPlay，entry 0318AA80，update 0318B3F0。注意与另一套PutUnitIcon FSM state3不同。

0318AA80 603条匹配记录/0 gap，在0318AAA4 add x11,x0,#0x1c,lsl#12；0318AAAC add x21,x11,#0x4fc；0318B150 mov w8,#0xff；0318B154 a8620039 strb w8,[x21,#0x18]，故实际清self+1C514。随后03194070、03194E00、03193D24刷新。

0318B3F0 715条匹配记录/1 gap（0318BA4C间接BR）。0318B414 add x8,x0,#0x1c,lsl#12；0318B41C add x23,x8,#0x4e8。以下三处均可从该入口到达，x23+2c=self+1C514，x23+30=self+1C518：
|VA|instruction|数据流|
|---|---|---|
|0318B474|ldrsb w22,[x23,#0x30]|输入槽位|
|0318B48C|and w21,w22,#0xff|低字节|
|0318B964|strb w21,[x23,#0x2c]|转发输入槽位|
|0318BABC|ldrb w8,[x23,#0x30]|输入槽位|
|0318BAC4|strb w8,[x23,#0x2c]|直接转发|
|0318BC48|ldrb w8,[x23,#0x30]|输入槽位|
|0318BC4C|strb w8,[x23,#0x2c]|直接转发|
|0318BD20|ldrsb w22,[x23,#0x2c]|后续操作消费|

因此已获得 UI 输入控件→1C518→cPlay update→1C514→五处D90结果生产者的静态字段链，非实际用户交互的动态跟踪。1C515独立输入索引不能混用。实时高亮仍需独立观测。

短窗口全text扫描另得到5处寄存器索引存储候选：03187BC8/03187BD8写1C515；0318C5CC/03190180写1C517；0318EC0C写1C50C。该扫描没有命中1C514的三处跨基本块写入；它们由原始CFG中同一基址寄存器追踪得到，证明局部模式扫描不足以穷尽写入者。

## 5. 59项业务回调表与实际分发

原始表区域04B06728先有三个连续RELR代码槽031736C8、031736F4、03173720；其后04B06740..04B06AE0每0x10一条。实际导出59项完整16字节，42个不同回调，59项伴随u64全部为0、无伴随重定位。指针值来自原始相对重定位，不是运行时绝对地址。

0318C5F8（cProcCommand update）157条/1 gap。读取self+218关联对象+26C9，按记录+168取得当前命令值；在0318C728调用0317D490。原版C [0317D490](../../derived/3.0.3/ghidra12.2/c/d4/0317d490.c) blob 1eebccf595a6d482567961b78e17dcfdc830853d，使用一次性初始化guard DAT_056FF808，59条8字节整数映射，始址DAT_056FF62C，匹配命令后返回+4 index，不匹配FFFFFFFF。待原始机器码逐项核对这份C映射。

|VA|bytes|instruction|
|---|---|---|
|0318C728|5ac3ff97|bl #0x307d490|
|0318C734|c0010054|b.eq #0x308c76c|
|0318C73C|c9cb00d0|adrp x9,#0x4a06000|
|0318C740|29011d91|add x9,x9,#0x740|
|0318C744|2a11088b|add x10,x9,x8,lsl #4|
|0318C748|1fed0071|cmp w8,#0x3b|
|0318C74C|4931899a|csel x9,x10,x9,lo|
|0318C750|282540a9|ldp x8,x9,[x9]|
|0318C754|6006898b|add x0,x19,x9,asr #1|
|0318C758|69000036|tbz w9,#0,#0x308c764|
|0318C75C|090040f9|ldr x9,[x0]|
|0318C760|286968f8|ldr x8,[x9,x8]|
|0318C764|00013fd6|blr x8|
|0318C768|80fd0736|tbz w0,#0,#0x308c718|

实际分发符合成员函数指针+this调整值的记录结构。59个伴随值为0，因此这批实际表项走直接成员函数指针路径；保留一般虚调用路径语义。命令映射返回FFFFFFFF会绕过该表。原始代码还有针对slot值0x2a的特殊分支，不应把上面分发简化为所有命令必走。
完整表见artifact FactoryAudit/factory_audit.json callback_records。五个结果写入入口在表 index18/19 (03175840)、26/27/28 (03176698)、33 (03177480)、35 (03178514)。

031724BC另有真实地址形成 add x22,x22,#0x728 对应04B06728，最近C导出031722F8实际仅return，R100前驱重定位入口候选0317244C。未声称该处所属函数或注册语义已确认。下一轮需要核验0317244C与0317D490原始CFG。C映射中输入0xA对应index0xE，不能将其直接认作ItemUIContextMenu.csv的PutUnitIcon字段10；也不能将cPlay state3混同PutUnitIcon FSM state3。

## 6. 复现工具及边界

7bd0e5c CI sparse checkout新增EventFlow资源；649e9b5新增名称和59项记录对账；4a40c06新增寄存器索引写入和回调表地址候选扫描。最后CI 45332650597 已下载验收，见第1节。后续优先验证59个命令数值映射原始字节、0317244C入口及前三个公共回调、正常地面放置对应命令分支、Field事务独立证据。正式Build ID数据库与生产派送实现保持不变。
