# WherearenFacilityActionTypeParam.bcsv

返回 [全量索引](README.md) · [统一字段字典](Field-Hashes.md) · [名称恢复证据](../Field-Names.md) · [残余字段证据](../../../../research/hash008h/residual_fields.json)。

原始路径：`e10617820db06889e1638499478da0de_NCA/1/Bcsv/WherearenFacilityActionTypeParam.bcsv`
SHA256：`54dfb55456cbccfbc338efee86e164053057f2c9867faef45701408490f39ee4`
状态：parsed

行数 61，行长 448，数据起点 156。

英文名称及类型为 CRC32 签名候选，不等同于原版明文；中文取自统一字典。跨度为物理字段间距，可能包含填充。业务证据仅采用当前表、当前偏移的已登记解释或残余字段记录；无证据不推断。

| Hash | 英文名称（CRC 候选） | 简体中文释义 | 偏移 | 跨度 | 数据类型（CRC 候选） | 当前解释 | 业务证据 |
| --- | --- | --- | ---: | ---: | --- | --- | --- |
| hash_613C3C15 | LookAtType | 注视 在 类型 | 4 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_E188994E | NpcCreateType | NPC 创建 类型 | 8 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_B422539E | NpcFtrActionInterest | NPC 家具 动作 兴趣 | 12 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_87589DCE | NpcSetType | NPC 集合 类型 | 16 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_2CA34410 | NpcFtrActionTool | NPC 家具 动作 工具 | 20 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_DE02419D | NpcFtrActionTool2 | NPC 家具 动作 工具 2 | 22 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_E362682D | NpcFtrActionTool3 | NPC 家具 动作 工具 3 | 24 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_54706054 | UniqueID | 唯一ID | 26 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_721730B8 | EntryName | 入口 名称 | 28 | 32 | string32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_0AC9E9A2 | HHDFtrType | HHD 家具 类型 | 60 | 64 | string64 | 未知，保留原值 | 未登记表级业务证据 |
| hash_13AB5198 | Label | 标签 | 124 | 64 | string64 | 未知，保留原值 | 未登记表级业务证据 |
| hash_036E8EBE | Name | 名称 | 188 | 64 | string64 | 未知，保留原值 | 未登记表级业务证据 |
| hash_26E57A14 | NearbyInteract | 附近 交互 | 252 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_6C6FDB31 | NpcFtrActionAsName | NPC 家具 动作 As 名称 | 253 | 64 | string64 | 未知，保留原值 | 未登记表级业务证据 |
| hash_B5B58FF4 | NpcInteractionAsName | NPC 交互 As 名称 | 317 | 64 | string64 | 未知，保留原值 | 未登记表级业务证据 |
| hash_630F2B53 | 未知 | NPC 交互目标动作名称（语义别名：NpcInteractionTargetActionName） | 381 | 67 | 未知 | 未知，保留原值 | 未登记表级业务证据；native_behavior：10/10 original target strings match same-table Name; FUN_01FD5450 and FUN_01FEAB40 resolve strings to runtime action index and use it in NPC lookup/target comparison.；Ghidra VA：01FD5450, 01FEAB40 |

<!-- table-business-catalog -->

## 中文表名与业务用途

**中文表名：** 度假群岛设施动作类型

**用途：** 按文件名与字段名称候选推测：用于配置或描述度假群岛设施动作类型相关数据；具体消费逻辑待验证。

**证据等级：** 名称推测

## 数据文件

[原始 Hash CSV](../../../../research/bcsv-data/raw/WherearenFacilityActionTypeParam.csv) · [英文列名 CSV](../../../../research/bcsv-data/named/WherearenFacilityActionTypeParam.csv) · [候选类型解码 CSV](../../../../research/bcsv-data/decoded/tables/WherearenFacilityActionTypeParam.csv) · [结构 JSON](../../../../research/bcsv-data/schema/WherearenFacilityActionTypeParam.json)

## 实际原版数据样例

选择首行、中间行、末行（去重）；每格展示原始完整字段字节及候选类型解码，不把候选类型视为已确认。

