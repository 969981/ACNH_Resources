# ACNH 3.0.3 — 103,400 份 RomFS 源文件全量执行报告

执行日期：2026-10-13。游戏版本及来源：`e10617820db06889e1638499478da0de_NCA/1`。

## 一、全量输入与完整性

- Git Trees API 清点：**103,400 份 RomFS 源文件**，总计 **10,415,907,860 字节（10.42 GB）**，24 个一级目录。
- 首轮全量实际读取/分片/哈希/解析运行：[38388960509](https://github.com/969981/ACNH_Resources/actions/runs/38388960509)，**36 个数据分片全部提供 manifest**。
- 完整性校验：**103,400 / 103,400 个原始路径均有记录；missing=0、extra=0、duplicate=0、source-size-mismatch=0**。
- 首轮记录 1,242 个 parser 失败（1,182 个 BDLI、55 个 BFEVFL、5 个 BARS），不能把第一轮 Actions 状态称为成功。

## 二、失败原因与修复

| 格式 | 首轮失败 | 修复手段 | 修复后状态/证据 |
| --- | ---: | --- | --- |
| BDLI/LBLI | 1,182 | LBLI 数据指针相对**各自的 16 字节描述符**，而不是全局目录起点；处理零记录段 | [36708 源文件重扫](https://github.com/969981/ACNH_Resources/actions/runs/38390275465) 全部结构解析，0 失败 |
| BFEVFL | 55 | ACNH 3.0.3 原生 EntryPoint 使用 evfl 上游未支持的 raw `offset_08/offset_10/flags_1a`；对这些字段保留原值 | [877 个 EventFlow 图 JSON 发布](https://github.com/969981/ACNH_Resources/actions/runs/38389762113)，0 失败 |
| BARS | 5 | 五个真实 BARS 的文件末尾包含一个额外 NUL，不属于头部声明的内容长度；仅在相差恰好 1 个 `00` 时接受 | [仅五项定向重解析](https://github.com/969981/ACNH_Resources/actions/runs/38390715792)，全部通过 |

各批次重跑必须校对**源文件大小与 SHA-256 和首轮对应记录完全一致**，否则拒绝覆盖原始解析状态。首轮 audit 与修复后的 overlay 都已在 `derived/3.0.3/` 持久保存。

## 三、最新有效结果（已复核并提交）

- 严格合并审计：[38390897730](https://github.com/969981/ACNH_Resources/actions/runs/38390897730) — **success**。
- [`derived/3.0.3/effective/coverage.json`](../derived/3.0.3/effective/coverage.json) — 103,400 个源文件；**2,105 converted + 101,295 partial + 0 failed**。
- [`derived/3.0.3/effective/source_run_manifest.jsonl.gz`](../derived/3.0.3/effective/source_run_manifest.jsonl.gz) — 每个原始文件一条源 SHA-256 / 解析状态 / 输出哈希记录。
- [`derived/3.0.3/bdli_full/summary.json`](../derived/3.0.3/bdli_full/summary.json) — BDLI 的 36,708 个真实 source hash、结构索引和提取结果。
- [`derived/3.0.3/eventflow/EventFlow/complete/summary.json`](../derived/3.0.3/eventflow/EventFlow/complete/summary.json) — 877 个 BFEVFL 转换状态。
- `Unpack/<NCA>/1/EventFlow/*.json` — **877 个真实 EventFlow 图 JSON**。
- `Unpack/<NCA>/1/Sound/Resource/*.json` — 修复的五个 BARS index JSON。

**关键事实边界**：这代表 **L0 源文件覆盖完成、当前 L1/L2 解析器无失败**，但绝不代表 103,400 个文件已实现 L3 的 PNG/GLB/WAV/语义 JSON。其余 **101,295 个 `partial`** 仍需独立专有格式转换、像素解码、音频采样与完整归档递归提取。

## 四、待执行的真正 L3 内容转换与发布

1. **U06 Model（60,166 源文件、7.6 GB）**：BFRES 网格/材质/骨骼/动画到真正 `.gltf/.glb`；需标准 glTF validator 验收。
2. **U07 BNTX/贴图**：查明各纹理格式（包括 ASTC/BCn）、去平铺和 mip/array，转换为经过像素验证的 `.png` / `.ktx2`。
3. **U08 Layout**：布局和动画的真正节点/轨道数据，不是仅解压 SARC。
4. **U10 Sound（2,848 源文件、2.42 GB）**：解码 BARS 关联的 BWAV 等，导出具备采样率/声道数/长度检查的可播放 WAV/FLAC。
5. **U14 BDLI**：对话逻辑字段的 Native 语义确认，脱离原生标识时不得伪造含义；当前可无损解压。
6. **U09/U11**：PTCL / shader 反射、ASB/长尾 Movie/Font/Swkbd 及其它特殊数据。

L1/L2 大体积派生产物多数保存在 **Actions Artifacts（有到期时间）**，不能当作永久发布。需要在 U13 中制定 GitHub Release 分卷、SHA-256 校验和容量预算，并遵守可分发性要求。小型、真实的 JSON 和 CSV 可以继续直接写入 `Unpack`。

详细任务见 [总目标](UNPACK_MASTER_PLAN.md)、[格式矩阵](UNPACK_FORMAT_MATRIX.md)、[任务分工](UNPACK_TASKS.md) 和 [GitHub Master Issue #17](https://github.com/969981/ACNH_Resources/issues/17)。
