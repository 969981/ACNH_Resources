---
title: R88 · ELF 函数指针和重定位表追踪
tags: [ACNH, R88, ELF, ARM64, Ghidra, EventFlow, vtable]
status: read-only-ELF-probe
---
# R88 · 函数指针、重定位表及 UI 代码窗口

R87 对完整 3.0.3 `main.elf`（SHA-256 `145903c25d37a7c90e8818440bcf462b3dca490e11e45cf435605ab00d709664`）做静态字符串扫描：
- `EventFlowQueryCanInduceNpc`、`EventFlowQueryIsCallableAmiiboNpc`、`EventFlowQueryNpcMoveOutState` 等完整 Query 字符串**原版 ELF 不直接包含**；不能再用字面名字 XREF 推定注册链。
- `Camp_InduceFailFlag`、`Camp_InduceFailVillagerMax` 在原版 ELF 中存在直接 AArch64 `ADRP+ADD` 引用，但不能简单等于 Query 的 native 实现。
- `FUN_00EE5828`、`FUN_00F089A0` 没有直接 `BL` 调用者，可能经由函数指针/间接派发，也可能属于其他使用方式。

R88 进一步遍历 ELF64 AArch64 的 `SHT_REL/SHT_RELA` 重定位（如存在）、遍历被映射的数据段中的 **64 位小端指针**，查两段 Ghidra 候选的绝对地址是否作为 vtable/函数表条目存在。并用 Capstone 对：

1. `0x3033080`（`STR_CategoryName` 字符串引用附近）
2. `0x19CEDD4`（`ItemUIFurnitureCategory` 字符串附近）
3. `0x19A3914`（`ItemOutfitCategory` 字符串附近）
4. `0x00BD4F90`（`Camp_InduceFail*` 密集引用）
5. `0x00EE5828`、`0x00F089A0`（Ghidra C 候选）

输出原版机器码窗口，留给后续准确追踪入参及函数表引用。对于任何发现的函数指针，只有找到 EventFlow 查询注册、对象类型、字段读取和返回分支后，才能声称实现了某个 Query。**没有真实运行时证据就不生成可接名单**。

复现：
~~~powershell
py -m pip install pyelftools capstone
py Scripts/acnh303_r88_elf_relocation_probe.py --repo-root . --out r88-output
~~~

参见 [[ACNH303_JSON_Rebuild/docs/15-UI类别和原生ARM64查询XREF研究]]。
