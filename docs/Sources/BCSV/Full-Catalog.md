---
title: BCSV 全量原生数据字典
tags: [acnh, bcsv, data-dictionary]
status: implemented
---
# BCSV 全量原生数据字典

返回 [专题](README.md) · [工具](Toolkit.md)。

统一 research 分支，原版资源不变。运行：

```powershell
uv run --script Scripts/bcsv/catalog.py --verify-git
```

- inventory.json：全目录文件清单，SHA256、Git blob、记录/字段结构；不支持的格式保留失败原因。
- field-hashes.json：按 Hash 汇总表、偏移、跨度、已登记的表级解释；不将相同 Hash 直接视为同一类型。
- reference-candidates.json：4 字节字段与目标标签 CRC32 值域的候选关系，至少 3 个不同值、行及去重匹配率均 >=80%，排除 0/FFFFFFFF；仅候选，不等于真实外键。
- docs/：自动 Markdown 结构索引、逐表页面、全量 Hash 字典和引用候选，均有相对链接。
- summary.json：文件、解析、失败、行、字段和候选数量。

暂不自动推断数值 ID 外键、字符串外键或跨表业务语义。全量 CI 产物待实际验收。[CI](https://github.com/969981/ACNH_Resources/actions/workflows/acnh303-bcsv-catalog.yml)。
