# ACNH 3.0.3 R37 — PlayerBody 69 通道蒙皮重放、11 个 IBM 例外与 Bgm_Base 外部 BWAV

2026-10-15。独立分支 `feat/acnh303-round37-animation-pose-ibm-bgm-base`。全部原始 GLB / FSKA / Sound / ELF 使用 source SHA 验证；游戏运行时原生画面没有提供，**绝不能将 glTF 数值回放或 Blender 预览描述成已验证 Nintendo 原生逐帧一致**。

## 1. 原始 GLB 输入，不改 R36 原件

- R35 玩家：`PlayerBody_3_FSKA_frame_sampled.glb`、SHA `4742148c5f4066b68f76b50028dca4ccca440672529e662ea7b7158f626ab597`，11 Mesh、46 joint、3 动画、13 channels。
- R36 源 FSKL/IBM 门控恢复：`PlayerBody_FSKL_IBM_gated_FSKA_3clips.glb`、SHA `4bbb618f8bbeefacf7384a23c60160a1f9c5b55b32ecd8eb1a626819f8138ab3`，11 Mesh、46 joint、3 动画、69 channels（27/15/27）。
- 真实源 FSKA：`derived/3.0.3/r35_fska_gltf/player_hermite_curves.json`。采样 FPS=30 是导出假设，原生求值器及真实帧率 **未测**。

## 2. 真正的动画关节世界矩阵重放

`scripts/acnh303_round37_pose_probe.py` 读取 glTF 2.0 Binary、真实 accessor/bufferView、TIME、rotation quaternion、translation、JOINTS/WEIGHTS、`inverseBindMatrices`、Node 层级及 Skin。对第 0、1/4、1/2、1、中央、末帧计算原始关节世界矩阵（含 parent），对肩、腕、颈、头、腿记录位置/行列式，验证旋转插值连续、浮点值有界。

实际 **69** 个 animation channels 严格落在原有 46 Skin joints，三条动画在采样位置均没有非有限世界矩阵；这个结论不依赖游戏原生渲染，只说明当前 **glTF 动画语法与数学求值可重放**。

详细审计：`derived/3.0.3/r37_pose/real_glb_pose_and_joint_influence.json`。

## 3. R36 发现的 11 个 Rest/IBM 差异关节，不再盲目全量修复

R37 实际解析所有 11 Mesh 的 `JOINTS_0 / WEIGHTS_0`，对有权重非零的 JointIndex 建立与 `skins[0].joints` 的真实映射：

- 46 根 Skin joints 中，**21 根**有非零顶点权重引用，共 **14,300 个非零顶点权重槽引用**；
- R36 比对 `NativeRestWorld * IBM` 数值阈值 `1e-3` 的 11 个不匹配骨骼分别为 `EarL`、`EarR`、`Nose00`、`Nose01`、`Nose02`、`Skl_Root`、`Bag`、`z_Bag`、`Hand_L`、`Hand_R`、`Feel`；
- **11/11 均为原始 GLB 单位 IBM，且 0 个直接加权顶点引用**；
- 这提示它们用于角色附件、辅助节点或刚体装配等不同语义，**不是 11 个直接加权蒙皮错误**；但仍可能通过节点层级影响子骨骼和相关附件，不能自动删除或强制替换。

源数据还有 **5 个 `skin:0` 网格节点** `Body__mCheek/Body__mEye/Body__mMouth/Body__mSkin/Body__mSocks`，及 **6 个没有 skin 的独立节点**：`Paint__mPaint`、`EarL__mSkin`、`EarR__mSkin`、`Nose00/01/02__mNose`。这支持区分直接蒙皮和独立几何的必要性，但仍没有原版模型运行时装配证明。

## 4. 实际顶点蒙皮 CPU 验证

`scripts/acnh303_round37_mesh_local_skin.py` 进一步按 glTF 标准公式：

```
jointMatrix(mesh local) = inverse(meshNodeWorld) * jointWorld * inverseBindMatrix
skinnedVertex = Σ weight[j] * jointMatrix[j] * position
```

