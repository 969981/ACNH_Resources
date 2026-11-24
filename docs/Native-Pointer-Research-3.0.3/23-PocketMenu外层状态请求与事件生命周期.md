---
title: PocketMenu 外层状态请求与事件生命周期
version: 3.0.3
updated: 2026-11-24
status: partial-static
runtime_verified: false
tags: [ACNH, PocketMenu, ELF, StateMachine, UI]
---
# PocketMenu 外层状态请求与事件生命周期

[[22-PocketMenu二十状态与事件消费链]] · [[21-PocketMenu专用页面回调与共享状态机]]

## 1. 原版验收

[Run 45332650597](https://github.com/969981/ACNH_Resources/actions/runs/45332650597) success, head 4a40c064aaf0c738b810115c188e6aa4107a287d；[artifact 14891979401](https://github.com/969981/ACNH_Resources/actions/runs/45332650597/artifacts/14891979401)，实际下载 ZIP SHA256 7726bbc54dd22e27f6207ad5147e53205ddcdc9a0ab3f0653b1222df20cd0538，266 anchors/35969 rows/99 gaps。并行[Run 45333942998](https://github.com/969981/ACNH_Resources/actions/runs/45333942998) success，head 1982b027c1b0fffaa0cd9c81ca6f9357274c62d1，[artifact 14893755470](https://github.com/969981/ACNH_Resources/actions/runs/45333942998/artifacts/14893755470)，实际下载 SHA256 fe4f886ad8e2dc1e2a267e97c17afe0f8718711cea437c2f96256c86a6773b60，308 anchors/42229 rows/110 gaps，新增42个命令候选入口。两份 SHA 均与 GitHub digest 匹配，原版NSO/ELF匹配由CI执行。VA=RVA+100000。全库统计含重叠。

## 2. 外层状态切换的真实调用者

从266入口的 BL/B 目标和前四条指令寻找向03EBB160 (RVA03DBB160) 传递 self+1A8 的调用点。仅按这条局部模式找到以下三处，不表示穷尽全部调用者。

|调用VA|owner入口|目标ID|原生状态名|后续动作|
|---|---|---|---|---|
|0318963C|031894DC (VTable+1C8)|1|cIdle|清空双请求槽|
|0318EC10|0318E510 (cLookPlayerInfo entry)|12|cErrorWindow|清空双请求槽|
|0318F7EC|0318F6E4 (cCommonDialog entry)|3|cPlay|清空双请求槽|

|VA|bytes|instruction|说明|
|---|---|---|---|
|03189634|60a20691|add x0,x19,#1a8|内嵌状态机|
|03189638|21008052|mov w1,#1|cIdle|
|0318963C|c9c63494|bl #3dbb160|实际切换|
|03189640|08008092|mov x8,#-1|两个FFFFFFFF|
|03189648|68fa00f9|str x8,[x19,#1f0]|清双槽|
|0318EC04|60a20691|add x0,x19,#1a8|内嵌状态机|
|0318EC08|81018052|mov w1,#C|cErrorWindow|
|0318EC0C|696a28b8|str w9,[x19,x8]|此前x8=1C50C,w9=29h|
|0318EC10|54b13494|bl #3dbb160|实际切换|
|0318EC18|68fa00f9|str x8,[x19,#1f0]|清双槽|
|0318F7E4|60a20691|add x0,x19,#1a8|内嵌状态机|
|0318F7E8|61008052|mov w1,#3|cPlay|
|0318F7EC|5dae3494|bl #3dbb160|实际切换|
|0318F7F4|68fa00f9|str x8,[x19,#1f0]|清双槽|

## 3. 两个请求槽与阶段选择器

03189494(+1B8)与031894B8(+1C0)各9rows/0gap。两者先读 owner+200 的 u8，再按 owner+1F0+4*selector 读取 u32，只有旧值FFFFFFFF才写2或4。
03189494 08004839 ldrb w8,[x0,#200]；03189498 09c00791 add x9,x0,#1f0；0318949C 2a7968b8 ldr w10,[x9,x8,lsl#2]；031894A0 5f050031 cmn w10,#1；031894AC 4a008052 mov w10,#2；031894B0 2a7928b8 str w10,[x9,x8,lsl#2]。031894D0 8a008052 mov w10,#4；031894D4 2a7928b8 str w10,[x9,x8,lsl#2]。

02C0C720(+90)在02C0C738写 self+200=1，02C0C92C写0。该函数内调用 outer FSM entry/update，随后+1A0、+200虚函数，故至少已证明更新期间使用第二槽，退出时恢复第一槽；其他调度路径是否另写选择器待确认。未见边界检查，不能把任意外部值当合法selector。
0318A7E0(cIdle update) 先检查两个请求均FFFFFFFF，再检查270个呈现对象+1A0与+18 bit1，满足才调用UI生命周期尾函数0386B2B0。0318C5F8(cProcCommand update)也检查双请求空闲后推进业务分支。
031894DC直接切换cIdle并清双槽，但尚未证明它是通用请求消费器；不等于按请求值动态切换。

### 重要区分：另一个全局 UI 对象的状态请求

02C0C720 02C0C81C 调 self vtable+1A0；02C0C82C 调 self vtable+200；返回非FFFFFFFF才继续；U=P(Main+5639190)，G=P(U+30)，如果 G 非空并且 G+50 与请求值不同，且 self vcall+E0 bit0通过、self+201=0，则02C0C8A4写 G+50，随后清 G+58及+68，必要时修复 G+1190 和 G+11B0。02C0C928 调03EBB160时参数为 G+8，不是PocketMenu+1A8；请求20→状态2，21..31→状态3，其余→状态1（与旧状态一致则跳过）。该分支为另一个UI对象，不应误判为PocketMenu双请求槽通用消费者。PocketMenu/TalkSeq/SelectTalk 的 VTable+200均重定位到 VA02BB9520，原始函数待新CI。

## 4. 事件清除与缺失生产者

03190CEC 的6条原始指令已验证 event index=FF、flags=0。已在308个入口逐行扫描相邻LDR X,[X,#1E8]及后续BR/BLR，未见类型已确认的reset caller。扫描已导出PocketMenu相关窗口内 ORR #20/#40 邻近LDRH/STRH亦无匹配，不能认为全程序不存在；编译器可能合并OR或通过其他别名访问。

新提交2cbf32bf25241a39920160e6fea407f29a0592bb 在原始导出器增加28个入口（共享+1D0/+1D8/+1F0/+1F8/+200、Talk/SelectTalk +1E0、UI生命周期等），并增加全text模式扫描：LDR X,[X,#1E8]随后同寄存器BR/BLR；ORR #20/#40且邻近同base/offset的LDRH和STRH。每个命中窗口要求ELF和NSO字节一致，输出 ui_lifecycle_candidates.json。该扫描是语法候选，不是完备SSA、类型或实际调用证明。Run45334089129首次查询in_progress，暂不宣称验收。

## 5. 实机只读验证计划

无本轮实机数据。仅对同一Build ID、同一PocketMenu实例、按时间排序的离线快照比较：状态+1B0、更新计数+1B4、双请求槽+1F0/+1F4、selector+200、action+1C514、focus+1C515、pending+1C518、flags+1C51A。分开记录初始空闲、移动但不确认、确认、退出菜单、拖动和重入等观察阶段；区分字段值变化与事件调用顺序。只读快照不验证中间未采样事件；要验证reset cadence需带调用/时间序列证据。保持legacy aliases和runtime_verified为null/false，不改变生产指针或游戏状态。
