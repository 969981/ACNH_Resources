# FieldCreateParam.bcsv

返回 [全量索引](README.md) · [统一字段字典](Field-Hashes.md) · [名称恢复证据](../Field-Names.md) · [残余字段证据](../../../../research/hash008h/residual_fields.json)。

原始路径：`e10617820db06889e1638499478da0de_NCA/1/Bcsv/FieldCreateParam.bcsv`
SHA256：`2ad27b3fcb0506c72e82a903aa6bcd19688eba4187c27fdf82168078bb92b51d`
状态：parsed

行数 139，行长 52，数据起点 76。

英文名称及类型为 CRC32 签名候选，不等同于原版明文；中文取自统一字典。跨度为物理字段间距，可能包含填充。业务证据仅采用当前表、当前偏移的已登记解释或残余字段记录；无证据不推断。

| Hash | 英文名称（CRC 候选） | 简体中文释义 | 偏移 | 跨度 | 数据类型（CRC 候选） | 当前解释 | 业务证据 |
| --- | --- | --- | ---: | ---: | --- | --- | --- |
| hash_6654378D | FactoryType | 工厂 类型 | 4 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_65D009E1 | PhotoStudioRoomNo | 照片 工作室 房间 无 | 8 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_897261E3 | RoomType | 房间 类型 | 12 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_AF3BECA5 | ItemLayer | 道具 层 | 16 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_D069F90C | StageName | 阶段 名称 | 17 | 32 | string32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_46E8C73E | StaticField | 静态 场景 | 49 | 3 | u8 | 未知，保留原值 | 未登记表级业务证据 |

<!-- table-business-catalog -->

## 中文表名与业务用途

**中文表名：** 场景创建参数

**用途：** 按文件名与字段名称候选推测：用于配置或描述场景创建参数相关数据；具体消费逻辑待验证。

**证据等级：** 名称推测

## 数据文件

[原始 Hash CSV](../../../../research/bcsv-data/raw/FieldCreateParam.csv) · [英文列名 CSV](../../../../research/bcsv-data/named/FieldCreateParam.csv) · [候选类型解码 CSV](../../../../research/bcsv-data/decoded/tables/FieldCreateParam.csv) · [结构 JSON](../../../../research/bcsv-data/schema/FieldCreateParam.json)

## 实际原版数据样例

选择首行、中间行、末行（去重）；每格展示原始完整字段字节及候选类型解码，不把候选类型视为已确认。

| 字段 | 偏移 | 行 0（0 基） | 行 69（0 基） | 行 138（0 基） |
| --- | ---: | --- | --- | --- |
| `hash_6654378D` 工厂 类型 | 4 | 0x2CE33943 / hex:4339e32c | 0x2CE33943 / hex:4339e32c | 0x65BDD682 / hex:82d6bd65 |
| `hash_65D009E1` 照片 工作室 房间 无 | 8 | 0x52B525B8 / hex:b825b552 | 0x52B525B8 / hex:b825b552 | 0x52B525B8 / hex:b825b552 |
| `hash_897261E3` 房间 类型 | 12 | 0x3424431C / hex:1c432434 | 0x3424431C / hex:1c432434 | 0x3424431C / hex:1c432434 |
| `hash_AF3BECA5` 道具 层 | 16 | 0 / hex:00 | 3 / hex:03 | 255 / hex:ff |
| `hash_D069F90C` 阶段 名称 | 17 | "InvalidStage" / hex:496e76616c696453746167650000000000000000000000000000000000000000 | "IdrAirPort" / hex:496472416972506f727400000000000000000000000000000000000000000000 | "IdrHotelVipRoom7" / hex:496472486f74656c566970526f6f6d3700000000000000000000000000000000 |
| `hash_46E8C73E` 静态 场景 | 49 | 0 / hex:000000 | 0 / hex:000000 | 0 / hex:000000 |

## 枚举码值及实际分布

