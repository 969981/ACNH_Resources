---
title: "ItemClothGroup — 服装分组"
tags: [acnh, bcsv, source]
version: "3.0.3"
status: partial
---
# ItemClothGroup.bcsv — 服装分组

返回 [BCSV 专题](README.md) · [BCSV 索引](../BCSV-Index.md) · [物品分类](../../Items/Item-Classification.md)

## 原始来源与用途

样本 None、TopsTexTopCoatL、TopsTexTopTshirtsHKungfu、TopsTexOnepieceAlineNCheer。服装组并非单件物品或颜色。

[原版 ItemClothGroup.bcsv](https://github.com/969981/ACNH_Resources/blob/4f70fc9d49bcc4fd0abf575ef06571b5ad479014/e10617820db06889e1638499478da0de_NCA/1/Bcsv/ItemClothGroup.bcsv)

| 属性 | 值 |
| --- | --- |
| 记录数 | 1462 |
| 行长 | 220 B |
| 字段数 | 19 |
| Git blob | `6f68c682c375931ace7a578031e70505b3bf439a` |
| 证据 | 本轮实际读取原版二进制结构与标签样本 |

## 字段结构

全部字段描述符如下；宽度是到下一字段偏移的跨度，可能包含填充字节。

| Hash | 偏移 | 字节跨度 | 当前语义 |
| --- | ---: | ---: | --- |
| `263C3CED` | 0x04 | 4 | 未知，保留原始字节 |
| `E83C30BE` | 0x08 | 4 | 未知，保留原始字节 |
| `65503F9F` | 0x0C | 2 | 未知，保留原始字节 |
| `54706054` | 0x0E | 2 | 定义 ID |
| `52ADD71D` | 0x10 | 1 | 未知，保留原始字节 |
| `47F8F099` | 0x11 | 1 | 未知，保留原始字节 |
| `44718A37` | 0x12 | 1 | 未知，保留原始字节 |
| `97EBA4FC` | 0x13 | 1 | 未知，保留原始字节 |
| `811B386C` | 0x14 | 1 | 未知，保留原始字节 |
| `93DDC6D7` | 0x15 | 1 | 未知，保留原始字节 |
| `0CD7F9C5` | 0x16 | 1 | 未知，保留原始字节 |
| `1E996A76` | 0x17 | 1 | 未知，保留原始字节 |
| `9079071D` | 0x18 | 1 | 未知，保留原始字节 |
| `BAA1115F` | 0x19 | 1 | 未知，保留原始字节 |
| `8048A3A7` | 0x1A | 1 | 未知，保留原始字节 |
| `83CCBE0F` | 0x1B | 64 | 未知，保留原始字节 |
| `13AB5198` | 0x5B | 64 | 组标签 |
| `036E8EBE` | 0x9B | 64 | 日文说明 |
| `8D7F40E5` | 0xDB | 1 | 未知，保留原始字节 |

## 关联与研究边界

NHSE 从 ItemParam 690E3379 读取组引用；按原始引用对账，并保留款式与组的独立标识。

## 解析与导出

在 research 分支仓库根运行：

```powershell
uv run --script Scripts/bcsv/extract.py --table ItemClothGroup --verify-303
```

输出 out/bcsv/ItemClothGroup.schema.json、ItemClothGroup.csv、ItemClothGroup.jsonl；CSV/JSONL 包含原始字段十六进制和显式类型列。解析方式见 [BCSV 二进制格式](Format.md)。脚本：[extract.py](https://github.com/969981/ACNH_Resources/blob/82b7c5ce5afc83ec63312157dd3be0f12afd6d42/Scripts/bcsv/extract.py)。执行结果需读取实际 CI 产物后确认。
