# ACNH 3.0.3 R40 — 实机原生动画 / AAL 音频 I/O / OneRoom 外部来源的证据链与硬门槛

> 范围：R40 `feat/acnh303-round40-runtime-animation-aal-audio-provenance`，继承 R39。2026-10-15。**这是一轮可执行验证器、调试器采集入口及真实缺失状态检查，不是声称已经拥有实机日志。** 既有 R39 GLB/原始 ELF/完整 873 Stream SHA 已验证；不重复静态名称匹配。

## 1. 当前实际拥有的输入及不能替代的输入

| 输入 | 真实状态 | SHA/依据 |
|---|---|---|
| ACNH 3.0.3 ELF 原件 | 有，R39 已用原始机器码定位 AAL | `83970061788f10049e2e60d687571b8dc87e5014521889ac4611a7f6b9c6e180` |
| R39 PlayerBody 46 FSKL Rest +20 FSKA BaseData GLB | 有，保留 11 Mesh / Original IBM / 69 既有通道，补 20 BookOpen 常量通道，Blender 31 帧 P95 ~2.22e-6 | `3b72c9384bf7f8f1e7bac4ca48555bc6119b94c8eb89a1c76b2d24e8eb596366` |
| 873 已存在原始 Stream BWAV 来源 | 有，1,724,328,411 原始文件字节，每个 SHA256 与 native header 已核对 | `derived/3.0.3/r38_stream_all/873_exact_original_byte_native_header_audit.json` |
| 18 条 OneRoom BARS/AMTA 短头、CRC、codec、samples | 有，原始 RomFS 共 103400 路径无法匹配 18 条完整外部文件 | `derived/3.0.3/r39_oneroom/18_original_AMTA_stereo_native_header_and_missing_external_file_manifest.json` |
| 真实 Switch 上原生 3.0.3 正在运行的骨骼姿态 | **未提供，不存在可核验的该输入** | `NOT_CAPTURED` |
| 真实 AAL/文件系统打开—读取—关闭的同一会话原始日志 | **未提供** | `NOT_CAPTURED` |
| 18 个合法取得的完整原始 OneRoom BWAV / DLC 资源 | **未提供** | `SOURCE_MISSING` |

**禁止**用 Blender 93 帧当作原生帧；用 `BLR` 指令当作文件打开；用 OneRoom 的 Short BWAV 192-byte Header、猜测音轨名称、其他 OneRoom 电台音频或重新转换的 WAV 当作这 18 个真实版权文件。

## 2. R40 三输入严谨验收程序

`scripts/acnh303_round40_runtime_evidence_gate.py` 读取以下输入：

- `--source-873`：上方 873 原始 SHA report，**必须**包含 873 个不同路径，总审计字节 1,724,328,411；
- `--r39-glb`：R39 Release 原件 `PlayerBody_BookOpen_FSKA_BaseData_all_native_bases.glb`，SHA 必须严格一致；
- `--capture`：仅当真实设备采集后才能提供，schema `acnh303-r40-external-read-only-game-session-v1`；
- `--observer-raw-log`：真实调试器/目标主机采集的原始日志文件，**SHA256 必须等于 `capture.provenance.observer_raw_log_sha256`**；没有它不能接受仅自报的一份 JSON；
- `--oneroom-source-audit`：R39 用户合法来源音频文件 validator 输出的 18 条具体结果；
- `--out`：输出只包含 JSON 元数据与误差，不存储原始版权声音和角色储存数据；
- `--require-live`：严格模式；任何一项缺失必须 **非零返回码**，不产生“全部通过”假结论。

未提供运行时输入时，此工具**实际会运行并生成合法的拒绝状态**：

```bash
python scripts/acnh303_round40_runtime_evidence_gate.py \
  --source-873 derived/3.0.3/r38_stream_all/873_exact_original_byte_native_header_audit.json \
  --oneroom-source-audit derived/3.0.3/r39_oneroom_verified_source/18_external_original_full_BWAV_NOT_PROVIDED_negative_control.json \
  --out derived/3.0.3/r40_acceptance/runtime_animation_aal_audio_actual_input_status.json
```

预期且正确的状态：

```text
pose.status = NOT_CAPTURED
aal_IO.status = NOT_CAPTURED
OneRoom_full_source.status = SOURCE_MISSING_OR_PARTIAL
OneRoom_full_source.matching_full_files = 0
native_animation_all_93_frames_claim_allowed = false
native_AAL_FileOpen_Read_Close_trace_claim_allowed = false
OneRoom_18_external_full_file_claim_allowed = false
independent_game_hardware_attestation_available = false
```

