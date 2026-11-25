# CharaMakeHairColorParam.bcsv

返回 [全量索引](README.md) · [统一字段字典](Field-Hashes.md) · [名称恢复证据](../Field-Names.md) · [残余字段证据](../../../../research/hash008h/residual_fields.json)。

原始路径：`e10617820db06889e1638499478da0de_NCA/1/Bcsv/CharaMakeHairColorParam.bcsv`
SHA256：`f34ad4bce256c31cbdafb4406dee7d03b3ec1bb4db6008f457877a91fd5c9a91`
状态：parsed

行数 16，行长 96，数据起点 100。

英文名称及类型为 CRC32 签名候选，不等同于原版明文；中文取自统一字典。跨度为物理字段间距，可能包含填充。业务证据仅采用当前表、当前偏移的已登记解释或残余字段记录；无证据不推断。

| Hash | 英文名称（CRC 候选） | 简体中文释义 | 偏移 | 跨度 | 数据类型（CRC 候选） | 当前解释 | 业务证据 |
| --- | --- | --- | ---: | ---: | --- | --- | --- |
| hash_68BED0EF | BaseColorB | 基础 颜色 B | 4 | 4 | f32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_A05E5F9F | BaseColorG | 基础 颜色 G | 8 | 4 | f32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_085E476D | BaseColorR | 基础 颜色 R | 12 | 4 | f32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_16C95ACC | HighlightColorB | 高亮 颜色 B | 16 | 4 | f32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_DE29D5BC | HighlightColorG | 高亮 颜色 G | 20 | 4 | f32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_7629CD4E | HighlightColorR | 高亮 颜色 R | 24 | 4 | f32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_54706054 | UniqueID | 唯一ID | 28 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_87BF00E8 | Label | 标签 | 30 | 32 | string32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_977ADFCE | Name | 名称 | 62 | 34 | string32 | 未知，保留原值 | 未登记表级业务证据 |

<!-- table-business-catalog -->

## 中文表名与业务用途

**中文表名：** 角色创建头发颜色

**用途：** 按文件名与字段名称候选推测：用于配置或描述角色创建头发颜色相关数据；具体消费逻辑待验证。

**证据等级：** 名称推测

## 数据文件

[原始 Hash CSV](../../../../research/bcsv-data/raw/CharaMakeHairColorParam.csv) · [英文列名 CSV](../../../../research/bcsv-data/named/CharaMakeHairColorParam.csv) · [候选类型解码 CSV](../../../../research/bcsv-data/decoded/tables/CharaMakeHairColorParam.csv) · [结构 JSON](../../../../research/bcsv-data/schema/CharaMakeHairColorParam.json)

## 实际原版数据样例

选择首行、中间行、末行（去重）；每格展示原始完整字段字节及候选类型解码，不把候选类型视为已确认。

| 字段 | 偏移 | 行 0（0 基） | 行 8（0 基） | 行 15（0 基） |
| --- | ---: | --- | --- | --- |
| `hash_68BED0EF` 基础 颜色 B | 4 | 0.02199999988079071 / hex:5839b43c | 0.03500000014901161 / hex:295c0f3d | 0.2685000002384186 / hex:d578893e |
| `hash_A05E5F9F` 基础 颜色 G | 8 | 0.02199999988079071 / hex:5839b43c | 0.20000000298023224 / hex:cdcc4c3e | 0.323199987411499 / hex:787aa53e |
| `hash_085E476D` 基础 颜色 R | 12 | 0.02199999988079071 / hex:5839b43c | 0.37599998712539673 / hex:1283c03e | 0.323199987411499 / hex:787aa53e |
| `hash_16C95ACC` 高亮 颜色 B | 16 | 0.05999999865889549 / hex:8fc2753d | 0.05829999968409538 / hex:fbcb6e3d | 0.4268999993801117 / hex:a392da3e |
| `hash_DE29D5BC` 高亮 颜色 G | 20 | 0.05999999865889549 / hex:8fc2753d | 0.24779999256134033 / hex:48bf7d3e | 0.44510000944137573 / hex:26e4e33e |
| `hash_7629CD4E` 高亮 颜色 R | 24 | 0.05999999865889549 / hex:8fc2753d | 0.4226999878883362 / hex:226cd83e | 0.44510000944137573 / hex:26e4e33e |
| `hash_54706054` 唯一ID | 28 | 0 / hex:0000 | 8 / hex:0800 | 15 / hex:0f00 |
| `hash_87BF00E8` 标签 | 30 | "HairColor0" / hex:48616972436f6c6f723000000000000000000000000000000000000000000000 | "HairColor8" / hex:48616972436f6c6f723800000000000000000000000000000000000000000000 | "HairColor15" / hex:48616972436f6c6f723135000000000000000000000000000000000000000000 |
| `hash_977ADFCE` 名称 | 62 | "HairColor0" / hex:48616972436f6c6f7230000000000000000000000000000000000000000000000000 | "HairColor8" / hex:48616972436f6c6f7238000000000000000000000000000000000000000000000000 | "HairColor15" / hex:48616972436f6c6f7231350000000000000000000000000000000000000000000000 |

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
