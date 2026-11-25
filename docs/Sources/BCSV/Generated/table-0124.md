# MuseumFossilDonateInfo.bcsv

返回 [全量索引](README.md) · [统一字段字典](Field-Hashes.md) · [名称恢复证据](../Field-Names.md) · [残余字段证据](../../../../research/hash008h/residual_fields.json)。

原始路径：`e10617820db06889e1638499478da0de_NCA/1/Bcsv/MuseumFossilDonateInfo.bcsv`
SHA256：`2085a53280a21593cc470a945997344af5287b443d86a54aab1de41859da68c7`
状态：parsed

行数 73，行长 48，数据起点 68。

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

**中文表名：** 博物馆化石捐赠信息

**用途：** 按文件名与字段名称候选推测：用于配置或描述博物馆化石捐赠信息相关数据；具体消费逻辑待验证。

**证据等级：** 名称推测

## 数据文件

[原始 Hash CSV](../../../../research/bcsv-data/raw/MuseumFossilDonateInfo.csv) · [英文列名 CSV](../../../../research/bcsv-data/named/MuseumFossilDonateInfo.csv) · [候选类型解码 CSV](../../../../research/bcsv-data/decoded/tables/MuseumFossilDonateInfo.csv) · [结构 JSON](../../../../research/bcsv-data/schema/MuseumFossilDonateInfo.json)

## 实际原版数据样例

选择首行、中间行、末行（去重）；每格展示原始完整字段字节及候选类型解码，不把候选类型视为已确认。

| 字段 | 偏移 | 行 0（0 基） | 行 36（0 基） | 行 72（0 基） |
| --- | ---: | --- | --- | --- |
| `hash_BE776E71` 阶段 名称 | 4 | 0xE2E06ABF / hex:bf6ae0e2 | 0xE2E06ABF / hex:bf6ae0e2 | 0x7BE93B05 / hex:053be97b |
| `hash_FDEED09C` 模型 ID | 8 | 0 / hex:0000 | 27 / hex:1b00 | 9 / hex:0900 |
| `hash_54706054` 唯一ID | 10 | 8 / hex:0800 | 45 / hex:2d00 | 81 / hex:5100 |
| `hash_B76B7D37` 观察 道具 | 12 | 4688 / hex:5012 | 227 / hex:e300 | 301 / hex:2d01 |
| `hash_B16C3035` Camera 参数 名称 | 14 | "FossilBrachiosaurus" / hex:466f7373696c4272616368696f736175727573000000000000000000000000000000 | "" / hex:00000000000000000000000000000000000000000000000000000000000000000000 | "FossilAustralopithecus" / hex:466f7373696c4175737472616c6f7069746865637573000000000000000000000000 |

## 枚举码值及实际分布

仅对 hshCstringRef 候选字段统计原版前 4 字节。已登记标签来自 decoded 枚举证据，逐值校验 CRC32 与原版出现次数；中文为研究译名，候选冲突不强行合并。每字段最多展示 12 个高频值，完整映射见下方 JSON。

### 阶段 名称（hash_BE776E71）

去重码值 3 个，已有标签候选 3 个。

| 原始码值 | 出现次数 | 英文候选 | 中文释义 | 证据 |
| --- | ---: | --- | --- | --- |
| 0xE2E06ABF | 54 | IdrMuseumFossil_1 | Idr 博物馆 化石 1 | crc_candidate |
| 0x7BE93B05 | 10 | IdrMuseumFossil_2 | Idr 博物馆 化石 2 | crc_candidate |
| 0x95E75A29 | 9 | IdrMuseumFossil_0 | Idr 博物馆 化石 0 | crc_candidate |

[完整码值与样例 JSON](../../../../research/bcsv-catalog/table-profiles.json) · [已有枚举证据 CSV](../../../../research/bcsv-data/decoded/enum-values.csv)

## 跨表关联

以下为原版 CRC32 标签值域统计候选，不是已确认的外键。

| 方向 | 来源字段 | 目标字段 | 对端表 | 匹配记录 | 去重匹配 |
| --- | --- | --- | --- | ---: | ---: |
| — | — | — | 尚无已登记候选 | — | — |

[完整关联候选](References.md) · [逐值匹配明细](../../../../research/bcsv-data/decoded/reference-values.csv)
