# FishStatusParam.bcsv

返回 [全量索引](README.md) · [统一字段字典](Field-Hashes.md) · [名称恢复证据](../Field-Names.md) · [残余字段证据](../../../../research/hash008h/residual_fields.json)。

原始路径：`e10617820db06889e1638499478da0de_NCA/1/Bcsv/FishStatusParam.bcsv`
SHA256：`0678e65189bbb87f9d6789942740d79eb10de46cca29c355eb9bbc75947a7e96`
状态：parsed

行数 85，行长 240，数据起点 180。

英文名称及类型为 CRC32 签名候选，不等同于原版明文；中文取自统一字典。跨度为物理字段间距，可能包含填充。业务证据仅采用当前表、当前偏移的已登记解释或残余字段记录；无证据不推断。

| Hash | 英文名称（CRC 候选） | 简体中文释义 | 偏移 | 跨度 | 数据类型（CRC 候选） | 当前解释 | 业务证据 |
| --- | --- | --- | ---: | ---: | --- | --- | --- |
| hash_64330CB0 | AppearArea | 出现 区域 | 4 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_0DE2A3BE | AppearType | 出现 类型 | 8 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_770288FD | BuoyLv | 浮标等级 | 12 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_B7C9DD05 | EscapeScale | Escape 缩放 | 16 | 4 | f32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_132DD5B9 | FishMuseumAction | 鱼 博物馆 动作 | 20 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_4108715D | MuseumBankLimitDeg | 博物馆 银行 限制 角度 | 24 | 4 | f32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_7EC9ADA7 | SearchRadius | Search 半径 | 28 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_AC0EBE24 | ShadowType | 阴影 类型 | 32 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_20CB67BC | ItemID | 道具ID | 36 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_EAC6A012 | OpenDonatedNum | 打开 Donated 数量 | 38 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_DAAF8BA0 | ToyItemID | Toy 道具 ID | 40 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_54706054 | UniqueID | 唯一ID | 42 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_AB51A3CF | DebugName | 调试 名称 | 44 | 32 | string32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_3DC49BC2 | IsCreateBait | 是否 创建 鱼饵 | 76 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_0E91FC27 | IsSidewaysShow | 是否 侧向 显示 | 77 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_87BF00E8 | Label | 标签 | 78 | 32 | string32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_1F875D3D | PHBCResName | PHBC 资源 名称 | 110 | 32 | string32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_48EF0398 | ResName | 资源 名称 | 142 | 64 | string64 | 未知，保留原值 | 未登记表级业务证据 |
| hash_1C8856DB | ResNameMuseum | 资源 名称 博物馆 | 206 | 34 | string32 | 未知，保留原值 | 未登记表级业务证据 |

<!-- table-business-catalog -->

## 中文表名与业务用途

**中文表名：** 鱼类状态参数

**用途：** 按文件名与字段名称候选推测：用于配置或描述鱼类状态参数相关数据；具体消费逻辑待验证。

**证据等级：** 名称推测

## 数据文件

[原始 Hash CSV](../../../../research/bcsv-data/raw/FishStatusParam.csv) · [英文列名 CSV](../../../../research/bcsv-data/named/FishStatusParam.csv) · [候选类型解码 CSV](../../../../research/bcsv-data/decoded/tables/FishStatusParam.csv) · [结构 JSON](../../../../research/bcsv-data/schema/FishStatusParam.json)

## 实际原版数据样例

选择首行、中间行、末行（去重）；每格展示原始完整字段字节及候选类型解码，不把候选类型视为已确认。

