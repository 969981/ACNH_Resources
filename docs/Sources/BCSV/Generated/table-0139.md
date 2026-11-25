# NpcCastScheduleData.bcsv

返回 [全量索引](README.md) · [统一字段字典](Field-Hashes.md) · [名称恢复证据](../Field-Names.md) · [残余字段证据](../../../../research/hash008h/residual_fields.json)。

原始路径：`e10617820db06889e1638499478da0de_NCA/1/Bcsv/NpcCastScheduleData.bcsv`
SHA256：`f2a1419a9cdcd7db3b8a829e8c3d6eaa908b3595dddcb3fb70223da491faea88`
状态：parsed

行数 35，行长 48，数据起点 116。

英文名称及类型为 CRC32 签名候选，不等同于原版明文；中文取自统一字典。跨度为物理字段间距，可能包含填充。业务证据仅采用当前表、当前偏移的已登记解释或残余字段记录；无证据不推断。

| Hash | 英文名称（CRC 候选） | 简体中文释义 | 偏移 | 跨度 | 数据类型（CRC 候选） | 当前解释 | 业务证据 |
| --- | --- | --- | ---: | ---: | --- | --- | --- |
| hash_AAAE3A0F | ApplyNeedActivity | Apply 需要 活动 | 4 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_AC0593CC | CanDoze | 可 Doze | 5 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_69A9BB3C | CastLabel | 出场 标签 | 6 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_D507DF3E | 未知 | NPC 出场日程条件（语义别名：NpcCastScheduleCondition） | 7 | 1 | 未知 | 未知，保留原值 | 未登记表级业务证据；row_hypothesis：14/35 true. |
| hash_675CA211 | EndHour | 结束 小时 | 8 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_2B09D942 | EndMinute | 结束 分钟 | 9 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_7D740FA4 | EventName | 事件 名称 | 10 | 32 | string32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_A78D0CC5 | NeglectSleep | 忽略睡眠 | 42 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_8AE48661 | StartHour | 开始 小时 | 43 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_3835A9DD | StartMinute | 开始 分钟 | 44 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_E76DB92F | UseRainGoods | 使用 雨 Goods | 45 | 3 | u8 | 未知，保留原值 | 未登记表级业务证据 |
