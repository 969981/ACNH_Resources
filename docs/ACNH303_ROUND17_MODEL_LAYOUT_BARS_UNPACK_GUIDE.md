# ACNH 3.0.3 — R17 增量 Model / Layout / BARS 专用 L3 解包与 Native 语义验收

> 2026-10-14。基于 **已成功完成并永久发布** 的 R16：Run [38531351961](https://github.com/969981/ACNH_Resources/actions/runs/38531351961)，[R16 Release](https://github.com/969981/ACNH_Resources/releases/tag/acnh303-r16-final-bwav-l3-expand-20261014)。本文件描述已提交的 R17 工作流及验收门槛，**不将目标数预记为成果**。

## R16 真实基线（原始 RomFS 103,400 文件，NCA 只读）

| 类型 | 实测原始源 | 未进行对应 L3 专用测试 |
| --- | ---: | ---: |
| Model BFRES | 412 / 60,166 | 59,754 |
| Layout | 360 / 960 | 600 |
| 独立 BWAV | 1,146 / 1,146 | **0** |
| BARS | 156 / 1,696 | 1,540 |

R16 核心媒体累计：1,918 个不重复源，318 GLB、2,512 PNG、1,146 WAV；BARS PCM WAV 1,265，AMTA v5 1,245，**不与独立 BWAV 汇总混算**。

## R17 实际提交的选源策略（工作流内真正执行）

- P1 Model：12 分片 × 24 = **288** 不重复新源。以 R16 累计 source manifest 排除全部已有 Model；SHA-256(path) 的全局确定性排列消除文件名前缀偏差，不以路径推测 FRES 的内部类型。
- P2 Layout：6 × 12 = **72** 新源。PNG 与 BFLYT/BFLAN/FCPX JSON 独立核验；`no_target_leaf` 可恢复结构，但不记入媒体 PNG。
- P2 BARS：6 × 10 = **60** 新容器。历史 R8(8)、R9(32)、R10(64)、R14(16)、R16(36) 总计 **156** 个原始 source_path 预先排除；PCM WAV 和 lossless AMTA v5 相互绑定原容器 SHA。
- 已确认结束的独立 BWAV 不再参与本轮源选择，保留 **1,146/1,146**。

R17 的 **420** 个原始源是本轮 L3 测试样本，不等于 420 个成功媒体转换件。若对应分片真正结束且审计通过，Model 已测达 700（未测 59,466）、Layout 已测达 432（未测 528）、BARS 已测达 216（未测 1,480）。真实 GLB/PNG/WAV/AMTA 数字只能来自最终报告。

## 专用代码和成果路径

| 项目 | 脚本/工作流与输出 |
| --- | --- |
| SHA 去重抽样 | `scripts/acnh303_round17_select.py`, `scripts/test_acnh303_round17_select.py` |
| Model 几何/纹理严格分类 | `scripts/acnh303_round17_model_classify.py`; `derived/3.0.3/model_round17_classification/coverage.json` |
| Model / Layout 媒体审计 | `scripts/acnh303_media_incremental_audit.py`; `derived/3.0.3/media_round17_cumulative/` |
| BFLYT/BFLAN/FCPX 语义与 SHA 对账 | `scripts/acnh303_layout_semantic_reconcile.py`; `derived/3.0.3/layout_semantic_round17_cumulative/` |
| BARS AMTA/BWAV 成员验证 | `scripts/acnh303_round17_bars_reconcile.py`; `derived/3.0.3/bars_round17_cumulative/` |
| 产物二次逐字节 SHA 验证 | `scripts/acnh303_round17_release_verify.py` |
| 自动完整流水线 | `.github/workflows/acnh303-round17-unpack.yml` |
| 仅在审计成功后发布同一次 run 的数据 | `.github/workflows/acnh303-round17-release.yml` |

所有脚本仅对原始 RomFS `e10617820db06889e1638499478da0de_NCA/1` 只读，禁止修改/归一化原始文件。对媒体输出验证 GLB POSITION 几何、PNG CRC+真实像素、PCM WAV 的有效参数和完整帧、SHA-256；BARS AMTA 原生字节另有 SHA 及版本字段对账。`no_target_leaf`、`parser_failed`、`partial_media` 仍保留，不提高成功数。Release 以 SHA256SUMS 和压缩分卷长期固化原始来源索引。

## P3: 不能被误报为媒体 L3 完成的原生语义

这些研究与本轮 Model/Resource 批量转换分离。均必须追 `具体原始源 SHA → member hash → Native 读取 RVA/XREF → 实机读取值/状态效果`，保存失败样本。

| Format | 已有可复核事实 | 待完成的真实 Native 闭环 |
| --- | --- | --- |
| BDLI / LBLI | 36,708 个原始源；多语言 LBLI 已提取 raw section | 类型/长度与记录引用、两种以上语言同资源键对照；ELF 实际读取者与文本/跳转语义，不能假设 LBLI ID 是 UI 字符串 |
| BARS / AMTA v5 | 已有无损 AMTA 和 PCM WAV 源/member/SHA | 逐个 header offset 的 Native 读取者，确定循环点、播控参数、事件 marker 的意义（不得猜字段名） |
| EventFlow BFEVFL | 12 个静态事件图已真实恢复 | 具体 Action/Query 注册表、间接调用目标、参数封送和实机事件效果；静态 action 名称不等于执行闭合 |
| Shader / Effect | 有底层解压和结构索引 | BNSH、PTCL/ELink2 材质/粒子注册及真实加载执行追踪，抽样比对 GPU/效果行为 |

相关跟踪：[Native 语义 #33](https://github.com/969981/ACNH_Resources/issues/33) · [BDLI #18](https://github.com/969981/ACNH_Resources/issues/18) · [Shader/Effect #12](https://github.com/969981/ACNH_Resources/issues/12)。这些 Issue 不能因 R17 解包媒体数量增加而自动关闭。

## R17 验收放行条件

1. 24 分片源索引唯一，不与 R16 的 1,918 媒体源或历史 156 个 BARS 源重复。
2. 每件来源原文件长度与 103,400 全量库存 join、SHA-256 精确对账；24 个分片日志和输出哈希真实可查。
3. Model 288 个被测试源逐个明确真实几何 GLB / 纯纹理 PNG / 无媒体目标 / 失败，不能把无几何 FRES 伪造为 GLB。
4. Layout 72 个源，PNG 与 UI2D JSON 及失败原因逐件记录；BARS 60 个容器同时验 AMTA 与 BWAV PCM 记录及来源 SHA。
5. 18 个核心媒体报告、6 个 UI2D、6 对 BARS/AMTA 完整聚合审计成功，输出真实 `media_round17_cumulative`、`layout_semantic_round17_cumulative`、`bars_round17_cumulative` 和 `model_round17_classification`。
6. 只有 `reconcile` 全通过后，`publish` 才下载同一 run 的 24 个转换数据工件逐文件重新计算 SHA-256，发布 `acnh303-r17-model-layout-bars-20261014` Release 和 `SHA256SUMS.txt`。
7. R17 专用分支未合并到 `3.0.3`；任何未取得运行证据的源不能提前记为成功。

### 已知局限

R17 即使完全通过，也仅扩大真实媒体及部分结构 L3 覆盖。数万个 Model、数百个 Layout、数千 BARS，以及字体替换/动画求值/Shader/Effect/EventFlow 的真正 native 行为仍未闭合。
