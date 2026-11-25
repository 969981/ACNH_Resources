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

## HASH-008A 外部词典与独立搜索
固定 HeavenTool commit 74e0f967f6305c4aa55b1e1726c0445e45593c36 的 6 份源文件 Git blob，CI 下载并重新哈希，不复制整套上游语料。只对首轮 248 个无历史签名的哈希搜索；区分外部 typed signature、无类型/值标签碰撞、已知类型提示及本地 ELF ASCII/编号词族 CRC32 候选。ELF 原始 SHA256 固定。未证明原始列头；候选保留全部碰撞和跨表出现位置。修复 HASH-006 split_signature 返回 tuple 的单测失败。候选列表和剩余队列归档为 CI artifact。

## HASH-008A 实测与 HASH-008B
Run 45558216971 / artifact 14996348802：220/248 哈希命中 HeavenTool headers.txt，197 个常规签名类型及宽度候选，23 个 stringMurmurHash 签名此前未被类型正则识别；剩余 28 个无候选。47,010 原版 ELF 标识符、10,329 编号词族、1,676,276 独立签名查询，未新增超出外部字典的命中。由真实日志抽取 220 条签名并重新计算 CRC32，保存 hash008a_ci_candidates.json。HASH-008B 补充 stringMurmurHash (4-byte candidate) 并增加按所属表词根组合的搜索，候选不升级原名；实际剩余队列在 CI 日志逐项输出。

## HASH-009A：枚举、位域、类型提示与 SQLite 候选表
HASH-008B CI 45558372365 PASS：220 个 typed/width compatible，28 未知，1,736,810 独立签名和 1,445,940 按表组合无新增。28 个哈希及全部位置永久保存。固定 HeavenTool 271 个 Git blob（262 CRC enum、5 bitfield、4 Murmur 词典），下载后校验 SHA1 与大小，按行序保留标签、碰撞、位序候选，重算 CRC32 / Murmur3 x86_32 seed0。逐原版字段检查值频率，严格区分 field-scoped label 与全局词典命中；不将 0 自动当作已匹配，不将位标签序号当作已验证游戏掩码。220 个字段候选写入 SQLite 独立 field_name_candidate 表，不覆盖 native_name。28 个未知保留原始字节频率与社区类型提示。
社区 AnnotateBCSV 参考：https://acnhmodding.github.io/reverse-engineering/useful-scripts/；已知 BCSV 读者存在内联字段访问和共享 FindField，后续 HASH-007 需按类/缓存槽/ARM64 实际数据流确认，不以常量命中代替消费者。

## HASH-007A 原生 Reader 入口和字段常量证据
HASH-009A CI 45558581090 PASS：271 字典、6231 标签、285 位标签、220 哈希 257 候选位置，23 Murmur 字段 27 位置 1463 原值，1457 全局词典匹配。HASH-007A 固定 ELF SHA256，对全 234 张表扫描精确 .bcsv 字符串及 ADR/ADRP+ADD+RET 文件名 getter，查找 9 个可执行指针的候选 vtable；扫描全部 2075 字段 hash 的相邻 MOVZ/MOVN+MOVK 和 LDR W literal 物化位点，输出附近 BL 候选及 28 个专项入口。社区 9 槽布局作为假设；未解析全部重定位、间隔 MOVK、内联读者或 Ghidra P-code，不能把常量位点称为消费者。SQLite 独立证据表，不提升字段名。后续按 SetupRows/Clear、FindField 参数和缓存槽数据流逐项验证。
