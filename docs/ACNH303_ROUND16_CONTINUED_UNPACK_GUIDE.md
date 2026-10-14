# ACNH 3.0.3 — R16 全量剩余独立 BWAV + Model/Layout/BARS 分批扩容

> 2026-10-14。分支：`feat/acnh303-round16-final-bwav-expand`。此页区分 **已审计的 R15 基线** 与 **R16 计划、流水线执行和最终验收**。R16 成功数字只从实际 Actions 审计产生，不能从工作流配置反推。

## 1. 已实际验证的 R15 基线

- RomFS 原文件库存 **103,400**，原始 NCA `e10617820db06889e1638499478da0de_NCA/1` 不可修改。
- L3 核心媒体已实测 **1,576 个互不重复原始源**，输出 **246 GLB + 2,230 PNG + 924 独立 PCM WAV = 3,400 文件**。
- Model 已测 **340 / 60,166**，Layout 已测 **312 / 960**；独立 Sound BWAV 已测 **924 / 1,146**。
- BARS 独立统计截至 R14 **120 / 1,696** 源、**1,146 个内嵌 PCM WAV** 和 **1,126 个已识别原生 AMTA v5**。BARS PCM WAV 不并入独立 BWAV 的 924。
- 权威累计源清单：`derived/3.0.3/media_round15_cumulative/source_manifest.jsonl.gz`，对应 `coverage.json`。
- BARS 历史集合由 R8 8 + R9 32 + R10 64 + R14 16 构成；R14 自身的 `source_manifest.jsonl.gz` **仅含本轮 16 个新 BARS 源**，不能误读为全量 120。

## 2. R16 已提交的可执行任务配置

| 格式 | R15/R14 未测 | R16 真实原始源计划 | 工作流分片 | 通过后剩余未测 |
| --- | ---: | ---: | ---: | ---: |
| 独立 Sound `.bwav` | 222 | **222（最后一批）** | 12 个，18–19 源/分片 | **0** |
| Model `.zs` | 59,826 | 72 | 6 个 × 12 | 59,754 |
| Layout `.zs` | 648 | 48 | 6 个 × 8 | 600 |
| Sound `.bars` | 1,576 | 36 | 6 个 × 6 | 1,540 |
| **合计** | **62,272** | **378** | **30 个** | **61,894** |

注意：此表中“通过后”是 **条件预测**，尚不是已经成功解码的事实。对 Model 的几何与纯纹理应保持 `GLB` 与 `PNG` 分类；对 Layout 无 BNTX 的容器即便成功恢复 BFLYT/BFLAN/FCPX JSON，也只能报告独立的语义转换；BARS AMTA 仅是无损原生字节，不是完整播放参数解码。

## 3. 工程文件

- `scripts/acnh303_round16_select.py`：加载 R15 核心媒体基线及 R8/R9/R10/R14 BARS 路径合集，按 Git tree 剩余原始源严格排序、下标取模分片；最终 222 个 BWAV 需要精确匹配总数并恰好分配一次。
- `scripts/test_acnh303_round16_select.py`：使用模拟原始树验证 222 BWAV 被 12 个分片唯一分配、其他格式分片不重叠、数量不正确时立即失败。
- `.github/workflows/acnh303-round16-unpack.yml`：选源、sparse checkout、原生转换、每件输出 SHA / 原始源 SHA 校验、30 个临时原始数据包及报告、独立累计审计。
- `scripts/acnh303_round16_bars_reconcile.py`：交叉核对新增 BARS/AMTA 报告与 R14 历史集合、103,400 原始源库存、原始 SHA 和成员 WAV/AMTA 验证记录。
- `scripts/acnh303_round16_release_verify.py`：长期发布前必须实际下载全部 30 个数据工件，逐个对照 Git 中提交的 SHA，不能只看汇总数。
- `.github/workflows/acnh303-round16-release.yml`：**在 R16 转换及累计审计通过后**，手动执行永久 Release 出版，重复 SHA 审查、发布数据分卷和 `SHA256SUMS.txt`。

## 4. 转换和验收条件

1. Git tree 只查路径，不下载未选择的巨大 blob。每个新原始路径不能出现在对应基线，重复路径或相交源直接报错。
2. 每个分片只 sparse-checkout 原始文件，压缩层和解码层只读。
3. BWAV 需要真实可读取的 PCM WAV，非空帧数、可验证频道/采样率、SHA-256。最终 222 个全部通过，才能说 `1,146/1,146` **已完成独立 BWAV 的对应 L3 转码测试**。
4. Model 使用真实 GLB POSITION 几何 / PNG raster validation；纯纹理 FRES 不虚报几何 GLB。
5. Layout 独立输出 BFLYT/BFLAN/FCPX 静态 JSON；`no_target_leaf` 不等于 PNG 转换成功，更不等于还原游戏 UI 运行效果。
6. BARS 原文件哈希必须同时对应 BWAV/PCM 和 AMTA 报告；PCM WAV 与 AMTA v5 各自统计有效成员。解析错误/未知成员不能伪造为成功。
7. 累计审计必须同时得到 **24 份核心媒体分片报告 + 6 份 Layout 语义报告 + 6 对 BARS/AMTA 报告**，以及完整库存对账后方可提交 `derived/3.0.3/*_round16_cumulative/`。
8. 通过后理论累计 **1,918** 个互不重复的核心媒体源，其中独立 BWAV **1,146/1,146**；BARS 试验容器 **156/1,696**。输出的 PNG/GLB/BARS WAV/AMTA 实数以审计报告为准。
9. 永久 Release 需要重新下载 30 个数据工件，按原始路径逐件校验 SHA-256，再封卷发布；Actions 临时工件不是长期归档。主分支 `3.0.3` 不变。

## 5. 未完成的深层语义

即使 R16 全部执行成功，仍有 59,754 个 Model、600 个 Layout、1,540 个 BARS 未进行对应的 L3 测试。BDLI/LBLI 全语言语义、AMTA v5 播放/循环参数、BFLAN Native 求值与动画一致性、EventFlow Native 分派、材质、Shader、Effect 等仍待独立真实证据验证。

## 6. 手动执行路径及故障处理

在 GitHub 仓库 Actions 页打开 `ACNH 3.0.3 R16 Final BWAV and L3 Expansion`，选择 `feat/acnh303-round16-final-bwav-expand` 运行。若 GitHub 已因工作流提交自动触发，避免重复点击运行。转换及 `reconcile` 均成功且累计清单已提交后，才可运行 `ACNH 3.0.3 R16 Verified Permanent Release`。任一分片失败时，保留原始报告定位错误，不得通过删除失败项或改小分母使审计通过。