| 字段 | 偏移 | 行 0（0 基） | 行 30（0 基） | 行 60（0 基） |
| --- | ---: | --- | --- | --- |
| `hash_613C3C15` 注视 在 类型 | 4 | 0xDFA2AFF1 / hex:f1afa2df | 0xDFA2AFF1 / hex:f1afa2df | 0xDFA2AFF1 / hex:f1afa2df |
| `hash_E188994E` NPC 创建 类型 | 8 | 0x0355373D / hex:3d375503 | 0x3F3A4DF2 / hex:f24d3a3f | 0x0355373D / hex:3d375503 |
| `hash_B422539E` NPC 家具 动作 兴趣 | 12 | 0xDFA2AFF1 / hex:f1afa2df | 0xDFA2AFF1 / hex:f1afa2df | 0xDFA2AFF1 / hex:f1afa2df |
| `hash_87589DCE` NPC 集合 类型 | 16 | 0xED1C6EF6 / hex:f66e1ced | 0x7E0E8482 / hex:82840e7e | 0xED1C6EF6 / hex:f66e1ced |
| `hash_2CA34410` NPC 家具 动作 工具 | 20 | 65534 / hex:feff | 13443 / hex:8334 | 65534 / hex:feff |
| `hash_DE02419D` NPC 家具 动作 工具 2 | 22 | 65534 / hex:feff | 65534 / hex:feff | 65534 / hex:feff |
| `hash_E362682D` NPC 家具 动作 工具 3 | 24 | 65534 / hex:feff | 65534 / hex:feff | 65534 / hex:feff |
| `hash_54706054` 唯一ID | 26 | 0 / hex:0000 | 34 / hex:2200 | 75 / hex:4b00 |
| `hash_721730B8` 入口 名称 | 28 | "" / hex:0000000000000000000000000000000000000000000000000000000000000000 | "Cook" / hex:436f6f6b00000000000000000000000000000000000000000000000000000000 | "StandSleep" / hex:5374616e64536c65657000000000000000000000000000000000000000000000 |
| `hash_0AC9E9A2` HHD 家具 类型 | 60 | "" / hex:00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 | "コンロ" / hex:e382b3e383b3e383ad00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 | "" / hex:00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 |
| `hash_13AB5198` 标签 | 124 | "None" / hex:4e6f6e65000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 | "RestaurantApprentice_Cooking" / hex:52657374617572616e7441707072656e746963655f436f6f6b696e67000000000000000000000000000000000000000000000000000000000000000000000000 | "Sleep" / hex:536c6565700000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 |
| `hash_036E8EBE` 名称 | 188 | "なし" / hex:e381aae3819700000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 | "キッチン：見習い：料理をする（失敗）" / hex:e382ade38383e38381e383b3efbc9ae8a68be7bf92e38184efbc9ae69699e79086e38292e38199e3828befbc88e5a4b1e69597efbc8900000000000000000000 | "汎用：特殊状態時：立ち寝" / hex:e6b18ee794a8efbc9ae789b9e6ae8ae78ab6e6858be69982efbc9ae7ab8be381a1e5af9d00000000000000000000000000000000000000000000000000000000 |
| `hash_26E57A14` 附近 交互 | 252 | 0 / hex:00 | 1 / hex:01 | 0 / hex:00 |
| `hash_6C6FDB31` NPC 家具 动作 As 名称 | 253 | "" / hex:00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 | "NpcFryingpanMistake" / hex:4e7063467279696e6770616e4d697374616b65000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 | "MaReSleep" / hex:4d615265536c65657000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 |
| `hash_B5B58FF4` NPC 交互 As 名称 | 317 | "" / hex:00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 | "NpcConversationTalkCook" / hex:4e7063436f6e766572736174696f6e54616c6b436f6f6b0000000000000000000000000000000000000000000000000000000000000000000000000000000000 | "" / hex:00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 |
| `hash_630F2B53` NPC 交互目标动作名称（语义别名：NpcInteractionTargetActionName） | 381 | raw:00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 / hex:00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 | raw:e382ade38383e38381e383b3efbc9ae69699e79086e995b7efbc9ae381b6e38289e381a4e3818fefbc88e382bde383bce382b9e38391e383b3efbc8900000000000000 / hex:e382ade38383e38381e383b3efbc9ae69699e79086e995b7efbc9ae381b6e38289e381a4e3818fefbc88e382bde383bce382b9e38391e383b3efbc8900000000000000 | raw:00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 / hex:00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 |

## 枚举码值及实际分布

仅对 hshCstringRef 候选字段统计原版前 4 字节。已登记标签来自 decoded 枚举证据，逐值校验 CRC32 与原版出现次数；中文为研究译名，候选冲突不强行合并。每字段最多展示 12 个高频值，完整映射见下方 JSON。

### 注视 在 类型（hash_613C3C15）

去重码值 3 个，已有标签候选 3 个。

| 原始码值 | 出现次数 | 英文候选 | 中文释义 | 证据 |
| --- | ---: | --- | --- | --- |
| 0xDFA2AFF1 | 52 | None | None | crc_candidate |
| 0x7EC130CC | 7 | Npc | NPC | crc_candidate |
| 0x8C48FCEB | 2 | Window | 窗户 | crc_candidate |

### NPC 创建 类型（hash_E188994E）

