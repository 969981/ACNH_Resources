---
title: BCSV 数据索引
tags: [acnh, bcsv, source]
version: "3.0.3"
---
# BCSV 数据索引

返回 [首页](../README.md) · [物品分类](../Items/Item-Classification.md) · [家具空间属性](../Furniture/Furniture-Spatial.md)。

原始资源基线提交：4f70fc9d49bcc4fd0abf575ef06571b5ad479014。

| 文件 | 用途及已知证据 |
| --- | --- |
| [ItemParam.bcsv](https://github.com/969981/ACNH_Resources/blob/4f70fc9d49bcc4fd0abf575ef06571b5ad479014/e10617820db06889e1638499478da0de_NCA/1/Bcsv/ItemParam.bcsv) | 历史 R84 记录 11178 行、107 字段、548 字节/行，SHA256 9f31230158ab9ace881fe6e5c64579e206f5318646d8d77d8ac7c197abed3609；本轮未重读完整文件 |
| [ItemKind.bcsv](https://github.com/969981/ACNH_Resources/blob/4f70fc9d49bcc4fd0abf575ef06571b5ad479014/e10617820db06889e1638499478da0de_NCA/1/Bcsv/ItemKind.bcsv) | 原始读取 189 行、31 字段、152 字节/行 |
| [ItemSize.bcsv](https://github.com/969981/ACNH_Resources/blob/4f70fc9d49bcc4fd0abf575ef06571b5ad479014/e10617820db06889e1638499478da0de_NCA/1/Bcsv/ItemSize.bcsv) | 原始读取 28 行、8 字段、80 字节/行 |

参考：[NHSE BCSV 解析器](https://github.com/kwsch/NHSE/blob/cb0745415945776f73375bf0a434a8babf059307/NHSE.Parsing/BCSV/BCSV.cs)，[NHSE 数据生成器](https://github.com/kwsch/NHSE/blob/cb0745415945776f73375bf0a434a8babf059307/NHSE.Parsing/GameBCSVDumper.cs)。

## 专项文档

[BCSV 原生数据研究专题](BCSV/README.md) · [二进制格式](BCSV/Format.md) · [uv Python 提取工具](BCSV/Toolkit.md)。

- [ItemParam.bcsv](BCSV/ItemParam.md) — 物品核心参数
- [ItemKind.bcsv](BCSV/ItemKind.md) — 物品类型与行为规则
- [ItemUIFurnitureCategory.bcsv](BCSV/ItemUIFurnitureCategory.md) — 原生 UI 用途分类
- [ItemSize.bcsv](BCSV/ItemSize.md) — 家具尺寸
- [ItemAct.bcsv](BCSV/ItemAct.md) — 物品交互动作
- [ItemColor.bcsv](BCSV/ItemColor.md) — 颜色定义
- [ItemClothGroup.bcsv](BCSV/ItemClothGroup.md) — 服装分组
- [ItemUIContextMenu.bcsv](BCSV/ItemUIContextMenu.md) — 物品上下文操作菜单
- [ItemFilter.bcsv](BCSV/ItemFilter.md) — 特定业务物品过滤