| 字段 | 偏移 | 行 0（0 基） | 行 42（0 基） | 行 84（0 基） |
| --- | ---: | --- | --- | --- |
| `hash_64330CB0` 出现 区域 | 4 | 0xF4DBDF21 / hex:21dfdbf4 | 0xF4DBDF21 / hex:21dfdbf4 | 0xF4DBDF21 / hex:21dfdbf4 |
| `hash_0DE2A3BE` 出现 类型 | 8 | 0x3422482F / hex:2f482234 | 0x1863BFCB / hex:cbbf6318 | 0xAC1C12F0 / hex:f0121cac |
| `hash_770288FD` 浮标等级 | 12 | 0x83DCEFB7 / hex:b7efdc83 | 0x83DCEFB7 / hex:b7efdc83 | 0x6DD28E9B / hex:9b8ed26d |
| `hash_B7C9DD05` Escape 缩放 | 16 | 1.0 / hex:0000803f | 1.0 / hex:0000803f | 0.0 / hex:00000000 |
| `hash_132DD5B9` 鱼 博物馆 动作 | 20 | 0x76E0D20B / hex:0bd2e076 | 0x08647191 / hex:91716408 | 0xC6177947 / hex:477917c6 |
| `hash_4108715D` 博物馆 银行 限制 角度 | 24 | 10.0 / hex:00002041 | 10.0 / hex:00002041 | 10.0 / hex:00002041 |
| `hash_7EC9ADA7` Search 半径 | 28 | 0x1AD5BE0D / hex:0dbed51a | 0x1AD5BE0D / hex:0dbed51a | 0x1AD5BE0D / hex:0dbed51a |
| `hash_AC0EBE24` 阴影 类型 | 32 | 0xDA6FD2A0 / hex:a0d26fda | 0xAD68E236 / hex:36e268ad | 0xDA6FD2A0 / hex:a0d26fda |
| `hash_20CB67BC` 道具ID | 36 | 2237 / hex:bd08 | 2231 / hex:b708 | 12514 / hex:e230 |
| `hash_EAC6A012` 打开 Donated 数量 | 38 | 0 / hex:0000 | 50 / hex:3200 | 0 / hex:0000 |
| `hash_DAAF8BA0` Toy 道具 ID | 40 | 6936 / hex:181b | 7007 / hex:5f1b | 6931 / hex:131b |
| `hash_54706054` 唯一ID | 42 | 24 / hex:1800 | 18 / hex:1200 | 137 / hex:8900 |
| `hash_AB51A3CF` 调试 名称 | 44 | "アユ" / hex:e382a2e383a60000000000000000000000000000000000000000000000000000 | "ライギョ" / hex:e383a9e382a4e382aee383a70000000000000000000000000000000000000000 | "サカナのタマゴ" / hex:e382b5e382abe3838ae381aee382bfe3839ee382b40000000000000000000000 |
| `hash_3DC49BC2` 是否 创建 鱼饵 | 76 | 1 / hex:01 | 1 / hex:01 | 0 / hex:00 |
| `hash_0E91FC27` 是否 侧向 显示 | 77 | 0 / hex:00 | 0 / hex:00 | 0 / hex:00 |
| `hash_87BF00E8` 标签 | 78 | "Ayu" / hex:4179750000000000000000000000000000000000000000000000000000000000 | "Raigyo" / hex:52616967796f0000000000000000000000000000000000000000000000000000 | "FishEgg" / hex:4669736845676700000000000000000000000000000000000000000000000000 |
| `hash_1F875D3D` PHBC 资源 名称 | 110 | "SysFishBoneRes3" / hex:53797346697368426f6e65526573330000000000000000000000000000000000 | "SysFishBoneRes3" / hex:53797346697368426f6e65526573330000000000000000000000000000000000 | "" / hex:0000000000000000000000000000000000000000000000000000000000000000 |
| `hash_48EF0398` 资源 名称 | 142 | "FishAyu" / hex:46697368417975000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 | "FishRaigyo" / hex:4669736852616967796f000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 | "" / hex:00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 |
| `hash_1C8856DB` 资源 名称 博物馆 | 206 | "FishAyuMuseum" / hex:466973684179754d757365756d000000000000000000000000000000000000000000 | "FishRaigyo" / hex:4669736852616967796f000000000000000000000000000000000000000000000000 | "cvrt_fsh_aji" / hex:637672745f6673685f616a6900000000000000000000000000000000000000000000 |

## 枚举码值及实际分布

仅对 hshCstringRef 候选字段统计原版前 4 字节。已登记标签来自 decoded 枚举证据，逐值校验 CRC32 与原版出现次数；中文为研究译名，候选冲突不强行合并。每字段最多展示 12 个高频值，完整映射见下方 JSON。

### 出现 区域（hash_64330CB0）

去重码值 1 个，已有标签候选 1 个。

| 原始码值 | 出现次数 | 英文候选 | 中文释义 | 证据 |
| --- | ---: | --- | --- | --- |
| 0xF4DBDF21 | 85 | 0 | 0 | crc_candidate |

### 出现 类型（hash_0DE2A3BE）

去重码值 7 个，已有标签候选 7 个。

