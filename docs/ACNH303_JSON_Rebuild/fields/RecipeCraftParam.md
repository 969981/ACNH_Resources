---
title: ACNH 3.0.3 · RecipeCraftParam 原版全字段表
tags: [ACNH, 3.0.3, BCSV, CRC32, RecipeCraftParam]
status: hashed-field-audit
---
# RecipeCraftParam.bcsv｜924 行 × 28 字段

924 条 DIY 配方：唯一 recipe ID、成品 Item ID、最多六组材料 ID/数量及解锁配置。

- 原版：`e10617820db06889e1638499478da0de_NCA/1/Bcsv/RecipeCraftParam.bcsv`
- 本仓库解码：`UnPack/1/Bcsv/RecipeCraftParam.csv`
- 结构元数据：`UnPack/1/Bcsv/RecipeCraftParam.json`
- 单行字节数：**140**；已识别字段名 **18**，未确认 **10**。
- **重要**：width_hint 是相邻列偏移差，**不代表**解码器从原版解析出了准确数据类型。下表类型仅对通过 CRC32('名称 类型') 的匹配给出；未知列保持哈希。

| # | 原版列哈希 | 行内偏移 | 宽度提示 | 名称/对应含义 | 类型候选 | 证据级别 | 中文说明 |
|---:|---|---:|---:|---|---|---|---|
| 1 | `hash_5F405BFB` | 4 | 4 | BoardColorID | u32 | crc32_match_historical_1_6 | DIY 工作台/配方板颜色 ID（候选） |
| 2 | `hash_7F5B6179` | 8 | 4 | 未确认 | 未确认 | unknown | 3.0.3 原生哈希列；缺少可确认的字段名及语义；保留原始值和原始字节 |
| 3 | `hash_478B74E4` | 12 | 4 | 未确认 | 未确认 | unknown | 3.0.3 原生哈希列；缺少可确认的字段名及语义；保留原始值和原始字节 |
| 4 | `hash_34A742AD` | 16 | 4 | 未确认 | 未确认 | unknown | 3.0.3 原生哈希列；缺少可确认的字段名及语义；保留原始值和原始字节 |
| 5 | `hash_CDE5164F` | 20 | 4 | 未确认 | 未确认 | unknown | 3.0.3 原生哈希列；缺少可确认的字段名及语义；保留原始值和原始字节 |
| 6 | `hash_FFE9B35B` | 24 | 4 | 未确认 | 未确认 | unknown | 3.0.3 原生哈希列；缺少可确认的字段名及语义；保留原始值和原始字节 |
| 7 | `hash_10FC6F17` | 28 | 4 | 未确认 | 未确认 | unknown | 3.0.3 原生哈希列；缺少可确认的字段名及语义；保留原始值和原始字节 |
| 8 | `hash_9C4EFA45` | 32 | 4 | 未确认 | 未确认 | unknown | 3.0.3 原生哈希列；缺少可确认的字段名及语义；保留原始值和原始字节 |
| 9 | `hash_3711677B` | 36 | 4 | VillagerOpenNum | u32 | crc32_match_historical_1_6 | 解锁关联的村民人数阈值字段（候选） |
| 10 | `hash_13A65775` | 40 | 2 | Amount1 | u16 | crc32_match_historical_1_6 | 第 1 种材料所需数量 |
| 11 | `hash_54062DA5` | 42 | 2 | Amount2 | u16 | crc32_match_historical_1_6 | 第 2 种材料所需数量 |
| 12 | `hash_69660415` | 44 | 2 | Amount3 | u16 | crc32_match_historical_1_6 | 第 3 种材料所需数量 |
| 13 | `hash_DB46D805` | 46 | 2 | Amount4 | u16 | crc32_match_historical_1_6 | 第 4 种材料所需数量 |
| 14 | `hash_E626F1B5` | 48 | 2 | Amount5 | u16 | crc32_match_historical_1_6 | 第 5 种材料所需数量 |
| 15 | `hash_A1868B65` | 50 | 2 | Amount6 | u16 | crc32_match_historical_1_6 | 第 6 种材料所需数量 |
| 16 | `hash_89A3482C` | 52 | 2 | Item | u16 | crc32_match_historical_1_6 | DIY 配方成品物品 ID（u16） |
| 17 | `hash_1BBFA75E` | 54 | 2 | Material1 | u16 | crc32_match_historical_1_6 | 第 1 种材料物品 ID |
| 18 | `hash_5C1FDD8E` | 56 | 2 | Material2 | u16 | crc32_match_historical_1_6 | 第 2 种材料物品 ID |
| 19 | `hash_617FF43E` | 58 | 2 | Material3 | u16 | crc32_match_historical_1_6 | 第 3 种材料物品 ID |
| 20 | `hash_D35F282E` | 60 | 2 | Material4 | u16 | crc32_match_historical_1_6 | 第 4 种材料物品 ID |
| 21 | `hash_EE3F019E` | 62 | 2 | Material5 | u16 | crc32_match_historical_1_6 | 第 5 种材料物品 ID |
| 22 | `hash_A99F7B4E` | 64 | 2 | Material6 | u16 | crc32_match_historical_1_6 | 第 6 种材料物品 ID |
| 23 | `hash_39DEDE36` | 66 | 2 | SerialID | s16 | crc32_match_historical_1_6 | 配方序号/排序相关 ID（候选） |
| 24 | `hash_54706054` | 68 | 2 | UniqueID | u16 | repo_or_crc_verified | 表内记录唯一编号；不要跨表混用 |
| 25 | `hash_3CCCA419` | 70 | 1 | 未确认 | 未确认 | unknown | 3.0.3 原生哈希列；缺少可确认的字段名及语义；保留原始值和原始字节 |
| 26 | `hash_EFA5DDA4` | 71 | 1 | 未确认 | 未确认 | unknown | 3.0.3 原生哈希列；缺少可确认的字段名及语义；保留原始值和原始字节 |
| 27 | `hash_33DDEFC8` | 72 | 64 | SelectCalendarEventSeason | string64 | crc32_match_historical_1_6 | 历史字段名已由 CRC32 反校验；精确游戏业务语义未验证 |
| 28 | `hash_AD0C787A` | 136 | 4 | 未确认 | 未确认 | unknown | 3.0.3 原生哈希列；缺少可确认的字段名及语义；保留原始值和原始字节 |

