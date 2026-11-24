---
title: PocketMenu 二十状态与事件消费链
version: 3.0.3
updated: 2026-11-24
status: registered-state-evidence
runtime_verified: false
tags: [ACNH, UI, ELF, PocketMenu, StateMachine]
---
# PocketMenu 二十状态与事件消费链

[[21-PocketMenu专用页面回调与共享状态机]] · [[20-七组跳转表与背包索引证据]]

## 1. 实际 CI 验收

[Run 45331794062](https://github.com/969981/ACNH_Resources/actions/runs/45331794062) success，head b669614cba7c33adce2da4b252f3d2fb324a8482；本轮实际下载 [artifact 14892486427](https://github.com/969981/ACNH_Resources/actions/runs/45331794062/artifacts/14892486427) 并校验 ZIP SHA256 09567e63711f8abd819c8978333aa262c701e6efeecf33d771205a9d40dfaf9f，与 GitHub digest 一致。220入口、28242指令记录、86 CFG gaps。原始NSO/ELF双字节匹配由CI执行，本轮未重解码全部源二进制；VA=RVA+100000。

### 四项跳转表 03188724

28 rows/0 gap（上一版16/1），RVA0408415E，原始4字节 09 00 04 06，BR VA03188750。
|输入event+10|目标VA|行为|
|---|---|---|
|0|03188778|OR 2|
|1|03188754|self+1C4FC==0时OR1，否则返回0|
|2|03188764|OR 80h|
|3|0318876C|OR 400h|
|其他|03188784|不写位图|

|VA|bytes|instruction|
|---|---|---|
|03188724|2a1040b9|ldr w10,[x1,#10]|
|03188728|5f0d0071|cmp w10,#3|
|03188734|6b790591|add x11,x11,#15e|
|0318873C|6d696a38|ldrb w13,[x11,x10]|
|03188748|08f11391|add x8,x8,#4fc|
|0318874C|49008052|mov w9,#2|
|03188750|80011fd6|br x12|
|03188754|090140b9|ldr w9,[x8]|
|03188758|e9000034|cbz w9,03188774|
|03188764|09108052|mov w9,#80h|
|0318876C|09808052|mov w9,#400h|
|03188774|29008052|mov w9,#1|
|03188778|0a3d4079|ldrh w10,[x8,#1e]|
|0318877C|4901092a|orr w9,w10,w9|
|03188780|093d0079|strh w9,[x8,#1e]|
|03188784|08b041b9|ldr w8,[x0,#1b0]|
|03188788|1f0d0071|cmp w8,#3|
|0318878C|e0179f1a|cset w0,eq|

x8=self+1C4FC，故+1e=1C51A。最后判断 current state==3；实际状态注册中3=cPlay。不能以事件0..3猜测物理键位。 

## 2. 二十个原版状态

实际读取 [03189918.c](../../derived/3.0.3/ghidra12.2/c/99/03189918.c) blob 0e0f3fce3f1bf974d4fb44976a7fbedade75951a（333行）。R100 SQLite quick_check=ok，PocketMenu VTable RVA4A06E28+1E0=VA03189918（RELR），故该函数归属已确认。FUN_03EBAC90(state,14h,0,0,0) 注册20条，03EBAF40为名称注册；record stride40h，+0 VTable VA04B071F0、+8 owner、+10 entry target、+18 adjustment=0、+20 update target、+28 adjustment=0、+30/+38=0（未注册第三个回调）。

|ID|原版名称|entry VA|update VA|
|---:|---|---|---|
|0|cInit|NULL|03189ffc|
|1|cIdle|0318a260|0318a7e0|
|2|cAppear|0318a850|0318a8dc|
|3|cPlay|0318aa80|0318b3f0|
|4|cDisappear|0318bf20|0318c468|
|5|cCommandSelect|0318c4c4|0318c590|
|6|cCommandSelect2nd|0318c4c4|0318c590|
|7|cProcCommand|0318c5c4|0318c5f8|
|8|cDrag|0318c870|0318ca40|
|9|cEndDrag|0318e2f8|0318e3b0|
|10|cLookPlayerInfo|0318e510|0318eca0|
|11|cPutItemForInterior|0318f4bc|0318f534|
|12|cErrorWindow|0318f5b8|0318f698|
|13|cCommonDialog|0318f6e4|0318f9d4|
|14|cWaitPlayerAction|0318fb44|0318fb60|
|15|cChangeEditLayer|0318fbb4|0318fda8|
|16|cChangeWallRight|0318fbb4|0318fda8|
|17|cChangeWallLeft|0318fbb4|0318fda8|
|18|cSellToPurchaseBox|0318fe00|0318ffb0|
|19|cInsectCheckWin|0319001c|031901cc|

共39个非空登记槽、33个不同目标（5/6与15/16/17共享）；所有名称来自同一个原版注册C，不适用于TalkSeq。注册末尾 state+21=1, state+10=old current, +14=old counter, +8=initial ID, +C=0，若非FFFFFFFF则调用record首槽。R100 wrapper RVA4A071F0 slots +0/+8/+10→VA03197DCC/03197DF8/03197E24。

## 3. 事件到物品操作的已证边界

03187B40（562 rows/2 gap）先匹配事件+8与40个组件，03187BD8 写 self+1C515，然后03187BDC 读取状态，03187BE0比较8。现有名称证据表明8=cDrag。若未匹配或处于cDrag，走 self+258的vtable+B0尾调用；正常匹配分支检查组件+2C3 bit0再依容量调用02677EA0。该路径证明1C515和焦点事件相关且用于物品展示数据，但尚不证明每次方向键输入均触发。1C514非初始化 writer仍未取得，不能以焦点缓存代替操作锁存。

原始产物220入口中按 literal/拆分常量快速检索1C514/515/518/51A及相关偏移，确认既有回调写入、构造初始化和操作消费者，不能认定为全程序穷尽数据流。下一步以实际33个状态回调、尤其cPlay update 0318B3F0/cDrag update 0318CA40/cCommandSelect entry 0318C4C4/cProcCommand update 0318C5F8为类型绑定入口进行有界CFG分析。

## 4. 页面资源名字和组件映射

实际读取 [03184880.c](../../derived/3.0.3/ghidra12.2/c/48/03184880.c) blob 8a115143f35d653851774c08e70e1b8acde9c90c，R100 page vtable4A06B00+C8→03184880；03184CA0 blob bf25a707f2e8616eb63babfc7d5ae3f29f0920e3 为page+D8。

|page offset|名称|索引|
|---|---|---|
|590|/L_Btn_%02d|0..19|
|630|/L_BtnBag_%02d|20..39（名称内部0..19）|
|6D0|/L_ChgClothBtn_00|40|
|6D8|/L_TextBtn_00|41|
|6E0|/L_BellBtn_00|42|
|6E8|/L_DragBtn_00|独立拖动呈现|
|6F0|/L_ExchangeBtn_00|独立交换呈现|
|6F8|/L_BG_00|背景|
|700|/L_PokiBtn_00|Poki组件|

正常40槽和3个特殊按钮均注册其+218的节点进 page+210所指对象+48的 intrusive list（head、backlink、count/node offset），而非凭UI坐标猜测索引。03184CA0 还初始化 page+570/+578/+580/+588四个输入配置对象，通过0385AD38及类型门禁。其语义仍待具体消费者确定。

## 5. 本轮新导出

commit a5fdfc8e3a1d1a627a4e279c014df5ee61ef7ada 新增46个原版入口，含33个独立状态回调和注册/资源/包装函数；Run 45332618441 首次查询仍in_progress。不能将已注册地址当成已恢复原始CFG。完整回调、1C518/51A消费者、1C514运行时writer尚待新产物验证。无实机证据，不更改正式指针映射。
