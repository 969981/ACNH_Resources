# ItemPlayerInitialOutfitGirlAWParam.bcsv

返回 [全量索引](README.md) · [统一字段字典](Field-Hashes.md) · [名称恢复证据](../Field-Names.md) · [残余字段证据](../../../../research/hash008h/residual_fields.json)。

原始路径：`e10617820db06889e1638499478da0de_NCA/1/Bcsv/ItemPlayerInitialOutfitGirlAWParam.bcsv`
SHA256：`bdca0af035942f1763b590cab29dd269c3470ea339d66fe314bc7e9869579703`
状态：parsed

行数 8，行长 52，数据起点 100。

英文名称及类型为 CRC32 签名候选，不等同于原版明文；中文取自统一字典。跨度为物理字段间距，可能包含填充。业务证据仅采用当前表、当前偏移的已登记解释或残余字段记录；无证据不推断。

| Hash | 英文名称（CRC 候选） | 简体中文释义 | 偏移 | 跨度 | 数据类型（CRC 候选） | 当前解释 | 业务证据 |
| --- | --- | --- | ---: | ---: | --- | --- | --- |
| hash_2B57B24A | AcceEye | 饰品 眼睛 | 4 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_9403C267 | AcceMouth | 饰品 嘴 | 6 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_CC136EB5 | Bottoms | 下装 | 8 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_291A1B04 | Cap | 帽子 | 10 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_CE827D47 | Shoes | 鞋 | 12 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_39ED7F5A | Socks | 袜子 | 14 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_870F1E29 | Tops | 上装 | 16 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_54706054 | UniqueID | 唯一ID | 18 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_87BF00E8 | Label | 标签 | 20 | 32 | string32 | 未知，保留原值 | 未登记表级业务证据 |

<!-- table-business-catalog -->

## 中文表名与业务用途

**中文表名：** 女性玩家秋冬初始服装

**用途：** 按文件名与字段名称候选推测：用于配置或描述女性玩家秋冬初始服装相关数据；具体消费逻辑待验证。

**证据等级：** 名称推测

## 数据文件

[原始 Hash CSV](../../../../research/bcsv-data/raw/ItemPlayerInitialOutfitGirlAWParam.csv) · [英文列名 CSV](../../../../research/bcsv-data/named/ItemPlayerInitialOutfitGirlAWParam.csv) · [候选类型解码 CSV](../../../../research/bcsv-data/decoded/tables/ItemPlayerInitialOutfitGirlAWParam.csv) · [结构 JSON](../../../../research/bcsv-data/schema/ItemPlayerInitialOutfitGirlAWParam.json)

## 实际原版数据样例

选择首行、中间行、末行（去重）；每格展示原始完整字段字节及候选类型解码，不把候选类型视为已确认。

| 字段 | 偏移 | 行 0（0 基） | 行 4（0 基） | 行 7（0 基） |
| --- | ---: | --- | --- | --- |
| `hash_2B57B24A` 饰品 眼睛 | 4 | 65534 / hex:feff | 65534 / hex:feff | 65534 / hex:feff |
| `hash_9403C267` 饰品 嘴 | 6 | 65534 / hex:feff | 65534 / hex:feff | 65534 / hex:feff |
| `hash_CC136EB5` 下装 | 8 | 4187 / hex:5b10 | 2403 / hex:6309 | 9011 / hex:3323 |
| `hash_291A1B04` 帽子 | 10 | 65534 / hex:feff | 65534 / hex:feff | 65534 / hex:feff |
| `hash_CE827D47` 鞋 | 12 | 6884 / hex:e41a | 5566 / hex:be15 | 6885 / hex:e51a |
| `hash_39ED7F5A` 袜子 | 14 | 5199 / hex:4f14 | 5199 / hex:4f14 | 5199 / hex:4f14 |
| `hash_870F1E29` 上装 | 16 | 6820 / hex:a41a | 8974 / hex:0e23 | 8977 / hex:1123 |
| `hash_54706054` 唯一ID | 18 | 0 / hex:0000 | 4 / hex:0400 | 7 / hex:0700 |
| `hash_87BF00E8` 标签 | 20 | "GirlAW_0" / hex:4769726c41575f30000000000000000000000000000000000000000000000000 | "GirlAW_4" / hex:4769726c41575f34000000000000000000000000000000000000000000000000 | "GirlAW_7" / hex:4769726c41575f37000000000000000000000000000000000000000000000000 |

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