对真实 POSITION + JOINTS_0 + WEIGHTS_0 各 Source Primitive 进行界限验证和 CPU skinning；每条动画对多个实际非整数/整数源帧求值：

- 每个采样阶段真实校验 **9,612 个顶点**，包括 `Body__mSkin` 的 **5,544 个真实顶点**；后者涉及 20 个带权重关节，顶点权重和约为 1。
- 对 `Act_ArrangeRemoveFtrHigh` 源帧 0 的 `Body__mSkin`：旧 R35 AABB extent `3.5029/5.6317/2.9590`，恢复后新 R36 `6.7646/11.5840/8.1375`（原模型坐标单位）；这证明 R36 恢复影响的是**真实蒙皮几何**，不是只有空通道，**但不能把包围盒扩张等同于视觉正确**。
- 原版 NVIDIA GPU skinning、附件挂接、Material/Texture 和真实游戏画面仍未按像素验收。

机器文件：`derived/3.0.3/r37_meshskin/actual_cpu_skinning_mesh_frame_comparison.json`。

## 5. Bgm_Base 中 891 个 Header-only BWAV 与真实 Sound Stream 资源

原始 `Sound/Resource/Bgm_Base.bars` SHA `b2a7131f6de904a8c381b25f1c890797ea09075c93c5b0c366833f45656c9a5c`，实际 BARS 原始 Asset **945**，其中原先 L3 decode_failed 的 Header-only BWAV **891**。先前把 BARS 总资产误写成 891 的校验被原始数据否定并修正；绝不能将 945 和 891 混算。

- 对全部 891 个失败 BWAV member 回读原始 member SHA、Asset offset、Channel Header 和 name CRC32；
- 从真实 Git Tree 列出 `Sound/Resource/Stream/` **1,146 个独立原始 BWAV**；
- **873/891 个** BARS name CRC32 与真实独立 `Stream/*.bwav` 文件主名的 `CRC32(stem)` **精确相等、且无多义匹配**；
- 另 **18/891** 无匹配原始主名，状态严格保留 OPEN，不能宣称没有采样数据；
- `Sound` 原始目录另包含 1,696 BARS。CRC 名称对应仍只是资源候选证据，尚需把独立源 BWAV 原始样本 Header、payload 原字节及 native AAL 消费者打通。

交叉验证：`derived/3.0.3/r37_bgm_origin/source_member_crc_and_native_elf.json`；执行器 `scripts/acnh303_round37_bgm_origin_probe.py`。原始 ELF SHA `83970061788f10049e2e60d687571b8dc87e5014521889ac4611a7f6b9c6e180`。

## 6. AArch64 原生代码地址证据

ELF 映射区间的 `Bgm_Base` ASCII 确有 **2 条**真实 `ADRP+ADD` 等地址形成引用：`0x290F258` 和 `0x3749D90`。另有 `Sound/Resource/`、`aal::`、`stream` 的真实静态 XREF。使用 Capstone 反汇编、保存包含原 opcode、助记符、地址、附近 BL 目标的 **15 个**有界 ELF 代码窗口。

文件：`derived/3.0.3/r37_audio_elf/real_BgmBase_AArch64_code_window.json`。

**证据边界**：这些仅说明代码真实形成了某些路径/名称常量地址，Nearby BL 仅是候选调用，没有取得真实 x0–x7 的参数传播、调用栈、文件 I/O 事件或实际读取的 Audio Sample 数据；不能称已经证明 AAL 外部音频调用闭环。

## 7. 后续剩余难点与实机必要数据

