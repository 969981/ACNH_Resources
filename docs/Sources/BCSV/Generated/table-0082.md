# ItemNpcOutfitInfo.bcsv

返回 [全量索引](README.md) · [统一字段字典](Field-Hashes.md) · [名称恢复证据](../Field-Names.md) · [残余字段证据](../../../../research/hash008h/residual_fields.json)。

原始路径：`e10617820db06889e1638499478da0de_NCA/1/Bcsv/ItemNpcOutfitInfo.bcsv`
SHA256：`6ee6ed95a92221f1294f98a3cee385ac33c99ea013de151a0058677624b97b16`
状态：parsed

行数 21，行长 108，数据起点 92。

英文名称及类型为 CRC32 签名候选，不等同于原版明文；中文取自统一字典。跨度为物理字段间距，可能包含填充。业务证据仅采用当前表、当前偏移的已登记解释或残余字段记录；无证据不推断。

| Hash | 英文名称（CRC 候选） | 简体中文释义 | 偏移 | 跨度 | 数据类型（CRC 候选） | 当前解释 | 业务证据 |
| --- | --- | --- | ---: | ---: | --- | --- | --- |
| hash_54706054 | UniqueID | 唯一ID | 4 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_B3DA5C52 | HideDdmCap | 隐藏 Ddm 帽子 | 6 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_8E07B21E | HideDodmCap | 隐藏 Dodm 帽子 | 7 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_E5C221D5 | RadiusBOutdoor | 半径 B 室外 | 8 | 1 | s8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_413012F7 | HideTmbmCap | 隐藏 Tmbm 帽子 | 9 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_00550508 | HideTmmCap | 隐藏 Tmm 帽子 | 10 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_13AB5198 | Label | 标签 | 11 | 64 | string64 | 未知，保留原值 | 未登记表级业务证据 |
| hash_977ADFCE | Name | 名称 | 75 | 33 | string32 | 未知，保留原值 | 未登记表级业务证据 |

<!-- table-business-catalog -->

## 中文表名与业务用途

**中文表名：** NPC 服装信息

**用途：** 按文件名与字段名称候选推测：用于配置或描述NPC 服装信息相关数据；具体消费逻辑待验证。

**证据等级：** 名称推测

## 数据文件

[原始 Hash CSV](../../../../research/bcsv-data/raw/ItemNpcOutfitInfo.csv) · [英文列名 CSV](../../../../research/bcsv-data/named/ItemNpcOutfitInfo.csv) · [候选类型解码 CSV](../../../../research/bcsv-data/decoded/tables/ItemNpcOutfitInfo.csv) · [结构 JSON](../../../../research/bcsv-data/schema/ItemNpcOutfitInfo.json)

## 实际原版数据样例

选择首行、中间行、末行（去重）；每格展示原始完整字段字节及候选类型解码，不把候选类型视为已确认。

| 字段 | 偏移 | 行 0（0 基） | 行 10（0 基） | 行 20（0 基） |
| --- | ---: | --- | --- | --- |
| `hash_54706054` 唯一ID | 4 | 0 / hex:0000 | 47 / hex:2f00 | 57 / hex:3900 |
| `hash_B3DA5C52` 隐藏 Ddm 帽子 | 6 | 0 / hex:00 | 0 / hex:00 | 0 / hex:00 |
| `hash_8E07B21E` 隐藏 Dodm 帽子 | 7 | 0 / hex:00 | 0 / hex:00 | 0 / hex:00 |
| `hash_E5C221D5` 半径 B 室外 | 8 | 0 / hex:00 | 0 / hex:00 | 0 / hex:00 |
| `hash_413012F7` 隐藏 Tmbm 帽子 | 9 | 0 / hex:00 | 0 / hex:00 | 0 / hex:00 |
| `hash_00550508` 隐藏 Tmm 帽子 | 10 | 0 / hex:00 | 0 / hex:00 | 0 / hex:00 |
| `hash_13AB5198` 标签 | 11 | "None" / hex:4e6f6e65000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 | "C_LeftBig" / hex:435f4c65667442696700000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 | "G_LeftBig" / hex:475f4c65667442696700000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 |
| `hash_977ADFCE` 名称 | 75 | "なし" / hex:e381aae38197000000000000000000000000000000000000000000000000000000 | "帽子・左(大)" / hex:e5b8bde5ad90e383bbe5b7a628e5a4a72900000000000000000000000000000000 | "メガネ・片目(大)" / hex:e383a1e382ace3838de383bbe78987e79bae28e5a4a72900000000000000000000 |

## 枚举码值及实际分布

仅对 hshCstringRef 候选字段统计原版前 4 字节。已登记标签来自 decoded 枚举证据，逐值校验 CRC32 与原版出现次数；中文为研究译名，候选冲突不强行合并。每字段最多展示 12 个高频值，完整映射见下方 JSON。

本表无可按此规则识别的 CRC 枚举字段；不代表不存在数值枚举或位域。

[完整码值与样例 JSON](../../../../research/bcsv-catalog/table-profiles.json) · [已有枚举证据 CSV](../../../../research/bcsv-data/decoded/enum-values.csv)

## 跨表关联

以下为原版 CRC32 标签值域统计候选，不是已确认的外键。

| 方向 | 来源字段 | 目标字段 | 对端表 | 匹配记录 | 去重匹配 |
| --- | --- | --- | --- | ---: | ---: |
| 入向 | hash_60C99A5E | hash_13AB5198 | [ItemParam.bcsv](table-0089.md) | 11178/11178 | 20/20 |

[完整关联候选](References.md) · [逐值匹配明细](../../../../research/bcsv-data/decoded/reference-values.csv)
