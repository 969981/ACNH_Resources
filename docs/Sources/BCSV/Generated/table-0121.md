# MuseumArtDonateInfo.bcsv

返回 [全量索引](README.md) · [统一字段字典](Field-Hashes.md) · [名称恢复证据](../Field-Names.md) · [残余字段证据](../../../../research/hash008h/residual_fields.json)。

原始路径：`e10617820db06889e1638499478da0de_NCA/1/Bcsv/MuseumArtDonateInfo.bcsv`
SHA256：`226155d5a1b4596cf486132672769ef97080604e726a4394d9086ca8f0901bb2`
状态：parsed

行数 43，行长 48，数据起点 68。

英文名称及类型为 CRC32 签名候选，不等同于原版明文；中文取自统一字典。跨度为物理字段间距，可能包含填充。业务证据仅采用当前表、当前偏移的已登记解释或残余字段记录；无证据不推断。

| Hash | 英文名称（CRC 候选） | 简体中文释义 | 偏移 | 跨度 | 数据类型（CRC 候选） | 当前解释 | 业务证据 |
| --- | --- | --- | ---: | ---: | --- | --- | --- |
| hash_BE776E71 | StageName | 阶段 名称 | 4 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_FDEED09C | ModelID | 模型 ID | 8 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_54706054 | UniqueID | 唯一ID | 10 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_B76B7D37 | WatchItem | 观察 道具 | 12 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_B16C3035 | CameraParamName | Camera 参数 名称 | 14 | 34 | string33 | 未知，保留原值 | 未登记表级业务证据 |

<!-- table-business-catalog -->

## 中文表名与业务用途

**中文表名：** 博物馆艺术品捐赠信息

**用途：** 按文件名与字段名称候选推测：用于配置或描述博物馆艺术品捐赠信息相关数据；具体消费逻辑待验证。

**证据等级：** 名称推测

## 数据文件

[原始 Hash CSV](../../../../research/bcsv-data/raw/MuseumArtDonateInfo.csv) · [英文列名 CSV](../../../../research/bcsv-data/named/MuseumArtDonateInfo.csv) · [候选类型解码 CSV](../../../../research/bcsv-data/decoded/tables/MuseumArtDonateInfo.csv) · [结构 JSON](../../../../research/bcsv-data/schema/MuseumArtDonateInfo.json)

## 实际原版数据样例

选择首行、中间行、末行（去重）；每格展示原始完整字段字节及候选类型解码，不把候选类型视为已确认。

| 字段 | 偏移 | 行 0（0 基） | 行 21（0 基） | 行 42（0 基） |
| --- | ---: | --- | --- | --- |
| `hash_BE776E71` 阶段 名称 | 4 | 0x826BDE73 / hex:73de6b82 | 0x826BDE73 / hex:73de6b82 | 0x826BDE73 / hex:73de6b82 |
| `hash_FDEED09C` 模型 ID | 8 | 0 / hex:0000 | 21 / hex:1500 | 42 / hex:2a00 |
| `hash_54706054` 唯一ID | 10 | 0 / hex:0000 | 21 / hex:1500 | 42 / hex:2a00 |
| `hash_B76B7D37` 观察 道具 | 12 | 1343 / hex:3f05 | 10 / hex:0a00 | 12570 / hex:1a31 |
| `hash_B16C3035` Camera 参数 名称 | 14 | "id00" / hex:69643030000000000000000000000000000000000000000000000000000000000000 | "StandardGazingPoint" / hex:5374616e6461726447617a696e67506f696e74000000000000000000000000000000 | "Japan" / hex:4a6170616e0000000000000000000000000000000000000000000000000000000000 |

## 枚举码值及实际分布

仅对 hshCstringRef 候选字段统计原版前 4 字节。已登记标签来自 decoded 枚举证据，逐值校验 CRC32 与原版出现次数；中文为研究译名，候选冲突不强行合并。每字段最多展示 12 个高频值，完整映射见下方 JSON。

### 阶段 名称（hash_BE776E71）

去重码值 1 个，已有标签候选 1 个。

| 原始码值 | 出现次数 | 英文候选 | 中文释义 | 证据 |
| --- | ---: | --- | --- | --- |
| 0x826BDE73 | 43 | IdrMuseumArt_0 | Idr 博物馆 艺术品 0 | crc_candidate |

[完整码值与样例 JSON](../../../../research/bcsv-catalog/table-profiles.json) · [已有枚举证据 CSV](../../../../research/bcsv-data/decoded/enum-values.csv)

## 跨表关联

以下为原版 CRC32 标签值域统计候选，不是已确认的外键。

| 方向 | 来源字段 | 目标字段 | 对端表 | 匹配记录 | 去重匹配 |
| --- | --- | --- | --- | ---: | ---: |
| — | — | — | 尚无已登记候选 | — | — |

[完整关联候选](References.md) · [逐值匹配明细](../../../../research/bcsv-data/decoded/reference-values.csv)
