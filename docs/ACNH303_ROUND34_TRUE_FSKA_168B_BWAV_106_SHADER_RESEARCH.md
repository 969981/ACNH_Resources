# ACNH 3.0.3 R34 — 406 条真实 FSKA 动画、168B BWAV 与 106 个 BNSH 原始验证

日期：2026-10-15。独立研究分支 `feat/acnh303-round34-fska-bwav-bnsh106`。原始游戏文件不做任何改写，静态动画曲线验证不得等同于实机骨架绑定、GPU 绘制或成功导出包含实际网格的 GLB。

## 1. R33 历史 `failed` 真正转入专用 FSKA 动画解析

原始文件：`Model/CharactorAnimation20000.Nin_NX_NVN.zs`，2418203 字节，原始 SHA-256 `97c70c9355a66f7b4623956357d824f307ae0855411acc584bfc9af1ca73111a`，只读解压后 `output.bfres` 真正字节长度 **6528992**。

R33 时只能确认 BFRES 字节含 **406 次 `FSKA` magic**，但并不能断定它对应 406 条动画。本轮新增正式 C# 解析器 `tools/r34-animation-probe/{ResAnimProbe.csproj,Program.cs}`，使用成熟的 [BfresLibrary 1.6.0](https://www.nuget.org/packages/BfresLibrary/1.6.0) 对原始 Switch BFRES **真正反序列化** `ResFile.SkeletalAnims`、`BoneAnims`、`Curves`、每一帧编号、每帧 curve keys（float[,]），并检查数量、有限浮点与维度一致。原始 FRES 的手动指针检查另见 `scripts/acnh303_round34_fska_source.py`；不会凭扫描魔数就生成动画记录。

