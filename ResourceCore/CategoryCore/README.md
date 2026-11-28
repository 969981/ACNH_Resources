---
title: ACNHCategoryCore V1
status: static-source-join-runtime-pending
game_version: 3.0.3
---
# ACNHCategoryCore V1 — ADB-001～016 分类研究

原版来源锁定：`3a09c2da58612560433f9b2b3a97ee3c1aa4fe5b`；原始 ROM 与 UnPack 不修改。
本目录是独立的业务分类及静态证据数据库，供网页、机器人和 ACNH-Studio 后续消费，暂不是派送授权库。

## 目录
- `ResourceCore/CategoryCore/build.py`：从原版解包表与 R84 产物重建 SQLite/CSV。
- `ResourceCore/CategoryCore/web_kind_mapping.csv`：189 类原版到网页分类候选。
- `ResourceCore/CategoryCore/output/`：CI 生成 SQLite、全量分类 CSV、联动 CSV、summary.json、manifest.json。
- `.github/workflows/acnh303-category-core-v1.yml`：独立构建验证，产物归档及提交至专用分支。

## 已有本地验收
11,178 ItemParam，189 ItemKind，256 ItemUIFurnitureCategory，60 UI group，318 ItemFrom，117 ItemOutfitCategory，1306 ItemRemake definitions，1785 non-FFFF references，156492 item locale，3136 UI text。
CRC32 数据域关联：5270EB75 → ItemKind；8221388C → UI category；DB1A2F07 → ItemFrom；D61205D0 → group candidate；7724BF93 → outfit candidate；CB5EB33F → remake definition ID。
原版字段逐字节核对；Native 消费者尚待验证，不能等同于运行时拾取、投放、交易许可。
ItemFilter 22 条是场景筛选，不是 UI 分类。保留 row index、UniqueID、CRC32 各自编号空间。
Sanrio 79、Mario 33、Zelda 28、Splatoon 28、NEST/LEGO 20、PocketCamp 11：按获取来源统计，不含所有关联收藏品与改造组合。
来源：Actions 45199513614 artifact 14830765861，SHA256 98874de045b29a4f937ee2c89b2264f47605d6bb5adac1496098ee0e02c38f1e。
原版 ItemParam SHA256 9f31230158ab9ace881fe6e5c64579e206f5318646d8d77d8ac7c197abed3609。
原版分类表见 UnPack/1/Bcsv/。获取来源解锁静态证据见 derived/3.0.3/ghidra12.2/c/68/01b168d0.c。
三丽鸥解锁 flag 与道具交易/村民接走分开建模；DLC 来源不等于必须拥有 DLC 才能使用。
村民 417 / 407 ordinary / 6 Sanrio / 2 Splatoon / 2 Zelda 已有 docs/25-R92-Villager-Encyclopedia-Recruitment-Save-Evidence.md；此轮未生成村民新数据库。
## 后续
追踪四个字段的 Native 消费者、DLC WherearenItemKind/WherearenCatalogOpen、分类多语言绑定、家具系列枚举，以及拾取/联机存档验证。所有未验证运行时能力保持 NULL。
