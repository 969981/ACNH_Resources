# RoomWallParam.bcsv

返回 [全量索引](README.md) · [统一字段字典](Field-Hashes.md) · [名称恢复证据](../Field-Names.md) · [残余字段证据](../../../../research/hash008h/residual_fields.json)。

原始路径：`e10617820db06889e1638499478da0de_NCA/1/Bcsv/RoomWallParam.bcsv`
SHA256：`5f750bdb3ce81d058cb4140b2277c46aa5c2886c29fa2428f03348bab600e373`
状态：parsed

行数 313，行长 164，数据起点 148。

英文名称及类型为 CRC32 签名候选，不等同于原版明文；中文取自统一字典。跨度为物理字段间距，可能包含填充。业务证据仅采用当前表、当前偏移的已登记解释或残余字段记录；无证据不推断。

| Hash | 英文名称（CRC 候选） | 简体中文释义 | 偏移 | 跨度 | 数据类型（CRC 候选） | 当前解释 | 业务证据 |
| --- | --- | --- | ---: | ---: | --- | --- | --- |
| hash_8A377042 | AO | AO 参数（缩写含义待验证） | 4 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_F74F3D2C | Act | 动作 | 8 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_85ED8743 | Light | 光照 | 12 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_718B024D | Price | 价格 | 16 | 4 | s32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_499E42F9 | ArchUniqueID | 拱门 唯一 ID | 20 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_947875DD | CeilingUniqueID | Ceiling 唯一 ID | 22 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_AA9BFC6E | CurtainTexUniqueID | 窗帘 纹理 唯一 ID | 24 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_A0E569DC | CurtainUniqueID | 窗帘 唯一 ID | 26 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_58AFF4FB | ItemTableId | 道具 表 ID | 28 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_54706054 | UniqueID | 唯一ID | 30 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_E3A28616 | WindowUniqueID | 窗户 唯一 ID | 32 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_B8CC232C | ItemName | 道具 名称 | 34 | 64 | string64 | 未知，保留原值 | 未登记表级业务证据 |
| hash_4B9C4229 | ResourceName | 资源 名称 | 98 | 64 | string64 | 未知，保留原值 | 未登记表级业务证据 |
| hash_292F5520 | SpKabe | Sp 墙 | 162 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_318EBBF2 | TextureWindow | 纹理 窗户 | 163 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |

<!-- table-business-catalog -->

## 中文表名与业务用途

**中文表名：** 房间墙壁参数

**用途：** 按文件名与字段名称候选推测：用于配置或描述房间墙壁参数相关数据；具体消费逻辑待验证。

**证据等级：** 名称推测

## 数据文件

[原始 Hash CSV](../../../../research/bcsv-data/raw/RoomWallParam.csv) · [英文列名 CSV](../../../../research/bcsv-data/named/RoomWallParam.csv) · [候选类型解码 CSV](../../../../research/bcsv-data/decoded/tables/RoomWallParam.csv) · [结构 JSON](../../../../research/bcsv-data/schema/RoomWallParam.json)

## 实际原版数据样例

选择首行、中间行、末行（去重）；每格展示原始完整字段字节及候选类型解码，不把候选类型视为已确认。

