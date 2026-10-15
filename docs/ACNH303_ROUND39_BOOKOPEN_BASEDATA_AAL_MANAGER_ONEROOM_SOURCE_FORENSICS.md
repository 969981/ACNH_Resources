# ACNH 3.0.3 R39：BookOpen 缺失 Curve 的 BaseData、AAL Manager 下一跳、OneRoom DLC 外部 BWAV 来源

研究分支：`feat/acnh303-round39-bookopen-aal-oneroom`，基线分支 `feat/acnh303-round38-native-animation-aal-stream-closure`。2026-10-15。保留 `3.0.3` 主分支和 R36/R38 原候选不动。

## 1. 源证据摘要及严格的结论级别

本轮建立三个真正独立的源头：

- 原始 46 骨骼 FSKL Rest + IBM 门槛已通过的 R38 GLB，SHA256 `7f65c20b8ef115ff08225ed55498c58f2308a0d681d1e82b45ba991ff4b9a083`，原 11 网格 / 21 加权关节 / 69 条动画通道；
- 原始 FSKA Hermite JSON `derived/3.0.3/r35_fska_gltf/player_hermite_curves.json`，包含实际 `Act_BookOpen_Player` 的 `BaseData`、`FlagsRotate=EulerXYZ`、`FrameCount=30`；
- 原始 ELF SHA256 `83970061788f10049e2e60d687571b8dc87e5014521889ac4611a7f6b9c6e180`、原始 `Bgm_Base.bars` SHA256 `b2a7131f6de904a8c381b25f1c890797ea09075c93c5b0c366833f45656c9a5c`、873 全原件字节 SHA / 18 真 OneRoom AMTA 名称的 R38 闭合报告。

所有源报告与 CPU/Blender/原生 AArch64 反汇编为本分支新增；**没有声称采集过游戏运行态 pose、文件句柄、AAL PCM 或 DLC 18 个真实音频 Blob。**

## 2. BookOpen：具体原因已由源 FSKA 和 Blender 数值定位并修复候选

`Act_BookOpen_Player` 原始有 **57 条 BoneAnim**，其中 **42 条无 Curves**；实际 PlayerBody 46 joints 中，**23 条带 BaseData、却完全没有曲线**。先前 R36/R38 的 GLB 导出器只枚举 `Curves`，因此存在缺失的动画常量姿态：

| 源骨骼 | 原始 BaseData | 旧 BookOpen GLB |
|---|---|---|
| `Skl_Root` | Translate=[0,4.791373,0] | 缺少 translation channel（R38 全局 Rest 4.84） |
| `Waist` | Rotate=[90.969925,-0.39379057,-90.01008] 度 | 无 rotation channel |
| `Leg_2_L` | Translate=[1.94,0,0]、RotateZ=-9.940994° | 无 animation channel |
| `Leg_2_R` | Translate=[-1.94,0,0]、RotateZ=-9.944655° | 无 animation channel |
| `Toe_L` | RotateZ=90° | 无 animation channel |
| `Ankle_L` | RotateZ=13.252191° | 无 animation channel |

`BaseData.Scale=0;0;0` 在多条无曲线 BoneAnim 中出现，**不能把它当成真实零尺度**；因此新测试只新增已有可信值中的显式非零 Translate 和 EulerXYZ 度→Quaternion Rotate 常量通道，原模型顶点权重、IBM、原始 69 通道和原始 glTF BIN 前缀保持逐字节不变。

R39 的原件生成程序 `scripts/acnh303_round39_bookopen_base_candidate.py` 输出**两个独立原始 FSKA 假设**：

- `root_only`：只补 `Skl_Root` 的 `Translate`，BookOpen 15 → **16 channels**。新 GLB SHA256 `0887c0bef71d0937cb043a24da4077107279a6540eb401f986789df6bd22a42d`。
- `all_native_bases`：针对所有原始 Curve-empty 匹配关节的非零 BaseData，加 **20 个**常量 Rotate/Translate channels，BookOpen 15 → **35 channels**（整个 GLB 69→89）。新 GLB SHA256 `3b72c9384bf7f8f1e7bac4ca48555bc6119b94c8eb89a1c76b2d24e8eb596366`。

