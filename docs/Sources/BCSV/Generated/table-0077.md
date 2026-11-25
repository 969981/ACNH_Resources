# ItemKind.bcsv

返回 [全量索引](README.md) · [统一字段字典](Field-Hashes.md) · [名称恢复证据](../Field-Names.md) · [残余字段证据](../../../../research/hash008h/residual_fields.json)。

原始路径：`e10617820db06889e1638499478da0de_NCA/1/Bcsv/ItemKind.bcsv`
SHA256：`5c0f6c574422ddd71e26d7fcc5b8ec80305c606d8f7d4216ea3d2a74f28ce9df`
状态：parsed

行数 189，行长 152，数据起点 276。

英文名称及类型为 CRC32 签名候选，不等同于原版明文；中文取自统一字典。跨度为物理字段间距，可能包含填充。业务证据仅采用当前表、当前偏移的已登记解释或残余字段记录；无证据不推断。

| Hash | 英文名称（CRC 候选） | 简体中文释义 | 偏移 | 跨度 | 数据类型（CRC 候选） | 当前解释 | 业务证据 |
| --- | --- | --- | ---: | ---: | --- | --- | --- |
| hash_1B936128 | FtrIconCaptureType | 家具 图标 捕捉 类型 | 4 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_268E2E2B | ItemGardeningEditType | 道具 园艺 编辑 类型 | 8 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_D606A6C4 | ItemKindUIType | 道具 类别 UI 类型 | 12 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_6B749E8A | ItemRemakeType | 道具 改造 类型 | 16 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_29C41A0D | MessageKind | 消息 类别 | 20 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_4D655154 | SLinkType | S 链接 类型 | 24 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_4C9BA961 | MultiHoldMaxNum | 最大堆叠数量 | 28 | 2 | s16 | multi_hold_max_raw | 表级解析字典（TYPED） |
| hash_0CE69142 | SaveCountMaxNum | 保存 计数 最大 数量 | 30 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_54706054 | UniqueID | 唯一ID | 32 | 2 | u16 | id | 表级解析字典（TYPED） |
| hash_472724ED | CanBury | 可 埋藏 | 34 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_9B433DD5 | CanEat | 可 Eat | 35 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_90BC0855 | CanFtr | 可 家具 | 36 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_06012035 | CanGift | 可 赠礼 | 37 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_2C1B3B5B | CanNpcBirthdayPresent | 可 NPC 生日 礼物 | 38 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_0732BB98 | CanNpcPresent | 可 NPC 礼物 | 39 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_D4697FF8 | CanPlant | 可 植物 | 40 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_5D389FBF | CanPut | 可 放置 | 41 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_D223F25C | CanPutWallAndFloor | 可 放置 墙壁 及 地板 | 42 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_3D4F3F42 | CanSell | 可 出售 | 43 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_B52FE52E | CanSellSimple | 可 出售 Simple | 44 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_DAE27694 | CanSetChest | 可 集合 箱子 | 45 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_1BCD4858 | CanSetCloset | 可 集合 衣柜 | 46 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_C8A5A762 | CanSetInTrashBox | 可 集合 内 Trash Box | 47 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_49129B27 | CanSetItem | 可 集合 道具 | 48 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_5218C48C | CanUsePhotoStudio | 可 使用 照片 工作室 | 49 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_923F8E59 | CanUseWherearen | 可 使用 度假岛 | 50 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_C37A683C | CantTakeOver | 不可继承 | 51 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_FD3B7C9A | IsCollectAchievement | 是否 收集 成就 | 52 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_87BF00E8 | Label | 标签 | 53 | 32 | string32 | label | 表级解析字典（TYPED） |
| hash_036E8EBE | Name | 名称 | 85 | 64 | string64 | description_ja | 表级解析字典（TYPED） |
| hash_29FE5BBD | ToolCategory | 工具 分类 | 149 | 3 | u8 | 未知，保留原值 | 未登记表级业务证据 |

<!-- table-business-catalog -->

## 中文表名与业务用途

**中文表名：** 道具类别

