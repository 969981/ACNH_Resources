# RoomWindowParam.bcsv

返回 [全量索引](README.md) · [统一字段字典](Field-Hashes.md) · [名称恢复证据](../Field-Names.md) · [残余字段证据](../../../../research/hash008h/residual_fields.json)。

原始路径：`e10617820db06889e1638499478da0de_NCA/1/Bcsv/RoomWindowParam.bcsv`
SHA256：`ef317b41a1fb03df4ab46b63711394b33a0109ae74520fdbaf9871259321be03`
状态：parsed

行数 24，行长 144，数据起点 68。

英文名称及类型为 CRC32 签名候选，不等同于原版明文；中文取自统一字典。跨度为物理字段间距，可能包含填充。业务证据仅采用当前表、当前偏移的已登记解释或残余字段记录；无证据不推断。

| Hash | 英文名称（CRC 候选） | 简体中文释义 | 偏移 | 跨度 | 数据类型（CRC 候选） | 当前解释 | 业务证据 |
| --- | --- | --- | ---: | ---: | --- | --- | --- |
| hash_C90AB4C4 | RoomWindowModelType | 房间 窗户 模型 类型 | 4 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_CBC01F0D | RoomWindowWallType | 房间 窗户 墙壁 类型 | 8 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_54706054 | UniqueID | 唯一ID | 12 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_4B9C4229 | ResourceName | 资源 名称 | 14 | 64 | string64 | 未知，保留原值 | 未登记表级业务证据 |
| hash_9B0B7CE4 | WindowName | 窗户 名称 | 78 | 66 | string64 | 未知，保留原值 | 未登记表级业务证据 |

<!-- table-business-catalog -->

## 中文表名与业务用途

**中文表名：** 房间窗户参数

**用途：** 按文件名与字段名称候选推测：用于配置或描述房间窗户参数相关数据；具体消费逻辑待验证。

**证据等级：** 名称推测

## 数据文件

[原始 Hash CSV](../../../../research/bcsv-data/raw/RoomWindowParam.csv) · [英文列名 CSV](../../../../research/bcsv-data/named/RoomWindowParam.csv) · [候选类型解码 CSV](../../../../research/bcsv-data/decoded/tables/RoomWindowParam.csv) · [结构 JSON](../../../../research/bcsv-data/schema/RoomWindowParam.json)

## 实际原版数据样例

选择首行、中间行、末行（去重）；每格展示原始完整字段字节及候选类型解码，不把候选类型视为已确认。

| 字段 | 偏移 | 行 0（0 基） | 行 12（0 基） | 行 23（0 基） |
| --- | ---: | --- | --- | --- |
| `hash_C90AB4C4` 房间 窗户 模型 类型 | 4 | 0xDFA2AFF1 / hex:f1afa2df | 0x461B511B / hex:1b511b46 | 0x58208D74 / hex:748d2058 |
| `hash_CBC01F0D` 房间 窗户 墙壁 类型 | 8 | 0xDFA2AFF1 / hex:f1afa2df | 0xCA4F6D9F / hex:9f6d4fca | 0x58208D74 / hex:748d2058 |
| `hash_54706054` 唯一ID | 12 | 6 / hex:0600 | 29 / hex:1d00 | 40 / hex:2800 |
| `hash_4B9C4229` 资源 名称 | 14 | "" / hex:00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 | "RoomMdlWindowSquareWood01" / hex:526f6f6d4d646c57696e646f77537175617265576f6f643031000000000000000000000000000000000000000000000000000000000000000000000000000000 | "RoomMdlWindowArchSteel01" / hex:526f6f6d4d646c57696e646f7741726368537465656c303100000000000000000000000000000000000000000000000000000000000000000000000000000000 |
| `hash_9B0B7CE4` 窗户 名称 | 78 | "無し" / hex:e784a1e38197000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 | "口の字/木/こげ茶" / hex:e58fa3e381aee5ad972fe69ca82fe38193e38192e88cb600000000000000000000000000000000000000000000000000000000000000000000000000000000000000 | "アーチ/鉄/白" / hex:e382a2e383bce383812fe989842fe799bd00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 |

## 枚举码值及实际分布

仅对 hshCstringRef 候选字段统计原版前 4 字节。已登记标签来自 decoded 枚举证据，逐值校验 CRC32 与原版出现次数；中文为研究译名，候选冲突不强行合并。每字段最多展示 12 个高频值，完整映射见下方 JSON。

### 房间 窗户 模型 类型（hash_C90AB4C4）

去重码值 5 个，已有标签候选 5 个。

| 原始码值 | 出现次数 | 英文候选 | 中文释义 | 证据 |
| --- | ---: | --- | --- | --- |
| 0x461B511B | 14 | SquareCross | Square Cross | crc_candidate |
| 0x58208D74 | 3 | Arch | 拱门 | crc_candidate |
| 0xB7256DEE | 3 | SquareHang | Square Hang | crc_candidate |
| 0xD31B604F | 3 | Circle | Circle | crc_candidate |
| 0xDFA2AFF1 | 1 | None | None | crc_candidate |

### 房间 窗户 墙壁 类型（hash_CBC01F0D）

去重码值 4 个，已有标签候选 4 个。

| 原始码值 | 出现次数 | 英文候选 | 中文释义 | 证据 |
| --- | ---: | --- | --- | --- |
| 0xCA4F6D9F | 17 | Square | Square | crc_candidate |
| 0x58208D74 | 3 | Arch | 拱门 | crc_candidate |
| 0xD31B604F | 3 | Circle | Circle | crc_candidate |
| 0xDFA2AFF1 | 1 | None | None | crc_candidate |

[完整码值与样例 JSON](../../../../research/bcsv-catalog/table-profiles.json) · [已有枚举证据 CSV](../../../../research/bcsv-data/decoded/enum-values.csv)

## 跨表关联

以下为原版 CRC32 标签值域统计候选，不是已确认的外键。

| 方向 | 来源字段 | 目标字段 | 对端表 | 匹配记录 | 去重匹配 |
| --- | --- | --- | --- | ---: | ---: |
| — | — | — | 尚无已登记候选 | — | — |

[完整关联候选](References.md) · [逐值匹配明细](../../../../research/bcsv-data/decoded/reference-values.csv)
