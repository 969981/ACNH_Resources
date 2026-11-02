# ACNH 3.0.3 R47 — Cedar 原版 FMAT/ShaderParam 字节与 AAL 目标函数二级采样

继承 R46 的两个明确未完成 Gate：FMAA Curve 到模型材质 ShaderParam 的**运行时绑定**，以及 AAL 两处 `BLR X8` 到真正 FileOpen / Read / Close 的**运行时调用链**。

## 1. 真正原始 Model 几何源，不再只匹配文件名

通过 GitHub Git Trees 中原版 Model 60,166 个源条目的 Git blob SHA1 和大小精确确定：
- `Model/PltTreeCedarDeco.Nin_NX_NVN.zs`：354,644 bytes；Git blob SHA1 `c6d27db85c3853b943bacb9d967db599e5c920ba`。
- `Model/PltTreeCedarDecoSnow.Nin_NX_NVN.zs`：541,896 bytes；Git blob SHA1 `34549b554b39e3d3dc5bd969c03f88cb223f28cd`。

`scripts/acnh303_round47_cedar_fmat.py` 只读这两个压缩源，经已有 `find_leaf` 检测真正 FRES，提取 FRES+0x28 的 FMDL 和 FRES+0xDC 的 model count，依据 Switch v9 FMDL/FMAt 和 ShaderParam 字段读取受边界约束的原版 Material/ShaderParam 来源字节，保留原始源 SHA256、内层 member SHA256、每个 ShaderParam 的名称、类型原始码、DataOffset、来源数据 SHA256。原始压缩文件先由 **Git blob SHA1 + size** 核验，不使用猜测的 source SHA。解析器会对布局漂移显式失败，不能假称成功。

与 R45 已由源 SHA 验证的 `PltTreeCedarDecoA/B` FMAA 的 `mPltTreeDeco`、`mPltTreeDecoA/B`、`tex_srt0` 做名称级匹配。**源名称同名与源数据 offset 不证明原版游戏会把动画写入这个参数；SubBindIndex=0xFFFF 仍未解决。** 甚至动画的 `AnimDataOffset=0x10` 也不能直接加到 FMAT 的 `ShaderParamData` offset 上，必须先确认真正的运行时 Buffer/Layout 与绑定关系。

