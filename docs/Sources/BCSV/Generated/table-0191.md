# StructureWherearenFacilityAccessory.bcsv

返回 [全量索引](README.md) · [统一字段字典](Field-Hashes.md) · [名称恢复证据](../Field-Names.md) · [残余字段证据](../../../../research/hash008h/residual_fields.json)。

原始路径：`e10617820db06889e1638499478da0de_NCA/1/Bcsv/StructureWherearenFacilityAccessory.bcsv`
SHA256：`be277fb40d339facdaebe88b5128838fd54f9a67485e3d1414dade1c6bda3500`
状态：parsed

行数 46，行长 44，数据起点 76。

英文名称及类型为 CRC32 签名候选，不等同于原版明文；中文取自统一字典。跨度为物理字段间距，可能包含填充。业务证据仅采用当前表、当前偏移的已登记解释或残余字段记录；无证据不推断。

| Hash | 英文名称（CRC 候选） | 简体中文释义 | 偏移 | 跨度 | 数据类型（CRC 候选） | 当前解释 | 业务证据 |
| --- | --- | --- | ---: | ---: | --- | --- | --- |
| hash_37D4E515 | CustomizeSortID | 自定义 排序 ID | 4 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_00C1577D | StructureInfoUniqueID | 结构 信息 唯一 ID | 6 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_54706054 | UniqueID | 唯一ID | 8 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_39B5A93D | ModelName | 模型 名称 | 10 | 32 | string32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_8062290B | UseCulling | 使用 剔除 | 42 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_89BE1D8F | UseMyDesign | 使用 My 设计 | 43 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |

<!-- table-business-catalog -->

## 中文表名与业务用途

**中文表名：** 度假群岛设施配件

**用途：** 按文件名与字段名称候选推测：用于配置或描述度假群岛设施配件相关数据；具体消费逻辑待验证。

**证据等级：** 名称推测

## 数据文件

[原始 Hash CSV](../../../../research/bcsv-data/raw/StructureWherearenFacilityAccessory.csv) · [英文列名 CSV](../../../../research/bcsv-data/named/StructureWherearenFacilityAccessory.csv) · [候选类型解码 CSV](../../../../research/bcsv-data/decoded/tables/StructureWherearenFacilityAccessory.csv) · [结构 JSON](../../../../research/bcsv-data/schema/StructureWherearenFacilityAccessory.json)

## 实际原版数据样例

选择首行、中间行、末行（去重）；每格展示原始完整字段字节及候选类型解码，不把候选类型视为已确认。

| 字段 | 偏移 | 行 0（0 基） | 行 23（0 基） | 行 45（0 基） |
| --- | ---: | --- | --- | --- |
| `hash_37D4E515` 自定义 排序 ID | 4 | 0 / hex:0000 | 12 / hex:0c00 | 31 / hex:1f00 |
| `hash_00C1577D` 结构 信息 唯一 ID | 6 | 32 / hex:2000 | 37 / hex:2500 | 39 / hex:2700 |
| `hash_54706054` 唯一ID | 8 | 0 / hex:0000 | 23 / hex:1700 | 45 / hex:2d00 |
| `hash_39B5A93D` 模型 名称 | 10 | "StrcAccWherearenOfficeA" / hex:5374726341636357686572656172656e4f666669636541000000000000000000 | "StrcAccWherearenSchoolC" / hex:5374726341636357686572656172656e5363686f6f6c43000000000000000000 | "StrcAccWherearenRestaurantI" / hex:5374726341636357686572656172656e52657374617572616e74490000000000 |
| `hash_8062290B` 使用 剔除 | 42 | 0 / hex:00 | 1 / hex:01 | 1 / hex:01 |
| `hash_89BE1D8F` 使用 My 设计 | 43 | 0 / hex:00 | 0 / hex:00 | 1 / hex:01 |

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
