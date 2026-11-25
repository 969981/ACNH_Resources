# MysteryTourParam.bcsv

返回 [全量索引](README.md) · [统一字段字典](Field-Hashes.md) · [名称恢复证据](../Field-Names.md) · [残余字段证据](../../../../research/hash008h/residual_fields.json)。

原始路径：`e10617820db06889e1638499478da0de_NCA/1/Bcsv/MysteryTourParam.bcsv`
SHA256：`0551b5206441ec9730c2897c64afa53e234ae09f66f90069abd1942da5e189ea`
状态：parsed

行数 41，行长 188，数据起点 156。

英文名称及类型为 CRC32 签名候选，不等同于原版明文；中文取自统一字典。跨度为物理字段间距，可能包含填充。业务证据仅采用当前表、当前偏移的已登记解释或残余字段记录；无证据不推断。

| Hash | 英文名称（CRC 候选） | 简体中文释义 | 偏移 | 跨度 | 数据类型（CRC 候选） | 当前解释 | 业务证据 |
| --- | --- | --- | ---: | ---: | --- | --- | --- |
| hash_DD59B554 | ItemPlacementKind | 道具 摆放 类别 | 4 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_1C8D9DBC | TourType | 旅行 类型 | 8 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_B1F384DC | FishPattern | 鱼 款式 | 12 | 2 | s16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_E23C6453 | InsectPattern | 昆虫 款式 | 14 | 2 | s16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_BC5F2A7B | MustItem0 | 必须 道具 0 | 16 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_813F03CB | MustItem1 | 必须 道具 1 | 18 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_72573F73 | MysteryTourFieldUniqueID | 神秘 旅行 场景 唯一 ID | 20 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_7A09986C | MysteryTourItemUniqueID | 神秘 旅行 道具 唯一 ID | 22 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_54706054 | UniqueID | 唯一ID | 24 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_7215B154 | LandFlagKeyON | 土地 标志 键 开启 | 26 | 32 | string32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_88BD09C2 | PlayerFlagKeyAfterSelect | 玩家 标志 键 After 选择 | 58 | 32 | string32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_4E5CD9F3 | PlayerFlagKeyOFF | 玩家 标志 键 关闭 | 90 | 32 | string32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_8F2F4BF9 | PlayerFlagKeyON | 玩家 标志 键 开启 | 122 | 32 | string32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_0B3D1D54 | PlayerFlagKeyON2 | 玩家 标志 键 开启 2 | 154 | 32 | string32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_D89A0DB0 | SelectWeight | 选择 Weight | 186 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_B1589411 | StatusPattern | Status 款式 | 187 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |

<!-- table-business-catalog -->

## 中文表名与业务用途

**中文表名：** 离岛旅行参数

**用途：** 按文件名与字段名称候选推测：用于配置或描述离岛旅行参数相关数据；具体消费逻辑待验证。

**证据等级：** 名称推测

## 数据文件

[原始 Hash CSV](../../../../research/bcsv-data/raw/MysteryTourParam.csv) · [英文列名 CSV](../../../../research/bcsv-data/named/MysteryTourParam.csv) · [候选类型解码 CSV](../../../../research/bcsv-data/decoded/tables/MysteryTourParam.csv) · [结构 JSON](../../../../research/bcsv-data/schema/MysteryTourParam.json)

## 实际原版数据样例

选择首行、中间行、末行（去重）；每格展示原始完整字段字节及候选类型解码，不把候选类型视为已确认。

