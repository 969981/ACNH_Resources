---
title: ACNH 3.0.3 · 双 JSON 原版溯源与全量对账
aliases: [ACNH303 JSON Research, villager_db_multi, web_db_multi]
tags: [ACNH, 3.0.3, Obsidian, BCSV, MSBT, SQLite, provenance]
status: native-derived-csv-crosscheck-completed
updated: 2026-11-14
---
# ACNH 3.0.3 · 两份旧 JSON 原版来源研究

> [!summary] 2026-11-14 已验证
> 417 位村民的 ResName、Label、CNzh、TWzh、JPja 和 **EUen** 全部与既有原版导出匹配。旧 nameEn 应使用 EUen，不能写作 USen。
>
> 10,789 条旧非 DIY 物品的 ID、ResName 全部与 3.0.3 原生导出一致；原生 ItemParam 11,178 条，**额外 389 个 ID**。
>
> 旧网页还有 **924 条 DIY**（全共用展示商品 ID 5794，以 recipe_id 区分）和 **17,170 条变体**（来自 1,782 个物品）。两份 JSON 均非可直接从 RomFS 找到的同名原始文件。

## R85 · 道具类别与村民邀请判定（原版静态证据）
- [[ACNH303_JSON_Rebuild/docs/11-原版道具分类与操作标志|189 类 ItemKind 原版标志及 11,178 个物品关联]]
- [[ACNH303_JSON_Rebuild/docs/12-村民入住跨岛接走露营地和amiibo|417 村民、12 条邀请/搬家/amiibo 原版事件流程]]
- [[ACNH303_JSON_Rebuild/docs/13-Ghidra动态判定追踪与验收|两个 Ghidra 原生候选函数与验收步骤]]

## 原始文件读取、字段解释与双 JSON 重建
- [[ACNH303_JSON_Rebuild/docs/07-原始格式如何读取|BCSV / Zstd / SARC / MSBT 读取及偏移]]
- [[ACNH303_JSON_Rebuild/docs/08-字段数据字典总览|五张原版表 265 个字段与含义]]
- [[ACNH303_JSON_Rebuild/docs/09-生成双JSON的关联流程|417 村民与 11,713 旧站记录生成关系]]
- [[ACNH303_JSON_Rebuild/docs/10-证据分级与已知错误|配方成品/材料、ItemRemake 外键纠错]]

## 阅读导航
1. [[01-原始来源和解包路径]] — BCSV、MSBT、SARC、Zstd 和 ROM 路径
2. [[02-字段溯源与SQLite模型]] — 旧字段与原版字段映射、数据库结构
3. [[03-全量对账与389条差异]] — 新增 389 ID、英文地区与展示名差异
4. [[04-DIY与变体重建]] — 924 配方和 17,170 变体的主键与溯源
5. [[05-复现命令及脚本]] — 运行脚本与重建验证
6. [[06-尚待验证与PR状态]] — 证据边界和后续工作

## 随仓库提交的复核材料
- [[README]]：目录说明；该目录是原有 docs Obsidian Vault 的一个专题
- Scripts/audit_acnh303_json.py：只读、Python 标准库的差异分析脚本
- evidence/reports/audit_report.json：本轮机器审计结果及输入 SHA-256
- evidence/reports/native_only_389.csv：原版额外 389 ID 全清单
- evidence/reports/villager_us_eu_regional_differences.csv：两种英语地区名差异

> [!warning] 输入数据分离
> 仓库已有原生 BCSV、MSBT 以及 R77/R80/R82/R84 派生数据库。本次旧 JSON 两份、完整 8MB 原生导出 CSV、4MB 名称逐项报告及 17,170 变体全量 CSV 未重复写入 Git；这些保存在本轮离线研究包中。重跑对账脚本需自行提供这些输入路径。

延伸阅读：[[ACNH303_JSON_MULTILINGUAL_DATABASE_REBUILD]]、[[ACNH303_R76_R81_NATIVE_MULTILINGUAL_ITEM_DATABASE]]、[[ACNH303_R84_ITEMPARAM_107_FIELDS_SOURCE_AND_EXPORT]]。
