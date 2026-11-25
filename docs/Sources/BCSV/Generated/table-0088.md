# ItemOutfitInfo.bcsv

返回 [全量索引](README.md) · [统一字段字典](Field-Hashes.md) · [名称恢复证据](../Field-Names.md) · [残余字段证据](../../../../research/hash008h/residual_fields.json)。

原始路径：`e10617820db06889e1638499478da0de_NCA/1/Bcsv/ItemOutfitInfo.bcsv`
SHA256：`3b54df231cbb5d5fbee880e5d5eb372c5ddec112ae70af77c42bde710d461d33`
状态：parsed

行数 162，行长 148，数据起点 164。

英文名称及类型为 CRC32 签名候选，不等同于原版明文；中文取自统一字典。跨度为物理字段间距，可能包含填充。业务证据仅采用当前表、当前偏移的已登记解释或残余字段记录；无证据不推断。

| Hash | 英文名称（CRC 候选） | 简体中文释义 | 偏移 | 跨度 | 数据类型（CRC 候选） | 当前解释 | 业务证据 |
| --- | --- | --- | ---: | ---: | --- | --- | --- |
| hash_90466AFD | Category | 分类 | 4 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_5195E4BD | FloorScale | 地板 缩放 | 8 | 4 | f32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_B244D814 | RotateOffsetX | 旋转 偏移 X | 12 | 4 | f32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_8F24F1A4 | RotateOffsetY | 旋转 偏移 Y | 16 | 4 | f32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_C8848B74 | RotateOffsetZ | 旋转 偏移 Z | 20 | 4 | f32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_ED7F3CFE | TransOffsetX | 位移 偏移 X | 24 | 4 | f32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_D01F154E | TransOffsetY | 位移 偏移 Y | 28 | 4 | f32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_97BF6F9E | TransOffsetZ | 位移 偏移 Z | 32 | 4 | f32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_9F253177 | WallScale | 墙壁 缩放 | 36 | 4 | f32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_68DB76C2 | BreakDamage | 破坏损伤值 | 40 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_54706054 | UniqueID | 唯一ID | 42 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_46489CE7 | HangerInfo | 衣架 信息 | 44 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_87BF00E8 | Label | 标签 | 45 | 32 | string32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_036E8EBE | Name | 名称 | 77 | 64 | string64 | 未知，保留原值 | 未登记表级业务证据 |
| hash_04AC1BEA | SpecialELink | 特殊 E 链接 | 141 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_BE782346 | SpecialSLink | 特殊 S 链接 | 142 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_C89FB7AF | Storage | 收纳 | 143 | 5 | u8 | 未知，保留原值 | 未登记表级业务证据 |

<!-- table-business-catalog -->

## 中文表名与业务用途

**中文表名：** 服装搭配信息

**用途：** 按文件名与字段名称候选推测：用于配置或描述服装搭配信息相关数据；具体消费逻辑待验证。

**证据等级：** 名称推测

## 数据文件

[原始 Hash CSV](../../../../research/bcsv-data/raw/ItemOutfitInfo.csv) · [英文列名 CSV](../../../../research/bcsv-data/named/ItemOutfitInfo.csv) · [候选类型解码 CSV](../../../../research/bcsv-data/decoded/tables/ItemOutfitInfo.csv) · [结构 JSON](../../../../research/bcsv-data/schema/ItemOutfitInfo.json)

## 实际原版数据样例

选择首行、中间行、末行（去重）；每格展示原始完整字段字节及候选类型解码，不把候选类型视为已确认。

