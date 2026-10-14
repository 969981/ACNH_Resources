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


## R12 实际 ELF 执行回报（2026-10-14）

[第二次运行 #38503365752](https://github.com/969981/ACNH_Resources/actions/runs/38503365752) 已在校验原 ELF 长度与 SHA、合成指令回归成功后，真实反汇编、导出报告并提交：[R12 原生 JSON 报告](../derived/3.0.3/round12_native_downstream/report.json)。第一次运行 #38503241075 亦通过，但该次局部 CFG 将可返回的 `BLR` 当成终结边；此误判在 R12 脚本中修复，**以下数据以第二次运行为准**。

### 已由真实机器码直接支持

- BARS 成功路径范围 `0x3ACA300–0x3ACAF00` 的局部直接控制流：**181 条可达指令、29 条局部边**，含 16 处直接或间接调用记录，报告未触及局部上限。成功分支在 `0x3ACA470` 读取 `[X20]`；`0x3ACA478` 从其 `+0x18` 读取调用目标，并由 `0x3ACA47C` `BLR X8` 调用。其后 `0x3ACA494` 另取全局对象指针到 X22，`0x3ACA4AC–0x3ACA510` 还包含偏移读取和字节比较，`0x3ACA510` 存入 `[X19,#0x18]`。**该对象身份仍需反追；绝不把此处 `+0x18` 推断成 AMTA 头部 `+0x18`。**
- BDLI `0x1B0A000–0x1B0A500` 局部可达 **54 条指令**：两处原已知直接 `BL`、两处 `BLR`（`0x1B0A088` / `0x1B0A0A8`）及新增的 `0x1B0A0C0 → 0x146B428` 直接调用。未证实该下游就是 LBLI reader 或字符串解码器。
- EventFlow Action 全局候选记录形成次数：`0x4FB4C08` 为 **5**、`0x4FB4C18` 为 **2**、`0x4FB4C28` 为 **2**；Query 的 `0x4FB8DD8` 为 **1**、`0x4FB8DE8` 为 **2**，共 **12** 个静态地址形成点。
- Action 读者示例：`0xFF6470 LDR X8,[X23]` → `0xFF6478 LDR X8,[X8,#0x18]` → `0xFF647C BLR X8`；`0xFF6480 LDR X8,[X23,#8]` → `0xFF6484 CMP X24,X8`，之后进入字节对比。类似链出现在 `0xFF6124` 和 `0xFF66D4`。已经有**记录读取的原生指令**，不再只是单纯的写入初始化。
- Query 读者示例：`0x10847E4 LDR X8,[X21]` → `0x10847EC LDR X8,[X8,#0x18]` → `0x10847F0 BLR X8`；`0x10847F4` 读取 `[X21,#8]` 并于 `0x10847F8` 进行比较，后续 `0x1084804–0x1084814` 存在字节比较。**仍不知道调用目标函数的实际逻辑及返回值含义。**

### 静态证据尚未闭合的部分

R12 没有得到 AMTA v5 的逐字段原生消费链、LBLI 的 identifier/语言解析闭环，也没有证明 EventFlow 的名称比较必然进入某个游戏 Action 或 Query handler。上述所有候选均需沿 `X19/X20/X22` 的赋值者、数据结构、间接调用目标继续追踪；最终需要只读实机日志。Issue #33 必须继续保持开放。


## 研究续篇：R13 已实际执行

请优先阅读 [R13 BARS 对象 / EventFlow Native 实证指南](ACNH303_ROUND13_BARS_EVENTFLOW_NATIVE_EVIDENCE_GUIDE.md)：已追出 `0x3ACA260` 的两个调用点、`0x4A7AD40` 对象方法表、`X19+0x10` 的成员目录指针写入/读取及其到 `0x3ACCCE0` 的参数传递。EventFlow 初始化方法表初始数据也已与 `0xFF647C` 的首个候选虚调用槽关联，静态候选函数 `0x5BD3A4` 是 `RET`，**不代表 Action Handler**。所有动态行为与 AMTA v5 播放字段仍未验证，Issue #33 保持打开。
