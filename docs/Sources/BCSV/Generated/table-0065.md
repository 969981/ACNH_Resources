# HumanAnimParam.bcsv

返回 [全量索引](README.md) · [统一字段字典](Field-Hashes.md) · [名称恢复证据](../Field-Names.md) · [残余字段证据](../../../../research/hash008h/residual_fields.json)。

原始路径：`e10617820db06889e1638499478da0de_NCA/1/Bcsv/HumanAnimParam.bcsv`
SHA256：`924409bb6900bd3d4704513d7a187a4db0d6516ec08e3c79febbe31756cef7e8`
状态：parsed

行数 904，行长 188，数据起点 140。

英文名称及类型为 CRC32 签名候选，不等同于原版明文；中文取自统一字典。跨度为物理字段间距，可能包含填充。业务证据仅采用当前表、当前偏移的已登记解释或残余字段记录；无证据不推断。

| Hash | 英文名称（CRC 候选） | 简体中文释义 | 偏移 | 跨度 | 数据类型（CRC 候选） | 当前解释 | 业务证据 |
| --- | --- | --- | ---: | ---: | --- | --- | --- |
| hash_58102055 | EmoticonTool | 表情 工具 | 4 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_0B69EC1A | LowerSetting | 下部 设置 | 8 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_2B68EF71 | UISortID | UI 排序 ID | 12 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_54706054 | UniqueID | 唯一ID | 14 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_9F5123D4 | AcceptPartialBone | 接受 Partial 骨骼 | 16 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_D5217761 | 未知 | 动画可选参数（语义别名：AnimationOptionalParameter） | 17 | 1 | 未知 | 未知，保留原值 | 未登记表级业务证据；row_hypothesis：887/904 0xFF; other small values. |
| hash_2C447591 | AsCommand | As 指令 | 18 | 65 | string65 | 未知，保留原值 | 未登记表级业务证据 |
| hash_84761FB6 | CancelFootSE | 取消 脚 音效 | 83 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_FC3116B5 | CancelFootprint | 取消 Footprint | 84 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_96BA28FE | Comment | 注释 | 85 | 64 | string64 | 未知，保留原值 | 未登记表级业务证据 |
| hash_BA199DF0 | DisableEmoticon | 禁用 表情 | 149 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_42AD246A | Misc | 杂项 | 150 | 4 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_49803457 | MoveAs | 移动 As | 154 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_26911C10 | ToolAsCommand | 工具 As 指令 | 155 | 33 | string30 | 未知，保留原值 | 未登记表级业务证据 |

<!-- table-business-catalog -->

## 中文表名与业务用途

**中文表名：** 人类角色动画参数

**用途：** 按文件名与字段名称候选推测：用于配置或描述人类角色动画参数相关数据；具体消费逻辑待验证。

**证据等级：** 名称推测

## 数据文件

[原始 Hash CSV](../../../../research/bcsv-data/raw/HumanAnimParam.csv) · [英文列名 CSV](../../../../research/bcsv-data/named/HumanAnimParam.csv) · [候选类型解码 CSV](../../../../research/bcsv-data/decoded/tables/HumanAnimParam.csv) · [结构 JSON](../../../../research/bcsv-data/schema/HumanAnimParam.json)

## 实际原版数据样例

选择首行、中间行、末行（去重）；每格展示原始完整字段字节及候选类型解码，不把候选类型视为已确认。

