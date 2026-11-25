# MuseumWatchPoint.bcsv

返回 [全量索引](README.md) · [统一字段字典](Field-Hashes.md) · [名称恢复证据](../Field-Names.md) · [残余字段证据](../../../../research/hash008h/residual_fields.json)。

原始路径：`e10617820db06889e1638499478da0de_NCA/1/Bcsv/MuseumWatchPoint.bcsv`
SHA256：`8576274bfa895ca94d97a4892f2d5fb9cf2158651e89efafa9234fb60e11ebe4`
状态：parsed

行数 112，行长 116，数据起点 140。

英文名称及类型为 CRC32 签名候选，不等同于原版明文；中文取自统一字典。跨度为物理字段间距，可能包含填充。业务证据仅采用当前表、当前偏移的已登记解释或残余字段记录；无证据不推断。

| Hash | 英文名称（CRC 候选） | 简体中文释义 | 偏移 | 跨度 | 数据类型（CRC 候选） | 当前解释 | 业务证据 |
| --- | --- | --- | ---: | ---: | --- | --- | --- |
| hash_3E884A6D | SilhouetteID | 轮廓 ID | 4 | 4 | u32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_BE776E71 | StageName | 阶段 名称 | 8 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_35AC2C17 | TimeShcedule | 时间 日程 | 12 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_1F3893E5 | WalkWatchOffsetX | 行走 观察 偏移 X | 16 | 4 | f32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_2258BA55 | WalkWatchOffsetY | 行走 观察 偏移 Y | 20 | 4 | f32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_65F8C085 | WalkWatchOffsetZ | 行走 观察 偏移 Z | 24 | 4 | f32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_D200FFD3 | WatchAngleY | 观察 角度 Y | 28 | 4 | f32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_2633F2C1 | WatchPosX | 观察 位置 X | 32 | 4 | f32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_1B53DB71 | WatchPosY | 观察 位置 Y | 36 | 4 | f32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_5CF3A1A1 | WatchPosZ | 观察 位置 Z | 40 | 4 | f32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_54706054 | UniqueID | 唯一ID | 44 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_91EAEEDD | BattlePoint | Battle 点 | 46 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_85FB9DD5 | PointName | 点 名称 | 47 | 65 | string65 | 未知，保留原值 | 未登记表级业务证据 |
| hash_F58109F5 | SilhouettePoint | 轮廓 点 | 112 | 4 | u8 | 未知，保留原值 | 未登记表级业务证据 |

<!-- table-business-catalog -->

## 中文表名与业务用途

**中文表名：** 博物馆观察点

**用途：** 按文件名与字段名称候选推测：用于配置或描述博物馆观察点相关数据；具体消费逻辑待验证。

**证据等级：** 名称推测

## 数据文件

[原始 Hash CSV](../../../../research/bcsv-data/raw/MuseumWatchPoint.csv) · [英文列名 CSV](../../../../research/bcsv-data/named/MuseumWatchPoint.csv) · [候选类型解码 CSV](../../../../research/bcsv-data/decoded/tables/MuseumWatchPoint.csv) · [结构 JSON](../../../../research/bcsv-data/schema/MuseumWatchPoint.json)

## 实际原版数据样例

选择首行、中间行、末行（去重）；每格展示原始完整字段字节及候选类型解码，不把候选类型视为已确认。

