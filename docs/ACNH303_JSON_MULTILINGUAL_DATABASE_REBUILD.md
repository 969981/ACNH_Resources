---
title: ACNH 3.0.3 双 JSON 多语言数据复现研究
aliases: [villager_db_multi, web_db_multi, ACNH JSON 数据库]
tags: [ACNH, 3.0.3, BCSV, MSBT, SARC, SQLite, Obsidian, provenance]
status: uploaded-json-profile-verified-native-full-join-pending
---

# ACNH 3.0.3 · 两份 JSON 从哪里来、如何解包复现

> [!important] 结论
> **旧 JSON 是原版资源经过多表关联生成的衍生数据库，不能从 ROM 里找到同名的单个文件直接解包。**
> 村民有原版的 417 行参数表；物品的原版 ItemParam 则有 11,178 个唯一 Item ID。旧网页数据 11,713 行并非 11,713 个唯一 Item ID。

研究依据：3.0.3_Unpack 分支原始数据；[[ACNH303_R74_R75_ORIGINAL_ITEM_NPC_METADATA_AND_LANGUAGES]]、[[ACNH303_R76_R81_NATIVE_MULTILINGUAL_ITEM_DATABASE]]、[[ACNH303_R84_ITEMPARAM_107_FIELDS_SOURCE_AND_EXPORT]]；本轮对用户上传的两份旧 JSON 进行的全量 Python 审计。

## 1. 本轮实测的两个旧文件

| 指标 | 结果 |
|---|---:|
| villager_db_multi 村民行、不同 Label / ResName | 417 / 417 / 417 |
| 村民四语言空值、ResName 形式不符合 | 0 / 0 |
| web_db_multi 全行 / 不同 Item ID | 11,713 / 10,790 |
| 旧 web 非 DIYRecipe / 不同 ID | 10,789 / 10,789 |
| 旧 DIYRecipe 行 / 不同 recipe_id | 924 / 924 |
| 这 924 个 DIYRecipe 的共同 id | 5794；全部 id_hex 为空 |
| 旧 variations（存成 JSON 字符串）嵌套变体 | 17,170 |
| 有 variations 的旧商品 | 1,782 |
| 变体数组解析错误 / 非 DIY 的 id_hex 错误 | 0 / 0 |
| 旧 web 英文名空值 | 1 |

**DIY 必须以 recipe_id 为身份主键。**例如旧苹果电视图纸的 recipe_id=6、label=FtrFruitsTV，与原版 RecipeCraftParam CSV 的 UniqueID=6、成品 Item 候选 ID=2596，以及旧物品 FtrFruitsTV/id=2596 相互呼应。不能把 924 条 id=5794 的行存入唯一主键为 Item ID 的表。

## 2. 原始路径和字段

原始 ROM 基目录为：

~~~text
e10617820db06889e1638499478da0de_NCA/1/
~~~

| 旧 JSON | 原始 RomFS 资源 | 本仓库已完成的部分 |
|---|---|---|
| 村民身份 ResName | Bcsv/NmlNpcParam.bcsv | UnPack/1/Bcsv/NmlNpcParam.csv；417 行、41 字段、行 288 字节 |
| 村民四语言名字 | Message/String_{CNzh,TWzh,JPja,USen}.sarc.zs | Npc/STR_NNpcName.msbt；LBL1 原始 key、TXT2 原始语言值 |
| 物品 ID/Label/Kind/Price | Bcsv/ItemParam.bcsv | UnPack/1/Bcsv/ItemParam.csv；11,178 条、107 字段、行 548 字节 |
| 堆叠类别规则 | Bcsv/ItemKind.bcsv | 189 行；MultiHoldMaxNum 是 s16，-1 为特殊值 |
| DIY 图纸 | Bcsv/RecipeCraftParam.bcsv | 924 行、28 字段、行 140 字节 |
| 家具改造候选 | Bcsv/ItemRemake.bcsv | 原版改造条目和源路径；旧 variations 全量组合仍待确认 |
| 物品四语言 | Message/String_{CNzh,TWzh,JPja,EUen}.sarc.zs | Item/STR_ItemName_*.msbt 及 Outfit/GroupName/STR_OutfitGroupName_*.msbt |

**语言区别**：旧村民字段 nameEn 使用 USen；旧商品字段 name_enEU 应对 EUen，不能直接混为同一来源。

### 村民准确关联

- NmlNpcParam 的 ResName 使用 hash_48EF0398，如 NpcNmlAnt00。
- 去掉 NpcNml 前缀并转为小写得到 ant00。
- 在对应地区 String_*.sarc.zs 内寻找 Npc/STR_NNpcName.msbt 的精确 ant00 标签。
- 例如 ant00 对应旧文本 阳明 / 陽明 / さくらじま / Cyrano；仓库 R76 已验证 CNzh/USen 示例；**旧 417×4 个名称与原版的全量相等性尚未在本轮完成复核**。

### 物品准确关联

