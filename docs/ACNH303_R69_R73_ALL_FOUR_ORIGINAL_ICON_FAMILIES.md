---
title: R69–R73 ACNH 3.0.3 物品原版图标与衣柜 5480 张 PNG 补齐
aliases: [ClosetIcon 完整提取, ACNH 物品 PNG 原版覆盖]
tags: [ACNH, 3.0.3, ClosetIcon, FtrIcon, GardeningIcon, NpcIcon, BNTX, verification]
status: original-four-layout-families-complete-runtime-semantics-pending
---

# R69–R73：按真实 3.0.3 ROM 来源补全原版图片

> [!important] 范围说明
> 本阶段已经将 **FtrIcon、GardeningIcon、ClosetIcon、NpcIcon 四个具体原始 Layout 资源家族**全部提取为经过源文件、BRTI/PNG 和哈希验证的 PNG。**这不等于全部 Model/BFRES 贴图、任天堂动态合成 UI 或外部 27,531 文件名的所有语义已完整还原。**

## 总体验收结果（R73）

| 原版资源家族 | 原始 ROM 源文件数 | 已有可验 PNG 的原始源 | 未处理 |
| --- | ---: | ---: | ---: |
| Layout_FtrIcon | 25,794 | 25,794 | **0** |
| Layout_GardeningIcon | 383 | 383 | **0** |
| Layout_ClosetIcon | 5,480 | 5,480 | **0** |
| Layout_NpcIcon | 488 | 488 | **0** |
| **四家族合计** | **32,145** | **32,145** | **0** |

以上数字是**原始资源源文件覆盖**，不是不同物品 ID 数量。R73 除了对照旧 R68 的源文件缺口，还校验了 Git 实际目录树、R69 四张提取记录、R71 的 5,480 张原始衣柜图标验收和既有村民素材验收。

证据文件：assets/evidence/rom-completeness/r73-four-family-original-image-completeness.json。
通过 Actions：#41453910153。

## R69：补齐最早剩余的 1 张 FtrIcon 和 3 张 GardeningIcon

成功 Actions #41452313971。真实提取并提交：
- assets/images/completion-original-layout/FtrIcon/CookingRecipe.png
- assets/images/completion-original-layout/GardeningIcon/PltVine.png
- assets/images/completion-original-layout/GardeningIcon/PltWeed.png
- assets/images/completion-original-layout/GardeningIcon/PltWeedLight.png

四个原始 .Nin_NX_NVN.zs 来源均解码成单一原版 BRTI、原始文件名匹配、PNG 校验和 SHA-256 验收通过；0 多纹理、0 解码失败。对应证据为 native-layout-batches/FtrIcon-00000-00001.json 和 GardeningIcon-00000-00003.json。

## R70–R72：从 39 张提升到 5,480 张 ClosetIcon

1. R58 原已提交的 39 张 ClosetIcon 保留。
2. R70 用确定的 R68 原始源路径清单额外成功解码首批 200 张，200/200 成功，0 不支持格式。Actions #41452489519。
3. R71 用 27 个互斥源文件分片并行解码剩下 **5,241 张**，所有 27 个解码 job 成功，每张原始来源生成独立 PNG 和证据 JSON。
4. R71 的**首轮聚合失败，不是解码失败**：upload-artifact 的多个资源目录共用 assets 上级，下载合并会去掉此一级路径；校验器在 assets/evidence/... 下找不到分片。错误已由 R72 重放下载并恢复真实目录层级，不需要重新解码 5,241 个源。
5. **R72 #41453330162 已成功**：重新从 27 个完整原始 Artifact 恢复数据，再读取全部 5,480 份原始图像哈希和 28 份来源清单（包括 R70 首批），完成 PNG CRC/SHA-256 验收并提交到 Git 分支。5,441 个新增来源全部为一张原版 BRTI，不存在解码失败、多纹理、无贴图或替换占位图。

输出目录：assets/images/clothing-original-layout/ClosetIcon/。

完整核查：assets/evidence/rom-completeness/r71-closet-5480-final-audit.json。
原始分片：assets/evidence/rom-completeness/native-layout-batches/ClosetIcon-*.json。
异常记录：assets/evidence/rom-completeness/r71-closet-5480-unresolved.csv（无异常行）。
Git 目录树进一步独立证实有且仅有 **5,480 个 PNG**，没有其他格式文件。

## 村民图片仍保持完整

R68 已经对原版 ROM 的四个村民图像家族分别完成源文件和 PNG 检查：

| 图像类别 | 原始源文件 | 已提取 PNG |
| --- | ---: | ---: |
| NpcIcon 头像 | 488 | 488 |
| NpcBromide 照片 | 481 | 481 |
| FtrIcon PosterNpc 海报 | 486 | 486 |
| FtrIcon BromideNpc 照片道具 | 479 | 479 |
| **按四家族分开计数** | **1,934** | **1,934** |

这些家族重叠了一些物品/角色的用途，不能将四项相加解释成 1,934 名不同村民。不同类别的名称集合原版就不完全相同，不是提取遗漏。

## 与早先 27,531 项外部图标清单的关系

R62 外部用户目录原有 27,531 个预期 PNG 名称；其中 **26,277 个**有同名原生 BRTI/PNG，**1,254 个**虽然有真实原版候选来源，但仍需独立验证特定外部文件名和运行时 UI 的等价关系。R69–R73 为**新 UI 家族的原生资源**增加了文件，不应改动这 1,254 项的语义待查状态，也不自动生成旧的 _0_0 或某个版本后缀别名。

图片均来自当前原版 3.0.3 NCA，未使用社区 CDN 代替原版，也未复制/伪造图片填补预期目录。

## 下一步如果追求“整个 ROM 所有物品的所有图像”

继续按 60,166 项 Model 路径和其他 Layout 类别创建独立资源级覆盖清单；按真实使用场景调查 BFRES 模型贴图、ReBody/ReFabric 动态材质、UI 图标来源、服装改色、环境贴图与动态渲染。四大 Layout 家族完成，并不能证明这些不同语义层已经完成。

复查入口：
- Scripts/acnh303_r68_image_completeness.py（旧源文件基线）
- Scripts/acnh303_r69_native_layout_incremental.py（原生分片解码和报告）
- Scripts/acnh303_r71_verify_all_closets.py（独立逐图 CRC/SHA 校验）
- Scripts/acnh303_r73_verify_image_family_closure.py（四家族源文件闭合验收）
