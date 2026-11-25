# ACNH BCSV toolkit (uv / Python)

Python >=3.11, standard library only. From repository root on research:

```powershell
uv run --script Scripts/bcsv/extract.py --verify-303
uv run --script Scripts/bcsv/extract.py --table ItemUIFurnitureCategory --verify-303
uv run --script Scripts/bcsv/extract.py --all --out out/bcsv-all
uv run --no-project --python 3.12 python -m unittest discover -s Scripts/bcsv -p "test_*.py"
```

Default output out/bcsv: schema JSON (offsets, widths, source SHA256 and Git blob SHA), CSV and JSONL (raw hex, explicit typed values, row prefix), category-groups.json and manifest.json. All paths are read-only inputs. Unknown columns retain raw byte hex; known schema types are table-specific, and reference fields are labeled raw until joined/validated. --verify-303 verifies pinned source shapes and Git blobs for nine supported tables; other tables only get structural checks. Strict exact-length and increasing-offset assumptions follow current samples; unsupported variants fail rather than silently producing incorrect data. Existing specialist scripts are not replaced.

Knowledge base: [BCSV documentation](https://github.com/969981/ACNH_Resources/tree/research/docs/Sources/BCSV).

## 全量目录研究

`uv run --script Scripts/bcsv/catalog.py --verify-git` 扫描全目录，生成 inventory.json、field-hashes.json、reference-candidates.json、summary.json 与自动 Markdown docs。引用是 CRC32 值域候选，不是已确认外键。详见 [catalog.py](catalog.py)。

字段中文释义统一维护于 `field_hash_zh.json`；`field_hash_docs.py` 同步全量 Hash 字典和全部独立表文档，并检查字段出现次数与残余证据的表/偏移覆盖。可在仓库根目录运行 `uv run --script Scripts/bcsv/field_hash_docs.py`（仅重绘现有 Markdown），或运行上述全量 catalog 命令从原始 BCSV 重新生成。类型为 CRC 候选，不替代表级业务证据。

## 中文业务表档案

全量 catalog 同时读取 `table_zh.json` 及固定归档 `research/bcsv-data/decoded/enum-values.csv`，输出中文索引、逐表样例/枚举/关联及 `table-profiles.json`、`table-profile-summary.json`。枚举候选逐值校验 CRC 与原版计数；样例保留完整字段字节，中文术语复用字段词典。用途推测与已有专题证据分开；仅展示每个 CRC 字段高频 12 个码值，完整观察值保存在 JSON。更新原版数据或枚举证据后重新运行全量 catalog CI。
