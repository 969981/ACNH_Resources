# ACNH 3.0.3 R43：剩余全部 BARS L3 测试、Model 增量与独立 Native 验收

日期：2026-11-02。基线：R42 的 960 原始来源已通过 SHA/reconcile/Release，原始 NCA 不做修改。

## 实际执行的验收目标（CI 和 Release 成功前均属于待验）
- **BARS**：剩余 128 个未做 L3 原始文件，按 4 个分片×32 个精确选择，不能重复历史 R19+R27–R36+R41+R42 的任何原始路径。
- **Model**：32 个分片×40 个新源，新增 1,280 个 L3 测试；真实 GLB/PNG、真实 WAV/AMTA 分别按格式验证 SHA。失败/无媒体目标也留下原始来源证据，不计媒体转换成功。
- **来源验证**：103,400 全量 RomFS 清单、SHA 原始来源、跨批次无重复、每分片数一致；Release 必须对实际输出文件重新计算 SHA256，并提供校验清单。
- **完全通过后的条件性覆盖率**：Model 4,788/60,166 已测试，剩余 55,378；BARS 1,696/1,696 已测试，未测试 0。此处的「测试过」不等于实际解码每个内部成员、也不等于原生播放一致。

## 分离的 Native 语义研究
- **FMAA**：Cedar FRES 1,536 字节，已知 FMDL 模型指针 0、FMAA Magic 两处。R43 检查候选 offset、边界、字节及 hash，不能仅凭两处 Magic 就宣称完整动画；下一步必须恢复原生指针/字典、材质轨道、插值采样与游戏渲染证据。
- **AAL / 外部流**：每个失败 BWAV 从原始 BARS 的来源字节/offset/length 切片校验，分类 `HEADER_ONLY_NO_INTERNAL_PAYLOAD` 或带载荷但解码失败；CRC 关联/独立 Stream SHA 与 AAL 文件 I/O 原生追踪尚非闭环。
- **BDLI/LBLI**：标签内容、控制码和 Native Lookup 未验证完整语义。
- **EventFlow**：Action/Query 脚本图、原生 callback 行为、游戏状态变化待做闭环。
- **Shader/BNSH**：字节成员来源、Shader GPU stage/reflection、材质 slot 绑定仍须独立验收。

R43 将生成 `derived/3.0.3/r43_cumulative/coverage.json`、`unified_coverage.json`、`native_gap_matrix.json`、`source_delta.jsonl.gz`；输出和报告应随 Release 通过二次哈希公开。L0/L1-L2/L3/Native 明确隔离，不能把完整 RomFS 索引当成全部资源完全解包。


## 2026-11-02 实际执行后的原始证据和 L3 验收结果

**不是预估值。** 36 个来源转换分片已上传全部报告/Artifact，跨分片 reconcile 成功，并将以下原始来源审计结果写入本分支 `derived/3.0.3/r43_cumulative/`。正式 Release 的发布状态应以其独立 Actions 结果为准。

- 本轮新增 **1,408 个**去重原始源（**Model 1,280 + BARS 128**），此前历史 SHA/源路径全量排除。
- **BARS：1,696/1,696** 原始 `.bars` 已进入对应 L3 测试，未测试来源变为 **0**；但不能等同于每个声轨都可播放。
- **Model：4,788/60,166** 已进入对应 L3 测试，仍有 **55,378** 未做 L3；本轮 1,261 个新 Model 源成功输出媒体，17 个 `no_target_leaf`，另有 2 个 `failed`。
- 验证过的派生媒体：**177 GLB / 1,672 PNG / 1,316 PCM WAV**；无损提取 **1,319 原生 AMTA**。本轮 BARS 中有 **3 个 BWAV** 转码失败，仍未得到 PCM。
- R43 三个 BWAV 缺口均已按原始来源 SHA / offset / size / member SHA 校验，类别均为 `HEADER_ONLY_NO_INTERNAL_PAYLOAD`，不是内容已找回：
  - `Sound/Resource/Event_SNPC_kpp.bars`：92 字节成员，48000Hz，声明 360000 nonprefetch samples；
  - `Sound/Resource/NpcSP_fox.bars`：92 字节成员，48000Hz，声明 204801 nonprefetch samples；
  - `Sound/Resource/Event_Obj_Cafe_Telephone.bars`：92 字节成员，48000Hz，声明 96000 nonprefetch samples。
  每个 `file_samples=0`、`payload_offset=128` 已超出该 92 字节成员，不能据此生成音频或断言对应外部文件。
- Cedar 的原始 FRES（1,536 字节，SHA `6fe0ae7dbefc86e1fb5971f391f79343f330266716b4c791696ab70908ca6f4e`）FMAA 候选出现于 offset **240 / 0xF0** 和 **352 / 0x160**，均 4 字节对齐且 32 字节窗口在边界内，`+0x04` 读取为 4。两处魔数只是**候选**，未还原曲线、字典或运行时材质动画。
- **独立语义 Gate**：FMAA 真实动画、AAL 外部文件 I/O、BDLI/LBLI 标签语义、EventFlow Action/Query 原生运行、BNSH Shader/GPU 材质绑定仍是未验证。不得将 100% BARS L3 来源测试说成资源完整解包。

详见 `derived/3.0.3/r43_cumulative/coverage.json`、`unified_coverage.json`、`native_gap_matrix.json`、`source_delta.jsonl.gz`，以及独立跟踪 [#44](https://github.com/969981/ACNH_Resources/issues/44)（FMAA/AAL）、[#45](https://github.com/969981/ACNH_Resources/issues/45)（BDLI/LBLI）、[#46](https://github.com/969981/ACNH_Resources/issues/46)（EventFlow）、[#47](https://github.com/969981/ACNH_Resources/issues/47)（BNSH GPU）。
