# ItemAct.bcsv

返回 [全量索引](README.md) · [统一字段字典](Field-Hashes.md) · [名称恢复证据](../Field-Names.md) · [残余字段证据](../../../../research/hash008h/residual_fields.json)。

原始路径：`e10617820db06889e1638499478da0de_NCA/1/Bcsv/ItemAct.bcsv`
SHA256：`b9e25962942e74e458d038b90ae9e0005d5f900906750f26b771c7c3abcd39a6`
状态：parsed

行数 82，行长 120，数据起点 100。

英文名称及类型为 CRC32 签名候选，不等同于原版明文；中文取自统一字典。跨度为物理字段间距，可能包含填充。业务证据仅采用当前表、当前偏移的已登记解释或残余字段记录；无证据不推断。

| Hash | 英文名称（CRC 候选） | 简体中文释义 | 偏移 | 跨度 | 数据类型（CRC 候选） | 当前解释 | 业务证据 |
| --- | --- | --- | ---: | ---: | --- | --- | --- |
| hash_EA6A09CC | AsName | As 名称 | 4 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_A0839D12 | CategoryName | 分类 名称 | 8 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_8B1904B9 | 未知 | 邮箱动作类型（语义别名：MailboxActionType） | 12 | 4 | 未知 | 未知，保留原值 | 未登记表级业务证据；data_relation：5 mailbox action labels exact CRC; default 629B9E5B=CRC32('Unknown'), 77 records; native dispatch pending. |
| hash_54706054 | UniqueID | 唯一ID | 16 | 2 | u16 | id | 表级解析字典（TYPED） |
| hash_31CB6B0A | Collision | 碰撞 | 18 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_D2A5C5CF | DemoType | 演出 类型 | 19 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_87BF00E8 | Label | 标签 | 20 | 32 | string32 | label | 表级解析字典（TYPED） |
| hash_036E8EBE | Name | 名称 | 52 | 64 | string64 | description_ja | 表级解析字典（TYPED） |
| hash_0E387A24 | SwitchableOnWall | 可切换 开启 墙壁 | 116 | 4 | u8 | 未知，保留原值 | 未登记表级业务证据 |
