---
title: ACNH 3.0.3 · R8 普通媒体与 R19 累计来源 SHA 对账
aliases: [R8 R19 Media Reconciliation]
tags: [ACNH, 3.0.3, provenance, SHA256, R8, R19, media]
status: ci-verified
---
# R8 → R19 · 普通媒体累计来源清单对账

关联 [[13-Historical-SHA-Ledger-R41-R90]] 与 [[15-R69-R72-Image-Source-SHA-Recovery]]。

## 两份历史 Release 不可混淆

1. `acnh303-bars-first8-42wav-20261014`：独立 8 个 BARS 原始归档；已在 PR #56 验证并合并到主账本，8 行经去重净增 7 路径。
2. `acnh303-l3-layout-ui2d-bwav-round8-20261014`：普通媒体 1,112 个**累计**原始来源，本任务的研究对象，不是净增 1,112 条。
3. `acnh303-r19-animation-native-20261014`：后续累计普通媒体 3,558 个来源，另附 80 个原始 BARS 的双轨清单。本任务只与普通媒体 3,558 条逐源对账，避免两类 BARS 混淆。

## 2026-11-23 真实 CI 结果（已完成）

[PR #58](https://github.com/969981/ACNH_Resources/pull/58) 对应 [Actions #45176742114](https://github.com/969981/ACNH_Resources/actions/runs/45176742114) 真实下载两份 Release，验证 SHA256SUMS 和逐源字段并出具 Artifact。

- R8 普通媒体累计身份：**1,112**；分类 Layout **232**、Model **308**、Sound **572**；
- R8 逐源路径 + SHA-256 + 字节数与 R19 完全相符：**1,112 / 1,112**；R19 普通媒体累计 **3,558**；
- 与本次运行时既有的 **11,269** 条正式账本也完全匹配：**1,112 / 1,112**；
- R8 不在 R19、或不在当时账本的真实源均为 **0**；冲突 **0**；对这条来源轴**净新增 0**。
- 这只闭合“R8 普通媒体历史来源身份”，不证明新的 ROM 字节复验、L3 再转换或 Native 语义。

对账时的旧账本为 11,269。随后 R69–R72 的另一个 PR #57 对账净增 4,822，属于独立来源，不应混入 R8 统计。

## 验收实现

- `Scripts/acnh303_r8_r19_media_reconcile.py`：逐份校验真实 Release 的 `SHA256SUMS.txt` 与 `media_source_manifest.jsonl.gz` 字节哈希；遍历 1,112 / 3,558 行，检查路径规范、SHA-256、源大小、重复与目标媒体列表的合法性。
- 按 `source_path + source_sha256 + source_bytes` 对 R8、R19 和当前 `source_ledger.jsonl.gz` 三方对账。同路径 SHA/大小不一致时立即失败。
- 生成 `r8_in_r19_same_original_identity`、`r8_not_in_r19`、`r8_in_current_ledger_same_original_identity`、`r8_not_in_current_ledger`，并列出真实差集的原始路径，便于逐源补证。
- 测试伪造源 SHA、重复行、错误 Release 文件校验和、旧账本重复路径等失败条件。
- GitHub Actions 上传只读 JSON 报告。**不会写入主账本，也不会因为 R8 的历史累计宣称直接改变 11,269 / 92,131 基线。**

## 证据等级

发布清单的 SHA256SUMS 证明下载与历史发布件一致，报告内部的原始 SHA 是历史记录，并非本次重新读取了所有 ROM 原始字节。R8 已有 PNG/GLB/WAV 的历史统计不等于新解码或 Native 运行时验证。

若实际检出 R8 不在 R19 的路径，需另建具体逐源恢复 PR，验证来源属于当前 3.0.3 Git Tree，再交给通用合并器全局去重；若 1,112 条全已被 R19 吸收，则**净新增必然为 0**，但仍保留可追溯的历史 R8 证据。

## 执行

```bash
python -m unittest discover -s Scripts -p 'test_acnh303_r8_r19_media_reconcile.py' -v
python Scripts/acnh303_r8_r19_media_reconcile.py \
  --r8 history-inputs/r8-media \
  --r19 history-inputs/r19 \
  --ledger UnPack/_meta/history_sha_merge/source_ledger.jsonl.gz \
  --coverage UnPack/_meta/history_sha_merge/coverage.json \
  --out audit-output/r8_r19_cumulative_media_reconcile.json
```
