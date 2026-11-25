# EventFlagsLifeSupportAchievementParam.bcsv

返回 [全量索引](README.md) · [统一字段字典](Field-Hashes.md) · [名称恢复证据](../Field-Names.md) · [残余字段证据](../../../../research/hash008h/residual_fields.json)。

原始路径：`e10617820db06889e1638499478da0de_NCA/1/Bcsv/EventFlagsLifeSupportAchievementParam.bcsv`
SHA256：`35c3ce9672abfddc63d26fef4956802f8f343b345417771cebb64aa178206319`
状态：parsed

行数 99，行长 264，数据起点 196。

英文名称及类型为 CRC32 签名候选，不等同于原版明文；中文取自统一字典。跨度为物理字段间距，可能包含填充。业务证据仅采用当前表、当前偏移的已登记解释或残余字段记录；无证据不推断。

| Hash | 英文名称（CRC 候选） | 简体中文释义 | 偏移 | 跨度 | 数据类型（CRC 候选） | 当前解释 | 业务证据 |
| --- | --- | --- | ---: | ---: | --- | --- | --- |
| hash_3FE43170 | FlagLand | 标志 土地 | 4 | 4 | s32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_4171A41D | FlagPlayer | 标志 玩家 | 8 | 4 | s32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_95CC0F22 | LifeSupportStamp | 生活 Support 印章 | 12 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_CE0933FC | MaxValue1 | 最大 数值 1 | 16 | 4 | u32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_89A9492C | MaxValue2 | 最大 数值 2 | 20 | 4 | u32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_B4C9609C | MaxValue3 | 最大 数值 3 | 24 | 4 | u32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_06E9BC8C | MaxValue4 | 最大 数值 4 | 28 | 4 | u32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_3B89953C | MaxValue5 | 最大 数值 5 | 32 | 4 | u32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_4E7F3849 | Reward1 | 奖励 1 | 36 | 4 | u32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_09DF4299 | Reward2 | 奖励 2 | 40 | 4 | u32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_34BF6B29 | Reward3 | 奖励 3 | 44 | 4 | u32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_869FB739 | Reward4 | 奖励 4 | 48 | 4 | u32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_BBFF9E89 | Reward5 | 奖励 5 | 52 | 4 | u32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_FC5FE459 | Reward6 | 奖励 6 | 56 | 4 | u32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_5971A42E | WaitFrame | 等待 帧 | 60 | 4 | u32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_54706054 | UniqueID | 唯一ID | 64 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_BED25A86 | AttrClearMoving | 属性 清除 Moving | 66 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_895442DC | IsSpecial | 是否 特殊 | 67 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_45F320F2 | Key | 键 | 68 | 64 | string64 | 未知，保留原值 | 未登记表级业务证据 |
| hash_1BE772F0 | MaxLevel | 最大 等级 | 132 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_85CF1615 | Name | 名称 | 133 | 131 | string128 | 未知，保留原值 | 未登记表级业务证据 |

<!-- table-business-catalog -->

## 中文表名与业务用途

**中文表名：** 里程成就事件标志

**用途：** 按文件名与字段名称候选推测：用于配置或描述里程成就事件标志相关数据；具体消费逻辑待验证。

**证据等级：** 名称推测

## 数据文件

[原始 Hash CSV](../../../../research/bcsv-data/raw/EventFlagsLifeSupportAchievementParam.csv) · [英文列名 CSV](../../../../research/bcsv-data/named/EventFlagsLifeSupportAchievementParam.csv) · [候选类型解码 CSV](../../../../research/bcsv-data/decoded/tables/EventFlagsLifeSupportAchievementParam.csv) · [结构 JSON](../../../../research/bcsv-data/schema/EventFlagsLifeSupportAchievementParam.json)

## 实际原版数据样例

选择首行、中间行、末行（去重）；每格展示原始完整字段字节及候选类型解码，不把候选类型视为已确认。

