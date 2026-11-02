---
title: R68 3.0.3 村民与道具 PNG 实际完整率验收
aliases: [村民图片完整性, 道具图标完整性, ACNH 图片缺口]
tags: [ACNH, 3.0.3, villager, FtrIcon, ClosetIcon, completeness, PNG]
status: four-villager-source-families-complete-item-UI-incomplete
---

# R68：原始 ROM 和仓库已提交 PNG 的双向完整性核查

> [!important] 两种“全部”不能混为一谈
> **原版 RomFS 的全部特定 Layout 图像源都已转成 PNG**，与**外部预期清单的全部文件名有原版来源候选**是不同验收指标。R62 的 27,531/27,531 是来源候选索引覆盖，并不是全部图片都按请求名称生成。R68 从实际 Git tree 反向列出原版源，而不是拿已解出的图片数量直接当作原版总数。

## 村民：四种已定义的原版图像类别均已完成

R68 读取原版 Model Git tree、5 批原生 villager BNTX PNG 转换报告和仓库实际 PNG 路径，分别检查真实源文件数量、输出记录数量及文件是否存在：

| 原版类别 | 原版源数 | 已验证来源 | 实际 PNG | 未处理原版源 |
| --- | ---: | ---: | ---: | ---: |
| Layout_NpcIcon | 488 | 488 | 488 | 0 |
| Layout_NpcBromide | 481 | 481 | 481 | 0 |
| Layout_FtrIcon_PosterNpc | 486 | 486 | 486 | 0 |
| Layout_FtrIcon_BromideNpc*_Remake_0_0 | 479 | 479 | 479 | 0 |
| **合计** | **1,934** | **1,934** | **1,934** | **0** |

对应：
- `assets/images/villager/icons/`
- `assets/images/villager/photos/`
- `assets/images/villager/posters/`
- `assets/images/villager/bromide-items/`

所有原版 BNTX/PNG 的源 SHA-256 和像素验收还可回查 `assets/evidence/rom-villager/batch-*.json`。

> [!note] 为什么四种数量不同？
> 各自 **原版源文件数就不相同**，不是某一类别少提了几张。将前三类统一去掉 Poster / Bromide / _Remake_0_0 等前后缀后可看到：照片中有特殊 NPC `NpcSpRcmt` 不在海报集合；海报包含 `NpcNmlCbr18_2`、`NpcNmlDer10_2`、`NpcNmlElp11_2`、`NpcNmlGor11_2`、`NpcNmlRbt20_2`、`NpcNmlShp14_2` 等替代标识，照片集合无对应同名；Bromide 道具里有 `NpcSpGstA`。同一真实角色/替代造型如何映射属于另一个应用语义问题，不能简单由数量相减说缺失。

## 道具与衣柜：没有全部提取

原始 3.0.3 Model tree 共 60,166 条文件路径，已保存图片 `assets/images/` 下共有 29,459 个 PNG 路径（**不是 29,459 个唯一道具，也不代表每张都是原生 ROM 图片**）。

| 明确范围 | 原版 .zs 数 | 有来源 PNG 提取记录 | 尚无已验证提取记录 |
| --- | ---: | ---: | ---: |
| `Layout_FtrIcon_*` | 25,794 | 25,793 | **1** |
| `Layout_NpcIcon_*` | 488 | 488 | 0 |
| `Layout_ClosetIcon_*` | 5,480 | 39 | **5,441** |
| `Layout_GardeningIcon_*` | 383 | 380 | **3** |

上述独立源类别总计 **5,445 个**尚无这套 `assets/images` 原版 PNG 提取证据。其中：
- FtrIcon：`Layout_FtrIcon_CookingRecipe.Nin_NX_NVN.zs`；
- GardeningIcon：`Layout_GardeningIcon_PltVine.Nin_NX_NVN.zs`、`Layout_GardeningIcon_PltWeed.Nin_NX_NVN.zs`、`Layout_GardeningIcon_PltWeedLight.Nin_NX_NVN.zs`；
- ClosetIcon：原版共有 5,480 个，先前只针对 R58 的 39 个特殊服装来源实际解码，余下 **5,441 个**仍需要逐个解析与验收。

这些是未列入**既有原生 PNG 提取报告**的源文件，不代表完全无法解码、也不能据此推断每个源内部恰好有一张图片。全量未处理清单：
`assets/evidence/rom-completeness/r68-original-layout-sources-without-extracted-png.csv`。

## 27,531 个预期目录名称仍有实际文件名差异

- 26,277 个 `exact_original_name_native_png` 有原版同名 BRTI/PNG 证据；
- 1,254 个 `verified_native_source_candidate_only` 有原版图片来源，但**不能自动宣称原清单名称等价**；
- 将所有 `assets/images` PNG 的字面文件名与 27,531 清单逐项比较，目录树中能看到 **27,149 个相同文件名**；另有 **382 个尚无同名字面 PNG 文件**。注意字面同名匹配可能包含先前保留的社区 CDN 图片，所以这 27,149 个字面匹配**不是**原生同名 BRTI 验收数；判断原生一致仍以 26,277 为准。

完整来源索引：`assets/catalog/original-27531-sourced-lookup.csv`。字面名称仍未创建的样例包括 `FtrBambooLamp.png`、`CapWigZelda0_0.png`。是否需要将相应原生候选映射成最终用户目录文件名，应先验证客户端/游戏的使用场景后再做。

## 当前不能认证“游戏里所有图片”

R68 有意识地只核查四类村民素材，以及 FtrIcon、NpcIcon、ClosetIcon、GardeningIcon 这四个原版 Layout 来源家族。其余可能属于不同 UI Layout、模型 BFRES/BNTX 贴图、不同换装状态或游戏运行时动态渲染，未纳入全量“所有游戏物品”验收。本轮没有伪称 60,166 个 Model 文件全部完成图像提取。

## 复现和继续方向

- 审计脚本：`Scripts/acnh303_r68_image_completeness.py`；
- 来源和结果：`assets/evidence/rom-completeness/r68-villager-item-source-completeness.json`；
- 原始未处理源明细：`assets/evidence/rom-completeness/r68-original-layout-sources-without-extracted-png.csv`；
- GitHub Actions：#41451455157，通过。

**优先级**：保留现有所有村民四类 PNG；首先补提 1 个 FtrIcon、3 个 GardeningIcon；之后按原版资源名批量解码 5,441 个 ClosetIcon，并对每个源执行 BNTX/BRTI 名称、PNG 完整像素、CRC 和 SHA-256 验收。凡无纹理/多纹理/不支持语义的源要真实记录状态，不要造空白图。最后进一步检查其余未覆盖的原版 Layout 家族，才能逐步接近全 ROM 图像覆盖。
