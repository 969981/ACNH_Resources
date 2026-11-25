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

<!-- table-business-catalog -->

## 中文表名与业务用途

**中文表名：** 道具交互动作

**用途：** 物品交互动作定义。

**证据等级：** 已有专题文档（[专题证据](../ItemAct.md)）

## 数据文件

[原始 Hash CSV](../../../../research/bcsv-data/raw/ItemAct.csv) · [英文列名 CSV](../../../../research/bcsv-data/named/ItemAct.csv) · [候选类型解码 CSV](../../../../research/bcsv-data/decoded/tables/ItemAct.csv) · [结构 JSON](../../../../research/bcsv-data/schema/ItemAct.json)

## 实际原版数据样例

选择首行、中间行、末行（去重）；每格展示原始完整字段字节及候选类型解码，不把候选类型视为已确认。

| 字段 | 偏移 | 行 0（0 基） | 行 41（0 基） | 行 81（0 基） |
| --- | ---: | --- | --- | --- |
| `hash_EA6A09CC` As 名称 | 4 | 0x90FD4FC7 / hex:c74ffd90 | 0x41722E76 / hex:762e7241 | 0x9CA599DE / hex:de99a59c |
| `hash_A0839D12` 分类 名称 | 8 | 0xDFA2AFF1 / hex:f1afa2df | 0xDFA2AFF1 / hex:f1afa2df | 0xDFA2AFF1 / hex:f1afa2df |
| `hash_8B1904B9` 邮箱动作类型（语义别名：MailboxActionType） | 12 | raw:5b9e9b62 / hex:5b9e9b62 | raw:5b9e9b62 / hex:5b9e9b62 | raw:5b9e9b62 / hex:5b9e9b62 |
| `hash_54706054` 唯一ID | 16 | 1 / hex:0100 | 76 / hex:4c00 | 91 / hex:5b00 |
| `hash_31CB6B0A` 碰撞 | 18 | 1 / hex:01 | 1 / hex:01 | 1 / hex:01 |
| `hash_D2A5C5CF` 演出 类型 | 19 | 0 / hex:00 | 0 / hex:00 | 1 / hex:01 |
| `hash_87BF00E8` 标签 | 20 | "None" / hex:4e6f6e6500000000000000000000000000000000000000000000000000000000 | "LoopTriggerRestart" / hex:4c6f6f7054726967676572526573746172740000000000000000000000000000 | "VideoGameGameboy" / hex:566964656f47616d6547616d65626f7900000000000000000000000000000000 |
| `hash_036E8EBE` 名称 | 52 | "なし" / hex:e381aae3819700000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 | "ループ：トリガー：上書き" / hex:e383abe383bce38397efbc9ae38388e383aae382ace383bcefbc9ae4b88ae69bb8e3818d00000000000000000000000000000000000000000000000000000000 | "ファミコン家具：ゲームボーイ" / hex:e38395e382a1e3839fe382b3e383b3e5aeb6e585b7efbc9ae382b2e383bce383a0e3839ce383bce382a400000000000000000000000000000000000000000000 |
| `hash_0E387A24` 可切换 开启 墙壁 | 116 | 0 / hex:00000000 | 1 / hex:01000000 | 0 / hex:00000000 |

## 枚举码值及实际分布

仅对 hshCstringRef 候选字段统计原版前 4 字节。已登记标签来自 decoded 枚举证据，逐值校验 CRC32 与原版出现次数；中文为研究译名，候选冲突不强行合并。每字段最多展示 12 个高频值，完整映射见下方 JSON。

### As 名称（hash_EA6A09CC）

去重码值 20 个，已有标签候选 19 个。

| 原始码值 | 出现次数 | 英文候选 | 中文释义 | 证据 |
| --- | ---: | --- | --- | --- |
| 0x90FD4FC7 | 21 | FtrLoopAuto | 家具 Loop 自动 | crc_candidate |
| 0xACEBAA34 | 15 | FtrTriggerToLoopOnOff | 家具 触发 至 Loop 开启 关闭 | crc_candidate |
| 0xAA18D838 | 9 | FtrTriggerToLoopWaitEndOnOff | 家具 触发 至 Loop 等待 结束 开启 关闭 | crc_candidate |
| 0xADC5F578 | 6 | FtrTriggerOnce | 家具 触发 Once | crc_candidate |
| 0x28BA275F | 5 | FtrChest | 家具 箱子 | crc_candidate |
| 0xFF1759AC | 5 | FtrMailBox | 家具 Mail Box | crc_candidate |
| 0x32DAFB5C | 4 | FtrTriggerOnOff | 家具 触发 开启 关闭 | crc_candidate |
| 0x41722E76 | 4 | FtrLoopTrigger | 家具 Loop 触发 | crc_candidate |
| 0x9C71230B | 2 | FtrLoopTriggerWaitEndOnKeep | 家具 Loop 触发 等待 结束 开启 保留 | crc_candidate |
| 0x6723CE85 | 1 | FtrAudioTypeMusicCategory | 家具 音频 类型 音乐 分类 | crc_candidate |
| 0x990128D7 | 1 | FtrHaniwa | 家具 陶俑 | crc_candidate |
| 0x9CA599DE | 1 | 未知 | 未知 | unmapped |

### 分类 名称（hash_A0839D12）

去重码值 5 个，已有标签候选 5 个。

| 原始码值 | 出现次数 | 英文候选 | 中文释义 | 证据 |
| --- | ---: | --- | --- | --- |
| 0xDFA2AFF1 | 67 | None | None | crc_candidate |
| 0x64C26B81 | 9 | Chair | Chair | crc_candidate |
| 0x1EDC58B6 | 3 | Closet | 衣柜 | crc_candidate |
| 0xDE0ABA1F | 2 | Bed | Bed | crc_candidate |
| 0x3A859CB3 | 1 | Chest | 箱子 | crc_candidate |

[完整码值与样例 JSON](../../../../research/bcsv-catalog/table-profiles.json) · [已有枚举证据 CSV](../../../../research/bcsv-data/decoded/enum-values.csv)

## 跨表关联

以下为原版 CRC32 标签值域统计候选，不是已确认的外键。

| 方向 | 来源字段 | 目标字段 | 对端表 | 匹配记录 | 去重匹配 |
| --- | --- | --- | --- | ---: | ---: |
| 出向 | hash_A0839D12 | hash_87BF00E8 | [ItemNpcRoomReplaceCategory.bcsv](table-0083.md) | 81/82 | 4/5 |
| 出向 | hash_A0839D12 | hash_13AB5198 | [ItemUIFurnitureCategory.bcsv](table-0103.md) | 79/82 | 4/5 |
| 入向 | hash_F1246E5F | hash_87BF00E8 | [ItemParam.bcsv](table-0089.md) | 11178/11178 | 79/79 |

[完整关联候选](References.md) · [逐值匹配明细](../../../../research/bcsv-data/decoded/reference-values.csv)
