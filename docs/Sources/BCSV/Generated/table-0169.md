# ShopItemRouteFlags.bcsv

返回 [全量索引](README.md) · [统一字段字典](Field-Hashes.md) · [名称恢复证据](../Field-Names.md) · [残余字段证据](../../../../research/hash008h/residual_fields.json)。

原始路径：`e10617820db06889e1638499478da0de_NCA/1/Bcsv/ShopItemRouteFlags.bcsv`
SHA256：`303d46955ec67f97b4391fa1447d58bac953f5fcf57001940336ae8d64b21f05`
状态：parsed

行数 41，行长 52，数据起点 68。

英文名称及类型为 CRC32 签名候选，不等同于原版明文；中文取自统一字典。跨度为物理字段间距，可能包含填充。业务证据仅采用当前表、当前偏移的已登记解释或残余字段记录；无证据不推断。

| Hash | 英文名称（CRC 候选） | 简体中文释义 | 偏移 | 跨度 | 数据类型（CRC 候选） | 当前解释 | 业务证据 |
| --- | --- | --- | ---: | ---: | --- | --- | --- |
| hash_3FE43170 | FlagLand | 标志 土地 | 4 | 4 | s32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_4171A41D | FlagPlayer | 标志 玩家 | 8 | 4 | s32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_D3D4284E | ShopType | 商店 类型 | 12 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_74B2EB78 | AttrCollectBit | 属性 收集 位 | 16 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_46E66708 | ItemFrom | 道具 来自 | 17 | 35 | string32 | 未知，保留原值 | 未登记表级业务证据 |

<!-- table-business-catalog -->

## 中文表名与业务用途

**中文表名：** 商店商品流通标志

**用途：** 按文件名与字段名称候选推测：用于配置或描述商店商品流通标志相关数据；具体消费逻辑待验证。

**证据等级：** 名称推测

## 数据文件

[原始 Hash CSV](../../../../research/bcsv-data/raw/ShopItemRouteFlags.csv) · [英文列名 CSV](../../../../research/bcsv-data/named/ShopItemRouteFlags.csv) · [候选类型解码 CSV](../../../../research/bcsv-data/decoded/tables/ShopItemRouteFlags.csv) · [结构 JSON](../../../../research/bcsv-data/schema/ShopItemRouteFlags.json)

## 实际原版数据样例

选择首行、中间行、末行（去重）；每格展示原始完整字段字节及候选类型解码，不把候选类型视为已确认。

| 字段 | 偏移 | 行 0（0 基） | 行 20（0 基） | 行 40（0 基） |
| --- | ---: | --- | --- | --- |
| `hash_3FE43170` 标志 土地 | 4 | 268 / hex:0c010000 | -1 / hex:ffffffff | -1 / hex:ffffffff |
| `hash_4171A41D` 标志 玩家 | 8 | -1 / hex:ffffffff | 1174 / hex:96040000 | 1917 / hex:7d070000 |
| `hash_D3D4284E` 商店 类型 | 12 | 0x0C58E39C / hex:9ce3580c | 0x2AAF279B / hex:9b27af2a | 0x0C58E39C / hex:9ce3580c |
| `hash_74B2EB78` 属性 收集 位 | 16 | 0 / hex:00 | 1 / hex:01 | 0 / hex:00 |
| `hash_46E66708` 道具 来自 | 17 | "Shop_EnableAxe" / hex:53686f705f456e61626c65417865000000000000000000000000000000000000000000 | "MileExchangeMydesignPro2" / hex:4d696c6545786368616e67654d7964657369676e50726f320000000000000000000000 | "Shop_EnableMegaphone" / hex:53686f705f456e61626c654d65676170686f6e65000000000000000000000000000000 |

## 枚举码值及实际分布

仅对 hshCstringRef 候选字段统计原版前 4 字节。已登记标签来自 decoded 枚举证据，逐值校验 CRC32 与原版出现次数；中文为研究译名，候选冲突不强行合并。每字段最多展示 12 个高频值，完整映射见下方 JSON。

### 商店 类型（hash_D3D4284E）

去重码值 2 个，已有标签候选 2 个。

| 原始码值 | 出现次数 | 英文候选 | 中文释义 | 证据 |
| --- | ---: | --- | --- | --- |
| 0x2AAF279B | 21 | Label1 | 标签 1 | crc_candidate |
| 0x0C58E39C | 20 | Shop | 商店 | crc_candidate |

[完整码值与样例 JSON](../../../../research/bcsv-catalog/table-profiles.json) · [已有枚举证据 CSV](../../../../research/bcsv-data/decoded/enum-values.csv)

## 跨表关联

以下为原版 CRC32 标签值域统计候选，不是已确认的外键。

| 方向 | 来源字段 | 目标字段 | 对端表 | 匹配记录 | 去重匹配 |
| --- | --- | --- | --- | ---: | ---: |
| — | — | — | 尚无已登记候选 | — | — |

[完整关联候选](References.md) · [逐值匹配明细](../../../../research/bcsv-data/decoded/reference-values.csv)
