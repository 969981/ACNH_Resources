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

例：旧苹果电视图纸 recipe_id=6、label=FtrFruitsTV；原版候选产物 Item ID 为 2596，应要求 ItemParam[2596].ResName 与它相等。配方产物字段候选 hash_1BBFA75E 尚需对完整 924 条原生数据作严谨验证。

## Variations
旧 variations 是字符串形式的 JSON 数组，需先 json.loads，再规范化为 (item_id, variant_id, label)。本轮成功展开 **17,170 条**、来自 **1,782** 个物品；解码错误 0，物品内部 variant_id 冲突 0。

ItemRemake、ItemRemakeCommonPattern、Model 与 Layout_FtrIcon 是后续溯源入口。仓库 R84 在 ItemRemake 中对上 **821 个物品 ID**，但 821 不能直接与 1,782 比较并判定缺失；改造表与旧网站列举款式/颜色的定义未必相同。

本次未做 17,170 条与原版贴图、默认款式、运行时 UI 选图的逐条验证。网页变体名称不得冒充原版内部选择 ID。

完整扁平化变体 CSV 保存在本轮离线研究包中，未重复提交大文件到仓库。下一篇：[[05-复现命令及脚本]]。
