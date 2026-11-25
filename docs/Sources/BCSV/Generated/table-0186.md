# StructureHouseShapeParam.bcsv

返回 [全量索引](README.md) · [统一字段字典](Field-Hashes.md) · [名称恢复证据](../Field-Names.md) · [残余字段证据](../../../../research/hash008h/residual_fields.json)。

原始路径：`e10617820db06889e1638499478da0de_NCA/1/Bcsv/StructureHouseShapeParam.bcsv`
SHA256：`3fd520eb49413f8f44aebaca20e297965ec21a14f8f635f9014a48e2f1ff0284`
状态：parsed

行数 18，行长 84，数据起点 100。

英文名称及类型为 CRC32 签名候选，不等同于原版明文；中文取自统一字典。跨度为物理字段间距，可能包含填充。业务证据仅采用当前表、当前偏移的已登记解释或残余字段记录；无证据不推断。

| Hash | 英文名称（CRC 候选） | 简体中文释义 | 偏移 | 跨度 | 数据类型（CRC 候选） | 当前解释 | 业务证据 |
| --- | --- | --- | ---: | ---: | --- | --- | --- |
| hash_10DBD8BB | AppearanceLevel | 外观 等级 | 4 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_37D4E515 | CustomizeSortID | 自定义 排序 ID | 8 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_C86E60D5 | DefaultDoorUniqueID | 默认 门 唯一 ID | 10 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_0966FBE3 | DefaultRoofUniqueID | 默认 屋顶 唯一 ID | 12 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_D8727D7D | DefaultWallUniqueID | 默认 墙壁 唯一 ID | 14 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_E6FC6624 | HousePartsType | 房屋 部件 类型 | 16 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_54706054 | UniqueID | 唯一ID | 18 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_E3A73129 | DoorBellName | 门 Bell 名称 | 20 | 32 | string32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_977ADFCE | Name | 名称 | 52 | 32 | string32 | 未知，保留原值 | 未登记表级业务证据 |

<!-- table-business-catalog -->

## 中文表名与业务用途

**中文表名：** 房屋形状参数

**用途：** 按文件名与字段名称候选推测：用于配置或描述房屋形状参数相关数据；具体消费逻辑待验证。

**证据等级：** 名称推测

## 数据文件

[原始 Hash CSV](../../../../research/bcsv-data/raw/StructureHouseShapeParam.csv) · [英文列名 CSV](../../../../research/bcsv-data/named/StructureHouseShapeParam.csv) · [候选类型解码 CSV](../../../../research/bcsv-data/decoded/tables/StructureHouseShapeParam.csv) · [结构 JSON](../../../../research/bcsv-data/schema/StructureHouseShapeParam.json)

## 实际原版数据样例

选择首行、中间行、末行（去重）；每格展示原始完整字段字节及候选类型解码，不把候选类型视为已确认。

| 字段 | 偏移 | 行 0（0 基） | 行 9（0 基） | 行 17（0 基） |
| --- | ---: | --- | --- | --- |
| `hash_10DBD8BB` 外观 等级 | 4 | 0x83ABBCC6 / hex:c6bcab83 | 0x3424431C / hex:1c432434 | 0x83ABBCC6 / hex:c6bcab83 |
| `hash_37D4E515` 自定义 排序 ID | 8 | 15 / hex:0f00 | 3 / hex:0300 | 18 / hex:1200 |
| `hash_C86E60D5` 默认 门 唯一 ID | 10 | 0 / hex:0000 | 32 / hex:2000 | 0 / hex:0000 |
| `hash_0966FBE3` 默认 屋顶 唯一 ID | 12 | 0 / hex:0000 | 30 / hex:1e00 | 212 / hex:d400 |
| `hash_D8727D7D` 默认 墙壁 唯一 ID | 14 | 0 / hex:0000 | 27 / hex:1b00 | 221 / hex:dd00 |
| `hash_E6FC6624` 房屋 部件 类型 | 16 | 0 / hex:0000 | 1 / hex:0100 | 0 / hex:0000 |
| `hash_54706054` 唯一ID | 18 | 0 / hex:0000 | 10 / hex:0a00 | 21 / hex:1500 |
| `hash_E3A73129` 门 Bell 名称 | 20 | "DoorBell_House_Standard1_Pl" / hex:446f6f7242656c6c5f486f7573655f5374616e64617264315f506c0000000000 | "DoorBell_House_Oriental1_Npc" / hex:446f6f7242656c6c5f486f7573655f4f7269656e74616c315f4e706300000000 | "DoorBell_House_Fantasy1_Pl" / hex:446f6f7242656c6c5f486f7573655f46616e74617379315f506c000000000000 |
| `hash_977ADFCE` 名称 | 52 | "Lサイズ（よこ5マス）" / hex:4ce382b5e382a4e382baefbc88e38288e3819335e3839ee382b9efbc89000000 | "Sサイズ（よこ４マス）" / hex:53e382b5e382a4e382baefbc88e38288e38193efbc94e3839ee382b9efbc8900 | "Lサイズ（よこ5マス）" / hex:4ce382b5e382a4e382baefbc88e38288e3819335e3839ee382b9efbc89000000 |

## 枚举码值及实际分布

仅对 hshCstringRef 候选字段统计原版前 4 字节。已登记标签来自 decoded 枚举证据，逐值校验 CRC32 与原版出现次数；中文为研究译名，候选冲突不强行合并。每字段最多展示 12 个高频值，完整映射见下方 JSON。

### 外观 等级（hash_10DBD8BB）

去重码值 7 个，已有标签候选 7 个。

| 原始码值 | 出现次数 | 英文候选 | 中文释义 | 证据 |
| --- | ---: | --- | --- | --- |
| 0x3424431C | 9 | Invalid | 无效 | crc_candidate |
| 0x83ABBCC6 | 4 | Level04 | 等级 04 | crc_candidate |
| 0x1DCF2965 | 1 | Level03 | 等级 03 | crc_candidate |
| 0x6AC819F3 | 1 | Level02 | 等级 02 | crc_candidate |
| 0x84C678DF | 1 | Level00 | 等级 00 | crc_candidate |
| 0x8721BD2E | 1 | Tent | Tent | crc_candidate |
| 0xF3C14849 | 1 | Level01 | 等级 01 | crc_candidate |

[完整码值与样例 JSON](../../../../research/bcsv-catalog/table-profiles.json) · [已有枚举证据 CSV](../../../../research/bcsv-data/decoded/enum-values.csv)

## 跨表关联

以下为原版 CRC32 标签值域统计候选，不是已确认的外键。

| 方向 | 来源字段 | 目标字段 | 对端表 | 匹配记录 | 去重匹配 |
| --- | --- | --- | --- | ---: | ---: |
| — | — | — | 尚无已登记候选 | — | — |

[完整关联候选](References.md) · [逐值匹配明细](../../../../research/bcsv-data/decoded/reference-values.csv)
