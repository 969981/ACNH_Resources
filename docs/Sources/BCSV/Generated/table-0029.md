# EventFlagsLandParam.bcsv

返回 [全量索引](README.md) · [统一字段字典](Field-Hashes.md) · [名称恢复证据](../Field-Names.md) · [残余字段证据](../../../../research/hash008h/residual_fields.json)。

原始路径：`e10617820db06889e1638499478da0de_NCA/1/Bcsv/EventFlagsLandParam.bcsv`
SHA256：`d279819dd7ce1dae0efbb3318223925fedc524a014ef3cd61f850abc20ba98b4`
状态：parsed

行数 513，行长 220，数据起点 108。

英文名称及类型为 CRC32 签名候选，不等同于原版明文；中文取自统一字典。跨度为物理字段间距，可能包含填充。业务证据仅采用当前表、当前偏移的已登记解释或残余字段记录；无证据不推断。

| Hash | 英文名称（CRC 候选） | 简体中文释义 | 偏移 | 跨度 | 数据类型（CRC 候选） | 当前解释 | 业务证据 |
| --- | --- | --- | ---: | ---: | --- | --- | --- |
| hash_FDB1F290 | AttrClearGlowUpTiming | 属性 清除 发光 上 时机 | 4 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_4C24F1CF | DefaultValue | 默认 数值 | 8 | 4 | u32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_FCA0ADB0 | FlagsFlowAccess | 标志 流程 访问 | 12 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_93F49EC4 | FlagsNetAccess | 标志 网络 访问 | 16 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_344B17D7 | MaxValue | 最大值 | 20 | 4 | u32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_54706054 | UniqueID | 唯一ID | 24 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_45F320F2 | Key | 键 | 26 | 64 | string64 | 未知，保留原值 | 未登记表级业务证据 |
| hash_85CF1615 | Name | 名称 | 90 | 128 | string128 | 未知，保留原值 | 未登记表级业务证据 |
| hash_E2BFF7F5 | SendPlayReport | Send 播放 Report | 218 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_8B8C8093 | SyncNoCheck | Sync 无 检查 | 219 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |

<!-- table-business-catalog -->

## 中文表名与业务用途

**中文表名：** 岛屿持久事件标志

**用途：** 按文件名与字段名称候选推测：用于配置或描述岛屿持久事件标志相关数据；具体消费逻辑待验证。

**证据等级：** 名称推测

## 数据文件

[原始 Hash CSV](../../../../research/bcsv-data/raw/EventFlagsLandParam.csv) · [英文列名 CSV](../../../../research/bcsv-data/named/EventFlagsLandParam.csv) · [候选类型解码 CSV](../../../../research/bcsv-data/decoded/tables/EventFlagsLandParam.csv) · [结构 JSON](../../../../research/bcsv-data/schema/EventFlagsLandParam.json)

## 实际原版数据样例

选择首行、中间行、末行（去重）；每格展示原始完整字段字节及候选类型解码，不把候选类型视为已确认。

