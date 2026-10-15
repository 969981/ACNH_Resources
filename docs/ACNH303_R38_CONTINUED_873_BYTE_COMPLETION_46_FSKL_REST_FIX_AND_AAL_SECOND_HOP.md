# ACNH 3.0.3 R38 Follow-up — 873/873 原始音频全量闭合、46 原生骨骼 Rest 修复、AAL 下一跳及 NLA 交叉污染

> 更新日期：2026-10-15。源分支：`feat/acnh303-round38-native-animation-aal-stream-closure`。下述结果来自**真实成功的 Actions + 原始文件 SHA + 原始模型/原生 ELF/Blender**，没有改变 `3.0.3` 主分支，没有声称获得游戏实时渲染/文件 I/O。

## 1. 873/873 Stream BWAV 原始文件字节级闭合成功

工作流 [#38686771880](https://github.com/969981/ACNH_Resources/actions/runs/38686771880) 已 completed/success；12 个分片完整汇总至 `derived/3.0.3/r38_stream_all/873_exact_original_byte_native_header_audit.json`：

- **873 / 873** 原始 CRC 映射的独立 `Sound/Resource/Stream/*.bwav` 已真正读取；
- 累计原始文件字节 **1,724,328,411**；
- **873** `MATCH_NATIVE_HEADER_AND_REAL_PAYLOAD`，0 native header/参数/采样字节边界不符；
- 每条保留原始 Git Blob OID/SHA1、重新计算的 SHA256 和 source path，12 个 SHA 校验分片数目和 CRC 无遗漏无重复；
- R37 的 18 份抽检包含在这次完整全集中；因此旧的 855 个未做完整原件审计的条目现已全部补足；
- 原始 `Bgm_Base.bars` 的 891 header-only 条目还有 **18 个 OneRoom** 没有找到独立 Stream 文件；但是这 18 个资源名已通过真实 AMTA 内嵌明文和 CRC32(name) **18/18** 恢复。对应的完整音频文件本身仍然未知。

这项闭合**不是**全量 PCM 解码，也**不是** Nintendo AAL 实机实际 FileOpen/Read；不应把这些不同层级混淆。

## 2. 游戏原生 FSKL 与 glTF 静态骨骼姿态错位，根因已实测

原始 R36 源模型是 `PlayerBody_FSKL_IBM_gated_FSKA_3clips.glb`，SHA `4bbb618f8bbeefacf7384a23c60160a1f9c5b55b32ecd8eb1a626819f8138ab3`。

R36 虽然修复了 **28 根奇异零基矩阵**，却保留一些导出器生成的非奇异 TRS。在 R38 的 46 Bone × Rest×IBM 逐骨骼审计中发现：全部 **21 根有实际网格加权的骨骼**，其源 glTF bind pose 的 `max_abs(RestWorld × inverseBind - I)` 异常达到 **4.838181503491291**，并不是仅 11 个无权重附属骨骼的问题。单修 `Skl_Root` 的 **[#38689128826](https://github.com/969981/ACNH_Resources/actions/runs/38689128826)** 试验未过门槛，故没有发布对应错误 candidate。

具体由真正原始 FSKL 骨骼参数锁定：

- `Skl_Root` native `translation=[0,4.84,0]`；旧 R36 原始 `[0,4.84000015,0]`，**不是关键错误**。
- `Spine_1` native EulerXYZ `rotation=[1.5707964,0,1.5707964]`（**弧度**），正确 glTF quaternion 约 `[0.5,0.5,0.5,0.5]`；R36 原保留 TRS 的 quaternion `[0.0137060676,0.000187891579,0.0137060676,0.999812126]`，对应将 1.5708 近似当成**角度**的错误。
- `Waist` 同样错误：native `[1.5707964,0,-1.5707964]`（弧度），正确四元数 `[0.5,-0.5,-0.5,0.5]`，而 R36 原保留的 `[0.0137060676,-0.000187891579,-0.0137060676,0.999812126]` 只有非常小旋转。
- **注意单位差别**：FSKL 来源 rest rotation 为 **弧度**；另一个真正 FSKA Hermite/Curve（如 `Act_BookOpen_Player` 的 `Spine_1` = 89.99997、`Waist` = 90.969925、`Arm_2_L` = 44.39202）提供的是**角度**。不能统一以 radians 或 degrees 硬套两个完全不同的数据接口。

`scripts/acnh303_round38_full_native_FSKL_rest_candidate.py` 不猜测全局抵消平移，而是以 **原始 `derived/3.0.3/r35_fska_gltf/playerbody_skeleton.json` 的 46 条原生 FSKL 局部 TRS 全量替换候选 GLB 的骨骼 rest**，严格保留真实的 11 mesh、original vertex/weight/IBM BIN、三 clip 69 ch curve Buffer 不改变。这次真正通过 `RestWorld × IBM ≈ I`：

| 项目 | 原始 R36 | 新 R38 native FSKL rest |
|---|---:|---:|
| 原始 Skin joints | 46 | 46 |
| 有非零加权的关节 | 21 | 21 |
| 21 weighted joint 最差绑定姿态误差 | **4.838181503491291** | **0.0000018496823894764702** |
| 原始 glTF BIN（vertices, IBMs, animation values） | SHA 源 | **全字节保持** |
| 另外 11 个无顶点权重的辅助关节 | 仍可能非单位 IBM | **尚未解决，不能据此归为主蒙皮错位** |
| 真实 Nintendo ACNH Runtime pose / Renderer | 缺失 | **缺失** |

真实 CI 成功 [#38689320998](https://github.com/969981/ACNH_Resources/actions/runs/38689320998)；完整 source 46 bones 对照 `derived/3.0.3/r38_fskl46/real_native46_rest_21_weighted_IBM_gate.json`。实验 GLB 独立发布：
[原始 46 FSKL Rest 修复版 GLB Release](https://github.com/969981/ACNH_Resources/releases/tag/acnh303-r38-original-46FSKL-native-rest-21IBM-20261015)
，实际 SHA256 `7f65c20b8ef115ff08225ed55498c58f2308a0d681d1e82b45ba991ff4b9a083`，**没有覆盖原始 R36 SHA**。

## 3. BookOpen Player 的 Blender NLA 非关键帧骨骼状态污染是另一个独立问题

真实 Blender 4.0.2 重新执行源 R36 [#38688764909](https://github.com/969981/ACNH_Resources/actions/runs/38688764909)，结果 `derived/3.0.3/r38_nla_order/real_Blender_track_order_and_bone_matrices.json`：

- `Act_BookOpen_Player_Armature` NLA 实际只有 **15 个骨骼**动作通道：躯干、手臂、颈/头，不包含 `Waist`、`Leg_*`、`Ankle_*`、`Toe_*`；
- NLA strips 为 `REPLACE` + `HOLD`；
- 首次从新 Blender import 切换到 BookOpen 第 0 帧，`Toe_L` Blender 原始坐标 `[0.909518957,-0.684734583,0.410020947]`；
- 先播放 BookRead 第 15 帧再回 BookOpen 第 0 帧，`Toe_L` 变为 `[0.902931988,-0.673874259,0.407568753]`；即 **同一 BookOpen clip、同一时间、同一模型的无关键帧脚趾随之前播放过的 clip 改变**。

因此，这种连续切换 NLA track mute 的测量并非干净独立的单动画评价，除了已经证实的 bind-rest 源本身问题，也存在 Blender NLA 输出的未覆盖轨道状态继承风险。后续每 clip 应在 fresh import/canonical native 46-rest pose 下各自单独求值，不应把 BookRead 历史姿态混进 BookOpen 的原生对照，也不应以修好绑定后就声明动作一致。

## 4. AAL Bgm_Base 参数已传入下一级原生函数，但 FileOpen 仍需真实验证

原始 ELF SHA `83970061788f10049e2e60d687571b8dc87e5014521889ac4611a7f6b9c6e180`。上一段：

```asm
0x290F258  ADRP X8, ...      ; Bgm_Base original
0x290F25C  ADD  X8, X8, #0xDB9
0x290F260  STP  X20,X8,[SP,#0x30] ; name ptr at SP+0x38
0x290F278  BL   0x373167C
```

R38 真正继续钉到 `0x373167C` 内部：

```asm
0x37316E4  LDR X8, [X1,#0x18] ; exact Bgm_Base ptr
0x37316F0  STR X8, [SP,#0x98] ; forwarded in outgoing packet
0x37316FC  BL  0x3E45184
```

下一级真正原生 `0x3E45184` 入口读取 `x1` packet，执行对象字段 `[x21+0xA8]` 和多项间接 `BLR X8` 虚函数调用，还存在直接 `BL 0x3E44830` 以及 libc/模块导入跳板样式的 `0x3F0*` BL。真实 ELF 反汇编和下一跳上下文在 `derived/3.0.3/r38_aal_hop2/real_native_aal_bgm_name_second_callee_graph.json`，[成功 CI #38688827209](https://github.com/969981/ACNH_Resources/actions/runs/38688827209)。

注意这条结构更接近**复杂资源/对象生命周期处理**的可能，而不是可以立即命名为 `FileOpen` 的单个导出函数。静态间接 BLR 目标和运行时的 AAL 读取并未证实，必须以真实游戏进程中包含 FileOpen/Read/Buffer pointer 的只读日志闭环。

## 5. 未关闭项与 R38/下一轮工作

1. 对 R38 SHA `7f65c2...` 46-root-rest Candidate 的所有 93 帧，在真实 Blender 重新导入和独立 action isolation 后验证，尤其 `BookOpen` 的根、腿、脚和手腕曲线。**不要复用旧 R36 数值作为新版结论**。
2. 将改前和改后可比较的 animation skinned vertex BBOX/weighted joint world quaternion 录入新报告，但不要没有 Native 実机玩家 frame 的情况下写出游戏逐帧一致。
3. 对 AAL `0x3E45184`、`0x3E44830` 和相关间接函数追对象来源、文件流资源工厂；若没有运行时只读追踪，不应报告 `AAL Stream FileOpen` 已证明。
4. 18 条 OneRoom 已恢复 18/18 真正名称，下一步需求是具体 DLC 的完整 BWAV 字节 + SHA，不是再猜资源名。
5. 873 全量真实音频文件已读 SHA、物理采样数据和通道边界，需要真正 PCM 解码和游戏混音验证才是另一个独立层级。


## 6. 补充已完成：修复版 46 FSKL 骨骼已做 Blender 93 原始帧真正复测

修复版 `PlayerBody_46_native_FSKL_rest_21_skin_IBM_gated.glb` 原始 SHA256 `7f65c20b8ef115ff08225ed55498c58f2308a0d681d1e82b45ba991ff4b9a083`，由 Blender 实机以三个原生 FSKA 片段分别导入（29 / 31 / 33 帧，共 93 帧 × 46 joint），再同本候选 glTF source pose 的 pairwise distance 对比。成功 Actions [#38689604313](https://github.com/969981/ACNH_Resources/actions/runs/38689604313)，完整数值：`derived/3.0.3/r38_fixed_blender/real_native46_93frame_gltf_vs_Blender.json` 与 `real_native46_Blender_all_93_joint_frames.json`。

| Source clip | R36 原候选全帧最坏 P95 模型距离 | R38 修复版全帧最坏 P95 距离 | 修复后第 0 帧 P95 |
|---|---:|---:|---:|
| `Act_ArrangeRemoveFtrHigh` | 0.561852 | **0.562351** | 0.000001916 |
| `Act_BookOpen_Player` | 3.309805 | **0.761763** | 0.117266 |
| `Act_BookRead_Player` | 0.044070 | **0.045218** | 0.000001393 |

重点：`BookOpen_Player` 最坏帧 P95 误差下降 **约 76.98%**，第 0 帧由约 3.296441 降至 0.117266（约 **96.44%**）。因此，原生 FSKL Rest 四元数修复明显改善 BookOpen 核心问题，但 **ArrangeRemove/BookOpen 动画中间帧仍然远非数值一致**。不能因为本候选静态 Rest×IBM 误差接近零，就假设带动作/插值/未覆盖 NLA bone rest 的动态位置也一致。

另：此数值只比较 **同源候选 GLB 的数学 pose evaluator 与 Blender NLA import**，既非独立的原生 ACNH 游戏姿态，也未提供真正逐像素、shader 和 DLC 衣物骨骼附着的 Nintendo parity。待实机真实捕获前把 Native-versus-Blender 标记 **OPEN**。

## 7. 推荐下一步细分任务

- **P0**：把三个片段分别 fresh-import 到 Blender、每个 clip 复位 pose/rest 并单独激活，不复用前一个动作的 HOLD/NLA 状态；分离 `未动画骨骼的默认 Rest` 与 `源 FSKA 自带 BaseData（特别 BookOpen Waist/Leg 缺乏曲线的骨骼）`。
- **P0**：`ArrangeRemove` Frame 1..27 和 `BookOpen` 最大差异帧的 per-joint world local quaternion、scale 与 mesh-skin CPU deformation 分层检查。防止把源 GLB 值、Blender importer retarget 和 FSKA 游戏原生求值混成一层。
- **P1**：AAL `0x3E45184` / `0x3E44830` 的场景对象和 vtable BLR 静态/实机实例解引用，寻找真实 `Sound/Resource/Stream` 实际文件打开，而不是把通用资源调用误命名 FileOpen。
- **P1**：18 条 OneRoom 的外部实际 BWAV 数据源优先从原始 DLC/附加资源映像验证；已有原始名称及 AMTA 内嵌哈希不必重跑名称猜测。

## 8. 真正查实的第二项误差：Blender 24 FPS 导入 vs 源 glTF 30 FPS

原来 Blender 运行前未设置 FPS，真实 NLA Strip 帧结束分别为 23.400002、25 和 26.600002；它们由三个源 FrameCount（28、30、32）按 1 + FrameCount×24/30 严格换算得来。在此情况下脚本仍用源帧 frame+1 与 glTF math（frame/30）比较，会比较**不同实际时间点**。

修复为在 `bpy.ops.import_scene.gltf` **之前**设置 `scene.render.fps=30; fps_base=1.0`。不在导入后调整时间轴。

真修复源 46-FSKL Rest GLB、30FPS、93 帧的成功 [Actions #38689822082](https://github.com/969981/ACNH_Resources/actions/runs/38689822082)：ArrangeRemove 最坏 P95 **0.000002486413**、BookRead **0.000002098885**、BookOpen **0.119189862**（仍需复位未键控骨骼）。见 `derived/3.0.3/r38_fixed_blender/real_native46_93frame_gltf_vs_Blender.json`。

保留错误 Rest 的 R36 原 GLB 在 **相同真实 FPS30** 下：[Actions #38689826232](https://github.com/969981/ACNH_Resources/actions/runs/38689826232)，ArrangeRemove 最坏 P95 **0.000002544360**、BookRead **0.000002071758**、BookOpen **3.299765956**。故 BookOpen 问题还需要 full native FSKL Rest 修复。两个互不替代的根因都已经通过独立原件、来源和 Blender 数据复现：

- **FSKL 静态默认骨骼旋转**：原生 FSKL 是 radians，旧 GLB 保留的非奇异 TRS 将数值当作 degrees，致 21 个 Skin-weighted 骨骼 Rest×IBM 最大误差 4.838，46 Bone 原生 TRS rebuild 后降至 1.85×10^-6。
- **Blender 导入 FPS**：默认 24 而源时间轴 30，导致所谓 FrameN 跨不同秒数；统一为 30FPS 后两条包含 27 动画骨骼的动作最坏 P95 降至浮点误差量级。

剩余 BookOpen P95 ~0.119 和 NLA HOLD 的未覆盖腰腿骨继承应继续做 action 独立 rest 复位；源 GLB 与 Blender 数值一致性仍然不能替代 Nintendo 原生 game runtime capture。

## 9. 最终控制实验：强制 Pose Basis 归零失败，Fresh Import 也无法消除 BookOpen 剩余差异

实验一：`tools/r38-blender/full_pose_native46_reset.py` 强行将每个骨骼的 `matrix_basis` 置 identity，实际 93 帧最坏 P95 变为 Arrange **9.639**、BookOpen **6.655**、BookRead **8.273**，显著恶化。它证明 Blender 导入后的 Rig Pose Basis 不能随意改写以达到所谓“归零”；此方案是**失败实验，不可作为正式修复**。其测试 JSON 保留在 `derived/3.0.3/r38_reset_blender/`，成功的 CI 只代表记录了真实数值，不代表误差门槛通过。

实验二（更可靠）：`tools/r38-blender/fresh_native46_by_clip.py` 对三个 source action **分别重新从已发布 SHA 的 GLB 导入**、设 30fps、各自只有一条 NLA track 开启。93 帧真实对照结果 `derived/3.0.3/r38_fresh_blender/real_native46_93frame_gltf_vs_Blender.json`，成功 CI [#38690419858](https://github.com/969981/ACNH_Resources/actions/runs/38690419858)：

- Arrange 29 帧：最差 P95 `0.000002486413`。
- BookRead 33 帧：最差 P95 `0.000002098885`。
- BookOpen 31 帧：最差 P95 **`0.119189862`**，与未重新导入时完全相同。

**结论**：BookOpen 的剩余偏差不只是前一个 Action 的 NLA 状态残留，fresh import 仍复现，因而需要从骨骼默认变换、源 FSKA `BaseData`、glTF 模型 Rest 和 Blender armature import 的处理分支入手。不得继续归咎“历史 HOLD”并自行声称闭合。

实际完整修复版 46 FSKL rest + fresh Blender 的 `scripts/acnh303_round38_fixed46_fresh_outlier.py`、[成功 CI #38690579047](https://github.com/969981/ACNH_Resources/actions/runs/38690579047) 和 `derived/3.0.3/r38_fixed_fresh_outliers/source_GLTF_to_Blender_per_bone_difference.json` 已经确定第 0/15/30 帧主要差异骨骼：

- `Nose02`、`Nose01`、`Nose00`：平均其他 45 关节距离差在约 **0.073～0.076**；
- `Leg_2_L`：约 **0.049～0.051**；`Leg_2_L_Sub`、`Leg_2_R`、`Hand_L` 等还有残差；
- 最差成对差异示例：`Hand_L` ↔ `Leg_2_L` 第 0 帧约 **0.22662** 模型单位；
- Arrange/BookRead 的 same-source per-joint outlier 则大致是 (10^{-6}) 量级。

这将下一轮动作侧重点明确收窄到 **BookOpen 未建动画通道的子骨骼 Rest/BaseData、附属 Nose/Bag 的 source default** 及 Blender glTF import 静态转换，不必再次重复全 46 骨骼 Rest/IBM 修复。仍需真实 Nintendo 3.0.3 Runtime 采集才能验证原生动作 parity。
