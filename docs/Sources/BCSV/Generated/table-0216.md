# WherearenNpcFieldActionParam.bcsv

返回 [全量索引](README.md) · [统一字段字典](Field-Hashes.md) · [名称恢复证据](../Field-Names.md) · [残余字段证据](../../../../research/hash008h/residual_fields.json)。

原始路径：`e10617820db06889e1638499478da0de_NCA/1/Bcsv/WherearenNpcFieldActionParam.bcsv`
SHA256：`040ee63ab3c312b06fdbce7b3d4b6156d5606db7e848b99a475c16ec0f705c58`
状态：parsed

行数 81，行长 168，数据起点 148。

英文名称及类型为 CRC32 签名候选，不等同于原版明文；中文取自统一字典。跨度为物理字段间距，可能包含填充。业务证据仅采用当前表、当前偏移的已登记解释或残余字段记录；无证据不推断。

| Hash | 英文名称（CRC 候选） | 简体中文释义 | 偏移 | 跨度 | 数据类型（CRC 候选） | 当前解释 | 业务证据 |
| --- | --- | --- | ---: | ---: | --- | --- | --- |
| hash_21EEFAAC | FurniturePosAngle | 家具 位置 角度 | 4 | 4 | u32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_7E27475F | FurniturePosAngleSub1 | 家具 位置 角度 子 1 | 8 | 4 | u32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_39873D8F | FurniturePosAngleSub2 | 家具 位置 角度 子 2 | 12 | 4 | u32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_3E4510FA | EquipRule | 装备 规则 | 16 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_54706054 | UniqueID | 唯一ID | 18 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_E1EC58D6 | WherearenFieldActionTool | 度假岛 场景 动作 工具 | 20 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_02E7476B | ASCommand | AS 指令 | 22 | 65 | string65 | 未知，保留原值 | 未登记表级业务证据 |
| hash_3FDEEAB4 | ActionAngle | 动作 角度 | 87 | 2 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_767F28CB | ActionFlags | 动作 标志 | 89 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_B62DAC63 | Evening | 傍晚 | 90 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_F0B8307E | Label | 标签 | 91 | 33 | string33 | 未知，保留原值 | 未登记表级业务证据 |
| hash_D3E7208F | Morning | 早晨 | 124 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_F2667FB4 | Noon | 正午 | 125 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_A1B38BFD | PointList | 点 列表 | 126 | 8 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_62A2ABE9 | UnlockActionFlag | 解锁 动作 标志 | 134 | 34 | string33 | 未知，保留原值 | 未登记表级业务证据 |

<!-- table-business-catalog -->

## 中文表名与业务用途

**中文表名：** 度假群岛 NPC 场景动作

**用途：** 按文件名与字段名称候选推测：用于配置或描述度假群岛 NPC 场景动作相关数据；具体消费逻辑待验证。

**证据等级：** 名称推测

## 数据文件

[原始 Hash CSV](../../../../research/bcsv-data/raw/WherearenNpcFieldActionParam.csv) · [英文列名 CSV](../../../../research/bcsv-data/named/WherearenNpcFieldActionParam.csv) · [候选类型解码 CSV](../../../../research/bcsv-data/decoded/tables/WherearenNpcFieldActionParam.csv) · [结构 JSON](../../../../research/bcsv-data/schema/WherearenNpcFieldActionParam.json)

## 实际原版数据样例

选择首行、中间行、末行（去重）；每格展示原始完整字段字节及候选类型解码，不把候选类型视为已确认。

| 字段 | 偏移 | 行 0（0 基） | 行 40（0 基） | 行 80（0 基） |
| --- | ---: | --- | --- | --- |
| `hash_21EEFAAC` 家具 位置 角度 | 4 | 0 / hex:00000000 | 0 / hex:00000000 | 0 / hex:00000000 |
| `hash_7E27475F` 家具 位置 角度 子 1 | 8 | 0 / hex:00000000 | 0 / hex:00000000 | 0 / hex:00000000 |
| `hash_39873D8F` 家具 位置 角度 子 2 | 12 | 0 / hex:00000000 | 0 / hex:00000000 | 0 / hex:00000000 |
| `hash_3E4510FA` 装备 规则 | 16 | 2 / hex:0200 | 7 / hex:0700 | 2 / hex:0200 |
| `hash_54706054` 唯一ID | 18 | 0 / hex:0000 | 47 / hex:2f00 | 100 / hex:6400 |
| `hash_E1EC58D6` 度假岛 场景 动作 工具 | 20 | 14639 / hex:2f39 | 65534 / hex:feff | 5319 / hex:c714 |
| `hash_02E7476B` AS 指令 | 22 | "NpcBookExist" / hex:4e7063426f6f6b45786973740000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 | "NpcHula" / hex:4e706348756c6100000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 | "NpcFan" / hex:4e706346616e0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 |
| `hash_3FDEEAB4` 动作 角度 | 87 | 0 / hex:0000 | 64 / hex:4000 | 32 / hex:2000 |
| `hash_767F28CB` 动作 标志 | 89 | 8 / hex:08 | 68 / hex:44 | 0 / hex:00 |
| `hash_B62DAC63` 傍晚 | 90 | 1 / hex:01 | 1 / hex:01 | 1 / hex:01 |
| `hash_F0B8307E` 标签 | 91 | "Read_S" / hex:526561645f53000000000000000000000000000000000000000000000000000000 | "Hula_SW" / hex:48756c615f53570000000000000000000000000000000000000000000000000000 | "FanStand_SE" / hex:46616e5374616e645f534500000000000000000000000000000000000000000000 |
| `hash_D3E7208F` 早晨 | 124 | 1 / hex:01 | 1 / hex:01 | 1 / hex:01 |
| `hash_F2667FB4` 正午 | 125 | 1 / hex:01 | 1 / hex:01 | 1 / hex:01 |
| `hash_A1B38BFD` 点 列表 | 126 | 11 / hex:0b00000000000000 | raw:0000000002008003 / hex:0000000002008003 | 112 / hex:7000000000000000 |
| `hash_62A2ABE9` 解锁 动作 标志 | 134 | "Unlock_NPC_00" / hex:556e6c6f636b5f4e50435f3030000000000000000000000000000000000000000000 | "Unlock_NPC_00" / hex:556e6c6f636b5f4e50435f3030000000000000000000000000000000000000000000 | "Unlock_NPC_00" / hex:556e6c6f636b5f4e50435f3030000000000000000000000000000000000000000000 |

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