| 字段 | 偏移 | 行 0（0 基） | 行 49（0 基） | 行 98（0 基） |
| --- | ---: | --- | --- | --- |
| `hash_3FE43170` 标志 土地 | 4 | -1 / hex:ffffffff | -1 / hex:ffffffff | -1 / hex:ffffffff |
| `hash_4171A41D` 标志 玩家 | 8 | -1 / hex:ffffffff | -1 / hex:ffffffff | -1 / hex:ffffffff |
| `hash_95CC0F22` 生活 Support 印章 | 12 | 0xFA6F25A3 / hex:a3256ffa | 0x761E3CE0 / hex:e03c1e76 | 0xFA6F25A3 / hex:a3256ffa |
| `hash_CE0933FC` 最大 数值 1 | 16 | 1 / hex:01000000 | 1 / hex:01000000 | 3 / hex:03000000 |
| `hash_89A9492C` 最大 数值 2 | 20 | 0 / hex:00000000 | 0 / hex:00000000 | 20 / hex:14000000 |
| `hash_B4C9609C` 最大 数值 3 | 24 | 0 / hex:00000000 | 0 / hex:00000000 | 50 / hex:32000000 |
| `hash_06E9BC8C` 最大 数值 4 | 28 | 0 / hex:00000000 | 0 / hex:00000000 | 100 / hex:64000000 |
| `hash_3B89953C` 最大 数值 5 | 32 | 0 / hex:00000000 | 0 / hex:00000000 | 300 / hex:2c010000 |
| `hash_4E7F3849` 奖励 1 | 36 | 500 / hex:f4010000 | 300 / hex:2c010000 | 300 / hex:2c010000 |
| `hash_09DF4299` 奖励 2 | 40 | 500 / hex:f4010000 | 500 / hex:f4010000 | 500 / hex:f4010000 |
| `hash_34BF6B29` 奖励 3 | 44 | 1000 / hex:e8030000 | 1000 / hex:e8030000 | 1000 / hex:e8030000 |
| `hash_869FB739` 奖励 4 | 48 | 2000 / hex:d0070000 | 2000 / hex:d0070000 | 2000 / hex:d0070000 |
| `hash_BBFF9E89` 奖励 5 | 52 | 3000 / hex:b80b0000 | 3000 / hex:b80b0000 | 3000 / hex:b80b0000 |
| `hash_FC5FE459` 奖励 6 | 56 | 0 / hex:00000000 | 0 / hex:00000000 | 0 / hex:00000000 |
| `hash_5971A42E` 等待 帧 | 60 | 0 / hex:00000000 | 0 / hex:00000000 | 0 / hex:00000000 |
| `hash_54706054` 唯一ID | 64 | 53 / hex:3500 | 13 / hex:0d00 | 21 / hex:1500 |
| `hash_BED25A86` 属性 清除 Moving | 66 | 1 / hex:01 | 0 / hex:00 | 1 / hex:01 |
| `hash_895442DC` 是否 特殊 | 67 | 0 / hex:00 | 0 / hex:00 | 0 / hex:00 |
| `hash_45F320F2` 键 | 68 | "ImmigratetoIsland" / hex:496d6d696772617465746f49736c616e640000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 | "SellItemRcm" / hex:53656c6c4974656d52636d0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 | "DayPlayed" / hex:446179506c6179656400000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 |
| `hash_1BE772F0` 最大 等级 | 132 | 1 / hex:01 | 1 / hex:01 | 5 / hex:05 |
| `hash_85CF1615` 名称 | 133 | "島に移住した" / hex:e5b3b6e381abe7a7bbe4bd8fe38197e3819f0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 | "まめきちの店で売った" / hex:e381bee38281e3818de381a1e381aee5ba97e381a7e5a3b2e381a3e3819f0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 | "活動日数" / hex:e6b4bbe58b95e697a5e695b00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 |

## 枚举码值及实际分布

仅对 hshCstringRef 候选字段统计原版前 4 字节。已登记标签来自 decoded 枚举证据，逐值校验 CRC32 与原版出现次数；中文为研究译名，候选冲突不强行合并。每字段最多展示 12 个高频值，完整映射见下方 JSON。

### 生活 Support 印章（hash_95CC0F22）

去重码值 16 个，已有标签候选 15 个。

| 原始码值 | 出现次数 | 英文候选 | 中文释义 | 证据 |
| --- | ---: | --- | --- | --- |
| 0x4AD1FE1E | 17 | Communication | Communication | crc_candidate |
| 0xFA6F25A3 | 9 | Event | 事件 | crc_candidate |
| 0x6AC22276 | 8 | Plant | 植物 | crc_candidate |
| 0x761E3CE0 | 8 | Money | Money | crc_candidate |
| 0xB8B3B161 | 8 | HHA | 快乐家协会 | crc_candidate |
| 0x0291B5F0 | 7 | LandMaking | 土地 Making | crc_candidate |
| 0x69ED7DFE | 7 | Smartphone | 手机 | crc_candidate |
| 0x9F46EB0D | 7 | Fish | 鱼 | crc_candidate |
| 0x91B9B8D3 | 6 | Insect | 昆虫 | crc_candidate |
| 0xBBDEE112 | 5 | DIY | DIY | crc_candidate |
| 0xD6FE8128 | 5 | Negative | Negative | crc_candidate |
| 0xC29271DD | 3 | 未知 | 未知 | unmapped |

[完整码值与样例 JSON](../../../../research/bcsv-catalog/table-profiles.json) · [已有枚举证据 CSV](../../../../research/bcsv-data/decoded/enum-values.csv)

## 跨表关联

以下为原版 CRC32 标签值域统计候选，不是已确认的外键。

| 方向 | 来源字段 | 目标字段 | 对端表 | 匹配记录 | 去重匹配 |
| --- | --- | --- | --- | ---: | ---: |
| — | — | — | 尚无已登记候选 | — | — |

[完整关联候选](References.md) · [逐值匹配明细](../../../../research/bcsv-data/decoded/reference-values.csv)