`--require-live` 必须直接返回失败；这是**真实源输入未到位**，不是程序异常或要用虚构 trace 绕过的门槛。

## 3. AAL：真正可用的可选只读采集入口，不冒充 FileOpen

已增加 `tools/r40-runtime/lldb_aal_probe.py`。必须有使用者自有设备、允许调试的游戏进程、可用的 ARM64 LLDB Remote Debugger，先实际连接并验证该运行版本的 ELF SHA、`main` 模块加载基址。**当前环境没有连接 Switch、也没有一个可以执行该探针的原生 ACNH 进程。**

在调试器中按自己的真实模块基址启动：

```text
command script import /path/to/ACNH_Resources/tools/r40-runtime/lldb_aal_probe.py
acnh-r40-aal <observed_main_module_base_hex> <actual_observer_log.ndjson>
```

这里的两个 `<...>` 均须来自真实设备配置，不存在可通用的虚构常量。脚本使用 LLDB `BreakpointCreateByAddress` 及 `SBProcess.ReadMemory`、寄存器读取，仅在目标函数读取/记录，**不写游戏资源/存档**；但普通断点仍会短暂停止线程，改变观测时间，不能称为无侵入的 trace。脚本没有经过连机联调，不声称已经能够在目标机完成采集。

源 3.0.3 RVA 调用点严格固定：

| RVA | 观察对象 | 能够证明的最低层事实 |
|---|---|---|
| `0x290F278` | 首个 `Bgm_Base` 源请求，`X1+0x18` 指向字符串 | 实际注册时调用寄存器 |
| `0x37316E4` | `LDR X8,[X1,#0x18]` | 名称指针被真实读取 |
| `0x37316FC` | `BL 0x3E45184` | 向下一级真实对象传递 |
| `0x3E451FC` | 第一 `BLR X8` | 虚表偏移 +0x20 的**运行时目标地址** |
| `0x3E45218` | 第二 `BLR X8` | 虚表偏移 +0x28 的**运行时目标地址** |
| `0x3E45250` | `BL 0x3E44830` | 对象管理进一步处理 |
| `0x290F2B0` / `0x290F2F0` | 相邻两个独立原生调用 | 需要实机参数才可判断与音频 I/O 关系 |

输出 NDJSON 是**原始寄存器快照，不包含 FILE_OPEN、FILE_READ 的臆造条目**。用下述命令后处理真实快照：

```bash
python scripts/acnh303_round40_raw_aal_observer_audit.py \
  --ndjson actual_observer_log.ndjson \
  --out observed_real_AAL_register_trace_audit.json \
  --require-events
```

只有确认了真正的 `fs/nn::fs` 文件打开和读取路径、文件句柄、某一 Stream BWAV 真实完整文件的 SHA、总文件长度与真实 `Read` offset/length/buffer SHA，且它们具有**同一个 request_id、同一会话和实际顺序**，才可用 R40 `aal_runtime_events` 做 I/O 验收。即使抓到注册/两个虚表入口，仍只能标记 `EXTERNAL_DEBUGGER_REGISTERS_RECORDED_NOT_AAL_FILE_IO`。

## 4. 动画：怎样取得实际 Native FSKA Action 与 93 帧数据

`pose_capture.clips` 必须对应原本这三条源码动画：

| 原生片段 | 源帧 0..N | 必须完成的时序/矩阵 |
|---|---:|---|
| `Act_ArrangeRemoveFtrHigh` | 0..28（29 帧） | 同一个游戏 Action Instance、无其他动画混合、真实时钟和 render frame |
| `Act_BookOpen_Player` | 0..30（31 帧） | 重点逐帧查看 `Skl_Root`、`Waist`、`Leg_2_L/R`、`Ankle_L/R` 的无 Curve BaseData |
| `Act_BookRead_Player` | 0..32（33 帧） | 原生默认姿态与插值对照 |

**总计 93 帧**，至少需 3 条每片段不同的真实帧才能得到初步结果，全部 93 帧到位才允许 “full source integer frame coverage” 字段为 true。捕获动作名不能仅凭页面行为猜测，必须从原始运行时实际 Action 实例确认。

