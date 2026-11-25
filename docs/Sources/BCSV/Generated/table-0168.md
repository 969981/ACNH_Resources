# SeasonCalendar.bcsv

返回 [全量索引](README.md) · [统一字段字典](Field-Hashes.md) · [名称恢复证据](../Field-Names.md) · [残余字段证据](../../../../research/hash008h/residual_fields.json)。

原始路径：`e10617820db06889e1638499478da0de_NCA/1/Bcsv/SeasonCalendar.bcsv`
SHA256：`e30ad172cfa8456813ea3028553740cde38dc515a9a63421031dbbf46c595a3f`
状态：parsed

行数 53，行长 24，数据起点 188。

英文名称及类型为 CRC32 签名候选，不等同于原版明文；中文取自统一字典。跨度为物理字段间距，可能包含填充。业务证据仅采用当前表、当前偏移的已登记解释或残余字段记录；无证据不推断。

| Hash | 英文名称（CRC 候选） | 简体中文释义 | 偏移 | 跨度 | 数据类型（CRC 候选） | 当前解释 | 业务证据 |
| --- | --- | --- | ---: | ---: | --- | --- | --- |
| hash_4875E383 | Bush_N | 灌木 N | 4 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_EA066CC1 | Bush_S | 灌木 S | 5 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_8B21A26B | Cloud_N | 云 N | 6 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_29522D29 | Cloud_S | 云 S | 7 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_D5692BFF | Day | 日 | 8 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_61501334 | Fog_N | 雾 N | 9 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_C3239C76 | Fog_S | 雾 S | 10 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_287DB05D | Month | 月份 | 11 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_66B4A4C1 | SPWeather_N | SP 天气 N | 12 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_C4C72B83 | SPWeather_S | SP 天气 S | 13 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_B5A8FC2E | Sakura_N | 樱花 N | 14 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_17DB736C | Sakura_S | 樱花 S | 15 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_185D9096 | Season_N | 季节 N | 16 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_BA2E1FD4 | Season_S | 季节 S | 17 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_5B8BE707 | Shop_N | 商店 N | 18 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_F9F86845 | Shop_S | 商店 S | 19 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_80E1DE38 | Snow_N | 雪 N | 20 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_2292517A | Snow_S | 雪 S | 21 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_A155BC19 | Weed_N | 杂草 N | 22 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_0326335B | Weed_S | 杂草 S | 23 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |

<!-- table-business-catalog -->

## 中文表名与业务用途

**中文表名：** 季节日历

**用途：** 按文件名与字段名称候选推测：用于配置或描述季节日历相关数据；具体消费逻辑待验证。

**证据等级：** 名称推测

## 数据文件

[原始 Hash CSV](../../../../research/bcsv-data/raw/SeasonCalendar.csv) · [英文列名 CSV](../../../../research/bcsv-data/named/SeasonCalendar.csv) · [候选类型解码 CSV](../../../../research/bcsv-data/decoded/tables/SeasonCalendar.csv) · [结构 JSON](../../../../research/bcsv-data/schema/SeasonCalendar.json)

## 实际原版数据样例

选择首行、中间行、末行（去重）；每格展示原始完整字段字节及候选类型解码，不把候选类型视为已确认。

| 字段 | 偏移 | 行 0（0 基） | 行 26（0 基） | 行 52（0 基） |
| --- | ---: | --- | --- | --- |
| `hash_4875E383` 灌木 N | 4 | 6 / hex:06 | 3 / hex:03 | 0 / hex:00 |
| `hash_EA066CC1` 灌木 S | 5 | 2 / hex:02 | 6 / hex:06 | 0 / hex:00 |
| `hash_8B21A26B` 云 N | 6 | 4 / hex:04 | 1 / hex:01 | 0 / hex:00 |
| `hash_29522D29` 云 S | 7 | 0 / hex:00 | 4 / hex:04 | 0 / hex:00 |
| `hash_D5692BFF` 日 | 8 | 10 / hex:0a | 31 / hex:1f | 1 / hex:01 |
| `hash_61501334` 雾 N | 9 | 1 / hex:01 | 0 / hex:00 | 0 / hex:00 |
| `hash_C3239C76` 雾 S | 10 | 0 / hex:00 | 2 / hex:02 | 0 / hex:00 |
| `hash_287DB05D` 月份 | 11 | 1 / hex:01 | 8 / hex:08 | 1 / hex:01 |
| `hash_66B4A4C1` SP 天气 N | 12 | 2 / hex:02 | 1 / hex:01 | 0 / hex:00 |
| `hash_C4C72B83` SP 天气 S | 13 | 1 / hex:01 | 1 / hex:01 | 0 / hex:00 |
| `hash_B5A8FC2E` 樱花 N | 14 | 0 / hex:00 | 0 / hex:00 | 0 / hex:00 |
| `hash_17DB736C` 樱花 S | 15 | 0 / hex:00 | 0 / hex:00 | 0 / hex:00 |
| `hash_185D9096` 季节 N | 16 | 3 / hex:03 | 1 / hex:01 | 0 / hex:00 |
| `hash_BA2E1FD4` 季节 S | 17 | 1 / hex:01 | 0 / hex:00 | 0 / hex:00 |
| `hash_5B8BE707` 商店 N | 18 | 3 / hex:03 | 1 / hex:01 | 0 / hex:00 |
| `hash_F9F86845` 商店 S | 19 | 1 / hex:01 | 3 / hex:03 | 0 / hex:00 |
| `hash_80E1DE38` 雪 N | 20 | 2 / hex:02 | 0 / hex:00 | 0 / hex:00 |
| `hash_2292517A` 雪 S | 21 | 0 / hex:00 | 0 / hex:00 | 0 / hex:00 |
| `hash_A155BC19` 杂草 N | 22 | 5 / hex:05 | 1 / hex:01 | 0 / hex:00 |
| `hash_0326335B` 杂草 S | 23 | 1 / hex:01 | 6 / hex:06 | 0 / hex:00 |

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
