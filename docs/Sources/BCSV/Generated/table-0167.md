# SeafoodStatusParam.bcsv

返回 [全量索引](README.md) · [统一字段字典](Field-Hashes.md) · [名称恢复证据](../Field-Names.md) · [残余字段证据](../../../../research/hash008h/residual_fields.json)。

原始路径：`e10617820db06889e1638499478da0de_NCA/1/Bcsv/SeafoodStatusParam.bcsv`
SHA256：`b4345183af8be1408d155cf361c7ee00ffe51a2d571e5ac82d9468c59c18e4ab`
状态：parsed

行数 42，行长 188，数据起点 116。

英文名称及类型为 CRC32 签名候选，不等同于原版明文；中文取自统一字典。跨度为物理字段间距，可能包含填充。业务证据仅采用当前表、当前偏移的已登记解释或残余字段记录；无证据不推断。

| Hash | 英文名称（CRC 候选） | 简体中文释义 | 偏移 | 跨度 | 数据类型（CRC 候选） | 当前解释 | 业务证据 |
| --- | --- | --- | ---: | ---: | --- | --- | --- |
| hash_FBACE208 | ActionType | 动作 类型 | 4 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_DE78DF0F | CaptureCategory | 捕捉 分类 | 8 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_AFEB1BF1 | CaptureLevel | 捕捉 等级 | 12 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_AC0EBE24 | ShadowType | 阴影 类型 | 16 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_20CB67BC | ItemID | 道具ID | 20 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_D42DF0B4 | OpenRecordNum | 打开 Record 数量 | 22 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_54706054 | UniqueID | 唯一ID | 24 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_AB51A3CF | DebugName | 调试 名称 | 26 | 32 | string32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_87BF00E8 | Label | 标签 | 58 | 32 | string32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_48EF0398 | ResName | 资源 名称 | 90 | 64 | string64 | 未知，保留原值 | 未登记表级业务证据 |
| hash_1C8856DB | ResNameMuseum | 资源 名称 博物馆 | 154 | 34 | string32 | 未知，保留原值 | 未登记表级业务证据 |

<!-- table-business-catalog -->

## 中文表名与业务用途

**中文表名：** 海洋生物状态参数

**用途：** 按文件名与字段名称候选推测：用于配置或描述海洋生物状态参数相关数据；具体消费逻辑待验证。

**证据等级：** 名称推测

## 数据文件

[原始 Hash CSV](../../../../research/bcsv-data/raw/SeafoodStatusParam.csv) · [英文列名 CSV](../../../../research/bcsv-data/named/SeafoodStatusParam.csv) · [候选类型解码 CSV](../../../../research/bcsv-data/decoded/tables/SeafoodStatusParam.csv) · [结构 JSON](../../../../research/bcsv-data/schema/SeafoodStatusParam.json)

## 实际原版数据样例

选择首行、中间行、末行（去重）；每格展示原始完整字段字节及候选类型解码，不把候选类型视为已确认。

| 字段 | 偏移 | 行 0（0 基） | 行 21（0 基） | 行 41（0 基） |
| --- | ---: | --- | --- | --- |
| `hash_FBACE208` 动作 类型 | 4 | 0x1964B988 / hex:88b96419 | 0x80DD1D7F / hex:7f1ddd80 | 0x1964B988 / hex:88b96419 |
| `hash_DE78DF0F` 捕捉 分类 | 8 | 0x6BD7DB6F / hex:6fdbd76b | 0x3EBAA08E / hex:8ea0ba3e | 0x3EBAA08E / hex:8ea0ba3e |
| `hash_AFEB1BF1` 捕捉 等级 | 12 | 0x84B12BAE / hex:ae2bb184 | 0xF3B61B38 / hex:381bb6f3 | 0x84B12BAE / hex:ae2bb184 |
| `hash_AC0EBE24` 阴影 类型 | 16 | 0xAD68E236 / hex:36e268ad | 0xDA6FD2A0 / hex:a0d26fda | 0x222D1C26 / hex:261c2d22 |
| `hash_20CB67BC` 道具ID | 20 | 2620 / hex:3c0a | 2854 / hex:260b | 12968 / hex:a832 |
| `hash_D42DF0B4` 打开 Record 数量 | 22 | 0 / hex:0000 | 0 / hex:0000 | 0 / hex:0000 |
| `hash_54706054` 唯一ID | 24 | 0 / hex:0000 | 11 / hex:0b00 | 55 / hex:3700 |
| `hash_AB51A3CF` 调试 名称 | 26 | "ワカメ" / hex:e383afe382abe383a10000000000000000000000000000000000000000000000 | "タコ" / hex:e382bfe382b30000000000000000000000000000000000000000000000000000 | "しんじゅ" / hex:e38197e38293e38198e382850000000000000000000000000000000000000000 |
| `hash_87BF00E8` 标签 | 58 | "Wakame" / hex:57616b616d650000000000000000000000000000000000000000000000000000 | "Tako" / hex:54616b6f00000000000000000000000000000000000000000000000000000000 | "Pearl" / hex:506561726c000000000000000000000000000000000000000000000000000000 |
| `hash_48EF0398` 资源 名称 | 90 | "DiveFishWakame" / hex:446976654669736857616b616d650000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 | "DiveFishTako" / hex:446976654669736854616b6f00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 | "UnitIconPearl" / hex:556e697449636f6e506561726c000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 |
| `hash_1C8856DB` 资源 名称 博物馆 | 154 | "DiveFishWakameMuseum" / hex:446976654669736857616b616d654d757365756d0000000000000000000000000000 | "DiveFishTakoMuseum" / hex:446976654669736854616b6f4d757365756d00000000000000000000000000000000 | "cvrt_fsh_aji" / hex:637672745f6673685f616a6900000000000000000000000000000000000000000000 |

