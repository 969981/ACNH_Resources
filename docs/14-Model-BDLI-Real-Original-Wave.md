---
title: ACNH 3.0.3 · Model 与 BDLI 原始 SHA 验收第一波
aliases: [Priority Model BDLI Wave, Real Original SHA Model BDLI]
tags: [ACNH, Model, BDLI, provenance, SHA256, audit, 3.0.3]
status: implementation
---
# Model / BDLI · 真实原始源逐源验证

关联 [[13-Historical-SHA-Ledger-R41-R90]]、[[11-Unified-Unpack-Recursive-Audit-2026-11-23]]、[[12-R51-Real-Wave-Gaps]]。


## 验收结论 · 2026-11-23（已实际运行，不是预估）

- [PR #54](https://github.com/969981/ACNH_Resources/pull/54) 已合并；[真实源 Run #45141584240](https://github.com/969981/ACNH_Resources/actions/runs/45141584240) 成功、24 个源已真实读取并完成原始 SHA-256 + Git blob 验证；Model 12、BDLI 12，**24 个记录均为 no_output，新增 L3/Native 成功为 0**。
- [PR #55](https://github.com/969981/ACNH_Resources/pull/55) 解决 GITHUB_TOKEN 自己的 push 不触发另一工作流的问题；用显式 workflow_dispatch 触发后续账本核验。
- [历史重算 Run #45141648523](https://github.com/969981/ACNH_Resources/actions/runs/45141648523) 成功，逐源账本 **11,238 → 11,262**；“没有纳入当前账本的来源” **92,162 → 92,138**。
- **Model：7,368 / 60,166** 已有本次证据，**52,798** 仍未纳入；**BDLI：44 / 36,708** 已有本次证据，**36,664** 仍未纳入。此处“未纳入”均不等于“历史从未被处理”。
- 真实逐源证据位置：`UnPack/_meta/history_sha_merge/_inputs/priority_wave_model_bdli.json`；合并账本：`UnPack/_meta/history_sha_merge/coverage.json` 与 `source_ledger.jsonl.gz`。

## 最新未入账真实资源分片 · 16 Model + 48 BDLI（2026-11-23）

- [PR #63](https://github.com/969981/ACNH_Resources/pull/63) 以真实 Git Tree − 旧 SHA 账本选择两个不重叠 SHA 分片，实际稀疏读取 **16 Model + 48 BDLI** 原始字节 SHA256 和 Git blob；[CI #45183489223](https://github.com/969981/ACNH_Resources/actions/runs/45183489223) 和[主分支 #45183797953](https://github.com/969981/ACNH_Resources/actions/runs/45183797953) 均验证成功。
- Model **16/16** 实际转换并重新校验 **4 GLB + 12 PNG**，输出哈希/几何或像素检查通过；来源状态均记 `partial`，不可自动提升整份 BFRES / FSKA / FMAA。
- BDLI **48/48** 静态解析和区段字节校验，合计 **1,092 LBLI 区段（非空 1,033）**，但没有现场游戏 Native 消费者日志，`NOT_CAPTURED`。
- [PR #64](https://github.com/969981/ACNH_Resources/pull/64) 修复并发重建时 `coverage.json` 的 rebase 冲突，[主分支持久化 #45184623253](https://github.com/969981/ACNH_Resources/actions/runs/45184623253) 成功。权威身份覆盖 **39,381 / 103,400**，仍缺 **64,019**；Model **35,427 / 60,166**，仍缺 **24,739**；BDLI **92 / 36,708**，仍缺 **36,616**。
- 以上来源身份、真实媒体 L3 与 Native 游戏语义是三条**分别验收、不能相加**的轴。详见 [[22-Unrepresented-Model-BDLI-Real-Source-Shards]]。

## 历史阶段 · 早期 Model L3 与 BDLI Native（2026-11-23）

- **Model 真正 L3（新运行重解码）**：[PR #61](https://github.com/969981/ACNH_Resources/pull/61) / [CI #45180483511](https://github.com/969981/ACNH_Resources/actions/runs/45180483511) 对 4 个源于 R19 Release 的原始 Model 重新读字节、SHA/Git blob 校验，实际调用 `wmdlt` 重新导出 **4/4 个有效 GLB 几何模型**，4 个新 GLB 输出各自 SHA 与 mesh/primitive 通过验证。详见 [[19-Real-BFRES-GLB-R19-Replay]]。这些是已纳入身份的复验，不增加新的原始源身份，不能推断 FSKA/FMAA/原版 GPU 等价。
- **BDLI Native 消费者**：[PR #62](https://github.com/969981/ACNH_Resources/pull/62) / [CI #45181279917](https://github.com/969981/ACNH_Resources/actions/runs/45181279917) 读取真实 3,118 字节 CNzh `STR_CategoryName.bdli.zs`、验证原始 Git SHA 与 **224 个 LBLI 区段**，并提供 GDB 真实游戏会话只读候选观测脚本。没有现场 Native 取证，`NOT_CAPTURED` 保持不变。详见 [[20-BDLI-Native-Consumer-Capture-Gate]]。
- 两项均为独立于 **39,317 / 103,400 来源身份证据**的验收轴，不能互相累计。

## 最新验收快照 · R50–R62 及 R83–R84 已补证（2026-11-23）

- [PR #59](https://github.com/969981/ACNH_Resources/pull/59)：真实下载 R83/R84 Artifacts，5 个 BCSV 原始字节、Git blob 和 SHA 复核，净增 5，阶段总量 16,096。
- [PR #60](https://github.com/969981/ACNH_Resources/pull/60)：53 个历史原生图标批次共 26,277 条源记录、与之前来源去重净增 23,221；[CI #45179415194](https://github.com/969981/ACNH_Resources/actions/runs/45179415194) 与[主分支 #45179663567](https://github.com/969981/ACNH_Resources/actions/runs/45179663567) 均已通过。
- 当前主分支来源身份 **39,317 / 103,400**，尚未纳入证据账本 **64,083**。Model **35,411 / 60,166**，尚缺 **24,755**；BDLI **44 / 36,708**，尚缺 **36,664**，**仍没有新增 BDLI Native 消费者证据**。
- 历史原版 PNG 的一源一图像证据保守记 `partial`，不能假称完整 BFRES / GLB / FSKA / FMAA 或运行时纹理绑定已完成。详情见 [[17-R83-R84-Original-BCSV-Byte-Proof]]、[[18-R50-R62-Item-Native-PNG-Source-SHA]]。

## 历史阶段快照 · R69–R72 已补证（2026-11-23）

- [PR #57](https://github.com/969981/ACNH_Resources/pull/57) 经 [CI #45176321178](https://github.com/969981/ACNH_Resources/actions/runs/45176321178) 和[主分支发布 #45177061879](https://github.com/969981/ACNH_Resources/actions/runs/45177061879) 通过；30 份已提交 R69–R72 图标分片 JSON 含 5,445 条历史 Model 原始身份记录，去重后与此前 11,269 个路径重叠 623，**净增 4,822**。
- 最新来源身份：**16,091 / 103,400** 已纳入逐源原始 SHA；**87,309** 目前未纳入，不等于失败。Model：**12,190 / 60,166**（仍缺 **47,976**）；BDLI：**44 / 36,708**（仍缺 **36,664**），本次 BDLI 未新增。
- 单个历史源具有经过 PNG CRC/SHA 和像素解码的证据，保守归类为 `partial`。本轮**没有新 Model 完整 BFRES 转换证据，也没有 BDLI Native 字符串消费者验证**。参见 [[15-R69-R72-Image-Source-SHA-Recovery]]。
- [PR #58](https://github.com/969981/ACNH_Resources/pull/58) / [CI #45176742114](https://github.com/969981/ACNH_Resources/actions/runs/45176742114)：R8 普通媒体 1,112 条与 R19 及旧账本逐源完全一致，净增 **0**；参见 [[16-R8-R19-Cumulative-Media-Reconciliation]]。
- 以下旧段落的 11,262 或 11,269 是对应历史验收快照，而不是最新主分支数字。

## 后续验收快照 · R8 BARS 已补证（2026-11-23）

- [PR #56](https://github.com/969981/ACNH_Resources/pull/56) 已合并；[主分支 CI #45169778919](https://github.com/969981/ACNH_Resources/actions/runs/45169778919) 真实下载 R8 独立 BARS Release，8 个真实历史身份输入，经源 SHA 去重净增 7，新的权威账本 **11,269 / 103,400**，本次未纳入 **92,131**。
- R8 仅改变 Sound 原始来源覆盖：**2,842 / 2,848**；Model **7,368 / 60,166**、BDLI **44 / 36,708** 不变。这是逐源账本，不是 L3/Native 覆盖。
- R8 普通媒体累计 1,112 条另行与 R19 去重，R45–R90 专项研究的逐源哈希证据仍待追溯。

## 前序基线（2026-11-23，R9–R18 合并后、优先波验收前）

- 原始完整 Git Tree：**103,400**，SHA 来源账本已纳入 **11,238** 个不同原始路径；其余 **92,162** 只是**本次账本中无逐源证据**，不可定义成历史从未运行。
- Model：**60,166** 原始源；已有 **7,356** 逐源证据，**52,810** 当前证据缺位。
- BDLI：**36,708** 原始源；现已有 R9 逐源 LBLI 无损区段报告与 R51、batch 历史记录。具体新增后的分类数量必须从最新 coverage.json 自动读取；**不要沿用旧 3/36,705 数字**。
- 新增 R9/R10/R14/R16/R17/R18 真 Release SHA 共 **340** 输入身份，去重净增 **336**。R8 部分来源以及 R45–R90 专项的独立逐源 SHA 仍需持续追回。

## 真实原始源 Pilot（12 Model + 12 BDLI）

专用入口 `Scripts/acnh303_priority_model_bdli.py`：完整 Git Tree 枚举（不依赖 GitHub Contents 的 1,000 项上限），按源路径 SHA-256 的稳定 shard 从历史账本**尚未纳入**的 Model / BDLI 各选 12 条。含选中原始 Git blob SHA，生成 sparse checkout 精确路径。随后在 GitHub Actions `acnh303-priority-model-bdli.yml` **真正读取 24 个原始 Git blob 文件字节**，逐源核实 Git SHA-1 blob、原始 SHA-256、原始大小。

静态解析证据严格分层：

| 分类 | 当前探测 | 不能声称 |
|---|---|---|
| Model | 有界 Zstd/Yaz0/SARC/BFRES/BNTX 叶子分类、SHA、文件数量 | 实际 GLB/PNG 转换、骨骼/动画播放、GPU parity |
| BDLI | Zstd 展开、BDLI v2 头和 LBLI 目录、每段严格边界与 SHA | 文本/控制码语义、语言映射、Native 消费者行为 |

此 Pilot 不执行 L3 媒体转换，因此每个来源的历史状态是 `no_output`（或出错时 `failed`），不因为解析了结构就当作 `converted`。即使源 SHA 和 Git blob 都通过，本轮并不代表全 103,400 个原始文件已经重新读取。

### 本地 / CI 操作

```bash
python Scripts/acnh303_priority_model_bdli.py select --root . --shard 0 --shards 64 --per-category 12
git sparse-checkout set --no-cone --stdin < priority_sparse_patterns.txt
python Scripts/acnh303_priority_model_bdli.py run --root . --selection priority_selection.json --out priority_wave_model_bdli.json
python -m unittest discover -s Scripts -p 'test_acnh303_priority_model_bdli.py' -v
```

合并工作流之后，会在主分支自动运行真实 Pilot，提交 `UnPack/_meta/history_sha_merge/_inputs/priority_wave_model_bdli.json`；旧账本脚本的 `read_priority_wave()` 会对每条原始路径、Git blob、来源哈希、无媒体输出、Native=false 验证后再合并。历史 SHA Workflow 监听这个新证据文件的提交，重新计算 `coverage.json` 和 `source_ledger.jsonl.gz`。

**注意：** 这个文档描述的是 CI 执行方案。未经真实 Pilot 成功、提交账本并重新汇总前，不应预报净增 24 或改动已通过的 11,238/92,162。

## 后续工作

1. 优先 R8 原始 8 个 BARS 的真实 SHA、R45–R90 Actions artifact / history branch 真 manifest；R84 物品数据库 ZIP 不能因为文件名被当作逐原始源证据。
2. Model 对已纳入的 `partial` / `no_output` 分组检查 BFRES (FMDL/FSKA/FMAA)、BNTX、BNSH，挑选能真正转换和校验的资源进入 L3。
3. BDLI 针对 CNzh/JPja/EUen 等同源名称做 LBLI identifier 字段差异分析，保持 hash/原始字节及 section offset 的可追溯性；Native 字符串 consumer 仍未验证。
4. 扩展分片之前先把首波 24 个逐源 CI 结果入账并检查 parser 失败分布，不重复跑已经确认的 SHA 路径。
