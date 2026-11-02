---
title: R49 原版 FMAA ShaderParam 写回与 AAL 动态目标继续追踪
tags: [acnh303, fmaa, texsrt, shaderparam, aal, gdb, runtime, evidence]
status: runtime-unverified
---
# ACNH 3.0.3 R49：材质写入与 AAL 调用返回的取证关口

> [!warning] 证据边界
> 这轮增加了真实游戏调试的**观察器和严格离线审计入口**，不是已经采到原版运行时日志。
> 直到有独立认证的 ACNH 3.0.3 会话、准确的运行时对象归属、Shader Uniform 写入与 I/O 数据关联，均保持 **NOT_CAPTURED / UNVERIFIED**。

## 已由 R45–R48 锚定的真正源数据

| 证据 | 结论 | 尚缺 |
| --- | --- | --- |
| R45 Cedar FMAA | A/B 动画每条 100 帧，原始 [0,50] 段关键帧与曲线已解码 | 超出本段的循环及真实采样节拍 |
| R46 离线样本 | A: 0→0.5；B: 0.5→0；12.5/25/37.5 帧有中间计算值 | 原版插值舍入、实际调用者 |
| R47 原始 Cedar FMAT | 八份 A/B 材质名字候选；`tex_srt0` 是 type 30、size 24 B、source buffer byte offset `0x184` | FMAA SubBind 与真实 Renderer 对象 |
| R48 静态关联 | TexSrt 内 `Translation.X` 在 +`0x10`，**源 buffer 候选**偏移 `0x194` | 该偏移**不是** main RVA、RAM VA、GPU uniform offset |
| R46 AAL 静态调用 | `main+0x3E451FC` 和 `+0x3E45218` 是 `BLR X8`，动态目标取决于 `[X22]` 虚表 `+0x20/+0x28` | 真实 X8 目标的完整被调调用链、实际文件 I/O |

R47 还发现对应目标 FMAT 参数的原始 shader uniform offset 字段是 `0xFFFFFFFF`，所以更**不能**把 `0x194` 当作目标 GPU Uniform 地址。独立轨道 `mPltTreeDeco` 尚未在这两份模型内匹配，不能把 A/B 推论泛化到所有 Cedar 对象。

## 1. FMAA：先找到真正在 RAM 中被写入的 TexSrt

**只在已经通过运行时调试独立定位**某个模型实例材质的 TexSrt 内存地址后，设置 `ACNH303_R49_TEXSRT_VA`。切勿输入文件偏移 `0x184` / `0x194`，也不能把材质的源 buffer 地址自动视作 Renderer 的 uniform buffer。

运行时关注的闭环是：

```text
FMAA AnimCurve frame/value
   -> ParamAnimInfo(tex_srt0, AnimDataOffset +0x10)
   -> 原版运行时 material lookup / bind / SubBindIndex
   -> 实际 material instance 的 24B TexSrt RAM object
   -> write watchpoint at (TexSrt object VA +0x10)
   -> 调用者 PC/LR + 24B 变更 + 真实帧计数
   -> renderer parameter upload / shader uniform / 实际 UV 移动
```

R49 `Scripts/acnh303_round49_live_observer_gdb.py` 通过 GDB watchpoint 对指定 `*(float*)(TexSrtVA+0x10)` 做**写后观察**，记录 PC/LR、24 B 原始内存及其 SHA256。可选读一个已经独立验证的 runtime float 帧指针。没有真实帧地址时记录 null，**绝不**根据消息序号猜帧。这个脚本本身没有办法发现 TexSrtVA 或证明这个指针对应何种材质；`ACNH303_R49_MATERIAL` 是实验人员给的待核对标签。

### 示例：已通过其他手段取得真实进程地址后

```bash
export ACNH303_MAIN_BASE=0xACTUAL_ACNH_MAIN_BASE
export ACNH303_ORIGINAL_MAIN_ELF=/absolute/path/to/own/original/main.elf
export ACNH303_R49_SESSION_ID=real-acnh303-unique-session
export ACNH303_R49_LOG=/absolute/path/to/r49-native.jsonl
export ACNH303_R49_TEXSRT_VA=0xACTUAL_RUNTIME_TEXSRT_OBJECT_VA
export ACNH303_R49_MATERIAL=mPltTreeDecoA
# optional, ONLY if independently verified:
export ACNH303_R49_FRAME_VA=0xACTUAL_RUNTIME_FRAME_FLOAT_VA
```

