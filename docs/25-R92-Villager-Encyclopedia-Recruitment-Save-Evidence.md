---
title: ACNH 3.0.3 R92 — 村民百科 417、跨岛招募事件图、NPC Save 字段字典
tags: [ACNH, 3.0.3, NmlNpcParam, 14-locale, NPC, EventFlow, Save, R92]
status: original-source-catalog-crossref-native-runtime-pending
---

# R92 · 417 名村民百科、联动判定与 NPC Save 字典

**目标**：沿用 R82/R84 的原始 14-locale 数据与 R91 的 417/417 原始字节验证，在不覆盖旧 JSON、不猜测联机可招募能力和游戏状态的前提下，把下一阶段的三类研究变成可以重复构建的结构化证据。R92 是研究数据独立旁路，不是 UI 改版。

## A. 原版村民百科：417 × 14 locales

- 原始 v2：`artifacts/acnh303-web14/villager_db_multi_v2.json`；源自 R82 真实 Nintendo MSBT、NPC 原始参数、原版图像。
- R91：`artifacts/acnh303-r91/villager_native_static_semantics.json`；每条 `ResName` 对应真实原始 Looks CRC、0–7 Native index、`boy/girl` 分组和 Race 字符码。
- R92 新增 `villager_encyclopedia_417.json`；对 417 位居民按 `ResName` 严格一对一联表，保留源索引、14 个 Nintendo locale 的名字+证据、Birthday、Looks、Race、原始照片/海报物品 ID、R82 的原版图片家族及 SHA、衣物/雨具/手机改造参数。

**Hobby 新证据**：`NmlNpcParam.hash_9EEA1288` 的六个原始值全部能匹配 `CRC32(ASCII)` 的 `Education / Fitness / Fashion / Nature / Play / Music` 原版候选字符串，并可对全部 417 位居民无损关联。暂标记 `ORIGINAL_ENUM_CRC32_CROSSREF_NATIVE_FIELD_NAME_PENDING`，不是完整 Native 消费者已验证。

**联动新证据**：`hash_1C57897D` 的 raw 分组与角色身份精确关联：0=407 普通，1=6 Sanrio，2=2 Splatoon，3=2 Zelda；`InitLive` 对普通是 1，联动 10 人是 0。这里的分组标签来自对真实 `ResName` 和原版记录的交叉验证，*尚未证明该 hash 的 Native 真实枚举名或由其决定招募限制*。

房屋：`WallType`、`FloorType` 静态 raw 字段可导出；Native 反编译出现 `Param/NpcHouse/%s.byml` 路径，**但本次未取得每名村民真实 BYML 与布局**。导出 `source_path_template` 仅保留候选，`original_house_byml_extracted=false`，`furniture_layout=null`，不得用模板猜出房间素材。

## B. 跨岛招募 Native 调用链入口

`villager_recruitment_eventflow_evidence.json` 保存下列**原版 BFEVFL 解码图**的所有节点、每个节点索引、完整参数、分支 case 值、下一步 node、入口和原始文件 SHA：

- `NNPC_Reaction_Moving`：`MoveIn` / `MoveOut` / `Scout` / `Scout2` 等入口；`EventFlowQueryIsCollaboNpc(cAny)` 三处原始节点索引 111 / 112 / 113；`EventFlowQueryNpcInviteCheck` 原始 Type=0/1/2；`EventFlowQueryNpcMoveOutState` 0–4。
- `NNPC_Spot_Camp_Invite`：露营邀请 `EventFlowQueryCanInduceNpc`、可用房屋数 `EventFlowQueryNpcHouseNum`、`EventFlowActionMoveIntoLandForSale`。
- `Obj_RcoMachine_AmiiboCall`：`EventFlowQueryIsAmiiboNpcLiving` 与 `EventFlowActionSetAmiiboCamperNPC`。
- `System_WherearenNPCMoveMode_Amiibo`：`EventFlowQueryIsAcceptableAmiibo`、`EventFlowQueryIsCallableAmiiboNpc`。
- `NNPC_Talk_Situation`：通话/搬入/搬出相关入口的连接上下文。

**Native 待证据**：这些是精确 EventFlow 查询名，而不是已定位 Query 实现 VA；`native_callback_va=null`。GitHub 仓库包含大量 3.0.3 Ghidra 导出，但当前尚未按 Build ID 还原上述 EventFlow 查询绑定与所有返回码的实现。没有 GDB/在线 trace，`can_be_adopted_from_other_island=null`，不能由 `IsCollaboNpc` 存在就草率推断“永远不能接走”。

必要运行时测试矩阵：普通村民 vs 6 Sanrio / 2 Zelda / 2 Splatoon；非搬家、表达想搬、搬家装箱；自己岛/朋友岛；未出售空地/已占空地/满员；岛主/访客；加入成功/失败/联机掉线；每项保存 `build_id, query_function_va, event_node, case, npc_res_name, host_save_slot, guest_save_slot, response_code, ui_message, commit/rollback`。

