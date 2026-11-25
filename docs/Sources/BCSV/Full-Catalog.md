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

暂不自动推断数值 ID 外键、字符串外键或跨表业务语义。首轮实际验收已完成。[CI](https://github.com/969981/ACNH_Resources/actions/workflows/acnh303-bcsv-catalog.yml)。

## 首轮实际验收（2026-11-25）

[Actions #45569991407](https://github.com/969981/ACNH_Resources/actions/runs/45569991407)：234/234 张原版 BCSV 结构解析通过，无不支持文件，58,349 条记录、2,898 个字段出现位置、2,075 个去重字段 Hash、50 个 CRC32 跨表引用候选。8 项测试通过。[完整产物](https://github.com/969981/ACNH_Resources/actions/runs/45569991407/artifacts/15002100441)（247,488 字节）。候选关系与未知字段仍需语义及消费者验证。

自动发布目录：`docs/Sources/BCSV/Generated/`（逐表 Markdown）与 `research/bcsv-catalog/`（JSON 字典）；发布独立检查分支 tip，禁止覆盖并发研究。

## 两套 CSV 与字段名称回填

[原始 Hash CSV、名称回填 CSV 与逐表 schema](https://github.com/969981/ACNH_Resources/tree/research/research/bcsv-data)；两套 CSV 值完全一致，仅列名变化。未知与冲突保留 Hash。运行 `uv run --script Scripts/bcsv/export_views.py`。[全量表索引](Generated/README.md) 将同步回填字段候选。
