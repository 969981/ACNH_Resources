---
title: ACNH 3.0.3 · ItemKind 原版全字段表
tags: [ACNH, 3.0.3, BCSV, CRC32, ItemKind]
status: hashed-field-audit
---
# ItemKind.bcsv｜189 行 × 31 字段

189 种道具类别：Label、操作标志、持有数量和类别显示配置。

- 原版：`e10617820db06889e1638499478da0de_NCA/1/Bcsv/ItemKind.bcsv`
- 本仓库解码：`UnPack/1/Bcsv/ItemKind.csv`
- 结构元数据：`UnPack/1/Bcsv/ItemKind.json`
- 单行字节数：**152**；已识别字段名 **23**，未确认 **8**。
- **重要**：width_hint 是相邻列偏移差，**不代表**解码器从原版解析出了准确数据类型。下表类型仅对通过 CRC32('名称 类型') 的匹配给出；未知列保持哈希。

| # | 原版列哈希 | 行内偏移 | 宽度提示 | 名称/对应含义 | 类型候选 | 证据级别 | 中文说明 |
|---:|---|---:|---:|---|---|---|---|
| 1 | `hash_1B936128` | 4 | 4 | 未确认 | 未确认 | unknown | 3.0.3 原生哈希列；缺少可确认的字段名及语义；保留原始值和原始字节 |
| 2 | `hash_268E2E2B` | 8 | 4 | 未确认 | 未确认 | unknown | 3.0.3 原生哈希列；缺少可确认的字段名及语义；保留原始值和原始字节 |
| 3 | `hash_D606A6C4` | 12 | 4 | 未确认 | 未确认 | unknown | 3.0.3 原生哈希列；缺少可确认的字段名及语义；保留原始值和原始字节 |
| 4 | `hash_6B749E8A` | 16 | 4 | 未确认 | 未确认 | unknown | 3.0.3 原生哈希列；缺少可确认的字段名及语义；保留原始值和原始字节 |
| 5 | `hash_29C41A0D` | 20 | 4 | 未确认 | 未确认 | unknown | 3.0.3 原生哈希列；缺少可确认的字段名及语义；保留原始值和原始字节 |
| 6 | `hash_4D655154` | 24 | 4 | 未确认 | 未确认 | unknown | 3.0.3 原生哈希列；缺少可确认的字段名及语义；保留原始值和原始字节 |
| 7 | `hash_4C9BA961` | 28 | 2 | MultiHoldMaxNum | s16 | repo_or_crc_verified | 物品种类持有/叠加上限 s16；-1 是特殊哨兵 |
| 8 | `hash_0CE69142` | 30 | 2 | SaveCountMaxNum | u16 | crc32_match_historical_1_6 | 存储数量/计数上限字段；具体场景待验 |
| 9 | `hash_54706054` | 32 | 2 | UniqueID | u16 | repo_or_crc_verified | 表内记录唯一编号；不要跨表混用 |
| 10 | `hash_472724ED` | 34 | 1 | CanBury | u8 | repo_or_crc_verified | 类别操作标志：埋藏；不是实际每一场景动作的运行时证明 |
| 11 | `hash_9B433DD5` | 35 | 1 | CanEat | u8 | repo_or_crc_verified | 类别操作标志：食用；不是实际每一场景动作的运行时证明 |
| 12 | `hash_90BC0855` | 36 | 1 | CanFtr | u8 | repo_or_crc_verified | 类别操作标志：家具化；不是实际每一场景动作的运行时证明 |
| 13 | `hash_06012035` | 37 | 1 | CanGift | u8 | repo_or_crc_verified | 类别操作标志：赠礼；不是实际每一场景动作的运行时证明 |
| 14 | `hash_2C1B3B5B` | 38 | 1 | CanNpcBirthdayPresent | u8 | repo_or_crc_verified | 类别操作标志：NPC 生日赠礼；不是实际每一场景动作的运行时证明 |
| 15 | `hash_0732BB98` | 39 | 1 | CanNpcPresent | u8 | repo_or_crc_verified | 类别操作标志：NPC 赠送；不是实际每一场景动作的运行时证明 |
| 16 | `hash_D4697FF8` | 40 | 1 | CanPlant | u8 | repo_or_crc_verified | 类别操作标志：种植；不是实际每一场景动作的运行时证明 |
| 17 | `hash_5D389FBF` | 41 | 1 | CanPut | u8 | repo_or_crc_verified | 类别操作标志：放置；不是实际每一场景动作的运行时证明 |
| 18 | `hash_D223F25C` | 42 | 1 | CanPutWallAndFloor | u8 | repo_or_crc_verified | 类别操作标志：墙/地面放置；不是实际每一场景动作的运行时证明 |
| 19 | `hash_3D4F3F42` | 43 | 1 | CanSell | u8 | repo_or_crc_verified | 类别操作标志：出售；不是实际每一场景动作的运行时证明 |
| 20 | `hash_B52FE52E` | 44 | 1 | CanSellSimple | u8 | repo_or_crc_verified | 类别操作标志：简易出售；不是实际每一场景动作的运行时证明 |
| 21 | `hash_DAE27694` | 45 | 1 | CanSetChest | u8 | repo_or_crc_verified | 类别操作标志：收纳入箱；不是实际每一场景动作的运行时证明 |
| 22 | `hash_1BCD4858` | 46 | 1 | CanSetCloset | u8 | repo_or_crc_verified | 类别操作标志：衣柜收纳；不是实际每一场景动作的运行时证明 |
| 23 | `hash_C8A5A762` | 47 | 1 | CanSetInTrashBox | u8 | repo_or_crc_verified | 类别操作标志：丢弃至垃圾桶；不是实际每一场景动作的运行时证明 |
| 24 | `hash_49129B27` | 48 | 1 | CanSetItem | u8 | repo_or_crc_verified | 类别操作标志：物品摆放；不是实际每一场景动作的运行时证明 |
| 25 | `hash_5218C48C` | 49 | 1 | CanUsePhotoStudio | u8 | repo_or_crc_verified | 类别操作标志：摄影棚使用；不是实际每一场景动作的运行时证明 |
| 26 | `hash_923F8E59` | 50 | 1 | 未确认 | 未确认 | unknown | 3.0.3 原生哈希列；缺少可确认的字段名及语义；保留原始值和原始字节 |
| 27 | `hash_C37A683C` | 51 | 1 | CantTakeOver | u8 | repo_or_crc_verified | 类别操作标志：禁止移交；不是实际每一场景动作的运行时证明 |
| 28 | `hash_FD3B7C9A` | 52 | 1 | IsCollectAchievement | u8 | repo_or_crc_verified | 类别操作标志：计入收集成就；不是实际每一场景动作的运行时证明 |
| 29 | `hash_87BF00E8` | 53 | 32 | Label | string32 | repo_verified | 原始种类 Label；经 CRC32 字段名类型匹配 |
| 30 | `hash_036E8EBE` | 85 | 64 | Name | string64 | crc32_match_historical_1_6 | 原始类别名称文本 |
| 31 | `hash_29FE5BBD` | 149 | 3 | 未确认 | 未确认 | unknown | 3.0.3 原生哈希列；缺少可确认的字段名及语义；保留原始值和原始字节 |

