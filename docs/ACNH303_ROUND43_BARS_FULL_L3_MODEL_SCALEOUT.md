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
