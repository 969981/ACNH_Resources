---
title: PocketMenu 专用页面回调与共享状态机
version: 3.0.3
updated: 2026-11-24
status: byte-matched-partial
runtime_verified: false
tags: [ACNH, UI, ELF, PocketMenu, StateMachine]
---
# PocketMenu 专用页面回调与共享状态机

[[20-七组跳转表与背包索引证据]] · [[19-差异虚函数原始指令与语言矩阵验收]] · [[17-UI根重定位与消息窗口生命周期]]

## 1. 真实 CI 验收

[Run 45331022817](https://github.com/969981/ACNH_Resources/actions/runs/45331022817) success，head feb1666bb6a4560d8e8b2ad37d4f201f7fdf98f8。实际下载 [artifact 14892286227](https://github.com/969981/ACNH_Resources/actions/runs/45331022817/artifacts/14892286227)，本地 SHA256 c8ccbca3e0af0daee9df403bca521e70d445bc13acef696151ead223fe9255a6 与 GitHub digest 一致。202 entries/26986 rows/86 gaps。ELF SHA256 145903c25d37a7c90e8818440bcf462b3dca490e11e45cf435605ab00d709664；NSO SHA256 68c7fbeda353f8e4a283eac6a9b99e713e72a327048214bf6a4e7214616b87c1；Build ID ff1d1c05670db6021c85b624a710b96300000000000000000000000000000000。原始字节由 CI 匹配，本轮未重新解码完整 NSO。VA=RVA+100000。

## 2. PocketMenu 专用页面

031872A0 176 rows/0 gap，从 self+A0 取登记对象，分配708h；基类构造038595A4。原始字节：

|VA|bytes|instruction|说明|
|---|---|---|---|
|031873B8|01e18052|mov w1,#0x708|allocation size|
|031873C0|081940f9|ldr x8,[x8,#0x30]|allocator vcall|
|031873E4|70481b94|bl #0x37595a4|page base ctor|
|0318741C|080543f9|ldr x8,[x8,#0x608]|alias RVA04AC8608|
|03187434|08410091|add x8,x8,#0x10|address point|
|0318743C|880200f9|str x8,[x20]|write vtable|
|03187448|02f43994|bl #0x3f04450|zero 198h bytes from page+570|
|03187504|740a01f9|str x20,[x19,#0x210]|publish page|

R100 SQLite 实际复查 alias 04AC8608→04A06AF0 (RELR,data)，address point=04A06B00。+0/+8/+10/+18/+20 分别 VA03186480/031865E4/0318477C/03184780/03186640；+28 VA03D58A60 与 CursorPage 共用。初始化 +3EC=E，+568=1(u16)，+56A=1，+218 条件写3/+21D=1，+530 bit0，+48 生命周期1→2。登记入 owner+78 intrusive list，node offset+8C，count+88。清零范围 page+570..707。页面比通用 SelectCursorPage 大190h，并非同一对象。

## 3. 03187560 八个回调描述符

374 rows/0 gap，按二维容器边界和 record vtable+10 条件寻找登记位置，stride20h；写 record+0 wrapper VTable，+8 PocketMenu self，+10 回调 VA，+18=0。

|ADR VA|callback VA|wrapper Main RVA|维度/数组偏移|
|---|---|---|---|
|031875F0|03187B40|04A07088|430/434/438|
|031876A4|031884A8|04A07088|430/434/438|
|03187760|031884B0|04A07088|430/434/438|
|03187814|03188640|04A07088|430/434/438|
|031878D0|03188650|04A07088|430/434/438|
|03187984|031886C0|04A07088|430/434/438|
|03187A34|03188724|04A070D8|468/46C/470|
|03187AF0|03188794|04A07128|478/47C/480|

031875B4 2855081b madd w8,w9,w8,w21；031875C0 4015088b add x0,x10,x8,lsl#5；031875CC 00013fd6 blr x8；03187620 0b7d01a9 stp x11,xzr,[x8,#10]；03187624 094d00a9 stp x9,x19,[x8]。以上证明登记，并非实际执行事件；八个回调 C 均404，已新增原版导出入口。R100 查04A07088 +0/+8/+10→03197A48/03197A78/02BB9854，未称为具体事件分发。

## 4. +1C514 写入证据与排除

031867B0 构造：031867DC x8=self+1C4E0，经 sp+8 保存并03186AF4恢复为 x19；03186B48 mov w8,#FFFFFF，03186B4C 683600b9 str w8,[x19,#34]。即 self+1C514..517 初始化 FF FF FF 00（little-endian）。031742D0 读取 signed byte、范围检查再读 Inventory；另03175840 在031758AC/EC 读取 [x22,#18]，x22=self+1C4FC（0317585C/68），也确认 self+1C514 进入同一逻辑物品读取路径。另处03175924 的 str w8,[x23,#35C] 并非该字段：0317587C..90 x23 为玩家访问器根+20+player*740 或 fallback，不是 PocketMenu+1C1B8。扫描202个锚点的 literal store 只能排除这些候选，不是穷尽全程序写入。初始化之外的实际事件写入尚未证明。八个页面回调、其 wrapper 为后续重点；当前不能断言实时高亮还是确认锁存。

## 5. 共享状态机 +1A8

02FA8CC4 构造 TalkSeq 等五种序列；02FA8DAC mov w25,#-1（w 写入零扩展），02FA8E48 a8e61aa9 stp x8,x25,[x21,#1A8]，初始化 current=FFFFFFFF、counter=0。PocketMenu 03186848 c8a61aa9 stp x8,x9,[x22,#1A8] 同样初始化；0318681C stp x9,x9,[x22,#1B8] 初始化 previous/default=FFFFFFFF、旁计数/标志字=0。真实共享 +90 VA02C0C720 136 rows/0 gap。

|self offset|state offset|解释|
|---|---|---|
|1A8|0|内嵌状态机 VTable|
|1B0|8|current ID|
|1B4|C|更新计数|
|1B8|10|previous ID|
|1BC|14|previous counter|
|1C0|18|initial/default ID|
|1C4|1C|更新门禁|
|1C8|20|初始化/执行门禁字节|
|1C9|21|entry/transition flag|
|1D0|28|callback count|
|1D8|30|callback records pointer; stride40h|

|VA|bytes|instruction|语义|
|---|---|---|---|
|02C0C744|68b241b9|ldr w8,[x19,#1b0]|current|
|02C0C758|68b641b9|ldr w8,[x19,#1b4]|counter|
|02C0C764|2a0100f9|str x10,[x9]|counter0/previousFFFFFFFF|
|02C0C774|68be01b9|str w8,[x19,#1bc]|previous counter|
|02C0C778|68c241b9|ldr w8,[x19,#1c0]|default|
|02C0C780|68b201b9|str w8,[x19,#1b0]|publish default current|
|02C0C79C|20190b8b|add x0,x9,x11,lsl#6|entry record|
|02C0C7AC|00013fd6|blr x8|entry callback|
|02C0C7F8|00013fd6|blr x8|update callback (+8)|
|02C0C80C|68b601b9|str w8,[x19,#1b4]|increment counter|

03EBB160 generic C blob ec3b9e269c410a0194b572c3fc3e666073990839；raw 03EBB1D4 writes state+8 default; 03EBB218 937e0129 stp w19,wzr,[x20,#8] publishes requested ID/counter0; 03EBB21C 88260229 stp w8,w9,[x20,#10] previous. Layout structurally matches self+1A8. Need actual type-bound callers that pass self+1A8, not yet observed in current direct BL scan; do not claim all transition writers closed. Shared +A8/B0/B8 130/91/134 rows each1 gap; +B0/+B8 tail target RVA032BA5E4 was outside bound (added Ghidra VA033BA5E4). These functions propagate page activation/focus flags rather than direct +1B0 writes. State names and IsChatEnded alias remain unknown.

## 6. next acceptance

New 18 anchors from original evidence incl 8 callback targets, page VTable targets/wrapper, shared tail; CI not yet verified. Preserve action index/association index/current state as distinct objects and keep historic cursor/chat/text-speed mapping null until source and snapshot proof. No production pointer updates; no live process or writes.


## 7. 追加验收：八个回调实际机器码（同轮）

[Run 45331535950](https://github.com/969981/ACNH_Resources/actions/runs/45331535950) success，head bd0857c72768db9ef3e7d915da99ff5bbd092c2e；实际下载 [artifact 14891717920](https://github.com/969981/ACNH_Resources/actions/runs/45331535950/artifacts/14891717920)，ZIP SHA256 bb89a81c3a81cb098d422b1f29173662dc2a70ab31286a6a4e057f37c6d44327 与 digest 一致。220 entries/28230 rows/87 gaps。八个回调原始指令均存在，共793条、3 gap。完整逐行机器码见 Functions/FUN_<VA>.md/json。

|VA|rows/gaps|已证行为|
|---|---|---|
|03187B40|562/2|按事件对象指针匹配40槽，写1C515；无匹配写FF；状态8走特殊分支|
|031884A8|1/0|RET|
|031884B0|100/0|匹配物品/特殊组件并检查+2C3 bit0，写1C518、1C51A OR4；特殊分支额外条件|
|03188640|1/0|RET|
|03188650|25/0|匹配40槽，写1C518、1C51A OR8|
|031886C0|25/0|匹配40槽则写1C518；无论匹配均1C51A OR10h|
|03188724|16/1|参数+10的0..3枚举分支，表RVA0408415E，待闭合|
|03188794|63/0|事件对象身份匹配，两个浮点输入阈值测试，1C51A OR100h/200h|

### 7.1 1C515 真正的事件索引 writer

03187B60 ldr x11,[x0,#210]；03187B64 mov x19,x0；03187B6C ldr x14,[x1,#8]；03187B90..BB8 按 page+590/630 遍历40个子组件，比较事件对象指针。原始字节：

|VA|bytes|instruction|
|---|---|---|
|03187BBC|a8a29852|mov w8,#0xc515|
|03187BC0|2800a072|movk w8,#1,lsl#16|
|03187BC4|e91f8052|mov w9,#0xff|
|03187BC8|696a2838|strb w9,[x19,x8]|
|03187BD0|aea29852|mov w14,#0xc515|
|03187BD4|2e00a072|movk w14,#1,lsl#16|
|03187BD8|756a2e38|strb w21,[x19,x14]|

由此确认 offset=1C515，不是1C514。最强的当前焦点/事件索引候选；在状态8与不匹配情况下特殊处理，其他路径以同一索引读取物品及展示内容。是否每次实际方向键移动都触发仍须运行时快照/事件消费者验证。

### 7.2 1C518 事件槽和 1C51A 位图

03188660 08611491 add x8,x8,#518；上游03188654 08704091 add x8,x0,#1c,lsl#12。匹配后031886A0 09010039 strb w9,[x8]，031886A4 09054079 ldrh w9,[x8,#2]，031886A8 29011d32 orr w9,w9,#8，031886AC 09050079 strh w9,[x8,#2]。031886C0 同类 OR10h，无匹配也置标志。031884B0 在常规匹配且子组件+2C3 bit0 成立时 OR4。03188794 通过 self+1C2C8 相关指针和事件+8 比较，读事件+14/+18 float（阈值字0x3F2B851F），最后写 [x8,#252] 即1C51A，置100h或200h。不能把标志位命名为具体按键，待输入来源证据。

### 7.3 wrapper 真实分发

03197A48 12rows/1gap；03197A50 ldp x2,x10,[x0,#10]，03197A60 add x0,x8,x10,asr#1，03197A64 检查低bit，若为1则经 vtable 加x2读取目标，03197A70 br x2。登记的八个记录+18=0，所以这一静态配置下为直接成员回调形式，owner 从记录+8取出。仍不代表实机事件已发生。

033BA5E4 36rows/1gap，02C0CB68/B8 的尾分发目标，读取另一个对象+50状态/选择字段，再通过自身+8调用03EBB160(0)，不是 PocketMenu+1A8 的直接 caller。

已另提交03188724 4项跳转表的原版双字节验证逻辑（commit b669614），新 CI 尚未核验；1C514 非初始化 writer 仍未闭合。下一阶段优先查1C518/1C51A 消费者与1C514 发布关系。以上是静态研究，不改变生产指针。
