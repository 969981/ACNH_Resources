---
title: ACNH 3.0.3 · R41–R90 历史来源 SHA-256 去重与覆盖率证据
aliases: [Historical SHA Ledger, Source Dedup, ACNH303 History]
tags: [ACNH, R41, R44, R51, R90, sha256, provenance, audit, release]
status: active
---
# R41–R90 · 历史原始资源 SHA 去重

## 当前真实已通过的逐源账本快照 · 2026-11-23

**11,262 / 103,400 个不同原始路径已经纳入具有 source SHA-256 的本次账本。92,138 个是“本次账本没有逐源证据”，不代表从未处理、不代表解包失败。**

- 早期 R9/R10/R14/R16/R17/R18 Release：实际验证 340 个源身份（BARS 308 + BDLI 32），去重后对原账本**净增 336**。[CI #45140100607](https://github.com/969981/ACNH_Resources/actions/runs/45140100607)
- Model/BDLI 静态优先抽样：实际检出并核对原始 Git blob / SHA 的 Model 12 + BDLI 12，入账后再增 24 条，**不计 L3 converted**。[CI #45141584240](https://github.com/969981/ACNH_Resources/actions/runs/45141584240) / [历史重算 #45141648523](https://github.com/969981/ACNH_Resources/actions/runs/45141648523)
- 最新 Model 已纳入 7,368 / 60,166；BDLI 已纳入 44 / 36,708。R8 完整逐源 SHA、R45–R90 专用原始文件日志仍需验证，不能使用旧汇总值补齐。
- 下文若出现 10,902/92,498 或 11,238/92,162，属于**对应历史时刻的阶段快照**，请以主分支 `UnPack/_meta/history_sha_merge/coverage.json` 为当前权威数。


> [!important] 证据不是完成率
> **只将确实存在且附有原始源路径、字节数、SHA-256 的执行记录计入“已尝试来源”。** 旧文档中的总体估算、不带 per-source SHA 的脚本研究、仅列出选择计划的 JSON，均**不计入**已处理源。若同一路径的原始 SHA 不一致，立即失败并要求手动调查；同一个源多次重试只占 1 个原始路径。不同原始路径即便内容 SHA 相同，仍是两个原始文件，单独记录别名关系。

## 当前可获取的权威证据

| 来源 | 精确记录数 | 证据 |
|---|---:|---|
| **R19 cumulative Release** | **3,638** | [R19](https://github.com/969981/ACNH_Resources/releases/tag/acnh303-r19-animation-native-20261014)：3,558 个媒体源 + 160 条 BARS PCM/AMTA 双轨记录对应的 **80 个原始 BARS**，精确比对两轨的 SHA；源总数不把 PCM 和 AMTA 算两次 |
| **R27–R36 Releases** | **1,788** | 10 个原始增量 Release（每个含原始源 `source_delta.jsonl.gz` + `SHA256SUMS.txt`），涵盖 Model / Layout / Sound-BARS；下载后每轮单独验源、数量、SHA |
| R41 Release | 480 | [R41](https://github.com/969981/ACNH_Resources/releases/tag/acnh303-r41-480-real-media-bars-20261102) 的 `source_delta.jsonl.gz` + `SHA256SUMS.txt` |
| R42 Release | 960 | [R42](https://github.com/969981/ACNH_Resources/releases/tag/acnh303-r42-960-media-native-20261102) 的 SHA 文件 |
| R43 Release | 1,408 | [R43](https://github.com/969981/ACNH_Resources/releases/tag/acnh303-r43-1408-bars-l3-complete-20261102) 的 SHA 文件 |
| R44 Release | 2,560 | [R44](https://github.com/969981/ACNH_Resources/releases/tag/acnh303-r44-2560-model-fmaa-aal-20261102) 的 SHA 文件 |
| **上述 Release 合计** | **10,834** | 15 个发布批次的 **原始路径级**记录（R19 两份 manifest 中 BARS 按 SHA 配对）；每份 Release 文件的实际哈希、数量、分类与源 SHA 均检查 |
| Git 已提交的增量批次 | 动态计数 | `UnPack/_meta/batches/{category}/s*/actions-*.json`；每次包含选源 Git blob、源 SHA、状态和输出 SHA |
| 最新 Basic manifest | 动态计数 | `UnPack/_meta/basic_last_manifest.json`（不等于全量历史） |
| R51 16 真源 | 16 | [CI #45135434008](https://github.com/969981/ACNH_Resources/actions/runs/45135434008) 成功 Artifact `acnh303-r51-actual-source-pilot`，每源 Git blob SHA + 原始 SHA-256 + 输出信息 |

**无法进行完整导入的内容：** R19 累计清单已从独立 Release 恢复，但不在当前默认分支可直接读取的对应 `derived/3.0.3/*_cumulative` 文件中；R19/R27–R36 对应 Release 已纳入本轮；R45–R90 大量专项研究没有完整的逐原始源 SHA Release。因此在未找到、校验这些清单前，不能用旧文档里的“轮次完成数量”替代真实身份，也不能将“本次未导入”宣称为“从未处理”。

## 2026-11-23 实际 CI 累计验证结果

**真实执行证明**：[GitHub Actions #45137169556](https://github.com/969981/ACNH_Resources/actions/runs/45137169556) 下载了 R19 与 R27–R44 的 15 份历史 Release per-source 数据，逐份核验实际下载文件的 SHA256SUMS，并与提交的批次和 R51 历史真源报告按源身份合并，自动化验收通过。此处不是预估。

| 指标 | 实测 |
|---|---:|
| 完整 Git Tree 原始文件 | **103,400** |
| R19 媒体 + 配对 BARS 原始源记录 | 3,638 |
| R27–R36 原始增量 | 1,788 |
| R41–R44 原始增量 | 5,408 |
| 仓库已提交 batch 执行行 | 192 |
| R51 实际 Git SHA + 原始字节验证 | 16 |
| 最新 Basic manifest 记录 | 1 |
| **上述执行记录总计** | **11,043** |
| SHA + 原始路径去重后的源 | **10,902** |
| 同一源历史重复执行记录 | **141** |
| 不同源路径但实际内容 SHA 相同的别名组 | 69 |
| 在这份导入账本中尚无记录的源路径 | **92,498** |

真实去重后最佳历史状态：

| 最佳记录状态 | 原始路径数 | 说明 |
|---|---:|---|
| `converted` | **1,506** | 有真实历史有效产物证据，不自动证明 Native 运行时 |
| `partial` | **9,137** | 含已经实际产出部分媒体但整体解析非完全成功的源 |
| `raw_extracted` | **9** | 仅 L1 原始叶子 |
| `no_output` | **245** | 历史测试已执行，未产出可计数目标 |
| `failed` | **5** | 真实历史失败，待单独重试 |
| **合计** | **10,902** | 每个原始路径只占一个身份 |

> [!warning] 切勿误读 92,498
> 这是**在当前已导入且验证的数据中没有逐源记录**的路径数量，而不是断言它们历史上从未执行或均无法解码。R8–R18、其他基础 L1/L2、R45–R90 的未收录逐源报告可能改变此数字。当前 CI 稀疏检出，不能据此声称已经重新读取 10,902 个原始 NCA 文件。R51 原始源 16/16 的实际读取验证独立成立。


## 2026-11-23 · 早期 R9–R18 逐源证据恢复（待 CI 核验）

找到六个已发布、具有 SHA256SUMS 校验的原始来源：

| 批次 | 证据文件 | 预期原始身份 |
|---|---|---:|
| R9 | source_manifest.jsonl.gz，BARS PCM/AMTA 配对与 BDLI LBLI 报告 | BARS 32 + BDLI 32 |
| R10 | bars_sources.jsonl.gz，PCM + AMTA 双轨 | BARS 64 |
| R14 | bars_source_manifest.jsonl.gz | BARS 16 |
| R16 | bars_source_manifest.jsonl.gz | BARS 36 |
| R17 | bars_source_manifest.jsonl.gz | BARS 60 |
| R18 | bars_source_manifest.jsonl.gz | BARS 100 |
| **合计（导入前）** | 同一 BARS 的两个音频轨道只能算一个原始源 | **340** |

新增 read_early_releases()：校验 Release 文件 SHA-256、原始 Git 路径、源 SHA-256/字节数，BARS/AMTA 成对一致、真实 WAV 成员哈希、BDLI LBLI 区段摘要。R9 BDLI 只能计入 L2 原始区段提取，不代表语言文本或 Native 语义完成；PCM 媒体成功也不能冒充原生播放参数验证。

**340 是新导入前的身份行，不是净新增覆盖数。** R19、既有 Release、提交的 batch 与 R51 会再通过路径+源 SHA 去重；发现 SHA/size 冲突则失败。R8 原始 8 BARS 身份仍需追回；R11–R13、R15 没有单独恢复到符合逐源 SHA 要求的独立 Release，不能用旧汇总数字代替。R45–R90 继续从 Actions/历史提交追回可验证记录。

**注意：上方 10,902 / 92,498 仍是 PR52 已通过的旧基线。** 新 CI 结果产生并提交 coverage.json 前，严禁预先更新这些统计。

## 新增实装

- `Scripts/acnh303_history_sha_merge.py`：扫描**完整 Git Tree（103,400 个源）**，导入 Release、本地已提交 batch、Basic 和 R51 测试 JSON，按规范化路径 + 原始 SHA-256 + size 归并，不可用不同 SHA 混合。R19、R27–R36、R41–R44 Release 用各自 `SHA256SUMS.txt` **实际校验下载的 gzip**；源名还必须对应 Git Tree 真实源路径。
- 重复执行不会把源重复加总；成功的媒体解码不会被之后的失败重试覆盖。没有 SHA 的失败记录被隔离，不能凭路径加 1。
- 有 `validated_media_count` 和实际输出校验的单源状态独立记录：`converted`、`partial`、`raw_extracted`、`no_output`、`failed`。Release 的零媒体输出会记录为未转换，不将“进入 L3 流水线”说成已产出 GLB/PNG/WAV。
- `source_git_blob_sha` 只在报告明确提供时与 Git Tree SHA-1 精确匹配；Release 内源 SHA-256 只能证明历史报告和下载 Release 的哈希一致，**不能声称本次 CI 已重新读取 10,834 个 ROM 原始字节**。
- 状态 `history` 保留每轮源记录、失败、原始状态和证据等级；不会用最高等级覆盖原始历史。
- 生成按 24 个原始目录的已尝试/已转换/部分/L1/失败/未导入对照；另按完整 Git Tree SHA 分片生成可选下一批，优先不在导入证据中的来源以及失败/无媒体输出的来源，避免重复测试可证实的成功文件。

## CI 和结果文件

[GitHub Actions · R41–R90 historical SHA merge](https://github.com/969981/ACNH_Resources/actions/workflows/acnh303-historical-sha-ledger.yml)

该工作流在 PR 中只读执行，验证历史数据；合并至 `3.0.3_Unpack` 触发一次 **经确认的来源账本提交**。结果写入：

- `UnPack/_meta/history_sha_merge/coverage.json`：完整 Git Tree 的 24 分类汇总、真实去重数量、证据来源及缺失计数；
- `UnPack/_meta/history_sha_merge/source_ledger.jsonl.gz`：gzip 文本、一个原始路径一行，保留全量来源与所有 retry history；
- `UnPack/_meta/history_sha_merge/next_sources.json`：可直接供下一批 sparse checkout 选择的 source Git blob 路径清单（默认 0/64 shard × 24）。

本地已下载 Release 与 R51 artifact 时：

```bash
python Scripts/acnh303_history_sha_merge.py \
  --root . \
  --release-dir history-inputs \
  --r51-artifact history-inputs/r51/r51_real_wave.json \
  --batches UnPack/_meta/batches \
  --basic-last UnPack/_meta/basic_last_manifest.json \
  --out UnPack/_meta/history_sha_merge \
  --shard 0 --shards 64 --limit 24
```

## 证据分层与后续排期

1. **已经公开可核验的历史 R19、R27–R36 与 R41–R44**：下载真实 Release asset，校验 SHA256SUMS、每源 SHA 和 source 文件数，和已提交本地 batch/R51 去重；这提供 *per-source historical evidence*。
2. **尚无逐源 Release 的 R45–R90 及部分 R8–R18**：仅导入有实际 source SHA 和版本身份的完整报表；无来源字节信息的研究脚本、文档没有可计数权限。继续寻回 Release/Actions artifact 或检出历史分支，不用估计填充。
3. **严格的 103,400 真源最终验收**：未有全部已检出原始源并独立实际 hash，`strict_full` 应继续为 false。已有历史 Release 也不等于此时重新实测原始字节。
4. **L3 与 Native**：Release 的媒体验证数量只是实际媒体转换，不等于图形播放、FMAA/AAL、BDLI/LBLI、EventFlow callback、BNSH Shader GPU 的完整游戏语义，仍分别保留 NOT_CAPTURED。

关联 [[11-Unified-Unpack-Recursive-Audit-2026-11-23]]、[[12-R51-Real-Wave-Gaps]]、[[10-Open-Issues-Triage-2026-11-23]]、[[05-Progress]]。