1. **Blender 验收**：需要在 Blender 导入 R35 / R36 并按三条 FSKA 多时间点输出场景，人工查看肩/腕/颈/腿和面部；游戏实际角色同时间码视频与原生关节矩阵尚未提供。
2. **辅助骨骼**：11 根 IBM 恒等且直接权重为 0 的 Bone 需要追 Link Node、非 Skin mesh 的真实变换和原生 FMDL 形态构件关联；不能为了零 Rest 残差破坏正确的附件位置。
3. **实际 Stream 音频校验**：逐个核对同名 CRC 命中的独立 BWAV 原始 SHA、Header、sample count、encoding、payload bytes；873 份仅名字命中不能自动算 873 个已原样解码或已证明运行时关联。
4. **18 个 CRC 未匹配**：研究游戏版本资源缺口、可选/DLC 名称、其他容器，而不是给缺失音频杜撰零数据。
5. **原生 ELF/动态 hook**：静态 `0x290F258` / `0x3749D90` 继续做寄存器参数流及内存实例级只读验证，确认真正的 `Stream/*.bwav` 文件打开和样本载入。
6. **始终分开 L3/静态解码/运行时视觉验收**。源码保留 R35/R36/R37 的原始 SHA 门槛，`3.0.3` 主分支未更改。

## 8. 已实际通过的 Actions

