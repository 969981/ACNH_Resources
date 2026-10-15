# ACNH 3.0.3 R35 — 原始 PlayerBody FSKL/Skin 与 FSKA 的可加载 glTF 动画、短 BWAV、320 新源和 186 BNSH

2026-10-15，独立分支 `feat/acnh303-round35-fska-gltf-short-bwav-bnsh186`。本文区分 **真实 BFRES 本体**、**完成 glTF2 二进制/皮肤/Animation channels 有界校验** 和 **仍未证明的游戏原生逐帧视觉同一性**。主分支 `3.0.3` 及原始 NCA 字节未改动。

## 1. 从 406 条 FSKA 中找到实际可绑定的 Player FMDL/FSKL

R34 真正反序列化的动画源 `Model/CharactorAnimation20000.Nin_NX_NVN.zs` 不带 FMDL，所以强制导出静态 GLB 的历史失败不能视为动画数据损坏。本轮改从原始 `60,166` 条 Model Git 文件清单中检索实际玩家模型，并锁定：

- `Model/PlayerBody.Nin_NX_NVN.zs`：完整原始文件 SHA `99ce2741d8cbe47f51ba1a645ae7becb020d67688ea44eba637a1c2ab3e2e6c3`。
- 不改源数据，提取真正 FRES BFRES **828,688 字节**，SHA `f1f0071e76fa61a813119ff648fa20bd8b1ed652c39b3a491ed2a73ed04eef7e`。
- BfresLibrary 1.6.0 解析出 **1 个实际 FMDL、11 个 Shapes、11 个 VertexBuffers、7 个 Materials、46 个真实 FSKL 骨骼**，并包含每根骨骼父索引及默认 Translation/Rotation/Scale。
- R34 406 条原生动画合并有 **57 种不同骨骼名称**，与本原始 PlayerBody FSKL 直接同名匹配 **38/57**。另外 19 种，如 `FaceBad/FaceGood/FaceNothing/FaceRoot`、`Ear_Long`、`Tail`、`Mouth`、`Nose` 等，不属于这个 PlayerBody 骨架，绝不伪造。
- 原始 Model 经经过源 SHA 校验的既有 nintoolbox 转换器真实生成 GLB：**964,980 字节**，SHA `882f067a493c7145b7ef280b6d3670c174154106c5449c7bbe1bfb5203a1b6a8`。其实际 glTF2 JSON 有 **11 Mesh、57 Nodes、1 Skin、46 Skin Joints**；全部 46 FSKL 名称在实际 Skin joint nodes 中存在。模型本身**不是只含骨架的空 glTF**。

