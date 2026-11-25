---
title: "ItemParam — 物品核心参数"
tags: [acnh, bcsv, source]
version: "3.0.3"
status: partial
---
# ItemParam.bcsv — 物品核心参数

返回 [BCSV 专题](README.md) · [BCSV 索引](../BCSV-Index.md) · [物品分类](../../Items/Item-Classification.md) · [家具空间属性](../../Furniture/Furniture-Spatial.md)

## 原始来源与用途

每条记录描述一个原生物品；分类、资源、尺寸及其他属性的关联中心。R84 固定历史证据，本轮未重读全表。

[原版 ItemParam.bcsv](https://github.com/969981/ACNH_Resources/blob/4f70fc9d49bcc4fd0abf575ef06571b5ad479014/e10617820db06889e1638499478da0de_NCA/1/Bcsv/ItemParam.bcsv)

| 属性 | 值 |
| --- | --- |
| 记录数 | 11178 |
| 行长 | 548 B |
| 字段数 | 107 |
| Git blob | `431bbd26a575197a1bd963c1721b093ae3e4df84` |
| 证据 | 历史 R84 固定源字典；本轮完整解析待 CI |

## 字段结构

仅列当前与分类研究直接相关的字段；其余字段由 schema.json 全量导出。

| Hash | 偏移 | 字节跨度 | 当前语义 |
| --- | ---: | ---: | --- |
| `54706054` | 0x118 | 2 | ItemID，u16（历史 R84） |
| `FC275E86` | 0x141 | 32 | ItemKind 标签（NHSE 生成器证据） |
| `E06FB090` | 0xC8 | 4 | 尺寸引用原始值 |
| `690E3379` | 0x0C | 4 | 服装组引用原始值 |
| `348D7B06` | 0x84 | 4 | 菜单图标引用原始值 |
| `A6B1A7FD` | 0x10 | 4 | 排序分组候选 |
| `B7CCCD84` | 0x14 | 4 | 排序颜色候选 |
| `02169DC7` | 0x108 | 2 | 排序顺序候选 |

## 关联与研究边界

与 ItemKind 通过标签、ItemSize 与 ItemClothGroup 通过候选 CRC32/原始引用关联；ItemUIFurnitureCategory 的具体引用字段仍待核验。全量扫描必须区分空值、歧义和有效 ID。

## 解析与导出

在 research 分支仓库根运行：

```powershell
uv run --script Scripts/bcsv/extract.py --table ItemParam --verify-303
```

输出 out/bcsv/ItemParam.schema.json、ItemParam.csv、ItemParam.jsonl；CSV/JSONL 包含原始字段十六进制和显式类型列。解析方式见 [BCSV 二进制格式](Format.md)。脚本：[extract.py](https://github.com/969981/ACNH_Resources/blob/82b7c5ce5afc83ec63312157dd3be0f12afd6d42/Scripts/bcsv/extract.py)。执行结果需读取实际 CI 产物后确认。
