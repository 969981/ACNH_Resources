# ColGroundAttributeParam.bcsv

返回 [全量索引](README.md) · [统一字段字典](Field-Hashes.md) · [名称恢复证据](../Field-Names.md) · [残余字段证据](../../../../research/hash008h/residual_fields.json)。

原始路径：`e10617820db06889e1638499478da0de_NCA/1/Bcsv/ColGroundAttributeParam.bcsv`
SHA256：`e35dc901a984438de5f151960f5e78c7c84a1a448e899765f312043b7ff9ae75`
状态：parsed

行数 73，行长 84，数据起点 140。

英文名称及类型为 CRC32 签名候选，不等同于原版明文；中文取自统一字典。跨度为物理字段间距，可能包含填充。业务证据仅采用当前表、当前偏移的已登记解释或残余字段记录；无证据不推断。

| Hash | 英文名称（CRC 候选） | 简体中文释义 | 偏移 | 跨度 | 数据类型（CRC 候选） | 当前解释 | 业务证据 |
| --- | --- | --- | ---: | ---: | --- | --- | --- |
| hash_6AB4B6FB | EffectAttribute | 效果 属性 | 4 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_2E17A0A7 | SoundAttribute | 声音 属性 | 6 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_54706054 | UniqueID | 唯一ID | 8 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_B99C565A | ViewSortID | 视图 排序 ID | 10 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_472724ED | CanBury | 可 埋藏 | 12 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_AB51A3CF | DebugName | 调试 名称 | 13 | 32 | string32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_3E78DC38 | FtrPlace | 家具 放置 | 45 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_2E1E45C3 | GroundHoleColorString | 地面 洞 颜色 字符串 | 46 | 16 | string16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_BD859433 | GroundSnowHoleColorString | 地面 雪 洞 颜色 字符串 | 62 | 16 | string16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_0254BD05 | NoBuryBounce | 禁止埋藏弹跳 | 78 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_5BAF48A0 | NpcNoEntry | NPC 无 入口 | 79 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_E7E965DB | PlayerNoEntry | 玩家 无 入口 | 80 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_9CB82A1E | Sand | 沙地 | 81 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_58DA05ED | WaterCheck | 水 检查 | 82 | 2 | u8 | 未知，保留原值 | 未登记表级业务证据 |

<!-- table-business-catalog -->

## 中文表名与业务用途

**中文表名：** 碰撞地面属性

**用途：** 按文件名与字段名称候选推测：用于配置或描述碰撞地面属性相关数据；具体消费逻辑待验证。

**证据等级：** 名称推测

## 数据文件

[原始 Hash CSV](../../../../research/bcsv-data/raw/ColGroundAttributeParam.csv) · [英文列名 CSV](../../../../research/bcsv-data/named/ColGroundAttributeParam.csv) · [候选类型解码 CSV](../../../../research/bcsv-data/decoded/tables/ColGroundAttributeParam.csv) · [结构 JSON](../../../../research/bcsv-data/schema/ColGroundAttributeParam.json)

## 实际原版数据样例

选择首行、中间行、末行（去重）；每格展示原始完整字段字节及候选类型解码，不把候选类型视为已确认。

| 字段 | 偏移 | 行 0（0 基） | 行 36（0 基） | 行 72（0 基） |
| --- | ---: | --- | --- | --- |
| `hash_6AB4B6FB` 效果 属性 | 4 | 2 / hex:0200 | 19 / hex:1300 | 1 / hex:0100 |
| `hash_2E17A0A7` 声音 属性 | 6 | 2 / hex:0200 | 9 / hex:0900 | 52 / hex:3400 |
| `hash_54706054` 唯一ID | 8 | 0 / hex:0000 | 39 / hex:2700 | 76 / hex:4c00 |
| `hash_B99C565A` 视图 排序 ID | 10 | 0 / hex:0000 | 27 / hex:1b00 | 102 / hex:6600 |
| `hash_472724ED` 可 埋藏 | 12 | 1 / hex:01 | 0 / hex:00 | 0 / hex:00 |
| `hash_AB51A3CF` 调试 名称 | 13 | "草" / hex:e88d890000000000000000000000000000000000000000000000000000000000 | "道:扇状石畳" / hex:e981933ae68987e78ab6e79fb3e795b300000000000000000000000000000000 | "インク" / hex:e382a4e383b3e382af0000000000000000000000000000000000000000000000 |
| `hash_3E78DC38` 家具 放置 | 45 | 1 / hex:01 | 1 / hex:01 | 1 / hex:01 |
| `hash_2E1E45C3` 地面 洞 颜色 字符串 | 46 | "#CBAA6A" / hex:23434241413641000000000000000000 | "#FFFFFF" / hex:23464646464646000000000000000000 | "#FFFFFF" / hex:23464646464646000000000000000000 |
| `hash_BD859433` 地面 雪 洞 颜色 字符串 | 62 | "#E7DDD0" / hex:23453744444430000000000000000000 | "#FFFFFF" / hex:23464646464646000000000000000000 | "#FFFFFF" / hex:23464646464646000000000000000000 |
| `hash_0254BD05` 禁止埋藏弹跳 | 78 | 0 / hex:00 | 1 / hex:01 | 0 / hex:00 |
| `hash_5BAF48A0` NPC 无 入口 | 79 | 0 / hex:00 | 0 / hex:00 | 0 / hex:00 |
| `hash_E7E965DB` 玩家 无 入口 | 80 | 0 / hex:00 | 0 / hex:00 | 0 / hex:00 |
| `hash_9CB82A1E` 沙地 | 81 | 0 / hex:00 | 0 / hex:00 | 0 / hex:00 |
| `hash_58DA05ED` 水 检查 | 82 | 0 / hex:0000 | 0 / hex:0000 | 0 / hex:0000 |

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
