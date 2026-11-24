---
title: "R99 · 四个未知 EventFlags 字段原名反查"
tags: [acnh, bcsv, crc32, eventflags, research]
game_version: "3.0.3"
status: original-names-unresolved
updated: 2026-11-24
---

# R99 · 四个未知 Hash 原名反查

[[00-Home|知识库主页]] · [[30-R98-Friendship-Model-Caller-Audit|R98]]

## 结果

- 原名确认：0/4；保留 native_name=null。不要将功能别名写为官方名称。
- 对九张 3.0.3 CSV、2404 条定义做跨表核对，记录实际 blob、列值分布及全部非零 Key。
- 语义组合与原始 Key 变体共 13,130,292 次完整签名 CRC32 计算（包含重复构造），u8/s8 两种类型。0 个唯一 CRC 候选。未命中不证明其他名称不存在。
- CRC32 控制签名 FlagsFlowAccess u8 = FA93F14B。

| Hash | 静态研究别名（非原名） | 跨表发现 |
| --- | --- | --- |
| 5140E4B4 | conditional_reset_rule | Player 中实际有 13 个 rule 4，WherearenPlayer 1 个；NpcSave/Memory 中没有 4 |
| 5F77B61A | selective_default_reset_a | NpcMemory 16，NpcTemp 3，WherearenNpcMemory 和 HotelNpcTemp 全零 |
| BED25A86 | selective_reset_on_memory_transfer | Player 1196/1688 非零、NpcMemory 11/167；并非 NPC 专用 |
| 8D401DF7 | selective_default_reset_b | NpcMemory 14、NpcTemp 35、HotelNpcTemp 1（ContinuousReactionTalkCount） |

## 历史证据
CRCPedia 的 [NPC Memory](https://alexislours.github.io/crcpedia/tables/EventFlagsNpcMemoryParam.html) 和 [Player](https://alexislours.github.io/crcpedia/tables/EventFlagsPlayerParam.html) 仍未命名四列。BED25A86 在历史 Player 表 1.4.0、NPC Memory 表 1.5.0 出现；时间与玩家迁移相关功能可作为进一步词汇线索，不能据此直接命名。[公开 2.0 字段规格](https://github.com/Treeki/CylindricalEarth/blob/master/specs_200.py) 也保留 hash 名。

## 复现

```powershell
python Scripts/acnh303_r99_field_name_recovery.py --root . --out artifacts/r99-name-recovery.json
```

机器可读 audit.json 内包含准确语法词表、签名检查次数、数据源与实际结果；新增 Python 是对本次实际 JS 审计的独立复现实现，本轮尚未运行 Python。无运行时证据，不变更 R94 名字字典。

## 后续
优先扩展历史 BCSV 字段签名、SDK/资源真实词汇和原版枚举语料；寻找原始表格表头或调试符号。所有新的 CRC32 命中先标记 candidate，再核对字段类型、版本、Native 消费者，不以随机碰撞升级原名。