**用途：** 物品类别及交互规则，包含最大堆叠相关字段。

**证据等级：** 已有专题文档（[专题证据](../ItemKind.md)）

## 数据文件

[原始 Hash CSV](../../../../research/bcsv-data/raw/ItemKind.csv) · [英文列名 CSV](../../../../research/bcsv-data/named/ItemKind.csv) · [候选类型解码 CSV](../../../../research/bcsv-data/decoded/tables/ItemKind.csv) · [结构 JSON](../../../../research/bcsv-data/schema/ItemKind.json)

## 实际原版数据样例

选择首行、中间行、末行（去重）；每格展示原始完整字段字节及候选类型解码，不把候选类型视为已确认。

| 字段 | 偏移 | 行 0（0 基） | 行 94（0 基） | 行 188（0 基） |
| --- | ---: | --- | --- | --- |
| `hash_1B936128` 家具 图标 捕捉 类型 | 4 | 0xFB6C2AF6 / hex:f62a6cfb | 0x6C4D0ECA / hex:ca0e4d6c | 0xDFA2AFF1 / hex:f1afa2df |
| `hash_268E2E2B` 道具 园艺 编辑 类型 | 8 | 0xDFA2AFF1 / hex:f1afa2df | 0xDFA2AFF1 / hex:f1afa2df | 0xDFA2AFF1 / hex:f1afa2df |
| `hash_D606A6C4` 道具 类别 UI 类型 | 12 | 0xDFA2AFF1 / hex:f1afa2df | 0xDFA2AFF1 / hex:f1afa2df | 0xDFA2AFF1 / hex:f1afa2df |
| `hash_6B749E8A` 道具 改造 类型 | 16 | 0x7E0E8482 / hex:82840e7e | 0xDFA2AFF1 / hex:f1afa2df | 0xDFA2AFF1 / hex:f1afa2df |
| `hash_29C41A0D` 消息 类别 | 20 | 0x06B85CEC / hex:ec5cb806 | 0x4C2E08E0 / hex:e0082e4c | 0x7794E7BA / hex:bae79477 |
| `hash_4D655154` S 链接 类型 | 24 | 0xDBE1EC5C / hex:5cece1db | 0x5AAD705E / hex:5e70ad5a | 0x5AAD705E / hex:5e70ad5a |
| `hash_4C9BA961` 最大堆叠数量 | 28 | 0 / hex:0000 | 30 / hex:1e00 | 0 / hex:0000 |
| `hash_0CE69142` 保存 计数 最大 数量 | 30 | 0 / hex:0000 | 0 / hex:0000 | 0 / hex:0000 |
| `hash_54706054` 唯一ID | 32 | 5 / hex:0500 | 169 / hex:a900 | 147 / hex:9300 |
| `hash_472724ED` 可 埋藏 | 34 | 1 / hex:01 | 1 / hex:01 | 0 / hex:00 |
| `hash_9B433DD5` 可 Eat | 35 | 0 / hex:00 | 0 / hex:00 | 0 / hex:00 |
| `hash_90BC0855` 可 家具 | 36 | 1 / hex:01 | 0 / hex:00 | 0 / hex:00 |
| `hash_06012035` 可 赠礼 | 37 | 1 / hex:01 | 1 / hex:01 | 0 / hex:00 |
| `hash_2C1B3B5B` 可 NPC 生日 礼物 | 38 | 1 / hex:01 | 1 / hex:01 | 0 / hex:00 |
| `hash_0732BB98` 可 NPC 礼物 | 39 | 1 / hex:01 | 1 / hex:01 | 0 / hex:00 |
| `hash_D4697FF8` 可 植物 | 40 | 0 / hex:00 | 0 / hex:00 | 0 / hex:00 |
| `hash_5D389FBF` 可 放置 | 41 | 1 / hex:01 | 1 / hex:01 | 0 / hex:00 |
| `hash_D223F25C` 可 放置 墙壁 及 地板 | 42 | 0 / hex:00 | 0 / hex:00 | 0 / hex:00 |
| `hash_3D4F3F42` 可 出售 | 43 | 1 / hex:01 | 1 / hex:01 | 0 / hex:00 |
| `hash_B52FE52E` 可 出售 Simple | 44 | 1 / hex:01 | 1 / hex:01 | 0 / hex:00 |
| `hash_DAE27694` 可 集合 箱子 | 45 | 1 / hex:01 | 1 / hex:01 | 0 / hex:00 |
| `hash_1BCD4858` 可 集合 衣柜 | 46 | 0 / hex:00 | 0 / hex:00 | 0 / hex:00 |
| `hash_C8A5A762` 可 集合 内 Trash Box | 47 | 1 / hex:01 | 1 / hex:01 | 0 / hex:00 |
| `hash_49129B27` 可 集合 道具 | 48 | 1 / hex:01 | 1 / hex:01 | 0 / hex:00 |
| `hash_5218C48C` 可 使用 照片 工作室 | 49 | 1 / hex:01 | 1 / hex:01 | 0 / hex:00 |
| `hash_923F8E59` 可 使用 度假岛 | 50 | 1 / hex:01 | 1 / hex:01 | 0 / hex:00 |
| `hash_C37A683C` 不可继承 | 51 | 0 / hex:00 | 0 / hex:00 | 0 / hex:00 |
| `hash_FD3B7C9A` 是否 收集 成就 | 52 | 1 / hex:01 | 0 / hex:00 | 0 / hex:00 |
| `hash_87BF00E8` 标签 | 53 | "Ftr" / hex:4674720000000000000000000000000000000000000000000000000000000000 | "CraftMaterial" / hex:43726166744d6174657269616c00000000000000000000000000000000000000 | "None" / hex:4e6f6e6500000000000000000000000000000000000000000000000000000000 |
| `hash_036E8EBE` 名称 | 85 | "家具" / hex:e5aeb6e585b700000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 | "素材：DIY" / hex:e7b4a0e69d90efbc9a44495900000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 | "なし" / hex:e381aae3819700000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 |
| `hash_29FE5BBD` 工具 分类 | 149 | 0 / hex:000000 | 0 / hex:000000 | 0 / hex:000000 |

