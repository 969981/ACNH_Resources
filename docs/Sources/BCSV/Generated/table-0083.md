# ItemNpcRoomReplaceCategory.bcsv

返回 [全量索引](README.md) · [统一字段字典](Field-Hashes.md) · [名称恢复证据](../Field-Names.md) · [残余字段证据](../../../../research/hash008h/residual_fields.json)。

原始路径：`e10617820db06889e1638499478da0de_NCA/1/Bcsv/ItemNpcRoomReplaceCategory.bcsv`
SHA256：`ad56c7994c8d4d6580f7407c29681159be398a6037826e4edbca4dc9fd1790a7`
状态：parsed

行数 21，行长 48，数据起点 108。

英文名称及类型为 CRC32 签名候选，不等同于原版明文；中文取自统一字典。跨度为物理字段间距，可能包含填充。业务证据仅采用当前表、当前偏移的已登记解释或残余字段记录；无证据不推断。

| Hash | 英文名称（CRC 候选） | 简体中文释义 | 偏移 | 跨度 | 数据类型（CRC 候选） | 当前解释 | 业务证据 |
| --- | --- | --- | ---: | ---: | --- | --- | --- |
| hash_54706054 | UniqueID | 唯一ID | 4 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_8A647661 | CanPutDisplay | 可 放置 Display | 6 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_9F9B91E9 | CanPutFish | 可 放置 鱼 | 7 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_A604B7CF | CanPutFood | 可 放置 食物 | 8 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_B2AC5428 | CanPutForBase | 可 放置 用于 基础 | 9 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_EF1F311C | CanPutInsect | 可 放置 昆虫 | 10 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_84432956 | CanPutKitchen | 可 放置 Kitchen | 11 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_AA4F6B89 | CanPutUtility | 可 放置 Utility | 12 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_3594F417 | CanPutWorkStuff | 可 放置 工作 物品 | 13 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_87BF00E8 | Label | 标签 | 14 | 34 | string32 | 未知，保留原值 | 未登记表级业务证据 |

<!-- table-business-catalog -->

## 中文表名与业务用途

**中文表名：** NPC 房间替换类别

**用途：** 按文件名与字段名称候选推测：用于配置或描述NPC 房间替换类别相关数据；具体消费逻辑待验证。

**证据等级：** 名称推测

## 数据文件

[原始 Hash CSV](../../../../research/bcsv-data/raw/ItemNpcRoomReplaceCategory.csv) · [英文列名 CSV](../../../../research/bcsv-data/named/ItemNpcRoomReplaceCategory.csv) · [候选类型解码 CSV](../../../../research/bcsv-data/decoded/tables/ItemNpcRoomReplaceCategory.csv) · [结构 JSON](../../../../research/bcsv-data/schema/ItemNpcRoomReplaceCategory.json)

## 实际原版数据样例

选择首行、中间行、末行（去重）；每格展示原始完整字段字节及候选类型解码，不把候选类型视为已确认。

| 字段 | 偏移 | 行 0（0 基） | 行 10（0 基） | 行 20（0 基） |
| --- | ---: | --- | --- | --- |
| `hash_54706054` 唯一ID | 4 | 0 / hex:0000 | 10 / hex:0a00 | 20 / hex:1400 |
| `hash_8A647661` 可 放置 Display | 6 | 0 / hex:00 | 1 / hex:01 | 0 / hex:00 |
| `hash_9F9B91E9` 可 放置 鱼 | 7 | 0 / hex:00 | 1 / hex:01 | 0 / hex:00 |
| `hash_A604B7CF` 可 放置 食物 | 8 | 0 / hex:00 | 0 / hex:00 | 0 / hex:00 |
| `hash_B2AC5428` 可 放置 用于 基础 | 9 | 0 / hex:00 | 1 / hex:01 | 0 / hex:00 |
| `hash_EF1F311C` 可 放置 昆虫 | 10 | 0 / hex:00 | 1 / hex:01 | 0 / hex:00 |
| `hash_84432956` 可 放置 Kitchen | 11 | 0 / hex:00 | 0 / hex:00 | 0 / hex:00 |
| `hash_AA4F6B89` 可 放置 Utility | 12 | 0 / hex:00 | 1 / hex:01 | 0 / hex:00 |
| `hash_3594F417` 可 放置 工作 物品 | 13 | 0 / hex:00 | 0 / hex:00 | 0 / hex:00 |
| `hash_87BF00E8` 标签 | 14 | "None" / hex:4e6f6e65000000000000000000000000000000000000000000000000000000000000 | "Base_Sp" / hex:426173655f5370000000000000000000000000000000000000000000000000000000 | "Fixed" / hex:46697865640000000000000000000000000000000000000000000000000000000000 |

## 枚举码值及实际分布

仅对 hshCstringRef 候选字段统计原版前 4 字节。已登记标签来自 decoded 枚举证据，逐值校验 CRC32 与原版出现次数；中文为研究译名，候选冲突不强行合并。每字段最多展示 12 个高频值，完整映射见下方 JSON。

本表无可按此规则识别的 CRC 枚举字段；不代表不存在数值枚举或位域。

[完整码值与样例 JSON](../../../../research/bcsv-catalog/table-profiles.json) · [已有枚举证据 CSV](../../../../research/bcsv-data/decoded/enum-values.csv)

## 跨表关联

以下为原版 CRC32 标签值域统计候选，不是已确认的外键。

| 方向 | 来源字段 | 目标字段 | 对端表 | 匹配记录 | 去重匹配 |
| --- | --- | --- | --- | ---: | ---: |
| 入向 | hash_A0839D12 | hash_87BF00E8 | [ItemAct.bcsv](table-0071.md) | 81/82 | 4/5 |
| 入向 | hash_EAD62C46 | hash_87BF00E8 | [ItemParam.bcsv](table-0089.md) | 11178/11178 | 21/21 |

[完整关联候选](References.md) · [逐值匹配明细](../../../../research/bcsv-data/decoded/reference-values.csv)
