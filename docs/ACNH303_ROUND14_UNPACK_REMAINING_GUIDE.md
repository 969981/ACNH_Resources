# ACNH 3.0.3 — R14 全量缺口盘点与增量 Unpack 实测报告

> 2026-10-14。本轮基于完整 Git tree 清单、源 SHA 和 R10 累计 L3 manifest，实测 **128 个从未经过相应 L3 转码的原始资源**。不是 128 个来自已有导出目录的二次打包文件。R14 的 16 个转换分片全部实际成功；首次同工作流汇总因 Actions 下载工件的相对目录布局错误而失败，已用独立回放审计重新读取真实报告并成功合并，绝不将失败的原汇总写为成功。

## 一、权威完成口径

| 项目 | 源数 / 输出数 | 已验收边界 |
| --- | ---: | --- |
| 完整 RomFS 清单 | 103400 源 / 10.42GB | L0 inventory 已齐 |
| 全量 L0–L2 有效记录 | 103400；2105 converted、101295 partial、0 failed | `derived/3.0.3/effective/coverage.json`，代表处理台账与底层容器状态，不等于 L3 完成 |
| R10 核心媒体 L3 | 1224 已测 / 2919 媒体 | 214 GLB / 2069 PNG / 636 独立 WAV |
| R14 新增核心媒体 | **112 原始源 / 241 实际媒体** | **32 GLB / 161 PNG / 48 WAV**；分别实测 32 Model、32 Layout、48 BWAV |
| R14 累计核心媒体 | **1336 已测 / 3160 媒体** | 246 GLB / 2230 PNG / 684 独立 WAV |
| R14 新增 BARS（独立台账） | **16 BARS / 84 PCM WAV / 84 无损 AMTA v5** | 逐成员实际输出 SHA、WAV 帧数与 AMTA v5 版本经过校验 |
| R14 累计 BARS（独立台账） | **120 已测 / 1146 PCM WAV** | 另有 1126 份 R9+R10+R14 AMTA v5 原始成员记录 |
| R14 新增 Layout 语义 | **32 源 / 163 JSON** | 32 BFLYT、110 BFLAN、21 FCPX fontrefs；不等于原生动画求值或字体 fallback |

核心媒体中只统计可独立校验 GLB/PNG/WAV 的文件，**BARS WAV 不并入独立 BWAV 的 684 WAV**。此外 R14 Layout 有 21 个原始源实际生成 161 PNG，11 个源未发现 BNTX 媒体叶子，却全部具有可解析 UI2D 结构。因此 R14 扫描后已测 Layout 的 `no_target_leaf` 总数为 **77**，不能错误列为 PNG 失败或“源文件无法解包”。

## 二、当前真正尚未 L3 测试的源（R14 之后）

| 候选格式 | 总源 | 已测 | 尚未在对应 L3 专用转换器测试 |
| --- | ---: | ---: | ---: |
| Model `.zs`（BFRES/FRES） | 60166 | 340 | **59826** |
| Layout `.zs`（BNTX 与 UI2D） | 960 | 312 | **648** |
| Sound `.bwav`（独立音频） | 1146 | 684 | **462** |
| Sound `.bars`（容器音频/AMTA） | 1696 | 120 | **1576** |

四类共 **62512 个尚未接受相应 L3 测试的原始源**；不等于有 62512 个原始文件未解压，更不能推断这些源都应该输出 GLB/PNG/WAV。

此外需要继续深入的 L3/Native 语义：AMTA v5 播放/loop/name 字段（Issue #33）；BDLI/LBLI ID 与游戏文本关系；EventFlow Native Action/Query handler；FCPX 字体替换、BFLYT 原生渲染、BFLAN 与游戏实机时间轴；BNSH/PTCL/Shader、Swkbd、ASB/动画信息、Font/Message 语言关系。原始 `partial` 仍为 101295，直到有可复现的新处理达到相应验收条件再修改。

