---
title: "ItemKind — 物品类型与行为规则"
tags: [acnh, bcsv, source]
version: "3.0.3"
status: partial
---
# ItemKind.bcsv — 物品类型与行为规则

返回 [BCSV 专题](README.md) · [BCSV 索引](../BCSV-Index.md) · [物品分类](../../Items/Item-Classification.md)

## 原始来源与用途

记录 Ftr、Dishes、Drink、CookingMaterial 等类型规则。NHSE 的枚举与该表并非一一对应。

[原版 ItemKind.bcsv](https://github.com/969981/ACNH_Resources/blob/4f70fc9d49bcc4fd0abf575ef06571b5ad479014/e10617820db06889e1638499478da0de_NCA/1/Bcsv/ItemKind.bcsv)

| 属性 | 值 |
| --- | --- |
| 记录数 | 189 |
| 行长 | 152 B |
| 字段数 | 31 |
| Git blob | `0541661b1409455962c73c9cc7e2ea4f13d709fd` |
| 证据 | 本轮实际读取原版二进制结构与标签样本 |

## 字段结构

全部字段描述符如下；宽度是到下一字段偏移的跨度，可能包含填充字节。

| Hash | 偏移 | 字节跨度 | 当前语义 |
| --- | ---: | ---: | --- |
| `1B936128` | 0x04 | 4 | 未知，保留原始字节 |
| `268E2E2B` | 0x08 | 4 | 未知，保留原始字节 |
| `D606A6C4` | 0x0C | 4 | 未知，保留原始字节 |
| `6B749E8A` | 0x10 | 4 | 未知，保留原始字节 |
| `29C41A0D` | 0x14 | 4 | 未知，保留原始字节 |
| `4D655154` | 0x18 | 4 | 未知，保留原始字节 |
| `4C9BA961` | 0x1C | 2 | MultiHoldMaxNum 原始有符号值（NHSE 生成器证据） |
| `0CE69142` | 0x1E | 2 | 未知，保留原始字节 |
| `54706054` | 0x20 | 2 | 定义 ID |
| `472724ED` | 0x22 | 1 | 未知，保留原始字节 |
| `9B433DD5` | 0x23 | 1 | 未知，保留原始字节 |
| `90BC0855` | 0x24 | 1 | 未知，保留原始字节 |
| `06012035` | 0x25 | 1 | 未知，保留原始字节 |
| `2C1B3B5B` | 0x26 | 1 | 未知，保留原始字节 |
| `0732BB98` | 0x27 | 1 | 未知，保留原始字节 |
| `D4697FF8` | 0x28 | 1 | 未知，保留原始字节 |
| `5D389FBF` | 0x29 | 1 | 未知，保留原始字节 |
| `D223F25C` | 0x2A | 1 | 未知，保留原始字节 |
| `3D4F3F42` | 0x2B | 1 | 未知，保留原始字节 |
| `B52FE52E` | 0x2C | 1 | 未知，保留原始字节 |
| `DAE27694` | 0x2D | 1 | 未知，保留原始字节 |
| `1BCD4858` | 0x2E | 1 | 未知，保留原始字节 |
| `C8A5A762` | 0x2F | 1 | 未知，保留原始字节 |
| `49129B27` | 0x30 | 1 | 未知，保留原始字节 |
| `5218C48C` | 0x31 | 1 | 未知，保留原始字节 |
| `923F8E59` | 0x32 | 1 | 未知，保留原始字节 |
| `C37A683C` | 0x33 | 1 | 未知，保留原始字节 |
| `FD3B7C9A` | 0x34 | 1 | 未知，保留原始字节 |
| `87BF00E8` | 0x35 | 32 | 类型标签 |
| `036E8EBE` | 0x55 | 64 | 日文说明 |
| `29FE5BBD` | 0x95 | 3 | 未知，保留原始字节 |

## 关联与研究边界

ItemParam 原始类型标签可能有 Kind_ 前缀；不要不加验证就将所有标签加前缀。NHSE 堆叠生成器将 -1 转为 10、0 转为 1，属于其派生规则，不能覆盖原始值。

## 解析与导出

在 research 分支仓库根运行：

```powershell
uv run --script Scripts/bcsv/extract.py --table ItemKind --verify-303
```

输出 out/bcsv/ItemKind.schema.json、ItemKind.csv、ItemKind.jsonl；CSV/JSONL 包含原始字段十六进制和显式类型列。解析方式见 [BCSV 二进制格式](Format.md)。脚本：[extract.py](https://github.com/969981/ACNH_Resources/blob/82b7c5ce5afc83ec63312157dd3be0f12afd6d42/Scripts/bcsv/extract.py)。执行结果需读取实际 CI 产物后确认。