| 字段 | 偏移 | 行 0（0 基） | 行 156（0 基） | 行 312（0 基） |
| --- | ---: | --- | --- | --- |
| `hash_8A377042` AO 参数（缩写含义待验证） | 4 | 0x0E46935A / hex:5a93460e | 0x0E46935A / hex:5a93460e | 0xDFA2AFF1 / hex:f1afa2df |
| `hash_F74F3D2C` 动作 | 8 | 0xDFA2AFF1 / hex:f1afa2df | 0xDFA2AFF1 / hex:f1afa2df | 0xDFA2AFF1 / hex:f1afa2df |
| `hash_85ED8743` 光照 | 12 | 0x1A69B44E / hex:4eb4691a | 0x1A69B44E / hex:4eb4691a | 0x830EE2A0 / hex:a0e20e83 |
| `hash_718B024D` 价格 | 16 | 888 / hex:78030000 | 888 / hex:78030000 | 888 / hex:78030000 |
| `hash_499E42F9` 拱门 唯一 ID | 20 | 5 / hex:0500 | 0 / hex:0000 | 9 / hex:0900 |
| `hash_947875DD` Ceiling 唯一 ID | 22 | 0 / hex:0000 | 3 / hex:0300 | 8 / hex:0800 |
| `hash_AA9BFC6E` 窗帘 纹理 唯一 ID | 24 | 4 / hex:0400 | 23 / hex:1700 | 23 / hex:1700 |
| `hash_A0E569DC` 窗帘 唯一 ID | 26 | 7 / hex:0700 | 6 / hex:0600 | 6 / hex:0600 |
| `hash_58AFF4FB` 道具 表 ID | 28 | 4795 / hex:bb12 | 5228 / hex:6c14 | 1292 / hex:0c05 |
| `hash_54706054` 唯一ID | 30 | 0 / hex:0000 | 207 / hex:cf00 | 400 / hex:9001 |
| `hash_E3A28616` 窗户 唯一 ID | 32 | 8 / hex:0800 | 6 / hex:0600 | 6 / hex:0600 |
| `hash_B8CC232C` 道具 名称 | 34 | "よくあるかべ" / hex:e38288e3818fe38182e3828be3818be381b900000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 | "いせきのかべ" / hex:e38184e3819be3818de381aee3818be381b900000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 | "LEGOのかべ・シック" / hex:4c45474fee89a5e381aee3818be381b9e383bbe382b7e38383e382af000000000000000000000000000000000000000000000000000000000000000000000000 |
| `hash_4B9C4229` 资源 名称 | 98 | "RoomTexWallCommon00" / hex:526f6f6d54657857616c6c436f6d6d6f6e3030000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 | "RoomTexWallRemains00" / hex:526f6f6d54657857616c6c52656d61696e7330300000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 | "RoomTexWallLego03" / hex:526f6f6d54657857616c6c4c65676f30330000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 |
| `hash_292F5520` Sp 墙 | 162 | 0 / hex:00 | 0 / hex:00 | 0 / hex:00 |
| `hash_318EBBF2` 纹理 窗户 | 163 | 0 / hex:00 | 0 / hex:00 | 0 / hex:00 |

## 枚举码值及实际分布

仅对 hshCstringRef 候选字段统计原版前 4 字节。已登记标签来自 decoded 枚举证据，逐值校验 CRC32 与原版出现次数；中文为研究译名，候选冲突不强行合并。每字段最多展示 12 个高频值，完整映射见下方 JSON。

### AO 参数（缩写含义待验证）（hash_8A377042）

去重码值 2 个，已有标签候选 2 个。

| 原始码值 | 出现次数 | 英文候选 | 中文释义 | 证据 |
| --- | ---: | --- | --- | --- |
| 0x0E46935A | 250 | UseAO | 使用 AO | crc_candidate |
| 0xDFA2AFF1 | 63 | None | None | crc_candidate |

### 动作（hash_F74F3D2C）

去重码值 4 个，已有标签候选 4 个。

| 原始码值 | 出现次数 | 英文候选 | 中文释义 | 证据 |
| --- | ---: | --- | --- | --- |
| 0xDFA2AFF1 | 274 | None | None | crc_candidate |
| 0x2A2D1CB9 | 26 | Synchro | 同步 | crc_candidate |
| 0x1197DFE3 | 10 | Random | 随机 | crc_candidate |
| 0xB160F7E9 | 3 | LightOff | 光照 关闭 | crc_candidate |

### 光照（hash_85ED8743）

去重码值 2 个，已有标签候选 2 个。

| 原始码值 | 出现次数 | 英文候选 | 中文释义 | 证据 |
| --- | ---: | --- | --- | --- |
| 0x1A69B44E | 258 | Orange | 橙色 | crc_candidate |
| 0x830EE2A0 | 55 | White | White | crc_candidate |

[完整码值与样例 JSON](../../../../research/bcsv-catalog/table-profiles.json) · [已有枚举证据 CSV](../../../../research/bcsv-data/decoded/enum-values.csv)

## 跨表关联

以下为原版 CRC32 标签值域统计候选，不是已确认的外键。

| 方向 | 来源字段 | 目标字段 | 对端表 | 匹配记录 | 去重匹配 |
| --- | --- | --- | --- | ---: | ---: |
| — | — | — | 尚无已登记候选 | — | — |

[完整关联候选](References.md) · [逐值匹配明细](../../../../research/bcsv-data/decoded/reference-values.csv)
