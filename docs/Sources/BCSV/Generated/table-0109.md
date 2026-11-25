# MannequinCoodinate.bcsv

返回 [全量索引](README.md) · [统一字段字典](Field-Hashes.md) · [名称恢复证据](../Field-Names.md) · [残余字段证据](../../../../research/hash008h/residual_fields.json)。

原始路径：`e10617820db06889e1638499478da0de_NCA/1/Bcsv/MannequinCoodinate.bcsv`
SHA256：`a6654ac49ad1a863bbf5d5467ce5a01f708fd2d6f9715ae6c12e34c90155c45f`
状态：parsed

行数 120，行长 32，数据起点 116。

英文名称及类型为 CRC32 签名候选，不等同于原版明文；中文取自统一字典。跨度为物理字段间距，可能包含填充。业务证据仅采用当前表、当前偏移的已登记解释或残余字段记录；无证据不推断。

| Hash | 英文名称（CRC 候选） | 简体中文释义 | 偏移 | 跨度 | 数据类型（CRC 候选） | 当前解释 | 业务证据 |
| --- | --- | --- | ---: | ---: | --- | --- | --- |
| hash_1C73934D | MannequinPose | 人体模特 姿势 | 4 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_62FF0C3D | MannequinUsage | 人体模特 用途 | 8 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_B44DBF73 | Seasonality | 季节性 | 12 | 4 | u32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_395B7795 | AccEye | 饰品 眼睛 | 16 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_79AD3F84 | AccMouth | 饰品 嘴 | 18 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_CC136EB5 | Bottoms | 下装 | 20 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_291A1B04 | Cap | 帽子 | 22 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_CE827D47 | Shoes | 鞋 | 24 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_39ED7F5A | Socks | 袜子 | 26 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_870F1E29 | Tops | 上装 | 28 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_54706054 | UniqueID | 唯一ID | 30 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |

<!-- table-business-catalog -->

## 中文表名与业务用途

**中文表名：** 人体模型坐标

**用途：** 按文件名与字段名称候选推测：用于配置或描述人体模型坐标相关数据；具体消费逻辑待验证。

**证据等级：** 名称推测

## 数据文件

[原始 Hash CSV](../../../../research/bcsv-data/raw/MannequinCoodinate.csv) · [英文列名 CSV](../../../../research/bcsv-data/named/MannequinCoodinate.csv) · [候选类型解码 CSV](../../../../research/bcsv-data/decoded/tables/MannequinCoodinate.csv) · [结构 JSON](../../../../research/bcsv-data/schema/MannequinCoodinate.json)

## 实际原版数据样例

选择首行、中间行、末行（去重）；每格展示原始完整字段字节及候选类型解码，不把候选类型视为已确认。

| 字段 | 偏移 | 行 0（0 基） | 行 60（0 基） | 行 119（0 基） |
| --- | ---: | --- | --- | --- |
| `hash_1C73934D` 人体模特 姿势 | 4 | 0x41C45ABC / hex:bc5ac441 | 0xDFA0CF1F / hex:1fcfa0df | 0xD8CD0B06 / hex:060bcdd8 |
| `hash_62FF0C3D` 人体模特 用途 | 8 | 0x26296DD2 / hex:d26d2926 | 0x26296DD2 / hex:d26d2926 | 0xA1A9E32E / hex:2ee3a9a1 |
| `hash_B44DBF73` 季节性 | 12 | 0 / hex:00000000 | 2 / hex:02000000 | 0 / hex:00000000 |
| `hash_395B7795` 饰品 眼睛 | 16 | 65534 / hex:feff | 4607 / hex:ff11 | 65534 / hex:feff |
| `hash_79AD3F84` 饰品 嘴 | 18 | 65534 / hex:feff | 65534 / hex:feff | 65534 / hex:feff |
| `hash_CC136EB5` 下装 | 20 | 11432 / hex:a82c | 65534 / hex:feff | 65534 / hex:feff |
| `hash_291A1B04` 帽子 | 22 | 11509 / hex:f52c | 11991 / hex:d72e | 9733 / hex:0526 |
| `hash_CE827D47` 鞋 | 24 | 10042 / hex:3a27 | 5620 / hex:f415 | 65534 / hex:feff |
| `hash_39ED7F5A` 袜子 | 26 | 9682 / hex:d225 | 65534 / hex:feff | 65534 / hex:feff |
| `hash_870F1E29` 上装 | 28 | 8551 / hex:6721 | 8600 / hex:9821 | 12024 / hex:f82e |
| `hash_54706054` 唯一ID | 30 | 0 / hex:0000 | 60 / hex:3c00 | 159 / hex:9f00 |

## 枚举码值及实际分布

仅对 hshCstringRef 候选字段统计原版前 4 字节。已登记标签来自 decoded 枚举证据，逐值校验 CRC32 与原版出现次数；中文为研究译名，候选冲突不强行合并。每字段最多展示 12 个高频值，完整映射见下方 JSON。

### 人体模特 姿势（hash_1C73934D）

去重码值 6 个，已有标签候选 6 个。

| 原始码值 | 出现次数 | 英文候选 | 中文释义 | 证据 |
| --- | ---: | --- | --- | --- |
| 0xD8CD0B06 | 25 | MannequinPause02 | 人体模特 暂停 02 | crc_candidate |
| 0x31AEAE33 | 23 | MannequinPause04 | 人体模特 暂停 04 | crc_candidate |
| 0x41C45ABC | 23 | MannequinPause01 | 人体模特 暂停 01 | crc_candidate |
| 0xAFCA3B90 | 18 | MannequinPause03 | 人体模特 暂停 03 | crc_candidate |
| 0x46A99EA5 | 16 | MannequinPause05 | 人体模特 暂停 05 | crc_candidate |
| 0xDFA0CF1F | 15 | MannequinPause06 | 人体模特 暂停 06 | crc_candidate |

### 人体模特 用途（hash_62FF0C3D）

去重码值 3 个，已有标签候选 3 个。

| 原始码值 | 出现次数 | 英文候选 | 中文释义 | 证据 |
| --- | ---: | --- | --- | --- |
| 0x26296DD2 | 116 | Normal | 法线 | crc_candidate |
| 0xA1A9E32E | 2 | Carnival | Carnival | crc_candidate |
| 0xF9DE8035 | 2 | Christmas | Christmas | crc_candidate |

[完整码值与样例 JSON](../../../../research/bcsv-catalog/table-profiles.json) · [已有枚举证据 CSV](../../../../research/bcsv-data/decoded/enum-values.csv)

## 跨表关联

以下为原版 CRC32 标签值域统计候选，不是已确认的外键。

| 方向 | 来源字段 | 目标字段 | 对端表 | 匹配记录 | 去重匹配 |
| --- | --- | --- | --- | ---: | ---: |
| — | — | — | 尚无已登记候选 | — | — |

[完整关联候选](References.md) · [逐值匹配明细](../../../../research/bcsv-data/decoded/reference-values.csv)
