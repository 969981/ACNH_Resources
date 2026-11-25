# StructureHouseWallParam.bcsv

返回 [全量索引](README.md) · [统一字段字典](Field-Hashes.md) · [名称恢复证据](../Field-Names.md) · [残余字段证据](../../../../research/hash008h/residual_fields.json)。

原始路径：`e10617820db06889e1638499478da0de_NCA/1/Bcsv/StructureHouseWallParam.bcsv`
SHA256：`de58ca92bf2d9cc72052b813e426232e23268575a35f93137105a2de66355a7d`
状态：parsed

行数 221，行长 84，数据起点 100。

英文名称及类型为 CRC32 签名候选，不等同于原版明文；中文取自统一字典。跨度为物理字段间距，可能包含填充。业务证据仅采用当前表、当前偏移的已登记解释或残余字段记录；无证据不推断。

| Hash | 英文名称（CRC 候选） | 简体中文释义 | 偏移 | 跨度 | 数据类型（CRC 候选） | 当前解释 | 业务证据 |
| --- | --- | --- | ---: | ---: | --- | --- | --- |
| hash_60680C93 | HouseDoorStep | 房屋 门 步骤 | 4 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_37D4E515 | CustomizeSortID | 自定义 排序 ID | 8 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_9C2D6DC6 | FloorColAttribute | 地板 Col 属性 | 10 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_B6F501D2 | HouseShapeUniqueID | 房屋 形状 唯一 ID | 12 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_54706054 | UniqueID | 唯一ID | 14 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_D2C59675 | LightParamName | 光照 参数 名称 | 16 | 32 | string32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_39B5A93D | ModelName | 模型 名称 | 48 | 32 | string32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_9E19C94C | UseCurtain | 使用 窗帘 | 80 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_0424930F | UseExteriorLight | 使用 外部 光照 | 81 | 3 | u8 | 未知，保留原值 | 未登记表级业务证据 |

<!-- table-business-catalog -->

## 中文表名与业务用途

**中文表名：** 房屋墙壁参数

**用途：** 按文件名与字段名称候选推测：用于配置或描述房屋墙壁参数相关数据；具体消费逻辑待验证。

**证据等级：** 名称推测

## 数据文件

[原始 Hash CSV](../../../../research/bcsv-data/raw/StructureHouseWallParam.csv) · [英文列名 CSV](../../../../research/bcsv-data/named/StructureHouseWallParam.csv) · [候选类型解码 CSV](../../../../research/bcsv-data/decoded/tables/StructureHouseWallParam.csv) · [结构 JSON](../../../../research/bcsv-data/schema/StructureHouseWallParam.json)

## 实际原版数据样例

选择首行、中间行、末行（去重）；每格展示原始完整字段字节及候选类型解码，不把候选类型视为已确认。

| 字段 | 偏移 | 行 0（0 基） | 行 110（0 基） | 行 220（0 基） |
| --- | ---: | --- | --- | --- |
| `hash_60680C93` 房屋 门 步骤 | 4 | 0x26296DD2 / hex:d26d2926 | 0x26296DD2 / hex:d26d2926 | 0x26296DD2 / hex:d26d2926 |
| `hash_37D4E515` 自定义 排序 ID | 8 | 3003 / hex:bb0b | 114 / hex:7200 | 418 / hex:a201 |
| `hash_9C2D6DC6` 地板 Col 属性 | 10 | 3 / hex:0300 | 3 / hex:0300 | 3 / hex:0300 |
| `hash_B6F501D2` 房屋 形状 唯一 ID | 12 | 0 / hex:0000 | 13 / hex:0d00 | 21 / hex:1500 |
| `hash_54706054` 唯一ID | 14 | 0 / hex:0000 | 134 / hex:8600 | 244 / hex:f400 |
| `hash_D2C59675` 光照 参数 名称 | 16 | "HouseWallPA04StandardA" / hex:486f75736557616c6c504130345374616e646172644100000000000000000000 | "HouseWallNDStuccoA" / hex:486f75736557616c6c4e4453747563636f410000000000000000000000000000 | "HouseWallPD04SoilA" / hex:486f75736557616c6c50443034536f696c410000000000000000000000000000 |
| `hash_39B5A93D` 模型 名称 | 48 | "HouseWallPA04StandardA" / hex:486f75736557616c6c504130345374616e646172644100000000000000000000 | "HouseWallNDStuccoH" / hex:486f75736557616c6c4e4453747563636f480000000000000000000000000000 | "HouseWallPD04SoilH" / hex:486f75736557616c6c50443034536f696c480000000000000000000000000000 |
| `hash_9E19C94C` 使用 窗帘 | 80 | 1 / hex:01 | 1 / hex:01 | 1 / hex:01 |
| `hash_0424930F` 使用 外部 光照 | 81 | 1 / hex:010000 | 1 / hex:010000 | 1 / hex:010000 |

## 枚举码值及实际分布

仅对 hshCstringRef 候选字段统计原版前 4 字节。已登记标签来自 decoded 枚举证据，逐值校验 CRC32 与原版出现次数；中文为研究译名，候选冲突不强行合并。每字段最多展示 12 个高频值，完整映射见下方 JSON。

### 房屋 门 步骤（hash_60680C93）

去重码值 3 个，已有标签候选 3 个。

| 原始码值 | 出现次数 | 英文候选 | 中文释义 | 证据 |
| --- | ---: | --- | --- | --- |
| 0x26296DD2 | 214 | Normal | 法线 | crc_candidate |
| 0xDFA2AFF1 | 4 | None | None | crc_candidate |
| 0x8721BD2E | 3 | Tent | Tent | crc_candidate |

[完整码值与样例 JSON](../../../../research/bcsv-catalog/table-profiles.json) · [已有枚举证据 CSV](../../../../research/bcsv-data/decoded/enum-values.csv)

## 跨表关联

以下为原版 CRC32 标签值域统计候选，不是已确认的外键。

| 方向 | 来源字段 | 目标字段 | 对端表 | 匹配记录 | 去重匹配 |
| --- | --- | --- | --- | ---: | ---: |
| — | — | — | 尚无已登记候选 | — | — |

[完整关联候选](References.md) · [逐值匹配明细](../../../../research/bcsv-data/decoded/reference-values.csv)
