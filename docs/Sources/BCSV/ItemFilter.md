---
title: "ItemFilter — 特定业务物品过滤"
tags: [acnh, bcsv, source]
version: "3.0.3"
status: partial
---
# ItemFilter.bcsv — 特定业务物品过滤

返回 [BCSV 专题](README.md) · [BCSV 索引](../BCSV-Index.md) · [物品分类](../../Items/Item-Classification.md)

## 原始来源与用途

样本 RcoDonationForMuseum、OwlTentDonation0、OwlDonation、Fossils、HarvestFoodStuff1。为场景过滤规则，不是通用商品导航。

[原版 ItemFilter.bcsv](https://github.com/969981/ACNH_Resources/blob/4f70fc9d49bcc4fd0abf575ef06571b5ad479014/e10617820db06889e1638499478da0de_NCA/1/Bcsv/ItemFilter.bcsv)

| 属性 | 值 |
| --- | --- |
| 记录数 | 22 |
| 行长 | 72 B |
| 字段数 | 19 |
| Git blob | `444e9eb03b1ab3f9bd646c50bbd2401e9cb585eb` |
| 证据 | 本轮实际读取原版二进制结构与标签样本 |

## 字段结构

全部字段描述符如下；宽度是到下一字段偏移的跨度，可能包含填充字节。

| Hash | 偏移 | 字节跨度 | 当前语义 |
| --- | ---: | ---: | --- |
| `AB9B88D6` | 0x04 | 2 | 未知，保留原始字节 |
| `D6424DB4` | 0x06 | 2 | 未知，保留原始字节 |
| `EB226404` | 0x08 | 2 | 未知，保留原始字节 |
| `AC821ED4` | 0x0A | 2 | 未知，保留原始字节 |
| `91E23764` | 0x0C | 2 | 未知，保留原始字节 |
| `23C2EB74` | 0x0E | 2 | 未知，保留原始字节 |
| `1EA2C2C4` | 0x10 | 2 | 未知，保留原始字节 |
| `EC3BF206` | 0x12 | 2 | 未知，保留原始字节 |
| `D15BDBB6` | 0x14 | 2 | 未知，保留原始字节 |
| `637B07A6` | 0x16 | 2 | 未知，保留原始字节 |
| `5E1B2E16` | 0x18 | 2 | 未知，保留原始字节 |
| `19BB54C6` | 0x1A | 2 | 未知，保留原始字节 |
| `24DB7D76` | 0x1C | 2 | 未知，保留原始字节 |
| `A68BEAA7` | 0x1E | 2 | 未知，保留原始字节 |
| `9BEBC317` | 0x20 | 2 | 未知，保留原始字节 |
| `54706054` | 0x22 | 2 | 定义 ID |
| `FFE069A3` | 0x24 | 1 | 未知，保留原始字节 |
| `8771AA09` | 0x25 | 1 | 未知，保留原始字节 |
| `87BF00E8` | 0x26 | 34 | 过滤规则标签 |

## 关联与研究边界

按规则名称定位原生消费者；未知字段保留字节，不直接解释为物品 ID 或布尔位。

## 解析与导出

在 research 分支仓库根运行：

```powershell
uv run --script Scripts/bcsv/extract.py --table ItemFilter --verify-303
```

输出 out/bcsv/ItemFilter.schema.json、ItemFilter.csv、ItemFilter.jsonl；CSV/JSONL 包含原始字段十六进制和显式类型列。解析方式见 [BCSV 二进制格式](Format.md)。脚本：[extract.py](https://github.com/969981/ACNH_Resources/blob/82b7c5ce5afc83ec63312157dd3be0f12afd6d42/Scripts/bcsv/extract.py)。执行结果需读取实际 CI 产物后确认。
