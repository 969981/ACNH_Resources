---
title: 12 · 村民入住、跨岛接走、露营地和 amiibo 静态研究
tags: [ACNH, NPC, EventFlow, amiibo, Ghidra, R85]
status: static_eventflow_verified_runtime_unknown
---
# 12 · 四种邀请资格应当分开记录

> [!important] 本轮实际结论
> 已分析 **12 个 BFEVFL 原版事件流程**，共 **958 个事件节点、340 个 SwitchEvent**，而且导出了 417 名村民的原版 UniqueID、出生日期及对话类型。但目前**没有任何一名村民的运行时邀请资格得到独立证明**。CSV 中四种资格字段统一为空，含义是 unknown，不是 false。

## 四种独立资格

| 目标字段 | 问题 | 本轮证据 |
|---|---|---|
| `can_move_in_island` | 游戏在当前岛状态下允许搬入？ | NML NPC 参数、入住事件、土地状态共同决定；尚未完成 Native 判定 |
| `can_adopt_from_other_island` | 另一位玩家在搬家期间能否接走？ | `NNPC_Reaction_Moving` 的 `EventFlowQueryNpcMoveOutState` 和 `EventFlowQueryNpcIsInducementPlayer` |
| `can_invite_to_campsite` | 能否在露营地招募？ | `NNPC_Spot_Camp_Invite` 的 `EventFlowQueryCanInduceNpc` 和 `EventFlowActionNpcFixedInducement` |
| `can_invite_with_amiibo` | 对当前 amiibo / 露营地模式能否呼叫？ | `Obj_RcoMachine_Amiibo` 的 `EventFlowQueryIsCallableAmiiboNpc`（`Purpose=cCamp`），另有 `cWherearen` 等不同用途 |

## 目前定位到的原版事件查询和动作

| 原版 EVFL | 条件查询 | 同流程的相关动作/备注 |
|---|---|---|
| `NNPC_Spot_Camp_Invite` | `EventFlowQueryCanInduceNpc` | `EventFlowActionNpcFixedInducement`、`EventFlowActionMoveIntoLandForSale`、`EventFlowActionUISelectNpcMoveOut` |
| `NNPC_Reaction_Moving` | `EventFlowQueryNpcMoveOutState`、`EventFlowQueryNpcIsInducementPlayer` | 邀请失败标志、`EventFlowActionClearInduceFailRelationFlag` |
| `NNPC_Spot_MysteryTour` | `EventFlowQueryCheckNpcMoveIn` | `EventFlowActionSetSettlerQuestInduceNpc`、`EventFlowActionMoveIntoLandForSale` |
| `NNPC_Spot_Camp` | `EventFlowQueryCheckNpcMoveIn`、`EventFlowQueryIsSameNpcLiving` | 露营地与同名村民状态判断 |
| `Obj_RcoMachine_Amiibo` | `EventFlowQueryIsCallableAmiiboNpc(Purpose=cCamp)`、`EventFlowQueryIsAmiiboNpcLiving`、`EventFlowQueryIsCampSiteOccupied` | amiibo 露营地分支 |
| `System_WherearenNPCMoveMode_Amiibo` | `EventFlowQueryIsAcceptableAmiibo`、`EventFlowQueryIsCallableAmiiboNpc(Purpose=cWherearen)` | 另一用途，不等于露营地邀请资格 |

> [!caution] `SwitchEvent` 的 `case 0/1/2` 只表示图上的数值分支；未跟踪 Query 实现和返回类型前，**不能把 0 直接翻译成“不可以接”**。

## 失败原因是真实的原版状态信息

在 `UnPack/1/Bcsv/EventFlagsNpcMemoryParam.csv` 中已经找到：
- `InduceFailAlreadyInduced`：已有被邀请且占用名额的居民
- `InduceFailSameNpcLiving`：岛上已有同名居民
- `InduceFailSameNpcMoveIn`：同名居民已有迁入计划
- `InduceFailVillagerMax`：居民数已达上限
- `InduceFailSellPlaceNothing`：没有可用的出售地块
- `InducementAtMovingDay`：搬离当天受邀标记
- `InducementFlag`：是否通过勧诱迁来

露营地另在 `EventFlagsPlayerParam.csv` 中记录 `Camp_InduceFailFlag` 及多个 `Camp_InduceFail*` 状态。它们描述**会影响资格的游戏状态**，不等于村民个人的静态白名单。

## amiibo 不能仅按 AmiiboData 数字交集决定资格

原版 `AmiiboData.csv` 有 **581 行**。`hash_04A47035` 这一**未命名的候选数值列**有 581 个不同值，与 NmlNpcParam.UniqueID 数值交集为 **359**，与 SpNpcParam.UniqueID 交集为 **19**。这只是数值交集，没有证明该字段就是角色外键，更**不能宣称“359 个村民可通过 amiibo 邀请”**。需要把 amiibo 类型、卡片识别结果及 Query 返回路径逐条建立明确映射。

## 本轮产物
- [12 个原版事件图条件与动作索引](../evidence/r85/invitation_eventflow_graphs.json)
- [417 村民资格 NULL/未知表](../evidence/r85/normal_npc_eligibility_unknown_417.csv)
- [静态汇总及失败条件](../evidence/r85/item_npc_static_summary.json)

下一篇：[[ACNH303_JSON_Rebuild/docs/13-Ghidra动态判定追踪与验收]]。
