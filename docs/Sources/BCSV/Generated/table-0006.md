# CalendarEventHarvestNeceaasryIngredient.bcsv

返回 [全量索引](README.md) · [统一字段字典](Field-Hashes.md) · [名称恢复证据](../Field-Names.md) · [残余字段证据](../../../../research/hash008h/residual_fields.json)。

原始路径：`e10617820db06889e1638499478da0de_NCA/1/Bcsv/CalendarEventHarvestNeceaasryIngredient.bcsv`
SHA256：`d10fb934d95e9eb341257faafcb1f249caffe8399820954f0980e2c92bfd9550`
状态：parsed

行数 23，行长 28，数据起点 164。

英文名称及类型为 CRC32 签名候选，不等同于原版明文；中文取自统一字典。跨度为物理字段间距，可能包含填充。业务证据仅采用当前表、当前偏移的已登记解释或残余字段记录；无证据不推断。

| Hash | 英文名称（CRC 候选） | 简体中文释义 | 偏移 | 跨度 | 数据类型（CRC 候选） | 当前解释 | 业务证据 |
| --- | --- | --- | ---: | ---: | --- | --- | --- |
| hash_612BC6CF | UniqueID | 唯一ID | 4 | 4 | u32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_20CB67BC | ItemID | 道具ID | 8 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_3CA0FC03 | IsAppearNorth | 是否 出现 北 | 10 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_C61BE841 | IsAppearSouth | 是否 出现 南 | 11 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_647A321A | IsHide1 | 是否 隐藏 1 | 12 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_B83CD0E1 | IsHide2_1 | 是否 隐藏 2 1 | 13 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_AA897F0F | IsHide2_2 | 是否 隐藏 2 2 | 14 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_CE73FA91 | IsHide3 | 是否 隐藏 3 | 15 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_53A4C228 | IsHide4 | 是否 隐藏 4 | 16 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_F659C43B | IsNecessary1_1 | 是否 必要 1 1 | 17 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_70CDB695 | IsNecessary2_1 | 是否 必要 2 1 | 18 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_6278197B | IsNecessary2_2 | 是否 必要 2 2 | 19 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_BB916530 | IsNecessary3_1 | 是否 必要 3 1 | 20 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_A924CADE | IsNecessary3_2 | 是否 必要 3 2 | 21 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_A6945588 | IsNecessary4_1 | 是否 必要 4 1 | 22 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_B421FA66 | IsNecessary4_2 | 是否 必要 4 2 | 23 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_A3A7A19F | IsVariable | 是否 Variable | 24 | 4 | u8 | 未知，保留原值 | 未登记表级业务证据 |

<!-- table-business-catalog -->

## 中文表名与业务用途

**中文表名：** 感恩节必要食材

**用途：** 按文件名与字段名称候选推测：用于配置或描述感恩节必要食材相关数据；具体消费逻辑待验证。

**证据等级：** 名称推测

## 数据文件

[原始 Hash CSV](../../../../research/bcsv-data/raw/CalendarEventHarvestNeceaasryIngredient.csv) · [英文列名 CSV](../../../../research/bcsv-data/named/CalendarEventHarvestNeceaasryIngredient.csv) · [候选类型解码 CSV](../../../../research/bcsv-data/decoded/tables/CalendarEventHarvestNeceaasryIngredient.csv) · [结构 JSON](../../../../research/bcsv-data/schema/CalendarEventHarvestNeceaasryIngredient.json)

## 实际原版数据样例

选择首行、中间行、末行（去重）；每格展示原始完整字段字节及候选类型解码，不把候选类型视为已确认。

| 字段 | 偏移 | 行 0（0 基） | 行 11（0 基） | 行 22（0 基） |
| --- | ---: | --- | --- | --- |
| `hash_612BC6CF` 唯一ID | 4 | 0 / hex:00000000 | 11 / hex:0b000000 | 22 / hex:16000000 |
| `hash_20CB67BC` 道具ID | 8 | 2567 / hex:070a | 2854 / hex:260b | 13994 / hex:aa36 |
| `hash_3CA0FC03` 是否 出现 北 | 10 | 1 / hex:01 | 1 / hex:01 | 1 / hex:01 |
| `hash_C61BE841` 是否 出现 南 | 11 | 1 / hex:01 | 1 / hex:01 | 1 / hex:01 |
| `hash_647A321A` 是否 隐藏 1 | 12 | 0 / hex:00 | 0 / hex:00 | 0 / hex:00 |
| `hash_B83CD0E1` 是否 隐藏 2 1 | 13 | 0 / hex:00 | 0 / hex:00 | 0 / hex:00 |
| `hash_AA897F0F` 是否 隐藏 2 2 | 14 | 0 / hex:00 | 0 / hex:00 | 0 / hex:00 |
| `hash_CE73FA91` 是否 隐藏 3 | 15 | 0 / hex:00 | 0 / hex:00 | 0 / hex:00 |
| `hash_53A4C228` 是否 隐藏 4 | 16 | 0 / hex:00 | 0 / hex:00 | 0 / hex:00 |
| `hash_F659C43B` 是否 必要 1 1 | 17 | 1 / hex:01 | 0 / hex:00 | 0 / hex:00 |
| `hash_70CDB695` 是否 必要 2 1 | 18 | 0 / hex:00 | 0 / hex:00 | 0 / hex:00 |
| `hash_6278197B` 是否 必要 2 2 | 19 | 0 / hex:00 | 0 / hex:00 | 0 / hex:00 |
| `hash_BB916530` 是否 必要 3 1 | 20 | 0 / hex:00 | 0 / hex:00 | 0 / hex:00 |
| `hash_A924CADE` 是否 必要 3 2 | 21 | 0 / hex:00 | 0 / hex:00 | 0 / hex:00 |
| `hash_A6945588` 是否 必要 4 1 | 22 | 0 / hex:00 | 0 / hex:00 | 0 / hex:00 |
| `hash_B421FA66` 是否 必要 4 2 | 23 | 0 / hex:00 | 0 / hex:00 | 1 / hex:01 |
| `hash_A3A7A19F` 是否 Variable | 24 | 0 / hex:00000000 | 1 / hex:01000000 | 1 / hex:01000000 |

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
