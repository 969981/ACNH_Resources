---
title: BCSV 原生数据研究专题
tags: [acnh, bcsv, moc]
version: "3.0.3"
---
# BCSV 原生数据研究专题

返回 [BCSV 数据索引](../BCSV-Index.md) · [知识库首页](../../README.md)。

[二进制格式与提取方法](Format.md) · [uv Python 工具](Toolkit.md)

| 表 | 用途 | 行数 | 字段数 |
| --- | --- | ---: | ---: |
| [ItemParam](ItemParam.md) | 物品核心参数 | 11178 | 107 |
| [ItemKind](ItemKind.md) | 物品类型与行为规则 | 189 | 31 |
| [ItemUIFurnitureCategory](ItemUIFurnitureCategory.md) | 原生 UI 用途分类 | 256 | 4 |
| [ItemSize](ItemSize.md) | 家具尺寸 | 28 | 8 |
| [ItemAct](ItemAct.md) | 物品交互动作 | 82 | 9 |
| [ItemColor](ItemColor.md) | 颜色定义 | 15 | 3 |
| [ItemClothGroup](ItemClothGroup.md) | 服装分组 | 1462 | 19 |
| [ItemUIContextMenu](ItemUIContextMenu.md) | 物品上下文操作菜单 | 66 | 6 |
| [ItemFilter](ItemFilter.md) | 特定业务物品过滤 | 22 | 19 |

本专题先覆盖九张物品相关核心表。其他 BCSV 可使用通用解析器导出原始字段，不自动推测语义。

[实际 CI 运行及产物](https://github.com/969981/ACNH_Resources/actions/runs/45569451957) 已通过九张核心表的结构与提取验收；详见 [工具手册](Toolkit.md)。

## 全量目录研究

`uv run --script Scripts/bcsv/catalog.py --verify-git` 扫描全目录，生成 inventory.json、field-hashes.json、reference-candidates.json、summary.json 与自动 Markdown docs。引用是 CRC32 值域候选，不是已确认外键。详见 [全量字典研究](Full-Catalog.md)。
