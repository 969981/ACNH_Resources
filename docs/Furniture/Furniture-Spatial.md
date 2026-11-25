---
title: 家具空间属性研究
aliases: [Furniture Spatial Research, 家具空间属性]
tags: [acnh, furniture, spatial, moc]
status: partial
---
# 家具空间属性研究

返回 [首页](../README.md) · [物品分类](../Items/Item-Classification.md) · [BCSV 数据索引](../Sources/BCSV-Index.md)。

## 子专题

- [原版尺寸定义](Item-Size.md)：28 条原生宽高定义与半格单位。
- [摆放与承载规则](Placement-and-Stacking.md)：桌面、地面、墙面、地毯、天花板，历史枚举证据及待验证事项。
- [研究路线](../Research/Research-Roadmap.md)：碰撞、旋转、交互与真实承载点。

## 数据模型建议（非原版字段声明）

| 属性 | 证据状态 |
| --- | --- |
| size_label / width_half_tiles / depth_half_tiles | 尺寸定义原始字节已确认，逐物品关联待验收 |
| placement_layer / support_surface / can_be_supported | 历史枚举候选，3.0.3 待核验 |
| collision_shape / model_height / interaction_points | 待研究 |
| rotation / indoor_outdoor / max_support_depth | 待研究 |

矩形尺寸不能直接等同碰撞体或桌面可摆放区域。地毯与落地家具、桌面与上层物品可在水平投影上重叠；实际限制须按原版规则验证。
