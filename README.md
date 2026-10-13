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
