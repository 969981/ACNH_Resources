# StructureFacilityModel.bcsv

返回 [全量索引](README.md) · [统一字段字典](Field-Hashes.md) · [名称恢复证据](../Field-Names.md) · [残余字段证据](../../../../research/hash008h/residual_fields.json)。

原始路径：`e10617820db06889e1638499478da0de_NCA/1/Bcsv/StructureFacilityModel.bcsv`
SHA256：`bd14723e8a8562c97d80407c335e76ad506230f68667e95b1b167fb0adf13e93`
状态：parsed

行数 24，行长 72，数据起点 180。

英文名称及类型为 CRC32 签名候选，不等同于原版明文；中文取自统一字典。跨度为物理字段间距，可能包含填充。业务证据仅采用当前表、当前偏移的已登记解释或残余字段记录；无证据不推断。

| Hash | 英文名称（CRC 候选） | 简体中文释义 | 偏移 | 跨度 | 数据类型（CRC 候选） | 当前解释 | 业务证据 |
| --- | --- | --- | ---: | ---: | --- | --- | --- |
| hash_88FF5893 | Door0Angle | 门 0 角度 | 4 | 4 | f32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_85A0FA49 | DoorAnimTypeHash | 门 动画 类型 哈希 | 8 | 4 | stringMurmurHash | 未知，保留原值 | 未登记表级业务证据 |
| hash_DD9617A2 | FacilityModelVariation | 设施 模型 变体 | 12 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_6EFC082C | FloorHeight | 地板 高度 | 16 | 4 | f32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_0D664B5C | Door0 | 门 0 | 20 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_42BDD56F | DoorMaterial | 门 材质 | 22 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_9C2D6DC6 | FloorColAttribute | 地板 Col 属性 | 24 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_83B54E59 | RoofMaterial | 屋顶 材质 | 26 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_00C1577D | StructureInfoUniqueID | 结构 信息 唯一 ID | 28 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_54706054 | UniqueID | 唯一ID | 30 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_9C8A400B | Construction | 建造 | 32 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_35AC1BB4 | GrowLevel | 成长 等级 | 33 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_23E16936 | HasDoorEigyoLight | 具有 门 Eigyo 光照 | 34 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_43D8A434 | HasEigyoLight | 具有 Eigyo 光照 | 35 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_42E82DED | HasNightLight | 具有 夜间 光照 | 36 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_09D75F40 | IsUseXlink | 是否 使用 Xlink | 37 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_39B5A93D | ModelName | 模型 名称 | 38 | 32 | string32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_397B2B54 | UseChimneySmoke | 使用 烟囱 烟雾 | 70 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_89BE1D8F | UseMyDesign | 使用 My 设计 | 71 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |

<!-- table-business-catalog -->

## 中文表名与业务用途

**中文表名：** 设施模型

**用途：** 按文件名与字段名称候选推测：用于配置或描述设施模型相关数据；具体消费逻辑待验证。

**证据等级：** 名称推测

## 数据文件

[原始 Hash CSV](../../../../research/bcsv-data/raw/StructureFacilityModel.csv) · [英文列名 CSV](../../../../research/bcsv-data/named/StructureFacilityModel.csv) · [候选类型解码 CSV](../../../../research/bcsv-data/decoded/tables/StructureFacilityModel.csv) · [结构 JSON](../../../../research/bcsv-data/schema/StructureFacilityModel.json)

## 实际原版数据样例

选择首行、中间行、末行（去重）；每格展示原始完整字段字节及候选类型解码，不把候选类型视为已确认。

