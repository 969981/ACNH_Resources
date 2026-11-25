---
title: "R95 · NPC EventFlags 后续研究队列"
aliases: ["R95 研究重点"]
tags: ["acnh","eventflags","research","r95"]
status: planned
game_version: "3.0.3"
updated: 2026-11-24
---

# R95 · NPC EventFlags 后续研究队列

[[00-Home|知识库主页]] · [[00-Research-Index|研究总索引]] · [[26-R94-NPC-EventFlags-Hash-Dictionary|Hash 字典]] · [[27-R94-NPC-EventFlags-Native-Consumers|Native 消费者]] · [[28-R95-NPC-EventFlags-Research-Queue|R95 待办]]

> [!note] 此处是计划而非完成报告
> 按 R94 证据边界逐项推进，不把猜测填回原始数据。

## P0

- [ ] 恢复 `5140E4B4` 原名；验证 0–4 上下文来源及重置事件，保存 Build ID、函数地址、调用者和原始数值。
- [ ] 确认 `FlagsFlowAccess` 0/1/2 枚举语义及实际消费者。
- [ ] 还原 NPC Save / NPC Memory 完整状态布局、作用域和读写函数，真实存档只读对照。

## P1

- [ ] 逆向三个未知 Hash：`5F77B61A`、`BED25A86`、`8D401DF7`。
- [ ] 补齐上一阶段报告中的 199 个未定位直接字符串引用的状态；先从实际生成报告复核该基线，再跟踪间接索引、哈希和表访问。无引用不等于未使用。
- [ ] 验证 Friendship 的实际增减、等级与奖励触发条件。
- [ ] 追踪搬家装箱、跨岛招募及访客/岛主状态；关联 [[25-R92-Villager-Encyclopedia-Recruitment-Save-Evidence]]。
- [ ] 复核 TalkValueVillager / TalkValueVisitor 单位、调用者与活动作用域；补齐 NpcTemp / PlayerActivity 的运行时结构。

## 验收模板

| 项目 | 必填证据 |
| --- | --- |
| 原版字段 | 表名、Hash、类型、UniqueID/Key、源 SHA-256 |
| Native | Build ID、Ghidra VA、调用链、原始分支和值 |
| Runtime | 会话、条件、输入输出、实际采样、可复现步骤 |
| 结论 | static/runtime 区分、未验证项、证据文件链接 |

未完成证据仍保留 null；不增加 L4 覆盖量。
