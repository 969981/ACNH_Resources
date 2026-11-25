# KappeiTourInfoParam.bcsv

返回 [全量索引](README.md) · [统一字段字典](Field-Hashes.md) · [名称恢复证据](../Field-Names.md) · [残余字段证据](../../../../research/hash008h/residual_fields.json)。

原始路径：`e10617820db06889e1638499478da0de_NCA/1/Bcsv/KappeiTourInfoParam.bcsv`
SHA256：`0e87858acd80f2a4ffd4cedb8970a2bb78c7d6ad10e5fc4d52f589f2f836fbd5`
状态：parsed

行数 11，行长 56，数据起点 124。

英文名称及类型为 CRC32 签名候选，不等同于原版明文；中文取自统一字典。跨度为物理字段间距，可能包含填充。业务证据仅采用当前表、当前偏移的已登记解释或残余字段记录；无证据不推断。

| Hash | 英文名称（CRC 候选） | 简体中文释义 | 偏移 | 跨度 | 数据类型（CRC 候选） | 当前解释 | 业务证据 |
| --- | --- | --- | ---: | ---: | --- | --- | --- |
| hash_303FD59E | KappeiTourCategory | 航平 旅行 分类 | 4 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_A03A592F | KappeiTourIslandKind | 航平 旅行 岛屿 类别 | 8 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_C84432B7 | 未知 | 航平旅行引用 ID（语义别名：KappeiTourReferenceId） | 12 | 2 | 未知 | 未知，保留原值 | 未登记表级业务证据；row_hypothesis：Values 296/297/298; referenced table unverified. |
| hash_54706054 | UniqueID | 唯一ID | 14 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_6B3738E0 | WeatherPattern | 天气 款式 | 16 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_D8F76B76 | DayNorth | 日 北 | 18 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_224C7F34 | DaySouth | 日 南 | 19 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_4556B457 | ItemPlacementKind | 道具 摆放 类别 | 20 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_026C5579 | MonthNorth | 北半球月份 | 21 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_F8D7413B | MonthSouth | 南半球月份 | 22 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_88BD09C2 | PlayerFlagKeyAfterSelect | 玩家 标志 键 After 选择 | 23 | 32 | string32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_D89A0DB0 | SelectWeight | 选择 Weight | 55 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |

<!-- table-business-catalog -->

## 中文表名与业务用途

**中文表名：** 航平旅行信息

**用途：** 按文件名与字段名称候选推测：用于配置或描述航平旅行信息相关数据；具体消费逻辑待验证。

**证据等级：** 名称推测

## 数据文件

[原始 Hash CSV](../../../../research/bcsv-data/raw/KappeiTourInfoParam.csv) · [英文列名 CSV](../../../../research/bcsv-data/named/KappeiTourInfoParam.csv) · [候选类型解码 CSV](../../../../research/bcsv-data/decoded/tables/KappeiTourInfoParam.csv) · [结构 JSON](../../../../research/bcsv-data/schema/KappeiTourInfoParam.json)

## 实际原版数据样例

选择首行、中间行、末行（去重）；每格展示原始完整字段字节及候选类型解码，不把候选类型视为已确认。

