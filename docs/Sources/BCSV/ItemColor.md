---
title: "ItemColor — 颜色定义"
tags: [acnh, bcsv, source]
version: "3.0.3"
status: partial
---
# ItemColor.bcsv — 颜色定义

返回 [BCSV 专题](README.md) · [BCSV 索引](../BCSV-Index.md) · [网页分类规划](../../Items/Web-Catalog-Taxonomy.md)

## 原始来源与用途

样本 Orange、Red、Pink、Purple；用于颜色字典，是否对应基础颜色、改造色或排序色需按调用方确认。

[原版 ItemColor.bcsv](https://github.com/969981/ACNH_Resources/blob/4f70fc9d49bcc4fd0abf575ef06571b5ad479014/e10617820db06889e1638499478da0de_NCA/1/Bcsv/ItemColor.bcsv)

| 属性 | 值 |
| --- | --- |
| 记录数 | 15 |
| 行长 | 72 B |
| 字段数 | 3 |
| Git blob | `7c4155fc935f62bbc7674f5e69ed0e7072faf2b1` |
| 证据 | 本轮实际读取原版二进制结构与标签样本 |

## 字段结构

全部字段描述符如下；宽度是到下一字段偏移的跨度，可能包含填充字节。

| Hash | 偏移 | 字节跨度 | 当前语义 |
| --- | ---: | ---: | --- |
| `54706054` | 0x04 | 2 | 定义 ID |
| `87BF00E8` | 0x06 | 32 | 颜色标签 |
| `977ADFCE` | 0x26 | 34 | 日文说明 |

## 关联与研究边界

原版颜色 ID、标签、CRC32 候选与 ItemParam/款式记录对账，区分基础物品与变体颜色。

## 解析与导出

在 research 分支仓库根运行：

```powershell
uv run --script Scripts/bcsv/extract.py --table ItemColor --verify-303
```

输出 out/bcsv/ItemColor.schema.json、ItemColor.csv、ItemColor.jsonl；CSV/JSONL 包含原始字段十六进制和显式类型列。解析方式见 [BCSV 二进制格式](Format.md)。脚本：[extract.py](https://github.com/969981/ACNH_Resources/blob/82b7c5ce5afc83ec63312157dd3be0f12afd6d42/Scripts/bcsv/extract.py)。执行结果需读取实际 CI 产物后确认。