[真正 FSKA 与 BWAV 原始校验 Action #38674383663](https://github.com/969981/ACNH_Resources/actions/runs/38674383663)，以及[对全部曲线的独立二次求和 Action #38674796604](https://github.com/969981/ACNH_Resources/actions/runs/38674796604) 均为 success。

| 实际解析结构（不是魔数扫描估算） | 数量 |
| --- | ---: |
| **SkeletalAnim 原生对象** | **406** |
| 原生 BoneAnim 引用 | **23,142** |
| 不同骨骼名字 | **57** |
| **原生 AnimCurve 曲线对象** | **24,281** |
| 实际 Frame/Key 对应位置数 | **393,029** |
| CurveType == Cubic | **24,281** |
| 循环 Loop 动画 | **130** |
| baked 动画 | **0** |
| 动画帧数：最小／中位／最大 | **1 / 32 / 640** |

本轮确认真实动画名字，包括 `Act_ArrangeRemoveFtrHigh`、`Act_BookOpen_Player`、`Act_BookRead_Player`；每个包含真实 57 骨骼名引用，不是虚构数据。结构化原始证据 `derived/3.0.3/r34_fska/parsed_animation_curves.json` 包含每条动画的 frame_count、loop、每个 BoneAnim 的名字与曲线、每条曲线每一个 frame、Key 值；紧凑清单 `derived/3.0.3/r34_fska/animation_summary.json` 提供动画名字、实际数量和分布。原始 BFRES 本身没有提交回源码库；只有源 HASH、分析派生输出和可复现脚本。

**已解决：** 对这个“历史 failed 的源文件”，真正 FSKA 反序列化及曲线关键帧数据提取已经成功；**尚未解决**：本动画源不含可直接生成 GLB 的网格，不能从无模型的 `ResFile` 强制输出 glTF Mesh；要实现可播放动画，仍须取得具体附带 FSKL/FMDL 的模型、解析同名骨骼索引的绑定关系、导出 glTF animation channels 与 sampler，并与游戏时间/曲线插值求值对照。旧 L3 “导出静态几何失败”记录按原定义保留，不可掩盖；同时新增原生动画解包成功状态。

### 参考结构来源

BfresLibrary 1.6.0 使用自身的 Switch BFRES reader；与 [Nintendo Switch BFRES 格式中 FSKA animation array +0x58 / count +0xE2](https://epd.zeldamods.org/wiki/Bfres) 的原始静态结构证据独立交叉校验。Wii U FSKA header offset 结构**不适用于直接照抄到 Switch 指针布局**，避免将 32 位 Wii U 偏移混到 Switch 64 位 FRES。

## 2. `Env_TourCounterDemo.bars` 中 168B 无法 PCM 解码的原生 BWAV

R33 vgmstream 真实 stderr：`failed opening .../asset_0000.bwav`，exit=1。R34 从原始 296B BARS 文件（SHA `50195465110f6de17ebdf6942b9ca940e49efe0482082fc06bbefc58b285ac04`）按真正 AMTA/BARS 子对象偏移 128 提取 **168B** BWAV。真正成员 SHA `7e1712e42cbbe183f5cf3c89cc4455f1dd327c52f354d8ff1f290f817076c0fa`，无修改。

按 Nintendo aal::atom [BWAV v1 格式](https://epd.zeldamods.org/wiki/Bwav) 原生解析的 Header 和两个 channel-info：

| 真正字段 | 声道 0 | 声道 1 |
| --- | ---: | ---: |
| Encoding `1`（DSP-ADPCM） | **1** | **1** |
| Pan | Left (0) | Right (1) |
| Sample Rate | **48,000 Hz** | **48,000 Hz** |
| 声明的 non-prefetch sample count | **3,497,385** | **3,497,385** |
| file sample count | **0** | **0** |
| Sample Data Offset | **192** | **192** |
| Non-prefetch Data Offset | 192 | **1,998,720** |
| loop point count | 1 | 1 |

Native BOM `0xFEFF`、版本 1、channel count 2、File flags 0。整个 168 字节刚好是 0x10 header + 两组 0x4C channel-info 的大小，**没有任何有效 sample payload**。两个 sample pointer 192 都指向文件末尾以外。这是 **描述/引用轨道或依赖别处数据的原生 BWAV 头部**，不是可独立 PCM 转换的完整声音文件；即使 header 中 sample count 很大也不能据此合成声音。是否为外部引用、分流声音或专用运行时预加载格式，仍需要回溯音频装载者并和真正完整 BWAV 对照确认。

源码 `scripts/acnh303_round34_bwav_native.py`，机器证据 `derived/3.0.3/r34_bwav/failed_bwav_native.json`。这次修正的是 **异常的真实性质**，不是强行修复产生不存在的 WAV。

## 3. R34 106 个真实 BNSH Native 源码闭环

从 R27-R33 **7 个实际 GitHub Release 中 SHA 核验**原始 Layout 数据分卷，其中 R33 新出的 **42 个无损 BNSH** 已全部加入 R33 之前 **64 个**样本。GitHub [R34 106 BNSH 原始 Native 成功 Actions #38674553820](https://github.com/969981/ACNH_Resources/actions/runs/38674553820)。

| 真正已验证的文件/代码链 | R33 | R34 |
| --- | ---: | ---: |
| BNSH 原始成员 | 64 | **106** |
| 不同 BNSH SHA | 36 | **47** |
| Shader GRSC Variation / Program | 324 | **531** |
| Vertex + Fragment 代码 SHA 链接 | 648 | **1,062** |
| NV Magic Pool 成员候选 | 455 | **760** |
| 不同 Vertex Code SHA | 20 | **20** |
| 不同 Fragment Code SHA | 34 | **42** |
| 声明代码长度与下一个 NV magic 一致 | 570 | **934** |
| 原始零字节间隔 | 78 | **128** |
| 上述全零间隔合计 | 259,328B | **407,808B** |

机器报告 `derived/3.0.3/r34_native_shader_pool/` 的 `pool_crossrefs.json`、`code_members.json`、`stage_reflection_links.json`、`code_gap_audit.json`，逐条保留原始 source SHA、Program offset、实际 VS/FS code byte SHA、Reflection 字典名字及差异区真实字节。

**不能据此宣布 GPU ISA 已反汇编、Material→Variation 实机对象关联已闭环或 Descriptor/GPU Binding Slot 已识别**。仍需原始游戏渲染回调的只读实例证据。

## 4. R34 的 L3 来源选择和防重复边界

R33 完成时真正未测试的来源为 Model **58,018**、Layout **148**、BARS **1,088**、独立 BWAV **0**。R34 新增 `scripts/acnh303_round34_select.py` 和 `.github/workflows/acnh303-round34-unpack.yml`，严格排除 R19 核心媒体/BARS 的历史集合、R27–R33 所有已测源 SHA；12 个分片对 **Model 4×20 = 80、Layout 4×37 = 148（覆盖全部剩余）、BARS 4×40 = 160** 原始源分别执行真实媒体、UI2D、BARS 与无损 BNSH 转换，每个输出必须重新哈希、验证媒体。总计划 388 新源，不应在 Actions 完成之前称 388 已成功转换。

如果全部经过 SHA 源测试，预期的 R34 后未测原始来源应为 Model **57,938**、Layout **0**、BARS **928**；实际核心媒体和 BARS PCM 个数必须以真实 `derived/3.0.3/r34_cumulative/coverage.json` 为准，不能按新源数量推算。

## 4A. 388 新原始资源已全部通过实测与 SHA 再核验（最终）

最初 12 分片工作流继承了 R33 的测试数量上限 20，导致选择 37 个 Layout 和 40 个 BARS 时失败；已把 R34 的 `acnh303_round34_select.py` 允许上限调整为 40、纠正全部 R34 报告路径，并独立完成真正 12 分片校验。最终证据为 [R34 成功媒体 Action #38674842841](https://github.com/969981/ACNH_Resources/actions/runs/38674842841)，[包含 12 个真实数据归档和 SHA256SUMS 的 Release](https://github.com/969981/ACNH_Resources/releases/tag/acnh303-r34-388-real-media-bnsh-20261015)。

| 本轮经现场独立验收的新源/输出 | 数量 |
| --- | ---: |
| 新原始源 Model / Layout / BARS | **80 / 148 / 160** |
| **合计新增原始源（全部排除历史）** | **388** |
| 验证成功核心 GLB / PNG | **16 / 1,250** |
| 核心有效媒体合计 | **1,266**，21,066,449 字节 |
| BFLYT/BFLAN 结构 JSON | **752** |
| FCPX font-ref JSON | **155** |
| 精确原始嵌套 BNSH | **80**，3,239,080 字节 |
| 经 vgmstream 解码且验证为 PCM WAV | **1,391** |
| 原生无损 AMTA v5 | **1,615** |
| BARS 的 BWAV **解码失败成员** | **224** |
| Model/Layout 有有效核心媒体的原始源 | **206** |
| Model/Layout 无目标媒体（不可虚增） | **22** |

**注意 BARS 224 不是 224 个源文件失败。** 从 R34 原始 Sound 四份真实报告独立读取，224 个失败 **仅分布在 3 个原始 BARS 源**：221 个 BWAV 成员大小为 **128 字节**，另 3 个为 **92 字节**。[单独的 224 失败来源审计 Actions #38675176099](https://github.com/969981/ACNH_Resources/actions/runs/38675176099) 已成功，全部成员的源路径、asset index/offset、原始 source SHA、BWAV SHA、字节数和 vgmstream stderr 均记录在 `derived/3.0.3/r34_bwav/failed_members_224.json`。其中 **TV_Normal.bars** 贡献 222 个成员失败（asset index 0..223 中具体失败项在审计 JSON）；**Dal_Wipe.bars** 1 个、**Event_Demo_Wherearen_Op.bars** 1 个。短成员疑似与独立样本负载不足有关，但**此 224 个尚未逐个验证原生 Channel Sample Pointer**，不可将所有直接宣称跟 R33 168 字节异常具备相同根因。

### R34 后累计覆盖和完整未测试路径清单

[成功的 103400 原始库存及精确剩余名单 Action #38675220689](https://github.com/969981/ACNH_Resources/actions/runs/38675220689)，[精确剩余 58,866 原始路径 SHA 验证 Release](https://github.com/969981/ACNH_Resources/releases/tag/acnh303-r34-exact-remaining-source-backlog-20261015)：

| 原始资源类别 | 原始总数 | R34 后做过 L3 | **仍未做 L3** | 源测试率 |
| --- | ---: | ---: | ---: | ---: |
| Model | 60,166 | **2,228** | **57,938** | 3.703% |
| Layout | 960 | **960** | **0** | **100%** |
| BARS | 1,696 | **768** | **928** | 45.283% |
| 独立 BWAV | 1,146 | **1,146** | **0** | **100%** |

剩余 **58,866** 全部源路径已按原名、类别、原始字节大小储存在 `untested_after_r34.jsonl.gz`；另外 **174 个已测但无有效 GLB/PNG 的源**（173 `no_target_leaf` 和 1 个历史 `failed`）单独放 `tested_without_valid_core_media.jsonl.gz`，不得重新算为“从未测试”。`Layout 960/960` 只表示全部 Layout **做过 L3 测试**，不代表任意 BFLYT/BFLAN 动画求值、字体替换或 Nintendo 渲染 GPU 结果全部恢复。

R34 后累计核心媒体 **11,464 = 594 GLB + 9,724 PNG + 1,146 独立 BWAV WAV**。BARS **另外**累计 **8,073 真正 PCM WAV + 8,281 原生 AMTA v5**；两种输出类别不能和独立 BWAV 源计数混淆。

**R35 必须追加排除本轮 `derived/3.0.3/r34_cumulative/source_delta.jsonl.gz` 中 388 个来源。** 此后 Layout 没有新的“未做 L3 测试”来源；继续重复处理全部 960 个 Layout 仅能作为专项 Native 语义重分析，不能再计新的 L3 原始源测试数量。将 R34 新出的 80 个 BNSH 纳入 R35 106 个 Native 样本时须按来源 SHA 校验重复成员。

## 5. 下一轮应做的真正研究

1. 以 R34 真实 FSKA frame/key 数据导出 glTF animation，选择另一个实际带 FSKL/FMDL 的匹配游戏原始模型作验证，从同名骨骼确认骨架层级、Bind Pose、Local Matrix 及帧插值，避免 FSKA 源文件本身无网格的问题。
2. 追踪 BWAV 仅元数据头部与完整音频成员的 runtime 来源和引用关系：BARS asset offset、AMTA 关联、可能的 Stream/外部音频分区；不可合成不存在的 DSP-ADPCM 数据。
3. 完成剩余所有 Layout 148 个 L3 原始文件测试以后再研究 UI2D 的完整动画和 native 渲染求值；Model 与 BARS 继续扩大高质量分片。
4. 把本轮新来源实际提取的 BNSH 继续加入 106 样本，并研究实际 GPU Binding Slot；每个需源 SHA、Program/Stage/Reflection Code 的同一实例验证。
5. R35 必须新增排除 R34 新源 `derived/3.0.3/r34_cumulative/source_delta.jsonl.gz`，若 388 个均完成测试则该文件就是完整新排除集合，不能重复抽样虚报进度。