## 证据说明
- `repo_or_crc_verified`：仓库现有 R74/R77/R82/R84 脚本已应用、且与字段名类型 CRC32 校验相符；**不代表所有运行时行为都验证**。
- `crc32_match_historical_1_6`：字段名字和类型取自 1.6.0 历史参考表，并且对 3.0.3 的列哈希进行 CRC32 反校验一致，属于 **3.0.3 哈希存在的实测证据**；枚举含义、计量单位、用途仍待原生值/调用者复核。
- `repo_observed`：仓库以指定哈希提取该语义，但历史字段名称、类型签名还不能完整验证；保留证据边界。
- `unknown`：目前没有可信名称/类型，不要凭常见命名、相邻位置或数据巧合推断业务意义。
- 参考：[原仓库 JSON 字段结构](https://github.com/969981/ACNH_Resources/tree/3.0.3_Unpack/UnPack/1/Bcsv)；[历史 1.6.0 BCSV 表](https://wuffs.org/acnh/bcsv_160/html/)；[仓库解析脚本](https://github.com/969981/ACNH_Resources/blob/3.0.3_Unpack/Scripts/acnh_formats.py)。历史版本只提供名称参考，不可直接当作 3.0.3 原版全部值。

返回：[[ACNH303_JSON_Rebuild/docs/08-字段数据字典总览|字段字典总览]]