| 字段 | 偏移 | 行 0（0 基） | 行 5（0 基） | 行 10（0 基） |
| --- | ---: | --- | --- | --- |
| `hash_303FD59E` 航平 旅行 分类 | 4 | 0x26296DD2 / hex:d26d2926 | 0x29843781 / hex:81378429 | 0x26296DD2 / hex:d26d2926 |
| `hash_A03A592F` 航平 旅行 岛屿 类别 | 8 | 0x30AFB93F / hex:3fb9af30 | 0x1CAB7073 / hex:7370ab1c | 0xA3E546D7 / hex:d746e5a3 |
| `hash_C84432B7` 航平旅行引用 ID（语义别名：KappeiTourReferenceId） | 12 | raw:2a01 / hex:2a01 | raw:2901 / hex:2901 | raw:2a01 / hex:2a01 |
| `hash_54706054` 唯一ID | 14 | 0 / hex:0000 | 5 / hex:0500 | 10 / hex:0a00 |
| `hash_6B3738E0` 天气 款式 | 16 | 0 / hex:0000 | 0 / hex:0000 | 14 / hex:0e00 |
| `hash_D8F76B76` 日 北 | 18 | 0 / hex:00 | 31 / hex:1f | 0 / hex:00 |
| `hash_224C7F34` 日 南 | 19 | 0 / hex:00 | 30 / hex:1e | 0 / hex:00 |
| `hash_4556B457` 道具 摆放 类别 | 20 | 0 / hex:00 | 12 / hex:0c | 0 / hex:00 |
| `hash_026C5579` 北半球月份 | 21 | 0 / hex:00 | 5 / hex:05 | 0 / hex:00 |
| `hash_F8D7413B` 南半球月份 | 22 | 0 / hex:00 | 11 / hex:0b | 0 / hex:00 |
| `hash_88BD09C2` 玩家 标志 键 After 选择 | 23 | "" / hex:0000000000000000000000000000000000000000000000000000000000000000 | "KppTourDone_RareSpringBamboo" / hex:4b7070546f7572446f6e655f52617265537072696e6742616d626f6f00000000 | "" / hex:0000000000000000000000000000000000000000000000000000000000000000 |
| `hash_D89A0DB0` 选择 Weight | 55 | 30 / hex:1e | 22 / hex:16 | 8 / hex:08 |

## 枚举码值及实际分布

仅对 hshCstringRef 候选字段统计原版前 4 字节。已登记标签来自 decoded 枚举证据，逐值校验 CRC32 与原版出现次数；中文为研究译名，候选冲突不强行合并。每字段最多展示 12 个高频值，完整映射见下方 JSON。

### 航平 旅行 分类（hash_303FD59E）

去重码值 2 个，已有标签候选 2 个。

| 原始码值 | 出现次数 | 英文候选 | 中文释义 | 证据 |
| --- | ---: | --- | --- | --- |
| 0x29843781 | 7 | Rare | Rare | crc_candidate |
| 0x26296DD2 | 4 | Normal | 法线 | crc_candidate |

### 航平 旅行 岛屿 类别（hash_A03A592F）

去重码值 11 个，已有标签候选 11 个。

| 原始码值 | 出现次数 | 英文候选 | 中文释义 | 证据 |
| --- | ---: | --- | --- | --- |
| 0x062B1504 | 1 | Sakura | 樱花 | crc_candidate |
| 0x1CAB7073 | 1 | SpringBamboo | 春季 Bamboo | crc_candidate |
| 0x1EC53ABD | 1 | Mushroom | Mushroom | crc_candidate |
| 0x30AFB93F | 1 | Haniwa | 陶俑 | crc_candidate |
| 0x45BA22AF | 1 | Maple | Maple | crc_candidate |
| 0x59691654 | 1 | Vegetable | Vegetable | crc_candidate |
| 0xA3E546D7 | 1 | RareHaniwa | Rare 陶俑 | crc_candidate |
| 0xADCECED6 | 1 | StarPiece | 星星 Piece | crc_candidate |
| 0xB5E1110D | 1 | SnowCrystal | 雪 Crystal | crc_candidate |
| 0xBFEA6D40 | 1 | OneRoom | 一 房间 | crc_candidate |
| 0xE6DCFE15 | 1 | SeaShell | Sea Shell | crc_candidate |

[完整码值与样例 JSON](../../../../research/bcsv-catalog/table-profiles.json) · [已有枚举证据 CSV](../../../../research/bcsv-data/decoded/enum-values.csv)

## 跨表关联

以下为原版 CRC32 标签值域统计候选，不是已确认的外键。

| 方向 | 来源字段 | 目标字段 | 对端表 | 匹配记录 | 去重匹配 |
| --- | --- | --- | --- | ---: | ---: |
| — | — | — | 尚无已登记候选 | — | — |

[完整关联候选](References.md) · [逐值匹配明细](../../../../research/bcsv-data/decoded/reference-values.csv)
