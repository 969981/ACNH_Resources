---
title: R127 ToDish 原版内联枚举与 KindBitParam 查询
version: "3.0.3"
status: static_model_pending_ci
runtime_verified: false
tags: [ACNH, Gift, Dish, Preference, R127]
---

# R127 原版枚举纠正与偏好入口研究

## R126 验收
Actions 45356958690 success。原版 F44FAB3B 字段 11178 项，仅 DFA2AFF1=11158、29B4F744=20。否定此前 Dish=354F2386 的假设，因此 R126 保守地没有缩减1630项未知 CanEat；9343项所有候选路径一致、3302项首个增量唯一且无已知未知路径。R127 纠正为 ToDish=29B4F744。
## 1. 英文内联 CRC 及写入数据流
01A6EA7C LDR W22,[X8] 获取原字段 CRC。01A6EEE8..01A6EF18 以 -1 seed 逐字节 CRC32B N/o/n/e，MVN 得 CRC，STP W9,WZR,[X19] 存 hash/value0。01A6EF40 MOV W13,#54 (T)，EF48 CRC32B W10,W10,W13，EF4C MOV W13,#1，EF50 CRC32B W10,W10,W11 (o，来自 EEF4)，EF54/58 D，EF5C/60 i，EF64/68 s，EF6C/70 h，EF74 MVN W11,W10，EF80 STP W11,W13,[X10] 得 hash/value1。01A6EFF8 CMP W12,W22 搜索 hash；01A6F1EC LDR W8,[X8,#4] 取枚举；01A6F230 STUR W8,[X29,#-C]，01A6F2AC LDUR W8,[X29,#-C]，01A6F2B4 STRH W8,[X10,W9,SXTW#1] 写入 cache。英文路径原版数据和机器码一致，其他语言及全部异常控制流尚未完整验收。原字段名未知，不猜测。R127 全量重新生成 conditional_eat 与 first friendship delta 候选；实际 UI dispatch / cumulative friendship / runtime 状态仍 NULL。CI待验收。
## 2. KindBitParam Query
候选 address point 04978390，+30=049783C0->010B8774，+38=049783C8->010B87A0。
010B877C ADD X1,X0,#100；010B8780 BL 010B9ADC；010B8784 CMP W0,#0；010B8788 CSET W0,EQ。
Leaf 010B88AC MOV W21,WZR；010B88C0 ADRP X24，010B88C4 ADD X24,X24,#3D0；010B88EC ADD X8,X24,W21,UXTW#3；010B88F0 LDR X25,[X8,#98]，有效表地址04978468。对对象+0xD0调用 vtable+18，取 +D8 字符串，与表项逐字节比较；匹配后 010B897C MOV W1,W21，010B8980 ADD X0,SP,#8，010B8984 BL 01B12E40，010B8988 AND W0,W0,#1。无匹配/无资源返回0。故使用该表的有效单选实例，属性真=>case0，假=>case1。其他 MultiKind/Choice 查询极性不从该证据外推。
## 3. NPC preference
00EF16C0、00EF1FD8 精确地址 C 导出在当前研究分支返回404；不据此猜测原始函数签名。R127 从原版 NSO 提取有界指令及 BL 候选窗口，等待确认函数边界和调用数据流。00EFA550 C 已有，包含普通赠礼谓词01B07660、Kind0x60..0x70 mask0x10601、Tops/OnePiece 的 cache 053271B0/B8 和01AE58B0 比较、Kind0 反向01AE6420；仍不能把它直接等同真实偏好分数。
## 4. 产物
Scripts/acnh303_r127_dish_preference.py、r127_report、r127_dish_dispatch、r127_machine_windows、r127_bit_vtable、r127_preference_windows、gift_web_sidecar_r127；SQLite r127_dish_dispatch。下一轮先验收20个 ToDish 及1630项原先未知家具、KindBitParam 单选闭合；再定位 preference 指令函数边界及实际调用点、MultiKind/Choice极性、颜色/风格/AITag 计算。PR #95 未合并。