去重码值 3 个，已有标签候选 3 个。

| 原始码值 | 出现次数 | 英文候选 | 中文释义 | 证据 |
| --- | ---: | --- | --- | --- |
| 0x0355373D | 52 | All | All | crc_candidate |
| 0xCDFC6E09 | 5 | Back | 背面 | crc_candidate |
| 0x3F3A4DF2 | 4 | Front | 正面 | crc_candidate |

### NPC 家具 动作 兴趣（hash_B422539E）

去重码值 4 个，已有标签候选 4 个。

| 原始码值 | 出现次数 | 英文候选 | 中文释义 | 证据 |
| --- | ---: | --- | --- | --- |
| 0xDFA2AFF1 | 26 | None | None | crc_candidate |
| 0x72EC2C30 | 18 | Sit | 坐 | crc_candidate |
| 0x36BDAB2F | 15 | Wander | Wander | crc_candidate |
| 0xDE0ABA1F | 2 | Bed | Bed | crc_candidate |

### NPC 集合 类型（hash_87589DCE）

去重码值 4 个，已有标签候选 4 个。

| 原始码值 | 出现次数 | 英文候选 | 中文释义 | 证据 |
| --- | ---: | --- | --- | --- |
| 0x7E0E8482 | 28 | Ftr | 家具 | crc_candidate |
| 0xED1C6EF6 | 26 | Free | Free | crc_candidate |
| 0x7EC130CC | 6 | Npc | NPC | crc_candidate |
| 0x8C48FCEB | 1 | Window | 窗户 | crc_candidate |

[完整码值与样例 JSON](../../../../research/bcsv-catalog/table-profiles.json) · [已有枚举证据 CSV](../../../../research/bcsv-data/decoded/enum-values.csv)

## 跨表关联

以下为原版 CRC32 标签值域统计候选，不是已确认的外键。

| 方向 | 来源字段 | 目标字段 | 对端表 | 匹配记录 | 去重匹配 |
| --- | --- | --- | --- | ---: | ---: |
| 入向 | hash_67C63FCC | hash_13AB5198 | [WherearenFacilityActionSet.bcsv](table-0208.md) | 3/3 | 3/3 |
| 入向 | hash_DE3DE424 | hash_13AB5198 | [WherearenFacilityActionSet.bcsv](table-0208.md) | 3/3 | 3/3 |
| 入向 | hash_CF408E5D | hash_13AB5198 | [WherearenFacilityActionSet.bcsv](table-0208.md) | 3/3 | 3/3 |
| 入向 | hash_E060F48F | hash_13AB5198 | [WherearenFacilityActionSet.bcsv](table-0208.md) | 3/3 | 3/3 |
| 入向 | hash_599B2F67 | hash_13AB5198 | [WherearenFacilityActionSet.bcsv](table-0208.md) | 3/3 | 3/3 |
| 入向 | hash_48E6451E | hash_13AB5198 | [WherearenFacilityActionSet.bcsv](table-0208.md) | 3/3 | 3/3 |
| 入向 | hash_F11D9EF6 | hash_13AB5198 | [WherearenFacilityActionSet.bcsv](table-0208.md) | 3/3 | 3/3 |
| 入向 | hash_6A1C91EC | hash_13AB5198 | [WherearenFacilityActionSet.bcsv](table-0208.md) | 3/3 | 3/3 |
| 入向 | hash_91783E01 | hash_13AB5198 | [WherearenFacilityActionSet.bcsv](table-0208.md) | 3/3 | 3/3 |
| 入向 | hash_416EAF25 | hash_13AB5198 | [WherearenRoll.bcsv](table-0230.md) | 20/20 | 16/16 |
| 入向 | hash_F89574CD | hash_13AB5198 | [WherearenRoll.bcsv](table-0230.md) | 18/18 | 15/15 |
| 入向 | hash_E9E81EB4 | hash_13AB5198 | [WherearenRoll.bcsv](table-0230.md) | 11/11 | 9/9 |
| 入向 | hash_5013C55C | hash_13AB5198 | [WherearenRoll.bcsv](table-0230.md) | 10/10 | 6/6 |
| 入向 | hash_CB12CA46 | hash_13AB5198 | [WherearenRoll.bcsv](table-0230.md) | 9/9 | 7/7 |
| 入向 | hash_72E911AE | hash_13AB5198 | [WherearenRoll.bcsv](table-0230.md) | 4/4 | 3/3 |
| 入向 | hash_7328DE13 | hash_13AB5198 | [WherearenRoll.bcsv](table-0230.md) | 19/19 | 14/14 |

[完整关联候选](References.md) · [逐值匹配明细](../../../../research/bcsv-data/decoded/reference-values.csv)
