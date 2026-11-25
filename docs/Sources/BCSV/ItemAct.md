---
title: "ItemAct — 物品交互动作"
tags: [acnh, bcsv, source]
version: "3.0.3"
status: partial
---
# ItemAct.bcsv — 物品交互动作

返回 [BCSV 专题](README.md) · [BCSV 索引](../BCSV-Index.md) · [家具空间属性](../../Furniture/Furniture-Spatial.md)

## 原始来源与用途

样本标签 None、Chair、ChairSp、ChairAll；日文样本为无、普通椅、SP 椅、圆椅。具体动作执行由原生消费者决定。

[原版 ItemAct.bcsv](https://github.com/969981/ACNH_Resources/blob/4f70fc9d49bcc4fd0abf575ef06571b5ad479014/e10617820db06889e1638499478da0de_NCA/1/Bcsv/ItemAct.bcsv)

| 属性 | 值 |
| --- | --- |
| 记录数 | 82 |
| 行长 | 120 B |
| 字段数 | 9 |
| Git blob | `bc59ebec02ddaaa5f2bdefbb9d5b8df19f366d85` |
| 证据 | 本轮实际读取原版二进制结构与标签样本 |

## 字段结构

全部字段描述符如下；宽度是到下一字段偏移的跨度，可能包含填充字节。

| Hash | 偏移 | 字节跨度 | 当前语义 |
| --- | ---: | ---: | --- |
| `EA6A09CC` | 0x04 | 4 | 未知，保留原始字节 |
| `A0839D12` | 0x08 | 4 | 未知，保留原始字节 |
| `8B1904B9` | 0x0C | 4 | 未知，保留原始字节 |
| `54706054` | 0x10 | 2 | 定义 ID |
| `31CB6B0A` | 0x12 | 1 | 未知，保留原始字节 |
| `D2A5C5CF` | 0x13 | 1 | 未知，保留原始字节 |
| `87BF00E8` | 0x14 | 32 | 标签 |
| `036E8EBE` | 0x34 | 64 | 日文说明 |
| `0E387A24` | 0x74 | 4 | 未知，保留原始字节 |

## 关联与研究边界

扫描 ItemParam 引用及原生消费者；不能仅凭标签断言交互、座位数量或实际坐标。

## 解析与导出

在 research 分支仓库根运行：

```powershell
uv run --script Scripts/bcsv/extract.py --table ItemAct --verify-303
```

输出 out/bcsv/ItemAct.schema.json、ItemAct.csv、ItemAct.jsonl；CSV/JSONL 包含原始字段十六进制和显式类型列。解析方式见 [BCSV 二进制格式](Format.md)。脚本：[extract.py](https://github.com/969981/ACNH_Resources/blob/82b7c5ce5afc83ec63312157dd3be0f12afd6d42/Scripts/bcsv/extract.py)。执行结果需读取实际 CI 产物后确认。
