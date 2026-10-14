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
