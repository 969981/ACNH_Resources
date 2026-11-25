---
title: "ItemSize — 家具尺寸"
tags: [acnh, bcsv, source]
version: "3.0.3"
status: partial
---
# ItemSize.bcsv — 家具尺寸

返回 [BCSV 专题](README.md) · [BCSV 索引](../BCSV-Index.md) · [原版尺寸](../../Furniture/Item-Size.md) · [摆放与承载](../../Furniture/Placement-and-Stacking.md)

## 原始来源与用途

定义宽高半格整数，涵盖地面、墙面、地毯和柱子。

[原版 ItemSize.bcsv](https://github.com/969981/ACNH_Resources/blob/4f70fc9d49bcc4fd0abf575ef06571b5ad479014/e10617820db06889e1638499478da0de_NCA/1/Bcsv/ItemSize.bcsv)

| 属性 | 值 |
| --- | --- |
| 记录数 | 28 |
| 行长 | 80 B |
| 字段数 | 8 |
| Git blob | `3f3203cdcb0023356ba744224dcd3d32a2e3fb16` |
| 证据 | 本轮实际读取原版二进制结构与标签样本 |

## 字段结构

全部字段描述符如下；宽度是到下一字段偏移的跨度，可能包含填充字节。

| Hash | 偏移 | 字节跨度 | 当前语义 |
| --- | ---: | ---: | --- |
| `801351E6` | 0x04 | 4 | 未知，保留原始字节 |
| `09B64264` | 0x08 | 2 | 未知，保留原始字节 |
| `3CF05708` | 0x0A | 2 | 未知，保留原始字节 |
| `54706054` | 0x0C | 2 | 定义 ID |
| `16B8F524` | 0x0E | 1 | 宽度，半格 |
| `BCB13DAF` | 0x0F | 1 | 高/深，半格 |
| `87BF00E8` | 0x10 | 32 | 标签 |
| `977ADFCE` | 0x30 | 32 | 说明 |

## 关联与研究边界

宽高除以 2 得到格数；原版标签 CRC32 与 ItemParam E06FB090 对账。矩形尺寸不代表真实碰撞或承载点。

## 解析与导出

在 research 分支仓库根运行：

```powershell
uv run --script Scripts/bcsv/extract.py --table ItemSize --verify-303
```

输出 out/bcsv/ItemSize.schema.json、ItemSize.csv、ItemSize.jsonl；CSV/JSONL 包含原始字段十六进制和显式类型列。解析方式见 [BCSV 二进制格式](Format.md)。脚本：[extract.py](https://github.com/969981/ACNH_Resources/blob/82b7c5ce5afc83ec63312157dd3be0f12afd6d42/Scripts/bcsv/extract.py)。执行结果需读取实际 CI 产物后确认。
