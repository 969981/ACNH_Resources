---
title: ACNH 3.0.3 · NmlNpcParam 原版全字段表
tags: [ACNH, 3.0.3, BCSV, CRC32, NmlNpcParam]
status: hashed-field-audit
---
# NmlNpcParam.bcsv｜417 行 × 41 字段

417 个普通村民：出生日期、初始衣物、照片/海报、资源名和 NPC 类型等字段。

- 原版：`e10617820db06889e1638499478da0de_NCA/1/Bcsv/NmlNpcParam.bcsv`
- 本仓库解码：`UnPack/1/Bcsv/NmlNpcParam.csv`
- 结构元数据：`UnPack/1/Bcsv/NmlNpcParam.json`
- 单行字节数：**288**；已识别字段名 **26**，未确认 **15**。
- **重要**：width_hint 是相邻列偏移差，**不代表**解码器从原版解析出了准确数据类型。下表类型仅对通过 CRC32('名称 类型') 的匹配给出；未知列保持哈希。

| # | 原版列哈希 | 行内偏移 | 宽度提示 | 名称/对应含义 | 类型候选 | 证据级别 | 中文说明 |
|---:|---|---:|---:|---|---|---|---|
| 1 | `hash_A54F92FD` | 4 | 4 | 未确认 | 未确认 | unknown | 3.0.3 原生哈希列；缺少可确认的字段名及语义；保留原始值和原始字节 |
| 2 | `hash_E2EFE82D` | 8 | 4 | 未确认 | 未确认 | unknown | 3.0.3 原生哈希列；缺少可确认的字段名及语义；保留原始值和原始字节 |
| 3 | `hash_5EF86F1F` | 12 | 4 | 未确认 | 未确认 | unknown | 3.0.3 原生哈希列；缺少可确认的字段名及语义；保留原始值和原始字节 |
| 4 | `hash_195815CF` | 16 | 4 | 未确认 | 未确认 | unknown | 3.0.3 原生哈希列；缺少可确认的字段名及语义；保留原始值和原始字节 |
| 5 | `hash_BEA84522` | 20 | 4 | 未确认 | 未确认 | unknown | 3.0.3 原生哈希列；缺少可确认的字段名及语义；保留原始值和原始字节 |
| 6 | `hash_9EEA1288` | 24 | 4 | 未确认 | 未确认 | unknown | 3.0.3 原生哈希列；缺少可确认的字段名及语义；保留原始值和原始字节 |
| 7 | `hash_04F52F6A` | 28 | 4 | 未确认 | 未确认 | unknown | 3.0.3 原生哈希列；缺少可确认的字段名及语义；保留原始值和原始字节 |
| 8 | `hash_1C57897D` | 32 | 4 | 未确认 | 未确认 | unknown | 3.0.3 原生哈希列；缺少可确认的字段名及语义；保留原始值和原始字节 |
| 9 | `hash_AA4403EA` | 36 | 4 | 未确认 | 未确认 | unknown | 3.0.3 原生哈希列；缺少可确认的字段名及语义；保留原始值和原始字节 |
| 10 | `hash_0E7AB6A6` | 40 | 4 | 未确认 | 未确认 | unknown | 3.0.3 原生哈希列；缺少可确认的字段名及语义；保留原始值和原始字节 |
| 11 | `hash_DD2D2ADC` | 44 | 4 | 未确认 | 未确认 | unknown | 3.0.3 原生哈希列；缺少可确认的字段名及语义；保留原始值和原始字节 |
| 12 | `hash_08238405` | 48 | 2 | AccentWall | u16 | crc32_match_historical_1_6 | 历史字段名已由 CRC32 反校验；精确游戏业务语义未验证 |
| 13 | `hash_504428B5` | 50 | 2 | 未确认 | 未确认 | unknown | 3.0.3 原生哈希列；缺少可确认的字段名及语义；保留原始值和原始字节 |
| 14 | `hash_71BF253B` | 52 | 2 | BromideItemID | s16 | repo_or_crc_verified | 村民照片物品 ID |
| 15 | `hash_0B52F5BB` | 54 | 2 | FloorType | u16 | crc32_match_historical_1_6 | 类别或类型枚举（历史字段名匹配，3.0.3 运行时解释待验） |
| 16 | `hash_0F640691` | 56 | 2 | PosterItemID | s16 | repo_or_crc_verified | 村民海报物品 ID |
| 17 | `hash_03200971` | 58 | 2 | RainHat | u16 | crc32_match_historical_1_6 | 历史字段名已由 CRC32 反校验；精确游戏业务语义未验证 |
| 18 | `hash_1D69405F` | 60 | 2 | RainWare | u16 | crc32_match_historical_1_6 | 历史字段名已由 CRC32 反校验；精确游戏业务语义未验证 |
| 19 | `hash_57E889B2` | 62 | 2 | SmartphoneRemakeCommonPattern | s16 | crc32_match_historical_1_6 | 款式/图案相关数据（候选） |
| 20 | `hash_F8BE7F94` | 64 | 2 | SmartphoneRemakePattern | u16 | crc32_match_historical_1_6 | 款式/图案相关数据（候选） |
| 21 | `hash_870F1E29` | 66 | 2 | Tops | u16 | repo_or_crc_verified | 初始上衣物品 ID |
| 22 | `hash_BB9C816E` | 68 | 2 | Umbrella | u16 | repo_or_crc_verified | 初始雨伞物品 ID |
| 23 | `hash_54706054` | 70 | 2 | UniqueID | u16 | repo_or_crc_verified | 表内记录唯一编号；不要跨表混用 |
| 24 | `hash_DA63A0CC` | 72 | 2 | WallType | u16 | crc32_match_historical_1_6 | 类别或类型枚举（历史字段名匹配，3.0.3 运行时解释待验） |
| 25 | `hash_919EA52A` | 74 | 1 | BirthMDay | u8 | repo_or_crc_verified | 村民出生日期（月内日） |
| 26 | `hash_9456B6A3` | 75 | 1 | BirthMonth | u8 | repo_or_crc_verified | 村民出生月份 |
| 27 | `hash_34EB5DC3` | 76 | 1 | Color1 | u8 | crc32_match_historical_1_6 | 主颜色分类（候选） |
| 28 | `hash_265EF22D` | 77 | 1 | Color2 | u8 | crc32_match_historical_1_6 | 副颜色分类（候选） |
| 29 | `hash_4CE98793` | 78 | 64 | HavokResName | string64 | repo_or_crc_verified | 村民物理/模型关联资源字符串 |
| 30 | `hash_C1FB0035` | 142 | 64 | HelperBoneResName | string64 | repo_or_crc_verified | 辅助骨骼资源字符串 |
| 31 | `hash_454B2ADC` | 206 | 1 | InitLive | u8 | repo_or_crc_verified | 初始化生活状态字段；具体枚举待验 |
| 32 | `hash_566F1D31` | 207 | 1 | InitRemakeId | u8 | repo_or_crc_verified | 初始款式/改造 ID；语义待查 |
| 33 | `hash_2F1B930D` | 208 | 8 | Label | string8 | crc32_match_historical_1_6 | 内部标识或标签 |
| 34 | `hash_41977699` | 216 | 1 | NpcColor | u8 | repo_or_crc_verified | 村民颜色枚举 |
| 35 | `hash_33AF13E1` | 217 | 1 | NpcTalkType | u8 | repo_or_crc_verified | 村民对话类型枚举（未完成运行时确认） |
| 36 | `hash_48EF0398` | 218 | 64 | ResName | string64 | repo_or_crc_verified | 内部资源名（以原版实际字节内容为准） |
| 37 | `hash_04AC1BEA` | 282 | 1 | SpecialELink | u8 | crc32_match_historical_1_6 | 历史字段名已由 CRC32 反校验；精确游戏业务语义未验证 |
| 38 | `hash_BE782346` | 283 | 1 | SpecialSLink | u8 | crc32_match_historical_1_6 | 历史字段名已由 CRC32 反校验；精确游戏业务语义未验证 |
| 39 | `hash_21C5BBD6` | 284 | 1 | 未确认 | 未确认 | unknown | 3.0.3 原生哈希列；缺少可确认的字段名及语义；保留原始值和原始字节 |
| 40 | `hash_E52F0037` | 285 | 1 | 未确认 | 未确认 | unknown | 3.0.3 原生哈希列；缺少可确认的字段名及语义；保留原始值和原始字节 |
| 41 | `hash_42F255D5` | 286 | 2 | 未确认 | 未确认 | unknown | 3.0.3 原生哈希列；缺少可确认的字段名及语义；保留原始值和原始字节 |

