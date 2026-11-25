---
title: BCSV 二进制结构与解析
tags: [acnh, bcsv, format]
---
# BCSV 二进制结构与解析

返回 [BCSV 专题](README.md) · [工具使用](Toolkit.md)。

本轮实读八张核心表均使用 little-endian 扩展头，文件字节 0x0C～0x0F 为 VSCB；NHSE 把其整数 magic 表述为 BCSV。旧式短头由 flag 决定。

| 偏移 | 长度 | 含义 |
| --- | ---: | --- |
| 0x00 | 4 | 行数 u32 |
| 0x04 | 4 | 行长 u32 |
| 0x08 | 2 | 字段数 u16 |
| 0x0A | 1 | 扩展头标志 |
| 0x0B | 1 | 第二标志，语义未验证 |
| 0x0C | 4 | 扩展头 magic VSCB |
| 0x10 | 4 | 未知，本轮八张表值为 30000 |
| 0x14 | 4 | 未知 |
| 0x18 | 4 | 未知 |

字段表起点 0x1C（扩展）或 0x0C（短头）。每项 8 字节：u32 Hash，u32 行内偏移。字段宽度为相邻偏移差；最后字段到行尾，可能含填充。记录起点 = 头大小 + 8 × 字段数。记录 i 地址 = 记录起点 + i × 行长。字段地址再加字段偏移。严格校验边界、偏移、文件长度。

例如 ItemUIFurnitureCategory：28 + 4×8 = 60，60 + 256×140 = 35900 字节。

## 类型与 Hash
BCSV 描述符没有独立的可靠业务类型；相同宽度可能为整数、浮点、Hash、位域等。未知保留十六进制；仅明确字段按表级 schema 解码。原始字符串按 NUL 截断 UTF-8，保留完整原始字段字节。CRC32 使用 zlib.crc32(label.encode("utf-8"))，大小写敏感。匹配候选不自动证明语义。

[NHSE BCSV.cs](https://github.com/kwsch/NHSE/blob/cb0745415945776f73375bf0a434a8babf059307/NHSE.Parsing/BCSV/BCSV.cs) · [GameBCSVDumper](https://github.com/kwsch/NHSE/blob/cb0745415945776f73375bf0a434a8babf059307/NHSE.Parsing/GameBCSVDumper.cs)。
