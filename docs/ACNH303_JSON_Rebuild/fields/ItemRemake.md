---
title: ACNH 3.0.3 · ItemRemake 原版全字段表
tags: [ACNH, 3.0.3, BCSV, CRC32, ItemRemake]
status: hashed-field-audit
---
# ItemRemake.bcsv｜1,306 行 × 58 字段

1,306 条改造配置：改造记录 ID、所属物品 ID、主体/布料款式、颜色与改造工具包数量。

- 原版：`e10617820db06889e1638499478da0de_NCA/1/Bcsv/ItemRemake.bcsv`
- 本仓库解码：`UnPack/1/Bcsv/ItemRemake.csv`
- 结构元数据：`UnPack/1/Bcsv/ItemRemake.json`
- 单行字节数：**120**；已识别字段名 **53**，未确认 **5**。
- **重要**：width_hint 是相邻列偏移差，**不代表**解码器从原版解析出了准确数据类型。下表类型仅对通过 CRC32('名称 类型') 的匹配给出；未知列保持哈希。

| # | 原版列哈希 | 行内偏移 | 宽度提示 | 名称/对应含义 | 类型候选 | 证据级别 | 中文说明 |
|---:|---|---:|---:|---|---|---|---|
| 1 | `hash_35917E05` | 4 | 4 | 未确认 | 未确认 | unknown | 3.0.3 原生哈希列；缺少可确认的字段名及语义；保留原始值和原始字节 |
| 2 | `hash_C54EAAD9` | 8 | 4 | 未确认 | 未确认 | unknown | 3.0.3 原生哈希列；缺少可确认的字段名及语义；保留原始值和原始字节 |
| 3 | `hash_924C8D08` | 12 | 4 | RebodyPattern1LightColor | u32 | crc32_match_historical_1_6 | 改造样式灯光颜色候选值（具体编码待验） |
| 4 | `hash_8331E771` | 16 | 4 | RebodyPattern2LightColor | u32 | crc32_match_historical_1_6 | 改造样式灯光颜色候选值（具体编码待验） |
| 5 | `hash_3ACA3C99` | 20 | 4 | RebodyPattern3LightColor | u32 | crc32_match_historical_1_6 | 改造样式灯光颜色候选值（具体编码待验） |
| 6 | `hash_A1CB3383` | 24 | 4 | RebodyPattern4LightColor | u32 | crc32_match_historical_1_6 | 改造样式灯光颜色候选值（具体编码待验） |
| 7 | `hash_1830E86B` | 28 | 4 | RebodyPattern5LightColor | u32 | crc32_match_historical_1_6 | 改造样式灯光颜色候选值（具体编码待验） |
| 8 | `hash_094D8212` | 32 | 4 | RebodyPattern6LightColor | u32 | crc32_match_historical_1_6 | 改造样式灯光颜色候选值（具体编码待验） |
| 9 | `hash_B0B659FA` | 36 | 4 | RebodyPattern7LightColor | u32 | crc32_match_historical_1_6 | 改造样式灯光颜色候选值（具体编码待验） |
| 10 | `hash_9938D8A6` | 40 | 4 | RefabricPattern0LightColor | u32 | crc32_match_historical_1_6 | 改造样式灯光颜色候选值（具体编码待验） |
| 11 | `hash_20C3034E` | 44 | 4 | RefabricPattern1LightColor | u32 | crc32_match_historical_1_6 | 改造样式灯光颜色候选值（具体编码待验） |
| 12 | `hash_31BE6937` | 48 | 4 | RefabricPattern2LightColor | u32 | crc32_match_historical_1_6 | 改造样式灯光颜色候选值（具体编码待验） |
| 13 | `hash_8845B2DF` | 52 | 4 | RefabricPattern3LightColor | u32 | crc32_match_historical_1_6 | 改造样式灯光颜色候选值（具体编码待验） |
| 14 | `hash_1344BDC5` | 56 | 4 | RefabricPattern4LightColor | u32 | crc32_match_historical_1_6 | 改造样式灯光颜色候选值（具体编码待验） |
| 15 | `hash_AABF662D` | 60 | 4 | RefabricPattern5LightColor | u32 | crc32_match_historical_1_6 | 改造样式灯光颜色候选值（具体编码待验） |
| 16 | `hash_BBC20C54` | 64 | 4 | RefabricPattern6LightColor | u32 | crc32_match_historical_1_6 | 改造样式灯光颜色候选值（具体编码待验） |
| 17 | `hash_0239D7BC` | 68 | 4 | RefabricPattern7LightColor | u32 | crc32_match_historical_1_6 | 改造样式灯光颜色候选值（具体编码待验） |
| 18 | `hash_A86C26BB` | 72 | 4 | 未确认 | 未确认 | unknown | 3.0.3 原生哈希列；缺少可确认的字段名及语义；保留原始值和原始字节 |
| 19 | `hash_FD9AF1E1` | 76 | 2 | ItemUniqueID | u16 | repo_or_crc_verified | 改造所属物品 ID，关联 ItemParam.UniqueID |
| 20 | `hash_29ECB129` | 78 | 2 | RemakeKitNum | u16 | repo_or_crc_verified | 消耗改造工具包数量 |
| 21 | `hash_54706054` | 80 | 2 | UniqueID | u16 | repo_or_crc_verified | 表内记录唯一编号；不要跨表混用 |
| 22 | `hash_D4F43B0B` | 82 | 1 | 未确认 | 未确认 | unknown | 3.0.3 原生哈希列；缺少可确认的字段名及语义；保留原始值和原始字节 |
| 23 | `hash_1B98FDF8` | 83 | 1 | ReBodyPattern0Color0 | u8 | crc32_match_historical_1_6 | 改造主体款式与颜色槽位，数字为索引（编码待验） |
| 24 | `hash_A3249A9D` | 84 | 1 | ReBodyPattern0Color1 | u8 | crc32_match_historical_1_6 | 改造主体款式与颜色槽位，数字为索引（编码待验） |
| 25 | `hash_F45A96C6` | 85 | 1 | ReBodyPattern1Color0 | u8 | crc32_match_historical_1_6 | 改造主体款式与颜色槽位，数字为索引（编码待验） |
| 26 | `hash_4CE6F1A3` | 86 | 1 | ReBodyPattern1Color1 | u8 | crc32_match_historical_1_6 | 改造主体款式与颜色槽位，数字为索引（编码待验） |
| 27 | `hash_1F6D2DC5` | 87 | 1 | ReBodyPattern2Color0 | u8 | crc32_match_historical_1_6 | 改造主体款式与颜色槽位，数字为索引（编码待验） |
| 28 | `hash_A7D14AA0` | 88 | 1 | ReBodyPattern2Color1 | u8 | crc32_match_historical_1_6 | 改造主体款式与颜色槽位，数字为索引（编码待验） |
| 29 | `hash_F0AF46FB` | 89 | 1 | ReBodyPattern3Color0 | u8 | crc32_match_historical_1_6 | 改造主体款式与颜色槽位，数字为索引（编码待验） |
| 30 | `hash_4813219E` | 90 | 1 | ReBodyPattern3Color1 | u8 | crc32_match_historical_1_6 | 改造主体款式与颜色槽位，数字为索引（编码待验） |
| 31 | `hash_12735D82` | 91 | 1 | ReBodyPattern4Color0 | u8 | crc32_match_historical_1_6 | 改造主体款式与颜色槽位，数字为索引（编码待验） |
| 32 | `hash_AACF3AE7` | 92 | 1 | ReBodyPattern4Color1 | u8 | crc32_match_historical_1_6 | 改造主体款式与颜色槽位，数字为索引（编码待验） |
| 33 | `hash_FDB136BC` | 93 | 1 | ReBodyPattern5Color0 | u8 | crc32_match_historical_1_6 | 改造主体款式与颜色槽位，数字为索引（编码待验） |
| 34 | `hash_450D51D9` | 94 | 1 | ReBodyPattern5Color1 | u8 | crc32_match_historical_1_6 | 改造主体款式与颜色槽位，数字为索引（编码待验） |
| 35 | `hash_16868DBF` | 95 | 1 | ReBodyPattern6Color0 | u8 | crc32_match_historical_1_6 | 改造主体款式与颜色槽位，数字为索引（编码待验） |
| 36 | `hash_AE3AEADA` | 96 | 1 | ReBodyPattern6Color1 | u8 | crc32_match_historical_1_6 | 改造主体款式与颜色槽位，数字为索引（编码待验） |
| 37 | `hash_F944E681` | 97 | 1 | ReBodyPattern7Color0 | u8 | crc32_match_historical_1_6 | 改造主体款式与颜色槽位，数字为索引（编码待验） |
| 38 | `hash_41F881E4` | 98 | 1 | ReBodyPattern7Color1 | u8 | crc32_match_historical_1_6 | 改造主体款式与颜色槽位，数字为索引（编码待验） |
| 39 | `hash_B0304B0D` | 99 | 1 | ReBodyPatternNum | s8 | crc32_match_historical_1_6 | 主体样式数量（编码含特殊值，须验） |
| 40 | `hash_E0563503` | 100 | 1 | 未确认 | 未确认 | unknown | 3.0.3 原生哈希列；缺少可确认的字段名及语义；保留原始值和原始字节 |
| 41 | `hash_545F8769` | 101 | 1 | ReFabricPattern0Color0 | u8 | crc32_match_historical_1_6 | 改造布料款式与颜色槽位，数字为索引（编码待验） |
| 42 | `hash_ECE3E00C` | 102 | 1 | ReFabricPattern0Color1 | u8 | crc32_match_historical_1_6 | 改造布料款式与颜色槽位，数字为索引（编码待验） |
| 43 | `hash_62C23ED0` | 103 | 1 | ReFabricPattern0VisibleOff | u8 | crc32_match_historical_1_6 | 布料样式 0 的可见性关闭标记（候选） |
| 44 | `hash_BB9DEC57` | 104 | 1 | ReFabricPattern1Color0 | u8 | crc32_match_historical_1_6 | 改造布料款式与颜色槽位，数字为索引（编码待验） |
| 45 | `hash_03218B32` | 105 | 1 | ReFabricPattern1Color1 | u8 | crc32_match_historical_1_6 | 改造布料款式与颜色槽位，数字为索引（编码待验） |
| 46 | `hash_50AA5754` | 106 | 1 | ReFabricPattern2Color0 | u8 | crc32_match_historical_1_6 | 改造布料款式与颜色槽位，数字为索引（编码待验） |
| 47 | `hash_E8163031` | 107 | 1 | ReFabricPattern2Color1 | u8 | crc32_match_historical_1_6 | 改造布料款式与颜色槽位，数字为索引（编码待验） |
| 48 | `hash_BF683C6A` | 108 | 1 | ReFabricPattern3Color0 | u8 | crc32_match_historical_1_6 | 改造布料款式与颜色槽位，数字为索引（编码待验） |
| 49 | `hash_07D45B0F` | 109 | 1 | ReFabricPattern3Color1 | u8 | crc32_match_historical_1_6 | 改造布料款式与颜色槽位，数字为索引（编码待验） |
| 50 | `hash_5DB42713` | 110 | 1 | ReFabricPattern4Color0 | u8 | crc32_match_historical_1_6 | 改造布料款式与颜色槽位，数字为索引（编码待验） |
| 51 | `hash_E5084076` | 111 | 1 | ReFabricPattern4Color1 | u8 | crc32_match_historical_1_6 | 改造布料款式与颜色槽位，数字为索引（编码待验） |
| 52 | `hash_B2764C2D` | 112 | 1 | ReFabricPattern5Color0 | u8 | crc32_match_historical_1_6 | 改造布料款式与颜色槽位，数字为索引（编码待验） |
| 53 | `hash_0ACA2B48` | 113 | 1 | ReFabricPattern5Color1 | u8 | crc32_match_historical_1_6 | 改造布料款式与颜色槽位，数字为索引（编码待验） |
| 54 | `hash_5941F72E` | 114 | 1 | ReFabricPattern6Color0 | u8 | crc32_match_historical_1_6 | 改造布料款式与颜色槽位，数字为索引（编码待验） |
| 55 | `hash_E1FD904B` | 115 | 1 | ReFabricPattern6Color1 | u8 | crc32_match_historical_1_6 | 改造布料款式与颜色槽位，数字为索引（编码待验） |
| 56 | `hash_B6839C10` | 116 | 1 | ReFabricPattern7Color0 | u8 | crc32_match_historical_1_6 | 改造布料款式与颜色槽位，数字为索引（编码待验） |
| 57 | `hash_0E3FFB75` | 117 | 1 | ReFabricPattern7Color1 | u8 | crc32_match_historical_1_6 | 改造布料款式与颜色槽位，数字为索引（编码待验） |
| 58 | `hash_0CB402A3` | 118 | 2 | ReFabricPatternNum | s8 | crc32_match_historical_1_6 | 布料样式数量（编码含特殊值，须验） |

