# MuseumNPCSpotTalk.bcsv

返回 [全量索引](README.md) · [统一字段字典](Field-Hashes.md) · [名称恢复证据](../Field-Names.md) · [残余字段证据](../../../../research/hash008h/residual_fields.json)。

原始路径：`e10617820db06889e1638499478da0de_NCA/1/Bcsv/MuseumNPCSpotTalk.bcsv`
SHA256：`6e54b5e55bae7472c35a152575d57e5a89df2c3261a02d2aece31dcead6b18f2`
状态：parsed

行数 10，行长 104，数据起点 68。

英文名称及类型为 CRC32 签名候选，不等同于原版明文；中文取自统一字典。跨度为物理字段间距，可能包含填充。业务证据仅采用当前表、当前偏移的已登记解释或残余字段记录；无证据不推断。

| Hash | 英文名称（CRC 候选） | 简体中文释义 | 偏移 | 跨度 | 数据类型（CRC 候选） | 当前解释 | 业务证据 |
| --- | --- | --- | ---: | ---: | --- | --- | --- |
| hash_BE776E71 | StageName | 阶段 名称 | 4 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_54706054 | UniqueID | 唯一ID | 8 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_8E768BD8 | SpotTalkKey | 地点 对话 键 | 10 | 25 | string25 | 未知，保留原值 | 未登记表级业务证据 |
| hash_9D9B3598 | SpotTalkLabelKey | 地点 对话 标签 键 | 35 | 4 | string4 | 未知，保留原值 | 未登记表级业务证据 |
| hash_B10B6BC8 | SpotTalkName | 地点 对话 名称 | 39 | 65 | string65 | 未知，保留原值 | 未登记表级业务证据 |

<!-- table-business-catalog -->

## 中文表名与业务用途

**中文表名：** 博物馆 NPC 景点对话

**用途：** 按文件名与字段名称候选推测：用于配置或描述博物馆 NPC 景点对话相关数据；具体消费逻辑待验证。

**证据等级：** 名称推测

## 数据文件

[原始 Hash CSV](../../../../research/bcsv-data/raw/MuseumNPCSpotTalk.csv) · [英文列名 CSV](../../../../research/bcsv-data/named/MuseumNPCSpotTalk.csv) · [候选类型解码 CSV](../../../../research/bcsv-data/decoded/tables/MuseumNPCSpotTalk.csv) · [结构 JSON](../../../../research/bcsv-data/schema/MuseumNPCSpotTalk.json)

## 实际原版数据样例

选择首行、中间行、末行（去重）；每格展示原始完整字段字节及候选类型解码，不把候选类型视为已确认。

| 字段 | 偏移 | 行 0（0 基） | 行 5（0 基） | 行 9（0 基） |
| --- | ---: | --- | --- | --- |
| `hash_BE776E71` 阶段 名称 | 4 | 0x87F8DFBA / hex:badff887 | 0x0F9F0329 / hex:29039f0f | 0x826BDE73 / hex:73de6b82 |
| `hash_54706054` 唯一ID | 8 | 2 / hex:0200 | 9 / hex:0900 | 18 / hex:1200 |
| `hash_8E768BD8` 地点 对话 键 | 10 | "BO_Spot_Museum_Fish" / hex:424f5f53706f745f4d757365756d5f46697368000000000000 | "BO_Spot_Museum_Insect" / hex:424f5f53706f745f4d757365756d5f496e7365637400000000 | "BO_Spot_Museum_Art" / hex:424f5f53706f745f4d757365756d5f41727400000000000000 |
| `hash_9D9B3598` 地点 对话 标签 键 | 35 | "001" / hex:30303100 | "003" / hex:30303300 | "001" / hex:30303100 |
| `hash_B10B6BC8` 地点 对话 名称 | 39 | "川魚の部屋" / hex:e5b79de9ad9ae381aee983a8e5b18b0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 | "バタフライガーデン" / hex:e38390e382bfe38395e383a9e382a4e382ace383bce38387e383b30000000000000000000000000000000000000000000000000000000000000000000000000000 | "芸術部屋" / hex:e88ab8e8a193e983a8e5b18b0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 |

## 枚举码值及实际分布

仅对 hshCstringRef 候选字段统计原版前 4 字节。已登记标签来自 decoded 枚举证据，逐值校验 CRC32 与原版出现次数；中文为研究译名，候选冲突不强行合并。每字段最多展示 12 个高频值，完整映射见下方 JSON。

### 阶段 名称（hash_BE776E71）

去重码值 10 个，已有标签候选 10 个。

| 原始码值 | 出现次数 | 英文候选 | 中文释义 | 证据 |
| --- | ---: | --- | --- | --- |
| 0x0F9F0329 | 1 | IdrMuseumInsect_1 | Idr 博物馆 昆虫 1 | crc_candidate |
| 0x1EF18E00 | 1 | IdrMuseumFish_1 | Idr 博物馆 鱼 1 | crc_candidate |
| 0x69F6BE96 | 1 | IdrMuseumFish_0 | Idr 博物馆 鱼 0 | crc_candidate |
| 0x789833BF | 1 | IdrMuseumInsect_0 | Idr 博物馆 昆虫 0 | crc_candidate |
| 0x7BE93B05 | 1 | IdrMuseumFossil_2 | Idr 博物馆 化石 2 | crc_candidate |
| 0x826BDE73 | 1 | IdrMuseumArt_0 | Idr 博物馆 艺术品 0 | crc_candidate |
| 0x87F8DFBA | 1 | IdrMuseumFish_2 | Idr 博物馆 鱼 2 | crc_candidate |
| 0x95E75A29 | 1 | IdrMuseumFossil_0 | Idr 博物馆 化石 0 | crc_candidate |
| 0x96965293 | 1 | IdrMuseumInsect_2 | Idr 博物馆 昆虫 2 | crc_candidate |
| 0xE2E06ABF | 1 | IdrMuseumFossil_1 | Idr 博物馆 化石 1 | crc_candidate |

[完整码值与样例 JSON](../../../../research/bcsv-catalog/table-profiles.json) · [已有枚举证据 CSV](../../../../research/bcsv-data/decoded/enum-values.csv)

## 跨表关联

以下为原版 CRC32 标签值域统计候选，不是已确认的外键。

| 方向 | 来源字段 | 目标字段 | 对端表 | 匹配记录 | 去重匹配 |
| --- | --- | --- | --- | ---: | ---: |
| — | — | — | 尚无已登记候选 | — | — |

[完整关联候选](References.md) · [逐值匹配明细](../../../../research/bcsv-data/decoded/reference-values.csv)
