# RoomFloorParam.bcsv

返回 [全量索引](README.md) · [统一字段字典](Field-Hashes.md) · [名称恢复证据](../Field-Names.md) · [残余字段证据](../../../../research/hash008h/residual_fields.json)。

原始路径：`e10617820db06889e1638499478da0de_NCA/1/Bcsv/RoomFloorParam.bcsv`
SHA256：`0988e5550fb7b77caf26113169e28546a05c432a3b54c6c780e49cb6b7573a8a`
状态：parsed

行数 216，行长 160，数据起点 140。

英文名称及类型为 CRC32 签名候选，不等同于原版明文；中文取自统一字典。跨度为物理字段间距，可能包含填充。业务证据仅采用当前表、当前偏移的已登记解释或残余字段记录；无证据不推断。

| Hash | 英文名称（CRC 候选） | 简体中文释义 | 偏移 | 跨度 | 数据类型（CRC 候选） | 当前解释 | 业务证据 |
| --- | --- | --- | ---: | ---: | --- | --- | --- |
| hash_F74F3D2C | Act | 动作 | 4 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_718B024D | Price | 价格 | 8 | 4 | s32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_49295020 | Scale | 缩放 | 12 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_B117EB21 | Scale10x6 | 缩放 10 x 6 | 16 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_AB771EAE | Floorboards | 地板板材 | 20 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_58AFF4FB | ItemTableId | 道具 表 ID | 22 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_8FCED711 | LandingUniqueID | 着陆 唯一 ID | 24 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_54706054 | UniqueID | 唯一ID | 26 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_A4DB9685 | HasJmp | 具有 Jmp | 28 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_3543C34A | Horizon | 地平线 | 29 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_B8CC232C | ItemName | 道具 名称 | 30 | 64 | string64 | 未知，保留原值 | 未登记表级业务证据 |
| hash_4B9C4229 | ResourceName | 资源 名称 | 94 | 64 | string64 | 未知，保留原值 | 未登记表级业务证据 |
| hash_8ED948DD | Rotatable | 可旋转 | 158 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_CEE3B224 | SpAllType | Sp All 类型 | 159 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |

<!-- table-business-catalog -->

## 中文表名与业务用途

**中文表名：** 房间地板参数

**用途：** 按文件名与字段名称候选推测：用于配置或描述房间地板参数相关数据；具体消费逻辑待验证。

**证据等级：** 名称推测

## 数据文件

[原始 Hash CSV](../../../../research/bcsv-data/raw/RoomFloorParam.csv) · [英文列名 CSV](../../../../research/bcsv-data/named/RoomFloorParam.csv) · [候选类型解码 CSV](../../../../research/bcsv-data/decoded/tables/RoomFloorParam.csv) · [结构 JSON](../../../../research/bcsv-data/schema/RoomFloorParam.json)

## 实际原版数据样例

选择首行、中间行、末行（去重）；每格展示原始完整字段字节及候选类型解码，不把候选类型视为已确认。

