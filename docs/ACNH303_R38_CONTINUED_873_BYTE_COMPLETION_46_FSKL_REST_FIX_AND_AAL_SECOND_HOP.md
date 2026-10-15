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

