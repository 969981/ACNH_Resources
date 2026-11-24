---
title: R125 特殊料理家具缓存与包装查询虚函数表
version: "3.0.3"
status: static_model_pending_ci
runtime_verified: false
tags: [ACNH, Gift, Dish, R125]
---

# R125 原版料理家具与包装查询
## R124 验收
Actions 45348537602 success。11178 item rows；CanEat field true205、CanPlant field true443；额外 CanEat unknown1630；候选类别数量0/1/2分别204/9344/1630，9343 all_routes_same_category。十二项原版日文参数表04978468：持ち物、バッグ、倉庫、クローゼット、家具、置く、埋める、植える、売却、簡易買取、プレゼント（ラッピング）、食べる。010B897C MOV W1,W21；010B8980 ADD X0,SP,#8；010B8984 BL 01B12E40；010B8988 AND W0,W0,#1。参数转换 dataflow 尚需闭合。

## 1. 额外可食用家具缓存
GOT04BC0070 ->05327298 (Main+05227298), count u32 +0，数组指针+8 (053272A0)，每行u16。原版分配 count/pointer 01A64748/01A64750，释放后清零01A681B0/01A681B4。实际写入 01A6F294 LDR X10,[X10,#70]，01A6F2A0 LDR W11,[X10]，01A6F2A4 CMP W9,W11，01A6F2A8 B.HS，01A6F2AC LDUR W8,[X29,#-C]，01A6F2B0 LDR X10,[X10,#8]，01A6F2B4 STRH W8,[X10,W9,SXTW#1]。R125 从此前0x1A6E900..0x1A6F2B8提取 ItemParam MOVZ/MOVK 候选常量及调用目标，扫描对应小枚举字段的完整 CRC 字符串表。字段/转换器未验收前不生成猜测的 per-item cache value。注意 094E5AF8 常量出现在写入之后的下一块，不能当作本缓存字段。
消费者：01AD5F60 在特定 Kind/缓存条件成立后进入 LAB_01AD6310 并初始化字符串 FtrDishCommonUser；01AD673C 和01B0D774 返回缓存枚举==1；01AF93E8 特殊分支返回0x13，01AF43A0特殊分支返回2；01B04AB0 可食用检查也读取该缓存。支持料理家具语义，但不等同完整原字段名。1630个Ftr条件未知暂保留。

## 2. 包装 Query VTable
R124 relocation 原版 address point候选04979268；+0x30=04979298 ->010C89A0；+0x38=049792A0 ->010C89C0。同一连续表，前后相邻非函数槽。010C89A0 调用010B9ADC并 CSET EQ 反相。010B9ADC 在已知选中记录路径通过 query object vtable+0x38 调用 predicate。010C89C0 检查有效资源、runtime CanGift、raw+3低2位非零。对有效单选实例且使用该表，wrapped true=>case0，unwrapped=>case1；CanGift false或无有效对象时 leaf false=>case1。R125 将配对 relocation、768组合单选 case 模型纳入CI；进一步扫描 VTable materialization 和 bit parameter table引用，尚无实机对象快照。生日 Event#64 case0->157 result0=0；case1->197 solo->161 result0=1。因此在上述前提下生日包裹 +8/+6/+4，不包裹 +5/+4/+3。普通 #89/#90 result0=0 ->93/92 +1，result0=1 ->64/63 solo；仅到达对应完成子流程才适用。

## 3. 产物
Scripts/acnh303_r125_dish_cache.py、r125_report、dish_writer、field_candidates、enum_candidates、query_xrefs、kind_bit_window、c_evidence；SQLite r125_kind_bit_enum 12项。CI待验收。下一步先从 writer 候选闭合真实字段/转换器，再恢复1630项实际料理家具枚举、Native KindBitParam参数转换与村民偏好消费者。PR #95 未合并。
