# StructureBridgeTypeParam.bcsv

返回 [全量索引](README.md) · [统一字段字典](Field-Hashes.md) · [名称恢复证据](../Field-Names.md) · [残余字段证据](../../../../research/hash008h/residual_fields.json)。

原始路径：`e10617820db06889e1638499478da0de_NCA/1/Bcsv/StructureBridgeTypeParam.bcsv`
SHA256：`e77e11562d29bf3e7b287023c54586468906aa8173daab53da9e586607ef4fd3`
状态：parsed

行数 9，行长 76，数据起点 68。

英文名称及类型为 CRC32 签名候选，不等同于原版明文；中文取自统一字典。跨度为物理字段间距，可能包含填充。业务证据仅采用当前表、当前偏移的已登记解释或残余字段记录；无证据不推断。

| Hash | 英文名称（CRC 候选） | 简体中文释义 | 偏移 | 跨度 | 数据类型（CRC 候选） | 当前解释 | 业务证据 |
| --- | --- | --- | ---: | ---: | --- | --- | --- |
| hash_904611F3 | BridgeTypeHash | 桥梁 类型 哈希 | 4 | 4 | stringMurmurHash | 未知，保留原值 | 未登记表级业务证据 |
| hash_C33A894E | ItemNameUniqueID | 道具名称唯一ID | 8 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_54706054 | UniqueID | 唯一ID | 10 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_68CF5938 | BridgeTypeName | 桥梁 类型 名称 | 12 | 32 | string32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_5C28C4DB | BridgeTypeNameJp | 桥梁 类型 名称 Jp | 44 | 32 | string32 | 未知，保留原值 | 未登记表级业务证据 |

<!-- table-business-catalog -->

## 中文表名与业务用途

**中文表名：** 桥梁类型参数

**用途：** 按文件名与字段名称候选推测：用于配置或描述桥梁类型参数相关数据；具体消费逻辑待验证。

**证据等级：** 名称推测

## 数据文件

[原始 Hash CSV](../../../../research/bcsv-data/raw/StructureBridgeTypeParam.csv) · [英文列名 CSV](../../../../research/bcsv-data/named/StructureBridgeTypeParam.csv) · [候选类型解码 CSV](../../../../research/bcsv-data/decoded/tables/StructureBridgeTypeParam.csv) · [结构 JSON](../../../../research/bcsv-data/schema/StructureBridgeTypeParam.json)

## 实际原版数据样例

选择首行、中间行、末行（去重）；每格展示原始完整字段字节及候选类型解码，不把候选类型视为已确认。

| 字段 | 偏移 | 行 0（0 基） | 行 4（0 基） | 行 8（0 基） |
| --- | ---: | --- | --- | --- |
| `hash_904611F3` 桥梁 类型 哈希 | 4 | 0xA5D8016D / hex:6d01d8a5 | 0x4EC82BA7 / hex:a72bc84e | 0xDC8314C1 / hex:c11483dc |
| `hash_C33A894E` 道具名称唯一ID | 8 | 5912 / hex:1817 | 5918 / hex:1e17 | 5915 / hex:1b17 |
| `hash_54706054` 唯一ID | 10 | 0 / hex:0000 | 5 / hex:0500 | 11 / hex:0b00 |
| `hash_68CF5938` 桥梁 类型 名称 | 12 | "BridgeStone" / hex:42726964676553746f6e65000000000000000000000000000000000000000000 | "BridgeRed" / hex:4272696467655265640000000000000000000000000000000000000000000000 | "BridgeBricks" / hex:427269646765427269636b730000000000000000000000000000000000000000 |
| `hash_5C28C4DB` 桥梁 类型 名称 Jp | 44 | "石橋" / hex:e79fb3e6a98b0000000000000000000000000000000000000000000000000000 | "赤い橋" / hex:e8b5a4e38184e6a98b0000000000000000000000000000000000000000000000 | "レンガの橋" / hex:e383ace383b3e382ace381aee6a98b0000000000000000000000000000000000 |

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
