# LifeTips.bcsv

返回 [全量索引](README.md) · [统一字段字典](Field-Hashes.md) · [名称恢复证据](../Field-Names.md) · [残余字段证据](../../../../research/hash008h/residual_fields.json)。

原始路径：`e10617820db06889e1638499478da0de_NCA/1/Bcsv/LifeTips.bcsv`
SHA256：`90d556646c0c4b97e2b336dd8003f5bc37077ca6a08ceff734e4d430746e9eb6`
状态：parsed

行数 240，行长 36，数据起点 92。

英文名称及类型为 CRC32 签名候选，不等同于原版明文；中文取自统一字典。跨度为物理字段间距，可能包含填充。业务证据仅采用当前表、当前偏移的已登记解释或残余字段记录；无证据不推断。

| Hash | 英文名称（CRC 候选） | 简体中文释义 | 偏移 | 跨度 | 数据类型（CRC 候选） | 当前解释 | 业务证据 |
| --- | --- | --- | ---: | ---: | --- | --- | --- |
| hash_5F4976AC | CloseItemUniqueId | 关闭 道具 唯一 ID | 4 | 4 | s32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_912CA5F0 | CloseLandFlagId | 关闭 土地 标志 ID | 8 | 4 | s32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_BE9EE5F8 | ClosePlayerFlagId | 关闭 玩家 标志 ID | 12 | 4 | s32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_CF30F72D | OpenLandFlagId | 打开 土地 标志 ID | 16 | 4 | s32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_0F6D306E | OpenPlayerFlagId | 打开 玩家 标志 ID | 20 | 4 | s32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_54706054 | UniqueID | 唯一ID | 24 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_D3978A49 | 未知 | 生活提示条件标志（语义别名：LifeTipConditionFlag） | 26 | 1 | 未知 | 未知，保留原值 | 未登记表级业务证据；row_hypothesis：152/240 true; exact purpose unknown. |
| hash_AAC49213 | TalkingNpcLabel | Talking NPC 标签 | 27 | 9 | string8 | 未知，保留原值 | 未登记表级业务证据 |
