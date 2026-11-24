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


## 6. 同轮追加原始 CFG 验收

[Run 45332618441](https://github.com/969981/ACNH_Resources/actions/runs/45332618441) success, head a5fdfc8e3a1d1a627a4e279c014df5ee61ef7ada；实际下载 [artifact 14891729127](https://github.com/969981/ACNH_Resources/actions/runs/45332618441/artifacts/14891729127)，本地 SHA256 a9b44e5a16415425aaa56b2bab75d157884d5ed998b6b4ad2d59470bc610c358 与 digest 一致。266 anchors/35969 rows/99 gaps。全部33个独立状态回调已有原始指令；状态注册03189918为441 rows/0 gap。完整逐行证据见 Functions/FUN_<VA>.md/json。0 gap为有界CFG，不等于所有间接调用已验证。

### 6.1 owner 绑定及实际分发

02C0C3F4 的 02C0C404 01a00691 add x1,x0,#1a8；02C0C40C 08f140f9 ldr x8,[x8,#1e0]；02C0C410 00013fd6 blr x8。结合 R100 PocketMenu VTable +1E0→03189918，证实注册参数2就是 owner+1A8，而非无关状态机。

02C0C720 从 owner+1D8 获取 stride40h record，02C0C7AC 调record+0（entry），02C0C7F4 080540f9 ldr x8,[x8,#8]；02C0C7F8 00013fd6 blr x8（update）。03197DCC/03197DF8/03197E24 各11条/1个间接尾转移缺口；分别取record+10/+20/+30的二元组 (target,adjustment)，以 record+8 为 owner，在 adjustment低bit=0时直接 BR；登记值为0，故此次静态配置为直接成员回调。第三个回调在全部20条记录中为NULL。

### 6.2 cPlay update：操作索引非初始化 writer闭合

0318B3F0 715 rows/1 gap（尾跳转0318BA4C）。02C0C720更新派发与03189918状态3绑定。

|VA|bytes|instruction|语义|
|---|---|---|---|
|0318B414|08704091|add x8,x0,#1c,lsl#12|owner+1C000|
|0318B41C|17a11391|add x23,x8,#4e8|owner+1C4E8|
|0318B420|e8664079|ldrh w8,[x23,#32]|event bits 1C51A|
|0318B424|88021037|tbnz w8,#2,0318B474|mask4|
|0318B474|f6c2c039|ldrsb w22,[x23,#30]|event index 1C518|
|0318B478|df060031|cmn w22,#1|invalid FF guard|
|0318B48C|d51e0012|and w21,w22,#FF|u8 index|
|0318B964|f5b20039|strb w21,[x23,#2c]|publish action index 1C514|
|0318B9F4|48062837|tbnz w8,#5,0318BABC|mask20h|
|0318BABC|e8c24039|ldrb w8,[x23,#30]|event index|
|0318BAC4|e8b20039|strb w8,[x23,#2c]|publish action index|
|0318B9F8|a8113037|tbnz w8,#6,0318BC2C|mask40h|
|0318BC48|e8c24039|ldrb w8,[x23,#30]|event index|
|0318BC4C|e8b20039|strb w8,[x23,#2c]|publish action index|
|0318BD20|f6b2c039|ldrsb w22,[x23,#2c]|consume action index|
|0318BD30|349cd397|bl #2572e00|capacity check|
|0318BD54|53b0d397|bl #2577ea0|logical item access|

mask4 publication additionally depends on mode+1C4FC and intervening UI conditions; no claim every mask4 event publishes. Mask20 branch writes action index then conditionally publishes request10; mask40 branch conditionally publishes request3 then writes action index. Request storage is owner+1F0+4*U8(owner+200), when old request is -1. Request consumer and physical key meanings remain to verify. mask8 path searches 40 components, then reads event index and capacity; mask10 handled by cDrag update. Masks20/40 producer not found in current eight original page callbacks; do not assign button names.

### 6.3 event reset and focus restoration

R100 PocketMenu+1E8→03190CEC; 6 rows/0 gap. This callback independently resets event cache. Its invocation cadence not proven.

|VA|bytes|instruction|
|---|---|---|
|03190CEC|08704091|add x8,x0,#1c,lsl#12|
|03190CF0|e91f8052|mov w9,#FF|
|03190CF4|08611491|add x8,x8,#518|
|03190CF8|09010039|strb w9,[x8]|
|03190CFC|1f050079|strh wzr,[x8,#2]|

Thus 1C518=FF, 1C51A=0. Not a per-frame claim. cIdle entry0318A260 at0318A3DC c8d20d39 clears valid old action index after earlier component processing (x22=owner+1C1A0; +374=1C514). cPlay entry0318AA80 (603/0): x21=owner+1C4FC; 0318B090 a862c039 reads 1C514, 0318B098 a9664039 reads 1C515, 0318B09C 3401881a selects old action index unless invalid; after component dispatch, 0318B154 a8620039 writes FF to 1C514. 0318B228 a9660039 writes resolved focus index to1C515 (with invalid FF fallback0). This provides additional evidence1C515 is a focus selection/cache independent of latched action index.

### 6.4 drag-specific event consumer

cDrag entry0318C870 (114/1) 0318C890 d402c239 reads 1C518 signed (x22=owner+1C498,+80), validates against capacity and reads item. cDrag update0318CA40 1582/0: 0318CA64 1ac11291 add x26,x8,#4B0; 0318CA68 48d74079 ldrh w8,[x26,#6A]→1C51A; 0318CA6C 68102036 tests bit4; 0318CA74 57a3c139 reads signed 1C518. Then resolves component by page+590/630 or special button offsets. This is a type-bound event consumer distinct from cPlay. The separate placement/drag substate calls at0318CC58 etc pass owner+1C438, not outer owner+1A8, do not mix the state domains.

Conclusion: static event→action index dataflow accepted; current focus candidate strengthened through entry restoration. No live trace, legacy heap alias or physical-key mapping proven. Remaining: masks20/40 producers, event reset actual caller and timing, outer pending state consumer, live validation of focus and latch. No production write changes.
