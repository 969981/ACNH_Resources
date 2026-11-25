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

## 首次实际 CI 基线（2026-11-25）
[Run 45557662193](https://github.com/969981/ACNH_Resources/actions/runs/45557662193) / [artifact 14996566115](https://github.com/969981/ACNH_Resources/actions/runs/45557662193/artifacts/14996566115)；234 表，58,349 行，2,898 字段出现，2,075 去重 hash，1,827 历史匹配（88.05%），248 未匹配。71 scoped_crc、2,538 historical_candidate、7 semantic_only、282 unresolved。5 个测试通过。此前 hshCstringRef 未单独识别类型，零 width mismatch 不代表该类已经验收。
## HASH-006 全库类型候选与原值剖面
识别 name.hshCstringRef（候选 u32 存储宽度），与常规 name + type 签名区分；遍历原始字段全部记录，保存 signed/unsigned 数值范围、float finite/nonfinite、字符串 UTF-8/NUL 统计、原始值频次。宽度为候选，数据分布不能单独证明类型；无 NUL 的定长字符串不必然无效。独立导出 type_profiles、type_summary 和 unresolved_types，SQLite 扩展 field_type_profile。未确认类型及语义保持未知。HASH-007–009 和原版明文、实机验证独立推进。