| 原始码值 | 出现次数 | 英文候选 | 中文释义 | 证据 |
| --- | ---: | --- | --- | --- |
| 0xB38487D7 | 30 | Sea | Sea | crc_candidate |
| 0x3422482F | 27 | River | River | crc_candidate |
| 0x1863BFCB | 12 | Pond | Pond | crc_candidate |
| 0xAC1C12F0 | 5 | Anywhere | Anywhere | crc_candidate |
| 0x394039F1 | 4 | RiverCliffTop | River Cliff 顶部 | crc_candidate |
| 0xE1232A86 | 4 | SeaBeachBridge | Sea Beach 桥梁 | crc_candidate |
| 0x653BA429 | 3 | BrackishWater | Brackish 水 | crc_candidate |

### 浮标等级（hash_770288FD）

去重码值 5 个，已有标签候选 5 个。

| 原始码值 | 出现次数 | 英文候选 | 中文释义 | 证据 |
| --- | ---: | --- | --- | --- |
| 0x6DD28E9B | 22 | 3 | 3 | crc_candidate |
| 0x83DCEFB7 | 22 | 1 | 1 | crc_candidate |
| 0xF3B61B38 | 15 | 4 | 4 | crc_candidate |
| 0xF4DBDF21 | 14 | 0 | 0 | crc_candidate |
| 0x1AD5BE0D | 12 | 2 | 2 | crc_candidate |

### 鱼 博物馆 动作（hash_132DD5B9）

去重码值 8 个，已有标签候选 8 个。

| 原始码值 | 出现次数 | 英文候选 | 中文释义 | 证据 |
| --- | ---: | --- | --- | --- |
| 0xC6177947 | 39 | KeepSwimming | 保留 Swimming | crc_candidate |
| 0x76E0D20B | 14 | AntiStream | Anti Stream | crc_candidate |
| 0x8BE9F311 | 13 | RoundsSwimming | Rounds Swimming | crc_candidate |
| 0x08647191 | 10 | Float | Float | crc_candidate |
| 0xF374955B | 4 | Predator | Predator | crc_candidate |
| 0x65C82410 | 2 | SwimAndWait | Swim 及 等待 | crc_candidate |
| 0x782334A0 | 2 | ChasePlayer | 追逐 玩家 | crc_candidate |
| 0x311297AB | 1 | Legion | Legion | crc_candidate |

### Search 半径（hash_7EC9ADA7）

去重码值 5 个，已有标签候选 5 个。

| 原始码值 | 出现次数 | 英文候选 | 中文释义 | 证据 |
| --- | ---: | --- | --- | --- |
| 0x1AD5BE0D | 31 | 2 | 2 | crc_candidate |
| 0x83DCEFB7 | 18 | 1 | 1 | crc_candidate |
| 0xF4DBDF21 | 14 | 0 | 0 | crc_candidate |
| 0x6DD28E9B | 11 | 3 | 3 | crc_candidate |
| 0xF3B61B38 | 11 | 4 | 4 | crc_candidate |

### 阴影 类型（hash_AC0EBE24）

去重码值 9 个，已有标签候选 9 个。

| 原始码值 | 出现次数 | 英文候选 | 中文释义 | 证据 |
| --- | ---: | --- | --- | --- |
| 0x2060EFC3 | 18 | S | S | crc_candidate |
| 0xDA6FD2A0 | 15 | M | M | crc_candidate |
| 0x222D1C26 | 14 | SS | SS | crc_candidate |
| 0xAD68E236 | 13 | L | L | crc_candidate |
| 0x627F1F4D | 10 | LL | LL | crc_candidate |
| 0xA567A004 | 7 | LLL | LLL | crc_candidate |
| 0x440B4703 | 5 | J | J | crc_candidate |
| 0xC9034AF6 | 2 | U | U | crc_candidate |
| 0x330C7795 | 1 | K | K | crc_candidate |

[完整码值与样例 JSON](../../../../research/bcsv-catalog/table-profiles.json) · [已有枚举证据 CSV](../../../../research/bcsv-data/decoded/enum-values.csv)

## 跨表关联

以下为原版 CRC32 标签值域统计候选，不是已确认的外键。

| 方向 | 来源字段 | 目标字段 | 对端表 | 匹配记录 | 去重匹配 |
| --- | --- | --- | --- | ---: | ---: |
| 出向 | hash_770288FD | hash_87BF00E8 | [ItemRemakeCommonPattern.bcsv](table-0096.md) | 85/85 | 5/5 |
| 出向 | hash_7EC9ADA7 | hash_87BF00E8 | [ItemRemakeCommonPattern.bcsv](table-0096.md) | 85/85 | 5/5 |

[完整关联候选](References.md) · [逐值匹配明细](../../../../research/bcsv-data/decoded/reference-values.csv)
