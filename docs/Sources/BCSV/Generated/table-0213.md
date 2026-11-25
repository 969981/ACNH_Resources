# WherearenFieldMainIslandPlacementParam.bcsv

返回 [全量索引](README.md) · [统一字段字典](Field-Hashes.md) · [名称恢复证据](../Field-Names.md) · [残余字段证据](../../../../research/hash008h/residual_fields.json)。

原始路径：`e10617820db06889e1638499478da0de_NCA/1/Bcsv/WherearenFieldMainIslandPlacementParam.bcsv`
SHA256：`9b7d0fe663a846301571873c28f1160fb5a3e38dcd4deb67526a8e6de6469295`
状态：parsed

行数 83，行长 36，数据起点 196。

英文名称及类型为 CRC32 签名候选，不等同于原版明文；中文取自统一字典。跨度为物理字段间距，可能包含填充。业务证据仅采用当前表、当前偏移的已登记解释或残余字段记录；无证据不推断。

| Hash | 英文名称（CRC 候选） | 简体中文释义 | 偏移 | 跨度 | 数据类型（CRC 候选） | 当前解释 | 业务证据 |
| --- | --- | --- | ---: | ---: | --- | --- | --- |
| hash_36C903A7 | AreaUniqueID | 区域 唯一 ID | 4 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_C33A894E | ItemNameUniqueID | 道具名称唯一ID | 6 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_2A70EF74 | NpcActionUniqueID | NPC 动作 唯一 ID | 8 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_952F0A94 | ObjectUniqueID | 对象 唯一 ID | 10 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_4154052C | OffsetX | 偏移 X | 12 | 2 | s16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_3B94564C | OffsetZ | 偏移 Z | 14 | 2 | s16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_0C78BF8F | RemakeBodyID | 改造 主体 ID | 16 | 2 | s16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_20A27847 | RemakeFabricID | 改造 布料 ID | 18 | 2 | s16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_54706054 | UniqueID | 唯一ID | 20 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_9CD5ABA6 | MainIslandItemDirection | 主要 岛屿 道具 方向 | 22 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_09F34486 | MainIslandItemLayer | 主要 岛屿 道具 层 | 23 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_EE34BAAE | MainIslandItemRemakeFabricKind | 主要 岛屿 道具 改造 布料 类别 | 24 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_B4AB694D | MainIslandItemSwitch | 主要 岛屿 道具 切换 | 25 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_82D6CF76 | MainIslandObjectKind | 主要 岛屿 对象 类别 | 26 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_1BBFE498 | Pattern1 | 款式 1 | 27 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_00BD57E6 | PatternFirstDay | 款式 第一 日 | 28 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_3B7BA91D | PatternKekeEventDay | 款式 Keke 事件 日 | 29 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_1FBC11AA | 未知 | 主岛摆放条件（语义别名：MainIslandPlacementCondition） | 30 | 1 | 未知 | 未知，保留原值 | 未登记表级业务证据；row_hypothesis：Values 0/1/2; placement condition hypothesis. |
| hash_EB22BD3B | PlaceConditionTime | 放置 条件 时间 | 31 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_923AE1F2 | PlaceType | 放置 类型 | 32 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_06A63FB6 | ReplaceTiming | 替换 时机 | 33 | 3 | u8 | 未知，保留原值 | 未登记表级业务证据 |

<!-- table-business-catalog -->

## 中文表名与业务用途

**中文表名：** 度假群岛主岛摆放

**用途：** 按文件名与字段名称候选推测：用于配置或描述度假群岛主岛摆放相关数据；具体消费逻辑待验证。

**证据等级：** 名称推测

## 数据文件

[原始 Hash CSV](../../../../research/bcsv-data/raw/WherearenFieldMainIslandPlacementParam.csv) · [英文列名 CSV](../../../../research/bcsv-data/named/WherearenFieldMainIslandPlacementParam.csv) · [候选类型解码 CSV](../../../../research/bcsv-data/decoded/tables/WherearenFieldMainIslandPlacementParam.csv) · [结构 JSON](../../../../research/bcsv-data/schema/WherearenFieldMainIslandPlacementParam.json)

## 实际原版数据样例

选择首行、中间行、末行（去重）；每格展示原始完整字段字节及候选类型解码，不把候选类型视为已确认。

