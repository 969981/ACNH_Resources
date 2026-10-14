# Animal Crossing: New Horizons 3.0.3 — Resource Unpack

Read-only unpack and indexed conversion of the 3.0.3 RomFS, following the source-tree mirror approach of 969981/PokeHome_Resources while using ACNH-specific parsers.

The source NCA directory is unchanged. The project adds scripts/ for tooling and tests, plus Unpack/ for verified decoded outputs.

## Layout

~~~text
e10617820db06889e1638499478da0de_NCA/
  0/                      # ExeFS; out of scope
  1/                      # Original RomFS, strictly read-only
    Bcsv/
    Message/
    Layout/
    Model/
    Stage/
    EventFlow/
    ...
scripts/
  acnh_formats.py         # BCSV, BYML, Yaz0, Zstandard, SARC, MSBT
  unpack_acnh.py          # CLI, manifest, integrity verification
  test_acnh_unpack.py     # Real 3.0.3 bytes as base64 regression fixtures
  requirements.txt
Unpack/
  e10617820db06889e1638499478da0de_NCA/1/
    Bcsv/                 # Original paths; verified CSV + JSON where supported
    Stage/
    Message/
    ...
  _meta/                  # Manifests, summary, errors and unsupported
~~~

## Start

Windows PowerShell, from the repository root:

~~~powershell
py -3 -m pip install -r scripts/requirements.txt
py -3 -m unittest discover -s scripts -p "test_acnh_unpack.py" -v

# No disk writes: inspect mirror scope
py -3 scripts/unpack_acnh.py --root . --out Unpack --dry-run

# First process structured datasets
py -3 scripts/unpack_acnh.py --root . --out Unpack --kind tables --resume
py -3 scripts/unpack_acnh.py --root . --out Unpack --kind byml --resume

# Actual full RomFS pass, including safe SARC member extraction
py -3 scripts/unpack_acnh.py --root . --out Unpack --all --resume --extract-members

# Check original and output SHA-256
py -3 scripts/unpack_acnh.py --root . --out Unpack --verify --strict
~~~

Select a file without scanning all source content:

~~~powershell
py -3 scripts/unpack_acnh.py --root . --out Unpack --file "Stage/commonPlayerHouse.byml"
~~~

Use --max-source-mb for the per-source parsing limit (default 256). Oversized source files remain indexed but unsupported. Zstandard is needed for .zs assets. Do not use --extract-members on an untrusted archive with unbounded expansion; built-in limits still apply.

## Current decode scope

