---
title: 04 · DIY 与变体重建
aliases: [RecipeCraftParam, ItemRemake]
tags: [ACNH, Recipe, ItemRemake]
---
# 04 · 配方与改造变体不能按普通物品 ID 存表

## DIY
旧 web 的 924 条 DIY 全部使用商品 id=5794，id_hex 为空，但 recipe_id 全部不同。正确的 recipe 主键是 **recipe_id**，其原始来源为 RecipeCraftParam.hash_54706054。

~~~mermaid
flowchart LR
  A[RecipeCraftParam.bcsv] --> B[recipe_id 主键]
  A --> C[候选成品 item_id]
  D[ItemParam.bcsv] --> C
  B --> E[旧网页 DIYRecipe 展示行]
  C --> E
~~~

例：旧苹果电视图纸 recipe_id=6、label=FtrFruitsTV；原版候选产物 Item ID 为 2596，应要求 ItemParam[2596].ResName 与它相等。原版产物字段是 `hash_89A3482C`（`Item u16`），而 `hash_1BBFA75E`（`Material1 u16`）是第一种材料 ID；完整 924 条产物关系仍需逐行校验。

## Variations
旧 variations 是字符串形式的 JSON 数组，需先 json.loads，再规范化为 (item_id, variant_id, label)。本轮成功展开 **17,170 条**、来自 **1,782** 个物品；解码错误 0，物品内部 variant_id 冲突 0。

ItemRemake、ItemRemakeCommonPattern、Model 与 Layout_FtrIcon 是后续溯源入口。仓库 R84 旧版 **821 个所谓关联**用错了 `ItemRemake.UniqueID`（改造行身份）；已修正源码为 `ItemUniqueID=hash_FD9AF1E1` 外键，但覆盖数必须重新运行完整 R84 后才能确认，更不能直接与旧站 1,782 个有变体的物品比较。

本次未做 17,170 条与原版贴图、默认款式、运行时 UI 选图的逐条验证。网页变体名称不得冒充原版内部选择 ID。

完整扁平化变体 CSV 保存在本轮离线研究包中，未重复提交大文件到仓库。下一篇：[[05-复现命令及脚本]]。