```gdb
source Scripts/acnh303_round49_live_observer_gdb.py
continue
```

一条真实数据只有在独立确认对象身份、对原版 main 版本/进程一致性和调试日志来源进行复核以后，才有资格进入下一关。即使帧 25 实测值接近 0.25，也只是**有可复核的候选一致性**，不能单凭数值断定原版 FMAA 绑定或 GPU 纹理移动。

## 2. AAL：从原始 BLR X8 到候选返回值/缓冲区

先执行 [[ACNH303_ROUND46_TEXSRT_AAL_NATIVE_VTABLE]] 中的 R46，取得真实 `X8` 目标 VA；再执行 [[ACNH303_ROUND47_CEDAR_FMAT_AAL_TARGET_IO_EVIDENCE]] 中的 R47，核对同一 session 的目标入口字节。R49 只允许手工输入刚观察的候选 `X8 - MainBase` RVA，**不假设任何一个就是 FileOpen/Read/Close**：

```bash
export ACNH303_R49_TARGET_RVAS=0xACTUAL_R46_TARGET_RVA_1,0xACTUAL_R46_TARGET_RVA_2
# ACNH303_MAIN_BASE / ...ORIGINAL_MAIN_ELF / R49_SESSION_ID / R49_LOG 同上
```

```gdb
source Scripts/acnh303_round49_live_observer_gdb.py
continue
```

观察器对每个候选函数入口记录 x0–x7、LR、x0–x3 的**最多 64 B** 指针采样，然后使用 GDB `FinishBreakpoint` 记录正常返回点、x0/x1 以及入口 x1 指向内存的返回后样本；每次读有最大字节限制和 SHA。x1 未证明为 buffer，x0 未证明为 handle；**记录的是「候选」，不是命名过的 API。** 对于异步 I/O、异常退出、尾调用或缓存分支，可能不存在可跟踪的普通返回，不能靠猜测补齐。

真正关闭 AAL 的方法仍需独立追查真实调用者和文件 API：

```text
R46 BLR X8 + actual vtable slot
 -> R47 verified same-session target entry
 -> R49 candidate entry/return + disassembly
 -> identified FileOpen(path) / actual handle
 -> FileRead(handle,offset,size) -> actual buffer bytes/hash
 -> FileClose(handle)
 -> original Sound/Resource/Stream/*.bwav exact input bytes
 -> BARS/AMTA link + decoded PCM validation
```

**路径、句柄、返回指针、缓冲大小以及文件偏移都必须来自真实调用参数/返回值与可重复的字节证据。** 出现 ASCII `Sound/Resource` 或看见一段 BWAV 魔数并不等于追到了系统文件 API。

### 新恢复的 R39 原版指令：X22 的来源要和句柄严格区分

已把旧研究分支的真实 `derived/3.0.3/r39_aal_manager/original_manager_vtable_and_path_native_code.json` **以完全相同的 Git Blob** 恢复到此分支。其指令在目标调用之前的寄存器来源如下（RVA 均为 main 相对地址）：

```asm
0x3E4519C  MOV X19, X1
0x3E451BC  LDR X21, [X19]          ; 条件路径，X21 原来来自 [X1]
0x3E451C4  LDR X24, [X19,#0x10]
0x3E451CC  LDR X8,  [X19,#0x8]
0x3E451D0  LDR X22, [X8,#0x18]     ; 优先来源
0x3E451D4  CBNZ X22, 0x3E451E4
0x3E451D8  LDR X8,  [X8,#0x10]
0x3E451E0  LDR X22, [X8,#0x180]    ; 备用来源
0x3E451E4  LDR X8,  [X21,#0xA8]    ; 与 X22 是不同来源！
0x3E451F0  MOV X0, X22
0x3E451F4  LDR X8,  [X22]
0x3E451F8  LDR X8,  [X8,#0x20]
0x3E451FC  BLR X8
0x3E45200  LDR W8,  [X24,#0xC]
0x3E45208  ADD W8, W8, #1
0x3E4520C  STR W8,  [X24,#0xC]
0x3E45210  LDR X8,  [X22]
0x3E45214  LDR X8,  [X8,#0x28]
0x3E45218  BLR X8
```

