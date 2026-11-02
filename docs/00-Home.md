---
title: ACNH 3.0.3 解包知识库
aliases: [ACNH Resource Vault, 资源解包主页]
tags: [ACNH, 3.0.3, index]
status: active
---
# ACNH 3.0.3 | 资源与解包知识库

本 `docs/` 目录可直接作为 **Obsidian Vault** 打开。使用双向链接组织资源来源、格式、解析器、输出产物和证据。

> [!warning] 状态说明
> 原始 NCA 提取文件全部只读。已有部分真实解析结果，但 **103,400 个 RomFS 文件不等于 103,400 个完成语义解码的文件**。没有真实输出的文件不会伪造 JSON/PNG/WAV。

## 导航
- [[01-Source-Tree|原始目录结构与索引]]
- [[02-Format-Catalog|文件格式、内容与转换]]
- [[03-Unpack-Workflow|工具使用与批量解包]]
- [[07-Incremental-Batches|增量分片和 SHA-256 验收]]
- [[08-Next-Wave-FMAA-AAL-BARS|四类扩容 / FMAA / AAL / BARS 新阶段]]
- [[ACNH303_ROUND49_FMAA_RUNTIME_WRITE_AAL_CALL_RETURN|R49 FMAA ShaderParam 动态写入 / AAL BLR X8 取证]]
- [[ACNH303_R50_ORIGINAL_ITEM_UI_MAPPING|R50 原版图片 ItemRemake ID / 其他 UI Layout 来源]]
- [[ACNH303_R52_POKERCORE_FALLBACK_AND_40|R52 314 项 PokerCore 图标回退 / 40 项原始版本缺口]]
- [[ACNH303_R53_R54_CLIENT_CSV_VERSION_EVIDENCE|R53–R54 客户端 ID/iName 精确映射和历史版本对照]]
- [[04-Output-Rules|UnPack 命名与映射规范]]
- [[05-Progress|已验证成果、限制与后续]]
- [[06-Evidence|校验、格式研究及历史记录]]
- [[目录分类/00-Category-Index|24 个 RomFS 分类笔记]]

## 核心目录
- `e10617820db06889e1638499478da0de_NCA/0/` — ExeFS 原文件，包括 `main`、`ACNH3.0.3.elf` 等
- `e10617820db06889e1638499478da0de_NCA/1/` — RomFS 原文件、24 个一级分类
- `Scripts/` — 从原 3.0.3 分支复用的真实解包程序和新组织工具
- `UnPack/0/` 和 `UnPack/1/` — 真实转换输出；未处理的源不会凭空生成输出
- `UnPack/_meta/` — 文件映射、SHA-256 和状态记录

## 记录规范
每篇研究笔记应包含：**源路径、扩展名与魔数、文件结构/字段证据、调用的脚本及参数、输出路径、输入输出 SHA-256、验证级别、仍不确定的结论**。

分级：L0 原始清点 → L1 容器识别 → L2 结构解析 → L3 真实通用格式转换（GLB/PNG/WAV）→ L4 运行时语义等价验证。