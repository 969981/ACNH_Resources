---
title: R89 · 校验 Ghidra SQLite 的函数调用者与字符串 XREF
tags: [ACNH, R89, Ghidra, SQLite, XREF, native, proof]
status: verify-full-1GB-ghidra-graph
---
# R89 · 用已保存的 Ghidra 全局引用索引查原生调用者

前两轮依据原版 `main.elf`：

- R87：查询名称没有以完整字符串存在，但有 `Camp_InduceFailFlag` 等真实 AArch64 字符串引用。
- R88：校正 Ghidra `image_base=0x00100000` 后，两段 Ghidra C 函数入口与真实 ELF 指令对齐；**原始函数地址分别是 0xDE5828 与 0xE089A0**。直接 `BL` 与 64 位绝对指针/重定位未找到其入口，不能判定没有其他间接调用。

R89 在 GitHub Actions 中 **校验并拼合仓库的 `acnh303_ghidra.sqlite` 原始分片**（约 1.076 GB），以只读连接查询全局 `functions`、`symbols`、`xrefs` 表，并使用索引严格查找：

- `FUN_00EE5828`、`FUN_00F089A0` 的 Ghidra 函数入口及所有直接 XREF。
- `STR_CategoryName`、`ItemUIFurnitureCategory`、`ItemOutfitCategory` 的原生字符串目标地址，统一加上 0x00100000，再寻找 Ghidra references。
- 原版 `Camp_InduceFailFlag`、`Camp_InduceFailVillagerMax` 等失败状态字符串及原生引用。
- 从 `symbols.name` 检索有无 `CanInduceNpc`、`IsCallableAmiiboNpc` 等**真正符号**；没有不能代表游戏中不存在相关行为。

输出 `r89_ghidra_xref_evidence.json` 与简要统计 `r89_ghidra_xref_summary.json`。大 SQLite 不重复提交 PR，输出由 Actions Artifact 保存。

> [!important] 不能自动得出 417 个村民的可接结论
> 即使 Ghidra 某函数有引用源，仍需从 `EventFlowQueryCanInduceNpc` 的具体事件派发注册一路追到返回分支，并检查当前玩家和 NPC 的实际搬入/搬出状态。任何没有上下文的 `can_adopt` 静态布尔值仍保持未知。


## R89 实际跑通的统计

[Actions #43612007216](https://github.com/969981/ACNH_Resources/actions/runs/43612007216) 完成 1.076 GB Ghidra SQLite 的 byte-for-byte 拼合。库包含 `25,000` 个已导出函数、`8,332,586` 个全局 XREF 与 `2,892,486` 个符号。两段函数各有 `1` 个 `UNCONDITIONAL_CALL`、`1` 个 `INDIRECTION` 和 `1` 个 `DATA` 引用；精确调用者位置分别为 Ghidra `00EE53B4` 和 `00F08758`。字符串引用中 `Camp_InduceFailFlag` 有 9 条、`Camp_InduceFailAlreadyInduced` 有 5 条、`STR_CategoryName` 有 1 条。全局索引不仅证明这些地址存在，还可与 R88 原始 ARM64 BL 指令交叉核验。

参考：[[ACNH303_JSON_Rebuild/docs/16-ELF重定位与Ghidra函数指针追踪]]。


## 新增：从确切调用地址回溯所属函数

R89 的 `UNCONDITIONAL_CALL` 来源是精确地址 `00EE53B4` 和 `00F08758`。增强的脚本在已验证 Ghidra 全局函数表中对每个来源地址查找**前一个最近函数入口**，同时输出函数 `c_path`、`byte_count` 与 callsite 差值，并检查是否落在保守线性范围内。这个结果仅用于选取应审阅的上游 C 代码，不会自动推断其 Query 名称。
