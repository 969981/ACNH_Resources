# CharaMakeSkinColorParam.bcsv

返回 [全量索引](README.md) · [统一字段字典](Field-Hashes.md) · [名称恢复证据](../Field-Names.md) · [残余字段证据](../../../../research/hash008h/residual_fields.json)。

原始路径：`e10617820db06889e1638499478da0de_NCA/1/Bcsv/CharaMakeSkinColorParam.bcsv`
SHA256：`61507f77ab17822e5d6c1ce5b683ec18b5bedf4e005fda9e8abe5ff37d30283a`
状态：parsed

行数 12，行长 120，数据起点 148。

英文名称及类型为 CRC32 签名候选，不等同于原版明文；中文取自统一字典。跨度为物理字段间距，可能包含填充。业务证据仅采用当前表、当前偏移的已登记解释或残余字段记录；无证据不推断。

| Hash | 英文名称（CRC 候选） | 简体中文释义 | 偏移 | 跨度 | 数据类型（CRC 候选） | 当前解释 | 业务证据 |
| --- | --- | --- | ---: | ---: | --- | --- | --- |
| hash_C25CDC73 | CheekOrangeColorB | 脸颊 橙色 颜色 B | 4 | 4 | f32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_0ABC5303 | CheekOrangeColorG | 脸颊 橙色 颜色 G | 8 | 4 | f32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_A2BC4BF1 | CheekOrangeColorR | 脸颊 橙色 颜色 R | 12 | 4 | f32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_384E882C | CheekPinkColorB | 脸颊 粉色 颜色 B | 16 | 4 | f32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_F0AE075C | CheekPinkColorG | 脸颊 粉色 颜色 G | 20 | 4 | f32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_58AE1FAE | CheekPinkColorR | 脸颊 粉色 颜色 R | 24 | 4 | f32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_2DAE0AA4 | SkinBaseColorB | 皮肤 基础 颜色 B | 28 | 4 | f32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_E54E85D4 | SkinBaseColorG | 皮肤 基础 颜色 G | 32 | 4 | f32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_4D4E9D26 | SkinBaseColorR | 皮肤 基础 颜色 R | 36 | 4 | f32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_5A52C5F4 | SkinEdgeColorB | 皮肤 边缘 颜色 B | 40 | 4 | f32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_92B24A84 | SkinEdgeColorG | 皮肤 边缘 颜色 G | 44 | 4 | f32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_3AB25276 | SkinEdgeColorR | 皮肤 边缘 颜色 R | 48 | 4 | f32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_54706054 | UniqueID | 唯一ID | 52 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_87BF00E8 | Label | 标签 | 54 | 32 | string32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_977ADFCE | Name | 名称 | 86 | 34 | string32 | 未知，保留原值 | 未登记表级业务证据 |

<!-- table-business-catalog -->

## 中文表名与业务用途

**中文表名：** 角色创建肤色

**用途：** 按文件名与字段名称候选推测：用于配置或描述角色创建肤色相关数据；具体消费逻辑待验证。

**证据等级：** 名称推测

## 数据文件

[原始 Hash CSV](../../../../research/bcsv-data/raw/CharaMakeSkinColorParam.csv) · [英文列名 CSV](../../../../research/bcsv-data/named/CharaMakeSkinColorParam.csv) · [候选类型解码 CSV](../../../../research/bcsv-data/decoded/tables/CharaMakeSkinColorParam.csv) · [结构 JSON](../../../../research/bcsv-data/schema/CharaMakeSkinColorParam.json)

## 实际原版数据样例

选择首行、中间行、末行（去重）；每格展示原始完整字段字节及候选类型解码，不把候选类型视为已确认。

| 字段 | 偏移 | 行 0（0 基） | 行 6（0 基） | 行 11（0 基） |
| --- | ---: | --- | --- | --- |
| `hash_C25CDC73` 脸颊 橙色 颜色 B | 4 | 0.6800000071525574 / hex:7b142e3f | 0.550000011920929 / hex:cdcc0c3f | 0.699999988079071 / hex:3333333f |
| `hash_0ABC5303` 脸颊 橙色 颜色 G | 8 | 0.800000011920929 / hex:cdcc4c3f | 0.699999988079071 / hex:3333333f | 0.800000011920929 / hex:cdcc4c3f |
| `hash_A2BC4BF1` 脸颊 橙色 颜色 R | 12 | 1.0 / hex:0000803f | 1.0 / hex:0000803f | 1.0 / hex:0000803f |
| `hash_384E882C` 脸颊 粉色 颜色 B | 16 | 0.8399999737739563 / hex:3d0a573f | 0.7400000095367432 / hex:a4703d3f | 0.8399999737739563 / hex:3d0a573f |
| `hash_F0AE075C` 脸颊 粉色 颜色 G | 20 | 0.8199999928474426 / hex:85eb513f | 0.699999988079071 / hex:3333333f | 0.8199999928474426 / hex:85eb513f |
| `hash_58AE1FAE` 脸颊 粉色 颜色 R | 24 | 1.0 / hex:0000803f | 0.8999999761581421 / hex:6666663f | 1.0 / hex:0000803f |
| `hash_2DAE0AA4` 皮肤 基础 颜色 B | 28 | 0.33000001311302185 / hex:c3f5a83e | 0.019999999552965164 / hex:0ad7a33c | 0.75 / hex:0000403f |
| `hash_E54E85D4` 皮肤 基础 颜色 G | 32 | 0.5199999809265137 / hex:b81e053f | 0.09000000357627869 / hex:ec51b83d | 0.18000000715255737 / hex:ec51383e |
| `hash_4D4E9D26` 皮肤 基础 颜色 R | 36 | 0.9399999976158142 / hex:d7a3703f | 0.23000000417232513 / hex:1f856b3e | 0.23000000417232513 / hex:1f856b3e |
| `hash_5A52C5F4` 皮肤 边缘 颜色 B | 40 | 0.09000000357627869 / hex:ec51b83d | 0.029999999329447746 / hex:8fc2f53c | 0.029999999329447746 / hex:8fc2f53c |
| `hash_92B24A84` 皮肤 边缘 颜色 G | 44 | 0.0 / hex:00000000 | 0.01600000075995922 / hex:6f12833c | 0.01600000075995922 / hex:6f12833c |
| `hash_3AB25276` 皮肤 边缘 颜色 R | 48 | 0.699999988079071 / hex:3333333f | 0.10999999940395355 / hex:ae47e13d | 0.10999999940395355 / hex:ae47e13d |
| `hash_54706054` 唯一ID | 52 | 0 / hex:0000 | 6 / hex:0600 | 11 / hex:0b00 |
| `hash_87BF00E8` 标签 | 54 | "SkinColor0" / hex:536b696e436f6c6f723000000000000000000000000000000000000000000000 | "SkinColor6" / hex:536b696e436f6c6f723600000000000000000000000000000000000000000000 | "SkinColor11" / hex:536b696e436f6c6f723131000000000000000000000000000000000000000000 |
| `hash_977ADFCE` 名称 | 86 | "SkinColor0" / hex:536b696e436f6c6f7230000000000000000000000000000000000000000000000000 | "SkinColor6" / hex:536b696e436f6c6f7236000000000000000000000000000000000000000000000000 | "SkinColor11" / hex:536b696e436f6c6f7231310000000000000000000000000000000000000000000000 |

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
