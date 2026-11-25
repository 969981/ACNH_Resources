# ACNH 3.0.3 Global BCSV Field Dictionary (HASH-001–005)
独立于 Web、机器人及存档编辑器。原始文件与旧导出不修改。
- HASH-001 固定 234 个原始 Git blob 及大小，独立解析 VSCB 描述符并对照已有元数据。
- HASH-002 表/ordinal 为物理主键，hash 只是跨表索引，不假定唯一语义。
- HASH-003 合并 R74/R82/R84/R91/R94 及明确标注未合并的 R101、PR122 局部证据。范围仍非所有历史研究。
- HASH-004/005 使用 R100 固定语料快照与 CylindricalEarth preset，逐签名重算 CRC32。历史候选保留来源和冲突，不自动提升为原名；宽度由相邻 offset 推断，不能作为类型证明。
- R100 corpus.json: commit 7cf8853957a77ecea2bf6e3e4f92c3bdb357e0a1, blob 8fc14f19d73e32e250cb83d423fb45dd03418796.
- R100 historical_supplement.json: 同 commit, blob ffad4f61e20bffe1ffb8ed6ad3e6197c8186043a.
- R101 field_semantics.json: blob 055e3384d0cb892da15d683c4da09d2b0de82f0a, PR #80 未合并。
- scoped_crc 表示当前表已有研究证据且 CRC 签名一致，不等于原始明文列头或运行时已证实。
- 输出 JSON/CSV/SQLite 与 summary，CI 实测之前不填写覆盖率。未知保持 null；后续 HASH-006–009 扩展类型、枚举、Native consumer。
复现：
```sh
python -m unittest discover -s Scripts -p test_acnh303_global_bcsv_dictionary.py -v
python Scripts/acnh303_global_bcsv_dictionary.py --root . --out artifacts/global-bcsv
```
