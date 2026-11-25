# WherearenRollSet.bcsv

返回 [全量索引](README.md) · [统一字段字典](Field-Hashes.md) · [名称恢复证据](../Field-Names.md) · [残余字段证据](../../../../research/hash008h/residual_fields.json)。

原始路径：`e10617820db06889e1638499478da0de_NCA/1/Bcsv/WherearenRollSet.bcsv`
SHA256：`240d8c747556cc82cab133ef6075636dae02efd3822f014777ae541ee5040739`
状态：parsed

行数 11，行长 36，数据起点 156。

英文名称及类型为 CRC32 签名候选，不等同于原版明文；中文取自统一字典。跨度为物理字段间距，可能包含填充。业务证据仅采用当前表、当前偏移的已登记解释或残余字段记录；无证据不推断。

| Hash | 英文名称（CRC 候选） | 简体中文释义 | 偏移 | 跨度 | 数据类型（CRC 候选） | 当前解释 | 业务证据 |
| --- | --- | --- | ---: | ---: | --- | --- | --- |
| hash_F1E40F7E | ActionSet0 | 动作 集合 0 | 4 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_481FD496 | ActionSet1 | 动作 集合 1 | 8 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_5962BEEF | ActionSet2 | 动作 集合 2 | 12 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_2B54BEDD | NpcRole0 | NPC 角色 0 | 16 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_B4AB80A4 | NpcRoleSet | NPC 角色 集合 | 20 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_FF8F9405 | NpcRoleSetID | NPC 角色 集合 ID | 24 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_21C5D786 | ActionSetRate0 | 动作 集合 比率 0 | 26 | 1 | s8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_9979B0E3 | ActionSetRate1 | 动作 集合 比率 1 | 27 | 1 | s8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_8BCC1F0D | ActionSetRate2 | 动作 集合 比率 2 | 28 | 1 | s8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_3297A85E | NpcRole1 | NPC 角色 1 | 29 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_202207B0 | NpcRole2 | NPC 角色 2 | 30 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_989E60D5 | NpcRole3 | NPC 角色 3 | 31 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_56CCF3FD | NpcRoleNum0 | NPC 角色 数量 0 | 32 | 1 | s8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_EE709498 | NpcRoleNum1 | NPC 角色 数量 1 | 33 | 1 | s8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_FCC53B76 | NpcRoleNum2 | NPC 角色 数量 2 | 34 | 1 | s8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_44795C13 | NpcRoleNum3 | NPC 角色 数量 3 | 35 | 1 | s8 | 未知，保留原值 | 未登记表级业务证据 |

<!-- table-business-catalog -->

## 中文表名与业务用途

**中文表名：** 度假群岛角色分工集合（Roll）

**用途：** 按文件名与字段名称候选推测：用于配置或描述度假群岛角色分工集合（Roll）相关数据；具体消费逻辑待验证。

**证据等级：** 名称推测

## 数据文件

[原始 Hash CSV](../../../../research/bcsv-data/raw/WherearenRollSet.csv) · [英文列名 CSV](../../../../research/bcsv-data/named/WherearenRollSet.csv) · [候选类型解码 CSV](../../../../research/bcsv-data/decoded/tables/WherearenRollSet.csv) · [结构 JSON](../../../../research/bcsv-data/schema/WherearenRollSet.json)

## 实际原版数据样例

选择首行、中间行、末行（去重）；每格展示原始完整字段字节及候选类型解码，不把候选类型视为已确认。

| 字段 | 偏移 | 行 0（0 基） | 行 5（0 基） | 行 10（0 基） |
| --- | ---: | --- | --- | --- |
| `hash_F1E40F7E` 动作 集合 0 | 4 | 0x1197DFE3 / hex:e3df9711 | 0x1197DFE3 / hex:e3df9711 | 0x1197DFE3 / hex:e3df9711 |
| `hash_481FD496` 动作 集合 1 | 8 | 0x1197DFE3 / hex:e3df9711 | 0x1197DFE3 / hex:e3df9711 | 0x1197DFE3 / hex:e3df9711 |
| `hash_5962BEEF` 动作 集合 2 | 12 | 0x1197DFE3 / hex:e3df9711 | 0x1197DFE3 / hex:e3df9711 | 0x1197DFE3 / hex:e3df9711 |
| `hash_2B54BEDD` NPC 角色 0 | 16 | 0xF4DBDF21 / hex:21dfdbf4 | 0xAC4E7C43 / hex:437c4eac | 0x9DE9067E / hex:7e06e99d |
| `hash_B4AB80A4` NPC 角色 集合 | 20 | 0xDFA2AFF1 / hex:f1afa2df | 0x81C3308C / hex:8c30c381 | 0xBEC2965C / hex:5c96c2be |
| `hash_FF8F9405` NPC 角色 集合 ID | 24 | 0 / hex:0000 | 5 / hex:0500 | 9 / hex:0900 |
| `hash_21C5D786` 动作 集合 比率 0 | 26 | 0 / hex:00 | 0 / hex:00 | 0 / hex:00 |
| `hash_9979B0E3` 动作 集合 比率 1 | 27 | 0 / hex:00 | 0 / hex:00 | 0 / hex:00 |
| `hash_8BCC1F0D` 动作 集合 比率 2 | 28 | 0 / hex:00 | 0 / hex:00 | 0 / hex:00 |
| `hash_3297A85E` NPC 角色 1 | 29 | 0 / hex:00 | 9 / hex:09 | 0 / hex:00 |
| `hash_202207B0` NPC 角色 2 | 30 | 0 / hex:00 | 10 / hex:0a | 0 / hex:00 |
| `hash_989E60D5` NPC 角色 3 | 31 | 0 / hex:00 | 12 / hex:0c | 0 / hex:00 |
| `hash_56CCF3FD` NPC 角色 数量 0 | 32 | 0 / hex:00 | 1 / hex:01 | 4 / hex:04 |
| `hash_EE709498` NPC 角色 数量 1 | 33 | 0 / hex:00 | 1 / hex:01 | 0 / hex:00 |
| `hash_FCC53B76` NPC 角色 数量 2 | 34 | 0 / hex:00 | 1 / hex:01 | 0 / hex:00 |
| `hash_44795C13` NPC 角色 数量 3 | 35 | 0 / hex:00 | 3 / hex:03 | 0 / hex:00 |