| 字段 | 偏移 | 行 0（0 基） | 行 81（0 基） | 行 161（0 基） |
| --- | ---: | --- | --- | --- |
| `hash_90466AFD` 分类 | 4 | 0x62537A9A / hex:9a7a5362 | 0x1FE86FB0 / hex:b06fe81f | 0x0A8FE9DA / hex:dae98f0a |
| `hash_5195E4BD` 地板 缩放 | 8 | 1.0 / hex:0000803f | 1.0 / hex:0000803f | 1.0 / hex:0000803f |
| `hash_B244D814` 旋转 偏移 X | 12 | 0.0 / hex:00000000 | 0.0 / hex:00000000 | 0.0 / hex:00000000 |
| `hash_8F24F1A4` 旋转 偏移 Y | 16 | 0.0 / hex:00000000 | 0.0 / hex:00000000 | 0.0 / hex:00000000 |
| `hash_C8848B74` 旋转 偏移 Z | 20 | 0.0 / hex:00000000 | 0.0 / hex:00000000 | 0.0 / hex:00000000 |
| `hash_ED7F3CFE` 位移 偏移 X | 24 | 0.0 / hex:00000000 | 0.0 / hex:00000000 | 0.0 / hex:00000000 |
| `hash_D01F154E` 位移 偏移 Y | 28 | 0.0 / hex:00000000 | 0.0 / hex:00000000 | 0.0 / hex:00000000 |
| `hash_97BF6F9E` 位移 偏移 Z | 32 | 0.0 / hex:00000000 | 0.0 / hex:00000000 | 0.0 / hex:00000000 |
| `hash_9F253177` 墙壁 缩放 | 36 | 1.0 / hex:0000803f | 1.0 / hex:0000803f | 1.0 / hex:0000803f |
| `hash_68DB76C2` 破坏损伤值 | 40 | 0 / hex:0000 | 0 / hex:0000 | 0 / hex:0000 |
| `hash_54706054` 唯一ID | 42 | 189 / hex:bd00 | 173 / hex:ad00 | 191 / hex:bf00 |
| `hash_46489CE7` 衣架 信息 | 44 | 0 / hex:00 | 0 / hex:00 | 0 / hex:00 |
| `hash_87BF00E8` 标签 | 45 | "STowelN" / hex:53546f77656c4e00000000000000000000000000000000000000000000000000 | "SparklingCider" / hex:537061726b6c696e674369646572000000000000000000000000000000000000 | "CottonCandy" / hex:436f74746f6e43616e6479000000000000000000000000000000000000000000 |
| `hash_036E8EBE` 名称 | 77 | "ぞうきん(NPC用)" / hex:e3819ee38186e3818de38293284e5043e794a8290000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 | "スパークリングサイダー" / hex:e382b9e38391e383bce382afe383aae383b3e382b0e382b5e382a4e38380e383bc00000000000000000000000000000000000000000000000000000000000000 | "わたあめ" / hex:e3828fe3819fe38182e3828100000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 |
| `hash_04AC1BEA` 特殊 E 链接 | 141 | 0 / hex:00 | 1 / hex:01 | 0 / hex:00 |
| `hash_BE782346` 特殊 S 链接 | 142 | 0 / hex:00 | 1 / hex:01 | 0 / hex:00 |
| `hash_C89FB7AF` 收纳 | 143 | raw:0002000000 / hex:0002000000 | raw:0002000000 / hex:0002000000 | raw:0002000000 / hex:0002000000 |

## 枚举码值及实际分布

仅对 hshCstringRef 候选字段统计原版前 4 字节。已登记标签来自 decoded 枚举证据，逐值校验 CRC32 与原版出现次数；中文为研究译名，候选冲突不强行合并。每字段最多展示 12 个高频值，完整映射见下方 JSON。

### 分类（hash_90466AFD）

去重码值 116 个，已有标签候选 112 个。

| 原始码值 | 出现次数 | 英文候选 | 中文释义 | 证据 |
| --- | ---: | --- | --- | --- |
| 0xA17EC151 | 13 | Cap | 帽子 | crc_candidate |
| 0x542758CC | 6 | Axe | Axe | crc_candidate |
| 0xD50EAE93 | 5 | Shoes | 鞋 | crc_candidate |
| 0xEA635200 | 5 | Umbrella | 伞 | crc_candidate |
| 0x13AD13E1 | 4 | AccessoryEye | 饰品 眼睛 | crc_candidate |
| 0x61E990A2 | 4 | Scoop | Scoop | crc_candidate |
| 0x72E2CC6C | 4 | FishingRod | 钓鱼 钓竿 | crc_candidate |
| 0x78F9FF67 | 3 | Watering | 浇水 | crc_candidate |
| 0xA713470F | 3 | Slingshot | Slingshot | crc_candidate |
| 0xCAA7531F | 3 | Net | 网络 | crc_candidate |
| 0xD31C374B | 3 | AccessoryMouth | 饰品 嘴 | crc_candidate |
| 0x236F2EA1 | 2 | Bag | 包 | crc_candidate |

[完整码值与样例 JSON](../../../../research/bcsv-catalog/table-profiles.json) · [已有枚举证据 CSV](../../../../research/bcsv-data/decoded/enum-values.csv)

## 跨表关联

以下为原版 CRC32 标签值域统计候选，不是已确认的外键。

| 方向 | 来源字段 | 目标字段 | 对端表 | 匹配记录 | 去重匹配 |
| --- | --- | --- | --- | ---: | ---: |
| 出向 | hash_90466AFD | hash_87BF00E8 | [ItemOutfitCategory.bcsv](table-0086.md) | 162/162 | 116/116 |
| 入向 | hash_7724BF93 | hash_87BF00E8 | [ItemParam.bcsv](table-0089.md) | 11178/11178 | 157/157 |

[完整关联候选](References.md) · [逐值匹配明细](../../../../research/bcsv-data/decoded/reference-values.csv)
