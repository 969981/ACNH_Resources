# CalendarEventHarvestFishExchange.bcsv

返回 [全量索引](README.md) · [统一字段字典](Field-Hashes.md) · [名称恢复证据](../Field-Names.md) · [残余字段证据](../../../../research/hash008h/residual_fields.json)。

原始路径：`e10617820db06889e1638499478da0de_NCA/1/Bcsv/CalendarEventHarvestFishExchange.bcsv`
SHA256：`47246f6d8257810348768193ba0bff9eb63911dd238167ab4e0569ac3fbf934c`
状态：parsed

行数 32，行长 20，数据起点 100。

英文名称及类型为 CRC32 签名候选，不等同于原版明文；中文取自统一字典。跨度为物理字段间距，可能包含填充。业务证据仅采用当前表、当前偏移的已登记解释或残余字段记录；无证据不推断。

| Hash | 英文名称（CRC 候选） | 简体中文释义 | 偏移 | 跨度 | 数据类型（CRC 候选） | 当前解释 | 业务证据 |
| --- | --- | --- | ---: | ---: | --- | --- | --- |
| hash_612BC6CF | UniqueID | 唯一ID | 4 | 4 | u32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_20CB67BC | ItemID | 道具ID | 8 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_D1B5C570 | HarvestFishExchangeIngredients | 收获 鱼 交换 Ingredients | 10 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_3CA0FC03 | IsAppearNorth | 是否 出现 北 | 11 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_C61BE841 | IsAppearSouth | 是否 出现 南 | 12 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_20DD4377 | IsGive | 是否 给予 | 13 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_1365B16D | IsWant | 是否 想要 | 14 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_DB015556 | Special | 特殊 | 15 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_1B525407 | StarMark | 星星 标记 | 16 | 4 | u8 | 未知，保留原值 | 未登记表级业务证据 |

<!-- table-business-catalog -->

## 中文表名与业务用途

**中文表名：** 感恩节鱼类交换

**用途：** 按文件名与字段名称候选推测：用于配置或描述感恩节鱼类交换相关数据；具体消费逻辑待验证。

**证据等级：** 名称推测

## 数据文件

[原始 Hash CSV](../../../../research/bcsv-data/raw/CalendarEventHarvestFishExchange.csv) · [英文列名 CSV](../../../../research/bcsv-data/named/CalendarEventHarvestFishExchange.csv) · [候选类型解码 CSV](../../../../research/bcsv-data/decoded/tables/CalendarEventHarvestFishExchange.csv) · [结构 JSON](../../../../research/bcsv-data/schema/CalendarEventHarvestFishExchange.json)

## 实际原版数据样例

选择首行、中间行、末行（去重）；每格展示原始完整字段字节及候选类型解码，不把候选类型视为已确认。

| 字段 | 偏移 | 行 0（0 基） | 行 16（0 基） | 行 31（0 基） |
| --- | ---: | --- | --- | --- |
| `hash_612BC6CF` 唯一ID | 4 | 1 / hex:01000000 | 17 / hex:11000000 | 32 / hex:20000000 |
| `hash_20CB67BC` 道具ID | 8 | 2264 / hex:d808 | 2854 / hex:260b | 13994 / hex:aa36 |
| `hash_D1B5C570` 收获 鱼 交换 Ingredients | 10 | 0 / hex:00 | 1 / hex:01 | 1 / hex:01 |
| `hash_3CA0FC03` 是否 出现 北 | 11 | 1 / hex:01 | 1 / hex:01 | 1 / hex:01 |
| `hash_C61BE841` 是否 出现 南 | 12 | 1 / hex:01 | 1 / hex:01 | 1 / hex:01 |
| `hash_20DD4377` 是否 给予 | 13 | 0 / hex:00 | 0 / hex:00 | 1 / hex:01 |
| `hash_1365B16D` 是否 想要 | 14 | 1 / hex:01 | 0 / hex:00 | 0 / hex:00 |
| `hash_DB015556` 特殊 | 15 | 0 / hex:00 | 0 / hex:00 | 0 / hex:00 |
| `hash_1B525407` 星星 标记 | 16 | 0 / hex:00000000 | 0 / hex:00000000 | 0 / hex:00000000 |

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