仅对 hshCstringRef 候选字段统计原版前 4 字节。已登记标签来自 decoded 枚举证据，逐值校验 CRC32 与原版出现次数；中文为研究译名，候选冲突不强行合并。每字段最多展示 12 个高频值，完整映射见下方 JSON。

### 工厂 类型（hash_6654378D）

去重码值 14 个，已有标签候选 11 个。

| 原始码值 | 出现次数 | 英文候选 | 中文释义 | 证据 |
| --- | ---: | --- | --- | --- |
| 0xDFB7B966 | 48 | PlayerHouse | 玩家 房屋 | crc_candidate |
| 0x2CE33943 | 30 | Default | 默认 | crc_candidate |
| 0x65BDD682 | 16 | 未知 | 未知 | unmapped |
| 0x7A7CD132 | 13 | WherearenRoom | 度假岛 房间 | crc_candidate |
| 0x5B0B43ED | 10 | NpcHouse | NPC 房屋 | crc_candidate |
| 0x244637C0 | 6 | PhotoStudioHouse | 照片 工作室 房屋 | crc_candidate |
| 0x41B704EC | 6 | 未知 | 未知 | unmapped |
| 0x240E43C2 | 2 | SeaDemo | Sea 演出 | crc_candidate |
| 0x8D29E189 | 2 | MysteryTourIsland | 神秘 旅行 岛屿 | crc_candidate |
| 0xC2EB7ADC | 2 | WherearenMainIsland | 度假岛 主要 岛屿 | crc_candidate |
| 0x1DD29A22 | 1 | WherearenNpcGarden | 度假岛 NPC Garden | crc_candidate |
| 0xA553AA86 | 1 | MainField | 主要 场景 | crc_candidate |

### 照片 工作室 房间 无（hash_65D009E1）

去重码值 6 个，已有标签候选 6 个。

| 原始码值 | 出现次数 | 英文候选 | 中文释义 | 证据 |
| --- | ---: | --- | --- | --- |
| 0x52B525B8 | 134 | Room0 | 房间 0 | crc_candidate |
| 0x22DFD137 | 1 | Room5 | 房间 5 | crc_candidate |
| 0x25B2152E | 1 | Room1 | 房间 1 | crc_candidate |
| 0x55D8E1A1 | 1 | Room4 | 房间 4 | crc_candidate |
| 0xBCBB4494 | 1 | Room2 | 房间 2 | crc_candidate |
| 0xCBBC7402 | 1 | Room3 | 房间 3 | crc_candidate |

### 房间 类型（hash_897261E3）

去重码值 7 个，已有标签候选 7 个。

| 原始码值 | 出现次数 | 英文候选 | 中文释义 | 证据 |
| --- | ---: | --- | --- | --- |
| 0x3424431C | 85 | Invalid | 无效 | crc_candidate |
| 0x22DFD137 | 9 | Room5 | 房间 5 | crc_candidate |
| 0x25B2152E | 9 | Room1 | 房间 1 | crc_candidate |
| 0x52B525B8 | 9 | Room0 | 房间 0 | crc_candidate |
| 0x55D8E1A1 | 9 | Room4 | 房间 4 | crc_candidate |
| 0xBCBB4494 | 9 | Room2 | 房间 2 | crc_candidate |
| 0xCBBC7402 | 9 | Room3 | 房间 3 | crc_candidate |

[完整码值与样例 JSON](../../../../research/bcsv-catalog/table-profiles.json) · [已有枚举证据 CSV](../../../../research/bcsv-data/decoded/enum-values.csv)

## 跨表关联

以下为原版 CRC32 标签值域统计候选，不是已确认的外键。

| 方向 | 来源字段 | 目标字段 | 对端表 | 匹配记录 | 去重匹配 |
| --- | --- | --- | --- | ---: | ---: |
| — | — | — | 尚无已登记候选 | — | — |

[完整关联候选](References.md) · [逐值匹配明细](../../../../research/bcsv-data/decoded/reference-values.csv)
