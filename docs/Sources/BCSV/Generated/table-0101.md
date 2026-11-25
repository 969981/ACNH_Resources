# ItemStrSort.bcsv

返回 [全量索引](README.md) · [统一字段字典](Field-Hashes.md) · [名称恢复证据](../Field-Names.md) · [残余字段证据](../../../../research/hash008h/residual_fields.json)。

原始路径：`e10617820db06889e1638499478da0de_NCA/1/Bcsv/ItemStrSort.bcsv`
SHA256：`60b2d8dd2dea9d310340b48fac4f67f401f9a467b48a65250f2cbadd4aaa0093`
状态：parsed

行数 11178，行长 36，数据起点 148。

英文名称及类型为 CRC32 签名候选，不等同于原版明文；中文取自统一字典。跨度为物理字段间距，可能包含填充。业务证据仅采用当前表、当前偏移的已登记解释或残余字段记录；无证据不推断。

| Hash | 英文名称（CRC 候选） | 简体中文释义 | 偏移 | 跨度 | 数据类型（CRC 候选） | 当前解释 | 业务证据 |
| --- | --- | --- | ---: | ---: | --- | --- | --- |
| hash_A99EAF49 | StrSortIdCNzh | 字符串 排序 ID C Nzh | 4 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_CB64C9A0 | StrSortIdEUde | 字符串 排序 ID E Ude | 6 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_77E82B14 | StrSortIdEUen | 字符串 排序 ID E Uen | 8 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_EF987827 | StrSortIdEUes | 字符串 排序 ID E Ues | 10 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_546C2339 | StrSortIdEUfr | 字符串 排序 ID E Ufr | 12 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_2A7A644C | StrSortIdEUit | 字符串 排序 ID E Uit | 14 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_67EF88B7 | StrSortIdEUnl | 字符串 排序 ID E Unl | 16 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_7E0BBFA4 | StrSortIdEUru | 字符串 排序 ID E Uru | 18 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_8FF6331B | StrSortIdJPja | 字符串 排序 ID J Pja | 20 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_A0AF4F68 | StrSortIdKRko | 字符串 排序 ID K Rko | 22 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_2DA64E66 | StrSortIdTWzh | 字符串 排序 ID T Wzh | 24 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_68832F05 | StrSortIdUSen | 字符串 排序 ID U Sen | 26 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_F0F37C36 | StrSortIdUSes | 字符串 排序 ID U Ses | 28 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_4B072728 | StrSortIdUSfr | 字符串 排序 ID U Sfr | 30 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_54706054 | UniqueID | 唯一ID | 32 | 4 | u16 | 未知，保留原值 | 未登记表级业务证据 |

<!-- table-business-catalog -->

## 中文表名与业务用途

**中文表名：** 道具字符串排序

**用途：** 按文件名与字段名称候选推测：用于配置或描述道具字符串排序相关数据；具体消费逻辑待验证。

**证据等级：** 名称推测

## 数据文件

[原始 Hash CSV](../../../../research/bcsv-data/raw/ItemStrSort.csv) · [英文列名 CSV](../../../../research/bcsv-data/named/ItemStrSort.csv) · [候选类型解码 CSV](../../../../research/bcsv-data/decoded/tables/ItemStrSort.csv) · [结构 JSON](../../../../research/bcsv-data/schema/ItemStrSort.json)

## 实际原版数据样例

选择首行、中间行、末行（去重）；每格展示原始完整字段字节及候选类型解码，不把候选类型视为已确认。

| 字段 | 偏移 | 行 0（0 基） | 行 5589（0 基） | 行 11177（0 基） |
| --- | ---: | --- | --- | --- |
| `hash_A99EAF49` 字符串 排序 ID C Nzh | 4 | 27850 / hex:ca6c | 23757 / hex:cd5c | 24956 / hex:7c61 |
| `hash_CB64C9A0` 字符串 排序 ID E Ude | 6 | 30054 / hex:6675 | 27751 / hex:676c | 23637 / hex:555c |
| `hash_77E82B14` 字符串 排序 ID E Uen | 8 | 24117 / hex:355e | 27211 / hex:4b6a | 6973 / hex:3d1b |
| `hash_EF987827` 字符串 排序 ID E Ues | 10 | 9259 / hex:2b24 | 28497 / hex:516f | 19126 / hex:b64a |
| `hash_546C2339` 字符串 排序 ID E Ufr | 12 | 30187 / hex:eb75 | 7592 / hex:a81d | 29923 / hex:e374 |
| `hash_2A7A644C` 字符串 排序 ID E Uit | 14 | 23471 / hex:af5b | 4073 / hex:e90f | 29134 / hex:ce71 |
| `hash_67EF88B7` 字符串 排序 ID E Unl | 16 | 29337 / hex:9972 | 27091 / hex:d369 | 5398 / hex:1615 |
| `hash_7E0BBFA4` 字符串 排序 ID E Uru | 18 | 7628 / hex:cc1d | 25669 / hex:4564 | 11739 / hex:db2d |
| `hash_8FF6331B` 字符串 排序 ID J Pja | 20 | 23908 / hex:645d | 14435 / hex:6338 | 3152 / hex:500c |
| `hash_A0AF4F68` 字符串 排序 ID K Rko | 22 | 7525 / hex:651d | 23465 / hex:a95b | 19064 / hex:784a |
| `hash_2DA64E66` 字符串 排序 ID T Wzh | 24 | 27294 / hex:9e6a | 11649 / hex:812d | 25767 / hex:a764 |
| `hash_68832F05` 字符串 排序 ID U Sen | 26 | 23729 / hex:b15c | 26855 / hex:e768 | 6822 / hex:a61a |
| `hash_F0F37C36` 字符串 排序 ID U Ses | 28 | 9090 / hex:8223 | 28687 / hex:0f70 | 18777 / hex:5949 |
| `hash_4B072728` 字符串 排序 ID U Sfr | 30 | 29839 / hex:8f74 | 4416 / hex:4011 | 29607 / hex:a773 |
| `hash_54706054` 唯一ID | 32 | 2 / hex:02000000 | 8374 / hex:b6200000 | 14986 / hex:8a3a0000 |

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