## 枚举码值及实际分布

仅对 hshCstringRef 候选字段统计原版前 4 字节。已登记标签来自 decoded 枚举证据，逐值校验 CRC32 与原版出现次数；中文为研究译名，候选冲突不强行合并。每字段最多展示 12 个高频值，完整映射见下方 JSON。

### 动作 类型（hash_FBACE208）

去重码值 3 个，已有标签候选 3 个。

| 原始码值 | 出现次数 | 英文候选 | 中文释义 | 证据 |
| --- | ---: | --- | --- | --- |
| 0xB3D76254 | 28 | Flick | Flick | crc_candidate |
| 0x80DD1D7F | 8 | GoStop | Go 停止 | crc_candidate |
| 0x1964B988 | 6 | Stop | 停止 | crc_candidate |

### 捕捉 分类（hash_DE78DF0F）

去重码值 2 个，已有标签候选 2 个。

| 原始码值 | 出现次数 | 英文候选 | 中文释义 | 证据 |
| --- | ---: | --- | --- | --- |
| 0x3EBAA08E | 40 | Aquatic | Aquatic | crc_candidate |
| 0x6BD7DB6F | 2 | Weed | 杂草 | crc_candidate |

### 捕捉 等级（hash_AFEB1BF1）

去重码值 5 个，已有标签候选 5 个。

| 原始码值 | 出现次数 | 英文候选 | 中文释义 | 证据 |
| --- | ---: | --- | --- | --- |
| 0x84B12BAE | 11 | 5 | 5 | crc_candidate |
| 0xF3B61B38 | 11 | 4 | 4 | crc_candidate |
| 0x6DD28E9B | 9 | 3 | 3 | crc_candidate |
| 0x83DCEFB7 | 6 | 1 | 1 | crc_candidate |
| 0x1AD5BE0D | 5 | 2 | 2 | crc_candidate |

### 阴影 类型（hash_AC0EBE24）

去重码值 5 个，已有标签候选 5 个。

| 原始码值 | 出现次数 | 英文候选 | 中文释义 | 证据 |
| --- | ---: | --- | --- | --- |
| 0x2060EFC3 | 16 | S | S | crc_candidate |
| 0xDA6FD2A0 | 12 | M | M | crc_candidate |
| 0x222D1C26 | 6 | SS | SS | crc_candidate |
| 0xAD68E236 | 6 | L | L | crc_candidate |
| 0x627F1F4D | 2 | LL | LL | crc_candidate |

[完整码值与样例 JSON](../../../../research/bcsv-catalog/table-profiles.json) · [已有枚举证据 CSV](../../../../research/bcsv-data/decoded/enum-values.csv)

## 跨表关联

以下为原版 CRC32 标签值域统计候选，不是已确认的外键。

| 方向 | 来源字段 | 目标字段 | 对端表 | 匹配记录 | 去重匹配 |
| --- | --- | --- | --- | ---: | ---: |
| 出向 | hash_AFEB1BF1 | hash_87BF00E8 | [ItemRemakeCommonPattern.bcsv](table-0096.md) | 42/42 | 5/5 |

[完整关联候选](References.md) · [逐值匹配明细](../../../../research/bcsv-data/decoded/reference-values.csv)
