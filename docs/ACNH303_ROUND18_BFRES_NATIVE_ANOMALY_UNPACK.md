# ACNH 3.0.3 R18 — BFRES 扩容、异常 BWAV 与 ELF Native 候选消费者

> 2026-10-14，R18 分支：`feat/acnh303-round18-bfres-native`。上一轮 R17 已成功通过 [Run 38537480154](https://github.com/969981/ACNH_Resources/actions/runs/38537480154) 的 27 个作业，且已发布 [32 附件长期 Release](https://github.com/969981/ACNH_Resources/releases/tag/acnh303-r17-model-layout-bars-20261014)。本文件中的 **R18 新增数量是目标，不代表已经成功**，最终以真正的工作流和哈希审计为准。

## 唯一可信基线（L3）

- RomFS `e10617820db06889e1638499478da0de_NCA/1`：103,400 个只读源。
- R17 累计不同核心媒体源：**2,278**；360 GLB、3,451 PNG、1,146 独立 WAV，总计 4,957 媒体；其中 Model 700 / 60,166、Layout 432 / 960、BWAV 1,146 / 1,146。
- BARS 原始容器 216 / 1,696；累计 **2,172 PCM WAV + 2,153 AMTA v5**，与独立 BWAV 单列。
- 待测：Model 59,466、Layout 528、BARS 1,480，独立 BWAV 0。

## R18 计划的真正转换分片

| 类别 | 分片 | 选中未测原始源 | 真正执行的专用输出 |
| --- | ---: | ---: | --- |
| Model FRES | 20×30 | **600** | BFRES→GLB 真实 POSITION 几何；纹理型 FRES→经 BNTX 解码的 PNG |
| Layout | 8×12 | **96** | 真实 PNG + BFLYT/BFLAN/FCPX 的可追溯结构 JSON |
| BARS | 10×10 | **100** | 真实可播放 BWAV→PCM WAV；lossless AMTA v5；明确标注 decode_failed |
| **合计** | **38** | **796** | 结果不预填，仅通过源→成员→产物 SHA 对账 |

以 Git tree 真实全量为候选，首先排除 R17 的 2,278 个媒体原始路径及 R8/R9/R10/R14/R16/R17 的 **216 个 BARS**。剩余集合按 `SHA256(相对路径)` 做稳定排列，38 分片分组挑选。只有针对真实选中的原始 blob 开启 sparse-checkout；不能从 Github contents API 的前 1000 个文件推算总数。

若 796 个源确实全部经过专用处理并通过审计，累计计数应为：核心媒体 2,974 独立源；Model 1,300 已测 / 58,866 未测；Layout 528 已测 / 432 未测；BARS 316 已测 / 1,380 未测。媒体输出数量（GLB/PNG/WAV）依原始实测报告生成，不预先推定成功率。已测的 `no_target_leaf` 不被当作失败，也不能当作成功媒体。

## R18 两项专用逆向探针（实验过程与证据分离）

**A. Npc.bars → BWAV index 166**

- 原因：R17 `Sound/Resource/Npc.bars` 的 asset #166 的 BWAV 仅 128 字节，成员 SHA `ef82e881c7af89c1c2aea3ee9ed22adb6ab39f97e186f4c95a6f436447fe7529`；vgmstream 未解码；AMTA v5 另有原生提取证据。
- `scripts/acnh303_round18_npc_probe.py` 只读实际容器，计算原始文件 SHA / 目标及临近成员 SHA，验证 index 166 和 bounds，输出有界 hex header、成员大小及 metadata index。
- 不修改原始、不得通过写假 PCM/跳过 SHA 来将失败条目记为 converted。旧的 `decode_failed` 仍保留，直到确实可读取音频采样帧。

**B. 同版本 Native ELF → 真实 AArch64 静态候选窗口**

- 输入 `e10617820db06889e1638499478da0de_NCA/0/ACNH3.0.3.elf`（不是游戏资源目录，单独严格只读）。
- `scripts/acnh303_round18_native_elf_probe.py` 从 ELF PT_LOAD 建立 RVA / VA / 文件偏移关系，以原始 ELF SHA 记录 `0x3ACA490`、`0x3ACA590`、`0xFF6470`、`0x10847E4` 候选指令窗口（未映射也如实记录），附有界 AArch64 opcode/disasm、magic 字面量搜索证据。
- **证据边界**：静态指令/魔数或邻近，不足以证明 AMTA / LBLI / BFEVFL 的具体 owner、真实调用实例、播放/循环参数或动态 Action / Query dispatcher；须继续 XREF、对象/寄存器指针和实机状态对齐，不伪造实机轨迹。
- 与 [Native 语义 Issue #33](https://github.com/969981/ACNH_Resources/issues/33) 及 [异常 BARS Issue #30](https://github.com/969981/ACNH_Resources/issues/30) 保持独立未完成状态。

## 核查与数据交付

- 原始 RomFS/ExeFS 从不写入、不重命名，不生成所谓解密后的伪原文件。
- 转换文件以实际 GLB JSON 结构、PNG 全像素、WAV 全 PCM 帧和生成物 SHA 验证；Model 必须区分几何、纯纹理、无媒体叶子和解码失败。
- `scripts/acnh303_round18_select.py` → `scripts/acnh303_media_incremental_audit.py` → `scripts/acnh303_round18_model_classify.py`。
- `scripts/acnh303_layout_semantic_reconcile.py` 与 `scripts/acnh303_round18_bars_reconcile.py` 分别验证 UI2D 和 BARS/AMTA，包含失败原因统计。
- `scripts/acnh303_round18_release_verify.py` 只在整个来源、哈希、38 个数据分片审计完成后重新下载同一次成功 run 的原生新产物，逐文件重哈希并创建 Release / SHA256SUMS。
- R18 累计产物应分别落在 `derived/3.0.3/media_round18_cumulative/`、`bars_round18_cumulative/`、`layout_semantic_round18_cumulative/`、`model_round18_classification/` 以及 `r18_native_probe/`。
- 只有完整的实际工作流 `reconcile → publish` 成功，才算 R18 发布完成。代码提交、选源数、或排队作业绝不能代替完成证据；不改动 `3.0.3` 主分支。