- [真实 13 vs 69 animation channels / Joint 权重与 pose](https://github.com/969981/ACNH_Resources/actions/runs/38682904721)
- [真实 glTF CPU Mesh-local 加权顶点验证](https://github.com/969981/ACNH_Resources/actions/runs/38683129216)
- [真实 945 BARS/891 HeadOnly，873 名称 CRC 关联](https://github.com/969981/ACNH_Resources/actions/runs/38683178713)
- [实际 AArch64 Bgm_Base / Stream 指令窗口](https://github.com/969981/ACNH_Resources/actions/runs/38683563766)

报告中的任何数学采样、静态引用或资源名字匹配，都不代表已取得原生 Switch 游戏画面的差分一致性。

## 9. 后续真实源复核：18 个独立 Stream BWAV 已有采样载荷

后续 Actions [18-stream original byte replay #38683840429](https://github.com/969981/ACNH_Resources/actions/runs/38683840429) 在原始 `Sound/Resource/Stream/*.bwav` 读取 **18 份原件，共 43,683,456 bytes**，逐份重建 SHA256，调用同一 Native BWAV Header Parser，和 `Bgm_Base.bars` 中 CRC32 对应的原始短成员执行以下独立验证：

- **18/18** 原始独立 BWAV 中确实存在可访问的采样负载，源 BARS 短成员没有可访问负载；
- 音频编码 ID、声道采样率 **全部匹配**；
- BARS `nonprefetch_samples` 与独立 BWAV 的 `file_samples`、`nonprefetch_samples` 在采样的每个声道 **精确相等**；
- 六类 `Audio / 24hour / MusicBox / Live / Indoor / Radio` 各抽取三个未混淆、原始 SHA 校验成功的完整独立文件；双声道样本的每个声道均核对；
- 样本源原始 SHA、样本长度、channel、非文件内采样 offset、真实采样负载 bytes、CRC 名称关系见 `derived/3.0.3/r37_stream/real_BgmBase_to_Stream_original_samples.json`。

此外 [三文件严格样本 #38684042099](https://github.com/969981/ACNH_Resources/actions/runs/38684042099) 独立确认 `BGM_Radio_Jingle_Normal_03`、`BGM_MusicBox_014_Mambo`、`BGM_Indoor_Cafe` 的 codec、采样率和样本数，与完整文件可访问采样 bytes 一致。

**现在能确认至少 18 组短 BWAV 声道描述与实际原始独立 Stream 音频载荷的文件级对应关系；不能写成 873 个都已实测或 Nintendo 的 AAL 原生实时打开链已证实。** 仍有 855 个只有路径 CRC 匹配、18 个 CRC 未匹配，待后续拓展。

## 10. Blender 真实导入、渲染与严格的图像像素验收

[初版真实 Blender Actions #38683968119](https://github.com/969981/ACNH_Resources/actions/runs/38683968119) 将 SHA 固定的 R36 GLB 导入 Blender 4.0.2，生成 12 个 Mesh objects、1 个 Armature / 46 bones、9 个 Materials、3 个 NLA Actions，并输出三条动画各两个时间点的 6 个 640×640 PNG，见 `derived/3.0.3/r37_blender/report.json` 和 [Blender 渲染 Release](https://github.com/969981/ACNH_Resources/releases/tag/acnh303-r37-blender-playerbody-evidence-20261015)。

但独立 `scripts/acnh303_round37_blender_pixel_audit.py` 解码全部 PNG 的实际 RGBA 后发现：**三条动作在相同帧的 RGBA 像素 SHA 完全相同**。虽然 0 和 15 两帧间约有 10,496 个 RGB 像素变化，但这 **不足以证明三条不同动画动作均有效驱动网格**；来源可能是 import 后仍有默认 Active Action 覆盖 NLA、NLA 没有被隔离或渲染其他因素。机器报告为 `derived/3.0.3/r37_blender_pixels/real_frame_pixel_diffs.json`。

因此后续修正 Blender 检查为：清空 active Action、启用 NLA、仅激活对应 Action 轨道，强制场景重评估，再输出帧内原始 Pose Bone Matrix translation 与 RGB 像素。**如不同动作在同帧像素/位姿仍一致，不得宣称真实可视化动画验收通过**。Nintendo 实机动作及渲染逐帧对照始终 `NOT_TESTED`。

## 11. Blender NLA 修正和逐像素回归真正通过

前述 Section 10 初次发现三条动作渲染一致的问题，并非应当忽略的临时现象。后续已对 Blender 验证器 `tools/r37-blender/probe.py` 真正修复：

1. 每次切换动作均 `ad.action=None`，`ad.use_nla=True`，其余 NLA tracks 全部 mute；
2. 强制场景 Frame 缓存重评估，采用 Blender 原始 glTF NLA 起始帧 1（`frame=0` 对应 Blender scene frame 1）；
3. 每个动作记录真实 `Arm_2_L / Arm_2_R / Spine_1 / Head / Waist / Leg_1_L/R` 的 Blender PoseBone 矩阵平移，分别导出第 0 和第 15 源帧；
4. `scripts/acnh303_round37_blender_pixel_audit.py` 独立解码六张 PNG 的真实 RGBA，计算跨动作同帧图片 SHA、逐像素 diff 和每个动作第 0→15 源帧的像素变化，且 CI 要求同帧 **三条动作得到三个不同真实图像像素指纹**。

最新成功实测 Blender 4.0.2：**12 imported mesh objects / 1 Armature / 46 bones / 9 materials / 3 Actions**。三个独立动作 Arm_2_L 在 frame 15 的 Blender armature pose-space translation 分别为：

| Action | X | Y | Z |
| --- | ---: | ---: | ---: |
| `Act_ArrangeRemoveFtrHigh` | 2.026234 | -1.397409 | 7.743910 |
| `Act_BookOpen_Player` | 1.205023 | -2.005377 | 7.544711 |
| `Act_BookRead_Player` | 1.982811 | 0.645367 | 6.310195 |

独立 640×640 RGB 像素审计：三条同一 frame 0 有 **3 种不同像素指纹**，同一 frame 15 也有 **3 种不同像素指纹**；各自 0→15 帧 RGB 变化像素分别 **10,496（2.5625%）/ 7,446（1.8179%）/ 4,114（1.0044%）**。这证明 Blender 中确实渲染出了三条不同的实际动作，早期初版全部相同的视觉问题已通过真实 RGBA 回归定位并修正。

完整输出：
- [真实 Blender NLA 隔离与双帧输出 Actions #38684311920](https://github.com/969981/ACNH_Resources/actions/runs/38684311920)
- [六张实际 Blender PNG 及 SHA256SUMS Release](https://github.com/969981/ACNH_Resources/releases/tag/acnh303-r37-blender-playerbody-evidence-20261015)
- `derived/3.0.3/r37_blender/report.json`
- `derived/3.0.3/r37_blender_pixels/real_frame_pixel_diffs.json`

**验收结论分层**：R37 已有真实 69 glTF channels、Blender 各自动作隔离和图片像素差异支持“可播放的三条不同 glTF 骨骼动画”；还 **没有** 与原版 ACNH 游戏角色的实际矩阵、帧率、皮肤材质、关键帧动作及每帧画面进行逐像素/逐关节对照，不能升级为原生动画求值等价证明。Blender 预览不是 Nintendo 游戏实际截图。
