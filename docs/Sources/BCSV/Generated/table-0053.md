# FieldLandMakingError.bcsv

返回 [全量索引](README.md) · [统一字段字典](Field-Hashes.md) · [名称恢复证据](../Field-Names.md) · [残余字段证据](../../../../research/hash008h/residual_fields.json)。

原始路径：`e10617820db06889e1638499478da0de_NCA/1/Bcsv/FieldLandMakingError.bcsv`
SHA256：`74b1aa6db415da4baeca9ea3772ad28308870f9eb71d5a4a3a03e178f6e585cb`
状态：parsed

行数 18，行长 188，数据起点 84。

英文名称及类型为 CRC32 签名候选，不等同于原版明文；中文取自统一字典。跨度为物理字段间距，可能包含填充。业务证据仅采用当前表、当前偏移的已登记解释或残余字段记录；无证据不推断。

| Hash | 英文名称（CRC 候选） | 简体中文释义 | 偏移 | 跨度 | 数据类型（CRC 候选） | 当前解释 | 业务证据 |
| --- | --- | --- | ---: | ---: | --- | --- | --- |
| hash_54706054 | UniqueID | 唯一ID | 4 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_7703D2DD | AsCommand | As 指令 | 6 | 50 | string50 | 未知，保留原值 | 未登记表级业务证据 |
| hash_F8A892FC | CliffCreate | Cliff 创建 | 56 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_0B3BE609 | ErrorThroughCount | 错误 穿过 计数 | 57 | 1 | s8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_B92C3183 | EventFlowEntryName | 事件 流程 入口 名称 | 58 | 40 | string40 | 未知，保留原值 | 未登记表级业务证据 |
| hash_69B161C4 | Label | 标签 | 98 | 30 | string30 | 未知，保留原值 | 未登记表级业务证据 |
| hash_04034AA7 | Name | 名称 | 128 | 60 | string60 | 未知，保留原值 | 未登记表级业务证据 |

<!-- table-business-catalog -->

## 中文表名与业务用途

**中文表名：** 岛屿创作错误

**用途：** 按文件名与字段名称候选推测：用于配置或描述岛屿创作错误相关数据；具体消费逻辑待验证。

**证据等级：** 名称推测

## 数据文件

[原始 Hash CSV](../../../../research/bcsv-data/raw/FieldLandMakingError.csv) · [英文列名 CSV](../../../../research/bcsv-data/named/FieldLandMakingError.csv) · [候选类型解码 CSV](../../../../research/bcsv-data/decoded/tables/FieldLandMakingError.csv) · [结构 JSON](../../../../research/bcsv-data/schema/FieldLandMakingError.json)

## 实际原版数据样例

选择首行、中间行、末行（去重）；每格展示原始完整字段字节及候选类型解码，不把候选类型视为已确认。

| 字段 | 偏移 | 行 0（0 基） | 行 9（0 基） | 行 17（0 基） |
| --- | ---: | --- | --- | --- |
| `hash_54706054` 唯一ID | 4 | 7 / hex:0700 | 28 / hex:1c00 | 36 / hex:2400 |
| `hash_7703D2DD` As 指令 | 6 | "PlayerToolNG" / hex:506c61796572546f6f6c4e470000000000000000000000000000000000000000000000000000000000000000000000000000 | "PlayerToolNG" / hex:506c61796572546f6f6c4e470000000000000000000000000000000000000000000000000000000000000000000000000000 | "PlayerToolNG" / hex:506c61796572546f6f6c4e470000000000000000000000000000000000000000000000000000000000000000000000000000 |
| `hash_F8A892FC` Cliff 创建 | 56 | 0 / hex:00 | 0 / hex:00 | 0 / hex:00 |
| `hash_0B3BE609` 错误 穿过 计数 | 57 | 0 / hex:00 | 0 / hex:00 | 0 / hex:00 |
| `hash_B92C3183` 事件 流程 入口 名称 | 58 | "ErrorCliffMakeBreak_CliffExistOnItem" / hex:4572726f72436c6966664d616b65427265616b5f436c69666645786973744f6e4974656d00000000 | "ErrorRiverMake_ExistBackFaceFall" / hex:4572726f7252697665724d616b655f45786973744261636b4661636546616c6c0000000000000000 | "ErrorRiverMake_ExistVine" / hex:4572726f7252697665724d616b655f457869737456696e6500000000000000000000000000000000 |
| `hash_69B161C4` 标签 | 98 | "CliffExistOnItem" / hex:436c69666645786973744f6e4974656d0000000000000000000000000000 | "RiverExistBackFaceFall" / hex:526976657245786973744261636b4661636546616c6c0000000000000000 | "RiverExistVine" / hex:5269766572457869737456696e6500000000000000000000000000000000 |
| `hash_04034AA7` 名称 | 128 | "崖造成：崖上にアイテムがあります。" / hex:e5b496e980a0e68890efbc9ae5b496e4b88ae381abe382a2e382a4e38386e383a0e3818ce38182e3828ae381bee38199e38082000000000000000000 | "川造成：背面に滝があります。" / hex:e5b79de980a0e68890efbc9ae8838ce99da2e381abe6bb9de3818ce38182e3828ae381bee38199e38082000000000000000000000000000000000000 | "川造成：ツルを滝にしようとしました。" / hex:e5b79de980a0e68890efbc9ae38384e383abe38292e6bb9de381abe38197e38288e38186e381a8e38197e381bee38197e3819fe38082000000000000 |

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
