# ACNH 3.0.3 R46 — tex_srt0 源曲线候选数值与 AAL 原始虚表目标取证

日期：2026-11-02。继承已真实成功的 R45 Curve 来源 JSON 和 R39 SHA 原始 main ELF 静态字节证据。R46 将动画**结构/曲线计算**与**原版运行时写入绑定**严格分开，音频同理。

## 1. 原始 ShaderParam/Curve 静态关联

R45 两条 Cedar FMAA：
- PltTreeCedarDecoA、B 每条 100 帧、2 个 MaterialAnimData。每个材质的原始 ParamAnimInfo 名为 `tex_srt0`、`BeginCurve=0`、`FloatCurveCount=1`，所属 AnimCurve `AnimDataOffset=0x10`。
- 原始 `SubBindIndex=65535 (0xffff)`：没有已证实的运行时 ShaderParam index。因此**不可**直接断言 Shader uniform 的实际 ByteOffset、UvTransform 的具体字段或原版材质执行。
- 原始四条 Curve：`Linear / FrameType=Byte / KeyType=SByte / Flags=0x1A`，frame [0,50]，key 的首元素 A 为 -127→+127，B +127→-127，`Scale=0.0019685039296746254`、float offset bit `0x3E800000=0.25`、`delta=±0.5`。
- 新分析器 `scripts/acnh303_round46_texsrt_values.py` 只在**原始 0..50 段内**形成规范化线性候选数值，A：0→0.5、B：0.5→0，使用离线公式 `v0*(1-t)+v1*t`，不是原版游戏 GPU 截帧。帧 0、12.5、25、37.5、50 证据保存于 `derived/3.0.3/r46/texsrt_bounded_preview.json`。超出 0..50 段的 Wrap/Loop 以及 material binding 为 NOT VERIFIED。
- 后续完整语义 Gate：找到载有同名 `mPltTreeDeco / mPltTreeDecoA/B` 材质实体的原始 BFRES model、其 `tex_srt0` ShaderParam 类型、offset 和 shader uniform buffer 原始字节；再用实时游戏材质数据捕获对应字段写入/帧同步，检验 Bfres 源曲线计算。

## 2. AAL 原始 ELF 的直接 BLR 目标，不误命名 FileOpen

- 原始 SHA `83970061788f10049e2e60d687571b8dc87e5014521889ac4611a7f6b9c6e180` 的 R39 指令记录验证了 `main+0x3E451FC` 和 `main+0x3E45218` 两条 `BLR X8`（原始机器字节 `00013fd6`）。来自 `[X22]` 的 vptr，分别取 `vtable+0x20`、`vtable+0x28` 的目标。相邻 `[X21+0xA8]` 是**另外一个对象成员线索**；不能认为与 `X22` 指向同一对象。
- 这两处虚表调用与 `main+0x37316FC` 调用的 Manager 原始逻辑有关，但仍没有任何实际 FileOpen 路径 / API 身份证据；且仓库此前的 Sound/Resource 字符串路径线索仍是独立来源。
- `scripts/acnh303_round46_aal_vtable_gdb.py` 在**真实附加的游戏进程**中记录 `X8` 实际目标，`X22` 对象与其 vtable slot，`X21+0xA8` 的独立来源及寄存器，可通过 `ACNH303_AAL_WATCH_TARGETS=1` 限量跟踪 16 个目标函数入口。脚本要求用户本地原始 ELF 文件的 SHA 正确；这只验证参考二进制文件，**不能自动证明正在运行的进程映像与参考文件完全相同**。
- `scripts/acnh303_round46_aal_dispatch.py` 对真实会话 JSONL 校验 PC/Base/RVA、dispatch site/slot、SHA、序列和实际读取的 `[vtable+slot] == X8`；无原始日志输出 `NOT_CAPTURED`。即使某份日志结构自洽也仅 `UNATTESTED`。
- 下一步要在**真实同一次进程/会话**针对取得的动态目标反汇编与下断点，跟到实际 `Sound/Resource/Stream/*.bwav` 文件句柄、FileOpen/Read/Close 的参数和返回字节，SHA 比对 873 个已验证的 Stream 原始文件；否则 FileOpen/Read/Close=NOT_CAPTURED。

### 真正的游戏调试设置

在调试器启动之前设好以下环境（自行替换为实际值）：

```bash
export ACNH303_MAIN_BASE=0x你的实际main_base
export ACNH303_ORIGINAL_MAIN_ELF=/path/to/own/verified/ACNH303-main.elf
export ACNH303_AAL_SESSION_ID=real-session-20261102
export ACNH303_AAL_CAPTURE_PATH=/path/to/unaltered-aal-vtable.jsonl
export ACNH303_AAL_WATCH_TARGETS=1
```

在已连接真实 ACNH 3.0.3 的 GDB 中：

```gdb
source scripts/acnh303_round46_aal_vtable_gdb.py
continue
```

真实日志获取后，验证指令：

```bash
python scripts/acnh303_round46_aal_dispatch.py --capture /path/to/unaltered-aal-vtable.jsonl --out /path/to/audit.json
```

GDB 可使用软件断点临时改变断点处代码，观察脚本本身不修改游戏业务状态。任何声称 FileOpen/PCM 语义一致均需要独立实测日志和原始音频 SHA，不接受模拟事件替代。
