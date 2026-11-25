# ItemRemakeCommonPattern.bcsv

返回 [全量索引](README.md) · [统一字段字典](Field-Hashes.md) · [名称恢复证据](../Field-Names.md) · [残余字段证据](../../../../research/hash008h/residual_fields.json)。

原始路径：`e10617820db06889e1638499478da0de_NCA/1/Bcsv/ItemRemakeCommonPattern.bcsv`
SHA256：`4d8445c36cdac4da2234c4899fbb9e8ba4a0853eabeba7472ff8e58a559eeca7`
状态：parsed

行数 220，行长 120，数据起点 84。

英文名称及类型为 CRC32 签名候选，不等同于原版明文；中文取自统一字典。跨度为物理字段间距，可能包含填充。业务证据仅采用当前表、当前偏移的已登记解释或残余字段记录；无证据不推断。

| Hash | 英文名称（CRC 候选） | 简体中文释义 | 偏移 | 跨度 | 数据类型（CRC 候选） | 当前解释 | 业务证据 |
| --- | --- | --- | ---: | ---: | --- | --- | --- |
| hash_90466AFD | Category | 分类 | 4 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_A6B1A7FD | Color1 | 颜色 1 | 8 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_B7CCCD84 | Color2 | 颜色 2 | 12 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_8FB1ED85 | SortID | 排序 ID | 16 | 4 | u32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_54706054 | UniqueID | 唯一ID | 20 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_87BF00E8 | Label | 标签 | 22 | 32 | string32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_5AEBBFB5 | TextureResName | 纹理 资源 名称 | 54 | 66 | string64 | 未知，保留原值 | 未登记表级业务证据 |

<!-- table-business-catalog -->

## 中文表名与业务用途

**中文表名：** 改造通用图案

**用途：** 按文件名与字段名称候选推测：用于配置或描述改造通用图案相关数据；具体消费逻辑待验证。

**证据等级：** 名称推测

## 数据文件

[原始 Hash CSV](../../../../research/bcsv-data/raw/ItemRemakeCommonPattern.csv) · [英文列名 CSV](../../../../research/bcsv-data/named/ItemRemakeCommonPattern.csv) · [候选类型解码 CSV](../../../../research/bcsv-data/decoded/tables/ItemRemakeCommonPattern.csv) · [结构 JSON](../../../../research/bcsv-data/schema/ItemRemakeCommonPattern.json)

## 实际原版数据样例

选择首行、中间行、末行（去重）；每格展示原始完整字段字节及候选类型解码，不把候选类型视为已确认。

| 字段 | 偏移 | 行 0（0 基） | 行 110（0 基） | 行 219（0 基） |
| --- | ---: | --- | --- | --- |
| `hash_90466AFD` 分类 | 4 | 0x3DDF3E43 / hex:433edf3d | 0xFD20275E / hex:5e2720fd | 0x2B7E05B4 / hex:b4057e2b |
| `hash_A6B1A7FD` 颜色 1 | 8 | 0xC22C196F / hex:6f192cc2 | 0xC22C196F / hex:6f192cc2 | 0x830EE2A0 / hex:a0e20e83 |
| `hash_B7CCCD84` 颜色 2 | 12 | 0xC22C196F / hex:6f192cc2 | 0x1A69B44E / hex:4eb4691a | 0x25CD90D8 / hex:d890cd25 |
| `hash_8FB1ED85` 排序 ID | 16 | 0 / hex:00000000 | 110 / hex:6e000000 | 219 / hex:db000000 |
| `hash_54706054` 唯一ID | 20 | 0 / hex:0000 | 110 / hex:6e00 | 219 / hex:db00 |
| `hash_87BF00E8` 标签 | 22 | "0" / hex:3000000000000000000000000000000000000000000000000000000000000000 | "110" / hex:3131300000000000000000000000000000000000000000000000000000000000 | "219" / hex:3231390000000000000000000000000000000000000000000000000000000000 |
| `hash_5AEBBFB5` 纹理 资源 名称 | 54 | "FtrCmnFabricDotSmall00" / hex:467472436d6e466162726963446f74536d616c6c30300000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 | "FtrCmnFabricWater00" / hex:467472436d6e466162726963576174657230300000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 | "FtrCmnFabricNewspaper01" / hex:467472436d6e4661627269634e6577737061706572303100000000000000000000000000000000000000000000000000000000000000000000000000000000000000 |

## 枚举码值及实际分布

仅对 hshCstringRef 候选字段统计原版前 4 字节。已登记标签来自 decoded 枚举证据，逐值校验 CRC32 与原版出现次数；中文为研究译名，候选冲突不强行合并。每字段最多展示 12 个高频值，完整映射见下方 JSON。

### 分类（hash_90466AFD）

去重码值 11 个，已有标签候选 11 个。