| 字段 | 偏移 | 行 0（0 基） | 行 108（0 基） | 行 215（0 基） |
| --- | ---: | --- | --- | --- |
| `hash_F74F3D2C` 动作 | 4 | 0xDFA2AFF1 / hex:f1afa2df | 0xDFA2AFF1 / hex:f1afa2df | 0xDFA2AFF1 / hex:f1afa2df |
| `hash_718B024D` 价格 | 8 | 888 / hex:78030000 | 888 / hex:78030000 | 888 / hex:78030000 |
| `hash_49295020` 缩放 | 12 | 0xDFA2AFF1 / hex:f1afa2df | 0xDFA2AFF1 / hex:f1afa2df | 0xDFA2AFF1 / hex:f1afa2df |
| `hash_B117EB21` 缩放 10 x 6 | 16 | 0xDFA2AFF1 / hex:f1afa2df | 0xDFA2AFF1 / hex:f1afa2df | 0xDFA2AFF1 / hex:f1afa2df |
| `hash_AB771EAE` 地板板材 | 20 | 3 / hex:0300 | 17 / hex:1100 | 18 / hex:1200 |
| `hash_58AFF4FB` 道具 表 ID | 22 | 4797 / hex:bd12 | 4993 / hex:8113 | 1296 / hex:1005 |
| `hash_8FCED711` 着陆 唯一 ID | 24 | 1 / hex:0100 | 0 / hex:0000 | 0 / hex:0000 |
| `hash_54706054` 唯一ID | 26 | 0 / hex:0000 | 142 / hex:8e00 | 291 / hex:2301 |
| `hash_A4DB9685` 具有 Jmp | 28 | 0 / hex:00 | 0 / hex:00 | 0 / hex:00 |
| `hash_3543C34A` 地平线 | 29 | 0 / hex:00 | 0 / hex:00 | 0 / hex:00 |
| `hash_B8CC232C` 道具 名称 | 30 | "ちかしつのゆか" / hex:e381a1e3818be38197e381a4e381aee38286e3818b00000000000000000000000000000000000000000000000000000000000000000000000000000000000000 | "フローラルなモザイクタイル" / hex:e38395e383ade383bce383a9e383abe381aae383a2e382b6e382a4e382afe382bfe382a4e383ab00000000000000000000000000000000000000000000000000 | "LEGOのゆか・シック" / hex:4c45474fee89a5e381aee38286e3818be383bbe382b7e38383e382af000000000000000000000000000000000000000000000000000000000000000000000000 |
| `hash_4B9C4229` 资源 名称 | 94 | "RoomTexFloorBasement00" / hex:526f6f6d546578466c6f6f72426173656d656e743030000000000000000000000000000000000000000000000000000000000000000000000000000000000000 | "RoomTexFloorMosaicTile00" / hex:526f6f6d546578466c6f6f724d6f7361696354696c65303000000000000000000000000000000000000000000000000000000000000000000000000000000000 | "RoomTexFloorLego03" / hex:526f6f6d546578466c6f6f724c65676f303300000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 |
| `hash_8ED948DD` 可旋转 | 158 | 0 / hex:00 | 0 / hex:00 | 0 / hex:00 |
| `hash_CEE3B224` Sp All 类型 | 159 | 0 / hex:00 | 0 / hex:00 | 0 / hex:00 |

## 枚举码值及实际分布

仅对 hshCstringRef 候选字段统计原版前 4 字节。已登记标签来自 decoded 枚举证据，逐值校验 CRC32 与原版出现次数；中文为研究译名，候选冲突不强行合并。每字段最多展示 12 个高频值，完整映射见下方 JSON。

### 动作（hash_F74F3D2C）

去重码值 2 个，已有标签候选 2 个。

| 原始码值 | 出现次数 | 英文候选 | 中文释义 | 证据 |
| --- | ---: | --- | --- | --- |
| 0xDFA2AFF1 | 215 | None | None | crc_candidate |
| 0x2A2D1CB9 | 1 | Synchro | 同步 | crc_candidate |

### 缩放（hash_49295020）

去重码值 2 个，已有标签候选 2 个。

| 原始码值 | 出现次数 | 英文候选 | 中文释义 | 证据 |
| --- | ---: | --- | --- | --- |
| 0xDFA2AFF1 | 193 | None | None | crc_candidate |
| 0x2D870A80 | 23 | Scale | 缩放 | crc_candidate |

### 缩放 10 x 6（hash_B117EB21）

去重码值 2 个，已有标签候选 2 个。

| 原始码值 | 出现次数 | 英文候选 | 中文释义 | 证据 |
| --- | ---: | --- | --- | --- |
| 0xDFA2AFF1 | 204 | None | None | crc_candidate |
| 0x2D870A80 | 12 | Scale | 缩放 | crc_candidate |

[完整码值与样例 JSON](../../../../research/bcsv-catalog/table-profiles.json) · [已有枚举证据 CSV](../../../../research/bcsv-data/decoded/enum-values.csv)

## 跨表关联

以下为原版 CRC32 标签值域统计候选，不是已确认的外键。

| 方向 | 来源字段 | 目标字段 | 对端表 | 匹配记录 | 去重匹配 |
| --- | --- | --- | --- | ---: | ---: |
| — | — | — | 尚无已登记候选 | — | — |

[完整关联候选](References.md) · [逐值匹配明细](../../../../research/bcsv-data/decoded/reference-values.csv)