这说明下一次采样要**分别核对** `[X19+8]` 派生的 `X22`、`[X19+0x10]` 的 `X24`、`[X21+0xA8]` 的另一路成员以及两个虚表槽；不能混为一个文件句柄。同时 `[X24+0xC]` 在两次 BLR 中间递增，暗示有对象状态/计数管理，**但不构成任何 FileOpen/Read/Close 身份证据**。

## 3. 独立审计和复现

```bash
# 只读 R46/R47 原始 source report，在没有任何真实游戏日志时，明确输出 NOT_CAPTURED
python Scripts/acnh303_round49_runtime_audit.py \
  --out /tmp/r49-no-native-capture.json

# 从真实游戏采样后（不要用合成测试日志充当游戏证据）
python Scripts/acnh303_round49_runtime_audit.py \
  --capture /absolute/path/to/r49-native.jsonl \
  --dispatch /absolute/path/to/same-session-r46-blr-x8.jsonl \
  --out /tmp/r49-native-audit.json
```

提供 `--dispatch` 时会强制要求 R49 候选目标出现于同一会话 R46 的两个真实 BLR X8 虚表槽，目标 RVA/PC、指针与 slot 校验必须自洽；输出仍只能写 `aal_r46_dispatch_targets_correlated`，不能转成 FileOpen 认证。R47 的入口字节独立审计仍需另外运行。

审计器拒绝：混合 session/base、伪造参考 ELF、无效/重复 sequence、虚假 Native 验证标志、超过 64 B 的 snapshot、SHA 不匹配、24B TexSrt 格式错误、无配对 AAL 返回、未知目标/错误入口 PC。支持返回缺失（异常/异步）但记为 unreturned。只对 0–50 帧进行离线插值比较，不推断 wrap。

特别注意：严格 JSON 自洽只能输出 `STRUCTURALLY_COHERENT_UNATTESTED`，不可能凭用户提供的日志自己认证游戏进程。默认输出 `NOT_CAPTURED`。CI 的合成测试只验证观察契约、负面路径和 R45–R48 的真实源报告，**不是游戏实际启动**。

## 4. 下一次真实会话交付给研究仓库的最小数据

1. ACNH 3.0.3 的参考 ELF SHA256 **83970061788f10049e2e60d687571b8dc87e5014521889ac4611a7f6b9c6e180**，真实 main base 与运行映像版本的独立确认记录。
2. 同会话 R46 分派原始 JSONL、R47 entry 原始 JSONL、R49 write/return 原始 JSONL 和未修改的 GDB transcript。
3. FMAA 实际材质对象来源链、TexSrt RAM VA、真实帧指针、写入前后 24B、PC/LR 及下游 renderer 参数上传证据。
4. AAL 动态 target 反汇编和真实文件接口参数、handle、read offset/length、buffer 原始 SHA256、close 事件、对应 BWAV Git Blob SHA / PCM 对照。
5. 每一步分别标记 SOURCE / STATIC_CANDIDATE / RUNTIME_CAPTURE_UNATTESTED / INDEPENDENT_VERIFIED；**不能通过简单名称、数值或合成 CI 将候选升级为证实**。

> [!caution] GDB 的 breakpoint/watchpoint 可能对被调试线程造成停顿或暂时修改调试指令。观察器不主动写入游戏业务数据、资源文件或存档。只在有授权的离线游戏会话操作，调试期间保留未经编辑的原始日志；公开前审查指针采样里是否存在敏感内容。

关联：[[08-Next-Wave-FMAA-AAL-BARS]]、[[ACNH303_ROUND47_CEDAR_FMAT_AAL_TARGET_IO_EVIDENCE]]。

## 5. CI 状态

- [R49 source/runtime evidence workflow](https://github.com/969981/ACNH_Resources/actions/workflows/acnh303-r49-evidence.yml) 对 R47/R48 原始源关联、R49 负面/错误注入以及无会话 `NOT_CAPTURED` 做自动回归。
- [R47 migrated regression（修复并通过）](https://github.com/969981/ACNH_Resources/actions/runs/41382005954)：从历史分支补回真实 R39 JSON 原始证据后，R45–R47 与 R48 回归通过。R44 完整累计 source_delta 旧数据仍未搬迁，因此其依赖该批数据的两项用例不在此次迁移 CI 范围，不能当作通过。
