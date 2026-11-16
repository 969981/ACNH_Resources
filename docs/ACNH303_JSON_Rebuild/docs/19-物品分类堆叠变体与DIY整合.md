---
title: 19 · R90 游戏物品分类管理：物品、堆叠、变体、DIY
tags: [ACNH, 3.0.3, ItemKind, ItemParam, ItemRemake, RecipeCraftParam]
status: original-rom-source-backed
---
# R90 · 游戏内物品分类管理（非界面分类）

专门服务物品管理器、批量清单、查询及存档编辑研究。**这里不使用 224 个 STR_CategoryName UI 菜单标签作为物品分类依据**，而使用原版四张 BCSV。

| 原版表 | 行数 | 主键与 FK | 实际用途 |
|---|---:|---|---|
| ItemParam | 11,178 | UniqueID | 物品唯一 ID、ResName、Kind |
| ItemKind | 189 | Label | 操作标志、MultiHoldMaxNum 原始 s16 |
| ItemRemake | 1,306 | UniqueID（改造记录 ID）；ItemUniqueID→ItemParam.UniqueID | 可改造物品的改造配置与工具包消耗 |
| RecipeCraftParam | 924 | UniqueID（配方 ID）；Item→ItemParam.UniqueID | DIY 产物和 1–6 种材料数量 |

## 堆叠规则：必须同时输出原值与解释

`MultiHoldMaxNum` 中 `0` 通常意味着单格 1 件，但该 `1` 是**展示候选**而不是原字段真实值；`-1` 是 Money/Turnip 的特殊哨兵，不能写成 65,535/无限。对于 `10`、`30`、`50`、`99` 等保持原版静态正整数，不应越权宣称所有运行时模式均适用。

若 `ItemParam.Kind` 是 `Kind_Ftr_*` 等子类型，只能关联 `Ftr` 等 **prefix_candidate_not_proven** 父分类；在没有更强证据前，不把父分类的堆叠和动作标志复制为“已验证”的物品规则。

## 变体 ≠ 可改造配置

**原版 ItemRemake** 每一行是一个物品的 *改造配置*，`ItemUniqueID=hash_FD9AF1E1` 为真实外键，`UniqueID=hash_54706054` 是*改造行* ID；两者不能互换。

数据中有 `ReBodyPatternNum`、`ReFabricPatternNum` 及每款式颜色槽位，并包含 `RemakeKitNum`。这些字段含特殊值，必须保存 raw；不能直接把 255 理解为 255 种改造样式。

历史 web JSON 的 `17,170` 条变体属于 **1,782 个物品**的另一数据来源，可以单独导入 `item_variant` 明细，但不能直接当成原版 ItemRemake 的记录数，也不能在没有模型/素材证据时宣称每个历史 variant_id 与改造 Body/Fabric 组合一一对应。

## 正确物品数据库架构

```text
item(item_id PK, res_name, native_kind, name_CNzh ...)
item_kind_rule(kind_label PK, stack_raw_s16, flags...)
item_kind_link(item_id FK, kind_label FK, evidence)
item_variant(item_id FK, variant_id, variant_label, variant_source, evidence)
item_remake(item_id FK UNIQUE, remake_row_id, kit_num, body_pattern_num_raw, fabric_pattern_num_raw)
recipe(recipe_id PK, crafted_item_id FK)
recipe_material(recipe_id FK, slot, ingredient_item_id FK, amount)
```

### 原版一键导出

```powershell
py Scripts/acnh303_r90_native_item_manager.py --repo-root . --out r90-output
```

导出四个 CSV（11,178 件物品、189 条种类、1,306 条改造配置、924 条配方）和原版统计 JSON。若要结合 14 语言名称，可按 `item_id` 与 R77 native item catalog 关联。旧版变体的 17,170 条历史数据必须独立标注来源。实际游戏行为、存档编辑的变体编码尚未全部反编译验证。

源始字段证明：[[ACNH303_JSON_Rebuild/fields/ItemParam]]、[[ACNH303_JSON_Rebuild/fields/ItemKind]]、[[ACNH303_JSON_Rebuild/fields/ItemRemake]]、[[ACNH303_JSON_Rebuild/fields/RecipeCraftParam]]。