## 枚举码值及实际分布

仅对 hshCstringRef 候选字段统计原版前 4 字节。已登记标签来自 decoded 枚举证据，逐值校验 CRC32 与原版出现次数；中文为研究译名，候选冲突不强行合并。每字段最多展示 12 个高频值，完整映射见下方 JSON。

### 家具 图标 捕捉 类型（hash_1B936128）

去重码值 3 个，已有标签候选 3 个。

| 原始码值 | 出现次数 | 英文候选 | 中文释义 | 证据 |
| --- | ---: | --- | --- | --- |
| 0xFB6C2AF6 | 87 | OnCapture | 开启 捕捉 | crc_candidate |
| 0x6C4D0ECA | 55 | OnCaptureUIcon | 开启 捕捉 U 图标 | crc_candidate |
| 0xDFA2AFF1 | 47 | None | None | crc_candidate |

### 道具 园艺 编辑 类型（hash_268E2E2B）

去重码值 2 个，已有标签候选 2 个。

| 原始码值 | 出现次数 | 英文候选 | 中文释义 | 证据 |
| --- | ---: | --- | --- | --- |
| 0xDFA2AFF1 | 181 | None | None | crc_candidate |
| 0x9C320D6A | 8 | On | 开启 | crc_candidate |

### 道具 类别 UI 类型（hash_D606A6C4）

去重码值 26 个，已有标签候选 25 个。

