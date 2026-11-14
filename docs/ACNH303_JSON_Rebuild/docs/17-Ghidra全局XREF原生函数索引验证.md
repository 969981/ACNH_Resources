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