| 字段 | 偏移 | 行 0（0 基） | 行 12（0 基） | 行 23（0 基） |
| --- | ---: | --- | --- | --- |
| `hash_88FF5893` 门 0 角度 | 4 | 0.0 / hex:00000000 | 0.0 / hex:00000000 | 0.0 / hex:00000000 |
| `hash_85A0FA49` 门 动画 类型 哈希 | 8 | 0x7E3D1E46 / hex:461e3d7e | 0x7E3D1E46 / hex:461e3d7e | 0x7E3D1E46 / hex:461e3d7e |
| `hash_DD9617A2` 设施 模型 变体 | 12 | 0xD3D99E8B / hex:8b9ed9d3 | 0xD3D99E8B / hex:8b9ed9d3 | 0xD3D99E8B / hex:8b9ed9d3 |
| `hash_6EFC082C` 地板 高度 | 16 | 0.0 / hex:00000000 | 0.0 / hex:00000000 | 0.0 / hex:00000000 |
| `hash_0D664B5C` 门 0 | 20 | 0 / hex:0000 | 0 / hex:0000 | 0 / hex:0000 |
| `hash_42BDD56F` 门 材质 | 22 | 1 / hex:0100 | 1 / hex:0100 | 1 / hex:0100 |
| `hash_9C2D6DC6` 地板 Col 属性 | 24 | 7 / hex:0700 | 7 / hex:0700 | 7 / hex:0700 |
| `hash_83B54E59` 屋顶 材质 | 26 | 6 / hex:0600 | 6 / hex:0600 | 5 / hex:0500 |
| `hash_00C1577D` 结构 信息 唯一 ID | 28 | 19 / hex:1300 | 24 / hex:1800 | 42 / hex:2a00 |
| `hash_54706054` 唯一ID | 30 | 0 / hex:0000 | 18 / hex:1200 | 58 / hex:3a00 |
| `hash_9C8A400B` 建造 | 32 | 0 / hex:00 | 0 / hex:00 | 1 / hex:01 |
| `hash_35AC1BB4` 成长 等级 | 33 | 0 / hex:00 | 0 / hex:00 | 0 / hex:00 |
| `hash_23E16936` 具有 门 Eigyo 光照 | 34 | 0 / hex:00 | 0 / hex:00 | 0 / hex:00 |
| `hash_43D8A434` 具有 Eigyo 光照 | 35 | 0 / hex:00 | 0 / hex:00 | 0 / hex:00 |
| `hash_42E82DED` 具有 夜间 光照 | 36 | 0 / hex:00 | 0 / hex:00 | 0 / hex:00 |
| `hash_09D75F40` 是否 使用 Xlink | 37 | 0 / hex:00 | 0 / hex:00 | 0 / hex:00 |
| `hash_39B5A93D` 模型 名称 | 38 | "StrcMarketA00Reserve" / hex:537472634d61726b657441303052657365727665000000000000000000000000 | "StrcTailorA00Reserve" / hex:537472635461696c6f7241303052657365727665000000000000000000000000 | "StrcHotelA00Build" / hex:53747263486f74656c4130304275696c64000000000000000000000000000000 |
| `hash_397B2B54` 使用 烟囱 烟雾 | 70 | 0 / hex:00 | 0 / hex:00 | 0 / hex:00 |
| `hash_89BE1D8F` 使用 My 设计 | 71 | 0 / hex:00 | 0 / hex:00 | 0 / hex:00 |

## 枚举码值及实际分布

仅对 hshCstringRef 候选字段统计原版前 4 字节。已登记标签来自 decoded 枚举证据，逐值校验 CRC32 与原版出现次数；中文为研究译名，候选冲突不强行合并。每字段最多展示 12 个高频值，完整映射见下方 JSON。

### 设施 模型 变体（hash_DD9617A2）

去重码值 1 个，已有标签候选 1 个。

| 原始码值 | 出现次数 | 英文候选 | 中文释义 | 证据 |
| --- | ---: | --- | --- | --- |
| 0xD3D99E8B | 24 | A | A | crc_candidate |

[完整码值与样例 JSON](../../../../research/bcsv-catalog/table-profiles.json) · [已有枚举证据 CSV](../../../../research/bcsv-data/decoded/enum-values.csv)

## 跨表关联

以下为原版 CRC32 标签值域统计候选，不是已确认的外键。

| 方向 | 来源字段 | 目标字段 | 对端表 | 匹配记录 | 去重匹配 |
| --- | --- | --- | --- | ---: | ---: |
| — | — | — | 尚无已登记候选 | — | — |

[完整关联候选](References.md) · [逐值匹配明细](../../../../research/bcsv-data/decoded/reference-values.csv)
