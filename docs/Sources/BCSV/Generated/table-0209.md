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
