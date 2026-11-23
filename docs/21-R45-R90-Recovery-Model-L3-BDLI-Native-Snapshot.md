---
title: ACNH 3.0.3 · R45–R90 历史证据追回与 Model L3 / BDLI Native 阶段总结
aliases: [ACNH303 R45 R90 Recovery Snapshot 2026-11-23]
tags: [ACNH, 3.0.3, R45, R90, Model, BDLI, SHA256, L3, Native, audit]
status: verified-and-updated-2026-11-23
---
# R45–R90 · 原始身份、媒体转换、Native 消费者三轴验收

## 2026-11-23 · 最新真实缺口资源分片后续（主分支验收）

- [PR #63](https://github.com/969981/ACNH_Resources/pull/63) 对**旧 SHA 账本之外**的 16 Model + 48 BDLI 实际读取原始 NCA/Git blob，16 Model 新生成 4 GLB 与 12 PNG、48 BDLI 验证 1,092 个 LBLI 区段；所有 64 份原始 SHA/bytes 与 Git blob 验证、0 历史已入账重复。
- [PR #64](https://github.com/969981/ACNH_Resources/pull/64) 修复主分支持久化时并发 rebase 冲突；[Actions #45184623253](https://github.com/969981/ACNH_Resources/actions/runs/45184623253) 最终成功更新权威来源账本。
- **权威覆盖 39,381 / 103,400**、尚未纳入 **64,019**；Model **35,427 / 60,166**（缺 **24,739**），BDLI **92 / 36,708**（缺 **36,616**）。
- 本轮增加的是 64 条源身份，4 GLB/12 PNG 为独立真正重解码 L3 文件计数；BDLI 的 **Native 仍 NOT_CAPTURED**，没有动态消费者证明。详见 [[22-Unrepresented-Model-BDLI-Real-Source-Shards]]。

## 2026-11-23 · 历史阶段快照（R50–R62 后）

**原始 Git Tree：103,400 条；逐源 SHA-256 证据已纳入 39,317 条，仍未纳入 64,083 条，来源身份覆盖率 38.02%。**

| 分类 | 已纳入来源 / 原始总数 | 尚未纳入逐源证据 | 与转换/Native 的区别 |
|---|---:|---:|---|
| Model | **35,411 / 60,166** | **24,755** | 含大量历史原生 PNG 单纹理 `partial`，不等于全 GLB |
| BDLI | **44 / 36,708** | **36,664** | 静态 LBLI 结构不等于 Native 消费者 |
| Sound | **2,842 / 2,848** | **6** | 来源 SHA ≠ 全音频播放/AMTA/AAL |
| Layout | **960 / 960** | **0** | 来源 SHA ≠ 真实运行时像素布局 |
| Bcsv | **16 / 234** | **218** | 包括 R83/R84 的五个实际 original bytes |
| 所有 24 类 | **39,317 / 103,400** | **64,083** | 来源身份覆盖率，不是解包/转换/原生语义完成率 |

当前权威文件：`UnPack/_meta/history_sha_merge/coverage.json` 与 `source_ledger.jsonl.gz`。同一原始路径按 SHA256/bytes 去重，保留全部原始历史尝试记录，不按每次运行重复加 1。

## 真实完成的追回

### R83/R84 · 5 个原始 BCSV 字节

- [PR #59](https://github.com/969981/ACNH_Resources/pull/59) / [CI #45178684825](https://github.com/969981/ACNH_Resources/actions/runs/45178684825)：R83 两份 NPC 和 R84 三份 Item BCSV 与**真实历史 Actions 原始附件**逐字节比对，再核实当前 Git 原文件 SHA-256 + Git blob，净增 **5**。
- 本轮 BCSV 状态仅为 `raw_extracted`；不以 417 个村民/11,178 个 ItemParam 行扩大文件级身份数。
- 见 [[17-R83-R84-Original-BCSV-Byte-Proof]]。

### R50–R62 · 53 个历史真实图标源报告

- [PR #60](https://github.com/969981/ACNH_Resources/pull/60) / [CI #45179415194](https://github.com/969981/ACNH_Resources/actions/runs/45179415194) / [主分支持久化 #45179663567](https://github.com/969981/ACNH_Resources/actions/runs/45179663567)。
- 共 **26,277** 条原始来源 + PNG 哈希记录，**3,056** 与旧来源 SHA/路径相同，净增 **23,221**。
- 历史 PNG 状态：25,500 张新的原版图、775 张保留与社区 CDN 不同的原版图、2 张与原有 PNG 内容一致。来源必须有原始 SHA/bytes、BRTI 名与真实 Git PNG 路径。
- 此轮是恢复**历史**单 PNG 证据，未再次读取 26,277 个原始 `.zs`，仍保守分类 `partial`。
- 见 [[18-R50-R62-Item-Native-PNG-Source-SHA]]。

### R8 普通媒体与 R19

[PR #58](https://github.com/969981/ACNH_Resources/pull/58) / [CI #45176742114](https://github.com/969981/ACNH_Resources/actions/runs/45176742114)：R8 的 1,112 条普通媒体累计源与 R19 全部原始路径+SHA+bytes 相同，净新增 **0**。不要混入独立 R8 BARS Release 的净新增 7。见 [[16-R8-R19-Cumulative-Media-Reconciliation]]。

## 独立的 L3 与 Native 验收，不重复计数身份

### Model L3 · 4/4 真正 BFRES→GLB 重放

- [PR #61](https://github.com/969981/ACNH_Resources/pull/61) / [CI #45180483511](https://github.com/969981/ACNH_Resources/actions/runs/45180483511)：真实重新下载 R19 manifest、读取原版 Model `.zs`，核实 SHA+Git blob，调用发布 SHA 已验证的 `wmdlt`，重新产生 **4 个有效 glTF 2.0 GLB**。
- 每个模型有 mesh/primitive/position accessors，输出 SHA-256 全部重新验算；样本 `RoomMdlMyDesignOutside10`、`IdrDream01`、`IdrObjNameBoardArt0Tag02`、`RoomMdlWindowWallArch4m`。
- 这是 **4 个既有身份的实际 L3 再转换成功**，没有额外增加 4 个独立原始源；尚未验证全游戏模型动画、Shader/GPU、原版呈现一致性。见 [[19-Real-BFRES-GLB-R19-Replay]]。

### BDLI Native · 明确未完成但独立取证门禁可用

- [PR #62](https://github.com/969981/ACNH_Resources/pull/62) / [CI #45181279917](https://github.com/969981/ACNH_Resources/actions/runs/45181279917)：真实读取 3,118 字节 `STR_CategoryName.bdli.zs`、Git blob/SHA 与解压后的 **224 个 LBLI 区段**、区段 SHA；未提供实际游戏 GDB 同会话消费者日志，因此 `NOT_CAPTURED`。
- 可在实际 ACNH 3.0.3 ARM64 调试目标中使用 `Scripts/acnh303_bdli_gdb_observer.py` 只读记录**独立确认过的**函数 RVA；`Scripts/acnh303_bdli_native_consumer_gate.py` 拒绝伪造 Native 成功，格式正确的候选现场快照最多标为 `CANDIDATE_UNATTESTED`。
- 仍需真正的 3.0.3 Build ID/ELF、Native loader/lookup RVA、实际资源名+LBLI identifier+字符串消费/语言回退链、同一会话原始调试器日志。CI 无法代替真实游戏过程。见 [[20-BDLI-Native-Consumer-Capture-Gate]]。

## 下一轮优先级

1. **Model 源身份缺口 24,755**：沿 `next_sources.json` 选择此前没有合格证据的源按 Git SHA 分片，实测字节与具体 BFRES/FMDL/BNTX/FSKA 类型，优先生成独立真实 GLB/PNG L3 结果；历史单张图片记录不得升级整模型 `converted`。
2. **BDLI 身份缺口 36,664**：真实稀疏读取多个语言目录的 original SHA/Git blob，静态解析 LBLI 数量/标识符差异，严格与 Native runtime 分开；实际调试时优先拿到资源加载→LBLI 查找→语言 fallback/控制码消费者的同会话证据。
3. **其他 R45–R90**：持续遍历仍有效 Actions Artifacts 和历史分支的逐源清单，优先原始路径+SHA+bytes+Git blob；派生 SQLite、图片总数、发布统计和研究摘要不具备独立源文件新增计数权限。
4. **完整验收 #15**：任何时候区分 `source_provenance`、`L1/L2/L3 conversion`、`runtime_semantic_proof`；`strict_full` 和 `native_runtime_parity_verified` 仍需保留 false 直至真实全量取证。

## 关键可复现命令

```bash
# 当前历史身份 SHA 账本（CI 下载并验真历史 Release 后执行）
python -m unittest discover -s Scripts -p 'test_acnh303_history_sha_merge.py' -v

# Model：独立真实 R19 BFRES→GLB CI 小样本
python -m unittest discover -s Scripts -p 'test_acnh303_r19_real_glb_replay.py' -v

# BDLI：缺少真实游戏会话时必须返回 NOT_CAPTURED
python -m unittest discover -s Scripts -p 'test_acnh303_bdli_native_consumer_gate.py' -v
```
