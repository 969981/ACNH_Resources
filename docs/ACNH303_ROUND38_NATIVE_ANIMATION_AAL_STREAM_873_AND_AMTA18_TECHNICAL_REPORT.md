# ACNH 3.0.3 R38 — Native 动画逐帧对照、AAL 字符串参数链、873 BWAV 全量原件、18 条 OneRoom 名称

研究分支：`feat/acnh303-round38-native-animation-aal-stream-closure`，上游 R37 `feat/acnh303-round37-animation-pose-ibm-bgm-base`。原始 3.0.3 主分支不改；只添加代码、CI 及来源可复核的结构/哈希/数值报告。日期：2026-10-15。

## P0：真正的逐帧验证——已建立两级证据，但尚无游戏引擎真值

原始 R36 GLB（46 Skin joints、11 mesh、69 channels、3 clips）锁定 SHA256 `4bbb618f8bbeefacf7384a23c60160a1f9c5b55b32ecd8eb1a626819f8138ab3`，不允许根据界面图猜结果。

- `tools/r38-blender/full_pose_export.py`：真实 Blender 4.0.2 打开指定 GLB，独立启用三条 NLA，逐原始帧（`frame+1`）读取全 46 根 PoseBone 世界平移，保存三条 **29 / 31 / 33 = 93** 源帧。
- `scripts/acnh303_round38_compare_blender_gltf.py`：从 GLB 真正读取 Buffer、Animation、Skin，重放并读取 93 帧 glTF Bone 世界平移；因为 Blender 与 glTF 坐标轴不同，用 46×45/2 关节两两距离（平移/旋转不变）和逐帧统一比例估计比较，并在完整输出保留 93 帧数值。
- 真实数据：`derived/3.0.3/r38_animation_parity/real_blender_all_joint_frames.json`、`real_blender_to_gltf_all_frame_46joint_comparison.json`。
- [通过的真实 93 帧 Blender CI](https://github.com/969981/ACNH_Resources/actions/runs/38687049933)。

**检出的关键异常（模型单位）**：每条动作全部源帧的 `scaled_world_joint_distance_p95_abs_error` 最大值：

| Clip | SourceFrames | P95 的最差帧 |
|---|---:|---:|
| `Act_ArrangeRemoveFtrHigh` | 29 | **0.561852** |
| `Act_BookOpen_Player` | 31 | **3.309805** |
| `Act_BookRead_Player` | 33 | **0.044070** |

`BookOpen_Player` 在 **frame 0** 就有约 3.296441 的 p95 距离误差，证明并非只差一个动画采样中点；不得将此 GLB 无条件视为原生动作等价。异常定位器 `scripts/acnh303_round38_pose_outlier.py` 和真实源证据 `derived/3.0.3/r38_pose_outliers/source_GLTF_to_Blender_per_bone_difference.json`，显示 `Toe_L/Toe_R/Ankle_L/Ankle_R` 最突出。例如此 clip 第 0 帧 `Toe_L`：glTF = `[4.44784,5.42601,-0.89093]`，Blender = `[0.90835,-0.68655,0.41018]`（尚未转换坐标轴、对照两两距离才可用于误差判断）；与 `nw4f_root` 的关节距离相差约 6 原始模型单位。建议优先检查基础姿态继承、不同 clip 的 animated target、根/腰/腿骨层级及无通道默认值，不要靠修饰显示结果掩盖错误。

### 真正 Nintendo ACNH 3.0.3 Native 运行时对照边界

现在仓库中 **没有用户或实机提供的游戏内关节矩阵采集结果**；本轮不能伪造、猜测或以 Blender 输出代替原生求值器。已提交 `scripts/acnh303_round38_runtime_compare.py`，它只接收真实 `acnh303-r38-real-console-pose-capture-v1` 的 read-only game pose trace，并严格要求版本 ELF SHA `83970061788f10049e2e60d687571b8dc87e5014521889ac4611a7f6b9c6e180`、原始 GLB SHA、`capture_session_id`、真实 `runtime_capture_instrumentation`、三 clip 原始帧及 11 根目标骨骼位置。在没有真实数据前比较器拒绝宣称 Native-vs-Blender parity。

推荐的实机采集必须标识源 `SourceFrame`、场景、玩家实例、动画 clip/name，采集目标 `Clavicle_L/R`、`Wrist_L/R`、`Arm_2_L/R`、`Neck`、`Head`、`Waist`、`Leg_1_L/R` 的根坐标/旋转/缩放，并注明附着模型、是否混合其他动画、时间戳和实际 frame rate。没有同步样本则将未闭合点保持 **OPEN**。

## P0：原始 AAL/Bgm_Base ARM64 调用点的准确边界

源 ELF SHA256 `83970061788f10049e2e60d687571b8dc87e5014521889ac4611a7f6b9c6e180`；R37 已确认两个字面量地址引用 `0x290F258 / 0x3749D90`。本轮 `scripts/acnh303_round38_aal_native_defuse.py` 在真实 AArch64 指令反汇编的基础上，明确验证：

1. `0x290F258 ADRP x8,0x3FFA000` + `0x290F25C ADD x8,x8,0xDB9` 实际形成 `Bgm_Base` 字符串地址 **`0x3FFADB9`**；
2. `0x290F260 STP x20,x8,[sp,#0x30]` 把同一 name pointer 放在 **`SP+0x38`**；
3. `0x290F24C ADD x1,sp,#0x20` 形成调用参数指针，故 Bgm_Base 位于 **`x1+0x18`** 的临时结构字段；`0x290F278 BL 0x373167C` 属于紧邻的真实参数消费候选；
4. `0x3749D90` 的同一字符串地址经寄存器传递存入 `[x10+0xA8]` 表字段。

报告 `derived/3.0.3/r38_aal_native/real_bgm_pointer_static_defuse.json`，[成功 Actions](https://github.com/969981/ACNH_Resources/actions/runs/38686882965)。

**界限**：这确实证明静态字符串的栈内参数和表注册，不等于已经证明 `0x373167C` 是外部音频文件打开函数，也不等于捕获过 AAL 的真实 I/O。后续原生追踪需从此点向下定位 `Sound/Resource/Stream/` 的真实文件打开调用、实际 SHA 对应的 BWAV channel/read 桥梁及最终 PCM 流输出，而不是仅凭附近 BL 推断为读取者。

## P0/P1：873 份 Stream/*.bwav 的原始音频字节校验

R37 原始 `Sound/Resource/Bgm_Base.bars` SHA256：`b2a7131f6de904a8c381b25f1c890797ea09075c93c5b0c366833f45656c9a5c`，945 BARS assets，其中 891 条 header-only BWAV；873 条 name CRC32 精确匹配 `Sound/Resource/Stream/*.bwav` 的文件主名。

本轮 `scripts/acnh303_round38_stream_all.py` + `scripts/acnh303_round38_stream_aggregate.py` 和 `.github/workflows/acnh303-round38-stream-all.yml` 把 873 份原始文件拆成 12 组，在 GitHub Actions runner 上读取原始 Git blob bytes，**真正重新校验 Git object SHA-1 与 SHA256、原始字节长度、BWAV native channel headers、encoding、sample_rate、nonprefetch/file samples 及物理可读取 payload**。每组产出真实 source SHA、每通道结果；汇总须严格验证 12 个非重复 shard、873 个唯一 CRC，缺失一组不能宣称全量完成。工作流：[12-shard real-source audit](https://github.com/969981/ACNH_Resources/actions/runs/38686771880)。

⚠️ 该 CI 是外部 I/O 密集任务；本报告不提前断言未完成的 shards 和 aggregate 已成功。即便 873 个均通过，只能证明原始文件层面的映射和负载，不等价于解出了全部 873 个 WAV、完成游戏运行时原生 AAL 文件读取链。

## P1：18 个未匹配 CRC —— 资源名称 18/18 已实证恢复

`scripts/acnh303_round38_unmatched_crc.py` 曾对 **103,400** 个真实原始 RomFS Git 文件路径进行精确 CRC32(Stem/Name/RelativePath) 检查，没有找到 18 个同名源文件。报告 `derived/3.0.3/r38_crc18/original_all_RomFS_CRC_name_hypotheses.json`，[成功 Actions](https://github.com/969981/ACNH_Resources/actions/runs/38686664061)。

与此不同的是，我们重新读取经 SHA 验证的 **真实原始 Bgm_Base BARS** 中的 18 段 **AMTA 音频元数据结构**，逐段提取 98 字节左右偏移处的原始明文名称：

- 所有 18 条都是 `BGM_OneRoom_*`；
- 如 `BGM_OneRoom_Edit_Facility`、`BGM_OneRoom_MainField_Night`、`BGM_OneRoom_MainField_Noon`、`BGM_OneRoom_SchoolEvent` 等；
- 全 18 条的 `CRC32(AMTA原样资源名)` 都与对应原始 BARS CRC32 **一一精确匹配**；
- `scripts/acnh303_round38_resolve_amta_names.py` 重新核验 18/18，输出 `derived/3.0.3/r38_resolved18/all_18_OneRoom_original_AMTA_name_CRC_matches.json`。
- [18 AMTA 原始字节验证](https://github.com/969981/ACNH_Resources/actions/runs/38687212729) / [18/18 原始字符串与 CRC 双验](https://github.com/969981/ACNH_Resources/actions/runs/38687443472)。

这意味着本轮已经完整恢复 **891/891** 条短 BWAV 的真实命名：**873 个对应有原始独立 Stream 文件名，另 18 个由 BARS 原生 AMTA 内部字符串恢复**。这 18 个并非名字已经不可知的文件，缺少的是原始资源包中的外部实际 BWAV 字节。OneRoom 命名很像《快乐家乐园》场景，具体 DLC 文件来源属于待用实际 DLC 容器验证的候选，不应把这一猜想升级为外部文件证据。

## R38 结论分层

**已确认**：Native BARS 18 AMTA 原始名称与 CRC 18/18；全 103,400 原始文件路径检索；原始 ARM64 String → Stack 参数 → BL 静态指针链；真实 Blender 三条动作、93 帧、46 骨骼数值重放；异常 `BookOpen` Toe/Ankle 明确定位。另有 873 文件的 12-shard 原始 I/O 校验任务，完成状态需以其 final aggregate 为准。

**尚未完成**：Nintendo ACNH 原生动作帧采集；Blender 与实机逐骨骼/逐像素一致性；`BookOpen` 显著关节误差的实际修复；`0x373167C` 下游 AAL 文件加载动态语义；18 条 OneRoom 实际 DLC BWAV 样本定位；873 原始 PCM/音频输出解码与游戏混音。

**下一步最高优先级**：先定位 BookOpen 骨骼基础姿态或动画约束为何将脚趾与根骨变成异常距离，再用真实实机帧比较；AAL 侧从 `x1+0x18` 参数收发对象与 native file open/Stream 配对闭环；音频媒体转换独立验证而不是仅因名称对应就标 L3 成功。
