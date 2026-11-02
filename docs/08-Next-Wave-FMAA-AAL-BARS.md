---
title: ACNH 3.0.3 下一阶段分片与 Native 格式研究
tags: [acnh303, unpack, provenance, fmaa, aal, bars]
status: in-progress
---
# 四类资源扩容及 FMAA / AAL / BARS 证据链

> [!important] 验收口径
> 有来源的 SHA-256 不等于完成语义解码；一次解码尝试也不等于生成有效产物。最终成功数必须读取 GitHub Actions 实际批次报告，不得直接取计划目标。

## 下一批原始文件

从已提交的 UnPack/_meta/batches 报告重新核实 shard 0/8：

| 类别 | 已尝试的唯一位置 | 下一批 skip_count | 实际产物目标 |
| --- | --- | ---: | --- |
| Param | 0–7 | 8 | BYML → JSON |
| Model | 0–7 | 8 | 有真正几何的 GLB 或解码像素 PNG |
| Layout | 0–7（旧运行重试一次） | 8 | 有 BNTX 时才 PNG；否则 no_output |
| Sound | 0–15 | 16 | 真正 PCM WAV |

新增 Scripts/acnh303_resume_plan.py 从已提交的来源序号、文件路径和报告解析下一段未尝试范围；路径重叠发生冲突、源候选数量变化或存在页码空洞时不静默跳过。Scripts/test_acnh303_resume_plan.py 提供四个回归用例。失败和 no_output 代表已经尝试，但仍未转换，不得计入成功覆盖率。