## 三、可以按文件逐个排查的清单

- [全部 103400 个源的分层状态](../derived/3.0.3/round14_unfinished_index/all_sources_status.csv.gz)：包含 `source_path`、`original_bytes`、`original_sha256`、`l0_l2_status`、`l3_target`、`l3_state` 和解释。
- [未完全处理源的完整清单](../derived/3.0.3/round14_unfinished_index/remaining_noncomplete.csv.gz)：现为 **101295 条**。其中存在“媒体已转换而更深层原生语义尚未全部解释”的情况。
- [按目录、L3 目标归类及部分未测试路径样本](../derived/3.0.3/round14_unfinished_index/summary.json)。

清单源于完整 103400 文件库存与有效 103400 条处理源 manifest 的严格 join；R14 新媒体与 R14 16 个 BARS 均从累计不重复台账 join；任何 SHA、原始大小、记录数不一致均报错。GZip 设置 `mtime=0` 以保证内容幂等。

## 四、本轮工作流与代码

- 实际原始转换：GitHub Actions [#38513573917](https://github.com/969981/ACNH_Resources/actions/runs/38513573917) —— 16 个 `unpack (...)` 分片已逐一成功；最初 `reconcile` 子任务因将报告路径写死在 `collected/derived/...` 而失败，保留此错误记录。
- 独立累计审计：[回放 #38513944239](https://github.com/969981/ACNH_Resources/actions/runs/38513944239) —— 16 个源报告从第一轮的 GitHub Artifacts 重新下载，12 个媒体、4 个 Layout UI2D 与 8 份 BARS/AMTA 报告均核验通过；源/产物 SHA 审查无异常，并成功提交累计报告。
- 新选择器：`scripts/acnh303_round14_select.py`，先读取 R10 1224 个媒体、R8/R9/R10 104 个 BARS 基线，按原始 Git 文件路径哈希划分并排除全部旧测试源，只对新选中的路径执行 sparse-checkout。
- BARS 审计：`scripts/acnh303_round14_bars_reconcile.py`，要求 BARS 与 AMTA 使用完全一致的 16 个源路径及 SHA，不将 AMTA 生造为“PCM 转码成功”。
- 源全量缺口索引：`scripts/acnh303_round14_backlog_index.py`。
- 发布二次哈希验收：`scripts/acnh303_round14_release_verify.py`，重新下载 16 份真实输出数据并逐文件对照唯一输出来源与 SHA；之后方可打包成长期 Release。

本阶段版本 `3.0.3`，源素材默认路径为 `e10617820db06889e1638499478da0de_NCA/1/`。如果要继续选下一批，应以 **R14 累计 manifest 作为新基线**，不能重用 R10 源集合取前 N 个（否则会重复来源）。每次增量审计都必须拒绝重复路径、重复哈希声明、伪造格式和不存在的输出文件。

## 五、下一轮技术优先级

1. **Model**：未测原始数量压倒性最大，建议分组扫描是否真正包含 FMDL 几何还是 texture-only FRES，分别导出 GLB 与 BNTX PNG，不将纯纹理包计入网格完成数。
2. **Sound BWAV**：剩余 462 个源已有验证过的 PCM 转码流程，可继续分批并维持音频格式/帧数/SHA 严格核对。
3. **Layout**：剩余 648 个独立的 `.zs`，同步跑媒体 PNG 与 UI2D 结构叶子，`no_target_leaf` 不视作丢失。
4. **BARS/AMTA**：剩余 1576 容器，支持索引、真实内嵌 BWAV/WAV、AMTA v5 原始数据输出；loop/marker/native AMTA 字段仍属于单独研究。
5. **其他本体语义**：沿 Issue #33、#25 等既有证据链继续 Native 或真实样本验证，拒绝依据位置邻近或文本猜字段类型。

本轮全部修改仅在 `feat/acnh303-round14-unpack-backlog`，未合并 `3.0.3`。
