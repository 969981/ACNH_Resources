# ACNH 3.0.3 — 实施进度与证据

> 记录时间：2026-10-13。此文件里的阶段状态是**已证实**而非预期。

| 阶段 | 状态 | 证据 |
| --- | --- | --- |
| P0 源目录、脚本、AGENTS | done | 3.0.3 根目录 `scripts/`、`AGENTS.md`、`README.md` |
| 234 BCSV + 275 BYML | tested/published | `Unpack/<NCA>/1/Bcsv,AnimationInfo,Stage`；manifest 记录 |
| 中文 Dialog/LayoutMsg SARC+MSBT | tested/published（2 个源归档） | `Unpack/<NCA>/1/Message` |
| 上述首次累计 | **511 源 / 1,153 个真实产物** | `Unpack/_meta/manifest.json`（注意 summary.json 仅最后一次单文件任务） |
| Model/Layout/Effect/Shader/Sound/EventFlow 各真实样本 | tested（6 个样本） | Actions <https://github.com/969981/ACNH_Resources/actions/runs/38385132200> |
| 第二轮 19-shard 全目录资源 | started/not yet validated | Actions <https://github.com/969981/ACNH_Resources/actions/runs/38385428097>，PR #2；不要把队列中任务算完成 |
| 新增完整 Git 树清单 | **done — 103,400 RomFS / 10.42 GB；7 ExeFS** | `scripts/inventory_acnh303.py` + `.github/workflows/acnh303-inventory.yml` |
| BDLI 全语言对话逻辑解析 | planned（U14） | 36,708 份 `.bdli.zs`，Zstd→BDLI/LBLI 已做真实样本魔数探测 |
| BFRES → glTF/GLB | planned | 需要真实 3D 模型测试 |
| BNTX → PNG/KTX2 | planned | 需要 ASTC/BCn/swizzle 审计 |
| EventFlow 完整可读脚本 | in progress | 现有二阶段脚本仅图节点/Actor/参数 JSON，未证明所有文件解析成功 |
| Audio → WAV、PTCL、Shader | planned | 已有格式识别/索引，不是多媒体全解 |
| 完整覆盖 + 持久 GitHub Releases | planned | U12/U13 尚未执行 |

下一步：已建立 [103,400 文件的全量基线](UNPACK_BASELINE.md)。要把 BDLI（上一版 19-shard 漏掉）也加入批量矩阵；然后对照真实源总数、文件类型分布、潜在同名碰撞，再根据 19-shard 执行日志维护每格式的缺口清单。任何阶段只有真实样本、全组输出统计与 SHA-256 均有证据才能更新为 done。

若 `Unpack/_meta/summary.json` 显示 `source_count=1`，那仅代表最近一次 `--file` 范围；不能覆盖累计 511 的事实。正式总表由 `manifest.json` 与全量 Git 树索引 join 汇总。
