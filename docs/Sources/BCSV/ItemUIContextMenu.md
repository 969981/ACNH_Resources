---
title: "ItemUIContextMenu — 物品上下文操作菜单"
tags: [acnh, bcsv, source]
version: "3.0.3"
status: partial
---
# ItemUIContextMenu.bcsv — 物品上下文操作菜单

返回 [BCSV 专题](README.md) · [BCSV 索引](../BCSV-Index.md) · [物品分类](../../Items/Item-Classification.md)

## 原始来源与用途

样本 Build、StartTimer、StopTimer、LearnRecipe。日文说明及消息编号候选可用来研究操作菜单。

[原版 ItemUIContextMenu.bcsv](https://github.com/969981/ACNH_Resources/blob/4f70fc9d49bcc4fd0abf575ef06571b5ad479014/e10617820db06889e1638499478da0de_NCA/1/Bcsv/ItemUIContextMenu.bcsv)

| 属性 | 值 |
| --- | --- |
| 记录数 | 66 |
| 行长 | 140 B |
| 字段数 | 6 |
| Git blob | `2e7c5a6be628cf57a2b09f6d605b15b41ee392f5` |
| 证据 | 本轮实际读取原版二进制结构与标签样本 |

## 字段结构

全部字段描述符如下；宽度是到下一字段偏移的跨度，可能包含填充字节。

| Hash | 偏移 | 字节跨度 | 当前语义 |
| --- | ---: | ---: | --- |
| `200DD382` | 0x04 | 2 | 未知，保留原始字节 |
| `54706054` | 0x06 | 2 | 定义 ID |
| `F2CE6E17` | 0x08 | 1 | 未知，保留原始字节 |
| `87BF00E8` | 0x09 | 32 | 操作标签 |
| `026F0892` | 0x29 | 32 | 消息编号候选（0128、0105 等） |
| `036E8EBE` | 0x49 | 67 | 日文说明 |

## 关联与研究边界

定位原生菜单消费者与 ItemKind/业务判断；不将菜单项本身作为网站商品类。

## 解析与导出

在 research 分支仓库根运行：

```powershell
uv run --script Scripts/bcsv/extract.py --table ItemUIContextMenu --verify-303
```

输出 out/bcsv/ItemUIContextMenu.schema.json、ItemUIContextMenu.csv、ItemUIContextMenu.jsonl；CSV/JSONL 包含原始字段十六进制和显式类型列。解析方式见 [BCSV 二进制格式](Format.md)。脚本：[extract.py](https://github.com/969981/ACNH_Resources/blob/82b7c5ce5afc83ec63312157dd3be0f12afd6d42/Scripts/bcsv/extract.py)。执行结果需读取实际 CI 产物后确认。
