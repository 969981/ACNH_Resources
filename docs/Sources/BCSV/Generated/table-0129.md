# MuseumStampRackInfo.bcsv

返回 [全量索引](README.md) · [统一字段字典](Field-Hashes.md) · [名称恢复证据](../Field-Names.md) · [残余字段证据](../../../../research/hash008h/residual_fields.json)。

原始路径：`e10617820db06889e1638499478da0de_NCA/1/Bcsv/MuseumStampRackInfo.bcsv`
SHA256：`251a6027232204d246650b76149db42172b29637ddb40506c22e87e2930bc1a8`
状态：parsed

行数 32，行长 124，数据起点 132。

英文名称及类型为 CRC32 签名候选，不等同于原版明文；中文取自统一字典。跨度为物理字段间距，可能包含填充。业务证据仅采用当前表、当前偏移的已登记解释或残余字段记录；无证据不推断。

| Hash | 英文名称（CRC 候选） | 简体中文释义 | 偏移 | 跨度 | 数据类型（CRC 候选） | 当前解释 | 业务证据 |
| --- | --- | --- | ---: | ---: | --- | --- | --- |
| hash_BE776E71 | StageName | 阶段 名称 | 4 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_98FF7F38 | StampRackPutUnitX | 印章 架子 放置 单位 X | 8 | 4 | s32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_E23F2C58 | StampRackPutUnitZ | 印章 架子 放置 单位 Z | 12 | 4 | s32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_B02F0C17 | StampRackItemNameA | 印章 架子 道具 名称 A | 16 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_F78F76C7 | StampRackItemNameB | 印章 架子 道具 名称 B | 18 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_CAEF5F77 | StampRackItemNameC | 印章 架子 道具 名称 C | 20 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_D4F5B3E6 | StampRackSetDirection | 印章 架子 集合 方向 | 22 | 2 | s16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_54706054 | UniqueID | 唯一ID | 24 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_A90B807E | StampRackIdx | 印章 架子 Idx | 26 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_0512B63C | StampRackNameExplainLabel | 印章 架子 名称 说明 标签 | 27 | 32 | string32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_4AB9B98A | StampRackNameTextLabel | 印章 架子 名称 文本 标签 | 59 | 32 | string32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_96D80132 | StampRackNameTextLabelForUI | 印章 架子 名称 文本 标签 用于 UI | 91 | 32 | string32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_ED4B6070 | ValidNightExplain | 有效 夜间 说明 | 123 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |

<!-- table-business-catalog -->

## 中文表名与业务用途

**中文表名：** 博物馆集章台

**用途：** 按文件名与字段名称候选推测：用于配置或描述博物馆集章台相关数据；具体消费逻辑待验证。

**证据等级：** 名称推测

## 数据文件

[原始 Hash CSV](../../../../research/bcsv-data/raw/MuseumStampRackInfo.csv) · [英文列名 CSV](../../../../research/bcsv-data/named/MuseumStampRackInfo.csv) · [候选类型解码 CSV](../../../../research/bcsv-data/decoded/tables/MuseumStampRackInfo.csv) · [结构 JSON](../../../../research/bcsv-data/schema/MuseumStampRackInfo.json)

## 实际原版数据样例

选择首行、中间行、末行（去重）；每格展示原始完整字段字节及候选类型解码，不把候选类型视为已确认。

