# IndoorPhotoStudioItemParam.bcsv

返回 [全量索引](README.md) · [统一字段字典](Field-Hashes.md) · [名称恢复证据](../Field-Names.md) · [残余字段证据](../../../../research/hash008h/residual_fields.json)。

原始路径：`e10617820db06889e1638499478da0de_NCA/1/Bcsv/IndoorPhotoStudioItemParam.bcsv`
SHA256：`339b0216b2caa814a76b0e2ef8bffef4e1f6414029097453c4d46149ac8d8daa`
状态：parsed

行数 20，行长 24，数据起点 92。

英文名称及类型为 CRC32 签名候选，不等同于原版明文；中文取自统一字典。跨度为物理字段间距，可能包含填充。业务证据仅采用当前表、当前偏移的已登记解释或残余字段记录；无证据不推断。

| Hash | 英文名称（CRC 候选） | 简体中文释义 | 偏移 | 跨度 | 数据类型（CRC 候选） | 当前解释 | 业务证据 |
| --- | --- | --- | ---: | ---: | --- | --- | --- |
| hash_D5A8BF7E | Dir | 方向 | 4 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_20CB67BC | ItemID | 道具ID | 8 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_374D00DA | PosX | 位置 X | 10 | 2 | s16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_4D8D53BA | PosZ | 位置 Z | 12 | 2 | s16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_C61C279A | ReBody | 主体改造 | 14 | 2 | s16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_B5980451 | ReFabric | 布料改造 | 16 | 2 | s16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_7D016B27 | RoomIndex | 房间 索引 | 18 | 2 | s16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_54706054 | UniqueID | 唯一ID | 20 | 4 | u16 | 未知，保留原值 | 未登记表级业务证据 |

<!-- table-business-catalog -->

## 中文表名与业务用途

**中文表名：** 室内摄影棚道具参数

**用途：** 按文件名与字段名称候选推测：用于配置或描述室内摄影棚道具参数相关数据；具体消费逻辑待验证。

**证据等级：** 名称推测

## 数据文件

[原始 Hash CSV](../../../../research/bcsv-data/raw/IndoorPhotoStudioItemParam.csv) · [英文列名 CSV](../../../../research/bcsv-data/named/IndoorPhotoStudioItemParam.csv) · [候选类型解码 CSV](../../../../research/bcsv-data/decoded/tables/IndoorPhotoStudioItemParam.csv) · [结构 JSON](../../../../research/bcsv-data/schema/IndoorPhotoStudioItemParam.json)

## 实际原版数据样例

选择首行、中间行、末行（去重）；每格展示原始完整字段字节及候选类型解码，不把候选类型视为已确认。

| 字段 | 偏移 | 行 0（0 基） | 行 10（0 基） | 行 19（0 基） |
| --- | ---: | --- | --- | --- |
| `hash_D5A8BF7E` 方向 | 4 | 0x2060EFC3 / hex:c3ef6020 | 0x2060EFC3 / hex:c3ef6020 | 0x2060EFC3 / hex:c3ef6020 |
| `hash_20CB67BC` 道具ID | 8 | 4911 / hex:2f13 | 5031 / hex:a713 | 4951 / hex:5713 |
| `hash_374D00DA` 位置 X | 10 | 0 / hex:0000 | 0 / hex:0000 | 0 / hex:0000 |
| `hash_4D8D53BA` 位置 Z | 12 | 0 / hex:0000 | 0 / hex:0000 | 0 / hex:0000 |
| `hash_C61C279A` 主体改造 | 14 | 0 / hex:0000 | 0 / hex:0000 | 0 / hex:0000 |
| `hash_B5980451` 布料改造 | 16 | -1 / hex:ffff | -1 / hex:ffff | -1 / hex:ffff |
| `hash_7D016B27` 房间 索引 | 18 | 0 / hex:0000 | 1 / hex:0100 | 5 / hex:0500 |
| `hash_54706054` 唯一ID | 20 | 2 / hex:02000000 | 12 / hex:0c000000 | 21 / hex:15000000 |

## 枚举码值及实际分布

仅对 hshCstringRef 候选字段统计原版前 4 字节。已登记标签来自 decoded 枚举证据，逐值校验 CRC32 与原版出现次数；中文为研究译名，候选冲突不强行合并。每字段最多展示 12 个高频值，完整映射见下方 JSON。

### 方向（hash_D5A8BF7E）

去重码值 3 个，已有标签候选 3 个。

| 原始码值 | 出现次数 | 英文候选 | 中文释义 | 证据 |
| --- | ---: | --- | --- | --- |
| 0x2060EFC3 | 13 | S | S | crc_candidate |
| 0x270D2BDA | 6 | W | W | crc_candidate |
| 0xD4B45A92 | 1 | E | E | crc_candidate |

[完整码值与样例 JSON](../../../../research/bcsv-catalog/table-profiles.json) · [已有枚举证据 CSV](../../../../research/bcsv-data/decoded/enum-values.csv)

## 跨表关联

以下为原版 CRC32 标签值域统计候选，不是已确认的外键。

| 方向 | 来源字段 | 目标字段 | 对端表 | 匹配记录 | 去重匹配 |
| --- | --- | --- | --- | ---: | ---: |
| — | — | — | 尚无已登记候选 | — | — |

[完整关联候选](References.md) · [逐值匹配明细](../../../../research/bcsv-data/decoded/reference-values.csv)
