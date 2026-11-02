# ACNH 3.0.3 R42 — 960 原始资源增量 + Native Animation/BARS 审计

日期：2026-11-02。R42 基于 R41 已核验的 480 条源路径与 SHA 清单独立推进，禁止重写原始 NCA。

## 批次及精确来源排除
- 源版本：RomFS 103,400 项、10,415,907,860 B，完全保留。
- R41 后目标 L3 尚未测：Model 57,298，BARS 448；Layout 与独立 BWAV 源已经做过 L3 测试，不能等同于 Native 语义全解。
- R42 **16×40 Model=640、8×40 BARS=320**；所有选源路径同时排除 R19、R27–R36 与 R41 480 项，使用全量 Git tree 和 source SHA 层级验收。
- 全部 24 个转换 shard、reconcile、真实输出再次哈希、Release 完成后，条件性的剩余：Model **56,658**，BARS **128**。在 CI 最终成功前不能算 completed。

## 原生深度证据分流
1. **动画 FRES：** 单独核对 `Model/PltTreeCedarDecoAnim.Nin_NX_NVN.zs` 的 R41 原始 SHA、Zstd→FRES 成员 SHA、原生 FMDL 指针、FSKA/FMAA/骨骼 Magic 和 header。若有 FSKA 且无几何证据，只能叫 animation candidate，不能伪造模型 GLB 或实际播放结果。
2. **外部流音频：** R42 对每个 `decode_failed` BARS BWAV 成员重新从被 SHA 校验的原始 BARS 源切片，按真实 asset_offset+length 验证成员 SHA，再调用 Native BWAV 头解析器。把 `HEADER_ONLY_NO_INTERNAL_PAYLOAD`、`DECODER_FAILED_WITH_BOUNDED_MEMBER_PAYLOAD`、`INVALID_OR_UNSUPPORTED_HEADER` 分开；不会把任何 CRC/name 关联冒充实际 AAL 读取证据。
3. **统一验收：** `unified_coverage.json` 将 L0 原始目录、旧 L1/L2 Parser、R42 新 L3 转换来源与 Native gaps 分开；`native_gap_matrix.json` 保留逐源 SHA、音频成员哈希与原生结构候选。
4. **发行：** GitHub Releases 按 shard 打包真正转换的 GLB/PNG/WAV/AMTA，附原始来源、输出校验文件以及 SHA256SUMS。R42 的所有状态仅在 Actions 完全通过后可称 verified。

下一阶段：继续剩余 56k Model / 128 BARS 真实 L3；抽样或全面分析其中 animation-only FRES；对已知 R36/R41 header-only 外部音频，先做真实外部源字节和运行时文件 I/O closure 再声明解码完成；BDLI / EventFlow / Shader 维持单独 Native 语义验收门槛。