## C. 居民存档状态 schema：只有定义，没有存档

`villager_save_state_definitions.json` 从原版 BCSV 读取 **4 张定义表**，保留每行原始 hash 字段、名称、UniqueID、原始索引、源 SHA 和存储作用域：

- `EventFlagsNpcMemoryParam`：包含 `Friendship`（字段上限 255）、`TalkCountToday`、`NextMoveOutTalk`、`TalkMoveOut`、`InducementAtMovingDay`、`InduceFailAlreadyInduced`、`InduceFailSameNpcLiving`、`InduceFailSameNpcMoveIn`、`InduceFailVillagerMax`、`InduceFailSellPlaceNothing`。
- `EventFlagsNpcSaveParam`：包含 `MoveInCompletion`、`MoveRoomIndex`、`AbandonedHouse`、`ForceMoveOut`。
- `EventFlagsNpcTempParam`：临时状态定义。
- `EventFlagsPlayerActivityParam`：例如 `TalkNpc0Count`–`TalkNpc9Count` 等玩家活动计数的定义。

**不允许误读**：定义表有 `Friendship` 的范围或 `MoveInCompletion` 的 key，并不代表“已经读取到某个岛上的友情/是否装箱”。其值仍为 `null`，等待实际岛屿存档或 Runtime 读取证据。还要区分每个 NPC 的**本岛存档状态**、**玩家-NPC 记忆**、**访客/岛主会话状态**。

## D. 本地命令与独立输出

```powershell
cd D:\WorkSpace\Pokemon\ACNH_Resources
py -m pip install zstandard
py Scripts/acnh303_web14_export.py --root . --out artifacts/acnh303-web14
py Scripts/acnh303_r91_nmlnpc_semantics.py --root . --out artifacts/acnh303-r91
py Scripts/acnh303_r92_villager_encyclopedia.py --root . --web14 artifacts/acnh303-web14 --r91 artifacts/acnh303-r91 --out artifacts/acnh303-r92
```

R92 交付：
- `villager_encyclopedia_417.json`：居民百科，含来源、图片候选、衣着、房屋 raw、Hobby 与静态联动组，所有 Runtime 招募行为保持 `null`；
- `villager_recruitment_eventflow_evidence.json`：原始事件图索引、节点、实际分支边及 SHA、Native 待验证；
- `villager_save_state_definitions.json`：NpcMemory/NpcSave/NpcTemp/PlayerActivity 原始字段字典（**不含任何存档实际值**）；
- `villager_research_manifest.json`：数量/来源 SHA/输出文件 SHA 与 Native/联机证据门禁。

工作流：`.github/workflows/acnh303-r92-villager-encyclopedia.yml`，先运行既有 v2/R91 证据工具，再独立验收 417×14、六 Hobby、联动 407/6/2/2、事件节点 111/112/113、Type 0/1/2、全部岛屿状态 null，最后发布 JSON Artifact。CI 成功后才可标记 R92 代码可复现，不等于真实联网可接。

## E. 后续实际逆向顺序

1. 从原版 `IsCollaboNpc` 的三个流程节点逐一遍历至 `NpcInviteCheck(Type)`、UI 错误文本和 `NpcFixedInducement`，建立阻断规则真值表。
2. Ghidra 查 EventFlow Query 的 actor binding、回调、状态表来源；精确 Build ID + GDB 捕获真实普通/联动村民装箱和跨岛双方状态。
3. 分别重建 `NpcMemory` 和 `NpcSave` 的保存结构、字段位序、访问函数，再对真实存档只读验收；不得直接使用原始定义字段名猜内存地址。
4. 从 RomFS 重建 `Param/NpcHouse/*.byml` 和相关外观/室内配置，导出与 `ResName` 原版映射；无来源时保留 null。
5. R92 独立 overlay 经来源与 UI 验收后再接入网站，不能覆盖旧版文件。

## 原版入口

- [R91/R92 工作分支](https://github.com/969981/ACNH_Resources/tree/research/r91-nmlnpc-looks-race-semantics)
- [R91 PR #66](https://github.com/969981/ACNH_Resources/pull/66)
- [NmlNpcParam 原始解包](https://github.com/969981/ACNH_Resources/blob/3.0.3_Unpack/UnPack/1/Bcsv/NmlNpcParam.csv)
- [NPC Save Param](https://github.com/969981/ACNH_Resources/blob/3.0.3_Unpack/UnPack/1/Bcsv/EventFlagsNpcSaveParam.csv)
- [NPC Memory Param](https://github.com/969981/ACNH_Resources/blob/3.0.3_Unpack/UnPack/1/Bcsv/EventFlagsNpcMemoryParam.csv)