| 原始码值 | 出现次数 | 英文候选 | 中文释义 | 证据 |
| --- | ---: | --- | --- | --- |
| 0x1BF5CBB6 | 20 | Retro | Retro | crc_candidate |
| 0x2B7E05B4 | 20 | Omnibus | Omnibus | crc_candidate |
| 0x3DDF3E43 | 20 | Dot | Dot | crc_candidate |
| 0x4D0FFEC9 | 20 | Cool | Cool | crc_candidate |
| 0x50F754CF | 20 | CheckA | 检查 A | crc_candidate |
| 0x5F48E18E | 20 | Toy | Toy | crc_candidate |
| 0x642976E4 | 20 | TraditionalA | Traditional A | crc_candidate |
| 0x75D4D0AF | 20 | Natural | Natural | crc_candidate |
| 0xA35DE96C | 20 | Stripe | Stripe | crc_candidate |
| 0xC9FE0575 | 20 | CheckB | 检查 B | crc_candidate |
| 0xFD20275E | 20 | TraditionalB | Traditional B | crc_candidate |

### 颜色 1（hash_A6B1A7FD）

去重码值 14 个，已有标签候选 14 个。

| 原始码值 | 出现次数 | 英文候选 | 中文释义 | 证据 |
| --- | ---: | --- | --- | --- |
| 0x830EE2A0 | 51 | White | White | crc_candidate |
| 0x4844952C | 24 | Black | Black | crc_candidate |
| 0x40BA7693 | 21 | Colorful | Colorful | crc_candidate |
| 0x3E04658A | 18 | Blue | Blue | crc_candidate |
| 0x115BC125 | 17 | Green | Green | crc_candidate |
| 0xC22C196F | 15 | Red | Red | crc_candidate |
| 0xB88B631D | 13 | Beige | Beige | crc_candidate |
| 0xD7A8E9A9 | 12 | Yellow | Yellow | crc_candidate |
| 0x8C51DEE8 | 11 | Pink | 粉色 | crc_candidate |
| 0xA8AF5CE8 | 10 | LightBlue | 光照 Blue | crc_candidate |
| 0x25CD90D8 | 8 | Gray | Gray | crc_candidate |
| 0xACD8BB50 | 7 | Brown | Brown | crc_candidate |

### 颜色 2（hash_B7CCCD84）

去重码值 14 个，已有标签候选 14 个。

| 原始码值 | 出现次数 | 英文候选 | 中文释义 | 证据 |
| --- | ---: | --- | --- | --- |
| 0x40BA7693 | 46 | Colorful | Colorful | crc_candidate |
| 0x3E04658A | 32 | Blue | Blue | crc_candidate |
| 0x115BC125 | 23 | Green | Green | crc_candidate |
| 0xC22C196F | 22 | Red | Red | crc_candidate |
| 0x8C51DEE8 | 18 | Pink | 粉色 | crc_candidate |
| 0xD7A8E9A9 | 17 | Yellow | Yellow | crc_candidate |
| 0xA8AF5CE8 | 14 | LightBlue | 光照 Blue | crc_candidate |
| 0x4844952C | 12 | Black | Black | crc_candidate |
| 0xACD8BB50 | 9 | Brown | Brown | crc_candidate |
| 0x25CD90D8 | 8 | Gray | Gray | crc_candidate |
| 0x1A69B44E | 6 | Orange | 橙色 | crc_candidate |
| 0xED2977D0 | 5 | Purple | Purple | crc_candidate |

[完整码值与样例 JSON](../../../../research/bcsv-catalog/table-profiles.json) · [已有枚举证据 CSV](../../../../research/bcsv-data/decoded/enum-values.csv)

## 跨表关联

以下为原版 CRC32 标签值域统计候选，不是已确认的外键。

| 方向 | 来源字段 | 目标字段 | 对端表 | 匹配记录 | 去重匹配 |
| --- | --- | --- | --- | ---: | ---: |
| 入向 | hash_770288FD | hash_87BF00E8 | [FishStatusParam.bcsv](table-0062.md) | 85/85 | 5/5 |
| 入向 | hash_7EC9ADA7 | hash_87BF00E8 | [FishStatusParam.bcsv](table-0062.md) | 85/85 | 5/5 |
| 出向 | hash_90466AFD | hash_87BF00E8 | [ItemRemakeCommonPatternCategory.bcsv](table-0097.md) | 220/220 | 11/11 |
| 出向 | hash_A6B1A7FD | hash_87BF00E8 | [ItemColor.bcsv](table-0074.md) | 220/220 | 14/14 |
| 出向 | hash_B7CCCD84 | hash_87BF00E8 | [ItemColor.bcsv](table-0074.md) | 220/220 | 14/14 |
| 入向 | hash_AFEB1BF1 | hash_87BF00E8 | [SeafoodStatusParam.bcsv](table-0167.md) | 42/42 | 5/5 |

[完整关联候选](References.md) · [逐值匹配明细](../../../../research/bcsv-data/decoded/reference-values.csv)
