# MuseumNameboardInfo.bcsv

返回 [全量索引](README.md) · [统一字段字典](Field-Hashes.md) · [名称恢复证据](../Field-Names.md) · [残余字段证据](../../../../research/hash008h/residual_fields.json)。

原始路径：`e10617820db06889e1638499478da0de_NCA/1/Bcsv/MuseumNameboardInfo.bcsv`
SHA256：`d6163ce4b1d1e429a71edb2bc007d30411af12b76e2ceb3e7826b25c4daed079`
状态：parsed

行数 120，行长 104，数据起点 132。

英文名称及类型为 CRC32 签名候选，不等同于原版明文；中文取自统一字典。跨度为物理字段间距，可能包含填充。业务证据仅采用当前表、当前偏移的已登记解释或残余字段记录；无证据不推断。

| Hash | 英文名称（CRC 候选） | 简体中文释义 | 偏移 | 跨度 | 数据类型（CRC 候选） | 当前解释 | 业务证据 |
| --- | --- | --- | ---: | ---: | --- | --- | --- |
| hash_2C40799E | NameboardAngleY | 名牌 角度 Y | 4 | 4 | f32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_DF33EE48 | NameboardPosX | 名牌 位置 X | 8 | 4 | f32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_E253C7F8 | NameboardPosY | 名牌 位置 Y | 12 | 4 | f32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_A5F3BD28 | NameboardPosZ | 名牌 位置 Z | 16 | 4 | f32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_BE776E71 | StageName | 阶段 名称 | 20 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_1EF061DD | DonateItemFifth | 捐赠 道具 第五 | 24 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_3574933B | DonateItemFirst | 捐赠 道具 第一 | 26 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_DFACC347 | DonateItemFourth | 捐赠 道具 Fourth | 28 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_50650A2B | DonateItemSecond | 捐赠 道具 第二 | 30 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_B58D7541 | DonateItemThird | 捐赠 道具 Third | 32 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_54706054 | UniqueID | 唯一ID | 34 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_FAD4FF78 | ModelResName | 模型 资源 名称 | 36 | 65 | string65 | 未知，保留原值 | 未登记表级业务证据 |
| hash_C1BB7D2D | VisibleOff | 可见 关闭 | 101 | 3 | u8 | 未知，保留原值 | 未登记表级业务证据 |

<!-- table-business-catalog -->

## 中文表名与业务用途

**中文表名：** 博物馆说明牌

**用途：** 按文件名与字段名称候选推测：用于配置或描述博物馆说明牌相关数据；具体消费逻辑待验证。

**证据等级：** 名称推测

## 数据文件

[原始 Hash CSV](../../../../research/bcsv-data/raw/MuseumNameboardInfo.csv) · [英文列名 CSV](../../../../research/bcsv-data/named/MuseumNameboardInfo.csv) · [候选类型解码 CSV](../../../../research/bcsv-data/decoded/tables/MuseumNameboardInfo.csv) · [结构 JSON](../../../../research/bcsv-data/schema/MuseumNameboardInfo.json)

## 实际原版数据样例

选择首行、中间行、末行（去重）；每格展示原始完整字段字节及候选类型解码，不把候选类型视为已确认。