| 字段 | 偏移 | 行 0（0 基） | 行 20（0 基） | 行 40（0 基） |
| --- | ---: | --- | --- | --- |
| `hash_DD59B554` 道具 摆放 类别 | 4 | 0x26296DD2 / hex:d26d2926 | 0x26296DD2 / hex:d26d2926 | 0xB5E1110D / hex:0d11e1b5 |
| `hash_1C8D9DBC` 旅行 类型 | 8 | 0x26296DD2 / hex:d26d2926 | 0x63258B23 / hex:238b2563 | 0x63258B23 / hex:238b2563 |
| `hash_B1F384DC` 鱼 款式 | 12 | -1 / hex:ffff | -1 / hex:ffff | -1 / hex:ffff |
| `hash_E23C6453` 昆虫 款式 | 14 | -1 / hex:ffff | -1 / hex:ffff | 12 / hex:0c00 |
| `hash_BC5F2A7B` 必须 道具 0 | 16 | 65534 / hex:feff | 65534 / hex:feff | 65534 / hex:feff |
| `hash_813F03CB` 必须 道具 1 | 18 | 65534 / hex:feff | 65534 / hex:feff | 65534 / hex:feff |
| `hash_72573F73` 神秘 旅行 场景 唯一 ID | 20 | 1 / hex:0100 | 28 / hex:1c00 | 48 / hex:3000 |
| `hash_7A09986C` 神秘 旅行 道具 唯一 ID | 22 | 1 / hex:0100 | 28 / hex:1c00 | 48 / hex:3000 |
| `hash_54706054` 唯一ID | 24 | 0 / hex:0000 | 30 / hex:1e00 | 50 / hex:3200 |
| `hash_7215B154` 土地 标志 键 开启 | 26 | "" / hex:0000000000000000000000000000000000000000000000000000000000000000 | "" / hex:0000000000000000000000000000000000000000000000000000000000000000 | "" / hex:0000000000000000000000000000000000000000000000000000000000000000 |
| `hash_88BD09C2` 玩家 标志 键 After 选择 | 58 | "" / hex:0000000000000000000000000000000000000000000000000000000000000000 | "" / hex:0000000000000000000000000000000000000000000000000000000000000000 | "" / hex:0000000000000000000000000000000000000000000000000000000000000000 |
| `hash_4E5CD9F3` 玩家 标志 键 关闭 | 90 | "" / hex:0000000000000000000000000000000000000000000000000000000000000000 | "" / hex:0000000000000000000000000000000000000000000000000000000000000000 | "" / hex:0000000000000000000000000000000000000000000000000000000000000000 |
| `hash_8F2F4BF9` 玩家 标志 键 开启 | 122 | "" / hex:0000000000000000000000000000000000000000000000000000000000000000 | "" / hex:0000000000000000000000000000000000000000000000000000000000000000 | "" / hex:0000000000000000000000000000000000000000000000000000000000000000 |
| `hash_0B3D1D54` 玩家 标志 键 开启 2 | 154 | "" / hex:0000000000000000000000000000000000000000000000000000000000000000 | "" / hex:0000000000000000000000000000000000000000000000000000000000000000 | "" / hex:0000000000000000000000000000000000000000000000000000000000000000 |
| `hash_D89A0DB0` 选择 Weight | 186 | 0 / hex:00 | 0 / hex:00 | 0 / hex:00 |
| `hash_B1589411` Status 款式 | 187 | 0 / hex:00 | 0 / hex:00 | 0 / hex:00 |

## 枚举码值及实际分布

仅对 hshCstringRef 候选字段统计原版前 4 字节。已登记标签来自 decoded 枚举证据，逐值校验 CRC32 与原版出现次数；中文为研究译名，候选冲突不强行合并。每字段最多展示 12 个高频值，完整映射见下方 JSON。

### 道具 摆放 类别（hash_DD59B554）

去重码值 15 个，已有标签候选 15 个。

| 原始码值 | 出现次数 | 英文候选 | 中文释义 | 证据 |
| --- | ---: | --- | --- | --- |
| 0x26296DD2 | 18 | Normal | 法线 | crc_candidate |
| 0x59691654 | 4 | Vegetable | Vegetable | crc_candidate |
| 0xBFEA6D40 | 4 | OneRoom | 一 房间 | crc_candidate |
| 0x4F01BB13 | 2 | StoneCoin | Stone Coin | crc_candidate |
| 0x6664FDCA | 2 | StoneMaterial | Stone 材质 | crc_candidate |
| 0x6E0CB6E8 | 2 | TreeSisterFruit | Tree Sister Fruit | crc_candidate |
| 0x062B1504 | 1 | Sakura | 樱花 | crc_candidate |
| 0x1CAB7073 | 1 | SpringBamboo | 春季 Bamboo | crc_candidate |
| 0x1EC53ABD | 1 | Mushroom | Mushroom | crc_candidate |
| 0x45BA22AF | 1 | Maple | Maple | crc_candidate |
| 0x5DC1311F | 1 | StoneGold | Stone Gold | crc_candidate |
| 0xADCECED6 | 1 | StarPiece | 星星 Piece | crc_candidate |

### 旅行 类型（hash_1C8D9DBC）

去重码值 3 个，已有标签候选 3 个。

| 原始码值 | 出现次数 | 英文候选 | 中文释义 | 证据 |
| --- | ---: | --- | --- | --- |
| 0x63258B23 | 21 | Kappei | 航平 | crc_candidate |
| 0x26296DD2 | 18 | Normal | 法线 | crc_candidate |
| 0x92CDBF98 | 2 | MayDay | 5月 日 | crc_candidate |

[完整码值与样例 JSON](../../../../research/bcsv-catalog/table-profiles.json) · [已有枚举证据 CSV](../../../../research/bcsv-data/decoded/enum-values.csv)

## 跨表关联

以下为原版 CRC32 标签值域统计候选，不是已确认的外键。

| 方向 | 来源字段 | 目标字段 | 对端表 | 匹配记录 | 去重匹配 |
| --- | --- | --- | --- | ---: | ---: |
| — | — | — | 尚无已登记候选 | — | — |

[完整关联候选](References.md) · [逐值匹配明细](../../../../research/bcsv-data/decoded/reference-values.csv)
