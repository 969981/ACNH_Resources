# R38 read-only 原生实机采集协议：动画姿态 / Bgm_Base 注册 / Stream BWAV 读取

> 本文是 **后续实机数据采集协议**，不是已经存在的实时记录，也不是对 Nintendo 原生行为的断言。分支 `feat/acnh303-round38-native-animation-aal-stream-closure`。不得把 Blender/NLA 或模拟运行的日志填进 `real_game_capture` 再宣称 Native parity 已验证。

## 1. 固定版本与原始数据

1. 文件校验：源 ACNH 3.0.3 ELF SHA256 必须为 `83970061788f10049e2e60d687571b8dc87e5014521889ac4611a7f6b9c6e180`。
2. 模型校验：候选 69 通道 GLB SHA256 `4bbb618f8bbeefacf7384a23c60160a1f9c5b55b32ecd8eb1a626819f8138ab3`。
3. 采样时校验：明确触发游戏内的 `Act_ArrangeRemoveFtrHigh`、`Act_BookOpen_Player`、`Act_BookRead_Player` 动作实例；若游戏动作系统出现 blending/interpolation/retargeting，必须同时记录权重及动作起始 frame，而不是与 Blender 同名即视为等价。
4. 只读采集：不修改游戏中的 RNG、资源、蒙皮或时间控制；确认 ELF 静态地址映射到运行时的真实 ModuleBase/RVA。区分 `source_frame`、游戏引擎 `timestamp_ns`、渲染帧号和动画片段自身的 FrameCount。

## 2. 需要提供的 Native pose 数据合同

文件为普通 JSON，**下面只列字段及类型、不是虚构的测量值**。每条记录必须来自原生运行时读数；`scripts/acnh303_round38_runtime_compare.py` 对缺失数据直接拒绝通过。

```text
schema: "acnh303-r38-real-console-pose-capture-v1"
actual_game_executable_sha256: actual exact ELF SHA as above
source_glb_sha256: actual released R36 SHA as above
capture_mode: "read_only_live_game_pose"
capture_session_id: real uniquely recorded device/session identifier
runtime_capture_instrumentation: concrete observer, version, module+RVA, memory basis
native_source_frame_joint_samples:
  - name: "Act_ArrangeRemoveFtrHigh"
    records:
      - source_frame: real integer frame
        joint_world_translations:
          Clavicle_L: [native_observed_x, native_observed_y, native_observed_z]
          Clavicle_R: [...]
          Wrist_L: [...]
          Wrist_R: [...]
          Arm_2_L: [...]
          Arm_2_R: [...]
          Neck: [...]
          Head: [...]
          Waist: [...]
          Leg_1_L: [...]
          Leg_1_R: [...]
  - name: "Act_BookOpen_Player"
    records: ...
  - name: "Act_BookRead_Player"
    records: ...
```

每个 clip 至少三帧真实 read-only 数据；建议覆盖所有源码整数帧，且额外记录原生 Hermite 使用的实际 subframe 值。先用任一 clip 的 frame0 校验骨骼名和坐标尺度，再执行全帧比较。对于 Blender ↔ glTF（而非游戏）已在 `derived/3.0.3/r38_animation_parity/` 有 93 帧独立捕获和源 GLB 数值数据供对照。

**坐标系与物理单位**：要同时捕获角色 root 的 world/model matrix、左手 wrist、脖子及两个 ankle 的矩阵，明确是否有 glTF Y-up → Blender Z-up 变换，避免把不同坐标系平移直接相减。只使用配对关节距离判断骨架内在形状时仍需要排除 blend shape、非匀速 scaling 和 skin-node 绑定位置偏移。

## 3. AAL Bgm_Base 定点取证

原始 3.0.3 ELF 中的确定性静态证据：

- literal `Bgm_Base` @ `0x3FFADB9`；
- `0x290F258` ADRP / `0x290F25C` ADD；
- `0x290F260` 保存原始名称指针至 `SP+0x38`；
- `0x290F278 BL 0x373167C`，调用前 `x1=SP+0x20`，栈参数结构内 `x1+0x18` 保存字符串指针；
- 同一名称在 `0x3749D90` 的静态表中出现 `[x10+0xa8]`。

**实机只读验证顺序**：

1. 记录命中真实 `BL 0x373167C` 时的 `PC, SP, x0..x7, [x1+0x18]` 只读快照，确认字符串实际内容、对象指针和当前 ModuleBase/RVA；
2. 基于真实函数参数值向下跟踪 `0x373167C` 实际返回值、资源对象句柄、`Sound/Resource/Stream/` 真实路径构造、FileOpen/Read/Close 的调用者和指针；
3. 用 `BGM_Radio_Jingle_Normal_03`、`BGM_MusicBox_014_Mambo`、`BGM_Indoor_Cafe` 作为已有 SHA/声道样本的对照锚，确保实际请求了同一个 stream path，不只是名字 CRC 恰好相同；
4. 再记录读取成功的实际 channel、sample_count、payload offset、实际文件 length 与 hash，区分 `AMTA` 元数据、`BWAV` 短 Header 和 `Stream/*.bwav` 全音频负载；
5. 未观察到真实 I/O 时输出 `NOT_CAPTURED`，不创建虚构文件句柄或 PCM WAV。

## 4. 18 个 OneRoom 名称与 DLC 验证

18 个以前找不到相应文件名的 `Bgm_Base` index 已从 **原始 BARS AMTA** 恢复全部名称；它们全部以 `BGM_OneRoom_` 开头并且 CRC32(name) 与索引完全对应。见 `derived/3.0.3/r38_resolved18/all_18_OneRoom_original_AMTA_name_CRC_matches.json`。

对应 18 个 `Stream/*.bwav` 原始完整音频样本仍没有在当前仓库的 103,400 RomFS 文件中定位。可能需要单独的 DLC 音频 RomFS 或运行时其他资源源；**OneRoom 指向 HHP/DLC 只是场景语义线索，不是已经 SHA 证实的音频文件所在容器**。

## 5. 完成标志

- Animation: 真实 Native 捕获通过 SHA/帧号验收 + Blender 93 帧骨骼距离对照；`BookOpen` 当前疑似模型/动作 retarget 根骨/趾部错误需要清理和重跑。Nintendo 画面 pixel parity 还需用户提供真实游戏 capture，不能拿 Blender 自己的 PNG 当 Native。
- Audio: Git 来源 CRC + 873 完整 file bytes header/payload 全通过 **和** 同一游戏会话下 AAL 实际 `FileOpen`→`Read`→sample buffer evidence，方可称加载链闭环。尚不能宣称 Native AAL 与 PCM decoder 同步验证。
- DLC: 找到 18 个原始 OneRoom 完整来源 BWAV bytes、source SHA、channel header 与 AMTA 的相互一致性，才可称 891/891 外部声音完整文件闭合。