| 字段 | 偏移 | 行 0（0 基） | 行 60（0 基） | 行 119（0 基） |
| --- | ---: | --- | --- | --- |
| `hash_2C40799E` 名牌 角度 Y | 4 | 0.0 / hex:00000000 | 0.0 / hex:00000000 | 0.0 / hex:00000000 |
| `hash_DF33EE48` 名牌 位置 X | 8 | 130.0 / hex:00000243 | 255.0 / hex:00007f43 | 166.0 / hex:00002643 |
| `hash_E253C7F8` 名牌 位置 Y | 12 | -7.0 / hex:0000e0c0 | 0.0 / hex:00000000 | 15.0 / hex:00007041 |
| `hash_A5F3BD28` 名牌 位置 Z | 16 | 229.1999969482422 / hex:33336543 | 205.0 / hex:00004d43 | 259.0 / hex:00808143 |
| `hash_BE776E71` 阶段 名称 | 20 | 0x87F8DFBA / hex:badff887 | 0xE2E06ABF / hex:bf6ae0e2 | 0x826BDE73 / hex:73de6b82 |
| `hash_1EF061DD` 捐赠 道具 第五 | 24 | 2229 / hex:b508 | 65534 / hex:feff | 65534 / hex:feff |
| `hash_3574933B` 捐赠 道具 第一 | 26 | 2225 / hex:b108 | 210 / hex:d200 | 12570 / hex:1a31 |
| `hash_DFACC347` 捐赠 道具 Fourth | 28 | 2228 / hex:b408 | 65534 / hex:feff | 65534 / hex:feff |
| `hash_50650A2B` 捐赠 道具 第二 | 30 | 2226 / hex:b208 | 298 / hex:2a01 | 65534 / hex:feff |
| `hash_B58D7541` 捐赠 道具 Third | 32 | 2215 / hex:a708 | 65534 / hex:feff | 65534 / hex:feff |
| `hash_54706054` 唯一ID | 34 | 0 / hex:0000 | 82 / hex:5200 | 144 / hex:9000 |
| `hash_FAD4FF78` 模型 资源 名称 | 36 | "IdrObjNameBoardFish2PopA01" / hex:4964724f626a4e616d65426f6172644669736832506f70413031000000000000000000000000000000000000000000000000000000000000000000000000000000 | "IdrObjNameBoardFossil1Pop07" / hex:4964724f626a4e616d65426f617264466f7373696c31506f7030370000000000000000000000000000000000000000000000000000000000000000000000000000 | "IdrObjNameBoardArt0Tag04" / hex:4964724f626a4e616d65426f6172644172743054616730340000000000000000000000000000000000000000000000000000000000000000000000000000000000 |
| `hash_C1BB7D2D` 可见 关闭 | 101 | 0 / hex:000000 | 0 / hex:000000 | 0 / hex:000000 |

## 枚举码值及实际分布

仅对 hshCstringRef 候选字段统计原版前 4 字节。已登记标签来自 decoded 枚举证据，逐值校验 CRC32 与原版出现次数；中文为研究译名，候选冲突不强行合并。每字段最多展示 12 个高频值，完整映射见下方 JSON。

### 阶段 名称（hash_BE776E71）

去重码值 10 个，已有标签候选 10 个。

| 原始码值 | 出现次数 | 英文候选 | 中文释义 | 证据 |
| --- | ---: | --- | --- | --- |
| 0x826BDE73 | 43 | IdrMuseumArt_0 | Idr 博物馆 艺术品 0 | crc_candidate |
| 0x789833BF | 16 | IdrMuseumInsect_0 | Idr 博物馆 昆虫 0 | crc_candidate |
| 0x69F6BE96 | 13 | IdrMuseumFish_0 | Idr 博物馆 鱼 0 | crc_candidate |
| 0x87F8DFBA | 12 | IdrMuseumFish_2 | Idr 博物馆 鱼 2 | crc_candidate |
| 0xE2E06ABF | 10 | IdrMuseumFossil_1 | Idr 博物馆 化石 1 | crc_candidate |
| 0x96965293 | 9 | IdrMuseumInsect_2 | Idr 博物馆 昆虫 2 | crc_candidate |
| 0x1EF18E00 | 5 | IdrMuseumFish_1 | Idr 博物馆 鱼 1 | crc_candidate |
| 0x0F9F0329 | 4 | IdrMuseumInsect_1 | Idr 博物馆 昆虫 1 | crc_candidate |
| 0x7BE93B05 | 4 | IdrMuseumFossil_2 | Idr 博物馆 化石 2 | crc_candidate |
| 0x95E75A29 | 4 | IdrMuseumFossil_0 | Idr 博物馆 化石 0 | crc_candidate |

[完整码值与样例 JSON](../../../../research/bcsv-catalog/table-profiles.json) · [已有枚举证据 CSV](../../../../research/bcsv-data/decoded/enum-values.csv)

## 跨表关联

以下为原版 CRC32 标签值域统计候选，不是已确认的外键。

| 方向 | 来源字段 | 目标字段 | 对端表 | 匹配记录 | 去重匹配 |
| --- | --- | --- | --- | ---: | ---: |
| — | — | — | 尚无已登记候选 | — | — |

[完整关联候选](References.md) · [逐值匹配明细](../../../../research/bcsv-data/decoded/reference-values.csv)
