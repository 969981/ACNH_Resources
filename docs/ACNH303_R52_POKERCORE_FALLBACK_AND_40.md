---
title: R52 ACNH 3.0.3 314 项默认图标回退与 40 项来源版本缺口
aliases: [R52 PokerCore Default Icons, R52 40 Missing Original ROM]
tags: [ACNH, 3.0.3, BNTX, ItemParam, provenance, PokerCore]
status: app-lookup-verified-game-runtime-unverified
---
# R52 原版图片：314 个应用层回退及 40 个原始清单名称

> [!important] 证据边界
> ACNHPokerCore 文件读取代码证明应用程序有自己的 PNG 路径回退规则，不能据此声称 Nintendo 游戏运行时使用相同的默认 body/fabric。预期目录清单并非 ROM 资源索引，没有可比较的其他版本 ROM 时不能称作版本删除。原始 1,254 项仍保持待核查。

## 结果与已执行 Actions

- 上轮原生图片：26,277 个已验收直接同名 Layout、1,934 个村民素材、391 个其他 UI Layout。均各自保留真实 ROM 来源和 SHA-256，不可跨来源计数。
- 本次 R52：Actions #41410350193 成功，独立重新计算 344 张原版 Remake_0_0 PNG SHA-256，均与已提交原始证据一致；其中 30 项有 ItemRemake 同 ID 行，314 项在此字段无同 ID 行。
- **314 个无 ItemRemake 同 ID 项全部具有除 Remake_0_0 之外的其他原版 Remake 图片。** 不代表不能选择默认图标，只代表 ItemRemake 这一个字段不能解释所有变体。
- 没有改动任何原始图、没有复制重命名 PNG，也没有把待核查的 1,254 个原目录项提升为已完成。

报告：assets/evidence/rom-items/r52-pokercore-fallback-and-40.json；40 项可读 CSV：assets/evidence/rom-items/r52-unresolved-40.csv。复现脚本：Scripts/acnh303_r52_icon_fallback_audit.py；CI：.github/workflows/acnh303-r52-image-fallback-audit.yml。

## ACNHPokerCore 客户端文件选择证据

固定对照仓库提交 85e50a1ad182c926b2ebd51c00abc612e0a859d5。

- ACNHPokerCore/Map/map.cs：GetImagePathFromID(itemID, source, data) 对变体记录可尝试 Remake_main_sub；对于基础名称会尝试 iName_Remake_0_0.png，再尝试 iName.png；还会检查字段覆盖表和 RemoveNumber 回退。
- ACNHPokerCore/Custom/variation.cs：GetImagePathFromID(itemID, source) 对 row["iName"] 先查 Remake_0_0，再查普通 PNG。
- 上述检查通过固定源文件文本、哈希和实际 344 张 ROM PNG 的独立 SHA 验证。标记为「应用程序源码中的文件查找顺序已核实」，**不是已经运行该程序进行 UI 验收**。将输出路径迁移到应用的 img 目录以前不能声称已在实际安装实例中生效。
- 游戏默认款式仍需 ItemParam/ItemRemake/其他数据表和真实游戏调用者的独立取证。游戏中的 0_0 是否默认并未证实。

## 40 个仍未找到当前 ROM 来源的名称

源文件 assets/catalog/expected-png-names.txt 顶部声明：来自用户提供的 acnh3.0.3(2).txt Windows 文件树清单。该清单只有文件名，没有证明 PNG 来源的字节或 Nintendo 游戏版本身份。创建提交 d89c48be0110aef55763be055dee7e11ef62b9c1 仅把目录清单转换为去重的预期文件名。

- 40 项在已解包 3.0.3 ItemParam 中没有精确基础名，完整 103,400 个 ROM 树路径也没有相关同名文件。
- 37 项以 0_0 结尾，1 项带有字面版本后缀 3.0.0：FtrSoftdrinkOrange_3.0.0.png；27 项存在可能的联动关键词。这些均为不受信任的命名启发，不代表版本证据。
- 另一支 3.0.3 分支和 3.0.3_Unpack 分支的原始 NCA/0、NCA/1、Bcsv 和 Model Git tree SHA 完全一致：NCA/1 SHA 8809e830a4caa2593916239ef2391b5d17b98dd5；Model SHA ca01708ede6aa6f1b4aa9250d334732ad8a91d20。因此它们不能构成跨游戏版本对照。
- 未提供可复核的独立 3.0.0 ROM / DLC / 更新分区版本快照。40 项不能判为已从 3.0.3 删除或确实包含于某一其他版本；也不能从社区 CDN 补图冒充 ROM。

## 下一道真实技术验证门槛

1. 如果只为了 ACNHPokerCore 使用现有 344 张图，优先复核程序所读 CSV 的 iName 与既有 ROM PNG 名称及安装目录约定，可通过显式只读映射索引来实现，不需伪造 344 张基础名称 PNG。
2. 如果要证明 Nintendo 游戏默认图标选图过程，则需要实际游戏的 itemID、body/fabric 值、命中的原版 Layout 资源名和调用记录。仅 ItemRemake 的 30 项 ID 关联不充分。
3. 要定位 40 项是否为版本差异，须有另一游戏版本真正的原始 RomFS Git tree 或可验来源；按实际二进制列表与当前 NCA Git SHA 逐项核查，并区分安装内容包、DLC 以及目录列表自身的生成策略。
