# ItemSize.bcsv

返回 [全量索引](README.md) · [统一字段字典](Field-Hashes.md) · [名称恢复证据](../Field-Names.md) · [残余字段证据](../../../../research/hash008h/residual_fields.json)。

原始路径：`e10617820db06889e1638499478da0de_NCA/1/Bcsv/ItemSize.bcsv`
SHA256：`d87b7738477fd71e83a74d52c4081f1fd4683be533e20108bbabb7367140baee`
状态：parsed

行数 28，行长 80，数据起点 92。

英文名称及类型为 CRC32 签名候选，不等同于原版明文；中文取自统一字典。跨度为物理字段间距，可能包含填充。业务证据仅采用当前表、当前偏移的已登记解释或残余字段记录；无证据不推断。

| Hash | 英文名称（CRC 候选） | 简体中文释义 | 偏移 | 跨度 | 数据类型（CRC 候选） | 当前解释 | 业务证据 |
| --- | --- | --- | ---: | ---: | --- | --- | --- |
| hash_801351E6 | ResSizeLimit | 资源 尺寸 限制 | 4 | 4 | f32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_09B64264 | MemoryUnitNum | 回忆 单位 数量 | 8 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_3CF05708 | PolygonLimit | 多边形 限制 | 10 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_54706054 | UniqueID | 唯一ID | 12 | 2 | u16 | id | 表级解析字典（TYPED） |
| hash_16B8F524 | HalfUnitSizeX | X 方向半格尺寸 | 14 | 1 | u8 | width_half_tiles | 表级解析字典（TYPED） |
| hash_BCB13DAF | HalfUnitSizeZ | Z 方向半格尺寸 | 15 | 1 | u8 | height_half_tiles | 表级解析字典（TYPED） |
| hash_87BF00E8 | Label | 标签 | 16 | 32 | string32 | label | 表级解析字典（TYPED） |
| hash_977ADFCE | Name | 名称 | 48 | 32 | string32 | description_ja | 表级解析字典（TYPED） |

<!-- table-business-catalog -->

## 中文表名与业务用途

**中文表名：** 道具尺寸

**用途：** 物品尺寸及半格宽高参数。

**证据等级：** 已有专题文档（[专题证据](../ItemSize.md)）

## 数据文件

[原始 Hash CSV](../../../../research/bcsv-data/raw/ItemSize.csv) · [英文列名 CSV](../../../../research/bcsv-data/named/ItemSize.csv) · [候选类型解码 CSV](../../../../research/bcsv-data/decoded/tables/ItemSize.csv) · [结构 JSON](../../../../research/bcsv-data/schema/ItemSize.json)

## 实际原版数据样例

选择首行、中间行、末行（去重）；每格展示原始完整字段字节及候选类型解码，不把候选类型视为已确认。

| 字段 | 偏移 | 行 0（0 基） | 行 14（0 基） | 行 27（0 基） |
| --- | ---: | --- | --- | --- |
| `hash_801351E6` 资源 尺寸 限制 | 4 | 1.5750000476837158 / hex:9a99c93f | 3.1500000953674316 / hex:9a994940 | 1.5750000476837158 / hex:9a99c93f |
| `hash_09B64264` 回忆 单位 数量 | 8 | 1 / hex:0100 | 2 / hex:0200 | 1 / hex:0100 |
| `hash_3CF05708` 多边形 限制 | 10 | 1200 / hex:b004 | 2400 / hex:6009 | 1200 / hex:b004 |
| `hash_54706054` 唯一ID | 12 | 2 / hex:0200 | 8 / hex:0800 | 41 / hex:2900 |
| `hash_16B8F524` X 方向半格尺寸 | 14 | 2 / hex:02 | 2 / hex:02 | 1 / hex:01 |
| `hash_BCB13DAF` Z 方向半格尺寸 | 15 | 2 / hex:02 | 4 / hex:04 | 1 / hex:01 |
| `hash_87BF00E8` 标签 | 16 | "1_0x1_0" / hex:315f3078315f3000000000000000000000000000000000000000000000000000 | "1_0x2_0_Wall" / hex:315f3078325f305f57616c6c0000000000000000000000000000000000000000 | "0_5x0_5_Pillar" / hex:305f3578305f355f50696c6c6172000000000000000000000000000000000000 |
| `hash_977ADFCE` 名称 | 48 | "1x1" / hex:3178310000000000000000000000000000000000000000000000000000000000 | "1x2　 (壁)" / hex:317832e380802028e5a381290000000000000000000000000000000000000000 | "0.5x0.5(柱)" / hex:302e3578302e3528e69fb1290000000000000000000000000000000000000000 |

## 枚举码值及实际分布

仅对 hshCstringRef 候选字段统计原版前 4 字节。已登记标签来自 decoded 枚举证据，逐值校验 CRC32 与原版出现次数；中文为研究译名，候选冲突不强行合并。每字段最多展示 12 个高频值，完整映射见下方 JSON。

本表无可按此规则识别的 CRC 枚举字段；不代表不存在数值枚举或位域。

[完整码值与样例 JSON](../../../../research/bcsv-catalog/table-profiles.json) · [已有枚举证据 CSV](../../../../research/bcsv-data/decoded/enum-values.csv)

## 跨表关联

以下为原版 CRC32 标签值域统计候选，不是已确认的外键。

| 方向 | 来源字段 | 目标字段 | 对端表 | 匹配记录 | 去重匹配 |
| --- | --- | --- | --- | ---: | ---: |
| 入向 | hash_E06FB090 | hash_87BF00E8 | [ItemOutfitHangerInfo.bcsv](table-0087.md) | 14/14 | 3/3 |
| 入向 | hash_E06FB090 | hash_87BF00E8 | [ItemParam.bcsv](table-0089.md) | 11178/11178 | 26/26 |

[完整关联候选](References.md) · [逐值匹配明细](../../../../research/bcsv-data/decoded/reference-values.csv)
