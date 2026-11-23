---
title: ACNH 3.0.3 · R50–R62 原版道具图标源 SHA 逐源恢复
aliases: [R50–R62 Native Item Icon Provenance]
tags: [ACNH, 3.0.3, Model, R50, R62, BNTX, PNG, SHA256, provenance]
status: ci-pending
---
# R50–R62 · 26,277 条原版图标历史逐源证据

关联 [[13-Historical-SHA-Ledger-R41-R90]]、[[14-Model-BDLI-Real-Original-Wave]]、[[ACNH303_R60_R62_ALL_ORIGINAL_PNG_SOURCES]]、[[15-R69-R72-Image-Source-SHA-Recovery]]。

## 来源

仓库已有 `assets/evidence/rom-items/batch-*.json` 共 53 份原始提取报告，顺序覆盖 `00000–26277`；每条包含原始 `Model/Layout_*.Nin_NX_NVN.zs` 路径、原始大小/SHA-256、原生 BRTI 名称、历史 PNG SHA-256、目标 Git 图片路径和历史输出状态。

这里的 **26,277 是历史原始图标记录行数，不是新增加的来源数**。一条来源与 R69–R72、R19 或旧媒体 Release 若重复，通用账本只保留一个原始路径身份及所有执行历史。

## 新增代码

`Scripts/acnh303_r50_r62_icon_source_recovery.py` 执行：

1. 强制 53 个连续互斥分片、26,277 条记录、无 `errors` / `quarantined`，检查文件 SHA-256、原版来源标志和准确字段；
2. 将每个原始路径与完整 103,400 条 Git Tree 名称匹配，要求 `Model/Layout_{family}_*.Nin_NX_NVN.zs`；
3. 验证 source SHA-256 + bytes、单原生 BRTI 名字对应原始文件名、PNG SHA、尺寸、输出状态；
4. 验证每个历史 PNG 路径**仍存在于当前 Git Tree**；不使用未处理的图片名或社区 CDN 图作为原版产物；
5. 同一源若在两个报告中被重复记录且 SHA/大小不同，立即中止；随后接入通用账本全局去重；
6. 对此类来源记录 `partial`，因为**即使真的产生了一张 PNG，也没有证明完整 BFRES 几何、骨骼、动画、GLB 或游戏运行时选图语义**。

完整的 53 份 manifest SHA-256 存入来源 metadata；当前 CI 不再次读取全部原始 .zs 文件内容，也不重新解码全部 26,277 张 PNG。与 R50–R62 历史真实输出证据明确分层，不预报本轮重新转换成功数量。

## 预计对账边界与安全门禁

- 历史 BRTI PNG 成功：`L3_PARTIAL_SINGLE_NATIVE_BRTI_PNG_HISTORICAL`，不是 `converted` 的整份模型完成；
- 仍需实际单独做：原始 BFRES FMDL / FSKL / FSKA / FMAA 导出 GLB 和内容校验、像素与运行时 GPU 一致性；
- R61 另外 1,254 项是候选原生资源**与请求的目录名语义不一定等价**，不得把 R62 的 27,531 项直接当作各自独立源文件或 Native UI 完成数；
- R83–R84 5 份独立 BCSV 字节验证另行验收，不混入 Model 图标来源。

## 验收标准

运行 GitHub Actions，验证所有历史 SHA release、原始提交批次、新 R50–R62 来源并计算**真实 PATH+SHA 去重差值**。仅当真实 CI 成功才合并和将 `coverage.json` 写入主分支；输出中应明确保留 `native_game_UI_semantics_verified=false` 与 `full_BFRES_or_GLB_conversion_verified=false`。

```bash
python -m unittest discover -s Scripts -p 'test_acnh303_r50_r62_icon_source_recovery.py' -v
# 现有历史 SHA 工作流加入：
# --r50-r62-dir assets/evidence/rom-items
```
