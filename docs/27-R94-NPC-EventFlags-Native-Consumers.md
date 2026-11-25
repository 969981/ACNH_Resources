---
title: "R94 · NPC EventFlags Native 消费者与条件重置"
aliases: ["NPC Native 消费者","条件重置规则"]
tags: ["acnh","eventflags","native","ghidra","r94"]
status: static-runtime-pending
game_version: "3.0.3"
updated: 2026-11-24
---

# R94 · NPC EventFlags Native 消费者与条件重置

[[00-Home|知识库主页]] · [[00-Research-Index|研究总索引]] · [[26-R94-NPC-EventFlags-Hash-Dictionary|Hash 字典]] · [[27-R94-NPC-EventFlags-Native-Consumers|Native 消费者]] · [[28-R95-NPC-EventFlags-Research-Queue|R95 待办]]

## 条件重置 Hash 5140E4B4

| 原始值 | 静态分支语义 |
| ---: | --- |
| 0 | 此路径不重置 |
| 1 | 上下文首个值非零时重置 |
| 2 | 上下文首个值非零或额外标志非零时重置（NpcSave路径 +0x2A） |
| 3 | 此函数执行时直接重置 |
| 4 | 上下文首个值为正数时重置 |

按 UniqueID 写回 DefaultValue。0 仅表示此路径不重置，并非永远不重置；游戏日历、跨日、会话和上下文来源均待验证。

## Native 函数索引

| 作用域 | Ghidra 函数 | 角色 | 静态证据 |
| --- | --- | --- | --- |
| npc_save | `FUN_02749340` | read | 按 Key 哈希找 UniqueID，读 u16 状态槽 |
| npc_save | `FUN_02749650` | set | 按 UniqueID 定位，限制到 0..MaxValue，再写入 u16 |
| npc_save | `FUN_02749EB0` | add_signed_delta | 读 u16 加有符号增量，调用 setter |
| npc_save | `FUN_0274A3F0` | max_value | 按 Key 查找 MaxValue |
| npc_save | `FUN_02748CE0` | conditional_reset | 按 5140E4B4 选择重置条件，写回 DefaultValue |
| npc_save | `FUN_026901A0` | reset_caller | 调用 NPC Save 及多块 NPC Memory 重置逻辑 |
| npc_save | `FUN_026AA970` | house_loan_consumer | NnpcHouseLoan 与奖励计算合计至少80时设置 NnpcHouseBuildOk |
| npc_memory | `FUN_027569A0` | conditional_reset_candidate | 根据5140E4B4条件读取D55938BD默认值并写入u8；具体表绑定仍需验证 |
| npc_memory | `FUN_02746850` | conditional_reset | 由026901a0调用，匹配5140E4B4重置分支 |

NpcSave 静态 u16 读写及限幅已记录；NpcMemory 的 u8 重置仍有完整表绑定待确认；NpcTemp / PlayerActivity 存储类型未知。函数名为 Ghidra 自动名，不是官方符号；地址只能用于匹配版本和 Build ID 的静态研究，不应直接解释为可写存档偏移。

> [!warning] 证据门禁
> 字符串引用不等于已验证业务逻辑；缺少字符串引用也不能证明未使用。未获得实际存档或在线运行时采样，actual_value 仍为 null。静态证据不提升为 L4。

## 原始依据

- [R94 PR #68](https://github.com/969981/ACNH_Resources/pull/68)
- [field_semantics.json](https://github.com/969981/ACNH_Resources/blob/3.0.3_Unpack/derived/3.0.3/npc_event_flags/semantics/field_semantics.json)
- [native_functions.json](https://github.com/969981/ACNH_Resources/blob/3.0.3_Unpack/derived/3.0.3/npc_event_flags/semantics/native_functions.json)
- [translations_zh_cn.json](https://github.com/969981/ACNH_Resources/blob/3.0.3_Unpack/derived/3.0.3/npc_event_flags/semantics/translations_zh_cn.json)
- [R94 复现说明](https://github.com/969981/ACNH_Resources/blob/3.0.3_Unpack/derived/3.0.3/npc_event_flags/semantics/README.md)
- [R94 脚本](https://github.com/969981/ACNH_Resources/blob/3.0.3_Unpack/Scripts/acnh303_r94_eventflag_semantics.py)
- [R94 Actions 工作流](https://github.com/969981/ACNH_Resources/blob/3.0.3_Unpack/.github/workflows/acnh303-r94-eventflag-semantics.yml)
