---
title: U01 U02 U12 统一解包、递归归档、全量验收与真实 Cedar 回归
aliases: [ACNH303 Unified Verification, 统一解包器]
tags: [ACNH, unpack, audit, SHA-256, Git, FMAA]
status: in-progress
---
# ACNH 3.0.3 · U01 / U02 / U12 / #44

> [!warning] 证据等级
> 本阶段**提供可运行的统一入口、递归 L1 原始叶子抽取和针对原始 Git Tree 的 L0–L3 验收器**，而不是宣称已经完成 103,400 文件或所有游戏逻辑语义。全量 ROMFS 的逐字节检查必须真的把源对象读取到执行环境中。对未检出的源，`source SHA256` 无法独立验证。

## 1. 统一入口（#4）

`Scripts/acnh303_unified.py` 支持：
- `--file`、`--kind`、`--all` 选源，`--shard N --shards M` 按相对路径稳定 SHA-256 分片；
- `--mode auto|basic|media|archive`，auto 识别原始 Magic 并选真实现有 parser，Model/Layout 走 media，SARC/Yaz0/Zstd 类走 archive；
- `--resume` 仅跳过既有源 SHA 与所有输出 SHA 都匹配的记录；
- `--verify` 独立复核账本原始字节与输出；
- `--strict` 对失败和 full-scope 数量不符返回非零；
- `--limit 24` 默认每次最多 24 个，`--limit 0` 表示遍历该范围全部文件。

```bash
python -m pip install -r Scripts/requirements-media.txt

# 实际解包样本：不写原始 NCA，只输出 UnPack/ 与 SHA ledger
python Scripts/acnh303_unified.py --file System/lp_resource.Nin_NX_NVN.szs --mode archive --strict

# 续跑同一个批次，已验证源和输出不重复加工
python Scripts/acnh303_unified.py --kind BDLI --shard 0 --shards 64 --limit 24 --resume

# 指定原始 BCSV/L2 源，自动或显式 basic
python Scripts/acnh303_unified.py --file Bcsv/AITag.bcsv --mode basic

# 一个 shard 的全量源（可能产生大量数据；须有容量预算）
python Scripts/acnh303_unified.py --all --shard 0 --shards 64 --limit 0 --resume

python Scripts/acnh303_unified.py --verify --strict
```

账本位置：`UnPack/_meta/unified/source_manifest.jsonl`，每个源恰好 1 条记录，包含原始路径、输入大小与 SHA-256、route、状态、L0/L1/L2/L3 级别和逐输出 SHA。若某来源在运行中失败，记录 failed 原因；**没有真实产物不算 converted**。

## 2. 递归归档（#5）

`Scripts/acnh303_recursive_archive.py` 根据实际魔数逐层处理 `Zstandard`、`Yaz0`、`SARC`，原始数据只读，容器和叶子分别 SHA-256。它**不声称**可恢复整个非 SARC PACK/ARC 家族或游戏 Native 字段语义。

```bash
python Scripts/acnh303_recursive_archive.py \
  --source System/lp_resource.Nin_NX_NVN.szs \
  --out UnPack --materialize --max-depth 8 --max-mb 256
```

安全限制：
- 深度 8（可显式调整，硬限制 32）、累计扩展字节默认 256 MiB、单次 SARC 最大 30,000 成员、全嵌套成员总数最大 30,000，超过即拒绝；
- 原始成员名在 `PurePosixPath` 正规化**之前**拒绝 `..`、`.`、重复斜杠、绝对路径、Windows drive/反斜线、控制字符；
- 实际 SARC member end 不能超过**源头声明的 file_size**，不借助尾部垃圾补足非法数据；
- 全局大小写碰撞、文件与目录祖先冲突和不同 SHA 的旧文件覆盖均失败关闭；
- 输出均放在 `UnPack/1/<源名>.unpacked/_members/`，保留子层路径和哈希；
- `UnPack/_meta/recursive/<相对源>.json` 保存原始容器层、递归 SHA、终端原始叶子、失败/限制状态。
- L1 原始叶子的 `raw_extracted` 不可直接上升为 L2/L3/L4。

## 3. 全资源质量门（#15）

`Scripts/acnh303_full_audit.py` 通过 `git ls-tree -rz HEAD -- <NCA>/1/` 获取真实 Git 源集合，不借助限量的 GitHub REST Contents 分页。对每条统一账本逐一验证：
1. 源的相对路径属于原始 Git Tree；没有重复/未知/缺失；
2. 检出源的 **Git blob SHA-1、源 SHA-256、大小** 三项独立匹配；没稀疏检出的则标记未验证，不能偷算完成；
3. 输出文件必须存在于 `UnPack/1`，实际 SHA-256、文件大小完全对应；
4. 源的 L0/L1/L2/L3 标志分开统计；假的 converted / L3 no output 会进入 problem report；
5. `--strict-full` 要求所有原始源实际可读和核验，且没有任何缺失或失败。

```bash
# 非阻断差距审计：生成缺口，**不**代表通过全量验收
python Scripts/acnh303_full_audit.py --root . --expected-count 103400

# 严格门：未核验的源存在即 exit 1
python Scripts/acnh303_full_audit.py --root . --expected-count 103400 --strict-full
```

结果：`UnPack/_meta/unified/coverage.json` 和 `problems.csv`。

## 4. #44 原始 Cedar 修复复测

`Scripts/acnh303_real_cedar_regression.py` 使用仓库原始文件（**非模拟生成**）：

- 源：`Model/PltTreeCedarDecoAnim.Nin_NX_NVN.zs`；
- 预期源 SHA-256：`3284939356d4d1a086307b0586e7f4e8995971f7c642190fc84da331767cb97f`；
- 预期 FRES 展开长度：1536 字节；
- 原生 FMAA 候选偏移：`0xF0` 和 `0x160`；
- `acnh303_media_l3.py --fail-on-no-conversion` 应以退出码 2（无合法 GLB/PNG）结束，同时产出正确 partial manifest，不生成伪 GLB/PNG；
- CI 上传结构化 JSON 记录原始 / 解压后 SHA、偏移和安全状态。

```bash
python Scripts/acnh303_real_cedar_regression.py --root . --out cedar_real_regression.json
```

此复测验证 #44 的**真实字节级分类和不伪造媒体**；FMAA 轨道语义、ShaderParam 实时写回和 AAL 外部短 BWAV 的 FileOpen/Read/Close 仍不在此验收范围，不应据此关闭整个 #44。

## CI

工作流：`.github/workflows/acnh303-u01-u02-u12-real.yml`，真实 Cedar 文件单独 sparse checkout；执行语法检查、原生旧测试、递归归档与 unified/audit 正反例测试，并上传真源校验报告。

关联：[[03-Unpack-Workflow]] · [[05-Progress]] · [[07-Incremental-Batches]] · [[10-Open-Issues-Triage-2026-11-23]]。