| 字段 | 偏移 | 行 0（0 基） | 行 256（0 基） | 行 512（0 基） |
| --- | ---: | --- | --- | --- |
| `hash_FDB1F290` 属性 清除 发光 上 时机 | 4 | 0xB32C7901 / hex:01792cb3 | 0xDFA2AFF1 / hex:f1afa2df | 0xDFA2AFF1 / hex:f1afa2df |
| `hash_4C24F1CF` 默认 数值 | 8 | 0 / hex:00000000 | 0 / hex:00000000 | 0 / hex:00000000 |
| `hash_FCA0ADB0` 标志 流程 访问 | 12 | 0x86ECC0C7 / hex:c7c0ec86 | 0x1366494B / hex:4b496613 | 0x1366494B / hex:4b496613 |
| `hash_93F49EC4` 标志 网络 访问 | 16 | 0x651A0690 / hex:90061a65 | 0x651A0690 / hex:90061a65 | 0x651A0690 / hex:90061a65 |
| `hash_344B17D7` 最大值 | 20 | 1 / hex:01000000 | 5 / hex:05000000 | 1 / hex:01000000 |
| `hash_54706054` 唯一ID | 24 | 0 / hex:0000 | 294 / hex:2601 | 585 / hex:4902 |
| `hash_45F320F2` 键 | 26 | "TodayCreateVillage" / hex:546f64617943726561746556696c6c61676500000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 | "MuseumConstruction2" / hex:4d757365756d436f6e737472756374696f6e32000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 | "HotelShopOpen" / hex:486f74656c53686f704f70656e000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 |
| `hash_85CF1615` 名称 | 90 | "今日村作成されたか" / hex:e4bb8ae697a5e69d91e4bd9ce68890e38195e3828ce3819fe3818b0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 | "博物館1→2(美術部屋追加)への工事中" / hex:e58d9ae789a9e9a4a831e286923228e7be8ee8a193e983a8e5b18be8bfbde58aa029e381b8e381aee5b7a5e4ba8be4b8ad00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 | "ホテル \| 島の誰かがみやげやのチュートリアルをクリアしたか？" / hex:e3839be38386e383ab207c20e5b3b6e381aee8aab0e3818be3818ce381bfe38284e38192e38284e381aee38381e383a5e383bce38388e383aae382a2e383abe38292e382afe383aae382a2e38197e3819fe3818befbc9f0000000000000000000000000000000000000000000000000000000000000000000000000000000000 |
| `hash_E2BFF7F5` Send 播放 Report | 218 | 1 / hex:01 | 1 / hex:01 | 1 / hex:01 |
| `hash_8B8C8093` Sync 无 检查 | 219 | 0 / hex:00 | 0 / hex:00 | 0 / hex:00 |

## 枚举码值及实际分布

仅对 hshCstringRef 候选字段统计原版前 4 字节。已登记标签来自 decoded 枚举证据，逐值校验 CRC32 与原版出现次数；中文为研究译名，候选冲突不强行合并。每字段最多展示 12 个高频值，完整映射见下方 JSON。

### 属性 清除 发光 上 时机（hash_FDB1F290）

去重码值 4 个，已有标签候选 4 个。

| 原始码值 | 出现次数 | 英文候选 | 中文释义 | 证据 |
| --- | ---: | --- | --- | --- |
| 0xDFA2AFF1 | 407 | None | None | crc_candidate |
| 0xB32C7901 | 101 | Pre | Pre | crc_candidate |
| 0x30C04FCF | 4 | Plus | Plus | crc_candidate |
| 0x5EB87A8B | 1 | Start | 开始 | crc_candidate |

### 标志 流程 访问（hash_FCA0ADB0）

去重码值 3 个，已有标签候选 3 个。

| 原始码值 | 出现次数 | 英文候选 | 中文释义 | 证据 |
| --- | ---: | --- | --- | --- |
| 0x1366494B | 304 | EnableReadWrite | 启用 Read Write | crc_candidate |
| 0x020640CF | 124 | DisableAccess | 禁用 访问 | crc_candidate |
| 0x86ECC0C7 | 85 | EnableReadOnly | 启用 Read 仅 | crc_candidate |

### 标志 网络 访问（hash_93F49EC4）

去重码值 5 个，已有标签候选 5 个。

| 原始码值 | 出现次数 | 英文候选 | 中文释义 | 证据 |
| --- | ---: | --- | --- | --- |
| 0x651A0690 | 445 | ReadOnly | Read 仅 | crc_candidate |
| 0xA1ADB587 | 42 | SpNpcOnly | Sp NPC 仅 | crc_candidate |
| 0xFA408BED | 19 | HetHostOnly | Het Host 仅 | crc_candidate |
| 0x018830D8 | 5 | ManualSend | Manual Send | crc_candidate |
| 0x4B9718DF | 2 | NoCheck | 无 检查 | crc_candidate |

[完整码值与样例 JSON](../../../../research/bcsv-catalog/table-profiles.json) · [已有枚举证据 CSV](../../../../research/bcsv-data/decoded/enum-values.csv)

## 跨表关联

以下为原版 CRC32 标签值域统计候选，不是已确认的外键。

| 方向 | 来源字段 | 目标字段 | 对端表 | 匹配记录 | 去重匹配 |
| --- | --- | --- | --- | ---: | ---: |
| — | — | — | 尚无已登记候选 | — | — |

[完整关联候选](References.md) · [逐值匹配明细](../../../../research/bcsv-data/decoded/reference-values.csv)
