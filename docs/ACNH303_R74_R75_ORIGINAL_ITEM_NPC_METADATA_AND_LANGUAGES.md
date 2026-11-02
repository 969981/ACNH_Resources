---
title: R74–R75 ACNH 3.0.3 物品、村民、14语言和堆叠字段
tags: [ACNH, 3.0.3, ItemParam, ItemKind, NmlNpcParam, MSBT, provenance]
status: source-verified-runtime-behavior-pending
---

# R74–R75：原版数据库来源与字段研究

> [!important] 证据边界
> 本轮已直接校验 3.0.3 原版 BCSV 与 MSBT 容器，不将第三方 CSV 直接当作 Nintendo 原始数据。CanPut、CantTakeOver 不能被简单重命名成 CanPickUp；Game UI 实际拾取行为需额外运行时取证。

## 原版目录

- RomFS/Bcsv/ItemParam.bcsv：11,178 条唯一物品 ID，109 列。
- RomFS/Bcsv/ItemKind.bcsv：189 条类别规则，含 18 项已解析操作标志与最大堆叠字段。
- RomFS/Bcsv/ItemAct.bcsv、ItemFilter.bcsv：动作与筛选规则。
- RomFS/Bcsv/ItemClothGroup.bcsv、ItemRemake.bcsv、ItemSize.bcsv：服装、改造、家具占地。
- RomFS/Bcsv/RecipeCraftParam.bcsv：924 条配方。
- RomFS/Bcsv/NmlNpcParam.bcsv：417 条普通居民，417 个独立 ResName。
- RomFS/Bcsv/SpNpcParam.bcsv：74 条特殊 NPC 参数，72 个不同 ResName。
- RomFS/Message/String_<locale>.sarc.zs：14 个独立语言/地区包，每包含 133 个真正的 MSBT 成员。

本仓库相应原始文件位于 e10617820db06889e1638499478da0de_NCA/1/，已经解析的参数数据位于 UnPack/1/Bcsv/。

## BCSV 精确字段而非猜测字段名

BCSV 列名哈希为 CRC32('字段名 类型')。

| 字段 | 原版 hash | 类型 | 解释 |
| --- | --- | --- | --- |
| UniqueID | 0x54706054 | u16 | ItemParam 主 ID |
| ItemKind | 0xFC275E86 | 原始枚举字符串 | 物品细分类 |
| ResName | 0x48EF0398 | string64 | 物品或 NPC 内部资源名 |
| MultiHoldMaxNum | 0x4C9BA961 | s16 | ItemKind 堆叠数/特殊值 |
| Label | 0x87BF00E8 | string32 | ItemKind 类型名 |
| CanPut | CRC32(CanPut u8) | u8 | 放置 |
| CanBury | CRC32(CanBury u8) | u8 | 埋藏 |
| CanSell | CRC32(CanSell u8) | u8 | 出售 |
| CanSetChest | CRC32(CanSetChest u8) | u8 | 家庭收纳 |
| CanSetCloset | CRC32(CanSetCloset u8) | u8 | 衣柜收纳 |

原始表的 MultiHoldMaxNum s16 有时作为 CSV 无符号数 65535 输出，实际是 -1，不代表 65,535 个堆叠上限。NHSE 工具对 -1 使用过兼容性处理，不能由此直接断言 3.0.3 原版的真实堆叠上限。

| 原版 ItemKind | s16 原值 | 当前可解释程度 |
| --- | ---: | --- |
| Ftr | 0 | 按单件处理 |
| Bromide | 0 | 按单件处理 |
| Fruit | 10 | 最大 10 的规则候选 |
| Ore | 30 | 最大 30 的规则候选 |
| CookingMaterial | 50 | 最大 50 的规则候选 |
| Money / Turnip | -1 | 特殊编码；继续研究保存格式与运行时 |

需要保留 ItemParam 里未直接匹配 ItemKind Label 的 25 种细分类型，例如 Ftr_1x1_Floor、Top_Short、Onepiece_Long、UnitIcon_Flw*。其基类关联及 stack/flags 必须逐项确认，不能自动套值。

## 语言原始结构

已真实对 14 个 String_<locale>.sarc.zs 执行 Zstd 和 SARC 解析，全部正好 133 个 MSBT。代表性内部成员包括：

- Item/STR_ItemName_01_Art.msbt
- Item/STR_ItemName_31_Fish.msbt
- Item/STR_ItemName_50_RoomWall.msbt
- Item/STR_ItemName_70_Craft.msbt
- Npc/STR_NNpcName.msbt
- Npc/STR_SNpcOtherName.msbt
- STR_CategoryName.msbt
- Outfit/GroupName/STR_OutfitGroupName_Tops.msbt
- Remake/STR_Remake_BodyParts.msbt

下一阶段将 MSBT LBL1/TXT2/ATR1 解析成 (source key, locale, text) 后再按 ID/ResName 对接物品、NPC，不应单靠多语言网站名称做原版来源证明。

## 用户既有资产索引和原版数据的区别

用户旧 acnh_item_asset_index.csv：28,883 资产行、10,790 个独立 item_id；其中 17,170 为改造/变体关联，11,713 为 base 条目。三种文字名与网站图片资源标签可作为额外对照，不是原版 MSBT。

原版 ItemParam 11,178 条与旧索引 10,790 个不同 ID 不相等；差 388 只是数量差，尚未执行完整 ID 集合差运算，不能宣称精确缺失 388 个特定 ID。需要查旧项是否已经被 ROM 删除或更名。

用户旧村民映射表有 417 条、四种语言；这与 ROM NmlNpcParam 的 417 条独立 ResName 数量相符，但是否每行 ID/名称均吻合还须完整 join。villager.zip 的 1,021 张图片也不是 1,021 名村民。

## 建议数据库表

- Item(item_id, id_hex, res_name, kind_raw, normalized_kind, source_hash)
- ItemKind(kind_label, MultiHoldMaxNum_s16, CanPut, CanSell, CanSetChest, CanSetCloset, other_flags, source_hash)
- ItemVariant(item_id, remake_id, body, fabric, cloth_group, original_source)
- ItemLocale(item_id, locale, msbt_member, msbt_key, text, source_hash)
- ImageAsset(res_name, family, original_rom_path, native_png_path, original_sha256, png_sha256)
- Npc(res_name, npc_type, species, personality, gender, birthday, model_name, source_hash)
- NpcLocale(res_name, locale, msbt_key, display_name, source_hash)
- NpcImage(res_name, family, original_rom_path, png_path, sha256)
- Recipe(recipe_id, output_item_id, ingredients, quantities, source_hash)
- ItemContextRules(item_or_kind, action, scene, actual_runtime_observation, verification_status)

不同图片家族如 FtrIcon / ClosetIcon / NpcIcon / NpcBromide / PosterNpc 不应合并成一个 PNG 名称。

## 可复核输出

- Scripts/acnh303_r74_metadata_stack_research.py
- assets/evidence/rom-database/r74-original-item-npc-stack-schema.json
- assets/evidence/rom-database/r74-original-item-stack-preview.csv
- Scripts/acnh303_r75_original_message_npc_audit.py
- assets/evidence/rom-database/r75-original-14-language-archives-and-npc-names.json
- Actions #41457850511、#41458362166 已成功。

下一步优先：完整 MSBT 解码与 ID 关联；原版 25 种细分 ItemKind 的基类/堆叠规则；拾取/不可携带/可交易的运行时行为；RecipeCraftParam 配方材料和不同类型原版 PNG 的多对多关联。
