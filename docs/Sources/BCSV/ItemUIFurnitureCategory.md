---
title: "ItemUIFurnitureCategory — 原生 UI 用途分类"
tags: [acnh, bcsv, source]
version: "3.0.3"
status: partial
---
# ItemUIFurnitureCategory.bcsv — 原生 UI 用途分类

返回 [BCSV 专题](README.md) · [BCSV 索引](../BCSV-Index.md) · [256 项定义](../../Items/Native-UI-Furniture-Category.md) · [60 个分组](../../Items/Native-UI-Category-Groups.md) · [网站分类规划](../../Items/Web-Catalog-Taxonomy.md)

## 原始来源与用途

包含家具用途、装修风格、服装、联名等分类定义。256 个唯一 ID 与标签，60 个组 Hash。

[原版 ItemUIFurnitureCategory.bcsv](https://github.com/969981/ACNH_Resources/blob/4f70fc9d49bcc4fd0abf575ef06571b5ad479014/e10617820db06889e1638499478da0de_NCA/1/Bcsv/ItemUIFurnitureCategory.bcsv)

| 属性 | 值 |
| --- | --- |
| 记录数 | 256 |
| 行长 | 140 B |
| 字段数 | 4 |
| Git blob | `113a53dfdd666917e0306d79227576291666723d` |
| 证据 | 本轮实际读取原版二进制结构与标签样本 |

## 字段结构

全部字段描述符如下；宽度是到下一字段偏移的跨度，可能包含填充字节。

| Hash | 偏移 | 字节跨度 | 当前语义 |
| --- | ---: | ---: | --- |
| `A4686E5D` | 0x04 | 4 | 分组原始 Hash；正式字段名及消费者待验证 |
| `54706054` | 0x08 | 2 | 细分类 ID |
| `13AB5198` | 0x0A | 64 | 英文标签 |
| `036E8EBE` | 0x4A | 66 | 日文说明 |

## 关联与研究边界

按 A4686E5D 分组；Chair/Sofa 同组 0x64C26B81。标准 CRC32 名称候选 57/60；与 STR_CategoryName 与 ItemParam 的全量关联待验证。

## 解析与导出

在 research 分支仓库根运行：

```powershell
uv run --script Scripts/bcsv/extract.py --table ItemUIFurnitureCategory --verify-303
```

输出 out/bcsv/ItemUIFurnitureCategory.schema.json、ItemUIFurnitureCategory.csv、ItemUIFurnitureCategory.jsonl；CSV/JSONL 包含原始字段十六进制和显式类型列。解析方式见 [BCSV 二进制格式](Format.md)。脚本：[extract.py](https://github.com/969981/ACNH_Resources/blob/82b7c5ce5afc83ec63312157dd3be0f12afd6d42/Scripts/bcsv/extract.py)。执行结果需读取实际 CI 产物后确认。
