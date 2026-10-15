# ACNH 3.0.3 R36 — FSKL→IBM→FSKA 动画、Model/BARS 解包及 BWAV/BNSH 验证报告

**日期：** 2026-10-15  
**版本与分支：** `3.0.3` 原始 RomFS；`feat/acnh303-round36-animation-audit`  
**状态：** 原始文件 SHA 已核验，真实转换 Actions 成功；原生游戏逐帧视觉一致性 **NOT_TESTED**。未修改 `3.0.3` 主分支，未更改原始 NCA。

## 1. 证据范围与实际执行

R35 已取得原始 `Model/PlayerBody.Nin_NX_NVN.zs` 的 FMDL/FSKL（11 Shapes、46 bones）和真正可载入但仅有 **13 条通道**的 GLB，同时有 R34 原生 406 条 FSKA 曲线、224+4 个短 BWAV 及 186 个原生 BNSH。

R36 并非重复下载和重命名这些既有产物。本轮新增：

1. 对已发布 **SHA 为 `4742148c5f4066b68f76b50028dca4ccca440672529e662ea7b7158f626ab597`** 的 R35 实际 11 Mesh + 46 joint GLB 做真正的索引/浮点数据重读；
2. 从真实 3 个 Player FSKA 的 **77/31/52 条 scalar curves** 对实际 GLB 原有轨道进行逐骨骼丢失归因，计算中间帧偏差；
3. 独立对 **46 个原始 FSKL rest transform、46 个 glTF Skin 节点、46 个真实逆绑定矩阵（IBM）**检查父级和矩阵一致性；
4. 从 **18 个原始 Model Git 文件**重新提取真正 FRES，并通过 BfresLibrary 1.6.0 读取真实 FMDL/FSKL，找齐跨物种的全部 19 种骨骼名称；
5. 在不创建不存在的骨骼或网格的前提下，对满足源 FSKL 世界 Rest × 原有 glTF IBM 接近单位矩阵门槛的 **28 个零基转换关节**恢复原始源 TRS，并导出三条原始 FSKA 的 **69 条 glTF Animation channels**；
6. 将 SHA 严格排除至 R35 后的 **320 个新原始 Model/BARS** 实际转换、逐分卷哈希验收并长久发布；
7. 将 **R36 891 个 BARS BWAV 失败**全部回到真实原始 Archive 字节边界进行二次解析；不生成虚假音频样本；
8. R35 186 BNSH 继续作为当前 Native shader 基线；本轮没有新 Layout，故 **没有新增 BNSH**。

## 2. 原始 PlayerBody 模型 FSKL → GLB 的零矩阵问题

源 `derived/3.0.3/r35_fska_gltf/playerbody_skeleton.json` 与原始 46-joint GLB 的对照：

| 可验证项 | 数量 / 结果 |
| --- | ---: |
| 原始 PlayerBody 网格 | 11 |
| 原始 FSKL 骨骼 / GLB Skin joints | 46 / 46 |
| FSKL ParentIndex 与 glTF Joint ParentName 精确相同 | 46 / 46 |
| 原始 FSKL 缩放是 [1,1,1] | 46 / 46 |
| 原始 FSKL RotationFlag `EulerXYZ` | 46 / 46 |
| 原始 glTF 关节为普通 TRS | 18 |
| 原始 glTF 关节是 3×3 全零基矩阵 | 28 |
| 原始 glTF IBM 存在、边界有效、矩阵非奇异 | 46 / 46 |
| Source native rest world × original IBM 数值近似单位矩阵（误差阈值 `1e-3`） | 35 / 46 |
| **原始 28 个零矩阵关节全部通过上面同一个门槛** | **28 / 28** |

**故障归因边界：** 源 FSKL 并非零尺度骨架；是现有 Model → GLB 转换结果中出现了 28 个零基矩阵。它导致 R35 的动画导出器谨慎跳过这些无法进行可逆 TRS 分解的关节。不能因此推断原生游戏骨骼矩阵也为零。

IBM 的 **35/46 一致**不代表其余 11 个可以忽略。特别是 `Skl_Root`、`Hand_L`、`Hand_R` 等现有非零 GLB rest 节点未擅自改写，这些关节的坐标/装配与 IBM 仍待恢复。原始 Nintendo runtime 身份、GPU skin 和逐帧画面没有经过相应动态验证。

