---
title: 家具摆放与承载规则
aliases: [ItemLayout, 家具堆叠, 桌面承载]
tags: [acnh, furniture, placement]
status: candidate
---
# 家具摆放与承载规则

返回 [家具空间属性](Furniture-Spatial.md) · [原版尺寸定义](Item-Size.md) · [首页](../README.md)。

这里的堆叠指空间摆放，不是背包数量堆叠。

## 历史枚举证据

[NHSE specs_130](https://github.com/kwsch/NHSE/blob/cb0745415945776f73375bf0a434a8babf059307/NHSE.Parsing/Resources/specs_130.txt) 包含下列标签和日文说明。3.0.3 字段 Hash、逐物品关联、实际承载点未验证。

| 标签 | 日文说明 | 候选解释 |
| --- | --- | --- |
| Floor | 床置き | 地面摆放 |
| Floor_Downer | 台になる | 承载家具 |
| Floor_DownerFront | 台になる：手前半分 | 前半部分承载 |
| Floor_DownerLeft | 台になる：左半分 | 左半部分承载 |
| Floor_DownerRight | 台になる：右半分 | 右半部分承载 |
| Floor_DownerUpper | 台になる：上物可 | 兼具承载/上物能力候选 |
| Floor_Upper | 上物可 | 可作为上层物品 |
| Floor_Corner | 床置き：コーナー：3x3 | 转角家具 |
| Floor_Gate | 床置き：門：3x1 | 门型家具 |

## 待验证

- 确认 3.0.3 对应字段与实际值分布。
- 确认承载点数量、半格坐标、旋转、物品尺寸和承载兼容性。
- 研究能否多层连续堆叠，以及碰撞、通行与交互限制。
- 不根据单一尺寸或承载标签直接推导最大可摆放数量。