| 原始码值 | 出现次数 | 英文候选 | 中文释义 | 证据 |
| --- | ---: | --- | --- | --- |
| 0xDFA2AFF1 | 82 | None | None | crc_candidate |
| 0xB1CA5D87 | 51 | HandyGoods | Handy Goods | crc_candidate |
| 0xB18E1D37 | 13 | Fassion | Fassion | crc_candidate |
| 0x3201978B | 6 | Present | 礼物 | crc_candidate |
| 0xCD5E7B02 | 6 | PlantKeepItemWindow | 植物 保留 道具 窗户 | crc_candidate |
| 0x11E75A84 | 3 | Rug | Rug | crc_candidate |
| 0xB5E1110D | 3 | SnowCrystal | 雪 Crystal | crc_candidate |
| 0xE49D6BFB | 3 | HousingKit | Housing 套件 | crc_candidate |
| 0x354F2386 | 2 | Dish | Dish | crc_candidate |
| 0x6C696CB0 | 2 | WrappingPaper | Wrapping Paper | crc_candidate |
| 0x91B9B8D3 | 2 | Insect | 昆虫 | crc_candidate |
| 0x9F46EB0D | 2 | Fish | 鱼 | crc_candidate |

### 道具 改造 类型（hash_6B749E8A）

去重码值 6 个，已有标签候选 6 个。

| 原始码值 | 出现次数 | 英文候选 | 中文释义 | 证据 |
| --- | ---: | --- | --- | --- |
| 0xDFA2AFF1 | 166 | None | None | crc_candidate |
| 0x80C191EF | 11 | Tool | 工具 | crc_candidate |
| 0x7E0E8482 | 8 | Ftr | 家具 | crc_candidate |
| 0x69ED7DFE | 2 | Smartphone | 手机 | crc_candidate |
| 0x2C28165C | 1 | Fence | Fence | crc_candidate |
| 0x40FFED1B | 1 | SettingLadder | 设置 Ladder | crc_candidate |

### 消息 类别（hash_29C41A0D）

去重码值 40 个，已有标签候选 40 个。

| 原始码值 | 出现次数 | 英文候选 | 中文释义 | 证据 |
| --- | ---: | --- | --- | --- |
| 0x821D402A | 64 | 80_Etc | 80 Etc | crc_candidate |
| 0xFC8B51DB | 19 | 81_Event | 81 事件 | crc_candidate |
| 0x7794E7BA | 17 | 99_Dummy | 99 占位 | crc_candidate |
| 0xBD2C7A41 | 16 | 20_Tool | 20 工具 | crc_candidate |
| 0x9DFE48F5 | 15 | 40_Plant | 40 植物 | crc_candidate |
| 0x4C2E08E0 | 9 | 70_Craft | 70 制作 | crc_candidate |
| 0x06B85CEC | 5 | 00_Ftr | 00 家具 | crc_candidate |
| 0x81AE616A | 4 | 01_Art | 01 艺术品 | crc_candidate |
| 0x346E6EEA | 2 | 02_Dishes | 02 Dishes | crc_candidate |
| 0x38CA016B | 2 | 34_Fossil | 34 化石 | crc_candidate |
| 0x3B9F63AB | 2 | 82_Music | 82 音乐 | crc_candidate |
| 0x4842E4FE | 2 | 33_Shell | 33 Shell | crc_candidate |

### S 链接 类型（hash_4D655154）

去重码值 3 个，已有标签候选 3 个。

| 原始码值 | 出现次数 | 英文候选 | 中文释义 | 证据 |
| --- | ---: | --- | --- | --- |
| 0x5AAD705E | 93 | FtrNoneUser | 家具 None 用户 | crc_candidate |
| 0x1783E11C | 76 | FtrCommonUser | 家具 通用 用户 | crc_candidate |
| 0xDBE1EC5C | 20 | FtrUniqueUser | 家具 唯一 用户 | crc_candidate |

[完整码值与样例 JSON](../../../../research/bcsv-catalog/table-profiles.json) · [已有枚举证据 CSV](../../../../research/bcsv-data/decoded/enum-values.csv)

## 跨表关联

以下为原版 CRC32 标签值域统计候选，不是已确认的外键。

| 方向 | 来源字段 | 目标字段 | 对端表 | 匹配记录 | 去重匹配 |
| --- | --- | --- | --- | ---: | ---: |
| 入向 | hash_5270EB75 | hash_87BF00E8 | [ItemParam.bcsv](table-0089.md) | 11178/11178 | 186/186 |

[完整关联候选](References.md) · [逐值匹配明细](../../../../research/bcsv-data/decoded/reference-values.csv)
