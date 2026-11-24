---
title: 13 · Ghidra 邀请、搬家及道具限制候选追踪
tags: [ACNH, Ghidra, AArch64, NPC, invitation, runtime]
status: decompiled_string_xrefs_only
---
# 13 · Ghidra 静态候选和如何继续核实真实函数

## 已定位的两个原生反编译文件

| 地址 | 文件 | 原版字符串/调用特征 | 当前等级 |
|---|---|---|---|
| `0x00EE5828` | `derived/3.0.3/ghidra12.2/c/58/00ee5828.c` | `Camp_InduceFailFlag`、`Camp_%s`、`InduceFailAlreadyInduced`；调用 `FUN_0274BCE0` | 原生静态字符串/失败状态读入证据 |
| `0x00F089A0` | `derived/3.0.3/ghidra12.2/c/89/00f089a0.c` | 使用 `Camp_%s` 格式名，与多组 `Camp_InduceFail*` 比较 | 同上 |

**没有**建立 `EventFlowQueryCanInduceNpc` 的注册表 → vtable/dispatch → 具体原生地址的直接函数映射；这两处目前都只能称为 **候选函数**，不得硬改为最终邀请资格函数。

## 实际可复核的检索

~~~powershell
rg -n "Camp_InduceFailFlag|Camp_%s|InduceFailAlreadyInduced" derived/3.0.3/ghidra12.2/c
rg -n "EventFlowQueryCanInduceNpc|EventFlowQueryNpcIsInducementPlayer|EventFlowQueryIsCallableAmiiboNpc" UnPack/1/EventFlow
rg -n "InduceFailSameNpcLiving|InduceFailVillagerMax|InduceFailSellPlaceNothing" UnPack/1/Bcsv
~~~

## 后续的完整验证关口

1. 从 `NNPC_Spot_Camp_Invite.json` 找到对应 `SwitchEvent`，记录 `event_index, query, cases, params`；但不要先假设其 case 值语义。
2. 查 `main.elf` 的函数注册数组、字符串或哈希消费者，找 `EventFlowQueryCanInduceNpc` 等的准确派发调用者；每条 XREF 应保存地址、上下文、Ghidra 函数签名、原始机器码。
3. 对 `FUN_00EE5828`、`FUN_00F089A0` 做 caller/callee 回溯，并与 `EventFlowQueryIsInduceFailedReasonFixUp` 等相邻流程对照，排除“失败原因显示函数”被误当“资格检查函数”的可能。
4. 在合法的本机游戏测试存档，分别控制 **本岛空地/满员/搬出当天/来访玩家/同名 NPC/露营地/amiibo 卡类型**，动态记录 Query 入参、返回值、UI 分支及存档状态。
5. 只有在条件覆盖与函数层返回语义完成后，才能写回 `can_move_in_island`、`can_adopt_from_other_island`、`can_invite_to_campsite` 和 `can_invite_with_amiibo` 的 true/false，并附上下文。否则全部保持未知。

> [!important] 防止错误静态判定
> `NmlNpcParam` 417 名普通村民存在，**不证明**所有人都能在任何游戏状态接走。`AmiiboData` 的数值交集也不证明通过 amiibo 可邀请。R82 原版数据库的四类资格字段都是 NULL。

与道具相关的运行时跟踪还需注意：`CanPut`、`CantTakeOver`、`CanSell` 等只是 ItemKind 静态原始标志，并不自动等于某场景下“可捡/可带走/可交易”。
