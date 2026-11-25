---
title: uv Python BCSV 提取工具
tags: [acnh, bcsv, python, uv]
---
# uv Python BCSV 提取工具

返回 [BCSV 专题](README.md) · [二进制格式](Format.md)。

代码位于 research 分支 [Scripts/bcsv](https://github.com/969981/ACNH_Resources/tree/82b7c5ce5afc83ec63312157dd3be0f12afd6d42/Scripts/bcsv)，Python >=3.11，标准库，无第三方依赖。使用 PEP 723 inline script metadata。工具只读原版数据，输出到 out/bcsv。

```powershell
git switch research
uv run --script Scripts/bcsv/extract.py --verify-303
uv run --script Scripts/bcsv/extract.py --table ItemParam --table ItemUIFurnitureCategory --verify-303
uv run --script Scripts/bcsv/extract.py --all --out out/bcsv-all
uv run --no-project --python 3.12 python -m unittest discover -s Scripts/bcsv -p "test_*.py"
```

| 产物 | 用途 |
| --- | --- |
| *.schema.json | 结构、字段 Hash、偏移、跨度、输入 SHA256、Git blob、类型解释 |
| *.csv | Excel 可查看的 UTF-8 BOM 表格 |
| *.jsonl | 程序逐行加载、数据库导入的基础数据 |
| category-groups.json | 256 项细分类与 60 项分组关系 |
| manifest.json | 全表元数据汇总 |

原版字段十六进制列和 row_prefix_hex 保留行内原始字节；显式类型列是解释结果，不替代原始值。未知表只导出结构和 raw。--verify-303 核验九张已登记表的原始 Git blob 和形状。其他表只验证结构。当前严格要求文件长度与字段偏移符合支持格式；不支持的格式显式失败。已有专项脚本不被替换。

[CI 工作流](https://github.com/969981/ACNH_Resources/blob/82b7c5ce5afc83ec63312157dd3be0f12afd6d42/.github/workflows/acnh303-bcsv-toolkit.yml)；本轮代码已提交，实际运行状态独立检查，不预先宣称通过。

## 实际 CI 验收（2026-11-25）

[Actions #45569451957](https://github.com/969981/ACNH_Resources/actions/runs/45569451957) 对 research 提交 `82b7c5ce5afc83ec63312157dd3be0f12afd6d42` 实际执行成功。uv 安装、6 项解析器单元测试、九张核心表的固定 Git blob 与结构校验、CSV/JSONL/schema 导出、产物上传均成功。产物 `acnh303-bcsv-core-export`（2,638,784 字节）。九张表登记行数合计 13,298；其中 ItemParam 11,178 行通过形状与来源校验，原生 UI 分类表 256 行/60 组断言通过。尚未下载产物逐字段独立复核；不代表未知字段语义、跨表关联或物品业务规则已验证。

## 全量目录研究

`uv run --script Scripts/bcsv/catalog.py --verify-git` 扫描全目录，生成 inventory.json、field-hashes.json、reference-candidates.json、summary.json 与自动 Markdown docs。引用是 CRC32 值域候选，不是已确认外键。详见 [全量字典研究](Full-Catalog.md)。
