# ACNH R45：FMAA 原生 Curve 真数据与 AAL 同次会话验收

- R44 已验证原始 Cedar 两条 FMAA 动画：`PltTreeCedarDecoA` / `PltTreeCedarDecoB`，每条 100 帧，两份 MaterialAnimData，均含曲线、ShaderParam。新增 `scripts/acnh303_round45_fmaa_curves.py` 对原始 SHA-256 的真实 BFRES 按 Switch ResFile/MaterialAnimData/ParamAnimInfo/AnimCurve 顺序解析，捕获确切帧数组与 key。
- 正式 JSON：`derived/3.0.3/r45_fmaa/cedar_two_material_anims_source_curves.json`，保存每个原始数组的 SHA、Curve flags/FrameType/KeyType、scale/offset、ShaderParam 源名称及精确 Key。**原版材质绑定/渲染仍待原生运行观察。**
- AAL 静态入口 `main+0x290F278`（前述 Bgm_Base 名称传递），候选后续 `main+0x37316FC, 0x3E451FC, 0x3E45218`。这些**不是已确定的 FileOpen**。实际模拟器/主机需开启 GDB，确定本次真实 main Base、ELF SHA 及唯一 session ID，然后 `source scripts/acnh303_round45_aal_gdb_observer.py`，采集寄存器、真实指针、现场路径构造线索。
- AAL `scripts/acnh303_round45_aal_runtime_validate.py` 接受 `--capture path.jsonl --out report.json`；没有文件时 `--out report.json` 只能给出 **NOT_CAPTURED**。只有同一次 real game session 中 BARS CRC/Asset → FileOpen path/handle → FileRead offset/bytes/buffer SHA → FileClose → 实际解码或播放样本匹配后，才可能开始评估原生调用链。单独 JSON 即使内部自洽仍是 `UNATTESTED`，不能自动证明真伪。
- 参考 [BfresLibrary](https://github.com/KillzXGaming/BfresLibrary/blob/master/BfresLibrary/Shared/MaterialAnim/MaterialAnimData.cs) 与 [AnimCurve.cs](https://github.com/KillzXGaming/BfresLibrary/blob/master/BfresLibrary/Shared/Common/AnimCurve.cs)；AAL 原始 ELF 静态证据按仓库 R38–R44 的 SHA 记录追溯。

待运行的 GDB 只读观测示例（在有实际 debug target 时执行）：

```bash
export ACNH303_MAIN_BASE=0xYOUR_REAL_MAIN_BASE
export ACNH303_AAL_SESSION_ID=actual-session-id
export ACNH303_AAL_CAPTURE_PATH=/your/path/aal_registers.jsonl
# 在 GDB 中 attach 真实游戏进程后：
# (gdb) source scripts/acnh303_round45_aal_gdb_observer.py
```

默认 GDB 断点可能使用软件断点，调试器会暂时设置断点指令；脚本自身不修改游戏业务状态。寄存器采样不意味着已经截获文件读取 API。务必自行保存最初的未经修改的调试器日志，再使用验证工具审查；不要用模拟构造的事件作为游戏实测。


## R45 已验证的实际执行结果（2026-11-02）

- [FMAA 原生解码 CI #41374838735](https://github.com/969981/ACNH_Resources/actions/runs/41374838735) **success**。最初一次因把顶层 `ShaderParamAnimCount` 误视为各材质 `ParamAnimInfo` 数量而失败；经原始结构交叉检查，二者属于不同计数层，不能直接作相等比较，保留 Curve 总数的严谨校验。
- [AAL 运行日志验收 CI #41375111887](https://github.com/969981/ACNH_Resources/actions/runs/41375111887) **success**。真实游戏日志未提供，故生成负面证据 `derived/3.0.3/r45_aal/runtime_IO_NOT_CAPTURED.json`；`native_AAL_FileOpen_Read_Close_proven=false`、`native_audio_PCM_playback_proven=false`。
- 所有产物均在 `feat/acnh303-round45-fmaa-curves-aal-runtime-gate`。原始 NCA 未更改。

### 实际解析出的 FMAA 结构（源字节 SHA 一致）

| 原生 FMAA 动画 | MaterialAnimData 材质名 | ShaderParam 名 | Curve 帧 | 原始 Key 每帧 2 元素 |
| --- | --- | --- | --- | --- |
| `PltTreeCedarDecoA` | `mPltTreeDeco` | `tex_srt0` | [0, 50] | [-127, 0] → [127, 0] |
| `PltTreeCedarDecoA` | `mPltTreeDecoA` | `tex_srt0` | [0, 50] | [-127, 0] → [127, 0] |
| `PltTreeCedarDecoB` | `mPltTreeDeco` | `tex_srt0` | [0, 50] | [127, 0] → [-127, 0] |
| `PltTreeCedarDecoB` | `mPltTreeDecoB` | `tex_srt0` | [0, 50] | [127, 0] → [-127, 0] |

所有四条 Curve 原始 Flags=26（0x1A）：`FrameType=Byte`、`KeyType=SByte`、`CurveType=Linear`；每个 Curve 2 个 Key，实际物理帧数组及 Key 数组均经过原始字节边界检查，保存原始数组 SHA256。Curve 的 `Scale=0.0019685039296746254`，`Offset` 原始字段位模式 `0x3E800000`（可按 float32 解释为 0.25）；曲线插值中的第 2 个元素及 ShaderParam 到渲染器参数位置的真实应用需要 Native runtime 证据，不能仅凭此生成等效动画并宣称完美。

FMAA 两动画头顶层记录各有 `ShaderParamAnimCount=4`，而真正解码到每动画的 `MaterialAnimData` 下是两条 `ParamAnimInfo`（每个材质 1 条）与 2 条实际 Curve。该差异已经明确保留为不同层级计数，不再错误地视为源数据损坏。

### AAL 运行时断点操作与证据分级

已提供 `scripts/acnh303_round45_aal_gdb_observer.py`：在用户**真实开启 ACNH 3.0.3 游戏并连接 GDB** 后，由实际 MainBase 在 `main+0x290F258`、`+0x290F278`、`+0x37316FC`、`+0x3E451FC`、`+0x3E45218` 设置非侵入业务数据的观察点（GDB 可能实现为软件断点，会临时修改断点所在指令）。记录 PC/SP、寄存器、实际 `x1+0x18` 名称指针与原始内存字节，保留同一 session_id 与 JSONL。

这只能证明静态候选被原版真实调用，**本工具不会自动识别 FileOpen/Read/Close，也不凭空输出文件句柄**。如果通过后续实机跟踪进一步取得具体音频 API 的路径、文件句柄、读偏移、返回 buffer SHA 和对应 PCM，使用：
`python scripts/acnh303_round45_aal_runtime_validate.py --capture /path/to/real-session.jsonl --out /path/to/report.json`
检查字段完整性、序列一致性。即便 JSONL 内容自洽，该工具最多输出 `STRUCTURALLY_COHERENT_UNATTESTED`，仍需保存真实原始调试日志、确认真正的原版进程与外部音频文件 SHA 才能提升 Native 证据等级。没有真实采集输入必须保持 `NOT_CAPTURED`。
