# ItemColor.bcsv

返回 [全量索引](README.md) · [统一字段字典](Field-Hashes.md) · [名称恢复证据](../Field-Names.md) · [残余字段证据](../../../../research/hash008h/residual_fields.json)。

原始路径：`e10617820db06889e1638499478da0de_NCA/1/Bcsv/ItemColor.bcsv`
SHA256：`639ec3f31efee66732dc0d42fde96500b844dec99a98e336df071c73109a98d1`
状态：parsed

行数 15，行长 72，数据起点 52。

英文名称及类型为 CRC32 签名候选，不等同于原版明文；中文取自统一字典。跨度为物理字段间距，可能包含填充。业务证据仅采用当前表、当前偏移的已登记解释或残余字段记录；无证据不推断。

| Hash | 英文名称（CRC 候选） | 简体中文释义 | 偏移 | 跨度 | 数据类型（CRC 候选） | 当前解释 | 业务证据 |
| --- | --- | --- | ---: | ---: | --- | --- | --- |
| hash_54706054 | UniqueID | 唯一ID | 4 | 2 | u16 | id | 表级解析字典（TYPED） |
| hash_87BF00E8 | Label | 标签 | 6 | 32 | string32 | label | 表级解析字典（TYPED） |
| hash_977ADFCE | Name | 名称 | 38 | 34 | string32 | description_ja | 表级解析字典（TYPED） |

<!-- table-business-catalog -->

## 中文表名与业务用途

**中文表名：** 道具颜色

**用途：** 物品颜色定义。

**证据等级：** 已有专题文档（[专题证据](../ItemColor.md)）

## 数据文件

[原始 Hash CSV](../../../../research/bcsv-data/raw/ItemColor.csv) · [英文列名 CSV](../../../../research/bcsv-data/named/ItemColor.csv) · [候选类型解码 CSV](../../../../research/bcsv-data/decoded/tables/ItemColor.csv) · [结构 JSON](../../../../research/bcsv-data/schema/ItemColor.json)

## 实际原版数据样例

选择首行、中间行、末行（去重）；每格展示原始完整字段字节及候选类型解码，不把候选类型视为已确认。

| 字段 | 偏移 | 行 0（0 基） | 行 7（0 基） | 行 14（0 基） |
| --- | ---: | --- | --- | --- |
| `hash_54706054` 唯一ID | 4 | 5 / hex:0500 | 4 / hex:0400 | 0 / hex:0000 |
| `hash_87BF00E8` 标签 | 6 | "Orange" / hex:4f72616e67650000000000000000000000000000000000000000000000000000 | "Yellow" / hex:59656c6c6f770000000000000000000000000000000000000000000000000000 | "None" / hex:4e6f6e6500000000000000000000000000000000000000000000000000000000 |
| `hash_977ADFCE` 名称 | 38 | "オレンジ" / hex:e382aae383ace383b3e382b800000000000000000000000000000000000000000000 | "イエロー" / hex:e382a4e382a8e383ade383bc00000000000000000000000000000000000000000000 | "なし" / hex:e381aae3819700000000000000000000000000000000000000000000000000000000 |

## 枚举码值及实际分布

仅对 hshCstringRef 候选字段统计原版前 4 字节。已登记标签来自 decoded 枚举证据，逐值校验 CRC32 与原版出现次数；中文为研究译名，候选冲突不强行合并。每字段最多展示 12 个高频值，完整映射见下方 JSON。

本表无可按此规则识别的 CRC 枚举字段；不代表不存在数值枚举或位域。

[完整码值与样例 JSON](../../../../research/bcsv-catalog/table-profiles.json) · [已有枚举证据 CSV](../../../../research/bcsv-data/decoded/enum-values.csv)

## 跨表关联

以下为原版 CRC32 标签值域统计候选，不是已确认的外键。

| 方向 | 来源字段 | 目标字段 | 对端表 | 匹配记录 | 去重匹配 |
| --- | --- | --- | --- | ---: | ---: |
| 入向 | hash_A6B1A7FD | hash_87BF00E8 | [ItemParam.bcsv](table-0089.md) | 11178/11178 | 15/15 |
| 入向 | hash_B7CCCD84 | hash_87BF00E8 | [ItemParam.bcsv](table-0089.md) | 11178/11178 | 15/15 |
| 入向 | hash_A69385C1 | hash_87BF00E8 | [ItemParam.bcsv](table-0089.md) | 11095/11178 | 10/11 |
| 入向 | hash_C54EAAD9 | hash_87BF00E8 | [ItemRemake.bcsv](table-0095.md) | 1253/1306 | 10/11 |
| 入向 | hash_A6B1A7FD | hash_87BF00E8 | [ItemRemakeCommonPattern.bcsv](table-0096.md) | 220/220 | 14/14 |
| 入向 | hash_B7CCCD84 | hash_87BF00E8 | [ItemRemakeCommonPattern.bcsv](table-0096.md) | 220/220 | 14/14 |

[完整关联候选](References.md) · [逐值匹配明细](../../../../research/bcsv-data/decoded/reference-values.csv)
