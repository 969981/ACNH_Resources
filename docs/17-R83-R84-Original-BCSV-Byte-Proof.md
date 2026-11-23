---
title: ACNH 3.0.3 · R83/R84 原始 BCSV 字节与 Git Blob 双重验收
aliases: [R83 R84 Original BCSV SHA Recovery]
tags: [ACNH, 3.0.3, R83, R84, BCSV, original, Git, sha256, provenance]
status: ci-verified-and-merged
---
# R83/R84 · 5 份原始 BCSV 的真实身份恢复

关联 [[13-Historical-SHA-Ledger-R41-R90]]、[[14-Model-BDLI-Real-Original-Wave]]、[[ACNH303_R84_RUNTIME_ITEM_RESTRICTIONS_EVIDENCE]]。

## 真实 CI 验收结果 · 2026-11-23

- [PR #59](https://github.com/969981/ACNH_Resources/pull/59) 已合并，[PR 验收 #45178684825](https://github.com/969981/ACNH_Resources/actions/runs/45178684825) 真实核验两个 Actions Artifact 的原始 BCSV 字节、Git blob SHA 和原始 SHA256；五份来源无哈希冲突，净增 **5**。
- 此阶段来源身份从 **16,091 → 16,096**，缺位从 **87,309 → 87,304**；BCSV 已有来源 **16 / 234**，其中新加入五份 `raw_extracted`。
- 后续 PR #60 的历史 Model 图标恢复已使主分支总体来源覆盖提升到 **39,317 / 103,400**；请以最新 `coverage.json` 为准，勿将本 PR 阶段快照误作当前总数。

## 来源和边界

- R83 成功运行 [#41470502711](https://github.com/969981/ACNH_Resources/actions/runs/41470502711)，Artifact `ACNH303_R83_Unmodified_Original_NPC_BCSV_And_Decoded_CSV`：原始 `Bcsv/NmlNpcParam.bcsv` 与 `Bcsv/SpNpcParam.bcsv`，另含两个导出 CSV。
- R84 成功运行 [#41547199937](https://github.com/969981/ACNH_Resources/actions/runs/41547199937)，Artifact `ACNH303_R84_ItemParam107_SourceRemake_Images_SQLite`：原始 `Bcsv/ItemParam.bcsv`、`Bcsv/ItemRemake.bcsv`、`Bcsv/ItemKind.bcsv`，另含历史生成表、SQL 数据与统计。
- 本阶段**只纳入上述 5 份真实原始 BCSV**，不按 417 个 NPC、11,178 个 ItemParam 行或 SQLite 记录数增记原始文件来源。

## 如何进行字节验证

新脚本 `Scripts/acnh303_r83_r84_source_recovery.py`：

1. sparse checkout 精确读取 5 份原始 Git 文件，利用完整 `git ls-tree` 建立 103,400 条原始来源身份；
2. 从两个历史 Actions **实际下载对应 Artifact**；逐文件比较 Artifact 和当前仓库原始文件字节相等；
3. 逐源计算 SHA-256、原始大小、规范 Git blob SHA-1（即 `sha1(b'blob <bytes>\\0' + original)`），与事先固定的源指纹及 Git Tree 双重匹配；
4. BCSV 固定头 `VSCB`（偏移 12）必须存在，5 个身份不许重复、替换或切换版本；
5. 产生 `UnPack/_meta/history_sha_merge/_inputs/r83_r84_original_bcsv.json`；正式账本导入验证报告中的 5 个 SHA/bytes/blob 和 Native=false，再运行全局 PATH+SHA 去重。
6. 历史 Artifact 过期后，持续运行仍可依照已提交不可变验证报告**重新哈希当前仓库 5 个源字节**。这不是重新验证已过期 Artifact 本身。

该轮状态仅标记 `raw_extracted`：**源文件确已逐字节验证**，并保留历史 BCSV CSV/字段研究，但本轮没有重新验证游戏运行时消费逻辑，也不宣称这 5 个资源执行了新 L3 图片转换。

## 验收规则

- PR 必须先通过真实 CI、回归以及整个历史 Release 对账，才能将净新增路径写入主账本；
- 若任一源的原始 SHA、大小、blob、历史 Artifact 或头格式不一致，整个批次失败，不进行部分发布；
- 预计 5 份 BCSV 真实来源均不在此前 16,091 份账本，但**不得预先把 5 当作 CI 已验证净增数量**；
- 更长远的 BCVS 字段语义、NPC 游戏状态或跨存档操作，仍是独立的 Native Consumer 研究。

## 本地验收

```bash
python -m unittest discover -s Scripts -p 'test_acnh303_r83_r84_source_recovery.py' -v
python Scripts/acnh303_r83_r84_source_recovery.py recover \
  --root . --r83 history-inputs/r83-original-bcsv \
  --r84 history-inputs/r84-original-bcsv \
  --report UnPack/_meta/history_sha_merge/_inputs/r83_r84_original_bcsv.json
```
