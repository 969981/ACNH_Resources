---
title: ACNH 3.0.3 · R41–R90 历史来源 SHA-256 去重与覆盖率证据
aliases: [Historical SHA Ledger, Source Dedup, ACNH303 History]
tags: [ACNH, R41, R44, R51, R90, sha256, provenance, audit, release]
status: active
---
# R41–R90 · 历史原始资源 SHA 去重

> [!important] 证据不是完成率
> **只将确实存在且附有原始源路径、字节数、SHA-256 的执行记录计入“已尝试来源”。** 旧文档中的总体估算、不带 per-source SHA 的脚本研究、仅列出选择计划的 JSON，均**不计入**已处理源。若同一路径的原始 SHA 不一致，立即失败并要求手动调查；同一个源多次重试只占 1 个原始路径。不同原始路径即便内容 SHA 相同，仍是两个原始文件，单独记录别名关系。

## 当前可获取的权威证据

| 来源 | 精确记录数 | 证据 |
|---|---:|---|
| **R27–R36 Releases** | **1,788** | 10 个原始增量 Release（每个含原始源 `source_delta.jsonl.gz` + `SHA256SUMS.txt`），涵盖 Model / Layout / Sound-BARS；下载后每轮单独验源、数量、SHA |
| R41 Release | 480 | [R41](https://github.com/969981/ACNH_Resources/releases/tag/acnh303-r41-480-real-media-bars-20261102) 的 `source_delta.jsonl.gz` + `SHA256SUMS.txt` |
| R42 Release | 960 | [R42](https://github.com/969981/ACNH_Resources/releases/tag/acnh303-r42-960-media-native-20261102) 的 SHA 文件 |
| R43 Release | 1,408 | [R43](https://github.com/969981/ACNH_Resources/releases/tag/acnh303-r43-1408-bars-l3-complete-20261102) 的 SHA 文件 |
| R44 Release | 2,560 | [R44](https://github.com/969981/ACNH_Resources/releases/tag/acnh303-r44-2560-model-fmaa-aal-20261102) 的 SHA 文件 |
| **上述 Release 合计** | **7,196** | 14 轮各自的 per-original-source 记录；CI 校验全部 Release 数据文件实际哈希、数量、分类、源 SHA |
| Git 已提交的增量批次 | 动态计数 | `UnPack/_meta/batches/{category}/s*/actions-*.json`；每次包含选源 Git blob、源 SHA、状态和输出 SHA |
| 最新 Basic manifest | 动态计数 | `UnPack/_meta/basic_last_manifest.json`（不等于全量历史） |
| R51 16 真源 | 16 | [CI #45135434008](https://github.com/969981/ACNH_Resources/actions/runs/45135434008) 成功 Artifact `acnh303-r51-actual-source-pilot`，每源 Git blob SHA + 原始 SHA-256 + 输出信息 |

**无法进行完整导入的内容：** R19 曾有累计清单，但不在当前默认分支的可直接读取的对应 `derived/3.0.3/*_cumulative` 文件中；R27–R36 对应 Release 已纳入本轮；R45–R90 大量专项研究没有完整的逐原始源 SHA Release。因此在未找到、校验这些清单前，不能用旧文档里的“轮次完成数量”替代真实身份，也不能将“本次未导入”宣称为“从未处理”。

## 新增实装

- `Scripts/acnh303_history_sha_merge.py`：扫描**完整 Git Tree（103,400 个源）**，导入 Release、本地已提交 batch、Basic 和 R51 测试 JSON，按规范化路径 + 原始 SHA-256 + size 归并，不可用不同 SHA 混合。R27–R36、R41–R44 Release 用各自 `SHA256SUMS.txt` **实际校验下载的 gzip**；源名还必须对应 Git Tree 真实源路径。
- 重复执行不会把源重复加总；成功的媒体解码不会被之后的失败重试覆盖。没有 SHA 的失败记录被隔离，不能凭路径加 1。
- 有 `validated_media_count` 和实际输出校验的单源状态独立记录：`converted`、`partial`、`raw_extracted`、`no_output`、`failed`。Release 的零媒体输出会记录为未转换，不将“进入 L3 流水线”说成已产出 GLB/PNG/WAV。
- `source_git_blob_sha` 只在报告明确提供时与 Git Tree SHA-1 精确匹配；Release 内源 SHA-256 只能证明历史报告和下载 Release 的哈希一致，**不能声称本次 CI 已重新读取 7,196 个 ROM 原始字节**。
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

1. **已经公开可核验的历史 R27–R36 与 R41–R44**：下载真实 Release asset，校验 SHA256SUMS、每源 SHA 和 source 文件数，和已提交本地 batch/R51 去重；这提供 *per-source historical evidence*。
2. **缺失的 R19 与 R45–R90**：仅导入有实际 source SHA 和版本身份的完整报表；无来源字节信息的研究脚本、文档没有可计数权限。继续寻回 Release/Actions artifact 或检出历史分支，不用估计填充。
3. **严格的 103,400 真源最终验收**：未有全部已检出原始源并独立实际 hash，`strict_full` 应继续为 false。已有历史 Release 也不等于此时重新实测原始字节。
4. **L3 与 Native**：Release 的媒体验证数量只是实际媒体转换，不等于图形播放、FMAA/AAL、BDLI/LBLI、EventFlow callback、BNSH Shader GPU 的完整游戏语义，仍分别保留 NOT_CAPTURED。

关联 [[11-Unified-Unpack-Recursive-Audit-2026-11-23]]、[[12-R51-Real-Wave-Gaps]]、[[10-Open-Issues-Triage-2026-11-23]]、[[05-Progress]]。