[四类续跑工作流](https://github.com/969981/ACNH_Resources/actions/workflows/acnh303-scaleout-next.yml) 一次依次派发 Param、Model、Layout、Sound，每类最多 8 个文件，并观察各子任务的真实结论。此前巨大的 GitHub 递归 Tree API 响应发生截断，因此实际来源选择使用完整 Git Tree 的 git ls-tree，不依赖分页网页显示。

## FMAA：材质动画数值语义

目标链路是：真实 FRES/BFRES 字节 → FMAA → MaterialAnimData / AnimCurve 帧数组 → ParamAnimInfo → tex_srt0 → FMAT 的实际材质参数。

必须对比两个不同 Curve 的真实关键帧，验证帧索引、关键值类型、插值、循环及边界条件。下一步需找出 ParamAnimInfo 指向的**真实材质字段**，再从游戏运行时记录应用结果。即使 FMAA 数组已提取，仍不能直接宣称原生材质动画播放一致。

Scripts/acnh303_fmaa_aal_native_probe.py 针对 SHA 固定的 ACNH 3.0.3 ELF64/AArch64 读取精确字面量，以及 ADR/ADRP 地址形成候选。它只给出**静态定位线索**，附近 BL 不是函数身份的确证，未命中也不是格式不存在的证据。

## AAL：外部采样实际文件读取链

动态只读证据要求逐层记录：路径 → open → 文件句柄 → read 的 offset、length、buffer → 对应来源 SHA → 消费者 → close。需要至少两条来自真实游戏资源的会话记录，区分缓存命中与实际读盘。现在没有新的真实游戏调试记录，状态仍为 **runtime-unverified**。

## BARS / AMTA v5 / BWAV

历史真实解析边界：

- BARS +0x00 Magic，+0x04 声明长度，+0x08 BOM，+0x0A 版本，+0x0C 数量，+0x10 开始 CRC32(name) 列表，其后为 metadata/audio 偏移对。
- CRC32(name) 并非已解出的明文声音名称；可能存在超出声明长度的额外尾字节，来源完整 SHA 必须保存。
- ACNH 3.0.3 AMTA v5 (0x0500) 不适用旧版 v1/v3/v4 的 DATA/MARK/STRG 解码规则。目前真实提取 v5 原始成员，只保留不透明的原始字段。
- 静态 BARS Header Reader 0x3ACA350 已有部分原生指令依据，但 AMTA v5 的循环、事件标记、播放参数与实际读取者尚无闭合证据。

[BARS 与 FMAA/AAL 专项工作流](https://github.com/969981/ACNH_Resources/actions/workflows/acnh303-bars-fmaa-aal-probe.yml) 将在原始 Sound BARS 中分片抽样四份，对同一输入分别核对 BARS 结构、AMTA 原样提取及真正可验证的 PCM WAV，保留独立报告和产物 Artifact。它同时生成 FMAA/AAL ELF 静态证据，**不会冒充完整音频或运行时语义**。

## 验收清单

- [x] 核实四类来源的独立续跑位置与 Layout 重试
- [x] 提交按证据续跑的规划器和回归测试
- [x] 提交四类分片扩容工作流
- [x] 提交 BARS / FMAA / AAL 专项静态与来源验证工作流
- [ ] 确认本轮 Actions 的绿色状态及提交产物 SHA
- [ ] FMAA 动画采样与真实 FMAT 材质字段对应
- [ ] AAL 实际游戏 open/read/close 证据
- [ ] AMTA v5 真实循环、标记及原生读取者复核

关联：[[05-Progress]]、[[07-Incremental-Batches]]、[[02-Format-Catalog]]、[[06-Evidence]]。

## 第二轮扩大后：实际 SHA-256 批次报告（2026-11-02）

第 2 次派发设置每类最多 24 个新来源，四类均产出了数据提交：

| 类别 | shard=0/8 的偏移 | 去重来源 | 实测产物 | 真正状态 |
| --- | --- | ---: | ---: | --- |
| Param | 16–39 | 24 | 24 JSON | 24 converted, 0 failed |
| Model | 16–39 | 24 | 24 GLB | 24 converted, 0 failed |
| Layout | 16–39 | 24 | 125 PNG | 14 partial, 10 no_output, 0 failed |
| Sound | 24–47 | 24 | 24 WAV | 24 converted, 0 failed |

[Param 41379697858](https://github.com/969981/ACNH_Resources/actions/runs/41379697858)、[Model 41379737898](https://github.com/969981/ACNH_Resources/actions/runs/41379737898)、[Layout 41379778052](https://github.com/969981/ACNH_Resources/actions/runs/41379778052)、[Sound 41379820695](https://github.com/969981/ACNH_Resources/actions/runs/41379820695)。共 **96 个新增来源，197 个独立验证输出**。第一轮 32/57，连续两轮合计 128 个新增来源、254 个输出。第二轮 10 个 Layout no_output 不能归类为解码失败，更不能计入成功转换。

## 与 R41–R47 已完成研究真正衔接

本分支从原研究分支 `feat/acnh303-round47-cedar-fmat-aal-io-contract` 以**同一 Git Blob**重新引入 218 个之前缺失的研究脚本和 7 份技术报告，且保留新分支现有 Scripts 文件；原始 research 数据 `derived/3.0.3/` 仍属于旧研究分支，不能因为复制程序就声明原来的二进制证据都已迁移或重算。

[[ACNH303_ROUND47_CEDAR_FMAT_AAL_TARGET_IO_EVIDENCE]] 已在 2026-11-02 的原分支 CI [41378390870](https://github.com/969981/ACNH_Resources/actions/runs/41378390870) 验证过以下真正的源数据解析：
- Cedar/积雪两份真实 FRES v9，每份 4 个 FMDL、每模型 4 个材质；8 处 `mPltTreeDecoA/B` 名字级候选；每目标材质 66 个 ShaderParam。
- 原始 `tex_srt0` ShaderParam：`Type=30`（TexSrt），`Size=24`，材质源参数数据偏移 `0x184`，初始 Mode=0、Scale=(1,1)、Rotation=0、Translation=(0,0)。`AnimDataOffset=0x10` 与 TexSrt 结构内 Translation.X 相符，但 `SubBindIndex=0xFFFF` 还未解决，**并没有运行时动画写回的证据**。
- [[ACNH303_ROUND46_TEXSRT_AAL_NATIVE_VTABLE]]：两条可核对的原始 ELF 虚表调用 `main+0x3E451FC`、`main+0x3E45218`，`BLR X8` 目标动态未知；不能直接命名 FileOpen。
- [[ACNH303_ROUND43_BARS_FULL_L3_MODEL_SCALEOUT]]：旧分支已经对全部 1,696 份 BARS 原始来源做 L3 测试；**覆盖来源不等于全部可播放**，其中 3 个 92 字节 BWAV Header-only 成员不能从不存在的内部 payload 恢复 WAV。新分支的四文件 BARS 样本属于回归证据抽样，而不是新发现的未测试 BARS。

仍未解决的关键问题转为：R47 同名材质到 Native FMAA 运行时 ShaderParam 的实际 SubBind、对象内存写回与纹理变化；R46/R47 同一真实游戏会话的虚表目标 → FileOpen/Read/Close/Buffer/源 SHA 证据。合成测试、源码静态字节、运行时文件 I/O 分级独立。

研究脚本现在位于大写 `Scripts/`；旧研究文档示例多数使用原分支小写 `scripts/`，在本分支运行需要调整路径，并为要求旧版 `derived/3.0.3/` 的研究脚本显式提供对应经过来源核验的数据。不要把没有读取到数据的调用记为成功。
