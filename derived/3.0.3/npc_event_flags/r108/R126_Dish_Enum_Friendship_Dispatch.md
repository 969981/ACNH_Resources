---
title: R126 料理家具内联枚举与普通赠礼好感度分发
version: "3.0.3"
status: static_model_pending_ci
runtime_verified: false
tags: [ACNH, Gift, Dish, R126]
---

# R126 原版字段与条件分发

## R125 验收
Actions 45352660266 success。缓存 lifecycle / 01A6F2B4 写入、包装 VTable 配对、768包装合成组合、12项 KindBitParam 参数表均通过。报告唯一字段候选 F44FAB3B (offset 68=0x44, u32, 2 distinct)。连续 native 字符串表无匹配；写入器范围内仅 BL04004450（不能视为实际枚举转换函数）。包装 address point 04979268 在010C8924/010C8940明确 STR X8,[X0]，对应 ADRP/ADD 010C891C/8920 与010C8938/893C，表+30/+38 绑定010C89A0/010C89C0。

## 1. 料理家具字段及内联转换候选
01A6E988 MOV W25,#AB3B；01A6E98C MOVK W25,#F44F,LSL16；01A6EA34 CMP W10,W25。
英文内联比较/CRC段01A6EEE8 MOV W8,#4E、01A6EEF4 MOV W11,#6F、01A6EEF8 MOV W12,#6E、01A6EF0C MOV W12,#65，构成 None 候选；01A6EF54/5C/64/6C 分别44/69/73/68，构成 Dish 候选。CRC32 None=DFA2AFF1，Dish=354F2386。R126 校验原始全量字段 CRC 集合并导出分布。只有集合完全一致时，才使用 None=0 / Dish=1 条件解释；不一致保留 unknown。尚未逐指令证明日英内联分支到 LDUR W8,[X29,#-C] / STRH 的全部数据流，native_verified=false。不能用相邻下一字段094E5AF8误归因。
## 2. 静态分发
以 R124 的全量 Kind bits 为底，条件 extra cache enum==1 用于 Kind0 的 CanEat，保留实际 native enum 尚待验收标记。全11178物品重新计算第一外部子流程候选，并断言新候选集合为 R124 子集；从 R122 的39个子流程路径报告关联首个 AddFriendship 候选值，保留未知/无增量路径。首个增量不等于最终累计增量。实际 dispatch / actual_friendship_delta NULL。
## 3. 包装 VTable 与 KindBitParam
R126 独立核验两处原版 vptr 写入目标，并保存完整 wrapper、leaf机器窗口；KindBitParam 候选 address point 04978390 周围8字节重定位表及010B876C..010B89AC机器码，用于后续查证 +30 wrapper/+38 leaf、日文字符串比较及外层 case 反相。暂不把参数调用和图模型的极性标为已证实。
## 4. 产物
Scripts/acnh303_r126_dish_dispatch.py；r126_report.json、r126_dish_dispatch.json、r126_machine_windows.json、r126_bit_vtable.json；SQLite r126_dish_dispatch 与 gift_web_sidecar_r126.json。CI 待验收，PR #95 未合并。下一轮审查实际 inline hash compare/enum store、KindBitParam 消费者，再追踪普通赠礼偏好颜色、风格、AITag与 Fruit 比价对象。