R40 按当前 46 关节原始 GLB 数学曲线，比较 15 个特别关节的两两物理距离，包括双手腕、双锁骨、双上臂、腰、颈/头、左右股/小腿和双脚踝。先拟合原生模型单位 vs glTF 单位的比例，不把 Z-up / Y-up 误当成姿态错误；确认采集的 `source_frame`、`monotonic_timestamp_ns`、`game_render_frame` 单调递增，`game_action_instance` 一段不变，且 `active_action_weight≈1`（存在动画混合时必须分别对待）。最终的重建一致性是单独于 Nintendo Shader/GPU Skinning 和画面像素一致性的更低层验收。

**关键能力缺口**：当前原始 ELF 静态资源位置和 GLB 数值转换已确定，但尚未找到可连机的“实际 46 Bone pose-buffer 当前会话读者指针”。不得从 FSKL 文件结构猜出运行时内存绝对偏移或调用假动作实例。先通过只读实机观察确定对象消费者、骨骼索引和矩阵转换，再填写 `native_joint_model_space_translation`。

## 5. OneRoom：完整原始文件只能从确实拥有的合法来源验证

继续直接使用经 R39 独立来源检验的程序：

```bash
python scripts/acnh303_round39_verify_user_oneroom_full_bwav.py \
  --manifest derived/3.0.3/r39_oneroom/18_original_AMTA_stereo_native_header_and_missing_external_file_manifest.json \
  --source-root /path/to/legally_obtained_unmodified_romfs_audio \
  --out actual_original_OneRoom_full_BWAV_report.json \
  --strict
```

执行程序不会破解/解密 DRM，不下载音轨，也不拷贝完整版权音频入 Git。只检查 18 条 Native Short-BWAV 的原始 `BGM_OneRoom_*` 名称、CRC、采样头元数据与使用者实际提供的 **full BWAV bytes**，记录 SHA。原始主 RomFS 完整目录已经排除了这 18 个同名 full 音频文件；这不等于实际文件必定在指定 DLC NCA，真实物理来源仍需另行验证。

**源路径不被找到时保留 `SOURCE_MISSING`**，不得因为其它 OneRoom 电台 BWAV、游戏 DLC 场景名称、1,696 个 BARS 文件的存在就视作 source found。R39 已完整验证 18 条 BARS Header，但 full BWAV 实际文件数仍为 **0/18**。

## 6. 结果解释：何时可以诚实宣告阶段关闭

| 层级 | 条件 | 当前 R40 |
|---|---|---|
| 源/转换数学层 | R39 的 +20 原始 BaseData 与 glTF/Blender 31 帧数值一致 | **已闭合**（P95 ~0.00000222，独立于 Native） |
| 实机动画层 | 真实原生 Action、实际 93 帧/观测时钟、原生矩阵/单位及与 R39 source 对照 | **NOT_CAPTURED** |
| AAL 对象分派层 | 原生寄存器日志映射到 `0x3E451FC/0x3E45218` 的实机虚表目标 | **NOT_CAPTURED** |
| AAL 实际 I/O 层 | 同会话 Bgm 注册→分派→FileOpen/Read/Close + 原始文件 SHA/偏移/读取缓冲 SHA | **NOT_CAPTURED** |
| OneRoom 原始外部文件层 | 18/18 真正 full BWAV 字节和 SHA + 官方来源身份 | **0/18 SOURCE_MISSING** |

最后的“实机来源”需要自有设备的操作确认、外部 Observer 原始日志和记录其 SHA，JSON 表达正确性不等于能密码学独立证实某一台真实 Switch；当前校验器明确输出 `independent_game_hardware_attestation_available=false`，避免把 user-supplied metadata 伪装为服务端官方签名。

### 关联结果和工作流

- [R39 原始 BookOpen BaseData 实验 GLB 和严格 SHA](https://github.com/969981/ACNH_Resources/releases/tag/acnh303-r39-FSKA-BookOpen-BaseData-constant-GLBs-20261015)
- `scripts/acnh303_round40_runtime_evidence_gate.py`
- `tools/r40-runtime/lldb_aal_probe.py`
- `scripts/acnh303_round40_raw_aal_observer_audit.py`
- [R40 可复核 fail-closed CI](https://github.com/969981/ACNH_Resources/actions/workflows/acnh303-round40-runtime-gates.yml)

此研究分支不合并 `3.0.3`。若没有真实游戏进程和原始 DLC 数据，本轮结论就是“已建真实采集入口和严格校验程序，原生 I/O/动画/完整音频源 **仍未闭合**”，不能因为测试程序通过就称实机采集成功。
