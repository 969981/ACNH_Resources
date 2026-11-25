# LocalizeNameConvertParam.bcsv

返回 [全量索引](README.md) · [统一字段字典](Field-Hashes.md) · [名称恢复证据](../Field-Names.md) · [残余字段证据](../../../../research/hash008h/residual_fields.json)。

原始路径：`e10617820db06889e1638499478da0de_NCA/1/Bcsv/LocalizeNameConvertParam.bcsv`
SHA256：`be2dc9a1387deea7fe847891d0aa679aa19f8782922deb961040435a96435e1e`
状态：parsed

行数 22，行长 56，数据起点 180。

英文名称及类型为 CRC32 签名候选，不等同于原版明文；中文取自统一字典。跨度为物理字段间距，可能包含填充。业务证据仅采用当前表、当前偏移的已登记解释或残余字段记录；无证据不推断。

| Hash | 英文名称（CRC 候选） | 简体中文释义 | 偏移 | 跨度 | 数据类型（CRC 候选） | 当前解释 | 业务证据 |
| --- | --- | --- | ---: | ---: | --- | --- | --- |
| hash_54706054 | UniqueID | 唯一ID | 4 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_50EDD045 | BaseName | 基础 名称 | 6 | 32 | string32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_D22A8FC9 | CNzh | 简体中文（CNzh） | 38 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_F551B995 | EUde | 欧洲德语（EUde） | 39 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_1F301724 | EUen | 欧洲英语（EUen） | 40 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_BD439866 | EUes | 欧洲西班牙语（EUes） | 41 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_425F85D3 | EUfr | 欧洲法语（EUfr） | 42 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_E5644DDE | EUit | 欧洲意大利语（EUit） | 43 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_C2E9EEBE | EUnl | 欧洲荷兰语（EUnl） | 44 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_4AE88C28 | EUru | 欧洲俄语（EUru） | 45 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_638671F9 | JPja | 日语（JPja） | 46 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_558685C5 | KRko | 韩语（KRko） | 47 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_C70BE94F | LocalizeAnim | 本地化 动画 | 48 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_9FF07C89 | LocalizeModel | 本地化 模型 | 49 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_086F5F3A | LocalizeTexture | 本地化 纹理 | 50 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_548A7EDA | TWzh | 繁体中文（TWzh） | 51 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_AEB768F7 | USen | 美洲英语（USen） | 52 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_0CC4E7B5 | USes | 美洲西班牙语（USes） | 53 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_F3D8FA00 | USfr | 美洲法语（USfr） | 54 | 2 | u8 | 未知，保留原值 | 未登记表级业务证据 |

<!-- table-business-catalog -->

## 中文表名与业务用途

**中文表名：** 本地化名称转换

**用途：** 按文件名与字段名称候选推测：用于配置或描述本地化名称转换相关数据；具体消费逻辑待验证。

**证据等级：** 名称推测

## 数据文件

[原始 Hash CSV](../../../../research/bcsv-data/raw/LocalizeNameConvertParam.csv) · [英文列名 CSV](../../../../research/bcsv-data/named/LocalizeNameConvertParam.csv) · [候选类型解码 CSV](../../../../research/bcsv-data/decoded/tables/LocalizeNameConvertParam.csv) · [结构 JSON](../../../../research/bcsv-data/schema/LocalizeNameConvertParam.json)

## 实际原版数据样例

选择首行、中间行、末行（去重）；每格展示原始完整字段字节及候选类型解码，不把候选类型视为已确认。

| 字段 | 偏移 | 行 0（0 基） | 行 11（0 基） | 行 21（0 基） |
| --- | ---: | --- | --- | --- |
| `hash_54706054` 唯一ID | 4 | 0 / hex:0000 | 19 / hex:1300 | 29 / hex:1d00 |
| `hash_50EDD045` 基础 名称 | 6 | "EvtobjCountdownBoard" / hex:4576746f626a436f756e74646f776e426f617264000000000000000000000000 | "StrcTailorA00Reserve" / hex:537472635461696c6f7241303052657365727665000000000000000000000000 | "StrcHotelA00Build" / hex:53747263486f74656c4130304275696c64000000000000000000000000000000 |
| `hash_D22A8FC9` 简体中文（CNzh） | 38 | 14 / hex:0e | 1 / hex:01 | 1 / hex:01 |
| `hash_F551B995` 欧洲德语（EUde） | 39 | 8 / hex:08 | 1 / hex:01 | 1 / hex:01 |
| `hash_1F301724` 欧洲英语（EUen） | 40 | 1 / hex:01 | 1 / hex:01 | 1 / hex:01 |
| `hash_BD439866` 欧洲西班牙语（EUes） | 41 | 2 / hex:02 | 1 / hex:01 | 1 / hex:01 |
| `hash_425F85D3` 欧洲法语（EUfr） | 42 | 7 / hex:07 | 1 / hex:01 | 1 / hex:01 |
| `hash_E5644DDE` 欧洲意大利语（EUit） | 43 | 9 / hex:09 | 1 / hex:01 | 1 / hex:01 |
| `hash_C2E9EEBE` 欧洲荷兰语（EUnl） | 44 | 11 / hex:0b | 1 / hex:01 | 1 / hex:01 |
| `hash_4AE88C28` 欧洲俄语（EUru） | 45 | 12 / hex:0c | 1 / hex:01 | 1 / hex:01 |
| `hash_638671F9` 日语（JPja） | 46 | 0 / hex:00 | 0 / hex:00 | 0 / hex:00 |
| `hash_558685C5` 韩语（KRko） | 47 | 13 / hex:0d | 1 / hex:01 | 1 / hex:01 |
| `hash_C70BE94F` 本地化 动画 | 48 | 1 / hex:01 | 0 / hex:00 | 0 / hex:00 |
| `hash_9FF07C89` 本地化 模型 | 49 | 0 / hex:00 | 0 / hex:00 | 0 / hex:00 |
| `hash_086F5F3A` 本地化 纹理 | 50 | 1 / hex:01 | 1 / hex:01 | 1 / hex:01 |
| `hash_548A7EDA` 繁体中文（TWzh） | 51 | 15 / hex:0f | 1 / hex:01 | 1 / hex:01 |
| `hash_AEB768F7` 美洲英语（USen） | 52 | 1 / hex:01 | 1 / hex:01 | 1 / hex:01 |
| `hash_0CC4E7B5` 美洲西班牙语（USes） | 53 | 2 / hex:02 | 1 / hex:01 | 1 / hex:01 |
| `hash_F3D8FA00` 美洲法语（USfr） | 54 | 3 / hex:0300 | 1 / hex:0100 | 1 / hex:0100 |

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