成功原始 SHA/Blender 31 帧验收 [Actions #38691664534](https://github.com/969981/ACNH_Resources/actions/runs/38691664534)，报告：
`derived/3.0.3/r39_bookopen_basedata/original_BookOpen_2_native_BaseData_source_hypotheses.json`、
`root_only_source_vs_Blender_31_frame_numeric.json`、
`all_native_bases_source_vs_Blender_31_frame_numeric.json`。

| 方案 | 实际独立 31 帧×46 骨骼 Source glTF vs Blender 最差 P95 距离误差 |
|---|---:|
| R38 46-FSKL Rest 修复原版 | ~0.11919 |
| `root_only` | 0.09940775908191313 |
| **`all_native_bases`** | **0.0000022236200654113247** |

全 BaseData 方案在 Blender 与 glTF 数值求值之间已降到真实浮点精度误差量级，使三条原始示例动画均能以不同 FSKA 正确复现 glTF 内本身的数据流；从问题定位层面，**真正缺失的是将 source FSKA 的 Curve-less BaseData 写成静态动画键轨道**，而非再次修改 Rest/IBM 或强制 Blender Pose Basis 清零。

另做负例 `tools/r39-bookopen/surgical_unkeyed.py` / `scripts/acnh303_round39_bookopen_quant.py`，真实 Blender 单独对 BookOpen 31 条未键控骨骼强制 `matrix_basis.identity()`：P95 反而从 ~0.123 增至 **5.796**，证明普通强制归零不是正确恢复 Blender Imported Rest 的方法。[真实负例 Actions #38691089947](https://github.com/969981/ACNH_Resources/actions/runs/38691089947)。

**不等于原生游戏语义已经完全证明**。我们没有原生 AAL/FSKA animation evaluator 的动态记录；源 FSKA BaseData 是否对所有无 Curve 骨骼在 Nintendo Runtime 默认生效，仍需实机逐帧只读验证。仅声称本轮修复候选的源值、源码中 Buffer 的完整性和实际 Blender 求值。

## 3. AAL：原生对象管理与音频文件 I/O 的证据必须分开

代码 `scripts/acnh303_round39_aal_manager_xrefs.py`、原始机器码报告 `derived/3.0.3/r39_aal_manager/original_manager_vtable_and_path_native_code.json`，[成功原始 ELF CI #38691230269](https://github.com/969981/ACNH_Resources/actions/runs/38691230269)：

```asm
0x290F258  ADRP X8, Bgm_Base@PAGE
0x290F25C  ADD  X8, X8,#0xDB9    ; real VA 0x3FFADB9
0x290F260  STP  X20,X8,[SP,#0x30]
0x290F278  BL   0x373167C

0x37316E4  LDR  X8,[X1,#0x18]    ; real Bgm_Base ptr
0x37316F0  STR  X8,[SP,#0x98]    ; packet
0x37316FC  BL   0x3E45184

0x3E451E4  LDR  X8,[X21,#0xA8]   ; actual object member
0x3E451F8  LDR  X8,[X8,#0x20]    ; vtable slot
0x3E451FC  BLR  X8
0x3E45214  LDR  X8,[X8,#0x28]    ; another vtable slot
0x3E45218  BLR  X8
0x3E45248  LDR  X1,[X19,#8]      ; related, different packet
0x3E45250  BL   0x3E44830
0x3E44858  LDR  X8,[X20,#0x18]
```

另外 `Sound/Resource/` 真字符串另有 ELF 引用 `0x28D66F0`、`0x28D6DB8`；它们只是**独立的路径构造/处理候选线索**，尚未用实际对象或寄存器证明必定与 `Bgm_Base` 调用存在一条唯一的共同 FileOpen 路径。

`scripts/acnh303_round39_bgm_caller_tail.py`、`derived/3.0.3/r39_bgm_caller/real_original_three_native_BgmBase_caller_dispatches.json` 和 [成功 CI #38691786769](https://github.com/969981/ACNH_Resources/actions/runs/38691786769) 又核验了初始引用周边三个真实独立 BL：

- `0x290F278 -> 0x373167C`；
- `0x290F2B0 -> 0x3E107E0`；
- `0x290F2F0 -> 0x3AE4980`。

第二、三分支包含虚表间接调用/原生业务函数，但**尚不能认定它们打开文件**。需要匹配真实 3.0.3 ELF、真实游戏实例 RVA、对象 `X21+0xA8`、实际 vtable 目标、完整路径字符串和底层 Read/Buffer 的只读运行记录，才能将某一节点命名为 FileOpen 并证明 BARS→Stream→PCM。

## 4. OneRoom：明确的外部数据来源边界

R38 从本体 `Bgm_Base.bars` 原始 AMTA 已恢复全部 18 个 `BGM_OneRoom_*`，与每条 CRC32(name) 精确匹配；原始主 RomFS 的 103,400 文件中无对应独立 `Sound/Resource/Stream/BGM_OneRoom_*.bwav`，因此源头调查应该转向**独立附加内容的实际资源清单**，不能再凭空构造文件名/字节。

任天堂官方确认 `Animal Crossing: New Horizons – Happy Home Paradise` 是另外购买或下载的 DLC，需要下载才可访问，[Nintendo 支持说明](https://en-americas-support.nintendo.com/app/answers/detail/a_id/57010/p/1076/c/950)。相关原生名称 `Edit_Facility`、`MainField`、`LookingForHouseSharePartner` 与 `Happy Home Paradise` 的内容语义一致，但这仍**不证明** 18 个 Stream 的实际 NCA、目录或路径。公开音乐网站存在合法音乐曲目列表甚至重新转换的 BWAV 文件，也**不能当作 SHA 匹配的原始本体/DLC 源文件**。

`scripts/acnh303_round39_oneroom_missing_source_manifest.py` 对源 18 个 CRC 的 codec、采样率、采样数量、实际 short header sha 及所有主 RomFS 路径做一一核对；生成的 `derived/3.0.3/r39_oneroom/18_original_AMTA_stereo_native_header_and_missing_external_file_manifest.json` 是用于今后核对合法的、使用者自有 DLC 资源导出的验证清单。DLC 完整音频 Blob、FileOpen/Read/Decode 及 SHA 均无独立来源证明时，状态必须是 **SOURCE_MISSING**，不得填写 `decoded_pcm=true`。

## 5. 状态与后续唯一验收

| 目标 | 真实已完成 | 未闭合 |
|---|---|---|
| BookOpen | 源曲线遗漏 BaseData，+20 通道候选 31 帧×46 骨骼误差 2.22e-6 | 原生 ACNH 游戏 3.0.3 同一 frame pose、Native Euler/BaseData 语义验证 |
| AAL | 原始 Bgm_Base 字符串链→0x373167C→0x3E45184、BLR vtable、相邻 3 个 BL 入口 | 真实实例的对象工厂、vtable 目标、`Sound/Resource/Stream` 文件打开、I/O 与 PCM |
| OneRoom 18 | 18/18 原生 AMTA name + CRC 精确匹配、源 BARS 192-byte BWAV header | 外部合法 DLC Source RomFS、实际 18 个完整 BWAV bytes 与 SHA、stream decoder 验证 |
| 其他 873 | R38 全部 1,724,328,411 原始音频字节、CRC、Git Blob SHA、BWAV header + sample payload 通过 | Native 播放和全 PCM 解码是另一独立层级 |

所有结果保留在独立研究分支，不合并 `3.0.3`，不夸大动态实机原生一致性。

## 6. R39 真实完成的独立 GLB Release（与 R36/R38 原件隔离）

两种 source-FSKA-BaseData 候选 GLB 已经由 [成功的验证 #38691664534](https://github.com/969981/ACNH_Resources/actions/runs/38691664534) 生成、完成 30fps 的 Blender 骨骼 31 帧测试，并由单独工作流 [#38692003559](https://github.com/969981/ACNH_Resources/actions/runs/38692003559) 从成功 Actions 的源 GLB bytes 下载并 **二次 sha256sum**、验证全部结构元数据后，发布为独立 Experimental Pre-release：

[下载 R39 BookOpen 原始 FSKA BaseData 两种候选 GLB 和全部对照报告](https://github.com/969981/ACNH_Resources/releases/tag/acnh303-r39-FSKA-BookOpen-BaseData-constant-GLBs-20261015)

- `PlayerBody_BookOpen_FSKA_BaseData_root_only.glb`：SHA256 `0887c0bef71d0937cb043a24da4077107279a6540eb401f986789df6bd22a42d`；
- `PlayerBody_BookOpen_FSKA_BaseData_all_native_bases.glb`：SHA256 `3b72c9384bf7f8f1e7bac4ca48555bc6119b94c8eb89a1c76b2d24e8eb596366`。

实验 GLB 仅属 glTF 重建和 Blender 数值正确性，绝非官方源模型/原生求值器等价证明。后续 exporter 正式化不能简单把所有 `BaseData.Scale=0` 当作有效零比例：R39 测试是刻意避免零比例破坏、只对非零真实 BaseData 填补曲线外的静态轨道的可验证受控实现。

## 7. OneRoom：源头范围实测补充与 18 条原生样本指纹

[真正通过的完整目录+源头验证 Actions #38692009193](https://github.com/969981/ACNH_Resources/actions/runs/38692009193)，数据路径：
`derived/3.0.3/r39_oneroom/18_original_AMTA_stereo_native_header_and_missing_external_file_manifest.json`。

- 真实遍历源游戏主 RomFS 的 **103,400** 个文件、`Sound/Resource/Stream` 的 **1,146** 个完整版 BWAV 和 Sound 目录原始 **1,696** 个 BARS；
- 18/18 缺失的 `BGM_OneRoom_*.bwav` 均已在 `Bgm_Base.bars` 原始 192 字节 Short BWAV header 中确认 **stereo (2ch)、48,000 Hz**、codec ID 1，全部已提供每声道 `nonprefetch_samples`、short member SHA256、真实 AMTA 字符串、CRC；
- 18 条按**各首时长相加**是 1,100.525125 秒（约 18 分 20.525 秒；不代表无重叠地一次播放），单条最短约 12.861 秒，最长约 98.326 秒；
- 原始本体资源确有其它 OneRoom 相关文件，例如 `Sound/Resource/Stream/Radio_CM_OneRoom_00.bwav`、多个 `OneRoom_ThemeName` 多语言 BDLI 和家具模型。这说明**不能粗暴表述“本体不含任何 OneRoom 音频/内容”**；欠缺的是确切这 18 首命名的外部完整文件；
- 能在现有主 RomFS 排除 18 个明确路径，却仍无法证明这些实际音频的 DLC NCA ID、文件路径与加载顺序；需真实外部资源包或动态 AAL I/O 才能判明最终完整来源。

当且仅当用户合法拥有完整外部 DLC 音频资源数据，可运行 `scripts/acnh303_round39_verify_user_oneroom_full_bwav.py` 把实际原始 `*.bwav` 文件与上述 18 条 Original Short BWAV headers 逐声道比对，并记录真实文件 SHA256（不拷贝完整版权音频到报告）：

```bash
python scripts/acnh303_round39_verify_user_oneroom_full_bwav.py \
  --manifest derived/3.0.3/r39_oneroom/18_original_AMTA_stereo_native_header_and_missing_external_file_manifest.json \
  --source-root /path/to/legitimately-provided-original-dlc-romfs \
  --out r39_real_one_room_full_source_evidence.json \
  --strict
```

没有真实文件时必须明确 `EXTERNAL_ORIGINAL_FULL_BWAV_NOT_SUPPLIED`；若仅有音频转换后的 BWAV/BRSTM/WAV，不能作为原始 Nintendo 源地址、文件 SHA 或底层 AAL 读取的证明。这个校验程序不负责 DLC 破解/解密、下载或转换。

## 8. 正确的剩余研究优先级

1. **Native animation evaluator**：对正式 candidate (3b72c938...) 的 `BookOpen` 在真实 3.0.3 Nintendo 游戏进程里只读记录骨骼局部矩阵、原始 frame/time、Waist/Leg 和 Skl_Root BaseData 应用顺序，确认“没有 Curve 的 BaseData 由原生 Native 默认施加”这一**当前仍未证明的关键语义**。
2. **AAL 源音频 I/O**：对 `0x373167C` → `0x3E45184` 调用点、`X21+0xA8` 对象实例和 `0x3E451FC/0x3E45218` 虚表目标，只读实机跟踪到被请求的真实 `Sound/Resource/Stream/...` 路径、文件读取偏移与最终 payload，最后与原始 873 个文件 SHA/hash/采样头比对。不能因为三个 BL 或虚表址接近就称其为 FileOpen。
3. **OneRoom 原始外部文件**：当前已完成 18× CRC/AMTA/short BWAV/样本数量/时长清单，但必须有真实合法外部媒体的字节（或具名官方档案），才能断言 DLC 资源路径、source SHA、decoder/audio mixing。已有原始主游戏文件不足以关闭这一问题。