## 证据说明
- `repo_or_crc_verified`：仓库现有 R74/R77/R82/R84 脚本已应用、且与字段名类型 CRC32 校验相符；**不代表所有运行时行为都验证**。
- `crc32_match_historical_1_6`：字段名字和类型取自 1.6.0 历史参考表，并且对 3.0.3 的列哈希进行 CRC32 反校验一致，属于 **3.0.3 哈希存在的实测证据**；枚举含义、计量单位、用途仍待原生值/调用者复核。
- `repo_observed`：仓库以指定哈希提取该语义，但历史字段名称、类型签名还不能完整验证；保留证据边界。
- `unknown`：目前没有可信名称/类型，不要凭常见命名、相邻位置或数据巧合推断业务意义。
- 参考：[原仓库 JSON 字段结构](https://github.com/969981/ACNH_Resources/tree/3.0.3_Unpack/UnPack/1/Bcsv)；[历史 1.6.0 BCSV 表](https://wuffs.org/acnh/bcsv_160/html/)；[仓库解析脚本](https://github.com/969981/ACNH_Resources/blob/3.0.3_Unpack/Scripts/acnh_formats.py)。历史版本只提供名称参考，不可直接当作 3.0.3 原版全部值。

返回：[[ACNH303_JSON_Rebuild/docs/08-字段数据字典总览|字段字典总览]]
