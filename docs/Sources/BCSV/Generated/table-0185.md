# StructureHouseRoofParam.bcsv

返回 [全量索引](README.md) · [统一字段字典](Field-Hashes.md) · [名称恢复证据](../Field-Names.md) · [残余字段证据](../../../../research/hash008h/residual_fields.json)。

原始路径：`e10617820db06889e1638499478da0de_NCA/1/Bcsv/StructureHouseRoofParam.bcsv`
SHA256：`e98206e1b4b835854b2b14e88acc315b9868c3ab4bf2de56f7d02ebf36aef00a`
状态：parsed

行数 238，行长 52，数据起点 92。

英文名称及类型为 CRC32 签名候选，不等同于原版明文；中文取自统一字典。跨度为物理字段间距，可能包含填充。业务证据仅采用当前表、当前偏移的已登记解释或残余字段记录；无证据不推断。

| Hash | 英文名称（CRC 候选） | 简体中文释义 | 偏移 | 跨度 | 数据类型（CRC 候选） | 当前解释 | 业务证据 |
| --- | --- | --- | ---: | ---: | --- | --- | --- |
| hash_A9424A50 | HouseColor | 房屋 颜色 | 4 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_37D4E515 | CustomizeSortID | 自定义 排序 ID | 8 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_B6F501D2 | HouseShapeUniqueID | 房屋 形状 唯一 ID | 10 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_39CB9646 | Material | 材质 | 12 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_54706054 | UniqueID | 唯一ID | 14 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_F75DDF51 | Dummy | 占位 | 16 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_A241524A | HasRoofLight | 具有 屋顶 光照 | 17 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_39B5A93D | ModelName | 模型 名称 | 18 | 34 | string32 | 未知，保留原值 | 未登记表级业务证据 |

<!-- table-business-catalog -->

## 中文表名与业务用途

**中文表名：** 房屋屋顶参数

**用途：** 按文件名与字段名称候选推测：用于配置或描述房屋屋顶参数相关数据；具体消费逻辑待验证。

**证据等级：** 名称推测

## 数据文件

[原始 Hash CSV](../../../../research/bcsv-data/raw/StructureHouseRoofParam.csv) · [英文列名 CSV](../../../../research/bcsv-data/named/StructureHouseRoofParam.csv) · [候选类型解码 CSV](../../../../research/bcsv-data/decoded/tables/StructureHouseRoofParam.csv) · [结构 JSON](../../../../research/bcsv-data/schema/StructureHouseRoofParam.json)

## 实际原版数据样例

选择首行、中间行、末行（去重）；每格展示原始完整字段字节及候选类型解码，不把候选类型视为已确认。

| 字段 | 偏移 | 行 0（0 基） | 行 119（0 基） | 行 237（0 基） |
| --- | ---: | --- | --- | --- |
| `hash_A9424A50` 房屋 颜色 | 4 | 0xC22C196F / hex:6f192cc2 | 0x3424431C / hex:1c432434 | 0x3424431C / hex:1c432434 |
| `hash_37D4E515` 自定义 排序 ID | 8 | 1001 / hex:e903 | 721 / hex:d102 | 218 / hex:da00 |
| `hash_B6F501D2` 房屋 形状 唯一 ID | 10 | 0 / hex:0000 | 13 / hex:0d00 | 21 / hex:1500 |
| `hash_39CB9646` 材质 | 12 | 6 / hex:0600 | 6 / hex:0600 | 6 / hex:0600 |
| `hash_54706054` 唯一ID | 14 | 0 / hex:0000 | 121 / hex:7900 | 250 / hex:fa00 |
| `hash_F75DDF51` 占位 | 16 | 0 / hex:00 | 0 / hex:00 | 0 / hex:00 |
| `hash_A241524A` 具有 屋顶 光照 | 17 | 0 / hex:00 | 0 / hex:00 | 1 / hex:01 |
| `hash_39B5A93D` 模型 名称 | 18 | "HouseRoofPA04StandardA" / hex:486f757365526f6f66504130345374616e6461726441000000000000000000000000 | "HouseRoofNDThatchedB" / hex:486f757365526f6f664e445468617463686564420000000000000000000000000000 | "HouseRoofPD04StoneH" / hex:486f757365526f6f665044303453746f6e6548000000000000000000000000000000 |

## 枚举码值及实际分布

仅对 hshCstringRef 候选字段统计原版前 4 字节。已登记标签来自 decoded 枚举证据，逐值校验 CRC32 与原版出现次数；中文为研究译名，候选冲突不强行合并。每字段最多展示 12 个高频值，完整映射见下方 JSON。

### 房屋 颜色（hash_A9424A50）

去重码值 9 个，已有标签候选 9 个。

| 原始码值 | 出现次数 | 英文候选 | 中文释义 | 证据 |
| --- | ---: | --- | --- | --- |
| 0x3424431C | 198 | Invalid | 无效 | crc_candidate |
| 0x115BC125 | 5 | Green | Green | crc_candidate |
| 0x3E04658A | 5 | Blue | Blue | crc_candidate |
| 0x4844952C | 5 | Black | Black | crc_candidate |
| 0x8C51DEE8 | 5 | Pink | 粉色 | crc_candidate |
| 0xA8AF5CE8 | 5 | LightBlue | 光照 Blue | crc_candidate |
| 0xC22C196F | 5 | Red | Red | crc_candidate |
| 0xD7A8E9A9 | 5 | Yellow | Yellow | crc_candidate |
| 0xED2977D0 | 5 | Purple | Purple | crc_candidate |

[完整码值与样例 JSON](../../../../research/bcsv-catalog/table-profiles.json) · [已有枚举证据 CSV](../../../../research/bcsv-data/decoded/enum-values.csv)

## 跨表关联

以下为原版 CRC32 标签值域统计候选，不是已确认的外键。

| 方向 | 来源字段 | 目标字段 | 对端表 | 匹配记录 | 去重匹配 |
| --- | --- | --- | --- | ---: | ---: |
| — | — | — | 尚无已登记候选 | — | — |

[完整关联候选](References.md) · [逐值匹配明细](../../../../research/bcsv-data/decoded/reference-values.csv)
