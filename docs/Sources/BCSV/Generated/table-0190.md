# StructureWherearenFacility.bcsv

返回 [全量索引](README.md) · [统一字段字典](Field-Hashes.md) · [名称恢复证据](../Field-Names.md) · [残余字段证据](../../../../research/hash008h/residual_fields.json)。

原始路径：`e10617820db06889e1638499478da0de_NCA/1/Bcsv/StructureWherearenFacility.bcsv`
SHA256：`1f7b1d4245f7eaac84f11950600556db81a0ffe6250cd985afd5fc0190a07f24`
状态：parsed

行数 6，行长 36，数据起点 132。

英文名称及类型为 CRC32 签名候选，不等同于原版明文；中文取自统一字典。跨度为物理字段间距，可能包含填充。业务证据仅采用当前表、当前偏移的已登记解释或残余字段记录；无证据不推断。

| Hash | 英文名称（CRC 候选） | 简体中文释义 | 偏移 | 跨度 | 数据类型（CRC 候选） | 当前解释 | 业务证据 |
| --- | --- | --- | ---: | ---: | --- | --- | --- |
| hash_85A0FA49 | DoorAnimTypeHash | 门 动画 类型 哈希 | 4 | 4 | stringMurmurHash | 未知，保留原值 | 未登记表级业务证据 |
| hash_6EFC082C | FloorHeight | 地板 高度 | 8 | 4 | f32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_73E2B4E4 | DefaultAccessory | 默认 饰品 | 12 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_3A5C385A | DefaultDoor | 默认 门 | 14 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_15E831B4 | DefaultRoof | 默认 屋顶 | 16 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_C1132E82 | DefaultWall | 默认 墙壁 | 18 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_0D664B5C | Door0 | 门 0 | 20 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_42BDD56F | DoorMaterial | 门 材质 | 22 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_9C2D6DC6 | FloorColAttribute | 地板 Col 属性 | 24 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_83B54E59 | RoofMaterial | 屋顶 材质 | 26 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_00C1577D | StructureInfoUniqueID | 结构 信息 唯一 ID | 28 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_54706054 | UniqueID | 唯一ID | 30 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_B048092B | HasDoorLight | 具有 门 光照 | 32 | 4 | u8 | 未知，保留原值 | 未登记表级业务证据 |

<!-- table-business-catalog -->

## 中文表名与业务用途

**中文表名：** 度假群岛设施建筑

**用途：** 按文件名与字段名称候选推测：用于配置或描述度假群岛设施建筑相关数据；具体消费逻辑待验证。

**证据等级：** 名称推测

## 数据文件

[原始 Hash CSV](../../../../research/bcsv-data/raw/StructureWherearenFacility.csv) · [英文列名 CSV](../../../../research/bcsv-data/named/StructureWherearenFacility.csv) · [候选类型解码 CSV](../../../../research/bcsv-data/decoded/tables/StructureWherearenFacility.csv) · [结构 JSON](../../../../research/bcsv-data/schema/StructureWherearenFacility.json)

## 实际原版数据样例

选择首行、中间行、末行（去重）；每格展示原始完整字段字节及候选类型解码，不把候选类型视为已确认。

| 字段 | 偏移 | 行 0（0 基） | 行 3（0 基） | 行 5（0 基） |
| --- | ---: | --- | --- | --- |
| `hash_85A0FA49` 门 动画 类型 哈希 | 4 | 0x3757444E / hex:4e445737 | 0x1C3FE72F / hex:2fe73f1c | 0xE9195232 / hex:325219e9 |
| `hash_6EFC082C` 地板 高度 | 8 | 41.0 / hex:00002442 | 20.0 / hex:0000a041 | 20.0 / hex:0000a041 |
| `hash_73E2B4E4` 默认 饰品 | 12 | 0 / hex:0000 | 3 / hex:0300 | 5 / hex:0500 |
| `hash_3A5C385A` 默认 门 | 14 | 0 / hex:0000 | 27 / hex:1b00 | 16 / hex:1000 |
| `hash_15E831B4` 默认 屋顶 | 16 | 0 / hex:0000 | 27 / hex:1b00 | 18 / hex:1200 |
| `hash_C1132E82` 默认 墙壁 | 18 | 0 / hex:0000 | 29 / hex:1d00 | 18 / hex:1200 |
| `hash_0D664B5C` 门 0 | 20 | 37 / hex:2500 | 44 / hex:2c00 | 46 / hex:2e00 |
| `hash_42BDD56F` 门 材质 | 22 | 2 / hex:0200 | 2 / hex:0200 | 2 / hex:0200 |
| `hash_9C2D6DC6` 地板 Col 属性 | 24 | 22 / hex:1600 | 6 / hex:0600 | 6 / hex:0600 |
| `hash_83B54E59` 屋顶 材质 | 26 | 2 / hex:0200 | 2 / hex:0200 | 2 / hex:0200 |
| `hash_00C1577D` 结构 信息 唯一 ID | 28 | 32 / hex:2000 | 39 / hex:2700 | 41 / hex:2900 |
| `hash_54706054` 唯一ID | 30 | 0 / hex:0000 | 3 / hex:0300 | 5 / hex:0500 |
| `hash_B048092B` 具有 门 光照 | 32 | 1 / hex:01000000 | 1 / hex:01000000 | 1 / hex:01000000 |

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