实验证据：[PlayerBody 原始 FMDL/FSKL/动画对照 Actions #38676009069](https://github.com/969981/ACNH_Resources/actions/runs/38676009069)，[实际模型 GLB Skin 节点报告 Actions #38676309643](https://github.com/969981/ACNH_Resources/actions/runs/38676309643)。机器路径：

- `derived/3.0.3/r35_fska_gltf/model_candidates.json`（原始路径候选检索）
- `derived/3.0.3/r35_fska_gltf/actual_player_model/playerbody_source.json`（原始 SHA、本体）
- `derived/3.0.3/r35_fska_gltf/playerbody_skeleton.json`（真正 FSKL 层级）
- `derived/3.0.3/r35_fska_gltf/player_bone_match.json`（38 个匹配、19 个无法绑定骨骼的名称）
- `derived/3.0.3/r35_fska_gltf/playerbody_converted_glb_report.json`（实际原始 GLB Skin/Node SHA）

## 2. 真正导出带 Skin 和三条骨骼动画的 glTF2 GLB

本轮专用工具 `tools/r35-animation-hermite` 利用 BfresLibrary 的 `SkeletalAnimHelper.ToJson`，从原始 FRES FSKA 曲线解析 `Value`、`In`、`Out`，不是以线性插值冒充源 Hermite 数据。对三条有原始名称的玩家动作构建本地曲线：
- `Act_ArrangeRemoveFtrHigh`：28 源帧；模型匹配 5 条 Animation channels（旋转 2、平移 3）；
- `Act_BookOpen_Player`：30 源帧；匹配 3 条 channels（旋转 1、平移 2）；
- `Act_BookRead_Player`：32 源帧；匹配 5 条 channels（旋转 2、平移 3）。

导出 `scripts/acnh303_round35_export_animated_glb.py` 在**真实原始验证 GLB 的 11 Mesh + 1 Skin** 上添加 glTF `animations/samplers/channels/accessors/bufferViews`，仅驱动 `Skin.joints` 内且与实际 FSKL 同名匹配的骨骼。Hermite 在每个整数源帧按曲线 Value/In/Out 求值；EulerXYZ 转换为规范化 quaternion，旋转相邻帧符号连续；四字节对齐 BIN、JSON/GLB 长度、节点索引、SHA 均进行独立文件级验证。转换器产生不可逆的**奇异 Rest Matrix 的原始骨骼将保留原样并跳过其动画轨道**，不伪造非零 TRS 来凑数。

| 真实输出 | 验收结果 |
| --- | --- |
| GLB | **PlayerBody_3_FSKA_frame_sampled.glb** |
| GLB 总字节 | **963,976** |
| 最终 SHA256 | `4742148c5f4066b68f76b50028dca4ccca440672529e662ea7b7158f626ab597` |
| 真正 Mesh、Skin、joint | **11 Mesh／1 Skin／46 joints** |
| 真实原生 FSKA 动画来源 | **3** |
| 真正写入的 glTF animation channels | **13** |
| 只对齐 PlayerBody 可映射的骨骼 | 是，38/57 名称匹配；没有给缺失的 19 根骨骼硬造位置 |
| 文件二次验收 | 真实 glTF2 头、嵌入 Buffer、索引与 source-SHA |
| 游戏帧率 | **30fps 导出假设**，不是实机确认 |
| 帧间求值 | 源 Cubic Hermite 每整数帧采样后在 glTF 使用 `LINEAR`，不是原生插值的逐任意时间等值证明 |
| 实机逐帧画面/绑定矩阵对照 | **尚未验证** |

[成功真实 GLB 生成和发布 Actions #38677121992](https://github.com/969981/ACNH_Resources/actions/runs/38677121992)；[实际可加载、带 Skin 和三条动画的 GLB 与 SHA256 Release](https://github.com/969981/ACNH_Resources/releases/tag/acnh303-r35-playerbody-skin-fska-animated-glb-20261015)。该文件已有真正模型表面、原始 Skin Joints、动画通道与 buffers，但仍需 Blender/glTF Viewer 或其他播放器视觉验收，**不能称与游戏中的完整人物表情、耳尾动态完全一致**。

底层原生 Hermite 结果在 `derived/3.0.3/r35_fska_gltf/player_hermite_curves.json`，[Hermite 原始抽取 Actions #38676680835](https://github.com/969981/ACNH_Resources/actions/runs/38676680835) 成功。最终结构化文件报告 `derived/3.0.3/r35_fska_gltf/playerbody_animated_glb_validation.json`。

## 3. BWAV 外部采样数据：227+条短音频结构真实验证，不臆造外部关联

R34 4 组 BARS 原始报告中 **224 个 vgmstream decode_failed BWAV** 只来自 `TV_Normal`、`Dal_Wipe`、`Event_Demo_Wherearen_Op` 三个 BARS（221×128B、3×92B）。本轮逐条从原始源恢复 224 个 member bytes，重新核对 source SHA 与 member SHA，解析每个 BWAV1 声道 Header、声道数量、offset 和样本数：

- 真实结果 **224/224 为可有界解析的 native BWAV Header**；
- **224/224 均没有 member 内可访问的 sample payload**，不是 vgmstream 单纯错过文件内完整采样；[224 条原件 Header 真校验 Actions #38676083980](https://github.com/969981/ACNH_Resources/actions/runs/38676083980)，机器报告 `derived/3.0.3/r35_bwav/short_member_payload_audit.json`。
- R35 新测试的 Sound 160 个 BARS 原始源中，真正 **1,711 PCM WAV 有效**，1,715 原始 AMTA 无损，另外 **4 个 BWAV decode_failed**，全部来自 `Sound/Resource/NpcSP_kpp.bars` 一个 988B 原始源（源 SHA `8950cdc7b8c5174d3a8592f778a138a614741db5e2cc4e9fc7827e935c5c6744`），三条 128B、最后一条 92B。[R35 四条真实 member 失败审计 Actions #38677425597](https://github.com/969981/ACNH_Resources/actions/runs/38677425597)。
- 四条均已直接按原始 Member SHA、offset 复验有效 Native Channel Header 和 sample bounds，未生成不存在的 PCM；[四条独立字节解析 Actions #38677540013](https://github.com/969981/ACNH_Resources/actions/runs/38677540013)，`derived/3.0.3/r35_bwav/npc_short_native.json`。

这建立了 **“描述头存在，所提取 BWAV 内没有独立 PCM/ADPCM sample bytes”** 的确定性证据，不能因为 pointer 指向 member 之外就擅自认定外部音频文件已定位。待后续从游戏原生 AAL／BARS 消费者寻找外部流来源、Hash 定位和真正预取链，并与完整 BWAV 进行同 Hash 对照。

## 4. R35 全新 320 原始资源的解包（不重复 Layout）

R34 已全部完成 Layout **960/960 L3 原始源测试**，所以 R35 **不重复 Layout 生成历史测试数**。新 8 个工作分片取前 R19／R27～R34 真正 SHA-dedup 后从未测试的：

- Model **160** 个原始源；
- BARS **160** 个原始源；
- Layout **0**（先前 960 全测）；
- 合计真实新来源 **320 个**。

[成功 8-shard 实际转换 Actions #38677104491](https://github.com/969981/ACNH_Resources/actions/runs/38677104491)／[永久文件与 SHA256SUMS Release](https://github.com/969981/ACNH_Resources/releases/tag/acnh303-r35-320-real-media-bars-20261015)：

| 本轮真实新增内容 | R35 数量 |
| --- | ---: |
| 原始 Model / Sound(BARS) | **160 / 160** |
| 新 GLB | **14** |
| 新 PNG | **205** |
| 新有效核心媒体 | **219**（18,737,272B） |
| 本轮 Model `converted_media` 源 | **158** |
| `no_target_leaf` Model 源 | **2** |
| 新 BARS 真正 PCM WAV | **1,711** |
| 新 BARS 原生 AMTA | **1,715** |
| 新 BARS decode_failed 成员 | **4** |
| 新 Layout 无损 BNSH | 0（没有任何新的未测试 Layout 原始源） |

R35 本轮将独立转换的 `PlayerBody` 用作动画专项研究，不计入这 320 个新源的 SHA delta，所以 **专项 PlayerBody GLB 与常规 14 个新 GLB 不能直接混算为 15 个新来源**。

累计有效核心媒体现在 **11,683 = 608 GLB + 9,929 PNG + 1,146 standalone WAV**；另外 BARS 累计 **9,784 真正 PCM WAV + 9,996 原生 AMTA**，不混入独立 BWAV。

[成功全 103400 源路径核验与 R35 剩余清单 Actions #38677476554](https://github.com/969981/ACNH_Resources/actions/runs/38677476554)／[58,546 个未做 L3 的原始路径完整 SHA Release](https://github.com/969981/ACNH_Resources/releases/tag/acnh303-r35-exact-remaining-source-backlog-20261015)：

| 类别 | 原始总数 | 已做 L3 | 仍未做 L3 |
| --- | ---: | ---: | ---: |
| Model | **60,166** | **2,388** | **57,778** |
| Layout | **960** | **960** | **0** |
| BARS | **1,696** | **928** | **768** |
| 独立 BWAV | **1,146** | **1,146** | **0** |

这里的 `untested_after_r35.jsonl.gz` 包含 **58,546 个全部原始相对路径＋字节大小**，`tested_without_valid_core_media.jsonl.gz` 将已测无目标媒体的路径与未测严格区分。Layout 源测试 100% 不等于其原生绘制、动画求值和 BNSH Shader 语义全部完成。

## 5. 原始 186 个 BNSH：R34 新增 80 真字节已经全部纳入

源来自 R27–R34 各轮实际 Layout Release 分卷，逐轮校验 SHA，不重复计数原始 member。 [R35 186 BNSH Native 审计通过 Actions #38676409229](https://github.com/969981/ACNH_Resources/actions/runs/38676409229)。

| 来源审核与原生 shader 验证 | R34 | R35 |
| --- | ---: | ---: |
| 原始 BNSH members | 106 | **186** |
| unique BNSH SHA | 47 | **70** |
| GRSC Variation/Program | 531 | **915** |
| Vertex + Fragment 原始 GPU code refs | 1,062 | **1,830** |
| NV Binary Pool Magic candidates | 760 | **1,322** |
| unique Vertex / Fragment code SHA | 20 / 42 | **23 / 54** |
| 长度正好到下一段 Magic | 934 | **1,610** |
| 原始全零间隙引用 | 128 | **220** |
| 全零间隔实际总字节数 | 407,808 | **716,288** |

Report：`derived/3.0.3/r35_native_shader_pool/{pool_crossrefs,code_members,stage_reflection_links,code_gap_audit}.json`。**运行时 Material→Variation、GPU Slot、GPU 指令语义仍未闭合**；静态 Reflection 的 `uTexture%d` 文字只作为资源名字，不是绑定 Slot 证明。

## 6. R36 下一轮先决证据

1. **FSKA / Model 动画完整绑定**：继续从原始 Player Face/Mouth/Hair/Ear 等相关源寻找剩余 19 种骨骼或组合部件，依据原始 FSKL ParentIndex 建真实多 mesh glTF scene；当前 38/57 覆盖率不应写作全覆盖。检查实际动画 `BindIndices`、Bind Pose、InverseBindMatrices，并用真实任意非整数帧对照 Cubic Hermite 值，验证 30fps 假设；再用 Blender/glTF Viewer 做图像/骨骼位姿回归。
2. **BWAV 缺失采样**：将 R35 确认的 228 个无内部采样的成员与独立原始 Sound asset 真实 Hash / Name / native BARS loader 的关联做验证，不能只凭无数据猜外部存储。
3. **L3 源继续覆盖**：Model 仍 **57,778**、BARS **768** 未做对应 L3；Model 可进一步扩大分片/自动处理，BARS 正式去掉 4 个只有头的异常成员，或采用 Native 流关联而不是伪造 WAV。
4. **Native shader**：继续研究 186 BNSH→Material instance 和实际 GPU Binding Slot 动态证据，而非增加纯静态字符串统计。R35 本轮没有新 Layout 所以未新增 BNSH 供 R36 直接并入。
5. **严格不重测冒充新来源**：R36 必须把 `derived/3.0.3/r35_cumulative/source_delta.jsonl.gz` 的 **320 条**全部加入 R19/R27–R34 的 SHA 原始排除集合；动画专项 PlayerBody 及音频重测要各自记为 Native 深度研究，不能当作未测新源。
