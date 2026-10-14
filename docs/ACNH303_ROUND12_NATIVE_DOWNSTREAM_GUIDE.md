# ACNH 3.0.3 R12 — BARS→AMTA v5 / BDLI→LBLI / EventFlow Native 追踪

> 仅针对原始 ACNH 3.0.3 ELF 的静态研究。此文件是任务和证据边界说明，**不等于已经运行或证实 AMTA、LBLI、EventFlow 的语义**。实际执行后的 JSON 在 `derived/3.0.3/round12_native_downstream/report.json`。

## 可复用的 R11 Native 实证

- ELF 原始长度 **79,000,340** 字节，SHA256 `83970061788f10049e2e60d687571b8dc87e5014521889ac4611a7f6b9c6e180`，地址为 ELF PT_LOAD VA（并非实机加载后地址）。
- BARS：`0x3ACA350` 形成 `0x53524142`；`0x3ACA360` 比较 magic，`0x3ACA36C` 读取 `BARS+0x0C count`，`0x3ACA370/374` 得到 CRC 后的数组指针，成功分支 `0x3ACA3AC → 0x3ACA470`。
- BDLI：`0x1B0A014` 构造 `BDLI/%s/%s/%s.bdli` 路径，周边存在 `BL 0x37D1270` 与 `BL 0x3E33F70`。函数契约和 LBLI reader 尚未证实。
- EventFlow：`0xFF5D70` 和 `0x108444C/450` 分别存在 Action/Query 成对机器字写入。另一机器字**不能直接当成 handler 指针**。

详见 [R11 实证指南](ACNH303_ROUND11_ELF_NATIVE_CONSUMERS_GUIDE.md)。

## 本轮执行次序与验收

### P0 — BARS 成员描述符 → AMTA v5

`0x3ACA350` 起生成边界固定的局部控制流图，特意跟随 `0x3ACA470` 成功边；记录 `LDR/LDP/STR/ADD`、`BL` 与 `BLR`。先寻找成员表中 `(AMTA_offset, audio_offset)` 的真正基址和消费；逐项追踪 `+0x10...+0x30` 是否存在真实 AMTA v5 读取者。所有推断保留原始偏移、机器指令地址、寄存器、文件/成员 SHA。没有真实读取路径绝不命名 playback/loop/codec 字段。

### P1 — BDLI 下游缓冲区

从 `0x1B0A014` 扩展局部 CFG，列出实际 `BL/BLR`；下一步人工确认返回值/目标缓冲区的写入和 `LBLI` 记录访问。至少选两份跨语言、可校验 SHA 的源资源比较，不能将 identifier 视作翻译文本。

### P2 — EventFlow 记录的真正读者

把候选 Action 数据地址 `0x4FB4C08 / 0x4FB4C18 / 0x4FB4C28` 及 Query `0x4FB8DD8 / 0x4FB8DE8` 的 `ADRP+ADD` 使用点全部检索并导出原生指令邻域。

**仅形成地址不证明发生了 LDR/LDP，更不证明查表、BLR 或 gameplay 行为。** 逐步分析全局记录的读取者、对象 owner、虚表/间接调用和参数封送，最后在合法实机环境用只读日志验证 Action/Query 调用与结果。

## 运行命令

```bash
python3 -m pip install 'capstone>=5,<6'
python3 -m unittest discover -s scripts -p 'test_acnh303_round12_native_downstream.py' -v
python3 scripts/acnh303_round12_native_downstream.py \
  --elf e10617820db06889e1638499478da0de_NCA/0/ACNH3.0.3.elf \
  --out derived/3.0.3/round12_native_downstream/report.json
```

`report.json` 记录 SHA、局部 CFG 和裁剪状态、直接调用、候选全局地址成形点以及每个点的原生指令邻域。**局部 CFG 不是完整 call graph；静态候选不是实机证明。**

## 必须保持打开的事项

- [ ] BARS 成功分支实际 AMTA 成员读取者定位并关联有效 SHA
- [ ] AMTA v5 `+0x10...+0x30` 的字段宽度/消费/运行时播放行为
- [ ] BDLI 后续缓冲区中的 LBLI ID、count 与真实 UI 语言对照
- [ ] EventFlow 成对记录的读者、分派函数、Action/Query 动态行为

统一由 [Issue #33](https://github.com/969981/ACNH_Resources/issues/33) 跟踪；不得因生成静态分析 JSON 而标记语义完成。