## 证据说明
- `repo_or_crc_verified`：仓库现有 R74/R77/R82/R84 脚本已应用、且与字段名类型 CRC32 校验相符；**不代表所有运行时行为都验证**。
- `crc32_match_historical_1_6`：字段名字和类型取自 1.6.0 历史参考表，并且对 3.0.3 的列哈希进行 CRC32 反校验一致，属于 **3.0.3 哈希存在的实测证据**；枚举含义、计量单位、用途仍待原生值/调用者复核。
- `repo_observed`：仓库以指定哈希提取该语义，但历史字段名称、类型签名还不能完整验证；保留证据边界。
- `unknown`：目前没有可信名称/类型，不要凭常见命名、相邻位置或数据巧合推断业务意义。
- 参考：[原仓库 JSON 字段结构](https://github.com/969981/ACNH_Resources/tree/3.0.3_Unpack/UnPack/1/Bcsv)；[历史 1.6.0 BCSV 表](https://wuffs.org/acnh/bcsv_160/html/)；[仓库解析脚本](https://github.com/969981/ACNH_Resources/blob/3.0.3_Unpack/Scripts/acnh_formats.py)。历史版本只提供名称参考，不可直接当作 3.0.3 原版全部值。

返回：[[ACNH303_JSON_Rebuild/docs/08-字段数据字典总览|字段字典总览]]
