# WherearenFacility.bcsv

返回 [全量索引](README.md) · [统一字段字典](Field-Hashes.md) · [名称恢复证据](../Field-Names.md) · [残余字段证据](../../../../research/hash008h/residual_fields.json)。

原始路径：`e10617820db06889e1638499478da0de_NCA/1/Bcsv/WherearenFacility.bcsv`
SHA256：`06ca0cc162ff6673a1fe07f8cc0248a0f5cda837ecf0494ccf3fc3a97b429257`
状态：parsed

行数 5，行长 28，数据起点 100。

英文名称及类型为 CRC32 签名候选，不等同于原版明文；中文取自统一字典。跨度为物理字段间距，可能包含填充。业务证据仅采用当前表、当前偏移的已登记解释或残余字段记录；无证据不推断。

| Hash | 英文名称（CRC 候选） | 简体中文释义 | 偏移 | 跨度 | 数据类型（CRC 候选） | 当前解释 | 业务证据 |
| --- | --- | --- | ---: | ---: | --- | --- | --- |
| hash_D0609ACC | Room0 | 房间 0 | 4 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_699B4124 | Room1 | 房间 1 | 8 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_78E62B5D | Room2 | 房间 2 | 12 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_BE6737AC | SortID | 排序 ID | 16 | 2 | s16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_54706054 | UniqueID | 唯一ID | 18 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_E1C21E03 | UnlockEvent | 解锁 事件 | 20 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_1DD11BC9 | UnlockEvent1 | 解锁 事件 1 | 22 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_B04AC9EC | UnlockRoom1SecondEdit | 解锁 房间 1 第二 编辑 | 24 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_CC2BEC37 | UnlockRoom2SecondEdit | 解锁 房间 2 第二 编辑 | 25 | 3 | u8 | 未知，保留原值 | 未登记表级业务证据 |

<!-- table-business-catalog -->

## 中文表名与业务用途

**中文表名：** 度假群岛设施

**用途：** 按文件名与字段名称候选推测：用于配置或描述度假群岛设施相关数据；具体消费逻辑待验证。

**证据等级：** 名称推测

## 数据文件

[原始 Hash CSV](../../../../research/bcsv-data/raw/WherearenFacility.csv) · [英文列名 CSV](../../../../research/bcsv-data/named/WherearenFacility.csv) · [候选类型解码 CSV](../../../../research/bcsv-data/decoded/tables/WherearenFacility.csv) · [结构 JSON](../../../../research/bcsv-data/schema/WherearenFacility.json)

## 实际原版数据样例

选择首行、中间行、末行（去重）；每格展示原始完整字段字节及候选类型解码，不把候选类型视为已确认。

| 字段 | 偏移 | 行 0（0 基） | 行 2（0 基） | 行 4（0 基） |
| --- | ---: | --- | --- | --- |
| `hash_D0609ACC` 房间 0 | 4 | 0xFE32DF8D / hex:8ddf32fe | 0xA4C811EF / hex:ef11c8a4 | 0xD902580A / hex:0a5802d9 |
| `hash_699B4124` 房间 1 | 8 | 0xDFA2AFF1 / hex:f1afa2df | 0x9E723847 / hex:4738729e | 0xDFA2AFF1 / hex:f1afa2df |
| `hash_78E62B5D` 房间 2 | 12 | 0xDFA2AFF1 / hex:f1afa2df | 0x077B69FD / hex:fd697b07 | 0xDFA2AFF1 / hex:f1afa2df |
| `hash_BE6737AC` 排序 ID | 16 | 0 / hex:0000 | 2 / hex:0200 | 4 / hex:0400 |
| `hash_54706054` 唯一ID | 18 | 0 / hex:0000 | 2 / hex:0200 | 4 / hex:0400 |
| `hash_E1C21E03` 解锁 事件 | 20 | 2 / hex:0200 | 4 / hex:0400 | 6 / hex:0600 |
| `hash_1DD11BC9` 解锁 事件 1 | 22 | 2 / hex:0200 | 10 / hex:0a00 | 6 / hex:0600 |
| `hash_B04AC9EC` 解锁 房间 1 第二 编辑 | 24 | 0 / hex:00 | 0 / hex:00 | 0 / hex:00 |
| `hash_CC2BEC37` 解锁 房间 2 第二 编辑 | 25 | 0 / hex:000000 | 1 / hex:010000 | 0 / hex:000000 |

## 枚举码值及实际分布

仅对 hshCstringRef 候选字段统计原版前 4 字节。已登记标签来自 decoded 枚举证据，逐值校验 CRC32 与原版出现次数；中文为研究译名，候选冲突不强行合并。每字段最多展示 12 个高频值，完整映射见下方 JSON。

### 房间 0（hash_D0609ACC）

去重码值 5 个，已有标签候选 5 个。

| 原始码值 | 出现次数 | 英文候选 | 中文释义 | 证据 |
| --- | ---: | --- | --- | --- |
| 0xA4C811EF | 1 | Restaurant | Restaurant | crc_candidate |
| 0xBBF4AA0D | 1 | Hospital | Hospital | crc_candidate |
| 0xD902580A | 1 | Tailor | Tailor | crc_candidate |
| 0xEF8FD02E | 1 | Cafe | Cafe | crc_candidate |
| 0xFE32DF8D | 1 | School | School | crc_candidate |

### 房间 1（hash_699B4124）

去重码值 4 个，已有标签候选 4 个。

| 原始码值 | 出现次数 | 英文候选 | 中文释义 | 证据 |
| --- | ---: | --- | --- | --- |
| 0xDFA2AFF1 | 2 | None | None | crc_candidate |
| 0x9E723847 | 1 | Restaurant_1 | Restaurant 1 | crc_candidate |
| 0xA0F06729 | 1 | Cafe_1 | Cafe 1 | crc_candidate |
| 0xAE89DC11 | 1 | Hospital_1 | Hospital 1 | crc_candidate |

### 房间 2（hash_78E62B5D）

去重码值 3 个，已有标签候选 3 个。

| 原始码值 | 出现次数 | 英文候选 | 中文释义 | 证据 |
| --- | ---: | --- | --- | --- |
| 0xDFA2AFF1 | 3 | None | None | crc_candidate |
| 0x077B69FD | 1 | Restaurant_2 | Restaurant 2 | crc_candidate |
| 0x37808DAB | 1 | Hospital_2 | Hospital 2 | crc_candidate |

[完整码值与样例 JSON](../../../../research/bcsv-catalog/table-profiles.json) · [已有枚举证据 CSV](../../../../research/bcsv-data/decoded/enum-values.csv)

## 跨表关联

以下为原版 CRC32 标签值域统计候选，不是已确认的外键。

| 方向 | 来源字段 | 目标字段 | 对端表 | 匹配记录 | 去重匹配 |
| --- | --- | --- | --- | ---: | ---: |
| — | — | — | 尚无已登记候选 | — | — |

[完整关联候选](References.md) · [逐值匹配明细](../../../../research/bcsv-data/decoded/reference-values.csv)
