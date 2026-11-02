---
title: R53–R54 ACNH 原版道具图标的 PokerCore iName 实测关联及历史数据差异
aliases: [ACNH 344 映射闭合, ACNH 40 个无来源项]
tags: [ACNH, 3.0.3, PokerCore, ItemParam, RomFS, provenance]
status: application-static-evidence-verified-other-ROM-unverified
---

# R53–R54：344 个原版图片对应的客户端 ID 与 40 个待查名称

> [!important] 证据边界
> **应用程序的数据选择链路**与**原版 Nintendo 游戏的默认图标选择链路**是两个不同命题。ACNHPokerCore 的 CSV 路径选择规则不能冒充游戏原版运行时的 body/fabric 选择。历史 CSV 的发布标签亦不能替代同一版本的原始 RomFS 文件树。

## R53：344 / 344 同一 itemID + iName 精确对应

使用 GitHub Actions **#41412488193**，固定源码版本 `969981/ACNHPokerCore@85e50a1ad182c926b2ebd51c00abc612e0a859d5`，读取源文件：
- `ACNHPokerCore/csv/items.csv`：10,885 个有效记录；
- `ACNHPokerCore/csv/variations.csv`：1,782 个有效记录；
- `ACNHPokerCore/csv/field.csv`：540 个有效记录；
- `ACNHPokerCore/csv/override.csv`：1,163 个有效记录。

由 `UnPack/1/Bcsv/ItemParam.csv` 提取道具 ID（`hash_54706054`）及名称（`hash_3FEBC642`），逐项与客户端 `items.csv`、`variations.csv` 的十六进制 id 与 iName 双字段核对；**344 / 344 两张表均严格相等，0 个不匹配**。同时 R52 已重算 344 张由真实 ROM 解码的 `_Remake_0_0.png` SHA-256。

例：`FtrBambooLamp` 原版 ID 十进制 3557 = 十六进制 `0DE5`，客户端 items、variations 的 id/iName 均为 `0DE5/FtrBambooLamp`，可对应已存在的 `FtrBambooLamp_Remake_0_0.png`。不需要为无后缀名字再造一张 PNG。

源码中 `ACNHPokerCore/Map/map.cs` 的 `GetImagePathFromID` 将客户端 ID 定位至 `iName`，在合适的分支先查 `_Remake_0_0.png` 再尝试基础 `.png`，若有 `variationSource` 及数据还会尝试 `_Remake_X_Y`；`Custom/variation.cs` 的相应函数也有默认 `0_0` 回退。以上均为**静态代码路径和文件哈希验收**，未实际启动 ACNHPokerCore GUI，更不证明 Nintendo 游戏 UI 的最终显示效果。

报告：`assets/evidence/rom-items/r53-client-iname-id-and-40.json`、同名 CSV；流程：`.github/workflows/acnh303-r53-pokercore-csv-evidence.yml`。

## R54：明确带版本的客户端 CSV 快照对照

使用原始历史提交分别读取：
- `3cda3450bf7b432bc39d206856dda530cbf22432`（2026-01-17 提交备注 *First test build for 3.0.0*），其 items.csv 10,884 行；
- `ec697289b079eb933fcd4bc21b40aa9b8c1c0ca8`（2026-04-16 提交备注 *Update for Game version Ver. 3.0.2*），items.csv 10,885 行。

原版用户资源对照仍采用已验证 3.0.3 `ItemParam`。**344 个基础名称 / ID 在两份历史客户端 items.csv 和 variations.csv 中均 344 / 344 匹配**。两版本 variations.csv、field.csv、override.csv 的原始 SHA-256 一致；items.csv 不一致（增加一个记录）。这是一项有源文件 SHA 的真实*客户端表版本比较*；不是 3.0.0 ROM 与 3.0.3 ROM 的二进制差分。

对仍待查的 40 个原始目录名称：
- **39 个**在两套历史客户端 CSV 中，使用原名称及谨慎拆除 `0_0` 后缀的候选基础名，都没有精确 iName 记录；
- **1 个** `FtrSoftdrinkOrange_3.0.0.png` 对应客户端 `FtrSoftdrinkOrange` 基础名，且 **3.0.3 RomFS 文件树中真实存在** `Layout_FtrIcon_FtrSoftdrinkOrange.Nin_NX_NVN.zs` 和 `Layout_CookingIcon_FtrSoftdrinkOrange.Nin_NX_NVN.zs`；这只能证明存在**不同文件名的原版来源**，不能证明版本后缀文件与当前 PNG 像素完全相同。
- 40 个原始命名均保留待核查，绝不复制或改名成“已提取原版”。

报告：`assets/evidence/rom-items/r54-pokercore-versions-and-rom-name-gaps.json` 与 `r54-unresolved-40-versions.csv`；已通过 Actions **#41412774985**。

## 官方更新说明与独立 ROM 仍缺失的限制

任天堂公开更新记录：3.0.0 于 **2026-01-14** 发布，3.0.2 于 **2026-04-13** 发布，3.0.3 于 **2026-04-29** 发布（美区日期）；3.0.3 明确修复了部分道具图片在家中收纳与酒店客房装饰目录不显示的问题。官方来源：

https://en-americas-support.nintendo.com/app/answers/detail/a_id/49112

这条补丁说明仅表明相关 UI 曾发生显示问题，**并非这 39 个文件名或图像来自哪一版的证明**。

目前只有同一个原始 3.0.3 NCA 资源树（`3.0.3` 与 `3.0.3_Unpack` 两个 Git 分支对原始 NCA/1 的 Git tree SHA 都是 `8809e830a4caa2593916239ef2391b5d17b98dd5`），没有可核验的独立 3.0.0 / 3.0.2 NCA/RomFS。单靠文件名、客户端 CSV、官方补丁说明无法验证原始图片是否存在于某一旧版的不同命名/打包资源内部。

**对仍未闭合的 39 项，下一步必须拿到另一独立游戏版本的原始 RomFS 路径清单及可验证输入 SHA，或在当前 3.0.3 的 Pack/容器内部证明不同名称的 BNTX 对应关系，再依据文件本身的 BRTI 和像素验证，而不是采用第三方图。**

## 保留原版资源与目录计数

26,277 个直接同名原版图标、1,934 张独立村民素材、391 张不同用途 UI Layout 原版 PNG 的三组真实产物不变；原始 1,254 项审计状态没有提升。详见 [[ACNH303_R52_POKERCORE_FALLBACK_AND_40]] 和 [[ACNH303_R50_ORIGINAL_ITEM_UI_MAPPING]]。
