# ACNH 3.0.3 — Layout UI2D 与 BWAV 第五轮实际解包（2026-10-14）

## 一、41 个没有 BNTX 的 Layout：已恢复 FLYT／FLAN 原生数据

这 41 个源文件来自上一轮累计覆盖率的 `remaining.csv`，与原始 Git 树中的源文件 SHA-256 对齐，全部是真实 ACNH 3.0.3 RomFS 数据：

| 指标 | 实测 |
| --- | ---: |
| 原始 Layout 源文件 | **41** |
| BFLYT / FLYT v9 | **41** |
| BFLAN / FLAN v9 | **21** |
| BFLYT 中的界面节点（pane） | **254** |
| 不含其它未解类型的 Layout 源 | **30** |
| 含其它未解类型的 Layout 源 | **11** |
| 尚不支持的 FCPX 原生叶子 | **12** |
| FLYT / FLAN 结构解析失败 | **0** |

原始二进制检查：[Actions #38487652161](https://github.com/969981/ACNH_Resources/actions/runs/38487652161)。
实际 JSON 解析与回归测试：[Actions #38488168798](https://github.com/969981/ACNH_Resources/actions/runs/38488168798)。

所有源为小端 NintendoWare UI2D v`0x09000000`，FLYT 有 `lyt1`、`pan1`、`prt1`、`txt1`、`grp1`、`usd1` 等真实区块；FLAN 存在 `pat1` 和 `pai1`。所有 41 FLYT 和 21 FLAN 的文件长度、头部区块数、区块偏移边界核对一致。

新增脚本：
- `scripts/acnh303_ui2d_parser.py`：严格边界检查 FLYT 头/区块，输出布局尺寸、可读节点名称、节点坐标旋转缩放、父子关系、资源列表；对 FLAN 输出名称、分组、帧范围、目标节点、支持的 constant／step／hermite 关键帧。
- `scripts/acnh303_ui2d_batch.py`：递归从 Zstd→SARC→内部 ARC/SARC 提取 41 源，逐个导出 JSON；源文件及叶子 SHA-256、输出 SHA-256 存入 `_ui2d_source_manifest.json`。
- `scripts/test_acnh303_ui2d_parser.py`：独立验证 pane 关系、动画名称、越界输入处理。
- 所有 JSON 实际保存至 `Unpack_UI2D/e10617820db06889e1638499478da0de_NCA/1/Layout/<原文件名>.zs.ui2d/`。
- 41 源完整结构/异常清单：[`derived/3.0.3/ui2d_41/summary.json`](../derived/3.0.3/ui2d_41/summary.json) 和 [真实原生区块扫描](../derived/3.0.3/ui2d_probe/real_41.json)。

例如 `Bell.bflyt` 恢复出 **1920×1080 布局**、`RootPane` 等父子 pane 节点；`Bell_In.bflan` 已导出 `FLPA`、`FLVC` 动画标签和采样帧。FLAN `pat1` 中疑似负帧起点现同时保留 unsigned 原始值和 signed 值（例如 65528 与 -8），避免凭固定无符号解释损坏时间轴。

**需要明确的格式边界**：这是真实的 **UI2D 基本布局/节点树与动画轨道结构 JSON**，不是已能等价渲染原版界面。材质特殊状态、`usd1`、`cnt1`、部件内部复杂字段尚未完整还原；12 个 `FCPX` 并非 BFLYT/FLAN，暂不构造虚假语义。对 FCPX 的进一步分析独立跟踪 [Issue #25](https://github.com/969981/ACNH_Resources/issues/25)。这 41 个 Layout 已在此前的 552 个源文件中，不能重复添加到已测总数或当作 41 个新的 PNG 文件。

格式参考：[BFLYT 结构](https://epd.zeldamods.org/wiki/Bflyt) · [BFLAN 动画](https://epd.zeldamods.org/wiki/Bflan)。

## 二、BWAV：再处理 120 个未测文件并经 PCM 验收

[GitHub Actions #38487975868](https://github.com/969981/ACNH_Resources/actions/runs/38487975868) 按 8 个稳定的 Git 树哈希分片续跑，以 `skip-count` 排除前轮已处理的 92 个 BWAV 源。每片选 15 个新的原始 `.bwav` 文件，8 片共 **120 个没有重复的源文件**。均由固定 `vgmstream r2117` 转码成 PCM WAV，并通过采样率、声道、有效帧数、文件哈希测试。

| 指标 | 之前 | 本轮完成后 |
| --- | ---: | ---: |
| 实际测过 BWAV | 92 | **212** |
| 实际 WAV 文件 | 92 | **212** |
| 尚未测试 BWAV | 1,054 | **934** |
| 累计已测媒体来源（Model+Layout+BWAV） | 552 | **672** |
| 累计有效 GLB/PNG/WAV 文件 | 1,660 | **1,780** |

更新后的总分类：**214 个 GLB + 1,354 个 PNG + 212 个 WAV = 1,780 个已验证媒体输出文件**，累计有效媒体文件的未压缩输出字节 **1,983,963,504 B（约 1.98 GB）**。

这仅为 212 个已测 BWAV 100% 成功，并不能说明剩余 934 个也必然成功。原始 Sound 的 BARS 等其它格式亦未纳入 1,146 BWAV 候选分母。

新增音频产物由 8 个源路径镜像 tar.gz 分卷发布，包含 `SHA256SUMS.txt`、每个源和 PCM WAV 的 SHA-256、累计 `media_index.csv` 和失败清单：
[ACNH 3.0.3 — BWAV 120 个新 WAV Release](https://github.com/969981/ACNH_Resources/releases/tag/acnh303-bwav-120-next-20261014)。

全部累计源信息和统计已经保存在 GitHub 正式工作树：
- [`media_bwav120_cumulative/coverage.json`](../derived/3.0.3/media_bwav120_cumulative/coverage.json)
- [`media_bwav120_cumulative/source_manifest.jsonl.gz`](../derived/3.0.3/media_bwav120_cumulative/source_manifest.jsonl.gz)
- [`media_bwav120_cumulative/media_index.csv`](../derived/3.0.3/media_bwav120_cumulative/media_index.csv)

## 三、实际仍未完成的工作

- **BFLYT**：针对 `prt1` 内部部件、`mat1` 复杂材质、`usd1`、`cnt1` 系统字段，需要做可追溯二进制解析；否则即使已有 254 pane，也不代表完成界面渲染。
- **BFLAN**：已经恢复支持的关键帧，但少见 target/curve 类型仍可能仅记录边界/偏移，动画的运行时联动与视觉效果需要与 ELF 或实机对照。
- **FCPX**：12 个尚未解释语义的叶子（两种常见长度，704 与 892 字节），按 [Issue #25](https://github.com/969981/ACNH_Resources/issues/25) 单独追踪。
- **BWAV**：仍有 934 个未测文件，后续继续按源路径 hash + skip-count 分片处理，验证并发布，而非在 Git 历史里累积数 GB WAV。
- 101,000+ 个源文件当前 L0–L2 的结构覆盖不代表所有文件都取得 GLB/PNG/WAV/完整语义 JSON，不能混用覆盖率概念。