| 字段 | 偏移 | 行 0（0 基） | 行 452（0 基） | 行 903（0 基） |
| --- | ---: | --- | --- | --- |
| `hash_58102055` 表情 工具 | 4 | 0xDFA2AFF1 / hex:f1afa2df | 0xDFA2AFF1 / hex:f1afa2df | 0xDFA2AFF1 / hex:f1afa2df |
| `hash_0B69EC1A` 下部 设置 | 8 | 0x35AD0CB1 / hex:b10cad35 | 0x35AD0CB1 / hex:b10cad35 | 0xB5298ADB / hex:db8a29b5 |
| `hash_2B68EF71` UI 排序 ID | 12 | 10 / hex:0a00 | 65535 / hex:ffff | 65535 / hex:ffff |
| `hash_54706054` 唯一ID | 14 | 50 / hex:3200 | 575 / hex:3f02 | 1194 / hex:aa04 |
| `hash_9F5123D4` 接受 Partial 骨骼 | 16 | 2 / hex:02 | 0 / hex:00 | 4 / hex:04 |
| `hash_D5217761` 动画可选参数（语义别名：AnimationOptionalParameter） | 17 | raw:ff / hex:ff | raw:ff / hex:ff | raw:ff / hex:ff |
| `hash_2C447591` As 指令 | 18 | "MaReGreeting" / hex:4d6152654772656574696e670000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 | "NpcSpDrinkingSit" / hex:4e706353704472696e6b696e6753697400000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 | "PlayerBedWaitOpenEyesNoMorph" / hex:506c61796572426564576169744f70656e457965734e6f4d6f72706800000000000000000000000000000000000000000000000000000000000000000000000000 |
| `hash_84761FB6` 取消 脚 音效 | 83 | 0 / hex:00 | 0 / hex:00 | 1 / hex:01 |
| `hash_FC3116B5` 取消 Footprint | 84 | 0 / hex:00 | 0 / hex:00 | 1 / hex:01 |
| `hash_96BA28FE` 注释 | 85 | "【漫符】会釈" / hex:e38090e6bcabe7aca6e38091e4bc9ae9878800000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 | "特殊サービス：飲む（座り）" / hex:e789b9e6ae8ae382b5e383bce38393e382b9efbc9ae9a3b2e38280efbc88e5baa7e3828aefbc8900000000000000000000000000000000000000000000000000 | "Player:補間なしで目を開けて寝る" / hex:506c617965723ae8a39ce99693e381aae38197e381a7e79baee38292e9968be38191e381a6e5af9de3828b000000000000000000000000000000000000000000 |
| `hash_BA199DF0` 禁用 表情 | 149 | 0 / hex:00 | 0 / hex:00 | 0 / hex:00 |
| `hash_42AD246A` 杂项 | 150 | 30 / hex:1e000000 | raw:44000400 / hex:44000400 | raw:00000100 / hex:00000100 |
| `hash_49803457` 移动 As | 154 | 0 / hex:00 | 0 / hex:00 | 0 / hex:00 |
| `hash_26911C10` 工具 As 指令 | 155 | "" / hex:000000000000000000000000000000000000000000000000000000000000000000 | "" / hex:000000000000000000000000000000000000000000000000000000000000000000 | "" / hex:000000000000000000000000000000000000000000000000000000000000000000 |

## 枚举码值及实际分布

仅对 hshCstringRef 候选字段统计原版前 4 字节。已登记标签来自 decoded 枚举证据，逐值校验 CRC32 与原版出现次数；中文为研究译名，候选冲突不强行合并。每字段最多展示 12 个高频值，完整映射见下方 JSON。

### 表情 工具（hash_58102055）

去重码值 2 个，已有标签候选 2 个。

| 原始码值 | 出现次数 | 英文候选 | 中文释义 | 证据 |
| --- | ---: | --- | --- | --- |
| 0xDFA2AFF1 | 903 | None | None | crc_candidate |
| 0xA82C52FA | 1 | SmartPhone | Smart Phone | crc_candidate |

### 下部 设置（hash_0B69EC1A）

去重码值 7 个，已有标签候选 7 个。

| 原始码值 | 出现次数 | 英文候选 | 中文释义 | 证据 |
| --- | ---: | --- | --- | --- |
| 0x35AD0CB1 | 835 | DisableOnlyLowerBody | 禁用 仅 下部 主体 | crc_candidate |
| 0x19CF1CF4 | 29 | EnableOnlyLowerBody_Sit | 启用 仅 下部 主体 坐 | crc_candidate |
| 0xB21CE917 | 19 | EnableOnlyLowerBody_Swim | 启用 仅 下部 主体 Swim | crc_candidate |
| 0xB5298ADB | 18 | EnableOnlyLowerBody_Bed | 启用 仅 下部 主体 Bed | crc_candidate |
| 0x2C377E77 | 1 | EnableOnlyLowerBody_Stand | 启用 仅 下部 主体 Stand | crc_candidate |
| 0x3C3901B4 | 1 | EnableOnlyLowerBody_SWalk | 启用 仅 下部 主体 S 行走 | crc_candidate |
| 0x5628D09C | 1 | EnableOnlyLowerBody_GroundSit | 启用 仅 下部 主体 地面 坐 | crc_candidate |

[完整码值与样例 JSON](../../../../research/bcsv-catalog/table-profiles.json) · [已有枚举证据 CSV](../../../../research/bcsv-data/decoded/enum-values.csv)

## 跨表关联

以下为原版 CRC32 标签值域统计候选，不是已确认的外键。

| 方向 | 来源字段 | 目标字段 | 对端表 | 匹配记录 | 去重匹配 |
| --- | --- | --- | --- | ---: | ---: |
| — | — | — | 尚无已登记候选 | — | — |

[完整关联候选](References.md) · [逐值匹配明细](../../../../research/bcsv-data/decoded/reference-values.csv)