| 字段 | 偏移 | 行 0（0 基） | 行 41（0 基） | 行 82（0 基） |
| --- | ---: | --- | --- | --- |
| `hash_36C903A7` 区域 唯一 ID | 4 | 3 / hex:0300 | 2 / hex:0200 | 8 / hex:0800 |
| `hash_C33A894E` 道具名称唯一ID | 6 | 14705 / hex:7139 | 9584 / hex:7025 | 13578 / hex:0a35 |
| `hash_2A70EF74` NPC 动作 唯一 ID | 8 | 0 / hex:0000 | 34 / hex:2200 | 36 / hex:2400 |
| `hash_952F0A94` 对象 唯一 ID | 10 | 0 / hex:0000 | 0 / hex:0000 | 0 / hex:0000 |
| `hash_4154052C` 偏移 X | 12 | 15 / hex:0f00 | 10 / hex:0a00 | 18 / hex:1200 |
| `hash_3B94564C` 偏移 Z | 14 | 5 / hex:0500 | 17 / hex:1100 | 30 / hex:1e00 |
| `hash_0C78BF8F` 改造 主体 ID | 16 | -1 / hex:ffff | -1 / hex:ffff | -1 / hex:ffff |
| `hash_20A27847` 改造 布料 ID | 18 | -1 / hex:ffff | -1 / hex:ffff | -1 / hex:ffff |
| `hash_54706054` 唯一ID | 20 | 48 / hex:3000 | 449 / hex:c101 | 556 / hex:2c02 |
| `hash_9CD5ABA6` 主要 岛屿 道具 方向 | 22 | 0 / hex:00 | 0 / hex:00 | 0 / hex:00 |
| `hash_09F34486` 主要 岛屿 道具 层 | 23 | 0 / hex:00 | 0 / hex:00 | 0 / hex:00 |
| `hash_EE34BAAE` 主要 岛屿 道具 改造 布料 类别 | 24 | 0 / hex:00 | 0 / hex:00 | 0 / hex:00 |
| `hash_B4AB694D` 主要 岛屿 道具 切换 | 25 | 0 / hex:00 | 0 / hex:00 | 0 / hex:00 |
| `hash_82D6CF76` 主要 岛屿 对象 类别 | 26 | 0 / hex:00 | 0 / hex:00 | 0 / hex:00 |
| `hash_1BBFE498` 款式 1 | 27 | 1 / hex:01 | 0 / hex:00 | 1 / hex:01 |
| `hash_00BD57E6` 款式 第一 日 | 28 | 0 / hex:00 | 0 / hex:00 | 0 / hex:00 |
| `hash_3B7BA91D` 款式 Keke 事件 日 | 29 | 1 / hex:01 | 0 / hex:00 | 0 / hex:00 |
| `hash_1FBC11AA` 主岛摆放条件（语义别名：MainIslandPlacementCondition） | 30 | raw:02 / hex:02 | raw:00 / hex:00 | raw:00 / hex:00 |
| `hash_EB22BD3B` 放置 条件 时间 | 31 | 0 / hex:00 | 1 / hex:01 | 1 / hex:01 |
| `hash_923AE1F2` 放置 类型 | 32 | 0 / hex:00 | 1 / hex:01 | 1 / hex:01 |
| `hash_06A63FB6` 替换 时机 | 33 | 0 / hex:000000 | 0 / hex:000000 | 0 / hex:000000 |

## 枚举码值及实际分布

仅对 hshCstringRef 候选字段统计原版前 4 字节。已登记标签来自 decoded 枚举证据，逐值校验 CRC32 与原版出现次数；中文为研究译名，候选冲突不强行合并。每字段最多展示 12 个高频值，完整映射见下方 JSON。

本表无可按此规则识别的 CRC 枚举字段；不代表不存在数值枚举或位域。

[完整码值与样例 JSON](../../../../research/bcsv-catalog/table-profiles.json) · [已有枚举证据 CSV](../../../../research/bcsv-data/decoded/enum-values.csv)

## 跨表关联

以下为原版 CRC32 标签值域统计候选，不是已确认的外键。

| 方向 | 来源字段 | 目标字段 | 对端表 | 匹配记录 | 去重匹配 |
| --- | --- | --- | --- | ---: | ---: |
| — | — | — | 尚无已登记候选 | — | — |

[完整关联候选](References.md) · [逐值匹配明细](../../../../research/bcsv-data/decoded/reference-values.csv)
