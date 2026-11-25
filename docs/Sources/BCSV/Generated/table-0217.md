# WherearenNpcFieldEquipRule.bcsv

返回 [全量索引](README.md) · [统一字段字典](Field-Hashes.md) · [名称恢复证据](../Field-Names.md) · [残余字段证据](../../../../research/hash008h/residual_fields.json)。

原始路径：`e10617820db06889e1638499478da0de_NCA/1/Bcsv/WherearenNpcFieldEquipRule.bcsv`
SHA256：`b82c962d24dc2ba1d0c04ad074f8d00a2a3cb6169d21ba32918b154e6e4309a6`
状态：parsed

行数 5，行长 36，数据起点 140。

英文名称及类型为 CRC32 签名候选，不等同于原版明文；中文取自统一字典。跨度为物理字段间距，可能包含填充。业务证据仅采用当前表、当前偏移的已登记解释或残余字段记录；无证据不推断。

| Hash | 英文名称（CRC 候选） | 简体中文释义 | 偏移 | 跨度 | 数据类型（CRC 候选） | 当前解释 | 业务证据 |
| --- | --- | --- | ---: | ---: | --- | --- | --- |
| hash_1F401B52 | PurposeScore | 用途 分数 | 4 | 4 | s32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_E765B554 | PurposeTag | 用途 标签 | 8 | 4 | u32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_CBBE9D2D | ScoreMultiplier | 分数 Multiplier | 12 | 4 | f32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_79BE959D | SeasonScore | 季节 分数 | 16 | 4 | s32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_A3DC7C4C | TasteScore | 风格 分数 | 20 | 4 | s32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_54706054 | UniqueID | 唯一ID | 24 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_F9CF603A | CapFrequencyWear | 帽子 频率 穿着 | 26 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_2C2A379E | CapPurposeLimit | 帽子 用途 限制 | 27 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_FF299FC4 | ClothesFrequencyWear | 服装 频率 穿着 | 28 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_7C60D6DB | ClothesPurposeLimit | 服装 用途 限制 | 29 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_744B3452 | GlassesFrequencyWear | 眼镜 频率 穿着 | 30 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_A073AA81 | GlassesPurposeLimit | 眼镜 用途 限制 | 31 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_74275E7A | MaskFrequencyWear | 遮罩 频率 穿着 | 32 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_CC198281 | MaskPurposeLimit | 遮罩 用途 限制 | 33 | 3 | u8 | 未知，保留原值 | 未登记表级业务证据 |

<!-- table-business-catalog -->

## 中文表名与业务用途

**中文表名：** 度假群岛 NPC 场景装备规则

**用途：** 按文件名与字段名称候选推测：用于配置或描述度假群岛 NPC 场景装备规则相关数据；具体消费逻辑待验证。

**证据等级：** 名称推测

## 数据文件

[原始 Hash CSV](../../../../research/bcsv-data/raw/WherearenNpcFieldEquipRule.csv) · [英文列名 CSV](../../../../research/bcsv-data/named/WherearenNpcFieldEquipRule.csv) · [候选类型解码 CSV](../../../../research/bcsv-data/decoded/tables/WherearenNpcFieldEquipRule.csv) · [结构 JSON](../../../../research/bcsv-data/schema/WherearenNpcFieldEquipRule.json)

## 实际原版数据样例

选择首行、中间行、末行（去重）；每格展示原始完整字段字节及候选类型解码，不把候选类型视为已确认。

| 字段 | 偏移 | 行 0（0 基） | 行 2（0 基） | 行 4（0 基） |
| --- | ---: | --- | --- | --- |
| `hash_1F401B52` 用途 分数 | 4 | 0 / hex:00000000 | 10 / hex:0a000000 | 5 / hex:05000000 |
| `hash_E765B554` 用途 标签 | 8 | 9 / hex:09000000 | 47 / hex:2f000000 | 49 / hex:31000000 |
| `hash_CBBE9D2D` 分数 Multiplier | 12 | 3.0 / hex:00004040 | 4.0 / hex:00008040 | 4.0 / hex:00008040 |
| `hash_79BE959D` 季节 分数 | 16 | 0 / hex:00000000 | 0 / hex:00000000 | 0 / hex:00000000 |
| `hash_A3DC7C4C` 风格 分数 | 20 | 0 / hex:00000000 | 5 / hex:05000000 | 5 / hex:05000000 |
| `hash_54706054` 唯一ID | 24 | 2 / hex:0200 | 4 / hex:0400 | 7 / hex:0700 |
| `hash_F9CF603A` 帽子 频率 穿着 | 26 | 0 / hex:00 | 3 / hex:03 | 2 / hex:02 |
| `hash_2C2A379E` 帽子 用途 限制 | 27 | 0 / hex:00 | 1 / hex:01 | 1 / hex:01 |
| `hash_FF299FC4` 服装 频率 穿着 | 28 | 0 / hex:00 | 3 / hex:03 | 3 / hex:03 |
| `hash_7C60D6DB` 服装 用途 限制 | 29 | 0 / hex:00 | 1 / hex:01 | 1 / hex:01 |
| `hash_744B3452` 眼镜 频率 穿着 | 30 | 0 / hex:00 | 2 / hex:02 | 0 / hex:00 |
| `hash_A073AA81` 眼镜 用途 限制 | 31 | 0 / hex:00 | 1 / hex:01 | 0 / hex:00 |
| `hash_74275E7A` 遮罩 频率 穿着 | 32 | 0 / hex:00 | 3 / hex:03 | 0 / hex:00 |
| `hash_CC198281` 遮罩 用途 限制 | 33 | 0 / hex:000000 | 1 / hex:010000 | 1 / hex:010000 |

## 枚举码值及实际分布

仅对 hshCstringRef 候选字段统计原版前 4 字节。已登记标签来自 decoded 枚举证据，逐值校验 CRC32 与原版出现次数；中文为研究译名，候选冲突不强行合并。每字段最多展示 12 个高频值，完整映射见下方 JSON。

本表无可按此规则识别的 CRC 枚举字段；不代表不存在数值枚举或位域。

[完整码值与样例 JSON](../../../../research/bcsv-catalog/table-profiles.json) · [已有枚举证据 CSV](../../../../research/bcsv-data/decoded/enum-values.csv)

## 跨表关联

以下为原版 CRC32 标签值域统计候选，不是已确认的外键。

| 方向 | 来源字段 | 目标字段 | 对端表 | 匹配记录 | 去重匹配 |
| --- | --- | --- | --- | ---: | ---: |
| — | — | — | 尚无已登记候选 | — | — |

[完整关联候选](References.md) · [逐值匹配明细](../../../../research/bcsv-data/decoded/reference-values.csv)
