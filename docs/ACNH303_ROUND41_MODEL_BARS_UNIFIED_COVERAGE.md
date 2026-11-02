# ACNH 3.0.3 — R41 Model/BARS 增量解包与分层覆盖率

日期：2026-11-02。分支：`feat/acnh303-round41-model-bars-coverage`，从 R40 继承。原始 RomFS/ExeFS 文件绝不改动。

## 起点（已核验 R36 审计）
原始 RomFS 103,400 文件、10,415,907,860 字节；R36 后 Model 60,166 中仍有 57,618 未进行对应 L3 测试，BARS 1,696 中仍有 608；Layout 960/960、独立 BWAV 1,146/1,146 已进入对应 L3 测试（不代表游戏语义完全还原）。

## R41 任务及验收门槛
- 严格排除 R19+R27–R36 已有源 SHA/path，增量选择 8×40=320 个 Model `.zs` 以及 4×40=160 个 BARS `.bars`，全部来源 Git tree 实际原始条目；每 shard 无交集。
- Model 通过现有 BFRES/BNTX 原生解码工具导出真实 GLB/PNG，逐个输出结构与 SHA 检查；`no_target_leaf`/失败记录不可伪造媒体。
- BARS 提取 v5 AMTA 原始成员，内嵌 BWAV 尝试真实 WAV；外部流 Short Header 没有 payload 时明确保留 `decode_failed`。
- R41 12 个 Jobs 成功、reconcile 历史无交集、SHA/来源/字节大小全部一致后，生成 `r41_cumulative/coverage.json`、`source_delta.jsonl.gz` 和 `unified_coverage.json`；重新哈希真实 Artifact，再上传永久 Release/SHA256SUMS。
- 若全部执行成功，剩余 **Model 57,298**、**BARS 448**，合计 **57,746**。这是条件性预期，不是提前宣称执行完成。

## 统计边界
L0=源目录完整性；L1/L2=解压和档案成员层；L3=源是否进入对应媒体转换流水线、是否实际生成有效媒体；Native=解析后能否真实复现语义。独立维度不混算。主要仍待解决 BFRES 大批量、FSKA/绑定姿态、AMTA 外部流、BDLI/LBLI 语义、EventFlow dispatch 和 BNSH GPU 绑定。

真实流水线：`.github/workflows/acnh303-round41-unpack.yml`，只在本分支执行，不覆盖默认 `3.0.3`。