## 证据说明
- `repo_or_crc_verified`：仓库现有 R74/R77/R82/R84 脚本已应用、且与字段名类型 CRC32 校验相符；**不代表所有运行时行为都验证**。
- `crc32_match_historical_1_6`：字段名字和类型取自 1.6.0 历史参考表，并且对 3.0.3 的列哈希进行 CRC32 反校验一致，属于 **3.0.3 哈希存在的实测证据**；枚举含义、计量单位、用途仍待原生值/调用者复核。
- `repo_observed`：仓库以指定哈希提取该语义，但历史字段名称、类型签名还不能完整验证；保留证据边界。
- `unknown`：目前没有可信名称/类型，不要凭常见命名、相邻位置或数据巧合推断业务意义。
- 参考：[原仓库 JSON 字段结构](https://github.com/969981/ACNH_Resources/tree/3.0.3_Unpack/UnPack/1/Bcsv)；[历史 1.6.0 BCSV 表](https://wuffs.org/acnh/bcsv_160/html/)；[仓库解析脚本](https://github.com/969981/ACNH_Resources/blob/3.0.3_Unpack/Scripts/acnh_formats.py)。历史版本只提供名称参考，不可直接当作 3.0.3 原版全部值。

返回：[[ACNH303_JSON_Rebuild/docs/08-字段数据字典总览|字段字典总览]]
