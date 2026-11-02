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
