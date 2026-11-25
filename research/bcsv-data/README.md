# BCSV 三层数据

- raw/：234 张原始 Hash 列名 CSV，复现历史 UnPack 解析约定。
- named/：234 张名称候选回填 CSV，仅替换列头，所有单元格、行序、列序完全一致。
- schema/：逐表原始结构与列名映射，保留 Hash、偏移、跨度、全部签名及语义证据。
- manifest.json / summary.json：逐表来源、两套 CSV SHA256、全量统计。

1/2/4/8 字节跨度按无符号小端整数输出，其他跨度按可打印 UTF-8 NUL 截断或 hex 输出；不解析枚举、浮点、符号位、业务含义或翻译。CSV 不保证保留字符串尾部填充，原始 BCSV 是无损权威来源。\_row_offset_raw 是原始行头 u32，非推测地址。名称候选仅在唯一且类型宽度兼容时回填；不确定字段保留 hash_，重名追加 Hash。列名不代表已证实原生语义。

```powershell
uv run --script Scripts/bcsv/export_views.py
```

生成在 out/bcsv-views，CI 验证后发布到本目录。 [Obsidian 表索引](../../docs/Sources/BCSV/Generated/README.md)。

## 第三层

[decoded/](decoded/README.md)：候选类型、枚举、跨表引用、分类和多语言。
