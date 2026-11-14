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

## 2026-11-14 关键更正：Ghidra 地址相对 ELF 有固定镜像基址

R88 第一版直接将 `FUN_00EE5828` 和 `FUN_00F089A0` 当作 ELF raw VA 搜索，造成直接调用/重定位未命中的假阴性。真正的 Ghidra 导出元数据 `derived/3.0.3/ghidra12.2/ndjson/batch-00000000/export-summary.json` 显示 `image_base = 00100000`、`program = main.elf`。

**对应关系**：

| Ghidra 函数地址 | 原始 ELF VA（减 0x00100000） | 同一函数的原版字符串引用 |
|---|---|---|
| `0x00EE5828` | `0x00DE5828` | `0x00DE584C` 直接引用 `Camp_InduceFailFlag` |
| `0x00F089A0` | `0x00E089A0` | `0x00E08A10` 直接引用 `Camp_InduceFailAlreadyInduced` |

这次修正版严格核对 Ghidra 的元数据，再对减基址后的 ELF VA 重做函数指针/重定位/反汇编；**原版的 UI 字符串地址引用仍保持 raw ELF VA，不能重复减基址**。

这个地址对齐可以证明两份 Ghidra C 函数确实对应原版 `main.elf` 中的代码区域，但仍需要进一步证明它们与具体 EventFlow Query 的注册关系。

## R89→R88 交叉证明：两个真实直接 BL 边

R89 通过校验后的 Ghidra SQLite 8,332,586 条 XREF 找到：

| Ghidra 呼叫位置 | Ghidra 目标函数 | 证据 |
|---|---|---|
| `00EE53B4` | `FUN_00EE5828` | `UNCONDITIONAL_CALL` + 同目标 `INDIRECTION` 与 `DATA` 引用 |
| `00F08758` | `FUN_00F089A0` | `UNCONDITIONAL_CALL` + 同目标 `INDIRECTION` 与 `DATA` 引用 |

R88 新增了按 Ghidra image_base 减法转换后的原始 ELF 4 字节 **BL 指令目标验证**（这一步专门区分 Ghidra 的语义 XREF 与 ELF 机器码，避免把裸字符串 XREF 当调用）。

两段属于**邀请失败状态处理**的本地调用链，但是注册到哪个 EventFlow Query 仍未严格证明。不能填充 417 人的能力 true/false。
