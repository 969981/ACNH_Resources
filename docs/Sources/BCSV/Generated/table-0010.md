# CalendarEventRegionParam.bcsv

返回 [全量索引](README.md) · [统一字段字典](Field-Hashes.md) · [名称恢复证据](../Field-Names.md) · [残余字段证据](../../../../research/hash008h/residual_fields.json)。

原始路径：`e10617820db06889e1638499478da0de_NCA/1/Bcsv/CalendarEventRegionParam.bcsv`
SHA256：`ad549759a0081990af2c89041c12098eb9f96798cb958c2df51ac04f934da704`
状态：parsed

行数 76，行长 124，数据起点 124。

英文名称及类型为 CRC32 签名候选，不等同于原版明文；中文取自统一字典。跨度为物理字段间距，可能包含填充。业务证据仅采用当前表、当前偏移的已登记解释或残余字段记录；无证据不推断。

| Hash | 英文名称（CRC 候选） | 简体中文释义 | 偏移 | 跨度 | 数据类型（CRC 候选） | 当前解释 | 业务证据 |
| --- | --- | --- | ---: | ---: | --- | --- | --- |
| hash_82BFCF29 | RegionEventCountry1 | 地区 事件 国家 1 | 4 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_8B3C9137 | SortID | 排序 ID | 8 | 4 | s32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_AF2602CD | RegionEventCountry2 | 地区 事件 国家 2 | 12 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_92462B7D | RegionEventCountry3 | 地区 事件 国家 3 | 14 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_2066F76D | RegionEventCountry4 | 地区 事件 国家 4 | 16 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_1D06DEDD | RegionEventCountry5 | 地区 事件 国家 5 | 18 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_54706054 | UniqueID | 唯一ID | 20 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_BE26D70E | EventLabel | 事件 标签 | 22 | 64 | string64 | 未知，保留原值 | 未登记表级业务证据 |
| hash_46E66708 | ItemFrom | 道具 来自 | 86 | 32 | string32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_3FC005F0 | SelectColor | 选择 颜色 | 118 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_B4F1AB32 | SelectGrowUp | 选择 成长 上 | 119 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_1C2C02F5 | SelectOne | 选择 一 | 120 | 4 | u8 | 未知，保留原值 | 未登记表级业务证据 |

<!-- table-business-catalog -->

## 中文表名与业务用途

**中文表名：** 日历活动地区参数

**用途：** 按文件名与字段名称候选推测：用于配置或描述日历活动地区参数相关数据；具体消费逻辑待验证。

**证据等级：** 名称推测

## 数据文件

[原始 Hash CSV](../../../../research/bcsv-data/raw/CalendarEventRegionParam.csv) · [英文列名 CSV](../../../../research/bcsv-data/named/CalendarEventRegionParam.csv) · [候选类型解码 CSV](../../../../research/bcsv-data/decoded/tables/CalendarEventRegionParam.csv) · [结构 JSON](../../../../research/bcsv-data/schema/CalendarEventRegionParam.json)

## 实际原版数据样例

选择首行、中间行、末行（去重）；每格展示原始完整字段字节及候选类型解码，不把候选类型视为已确认。