| 字段 | 偏移 | 行 0（0 基） | 行 16（0 基） | 行 31（0 基） |
| --- | ---: | --- | --- | --- |
| `hash_BE776E71` 阶段 名称 | 4 | 0x789833BF / hex:bf339878 | 0x69F6BE96 / hex:96bef669 | 0x826BDE73 / hex:73de6b82 |
| `hash_98FF7F38` 印章 架子 放置 单位 X | 8 | 59 / hex:3b000000 | 23 / hex:17000000 | 51 / hex:33000000 |
| `hash_E23F2C58` 印章 架子 放置 单位 Z | 12 | 5 / hex:05000000 | 21 / hex:15000000 | 58 / hex:3a000000 |
| `hash_B02F0C17` 印章 架子 道具 名称 A | 16 | 612 / hex:6402 | 2257 / hex:d108 | 12570 / hex:1a31 |
| `hash_F78F76C7` 印章 架子 道具 名称 B | 18 | 637 / hex:7d02 | 2259 / hex:d308 | 38 / hex:2600 |
| `hash_CAEF5F77` 印章 架子 道具 名称 C | 20 | 600 / hex:5802 | 2260 / hex:d408 | 66 / hex:4200 |
| `hash_D4F5B3E6` 印章 架子 集合 方向 | 22 | 180 / hex:b400 | 180 / hex:b400 | 0 / hex:0000 |
| `hash_54706054` 唯一ID | 24 | 0 / hex:0000 | 16 / hex:1000 | 33 / hex:2100 |
| `hash_A90B807E` 印章 架子 Idx | 26 | 0 / hex:00 | 16 / hex:10 | 31 / hex:1f |
| `hash_0512B63C` 印章 架子 名称 说明 标签 | 27 | "002" / hex:3030320000000000000000000000000000000000000000000000000000000000 | "112" / hex:3131320000000000000000000000000000000000000000000000000000000000 | "257" / hex:3235370000000000000000000000000000000000000000000000000000000000 |
| `hash_4AB9B98A` 印章 架子 名称 文本 标签 | 59 | "001" / hex:3030310000000000000000000000000000000000000000000000000000000000 | "111" / hex:3131310000000000000000000000000000000000000000000000000000000000 | "256" / hex:3235360000000000000000000000000000000000000000000000000000000000 |
| `hash_96D80132` 印章 架子 名称 文本 标签 用于 UI | 91 | "001" / hex:3030310000000000000000000000000000000000000000000000000000000000 | "106" / hex:3130360000000000000000000000000000000000000000000000000000000000 | "303" / hex:3330330000000000000000000000000000000000000000000000000000000000 |
| `hash_ED4B6070` 有效 夜间 说明 | 123 | 1 / hex:01 | 0 / hex:00 | 0 / hex:00 |

## 枚举码值及实际分布

仅对 hshCstringRef 候选字段统计原版前 4 字节。已登记标签来自 decoded 枚举证据，逐值校验 CRC32 与原版出现次数；中文为研究译名，候选冲突不强行合并。每字段最多展示 12 个高频值，完整映射见下方 JSON。

### 阶段 名称（hash_BE776E71）

去重码值 10 个，已有标签候选 10 个。

| 原始码值 | 出现次数 | 英文候选 | 中文释义 | 证据 |
| --- | ---: | --- | --- | --- |
| 0x789833BF | 7 | IdrMuseumInsect_0 | Idr 博物馆 昆虫 0 | crc_candidate |
| 0x69F6BE96 | 4 | IdrMuseumFish_0 | Idr 博物馆 鱼 0 | crc_candidate |
| 0x826BDE73 | 4 | IdrMuseumArt_0 | Idr 博物馆 艺术品 0 | crc_candidate |
| 0x87F8DFBA | 4 | IdrMuseumFish_2 | Idr 博物馆 鱼 2 | crc_candidate |
| 0xE2E06ABF | 4 | IdrMuseumFossil_1 | Idr 博物馆 化石 1 | crc_candidate |
| 0x96965293 | 3 | IdrMuseumInsect_2 | Idr 博物馆 昆虫 2 | crc_candidate |
| 0x1EF18E00 | 2 | IdrMuseumFish_1 | Idr 博物馆 鱼 1 | crc_candidate |
| 0x95E75A29 | 2 | IdrMuseumFossil_0 | Idr 博物馆 化石 0 | crc_candidate |
| 0x0F9F0329 | 1 | IdrMuseumInsect_1 | Idr 博物馆 昆虫 1 | crc_candidate |
| 0x7BE93B05 | 1 | IdrMuseumFossil_2 | Idr 博物馆 化石 2 | crc_candidate |

[完整码值与样例 JSON](../../../../research/bcsv-catalog/table-profiles.json) · [已有枚举证据 CSV](../../../../research/bcsv-data/decoded/enum-values.csv)

## 跨表关联

以下为原版 CRC32 标签值域统计候选，不是已确认的外键。

| 方向 | 来源字段 | 目标字段 | 对端表 | 匹配记录 | 去重匹配 |
| --- | --- | --- | --- | ---: | ---: |
| — | — | — | 尚无已登记候选 | — | — |

[完整关联候选](References.md) · [逐值匹配明细](../../../../research/bcsv-data/decoded/reference-values.csv)