- 原版 ItemParam UniqueID：hash_54706054；内部资源名：hash_3FEBC642；类别细分：hash_FC275E86。
- 物品 MSBT 通常含标签末尾五位 Item ID，例如 Fish_00328。但服装大量需要通过 ItemClothGroup 和 Outfit/GroupName 的服装组 ID 关联。
- 原版 Price 候选：hash_718B024D；必须在 3.0.3 原生 CSV 上逐值复核，并区分上下文买价、卖价。
- 旧 category、type 是衍生展示字段，不是已确认的原始一对一字段。
- 旧 variations 是字符串形式的数组，须通过 ItemRemake 与对应真实模型/纹理逐个验证，不能仅凭 _Remake_ 文件名推导游戏选图。
- ItemKind 的 MultiHoldMaxNum 原始 hash_4C9BA961 是 s16；65535 代表 -1 特殊值，不是 65,535 堆叠数。

## 3. 原版消息解包流程

~~~mermaid
flowchart TD
  A[原始 BCSV] --> B[parse_bcsv / CRC32 字段和原始字节]
  C[Message/String_locale.sarc.zs] --> D[Zstandard decompress]
  D --> E[SARC: 133 MSBT members per locale]
  E --> F[MSBT LBL1 label and TXT2 UTF16 text]
  B --> G[Native SQLite: Item / NPC / Recipe / Remake]
  F --> G
  H[旧 villager_db_multi 和 web_db_multi] --> I[按 ID / ResName / locale 精确差异比较]
  G --> I
~~~

解码函数在 Scripts/acnh_formats.py 中：decompress、parse_sarc、parse_msbt、parse_bcsv。14 个 String_*.sarc.zs 共有 1,862 个 MSBT 成员，已有 R76 结构解析证据。清理 MSBT 文本时保留带 U+000E 的控制码原文和独立清洗版，不把控制字符简单删除。

## 4. Windows/PowerShell 复现命令

~~~powershell
git switch 3.0.3_Unpack
py -m pip install -r Scripts/requirements.txt
py -m pip install zstandard

py Scripts/mirror_unpack.py basic --file Bcsv/NmlNpcParam.bcsv
py Scripts/mirror_unpack.py basic --file Bcsv/ItemParam.bcsv
py Scripts/mirror_unpack.py basic --file Bcsv/ItemKind.bcsv
py Scripts/mirror_unpack.py basic --file Bcsv/RecipeCraftParam.bcsv
py Scripts/mirror_unpack.py basic --file Bcsv/ItemRemake.bcsv
py Scripts/mirror_unpack.py audit

py Scripts/acnh303_r76_msbt_probe.py
py Scripts/acnh303_r78_query_catalog.py stats
py Scripts/acnh303_r78_query_catalog.py npc ant00
py Scripts/acnh303_r78_query_catalog.py item 2596
~~~

已有完整原版 SQLite 以 Zstandard 压缩形式保存在 assets/evidence/rom-database/r82-acnh303-villager-provenance.sqlite3.zst，基于之前 R77/R80 的物品、村民及多语言表；原生语义和证据状态请用仓库对应构建脚本和工作流验证。具体参考 [[03-Unpack-Workflow]] 和 [[ACNH303_R76_R81_NATIVE_MULTILINGUAL_ITEM_DATABASE]]。

## 5. 正确的归一化数据库

| 表 | 关键键 | 保存原版信息 |
|---|---|---|
| item | item_id | ResName、original_kind、原版字段、证据 |
| item_locale | item_id + locale | MSBT member/label、display_name、association_status |
| recipe | recipe_id | 产物 Item ID、材料项、原始行和证据 |
| item_remake | 原始行 / Item ID | body、fabric、原始候选关联 |
| npc | res_name | NPC key、原始参数 |
| npc_locale | res_name + locale | MSBT 原始名称、标签与证据 |
| source | source_id | 文件名、输入 SHA-256、版本 |

要做到**完全可重复的旧 JSON 重建**，仍需原生 SQLite 上执行 10,789 个旧非配方 ID 的集合差、924 个配方 ID 与产物名称精确 join、417×4 村民名称核验、四语言商品名称一致性、原版 Price 核对，以及 17,170 个旧变体与原始改造/模型资源比对。简单作 11,178−10,789 的数量减法不能替代集合差。

## 6. 本轮输入和限制

- villager_db_multi(1).json SHA256: 7b65c9671bc36bff27851cbac6cc762e3bd2c29c59b5270706926b7bb66cd121
- web_db_multi(1).json SHA256: d77337de8dda4dd16b2eeaaecaf9d38ae4dfa24f49e18bdda637ca358fa25214

本轮已实测**旧 JSON 全量结构**、原仓库源文件和解码管线，以及配方 ID 的几个真实样本；未在当前环境执行完整原生 SQLite 对照，因此不声称重建的 11,178 条原版物品已经与旧 11,713 行全部一一等价。随附独立 Obsidian 研究包还含分章笔记、只读核对脚本和机器可读审计报告。

扩展参考：[ACNH Dialog Editing](https://ac-modding.com/ACNH/mods/dialog_editing.html)，[历史 ItemParam 字段表（1.6.0，仅辅助字段名识别）](https://wuffs.org/acnh/bcsv_160/html/ItemParam.html)，[[ACNH303_ROM_VILLAGER_PHOTO_EXTRACTION]]。
