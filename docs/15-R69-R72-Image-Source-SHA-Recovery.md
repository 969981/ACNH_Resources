---
title: ACNH 3.0.3 · R69–R72 图标历史原始来源逐源证据恢复
aliases: [R69–R72 SHA source recovery, Original Icon Manifest Ledger]
tags: [ACNH, 3.0.3, Model, SHA256, provenance, R69, R72, BNTX, PNG]
status: ci-pending
---
# R69–R72 · 原生图标来源与 SHA 去重验收

关联 [[13-Historical-SHA-Ledger-R41-R90]]、[[14-Model-BDLI-Real-Original-Wave]]、[[ACNH303_R69_R73_ALL_FOUR_ORIGINAL_ICON_FAMILIES]]。

## 核查范围（不能把汇总当逐源证据）

本次从 **已提交 Git 原始报告** 中取每个真实源的路径、原始大小、原始 SHA-256 和经过历史像素解码及 PNG CRC/SHA 核验的输出记录：

- R69 的 1 个 FtrIcon + 3 个 GardeningIcon；
- R70/R71/R72 的 **28 份** `ClosetIcon-*.json`，共 5,441 个原始资源报告；
- **合计 5,445 条历史尝试行**，它不是净新增覆盖数。要与现有 11,269 来源路径做全局 SHA-256 去重，任何来源 SHA/大小冲突必须让 CI 失败。

报告位置：`assets/evidence/rom-completeness/native-layout-batches/`。来源路径位于 `e10617820db06889e1638499478da0de_NCA/1/Model/` 内；本次仅解析已提交的小型 JSON，不读取原始 ROM 字节。旧报告中与 Git Tree 匹配的原始 SHA/大小是**历史处理证据**，不应说成此次重新读取了全部 5,445 个原始字节流。

## 新增验证器与分层统计

`Scripts/acnh303_r69_r72_source_recovery.py` 逐文件执行以下门禁：

1. 验证 JSON schema、28 个 ClosetIcon 分片、1/3 两个 R69 清单、每份实际行数、无失败/多纹理/零纹理；
2. 验证每条 ROM 源路径存在于当前完整 Git Tree，确为 `Model/Layout_<family>_*.Nin_NX_NVN.zs`，具有合法原始 SHA-256 和字节数；
3. 验证每个原始来源对应恰好一个历史 PNG，包含 PNG SHA-256、非零大小、`Pillow.Image.load` 和 CRC/SHA 复核标记；原报告明确 runtime UI binding 未被证实；
4. 按现有 `deduplicate()` 合并。相同原始路径/原始 SHA 只占一个来源，历史重试保留；SHA/size 不一致必须失败；
5. 对这些 Model 图标记录保守归类为 `partial`，**不提升为整份 BFRES 完整转换，也不计 Native 语义验证**。

`source_provenance.R69-R72-original-layout` 保留每个原 JSON 文件的 SHA-256、逐家族来源数与边界标记。相关回归测试包含源缺失、伪造 SHA、PNG 验证缺失、报告行数错配及伪造运行时成功声明。

## 验收与权威数字

**提交此实现本身不会改变权威来源数量。** 待 GitHub Actions 成功下载并交叉验证全部既有 Release、加入 5,445 个历史尝试记录并计算新账本之后，再以主分支 `UnPack/_meta/history_sha_merge/coverage.json`、`source_ledger.jsonl.gz` 为准。PR 运行仅产生 Artifact，不能自动写回主分支。新产生的已覆盖与未纳入数必须同时更新；若有路径 SHA/大小冲突，保留之前的 11,269/92,131，不得部分发布。

## 未覆盖部分

- R8 的 1,112 普通媒体累计清单仍需与 R19 按来源路径和 SHA 核对，不自动加算；
- R83 两份原始 BCSV Artifact 已定位，但应在独立源字节/Git blob 校验后导入；
- R45–R90 的其他批次须继续从已有 Actions 产物与提交清单找回逐源证据，R84 ZIP 及 SQLite 不应按汇总行数增记；
- 当前无需、也没有证明原版游戏运行时 UI 绑定或渲染一致性。

## 使用

```bash
python -m unittest discover -s Scripts -p 'test_acnh303_r69_r72_source_recovery.py' -v
# 在正常历史 SHA 工作流中，需追加：
# --r69-r72-dir assets/evidence/rom-completeness/native-layout-batches
```
