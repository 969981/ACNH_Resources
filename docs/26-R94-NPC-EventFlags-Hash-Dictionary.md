---
title: "R94 · NPC EventFlags 原版字段 Hash 字典"
aliases: ["NPC EventFlags Hash 字典","字段字典"]
tags: ["acnh","eventflags","bcsv","hash","r94"]
status: static-evidence
game_version: "3.0.3"
updated: 2026-11-24
---

# R94 · NPC EventFlags 原版字段 Hash 字典

[[00-Home|知识库主页]] · [[00-Research-Index|研究总索引]] · [[26-R94-NPC-EventFlags-Hash-Dictionary|Hash 字典]] · [[27-R94-NPC-EventFlags-Native-Consumers|Native 消费者]] · [[28-R95-NPC-EventFlags-Research-Queue|R95 待办]]

> [!info] 研究范围
> 13/17 个不同 Hash 的原名经 `CRC32(ASCII("字段名 类型"))` 精确匹配；1 个原名未知但静态行为已定位；3 个尚无语义。13/17 = 76.47%。本笔记对结构化证据做索引，不覆盖 R93 的 371 条定义或 R94 的逐条译文。未读取实际岛屿存档，actual_value 保持 null。

## 原版字段映射

| Hash | 原版名称 | 类型 | 中文含义 | 证据等级 |
| --- | --- | --- | --- | --- |
| `54706054` | `UniqueID` | `u16` | 状态定义编号 | CRC32 精确匹配 |
| `45F320F2` | `Key` | `string64` | 内部状态键 | CRC32 精确匹配 |
| `85CF1615` | `Name` | `string128` | 原版日文说明 | CRC32 精确匹配 |
| `FA93F14B` | `FlagsFlowAccess` | `u8` | EventFlow 访问配置，0/1/2 的权限语义待证实 | CRC32 精确匹配 |
| `4C24F1CF` | `DefaultValue` | `u32` | 默认值 | CRC32 精确匹配 |
| `344B17D7` | `MaxValue` | `u32` | 定义最大值 | CRC32 精确匹配 |
| `D55938BD` | `DefaultValue` | `u8` | 默认值 | CRC32 精确匹配 |
| `BD7682F5` | `MaxValue` | `u8` | 定义最大值 | CRC32 精确匹配 |
| `797F5754` | `DefaultValue` | `u16` | 默认值 | CRC32 精确匹配 |
| `0110B14C` | `MaxValue` | `u16` | 定义最大值 | CRC32 精确匹配 |
| `110A7053` | `MessageLabel` | `u16` | 消息标签 | CRC32 精确匹配 |
| `CCD4C25F` | `TalkValueVillager` | `u16` | 居民对话相关数值，单位及触发条件待验证 | CRC32 精确匹配 |
| `E6317726` | `TalkValueVisitor` | `u16` | 访客对话相关数值，单位及触发条件待验证 | CRC32 精确匹配 |
| `5140E4B4` | 未恢复 | `u8` | 条件重置规则，原始字段名仍未知 | Native 静态分支 |
| `5F77B61A` | 未恢复 | `u8` | 待逆向 | 仅保留原始字节 |
| `BED25A86` | 未恢复 | `u8` | 待逆向 | 仅保留原始字节 |
| `8D401DF7` | 未恢复 | `u8` | 待逆向 | 仅保留原始字节 |

## 关键约束

- `DefaultValue` / `MaxValue` 同名但不同宽度须按 Hash 分开，不可折叠成单个列。
- `FlagsFlowAccess` 0/1/2 原始枚举语义及消费者未证明，不能猜读写权限。
- `TalkValueVillager` 和 `TalkValueVisitor` 的单位、玩家身份绑定及实际触发条件待验证；本岛玩家/外岛访客活动的解释只作研究方向。
- `5140E4B4` 可用研究别名 `conditional_reset_rule`，不作为原版名称。
- `5F77B61A`、`BED25A86`、`8D401DF7` 保留 u8 raw，不编造名称。

## 定义表与作用域

| 表 | 研究范围 |
| --- | --- |
| [EventFlagsNpcSaveParam](https://github.com/969981/ACNH_Resources/blob/3.0.3_Unpack/UnPack/1/Bcsv/EventFlagsNpcSaveParam.csv) | NPC Save 定义 |
| [EventFlagsNpcMemoryParam](https://github.com/969981/ACNH_Resources/blob/3.0.3_Unpack/UnPack/1/Bcsv/EventFlagsNpcMemoryParam.csv) | NPC Memory 定义 |
| [EventFlagsNpcTempParam](https://github.com/969981/ACNH_Resources/blob/3.0.3_Unpack/UnPack/1/Bcsv/EventFlagsNpcTempParam.csv) | NPC 临时状态定义 |
| [EventFlagsPlayerActivityParam](https://github.com/969981/ACNH_Resources/blob/3.0.3_Unpack/UnPack/1/Bcsv/EventFlagsPlayerActivityParam.csv) | 玩家活动定义 |

用表名 + UniqueID + Key 识别条目，不以 UniqueID 单独跨表联结。字段定义宽度不必然等于运行时存储布局。

## 复现

```powershell
python Scripts/acnh303_r94_eventflag_semantics.py --root . --out artifacts/acnh303-r94-eventflags --scan-ghidra
```

本次文档构建独立复算 13 个 CRC32 均匹配；未在游戏进程中复测。逐条定义、原始日文、译文及 Ghidra 引用仍以 JSON/CSV 和原始证据为准。

## 证据与关联

- [R94 PR #68](https://github.com/969981/ACNH_Resources/pull/68)
- [field_semantics.json](https://github.com/969981/ACNH_Resources/blob/3.0.3_Unpack/derived/3.0.3/npc_event_flags/semantics/field_semantics.json)
- [native_functions.json](https://github.com/969981/ACNH_Resources/blob/3.0.3_Unpack/derived/3.0.3/npc_event_flags/semantics/native_functions.json)
- [translations_zh_cn.json](https://github.com/969981/ACNH_Resources/blob/3.0.3_Unpack/derived/3.0.3/npc_event_flags/semantics/translations_zh_cn.json)
- [R94 复现说明](https://github.com/969981/ACNH_Resources/blob/3.0.3_Unpack/derived/3.0.3/npc_event_flags/semantics/README.md)
- [R94 脚本](https://github.com/969981/ACNH_Resources/blob/3.0.3_Unpack/Scripts/acnh303_r94_eventflag_semantics.py)
- [R94 Actions 工作流](https://github.com/969981/ACNH_Resources/blob/3.0.3_Unpack/.github/workflows/acnh303-r94-eventflag-semantics.yml)

[[25-R92-Villager-Encyclopedia-Recruitment-Save-Evidence|R92 村民与存档定义]] · [[目录分类/Bcsv|BCSV]] · [[目录分类/EventFlow|EventFlow]]