## 枚举码值及实际分布

仅对 hshCstringRef 候选字段统计原版前 4 字节。已登记标签来自 decoded 枚举证据，逐值校验 CRC32 与原版出现次数；中文为研究译名，候选冲突不强行合并。每字段最多展示 12 个高频值，完整映射见下方 JSON。

### 动作 集合 0（hash_F1E40F7E）

去重码值 2 个，已有标签候选 2 个。

| 原始码值 | 出现次数 | 英文候选 | 中文释义 | 证据 |
| --- | ---: | --- | --- | --- |
| 0x1197DFE3 | 10 | Random | 随机 | crc_candidate |
| 0xB32BF0BB | 1 | SchoolLesson | School Lesson | crc_candidate |

### 动作 集合 1（hash_481FD496）

去重码值 2 个，已有标签候选 2 个。

| 原始码值 | 出现次数 | 英文候选 | 中文释义 | 证据 |
| --- | ---: | --- | --- | --- |
| 0x1197DFE3 | 10 | Random | 随机 | crc_candidate |
| 0x572C5FFF | 1 | SchoolBreak | School Break | crc_candidate |

### 动作 集合 2（hash_5962BEEF）

去重码值 1 个，已有标签候选 1 个。

| 原始码值 | 出现次数 | 英文候选 | 中文释义 | 证据 |
| --- | ---: | --- | --- | --- |
| 0x1197DFE3 | 11 | Random | 随机 | crc_candidate |

### NPC 角色 0（hash_2B54BEDD）

去重码值 11 个，已有标签候选 11 个。

| 原始码值 | 出现次数 | 英文候选 | 中文释义 | 证据 |
| --- | ---: | --- | --- | --- |
| 0x149B1A09 | 1 | CafeWaiter | Cafe Waiter | crc_candidate |
| 0x3683A284 | 1 | TailorClerk | Tailor Clerk | crc_candidate |
| 0x5E6AF2B4 | 1 | HospitalDoctor | Hospital Doctor | crc_candidate |
| 0x920BC9F4 | 1 | RestaurantCook | Restaurant Cook | crc_candidate |
| 0x9DE9067E | 1 | CafeCustomer2F | Cafe Customer 2 F | crc_candidate |
| 0xAC4E7C43 | 1 | RestaurantCashier | Restaurant Cashier | crc_candidate |
| 0xC07C9E9D | 1 | RestaurantCustomer2F | Restaurant Customer 2 F | crc_candidate |
| 0xC8BA30F3 | 1 | SchoolTeacher | School Teacher | crc_candidate |
| 0xF4DBDF21 | 1 | 0 | 0 | crc_candidate |
| 0xF8D9E6E3 | 1 | HospitalReception | Hospital Reception | crc_candidate |
| 0xFC11FA81 | 1 | HospitalInpatient | Hospital Inpatient | crc_candidate |

### NPC 角色 集合（hash_B4AB80A4）

去重码值 11 个，已有标签候选 11 个。

| 原始码值 | 出现次数 | 英文候选 | 中文释义 | 证据 |
| --- | ---: | --- | --- | --- |
| 0x1DBEDC10 | 1 | HospitalWaitingRoom | Hospital Waiting 房间 | crc_candidate |
| 0x2405B413 | 1 | RestaurantKitchenRoom | Restaurant Kitchen 房间 | crc_candidate |
| 0x2A51328F | 1 | TailorHallRoom | Tailor Hall 房间 | crc_candidate |
| 0x33FD52BA | 1 | SchoolClassRoom | School Class 房间 | crc_candidate |
| 0x60DBB096 | 1 | CafeHallRoom | Cafe Hall 房间 | crc_candidate |
| 0x8040C932 | 1 | Restaurant2F | Restaurant 2 F | crc_candidate |
| 0x81C3308C | 1 | RestaurantHallRoom | Restaurant Hall 房间 | crc_candidate |
| 0x98A63EC2 | 1 | HospitalExaminationRoom | Hospital Examination 房间 | crc_candidate |
| 0xBEC2965C | 1 | Cafe2F | Cafe 2 F | crc_candidate |
| 0xDB4C70FE | 1 | HospitalHostitalRoom | Hospital Hostital 房间 | crc_candidate |
| 0xDFA2AFF1 | 1 | None | None | crc_candidate |

[完整码值与样例 JSON](../../../../research/bcsv-catalog/table-profiles.json) · [已有枚举证据 CSV](../../../../research/bcsv-data/decoded/enum-values.csv)

## 跨表关联

以下为原版 CRC32 标签值域统计候选，不是已确认的外键。

| 方向 | 来源字段 | 目标字段 | 对端表 | 匹配记录 | 去重匹配 |
| --- | --- | --- | --- | ---: | ---: |
| 出向 | hash_2B54BEDD | hash_87BF00E8 | [WherearenRoll.bcsv](table-0230.md) | 10/11 | 10/11 |

[完整关联候选](References.md) · [逐值匹配明细](../../../../research/bcsv-data/decoded/reference-values.csv)