| 字段 | 偏移 | 行 0（0 基） | 行 38（0 基） | 行 75（0 基） |
| --- | ---: | --- | --- | --- |
| `hash_82BFCF29` 地区 事件 国家 1 | 4 | 0xD5E6597A / hex:7a59e6d5 | 0xFF0E0B02 / hex:020b0eff | 0x4F3F5DE8 / hex:e85d3f4f |
| `hash_8B3C9137` 排序 ID | 8 | 100 / hex:64000000 | 912 / hex:90030000 | 1303 / hex:17050000 |
| `hash_AF2602CD` 地区 事件 国家 2 | 12 | 0 / hex:0000 | 0 / hex:0000 | 0 / hex:0000 |
| `hash_92462B7D` 地区 事件 国家 3 | 14 | 0 / hex:0000 | 0 / hex:0000 | 0 / hex:0000 |
| `hash_2066F76D` 地区 事件 国家 4 | 16 | 0 / hex:0000 | 0 / hex:0000 | 0 / hex:0000 |
| `hash_1D06DEDD` 地区 事件 国家 5 | 18 | 0 / hex:0000 | 0 / hex:0000 | 0 / hex:0000 |
| `hash_54706054` 唯一ID | 20 | 69 / hex:4500 | 50 / hex:3200 | 91 / hex:5b00 |
| `hash_BE26D70E` 事件 标签 | 22 | "Nanakusagayu" / hex:4e616e616b7573616761797500000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 | "RegionShuseki" / hex:526567696f6e53687573656b69000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 | "SummerSolsticeEU" / hex:53756d6d6572536f6c73746963654555000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 |
| `hash_46E66708` 道具 来自 | 86 | "Nanakusagayu" / hex:4e616e616b757361676179750000000000000000000000000000000000000000 | "Syuseki" / hex:53797573656b6900000000000000000000000000000000000000000000000000 | "SummerSolstice_EU" / hex:53756d6d6572536f6c73746963655f4555000000000000000000000000000000 |
| `hash_3FC005F0` 选择 颜色 | 118 | 0 / hex:00 | 0 / hex:00 | 0 / hex:00 |
| `hash_B4F1AB32` 选择 成长 上 | 119 | 0 / hex:00 | 0 / hex:00 | 0 / hex:00 |
| `hash_1C2C02F5` 选择 一 | 120 | 0 / hex:00000000 | 0 / hex:00000000 | 0 / hex:00000000 |

## 枚举码值及实际分布

仅对 hshCstringRef 候选字段统计原版前 4 字节。已登记标签来自 decoded 枚举证据，逐值校验 CRC32 与原版出现次数；中文为研究译名，候选冲突不强行合并。每字段最多展示 12 个高频值，完整映射见下方 JSON。

### 地区 事件 国家 1（hash_82BFCF29）

去重码值 17 个，已有标签候选 17 个。

| 原始码值 | 出现次数 | 英文候选 | 中文释义 | 证据 |
| --- | ---: | --- | --- | --- |
| 0xD5E6597A | 16 | Japan | Japan | crc_candidate |
| 0xDAD1B76D | 13 | Asia | Asia | crc_candidate |
| 0x95FF42E4 | 11 | EachCountry | Each 国家 | crc_candidate |
| 0x35C4632E | 5 | GreaterChina | Greater China | crc_candidate |
| 0x4F3F5DE8 | 5 | Europe | Europe | crc_candidate |
| 0x68FDB418 | 5 | America | America | crc_candidate |
| 0xFF0E0B02 | 5 | Korea | Korea | crc_candidate |
| 0x858EDF3C | 3 | Spain | Spain | crc_candidate |
| 0xFBB63E47 | 3 | World | World | crc_candidate |
| 0x69FE5873 | 2 | Northern | Northern | crc_candidate |
| 0x93454C31 | 2 | Southern | Southern | crc_candidate |
| 0x29867C5D | 1 | Mexico | Mexico | crc_candidate |

[完整码值与样例 JSON](../../../../research/bcsv-catalog/table-profiles.json) · [已有枚举证据 CSV](../../../../research/bcsv-data/decoded/enum-values.csv)

## 跨表关联

以下为原版 CRC32 标签值域统计候选，不是已确认的外键。

| 方向 | 来源字段 | 目标字段 | 对端表 | 匹配记录 | 去重匹配 |
| --- | --- | --- | --- | ---: | ---: |
| 出向 | hash_82BFCF29 | hash_87BF00E8 | [CalendarEventCountryParam.bcsv](table-0004.md) | 76/76 | 17/17 |

[完整关联候选](References.md) · [逐值匹配明细](../../../../research/bcsv-data/decoded/reference-values.csv)