机器审计：`derived/3.0.3/r36_joint_rest/real_joint_rest_IBM.json`；执行代码：`tools/r36-bind/joint_rest_audit.py`。  
[原始关节/IBM 审核 Actions](https://github.com/969981/ACNH_Resources/actions/runs/38681428597)。

## 3. 三条原始 FSKA 在 glTF 里的真实曲线保留比例

原始动画经 BfresLibrary 读取 KeyFrames 的 `Value/In/Out`，在 Python 中计算分段 Cubic Hermite。R35 每个整数帧采样，然后由 glTF LINEAR 播放；R36 首先逐通道测半源帧误差（旋转按 quaternion 最短弧角，平移为模型坐标）。

| 动画 | 原始有曲线骨骼 | 原始 scalar curves | R35 glTF 通道 | R36 恢复后通道 |
| --- | ---: | ---: | ---: | ---: |
| `Act_ArrangeRemoveFtrHigh` | 31 | 77 | 5 | **27** |
| `Act_BookOpen_Player` | 15 | 31 | 3 | **15** |
| `Act_BookRead_Player` | 31 | 52 | 5 | **27** |
| **合计（动画内计数，不跨动画去重）** | **77** | **160** | **13** | **69** |

R35 半帧 LINEAR 与 Hermite 对比最大旋转误差（角度）分别为 **0.165635°、0.012550°、0.010146°**；对应的平移误差另以模型单位记录，不混入角度统计。

R36 导出器 `tools/r36-bind/restored_export.py` 使用源 Rest 姿态、真实原始 glTF Skin / 11 meshes / IBM，**仅在该关节的源 Rest world × 原有 IBM 数值误差小于 `1e-3` 的条件下**把 28 个确证零基节点换成 FSKL 原始 Translation、EulerXYZ radians→normalized quaternion、Scale。重新读取原始 FSKA，采用 **每个源帧 4 次采样**；每段中间仍是 glTF `LINEAR`。

| R36 原始关节恢复的 GLB | 校验结果 |
| --- | --- |
| 文件 | `PlayerBody_FSKL_IBM_gated_FSKA_3clips.glb` |
| 大小 | **1,111,296 bytes** |
| SHA256 | `4bbb618f8bbeefacf7384a23c60160a1f9c5b55b32ecd8eb1a626819f8138ab3` |
| GLB 2.0 | 11 Mesh、46 Skin joints、3 动画 |
| 已修复源/IBM 一致的零基关节 | 28 |
| 实际动画通道 | **69 = 27 + 15 + 27** |
| 动画名和原始帧数 | 真实原始 28 / 30 / 32 |
| `30fps` | 仅导出假设 |
| 游戏原生位姿、角色完整外观与帧率比对 | **NOT_TESTED** |

[69 通道独立实验候选版 GLB、完整报告、SHA256SUMS](https://github.com/969981/ACNH_Resources/releases/tag/acnh303-r36-fskl-ibm-restored-animated-glb-20261015)。保留 R35 官方来源导出的原始 13 通道 GLB 和 R36 未修复的 4x 采样基准，不能将修复候选直接写成游戏一致的成品。

## 4. 57 种 FSKA 骨骼中的 19 种，实际来自哪些原始模型

R35 将全部 406 条 FSKA 的 57 种不同名字与 PlayerBody 的 46 根 FSKL 对比，仅 **38 种**同名，另 19 种未在 PlayerBody 中。

本轮 SHA 校验并通过真实 BFRES/BfresLibrary FSKL 读取 **18 个原始源模型**，确认 **19/19 种**都可以在其他真实 FSKL 中找到。例如：

- `NpcNmlRbt00`：`Ear_Long_1_L/R`、`Ear_Long_2_L/R`；
- `NpcNmlSqu00`：`S_Tail_1/2/3`；
- `NpcSpFox`：`Ear_1_L/R`、`FaceRoot`、`Nose`、`Tail_1/2`；
- `NpcSpOwl`：`FaceBad/FaceGood/FaceNothing/FaceRoot`、`Mouth`、`Tail_1/2`；
- `NpcSpPoo`：`Side_Ear_1_L/R`。

**这只能证明名称来源确实分属不同动物的骨架，不能把它们自动拼接到 PlayerBody。** R36 的两条有尾部曲线的玩家动画各少 4 个非 PlayerBody 尾部骨骼，而不是修复失败的玩家手臂、头和腿。

完整证据：`derived/3.0.3/r36_missing_fskl/real_native_fskl_candidates.json`；读取器 `tools/r36-skeleton/candidate_scan.py`；[18 原始模型 FSKL 验证 Actions](https://github.com/969981/ACNH_Resources/actions/runs/38681301008)。

## 5. 真实剩余 Model / BARS L3 的继续执行

新轮 8 个 Actions 分片各处理 40 个从未进行 L3 的真实源。排除集合包括 R19、R27–R35 每条原始路径＋源 SHA；与已研究但不计新 L3 的专项 PlayerBody 分开。先真实执行、转换、验证结果及分卷 SHA，后发布 Release。

| 类别 | R36 新源 / 输出 |
| --- | ---: |
| Model 原始新源 | 160 |
| BARS 原始新源 | 160 |
| 新有效 GLB | **26** |
| 新有效 PNG | **212** |
| 新有效 BARS PCM WAV | **1,601** |
| 新无损 AMTA | **2,492** |
| BARS decode_failed | **891** |

剩余未进行目标 L3 的真实源为 **Model 57,618，BARS 608，Layout 0，独立 BWAV 0**。L0/L1/L2 已做与 L3 转换、Native 运行时语义是三个不同层次，不得混算。

可审计：
- `scripts/acnh303_round36_select.py`、`scripts/acnh303_round36_reconcile.py`、`scripts/acnh303_round36_release_verify.py`
- `derived/3.0.3/r36_cumulative/coverage.json` 和 `source_delta.jsonl.gz`
- [成功的 320 新源转换 Actions](https://github.com/969981/ACNH_Resources/actions/runs/38680992605)
- [可长期下载的 8 分卷原始有效输出 / SHA256SUMS](https://github.com/969981/ACNH_Resources/releases/tag/acnh303-r36-320-real-media-bars-20261015)

## 6. 不含可访问采样数据的 BWAV：228 旧成员 + 891 新成员

R35 先前验证的 224+4 个 BWAV member 都有有效 native Channel Header，但在提取 member 的 SHA 有界范围里找不到可访问 sample payload。本轮 R36 把 **891 个真正 vgmstream decode_failed** 的 member 再度按原始 BARS 源 SHA、AssetOffset 到下一成员/源 EOF 的边界重读：

| `Sound/Resource/Bgm_Base.bars` 的失败 BWAV | 数量 |
| --- | ---: |
| 128 B 成员 | 729 |
| 192 B 成员 | 161 |
| 320 B 成员 | 1 |
| **合计** | **891** |

**891/891 的 Native BWAV 头部可解码，且声道 sample payload 不在提取的 member 内。** 891 个失败成员全来自 `Bgm_Base.bars` 一个原始 Sound 源。失败是无文件内采样的结构问题，不应伪造 PCM 帧或将其统计为可播放 WAV。

原始数据读取与分类：`tools/r36-bwav/failure_replay.py`；`derived/3.0.3/r36_bwav891/native_failure_classification.json`；[891 逐成员真实解码审计 Actions](https://github.com/969981/ACNH_Resources/actions/runs/38681259505)。

**尚未证明：** 外部文件名 / 具体编码 / 音频流数据实际所在资源、外部与 BARS Name CRC32 的映射、AAL 读取/缓存/混音的运行时消费者。因此“Header 没有 PCM”不能写成“已找到外部 PCM”。

建议下一步优先从 `Bgm_Base.bars` 对应 BARS 成员的 CRC、nonprefetch offset、采样数量和 ELF AAL loader 找真正的资源回调，再用原件字节和游戏内实际载入数据做对照。

## 7. 186 BNSH 的正确验收状态

R35 已从 R27–R34 的真实 Release 中校验并整合 80 个新增 BNSH，形成 **186 个原始成员 / 70 个 unique SHA / 915 Programs / 1,830 条 Vertex+Fragment code refs / 1,322 NV Binary Pool candidate**。R36 没有新的 Layout 原始源可供 L3 测试，所以仍然 **186**，不增加虚假计数。已有报告：
`derived/3.0.3/r35_native_shader_pool/{pool_crossrefs,code_members,stage_reflection_links,code_gap_audit}.json`。

目前尚未证明真实材质实例选择了哪个 Program Variation，以及 GPU binding slot、Uniform/Texture 实际运行时值；`uTexture%d` 字符串仍只是 Reflection 候选，**不能当做运行时绑定证明**。

## 8. 下一轮验收条件（不能用文件可解析冒充语义正确）

1. **骨骼画面回归**：加载 R35 13 通道、R36 13 通道 quarter-sampled 和 R36 69 通道 restored GLB，对齐相同 0、半帧、1/4 帧，在 Blender 及游戏运行时捕获可比较的关节世界矩阵、关键点位置和画面。主线验证肩/腕/颈/脚关节不再塌陷，而不是仅凭 GLB 头验收。
2. **Rest / IBM 非全局一致**：对于 FSKL 世界矩阵×现有 IBM 的 **11 根非一致**关节，从 BFRES 原始骨骼 Matrix-to-Bone、SkinIndex、变换坐标系和 glTF Converter 中确定具体差异；不能假设 46/46 已正确。
3. **FPS 与 Hermite 原生插值**：用真实运行时 FSKA evaluator 对任意非整数帧做数值对照，不再默认 `30fps` 或 Unity/Blender 的插值方法等于原游戏。
4. **BWAV 外部实际关联**：优先处理 `Bgm_Base.bars` 中 891 条，追 AAL/资源流读取并对实际外部采样源建立原始 SHA / 地址 / 样本比对；每个成员能回溯 CRC32 和真正采样来源后才提升音频语义层级。
5. **BARS/Model 批量剩余**：以剩余 Model 57,618、BARS 608 为 L3 分母继续分卷。新样本必须再次排除 R36 完整 320 条源路径 SHA，不重复算既有源。
6. **Shader Native**：维持 186 BNSH 作为 BNSH 原件池基线，转向材质对象→Variation→GPU slot 的实例级可核验链，而不是继续累加静态字符串计数。

**总验收结论**：R36 的 69 通道 PlayerBody GLB 已通过结构、Skin 目标和受 source/IBM 约束的 28 关节修复验收；这是一份可以在模型工具中验证的**实验动画候选**。实际游戏外观、实时数据、全部材质和音频流的闭环尚不成立，不得标记为原版全语义复现。