| Resource | Output | Accuracy |
| --- | --- | --- |
| Bcsv/*.bcsv | .csv data + .json hashed column metadata | Raw storage; CRC32 column labels, no inferred business names |
| Stage/*.byml | .json | Typed BYML values |
| *.msbt | .json | Section/text/labels when validated |
| *.sarc.zs, *.szs, *.sarc | decompressed .sarc + index .json; members as requested | Actual Zstd/Yaz0 and SARC extraction |
| *.Nin_NX_NVN.zs | decompressed .bfres/.bntx/... when magic identified, metadata .json | Container extraction, often partial |
| *.bfevfl, *.msbp | metadata .json | Structure-only, NOT a script/text decompiler |
| graphics, models, shaders, audio, unknown | indexed or raw extraction where supported | No invented PNG/OBJ/WAV |

Output example: Bcsv/AITag.bcsv becomes Unpack/<NCA>/1/Bcsv/AITag.csv and AITag.json. Message/Dialog_CNzh.sarc.zs becomes Dialog_CNzh.sarc plus Dialog_CNzh.json; if --extract-members is set, archive contents are kept under Message/Dialog_CNzh/_members/ in original member layout.

## Verification and publishing

Unpack/_meta/manifest.json and manifest.csv track SHA-256, statuses and each derivative file. source_manifest.csv reflects the selection in the last run. summary.json reports the last run scope; a partial conversion cannot claim full repository coverage. Strict verification fails on missing/modified files and recorded parser failures but not legitimately unsupported formats.

## Published real output (2026-10-13)

The feature branch currently includes 511 genuinely processed original source files and 1,153 mirrored outputs (about 18.4 MB). All 511 manifest records are converted, and the GitHub Actions batch pipeline verified the original and resulting SHA-256 hashes.

- 234 BCSV source tables: 234 CSV files + 234 schema/column-hash JSON files.
- 275 typed BYML files from AnimationInfo and Stage: 275 JSON files.
- Chinese Dialog and LayoutMsg archives: 2 actual Zstandard-decompressed SARCs, JSON member indexes, and 203 raw MSBT member files with 203 corresponding textual JSON parses.

Example Chinese dialogue:
- Unpack/<NCA>/1/Message/Dialog_CNzh/_members/DIALOG_Msg.json

These are an **initial verified subset, not a full RomFS conversion**. The 511-record cumulative manifest is in Unpack/_meta/manifest.json; summary.json and source_manifest.csv describe only the *most recent selection*, not a full-file inventory. Large Model/Layout/Shader/Sound assets remain for future local batch processing. The repository is multi-GB; do not indiscriminately commit duplicated decompressed meshes/audio without an LFS/release storage policy.

For parser internals, known limitations and development guidance see scripts/README.md and AGENTS.md.

## 全资源解包工程路线图（2026-10-13）

- [总目标、分层验收与阶段依赖](docs/UNPACK_MASTER_PLAN.md)
- [103,400 文件、10.42 GB 全量基线](docs/UNPACK_BASELINE.md)
- [15 项任务清单 U00–U14](docs/UNPACK_TASKS.md)
- [真实格式支持矩阵与工具候选](docs/UNPACK_FORMAT_MATRIX.md)
- [最新可核验完成进度](docs/UNPACK_PROGRESS.md)
- [BDLI 多语言对话逻辑 U14 #18](https://github.com/969981/ACNH_Resources/issues/18)
- [GitHub Issues 总看板 #17](https://github.com/969981/ACNH_Resources/issues/17)

完整解包分为四层：L0 源文件全集、L1 压缩解压、L2 递归归档成员提取、L3 可验证的 JSON/CSV/PNG/GLB/WAV 等内容转换。只有真正解码和验收通过才能标记为 `converted`。未支持的专有 Shader/Effect 等仍需保留原始字节和详细缺口，不能混同于已完成。Actions 中的新 [source inventory](.github/workflows/acnh303-inventory.yml) 在无需拉取大资源 blob 的前提下建立全量分母。

## 已实际执行的全资源覆盖（2026-10-13）

[完整执行报告](docs/UNPACK_EXECUTION_2026-10-13.md) · [全量覆盖状态 JSON](derived/3.0.3/effective/coverage.json) · [103,400 条 SHA-256 manifest](derived/3.0.3/effective/source_run_manifest.jsonl.gz)

36 个 GitHub Actions 分片对原始 RomFS 的 **103,400/103,400** 个文件做了实际读取、SHA-256、压缩/归档检测与现有解析器处理。针对首轮出现的 1,182 个 BDLI、55 个 EventFlow、5 个 BARS 解析失败已经独立复测并按原始源 SHA-256 覆盖修复，最新有效状态为 **2,105 converted + 101,295 partial + 0 failed**，没有缺失、重复或额外的源路径。

- `Unpack/<NCA>/1/EventFlow/` 包含 877 个真实 EventFlow 图 JSON，Actor/入口/跳转/参数及 ACNH 特有字段均可查询；
- BDLI 的 36,708 个文件已解压并恢复 LBLI 数据块索引，无损原始 BDLI 派生文件保存在临时 Actions 工件；
- 大型 Model/Layout/Sound 的压缩容器和原始资源关联已索引，仍需 **BFRES→GLB、BNTX→PNG、BWAV→WAV 以及完整特效/着色器内容解码**。

此处的 100% 指 **L0 全源覆盖与当前 L1/L2 解析器没有报告失败**，绝不是全媒体 L3 转换完成。大型工件目前在 Actions 中且会过期；正式持久发布属于 U13。


## ACNH 3.0.3 — 真实媒体资源转换（2026-10-13）

新增 **BFRES → GLB、BNTX → PNG、BWAV → WAV** 的 Python 编排器、格式校验、GitHub Actions 及可复现分卷发布。不同于压缩层与容器索引，本阶段实际输出可供建模软件、图片软件和音频播放器使用的常规格式。

- [完整转换说明、验证指标及运行命令](docs/UNPACK_MEDIA_L3.md)
- [源目录镜像中的已验证 GLB/PNG/WAV 示例](Unpack/e10617820db06889e1638499478da0de_NCA/1/)
- [六个数据分片验证记录（36 个源、122 个实际媒体产物）](derived/3.0.3/media_calibration_summary/latest.json)
- [长期 Release 分卷、SHA256SUMS 校验文件](https://github.com/969981/ACNH_Resources/releases/tag/acnh303-media-l3-calibration-20261013)

**范围限制**：这是三条真实成功的格式转换路线和小规模批量测试，不是全部 Model、Layout、Sound 源文件转码完成。特别是 103,400 个原始 RomFS 文件的 L0–L2 总覆盖数字，与真正的 L3 模型/纹理/音频解码覆盖率必须分开统计。

## L3 媒体扩容实测（2026-10-13）

[完整扩容报告](docs/UNPACK_MEDIA_L3_SCALEOUT.md) · [持续覆盖率 JSON](derived/3.0.3/media_scaleout_audit/coverage.json) · [Source SHA-256 及失败清单](derived/3.0.3/media_scaleout_audit/source_manifest.jsonl.gz) · [12 分片长期 Release](https://github.com/969981/ACNH_Resources/releases/tag/acnh303-media-l3-scaleout-20261013)

新增 216 个真实 Model/Layout/BWAV 源文件的 12 分片转换，连同之前 36 源累计实测 252 个源，得到 82 GLB、641 PNG、52 WAV，合计 **775 个已验证媒体文件**（770.4 MB）。Model 26 个 BottomsTex 原生 decoder 失败，Layout 28 个原包没有 BNTX，均在问题清单记录；不能当成全库 L3 完成。后续可用 [按哈希分片和 skip_count 续跑的 Actions](.github/workflows/acnh303-media-l3-on-demand.yml)，并通过单独审计脚本持续统计每格式已测成功率、未测试数和错误类型。


## BFRES / BottomsTex 实证修复（2026-10-13）

已定位 26 个 `BottomsTex...` FRES 无法通过 `wmdlt` 输出 GLB 的真正原因：**全部 FRES+0x28 模型指针为零，FMDL/FSHP/FVTX 缺失，而 FRES+0x1000 均含有效独立 BNTX**。因此改用严格结构判断，提取内嵌 BNTX 并实际导出 104 张已完成 PNG CRC、像素加载、SHA-256 的纹理，26/26 原始失败项都有真实媒体产物，**不是伪造 GLB**。

- [完整二进制对照与解决方法](docs/BOTTOMSTEX_FRES_TEXTURE_ONLY_20261013.md)
- [经 SHA-256 对齐的当前媒体累计报告](derived/3.0.3/media_bottomstex_corrected/coverage.json)
- [26 个 FRES 原始 header / 结构证据](derived/3.0.3/bottomstex_forensics/fres_preflight.json)
- [26 源 104 PNG 永久 Release](https://github.com/969981/ACNH_Resources/releases/tag/acnh303-bottomstex-texture-only-26-20261013)

本次纠正后，在已经实测的 252 个媒体源里累计 **82 GLB + 745 PNG + 52 WAV = 879 个有效媒体文件**；Model 108 源有媒体输出，其中只有 82 个属于真实 GLB。其余大部分源仍未做 L3 内容解码。


## L3 第四轮扩容：新增 300 源、781 个媒体输出（2026-10-14）

[完整实际转换报告](docs/UNPACK_MEDIA_L3_ITERATION4.md) · [累计 552 源覆盖率](derived/3.0.3/media_iteration4_cumulative/coverage.json) · [1660 个媒体文件 SHA-256](derived/3.0.3/media_iteration4_cumulative/media_index.csv) · [12 分卷可长期下载的 Release](https://github.com/969981/ACNH_Resources/releases/tag/acnh303-l3-iteration4-20261014)

本轮真实执行 Model 200、Layout 60、BWAV 40 共 **300 个新源文件**，新增 **132 GLB、609 PNG、40 WAV**（781 个媒体文件）。此前的源文件不重复；累计 552 个实测源、**214 GLB + 1354 PNG + 92 WAV = 1660 个有效媒体文件（1.24 GB）**，均有源／产物哈希和各格式验证。只在已测样本内计算成功率；大量未测 Model、Layout、BWAV 与 Shader、Effect 等其他资源仍需要继续解包。

## UI2D / BWAV 第五轮（2026-10-14）

已完成 41 个无独立 BNTX Layout 的 BFLYT 节点树 JSON、21 个 BFLAN 动画 JSON，累计 254 个真实 pane。保留 12 个尚未解码的 FCPX 原生叶子（Issue #25），不宣称界面运行时渲染已还原。

另按 8 个独立分片新增 120 个实测 BWAV→PCM WAV，累计已测 212 个 BWAV，剩余 934；媒体实测来源累计 672，输出 214 GLB + 1354 PNG + 212 WAV = 1780 个文件。

[第五轮技术报告](docs/UNPACK_UI2D_BWAV_ROUND5.md) · [41 源 UI2D JSON](Unpack_UI2D/e10617820db06889e1638499478da0de_NCA/1/Layout/) · [BWAV 分卷 Release](https://github.com/969981/ACNH_Resources/releases/tag/acnh303-bwav-120-next-20261014) · [累计 SHA 覆盖](derived/3.0.3/media_bwav120_cumulative/coverage.json)


## 2026-10-14 第六轮：FCPX 字体索引、UI2D 深化、BWAV 扩容

已对原先 12 个未支持的 `FCPX` 字体配置叶子实际验证：11 份相同的 704B、1 份 892B，共两种二进制；分别恢复 9/11 个字体资源名称，输出带 SHA-256 的 `*.fcpx.fontrefs.json`，不声称已解析字体字形或替换规则。

同期修正了 BFLYT `fnl1` 字符串偏移，恢复材料／部件／控制区块元数据：41 个实际 UI2D 布局共 254 pane、22 个材料条目、57 个部件条目、22 个控制区块；6/6 字体引用与 29/29 动画目标名称关联成功。21 个 BFLAN 的 50 条动画轨道生成了 956 个**非原生数学采样**数值，不能当作原版游戏 UI 的已验证播放效果。

此外再解码 120 个新 BWAV，累计唯一媒体源 792，**214 GLB + 1354 PNG + 332 WAV = 1900 个真实媒体文件**，还有 814 个 BWAV 尚未测试。

[第六轮实证报告](docs/UNPACK_FCPX_UI2D_BWAV_ROUND6.md) · [UI2D 静态引用表](derived/3.0.3/ui2d_crossref_v6/crossrefs.json) · [累计媒体哈希审计](derived/3.0.3/media_bwav240_cumulative/coverage.json) · [120 个新增 WAV Release](https://github.com/969981/ACNH_Resources/releases/tag/acnh303-bwav-240-total-20261014)


## 第七轮：FCPX 原生字体记录、BFLYT 材料字段及 BFLAN 运行时证据门槛（2026-10-14）

继续研究真正的资源语义，而非只增加媒体数量。已证实两种 FCPX 字体配置共享 **0x40 起始、0x28 字节步长、record+0x04 字符串指针（实际名称偏移=指针值+0x18）**的原生记录布局，20/20 条真实字体记录验证通过；保留 10 个原始 u32 字段，尚**不能确定 fallback 优先级**。

BFLYT 6 个 mat1 区块的 22 个材料均有 **44 字节记录**，末尾字段模式 `0x08040200` 在 22/22 中一致，尾部颜色候选有 4 种取值；GPU 渲染结果未经原生验证。BFLAN 新增运行时比较器，实际没有原生 trace 时必须输出 `NOT_TESTED`，不再将 956 个数学采样误判为一致。

新追加解码 120 个 BWAV，累计媒体源 **912**，媒体文件 **2020（214 GLB、1354 PNG、452 WAV）**；剩余 **694** 个 BWAV 未测。第七轮 120 WAV 与哈希独立发布。

[第七轮原生技术报告](docs/UNPACK_NATIVE_UI2D_BWAV_ROUND7.md) · [20 字体记录矩阵](derived/3.0.3/ui2d_native_v7/font_reference_record_matrix.csv) · [22 材料字段矩阵](derived/3.0.3/ui2d_native_v7/material_native_words.csv) · [BFLAN 原生验证状态](derived/3.0.3/ui2d_runtime_validation_v7/report.json) · [新 120 WAV Release](https://github.com/969981/ACNH_Resources/releases/tag/acnh303-bwav-360-total-20261014)


## 第八轮：新 Layout / Sound 实解码、完整技术指南与 BARS 突破（2026-10-14）

已新增并提交两份长期文档：[**ACNH 3.0.3 原生资源技术规范**](docs/ACNH303_NATIVE_UNPACK_TECHNICAL_REFERENCE.md) 和 [**Windows 11／WSL2 详细解包实操指南**](docs/ACNH303_UNPACK_FIELD_GUIDE.md)，含源文件、原生头/偏移、逐格式转换、版本固定、SHA256SUMS、失败处理、Git sparse 分片和复核手册。

本轮真实处理 200 个以前未测的原始文件：80 个 Layout 产出 **520 PNG、80 BFLYT JSON、333 BFLAN JSON、73 FCPX JSON**（额外恢复 1,642 Pane、896 材料记录），120 个独立 BWAV 产出 120 PCM WAV。核心媒体累计 **1,112 个唯一源、2,660 个真实输出（214 GLB / 1,874 PNG / 572 WAV）**，未测 Layout 728、独立 BWAV 574。[累计媒体审计](derived/3.0.3/media_round8_cumulative/coverage.json)、[80 源 UI2D 清单](derived/3.0.3/layout_semantic_round8_cumulative/coverage.json)、[640 个新媒体和 486 份 JSON 的 Release](https://github.com/969981/ACNH_Resources/releases/tag/acnh303-l3-layout-ui2d-bwav-round8-20261014)。

另新增**独立 BARS 音频容器解码器**，对 8 个真实 BARS 源按原生 AMTA+BWAV 偏移验证，**7 个源的 42 个内嵌 BWAV 实际生成了有效 PCM WAV**，1 个解码失败及 1 个原文件尾部多 1 字节异常均保留证据。[BARS 格式/转换报告](derived/3.0.3/bars_audio_round8/report.json)、[42 WAV 永久 Release](https://github.com/969981/ACNH_Resources/releases/tag/acnh303-bars-first8-42wav-20261014)。这 42 个新输出单独统计，未并入现有以独立 BWAV 文件为分母的核心审计。

未测资源优先目录：`BDLI` 36,708、`Sound/*.bars` 1,696、`EventFlow/*.bfevfl` 875、其它大量 Model 和 Layout。[原始文件优先级队列](derived/3.0.3/unmeasured_queue_round8/queue.json) 按原始 103,400 文件名和已测媒体源区分；不声称以上资源在 L0–L2 均未解包。[本轮完整实证报告](docs/ACNH303_UNPACK_ROUND8_VERIFIED_REPORT.md)。


## 第九轮：BARS/AMTA v5 与 BDLI-LBLI 原始区段继续解包（2026-10-14）

[完整原生解包技术与 Windows/WSL2 指南](docs/ACNH303_ROUND9_BARS_AMTA_BDLI_GUIDE.md) · [第九轮累计 SHA 审计](derived/3.0.3/round9_cumulative/coverage.json) · [真实 Actions 验证 #38496462710](https://github.com/969981/ACNH_Resources/actions/runs/38496462710)。

在前八轮基础上再次真正处理 **32 个以前未测的 BARS**，生成 **186 个可验证 PCM WAV**、**208 个按原始 AMTA 版本 v5（0x0500）无损提取的元数据二进制文件**。另对 **32 个 BDLI.zs 原始文件**按照真实 LBLI 指针和边界新导出 **4,210 个无损二进制区段**。每条有效输出均核验原始来源路径、SHA-256 和成员字节，最终分片审计通过。

累计 BARS 是 **40 个实际测试容器、228 个 PCM WAV**；它与原来的核心 L3 **2660（214 GLB／1874 PNG／572 独立 BWAV→WAV）**保持不同分母。BDLI 的 36708 源以前已被结构性解析，但新导出的 LBLI 区段不是自动理解成文本、语言条目或者完整本地化数据库。**ACNH AMTA v5 不能套用公开 v1/v3/v4 的 DATA/MARK/STRG 区段布局**；现在仅能确定并无损导出原始成员及 0x0C..0x30 原始 u32，待 Native 证据。

## 第十轮已发布：剩余 BARS/Layout/BWAV 继续实解包（2026-10-14）

本轮通过完整来源排重、24 个成功的 Native 转换分片及独立累计 SHA 审计，共对 **176 个未测原始源**继续解包：**64 BARS（834 有效 PCM WAV + 834 无损 AMTA v5）**、**48 Layout（195 PNG + 235 结构 JSON）**、**64 独立 BWAV（64 有效 PCM WAV）**。

核心 L3 媒体累计 **1,224 个已测试源，2,919 个有效文件（214 GLB + 2,069 PNG + 636 WAV）**，与 BARS 独立累计 **104 容器 / 1,062 有效 PCM WAV** 分开核算。仍待媒体 L3 测试：**1,592 BARS、680 Layout、510 独立 BWAV**。

对历史 **208 条 AMTA v5 原始元数据**建立 10 字段的 native opaque byte/offset 证据表；对 **4,210 LBLI 原始区段**统计 3,799 个不同的原始 identifier；另对 **12 个 BFEVFL 真游戏源**恢复 115 事件节点、24 个 actor/action 符号、15 个 actor/query 符号和 8 个 SubFlow 引用组合。静态符号名称不能替代 ELF 运行时消费者证据，字段语义仍保持开放。

- [第十轮详尽技术研究与 WSL2 操作指南](docs/ACNH303_ROUND10_NATIVE_UNPACK_TECHNICAL_GUIDE.md)
- [长期发布 Release：24 个数据分卷 + 6 审计附件](https://github.com/969981/ACNH_Resources/releases/tag/acnh303-r10-bars-layout-bwav-native-20261014)
- [累积媒体审计](derived/3.0.3/media_round10_cumulative/coverage.json) · [BARS/AMTA 审计](derived/3.0.3/bars_round10_cumulative/coverage.json) · [UI2D 审计](derived/3.0.3/layout_semantic_round10_cumulative/coverage.json)
- [AMTA v5 原始字段/LBLI 标识符矩阵](derived/3.0.3/r10_native_fields/matrix.json) · [BFEVFL 原生静态调用索引](derived/3.0.3/evfl_round10_cumulative/coverage.json)

以上不代表 103,400 个资源源文件全部完成游戏语义还原；媒体转换、原生结构、运行时验证分别记录。

## 第十一轮：真实 ELF Native 证据（2026-10-14）

本轮直接读取 ExeFS 的 79,000,340 字节 AArch64 ELF（SHA256 83970061788f10049e2e60d687571b8dc87e5014521889ac4611a7f6b9c6e180），并用两个独立成功的 GitHub Actions 工作流抽取代码交叉引用和真实 Capstone 指令。**首次直接从游戏代码证明 BARS 的 Magic 比较、+0x0C count、+0x10+4×count 目录计算、+0x08 BOM 和 +0x0A version。** Native 入口 `0x3ACA350`，配对版本检查到 `0x3ACA39C`。同时证实 `BDLI/%s/%s/%s.bdli` 资源路径模板从 `0x1B0A014` 传入调用点，以及 EventFlowAction/Query 的名称地址和另一机器字成对储存候选。**并没有证明 AMTA v5 播放语义、LBLI 本地化字段消费和游戏内 Action/Query 分派**。

- [第十一轮完整 ELF Native 验证与复现指南](docs/ACNH303_ROUND11_ELF_NATIVE_CONSUMERS_GUIDE.md)
- [真实字符串/code address-forming XREF](derived/3.0.3/round11_elf_native_xref/report.json)
- [真实 ARM64 反汇编和 FourCC 对比](derived/3.0.3/round11_native_code_windows/analysis.json)
- [Issue #33 未完成 Native 研究](https://github.com/969981/ACNH_Resources/issues/33)

Code evidence is not runtime behavior, and ELF virtual offsets are not a fixed process runtime base. 
