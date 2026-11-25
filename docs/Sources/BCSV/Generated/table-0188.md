# StructureInfoParam.bcsv

返回 [全量索引](README.md) · [统一字段字典](Field-Hashes.md) · [名称恢复证据](../Field-Names.md) · [残余字段证据](../../../../research/hash008h/residual_fields.json)。

原始路径：`e10617820db06889e1638499478da0de_NCA/1/Bcsv/StructureInfoParam.bcsv`
SHA256：`f5f63a1e4681b70ac60e55b3af4c306e8ed595ca97c27c88a0fcf052727870a7`
状态：parsed

行数 39，行长 28，数据起点 84。

英文名称及类型为 CRC32 签名候选，不等同于原版明文；中文取自统一字典。跨度为物理字段间距，可能包含填充。业务证据仅采用当前表、当前偏移的已登记解释或残余字段记录；无证据不推断。

| Hash | 英文名称（CRC 候选） | 简体中文释义 | 偏移 | 跨度 | 数据类型（CRC 候选） | 当前解释 | 业务证据 |
| --- | --- | --- | ---: | ---: | --- | --- | --- |
| hash_1FF4093D | HousePartsType | 房屋 部件 类型 | 4 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_C01E47A7 | ModelType | 模型 类型 | 8 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_FEC3548B | StageNameHash | 阶段 名称 哈希 | 12 | 4 | stringMurmurHash | 未知，保留原值 | 未登记表级业务证据 |
| hash_CC24374E | StructureInfoHouseType | 结构 信息 房屋 类型 | 16 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_D6704D8B | StructureInfoType | 结构 信息 类型 | 20 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_0D664B5C | Door0 | 门 0 | 24 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_54706054 | UniqueID | 唯一ID | 26 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |

<!-- table-business-catalog -->

## 中文表名与业务用途

**中文表名：** 建筑信息参数

**用途：** 按文件名与字段名称候选推测：用于配置或描述建筑信息参数相关数据；具体消费逻辑待验证。

**证据等级：** 名称推测

## 数据文件

[原始 Hash CSV](../../../../research/bcsv-data/raw/StructureInfoParam.csv) · [英文列名 CSV](../../../../research/bcsv-data/named/StructureInfoParam.csv) · [候选类型解码 CSV](../../../../research/bcsv-data/decoded/tables/StructureInfoParam.csv) · [结构 JSON](../../../../research/bcsv-data/schema/StructureInfoParam.json)

## 实际原版数据样例

选择首行、中间行、末行（去重）；每格展示原始完整字段字节及候选类型解码，不把候选类型视为已确认。

| 字段 | 偏移 | 行 0（0 基） | 行 19（0 基） | 行 38（0 基） |
| --- | ---: | --- | --- | --- |
| `hash_1FF4093D` 房屋 部件 类型 | 4 | 0x9FB57F53 / hex:537fb59f | 0x9FB57F53 / hex:537fb59f | 0x9FB57F53 / hex:537fb59f |
| `hash_C01E47A7` 模型 类型 | 8 | 0xA6141699 / hex:991614a6 | 0xE92FF6E4 / hex:e4f62fe9 | 0xA6141699 / hex:991614a6 |
| `hash_FEC3548B` 阶段 名称 哈希 | 12 | 0x00000000 / hex:00000000 | 0x6622BD46 / hex:46bd2266 | 0xDB5D97B8 / hex:b8975ddb |
| `hash_CC24374E` 结构 信息 房屋 类型 | 16 | 0x9FB57F53 / hex:537fb59f | 0x9FB57F53 / hex:537fb59f | 0x3146B619 / hex:19b64631 |
| `hash_D6704D8B` 结构 信息 类型 | 20 | 0xA6141699 / hex:991614a6 | 0xE92FF6E4 / hex:e4f62fe9 | 0xA6141699 / hex:991614a6 |
| `hash_0D664B5C` 门 0 | 24 | 1 / hex:0100 | 0 / hex:0000 | 49 / hex:3100 |
| `hash_54706054` 唯一ID | 26 | 0 / hex:0000 | 19 / hex:1300 | 43 / hex:2b00 |

## 枚举码值及实际分布

仅对 hshCstringRef 候选字段统计原版前 4 字节。已登记标签来自 decoded 枚举证据，逐值校验 CRC32 与原版出现次数；中文为研究译名，候选冲突不强行合并。每字段最多展示 12 个高频值，完整映射见下方 JSON。

### 房屋 部件 类型（hash_1FF4093D）

去重码值 2 个，已有标签候选 2 个。

| 原始码值 | 出现次数 | 英文候选 | 中文释义 | 证据 |
| --- | ---: | --- | --- | --- |
| 0x9FB57F53 | 28 | Player | 玩家 | crc_candidate |
| 0x7EC130CC | 11 | Npc | NPC | crc_candidate |

### 模型 类型（hash_C01E47A7）

去重码值 5 个，已有标签候选 5 个。

| 原始码值 | 出现次数 | 英文候选 | 中文释义 | 证据 |
| --- | ---: | --- | --- | --- |
| 0xA6141699 | 21 | House | 房屋 | crc_candidate |
| 0xE92FF6E4 | 10 | Facility | 设施 | crc_candidate |
| 0xBA87F1A0 | 6 | WherearenFacility | 度假岛 设施 | crc_candidate |
| 0x6ED40AA9 | 1 | Bridge | 桥梁 | crc_candidate |
| 0x990D6A81 | 1 | Slope | Slope | crc_candidate |

### 结构 信息 房屋 类型（hash_CC24374E）

去重码值 4 个，已有标签候选 3 个。

| 原始码值 | 出现次数 | 英文候选 | 中文释义 | 证据 |
| --- | ---: | --- | --- | --- |
| 0x9FB57F53 | 27 | Player | 玩家 | crc_candidate |
| 0x7EC130CC | 10 | Npc | NPC | crc_candidate |
| 0x3146B619 | 1 | 未知 | 未知 | unmapped |
| 0xC831F261 | 1 | WherearenNpc | 度假岛 NPC | crc_candidate |

### 结构 信息 类型（hash_D6704D8B）

去重码值 4 个，已有标签候选 4 个。

| 原始码值 | 出现次数 | 英文候选 | 中文释义 | 证据 |
| --- | ---: | --- | --- | --- |
| 0xA6141699 | 21 | House | 房屋 | crc_candidate |
| 0xE92FF6E4 | 16 | Facility | 设施 | crc_candidate |
| 0x6ED40AA9 | 1 | Bridge | 桥梁 | crc_candidate |
| 0x990D6A81 | 1 | Slope | Slope | crc_candidate |

[完整码值与样例 JSON](../../../../research/bcsv-catalog/table-profiles.json) · [已有枚举证据 CSV](../../../../research/bcsv-data/decoded/enum-values.csv)

## 跨表关联

以下为原版 CRC32 标签值域统计候选，不是已确认的外键。

| 方向 | 来源字段 | 目标字段 | 对端表 | 匹配记录 | 去重匹配 |
| --- | --- | --- | --- | ---: | ---: |
| — | — | — | 尚无已登记候选 | — | — |

[完整关联候选](References.md) · [逐值匹配明细](../../../../research/bcsv-data/decoded/reference-values.csv)