| 字段 | 偏移 | 行 0（0 基） | 行 56（0 基） | 行 111（0 基） |
| --- | ---: | --- | --- | --- |
| `hash_3E884A6D` 轮廓 ID | 4 | 0 / hex:00000000 | 0 / hex:00000000 | 0 / hex:00000000 |
| `hash_BE776E71` 阶段 名称 | 8 | 0x87F8DFBA / hex:badff887 | 0x789833BF / hex:bf339878 | 0x826BDE73 / hex:73de6b82 |
| `hash_35AC2C17` 时间 日程 | 12 | 0xA108392D / hex:2d3908a1 | 0xD01B2093 / hex:93201bd0 | 0xA108392D / hex:2d3908a1 |
| `hash_1F3893E5` 行走 观察 偏移 X | 16 | 0.0 / hex:00000000 | 0.0 / hex:00000000 | 0.0 / hex:00000000 |
| `hash_2258BA55` 行走 观察 偏移 Y | 20 | 10.0 / hex:00002041 | 25.0 / hex:0000c841 | 26.0 / hex:0000d041 |
| `hash_65F8C085` 行走 观察 偏移 Z | 24 | 20.0 / hex:0000a041 | 20.0 / hex:0000a041 | 18.0 / hex:00009041 |
| `hash_D200FFD3` 观察 角度 Y | 28 | 135.0 / hex:00000743 | 191.0 / hex:00003f43 | 90.0 / hex:0000b442 |
| `hash_2633F2C1` 观察 位置 X | 32 | 240.0 / hex:00007043 | 270.0 / hex:00008743 | 85.0 / hex:0000aa42 |
| `hash_1B53DB71` 观察 位置 Y | 36 | 10.0 / hex:00002041 | 20.0 / hex:0000a041 | 0.0 / hex:00000000 |
| `hash_5CF3A1A1` 观察 位置 Z | 40 | 230.0 / hex:00006643 | 85.0 / hex:0000aa42 | 245.0 / hex:00007543 |
| `hash_54706054` 唯一ID | 44 | 3 / hex:0300 | 64 / hex:4000 | 121 / hex:7900 |
| `hash_91EAEEDD` Battle 点 | 46 | 0 / hex:00 | 1 / hex:01 | 0 / hex:00 |
| `hash_85FB9DD5` 点 名称 | 47 | "ピラルク" / hex:e38394e383a9e383abe382af0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 | "バトル１" / hex:e38390e38388e383abefbc910000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 | "考える人" / hex:e88083e38188e3828be4baba0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 |
| `hash_F58109F5` 轮廓 点 | 112 | 0 / hex:00000000 | 0 / hex:00000000 | 0 / hex:00000000 |

## 枚举码值及实际分布

仅对 hshCstringRef 候选字段统计原版前 4 字节。已登记标签来自 decoded 枚举证据，逐值校验 CRC32 与原版出现次数；中文为研究译名，候选冲突不强行合并。每字段最多展示 12 个高频值，完整映射见下方 JSON。

### 阶段 名称（hash_BE776E71）

去重码值 10 个，已有标签候选 10 个。

| 原始码值 | 出现次数 | 英文候选 | 中文释义 | 证据 |
| --- | ---: | --- | --- | --- |
| 0x789833BF | 19 | IdrMuseumInsect_0 | Idr 博物馆 昆虫 0 | crc_candidate |
| 0x7BE93B05 | 19 | IdrMuseumFossil_2 | Idr 博物馆 化石 2 | crc_candidate |
| 0x826BDE73 | 16 | IdrMuseumArt_0 | Idr 博物馆 艺术品 0 | crc_candidate |
| 0x1EF18E00 | 14 | IdrMuseumFish_1 | Idr 博物馆 鱼 1 | crc_candidate |
| 0x69F6BE96 | 11 | IdrMuseumFish_0 | Idr 博物馆 鱼 0 | crc_candidate |
| 0x87F8DFBA | 11 | IdrMuseumFish_2 | Idr 博物馆 鱼 2 | crc_candidate |
| 0xE2E06ABF | 8 | IdrMuseumFossil_1 | Idr 博物馆 化石 1 | crc_candidate |
| 0x0F9F0329 | 7 | IdrMuseumInsect_1 | Idr 博物馆 昆虫 1 | crc_candidate |
| 0x96965293 | 4 | IdrMuseumInsect_2 | Idr 博物馆 昆虫 2 | crc_candidate |
| 0x95E75A29 | 3 | IdrMuseumFossil_0 | Idr 博物馆 化石 0 | crc_candidate |

### 时间 日程（hash_35AC2C17）

去重码值 3 个，已有标签候选 0 个。

| 原始码值 | 出现次数 | 英文候选 | 中文释义 | 证据 |
| --- | ---: | --- | --- | --- |
| 0xA108392D | 96 | 未知 | 未知 | unmapped |
| 0x5492970C | 9 | 未知 | 未知 | unmapped |
| 0xD01B2093 | 7 | 未知 | 未知 | unmapped |

[完整码值与样例 JSON](../../../../research/bcsv-catalog/table-profiles.json) · [已有枚举证据 CSV](../../../../research/bcsv-data/decoded/enum-values.csv)

## 跨表关联

以下为原版 CRC32 标签值域统计候选，不是已确认的外键。

| 方向 | 来源字段 | 目标字段 | 对端表 | 匹配记录 | 去重匹配 |
| --- | --- | --- | --- | ---: | ---: |
| — | — | — | 尚无已登记候选 | — | — |

[完整关联候选](References.md) · [逐值匹配明细](../../../../research/bcsv-data/decoded/reference-values.csv)