引用实现：[BfresLibrary Switch ModelParser](https://github.com/KillzXGaming/BfresLibrary/blob/master/BfresLibrary/Switch/Model/ModelParser.cs)、[MaterialParser](https://github.com/KillzXGaming/BfresLibrary/blob/master/BfresLibrary/Switch/Model/MaterialParser.cs)、[ShaderParam](https://github.com/KillzXGaming/BfresLibrary/blob/master/BfresLibrary/Shared/Models/Material/ShaderParam.cs)。

真实原始文件核验 Actions 生成：`derived/3.0.3/r47/cedar_fmat_source_candidates.json`，必须 CI 成功才可引用其实际材料数量及参数 offset。不可将 synthetic unittest 的验证数据冒充游戏原生样本。

## 2. AAL 虚表调用目标捕获后的第二级只读采样

R46 `0x3E451FC / 0x3E45218`：动态 `X8` 调用目标在没有真实进程的情况下仍未知。R47 不猜名称，新 `scripts/acnh303_round47_aal_target_snapshot_gdb.py` 只允许手动提供**R46 在同一次真实游戏进程中观察到**的 1–16 个实际 `X8 - MainBase` RVA，收集函数入口指令 32 B、入口参数 x0–x3 可读内存各最多 96 B、实际 PC/LR、session ID。每次有严格 byte bounds + SHA；不读写任意大型缓冲。

`scripts/acnh303_round47_aal_target_audit.py` 可将 R46 dispatch JSONL 与 R47 entry JSONL 同次 session 交叉检验，严格要求 R47 PC 必须来自 R46 实际分派 `X8`，且每份指针样本字节和 SHA 一致。**自洽仅 `UNATTESTED`，不是游戏运行证据自动认证；即便参数里出现 `Sound/Resource/Stream`，也不是 FileOpen 身份的充分证据。** 真正的 I/O Gate 仍需函数反汇编、完整 path/handle、返回 buffer/offset/count、close、原始 BWAV 文件 SHA 和输出 PCM 对照。

### 真实 GDB 调试命令

先按 R46 工具记录真实 `X8`，例如从日志计算目标 RVA `observed_x8 - ACNH303_MAIN_BASE`。确认游戏确为 ACNH 3.0.3 且所用参考 ELF SHA 正确；重新进入同一个调试会话：

~~~bash
export ACNH303_MAIN_BASE=0xREAL_BASE
export ACNH303_ORIGINAL_MAIN_ELF=/path/to/original/main.elf
export ACNH303_AAL_SESSION_ID=unique-real-session
export ACNH303_AAL_CAPTURE_PATH=/tmp/r47-target-entry.jsonl
export ACNH303_AAL_TARGET_RVAS=0xOBSERVED_RVA_1,0xOBSERVED_RVA_2
~~~

~~~gdb
source scripts/acnh303_round47_aal_target_snapshot_gdb.py
continue
~~~

离线自洽检查：

~~~bash
python scripts/acnh303_round47_aal_target_audit.py --dispatch /path/to/r46-vtable-session.jsonl --capture /tmp/r47-target-entry.jsonl --out r47-session-audit.json
~~~

R46 与 R47 必须使用**完全一致**的 `ACNH303_AAL_SESSION_ID` 和 MainBase；所用 R46 日志必须有匹配的真实分派目标。保留未修改的原始调试日志。GDB 断点可能插入软件断点指令，因此“只读”指业务数据访问而非字节级完全无痕的目标进程。

没有真实 GDB 会话时运行：

~~~bash
python scripts/acnh303_round47_aal_target_audit.py --out derived/3.0.3/r47/aal_target_IO_NOT_CAPTURED.json
~~~

输出 `NOT_CAPTURED`，没有 FileOpen/Read/Close 实测记录。

## 3. 三层证据判定

1. **SOURCE_STRUCTURAL**：original Git blob / compressed source / FRES / FMDL / FMAT / ShaderParam 字节、源数据 SHA、Key/Scale/Offset。CI 可自动验证。
2. **STATIC_NAME_CANDIDATE**：原版 FMAA 的 Material 名和原版 FMDL Material/ShaderParam 名候选匹配。即使成功也不能证明动画运行时写入。
3. **NATIVE_RUNTIME_UNATTESTED / CAPTURED**：只有真实会话、模块基址、动态代码/参数/I/O、ShaderParam 写入的独立观察与复核，才能逐步关闭原版 Native 语义 Gate。

原始 `e10617820db06889e1638499478da0de_NCA/1` 始终只读，没有修改模型、动画、存档或游戏进程业务状态。


## 4. R47 完成后的真实来源解析结果（2026-11-02）

首轮解析器误把材质数组步长当作 `0xA0`，后依据实际原始字节 `FMAT` 魔数位置验证：首个 FMAT `0x4E0`、第二个 `0x588`，步长为 `0xA8`。再按 Switch v9 `MaterialParser.cs` 精确纠正 FMAT 字段：ShaderParam 数组指针 `FMAT+0x50`、源数据 `FMAT+0x60`、ShaderParam 数目 `FMAT+0x9E`、SourceParamSize `FMAT+0xA2`。这两个纠错均由真实 CI 的初次失败、原始记录和重跑成功验证，不是跳过校验。

真实两份模型内层 FRES version=`0x00090000`，每份四个 FMDL，每 FMDL 四个材质。找到了八个完整的名字匹配候选（常绿 A/B 模型及其 Node 变体、积雪 A/B 模型及其 Node 变体）：
- 材质名字为 `mPltTreeDecoA` 或 `mPltTreeDecoB`；每个 FMAT ShaderParam 数目 **66**。
- 原始 `tex_srt0` ShaderParam 的 type raw=**30**，依据 BfresLibrary `ShaderParamType` 枚举对应 **TexSrt**。
- 结构大小 **24 bytes**，位于对应材质的 ShaderParamData 内 **byte offset 388 = 0x184**，其初始来源字节固定为 `00000000 0000803f 0000803f 00000000 00000000 00000000`（Mode=0，Scale=(1,1)，Rotation=0，Translation=(0,0)）。
- 依据 [TexSrt 的真实字段结构](https://github.com/KillzXGaming/BfresLibrary/blob/master/BfresLibrary/Shared/Common/SrtStructs.cs)，其 +0x10 为 `Translation.X`。因此 R45 原始 FMAA 的 `AnimDataOffset=0x10` 与此结构**在字段语义层**吻合，可以提出「动画控制纹理平移 X」这一具体、可检测的静态假设。
- `mPltTreeDeco` 的独立原始材质名**没有**在这两份候选模型内找到，与 R45 FMAA 的同名轨道尚未闭合。不能将 A/B 的匹配反推为该通用轨道也已确认绑定。

**严格的结论：原始 Model 结构 + ShaderParam 类型、大小、初始值、位置 + FMAA 的曲线字段偏移已经相互吻合，但 FMAA 到目标 FMAT 的 Native `SubBindIndex` 及运行时写入/纹理移动仍未证明。** AAL 真实 FileOpen/Read/Close 同样未采集。

产物：
- `derived/3.0.3/r47/cedar_fmat_source_candidates.json`：完整逐源/逐模型参数 SHA 记录。
- `derived/3.0.3/r47/cedar_fmat_essential_summary.json`：精简的模型、材质、TexSrt 参数和匹配证据。
- `derived/3.0.3/r47/aal_target_IO_NOT_CAPTURED.json`：原版 AAL 运行时取证负面结果。


### R47 CI 真实验收

- [GitHub Actions #41378390870](https://github.com/969981/ACNH_Resources/actions/runs/41378390870)：**success**，合成拒绝测试与原始压缩源 SHA/真实 FRES v9 解析分别验证。
- 检查结果：Cedar 普通/积雪各四份 FMDL、每份四个材质，目标材质 `tex_srt0` Type=30 (TexSrt)、24 B、相对材质数据 offset=0x184；八处同名对应候选，动画的独立 `mPltTreeDeco` 未在这两个模型文件匹配。
- 动态 AAL 和原版纹理实际平移仍为 **NOT_CAPTURED / NOT_VERIFIED**，这次 CI 不会制造或模拟游戏运行证据。
