---
title: 原版家具尺寸定义
aliases: [ItemSize, 家具占地, 半格]
tags: [acnh, furniture, bcsv]
version: "3.0.3"
status: verified-table
---
# 原版家具尺寸定义

返回 [家具空间属性](Furniture-Spatial.md) · [摆放与承载规则](Placement-and-Stacking.md) · [首页](../README.md)。

ItemSize.bcsv 原始文件 2332 字节，28 行、80 字节/行、8 字段，Git blob 3f3203cdcb0023356ba744224dcd3d32a2e3fb16。NHSE 的 GameBCSVDumper 使用 ItemParam 0xE06FB090 取尺寸类型；逐物品关联仍待验收。

| Hash | 偏移 | 宽度 | 含义 |
| --- | --- | --- | --- |
| 801351E6 | 0x04 | 4 | 未知 |
| 09B64264 | 0x08 | 2 | 未知 |
| 3CF05708 | 0x0A | 2 | 未知 |
| 54706054 | 0x0C | 2 | 定义 ID |
| 16B8F524 | 0x0E | 1 | 宽 |
| BCB13DAF | 0x0F | 1 | 高/深 |
| 87BF00E8 | 0x10 | 32 | 标签 |
| 977ADFCE | 0x30 | 32 | 说明 |

尺寸值除以 2 得游戏格数；墙面宽高与地面宽深不能混用。

| 原生 ID | 标签 | 原始宽×高 | 游戏格数 |
| ---: | --- | --- | --- |
| 2 | `1_0x1_0` | 2×2 | 1×1 |
| 4 | `2_0x1_0` | 4×2 | 2×1 |
| 5 | `2_0x2_0` | 4×4 | 2×2 |
| 13 | `3_0x1_0` | 6×2 | 3×1 |
| 6 | `3_0x2_0` | 6×4 | 3×2 |
| 7 | `3_0x3_0` | 6×6 | 3×3 |
| 1 | `1_0x0_5` | 2×1 | 1×0.5 |
| 3 | `2_0x0_5` | 4×1 | 2×0.5 |
| 42 | `3_0x0_5` | 6×1 | 3×0.5 |
| 22 | `1_5x1_5` | 3×3 | 1.5×1.5 |
| 25 | `1_0x0_5_Wall` | 2×1 | 1×0.5 |
| 24 | `0_5x1_0_Wall` | 1×2 | 0.5×1 |
| 26 | `1_0x1_0_Wall` | 2×2 | 1×1 |
| 9 | `1_0x1_5_Wall` | 2×3 | 1×1.5 |
| 8 | `1_0x2_0_Wall` | 2×4 | 1×2 |
| 27 | `2_0x1_0_Wall` | 4×2 | 2×1 |
| 12 | `2_0x1_5_Wall` | 4×3 | 2×1.5 |
| 34 | `2_0x2_0_Wall` | 4×4 | 2×2 |
| 33 | `1_0x1_0_Rug` | 2×2 | 1×1 |
| 21 | `2_0x1_0_Rug` | 4×2 | 2×1 |
| 19 | `2_0x2_0_Rug` | 4×4 | 2×2 |
| 20 | `3_0x2_0_Rug` | 6×4 | 3×2 |
| 18 | `3_0x3_0_Rug` | 6×6 | 3×3 |
| 16 | `4_0x3_0_Rug` | 8×6 | 4×3 |
| 14 | `4_0x4_0_Rug` | 8×8 | 4×4 |
| 31 | `5_0x4_0_Rug` | 10×8 | 5×4 |
| 32 | `5_0x5_0_Rug` | 10×10 | 5×5 |
| 41 | `0_5x0_5_Pillar` | 1×1 | 0.5×0.5 |

## NHSE 差异

CRC32("0_5x0_5_Pillar") = 0x2B28C88F，匹配 NHSE S_0x2B28C88F。NHSE 的尺寸查询字典没有 3_0x0_5 和柱子尺寸定义；查询缺失时默认 2×2 半格。实际影响须逐物品确认。

证据：[原始 BCSV 索引](../Sources/BCSV-Index.md) · [NHSE ItemSize](https://github.com/kwsch/NHSE/blob/cb0745415945776f73375bf0a434a8babf059307/NHSE.Core/Structures/Item/ItemSize.cs) · [NHSE ItemSizeType](https://github.com/kwsch/NHSE/blob/cb0745415945776f73375bf0a434a8babf059307/NHSE.Core/Structures/Item/ItemSizeType.cs)。
