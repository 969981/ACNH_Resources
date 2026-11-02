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


## 2026-11-02 实际执行、验证与发布结果（已完成）

- 实际 GitHub Actions：[运行 #41371605342](https://github.com/969981/ACNH_Resources/actions/runs/41371605342)，24 个转换分片、独立 native_model、reconcile、publish 全部 **success**；不是仅提交了计划。
- 实际 Release：[acnh303-r42-960-media-native-20261102](https://github.com/969981/ACNH_Resources/releases/tag/acnh303-r42-960-media-native-20261102)，30 个附件（24 个数据分卷和 6 个验证/索引附件），含 SHA256SUMS。
- 真正新增 **960 个互不重复且源 SHA 可追溯的原始文件**：640 Model + 320 BARS；新 Model 有效媒体 **91 GLB + 839 PNG = 930**。其中 634 个 Model 源转换出有效媒体、6 个 `no_target_leaf`，本轮未出现 Model `failed`。
- 新的 BARS 产物：**4,938 个有效 PCM WAV**、**4,939 个原生 AMTA**；还有 **1 个** BWAV `decode_failed`，已从原始 BARS 读取源/成员字节并单独归类。
- R42 后 Model L3 已测试 **3,508/60,166**、未测试 **56,658**；BARS 已测试 **1,568/1,696**、未测试 **128**；独立 BWAV 已测试 **1,146/1,146**、Layout 已测试 **960/960**。测试全源不是完成原生语义。

### Cedar Material Animation 原始结构的正确解释

`Model/PltTreeCedarDecoAnim.Nin_NX_NVN.zs` 的原始压缩源 SHA256：
`3284939356d4d1a086307b0586e7f4e8995971f7c642190fc84da331767cb97f`。
源大小 470 B；提取后的 `output.bfres` 大小 1,536 B，SHA256
`6fe0ae7dbefc86e1fb5971f391f79343f330266716b4c791696ab70908ca6f4e`。
FRES `+0x28` 模型指针 = 0，`+0x58` FSKA 指针 = 0，`+0xDC` 模型计数 = 0，`+0xE2` 骨骼动画计数 = 0。内部原生 Magic 粗扫描：FMAA 两次命中、FMDL/FSHP/FVTX/FSKA/BNTX 零次。故目前只证明 **非几何、具有 FMAA 候选结构的 FRES**；尚未通过 FMAA 原生指针/字典验证动画对象、关键帧、渲染行为。不能因旧转换器要求 GLB 而把它视为坏模型。

### BARS 原始成员本轮唯一未成功转换记录

`Sound/Resource/StrcKppShip.bars` 源 SHA256
`b540dbcf48c84079d7522133973909b7bda4893b6765f4d9ad0eba9ac17f7457`，BARS 内 member index=7，offset=422,656，长度=128，成员 SHA256
`07aa12bf3bd2af6c7f5c02801b9552a617a459330fb15a0022df59c1685463ec`。原生 BWAV 头合法（1 通道，48,000 Hz，encoding_id=1），`file_samples=0`、`nonprefetch_samples=264576`、`payload_offset=128`，位于成员结束处，无内部 payload。归类 **HEADER_ONLY_NO_INTERNAL_PAYLOAD**。并未查明这个音频的真正外部采样来源或游戏 AAL 原生读取路径，不能伪造 WAV。

### 审计成果索引及下一轮

- [原始来源 SHA 和分类](../derived/3.0.3/r42_cumulative/source_delta.jsonl.gz)
- [实际转换统计](../derived/3.0.3/r42_cumulative/coverage.json)
- [L0、历史 L1/L2、L3 分层总表](../derived/3.0.3/r42_cumulative/unified_coverage.json)
- [逐成员原生 Audio/FRES 证据链](../derived/3.0.3/r42_cumulative/native_gap_matrix.json)
- [Issue #44：旧模型失败与音频缺口](https://github.com/969981/ACNH_Resources/issues/44)

R43 优先考虑剩余 **128 BARS** 的全部目标 L3 覆盖，并继续按源 SHA 去重分批处理 56,658 个 Model；另设 FMAA 原生结构转换器和 AAL 读取者验证，不把魔数查找或 CRC 候选当已恢复运行时语义。BDLI、EventFlow、Shader/GPU 仍需要格式专用 Native 验收。
