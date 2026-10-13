# ACNH 3.0.3 — L3 Media Scaleout, 2026-10-13

## 已执行并验证

[12 新分片实际运行](https://github.com/969981/ACNH_Resources/actions/runs/38415265992) success。相对于上一轮 36 个源文件，新增 Model 96、Layout 80、BWAV 40，共 **216 个互不重复**的新源文件。与上一轮累计后为 252 个真实源文件、775 个已验证媒体产物，770,411,492 字节。

| 内容格式 | 原始候选总数 | 累计已测源数 | 有有效媒体输出的源数 | 实测成功率 | 有效媒体输出 |
| --- | ---: | ---: | ---: | ---: | ---: |
| BFRES / Model→GLB | 60,166 | 108 | 82 | 75.93% | 82 GLB |
| BNTX / Layout→PNG | 960 | 92 | 64 | 69.57% | 641 PNG |
| BWAV / Sound→WAV | 1,146 | 52 | 52 | 100% | 52 WAV |
| **总计** | **62,272** | **252** | **198** | **78.57%** | **775** |

**尚未测试：Model 60,058、Layout 868、BWAV 1,094。** 上表的成功率仅适用于实测源文件，不得视为全库 L3 成功率；L0–L2 的 103,400 源文件已清点与当前媒体 L3 覆盖是不同概念。

本批次增加：70 GLB、543 PNG、40 WAV，共 **653** 个通过了实际几何访问器/像素栅格/PCM 验证的媒体文件，新增原始输出 591,035,236 字节。

## 仍不支持及证据

- **26 个 Model 源文件**，全部属于 BottomsTex... 服装资源，nintoolbox 的 wmdlt 返回 ERROR #36 (INVALID DATA / Failed to parse 3D model)。这是 native decoder 失败，暂不能据名称判定是否为“纹理专用 BFRES”或具体偏移错误。完整 stdout/stderr + SHA-256 证据见 [BFRES diagnostics](../derived/3.0.3/media_scaleout_diagnostics/bfres_errors.json)，进一步分析 [Issue #21](https://github.com/969981/ACNH_Resources/issues/21)。
- **28 个 Layout 源文件**未发现独立 BNTX 叶子，因此状态为 no_target_leaf，不是 PNG 转换失败。相应 BFLYT/BFLAN 尚待解析。
- 已测 52 个 BWAV 均成功，但不能把未测的 1,094 个视为完成。

## 正式产物与哈希校验

[长期 GitHub Release：L3 216-Source Scaleout](https://github.com/969981/ACNH_Resources/releases/tag/acnh303-media-l3-scaleout-20261013)

包含 **12 个媒体分卷**，加上 coverage.json、problems.csv、source_status.csv、source_manifest.jsonl.gz 与 SHA256SUMS.txt。Release 共 17 个附件，约 442 MB；每个分卷保持原始源文件路径对应关系以及逐叶子 SHA-256 和格式校验结果。

持续统计工具：
- scripts/acnh303_media_audit.py：读取真实的 103,400 源文件 inventory，合并多个分片报告，禁止重复源和非法结果，输出每格式已测率、未测率、失败原因、全媒体 SHA-256 清单。
- .github/workflows/acnh303-media-l3-scaleout.yml：本轮 12 个分片与原校准 6 个分片合并成 18 个报告，验证为 252 个唯一原始源路径。
- .github/workflows/acnh303-media-l3-scaleout-release.yml：将后续正式媒体结果与 SHA256SUMS 做永久 Release。
- .github/workflows/acnh303-media-l3-on-demand.yml：后续通过 workflow_dispatch 自定义 Model/Layout/Sound、分片编号、skip_count、max_count，按固定源路径排序继续处理，限制单批模型/布局 50 源、音频 12 源。每次运行结果单独保存在 media_run_history，支持继续生成新的累计覆盖率。

接下来优先突破 26 个 BottomsTex FRES 真正的数据结构，不把无效几何塞进 GLB；然后扩展未测试的 BWAV 与 Layout 格式分片，并核验材质、骨骼、纹理压缩与音频质量。
