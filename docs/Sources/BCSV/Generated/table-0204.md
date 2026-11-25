# VMSharedNPC.bcsv

返回 [全量索引](README.md) · [统一字段字典](Field-Hashes.md) · [名称恢复证据](../Field-Names.md) · [残余字段证据](../../../../research/hash008h/residual_fields.json)。

原始路径：`e10617820db06889e1638499478da0de_NCA/1/Bcsv/VMSharedNPC.bcsv`
SHA256：`cb9683c3bf861e778c80f1d70537862d1b83297acaf73de5f059801a83ec69ef`
状态：parsed

行数 10，行长 24，数据起点 52。

英文名称及类型为 CRC32 签名候选，不等同于原版明文；中文取自统一字典。跨度为物理字段间距，可能包含填充。业务证据仅采用当前表、当前偏移的已登记解释或残余字段记录；无证据不推断。

| Hash | 英文名称（CRC 候选） | 简体中文释义 | 偏移 | 跨度 | 数据类型（CRC 候选） | 当前解释 | 业务证据 |
| --- | --- | --- | ---: | ---: | --- | --- | --- |
| hash_54706054 | UniqueID | 唯一ID | 4 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_6C244255 | SharedNPCLabel | Shared NPC 标签 | 6 | 8 | string8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_C6233FDF | TargetNPCLabel | 目标 NPC 标签 | 14 | 10 | string8 | 未知，保留原值 | 未登记表级业务证据 |
