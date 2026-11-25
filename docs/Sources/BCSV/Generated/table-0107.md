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

<!-- table-business-catalog -->

## 中文表名与业务用途

**中文表名：** 生活提示

**用途：** 按文件名与字段名称候选推测：用于配置或描述生活提示相关数据；具体消费逻辑待验证。

**证据等级：** 名称推测

## 数据文件

[原始 Hash CSV](../../../../research/bcsv-data/raw/LifeTips.csv) · [英文列名 CSV](../../../../research/bcsv-data/named/LifeTips.csv) · [候选类型解码 CSV](../../../../research/bcsv-data/decoded/tables/LifeTips.csv) · [结构 JSON](../../../../research/bcsv-data/schema/LifeTips.json)

## 实际原版数据样例

选择首行、中间行、末行（去重）；每格展示原始完整字段字节及候选类型解码，不把候选类型视为已确认。

| 字段 | 偏移 | 行 0（0 基） | 行 120（0 基） | 行 239（0 基） |
| --- | ---: | --- | --- | --- |
| `hash_5F4976AC` 关闭 道具 唯一 ID | 4 | -1 / hex:ffffffff | -1 / hex:ffffffff | -1 / hex:ffffffff |
| `hash_912CA5F0` 关闭 土地 标志 ID | 8 | -1 / hex:ffffffff | -1 / hex:ffffffff | -1 / hex:ffffffff |
| `hash_BE9EE5F8` 关闭 玩家 标志 ID | 12 | 1723 / hex:bb060000 | 319 / hex:3f010000 | -1 / hex:ffffffff |
| `hash_CF30F72D` 打开 土地 标志 ID | 16 | -1 / hex:ffffffff | -1 / hex:ffffffff | -1 / hex:ffffffff |
| `hash_0F6D306E` 打开 玩家 标志 ID | 20 | 1538 / hex:02060000 | 326 / hex:46010000 | 1759 / hex:df060000 |
| `hash_54706054` 唯一ID | 24 | 0 / hex:0000 | 120 / hex:7800 | 249 / hex:f900 |
| `hash_D3978A49` 生活提示条件标志（语义别名：LifeTipConditionFlag） | 26 | raw:01 / hex:01 | raw:01 / hex:01 | raw:01 / hex:01 |
| `hash_AAC49213` Talking NPC 标签 | 27 | "rco" / hex:72636f000000000000 | "rco" / hex:72636f000000000000 | "otg" / hex:6f7467000000000000 |

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
