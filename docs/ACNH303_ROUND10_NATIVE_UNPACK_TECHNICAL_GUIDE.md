# ACNH 3.0.3 第十轮：媒体扩容与 AMTA v5、LBLI、BFEVFL 原生静态研究

> 日期：2026-10-14。此文档记录**实际已执行的转换和证据**。所有“未测试”都只表示尚未执行相应的 L3 媒体转换，不能据此否定既有 L0–L2 通用结构解包。

## 1. 已审计的本轮进展（不是预估数）

原始游戏资产目录：`e10617820db06889e1638499478da0de_NCA/1/`，本研究仅针对《集合啦！动物森友会》3.0.3 版本。

| 子任务 | 第九轮后 | 第十轮新实测 | 第十轮累计 | 剩余未测源 |
| --- | ---: | ---: | ---: | ---: |
| BARS 音频容器 | 40 | **64** | **104/1696** | **1592** |
| Layout/*.zs | 232 | **48** | **280/960** | **680** |
| 独立 BWAV | 572 | **64** | **636/1146** | **510** |
| 核心 L3 媒体唯一源 | 1112 | **112** | **1224** | 不等于全库目标 |

新增实解码媒体：**195 PNG、64 独立 BWAV→PCM WAV、834 BARS 内嵌 BWAV→PCM WAV**；另有 **834 个无损 AMTA v5 原生元数据**。BARS 样本累计 40+64=104，已验证 WAV 为 228+834=**1062**，与核心媒体的 WAV **636** 分别统计，绝不可重复计入来源数。

核心媒体累计 **2919 个**，细分 **214 GLB + 2069 PNG + 636 WAV**。核心媒体统计不包含 1062 个单独审计的 BARS 音频文件，也不包含结构 JSON。新增 Layout 语义产物：**48 BFLYT JSON、153 BFLAN JSON、34 FCPX JSON，合计 235 个**；同时扫描得到 697 Pane、325 个原生材料记录、306 个动画块。48 个 Layout 全部有可解析的 UI2D 内容，但只有 26 个源有 PNG；22 个 `no_target_leaf` **不是**没有结构解包，亦不是错误 PNG。

正式报表：
- [L3 核心媒体 SHA 累计](../derived/3.0.3/media_round10_cumulative/coverage.json)，逐源 [source_manifest](../derived/3.0.3/media_round10_cumulative/source_manifest.jsonl.gz)
- [BARS PCM + AMTA v5 专项审计](../derived/3.0.3/bars_round10_cumulative/coverage.json)，[逐成员来源与哈希](../derived/3.0.3/bars_round10_cumulative/source_manifest.jsonl.gz)
- [Layout UI2D 独立审计](../derived/3.0.3/layout_semantic_round10_cumulative/coverage.json)
- [第十轮使用已有 24 个转换分片完成独立累计对账的 Actions #38497516006](https://github.com/969981/ACNH_Resources/actions/runs/38497516006)

### 24 个转换分片的执行过程与错误复盘

1. [真实解码工作流 #38497229960](https://github.com/969981/ACNH_Resources/actions/runs/38497229960) 中 **8 BARS + 8 Layout + 8 BWAV 分片全部成功**，各自的实际文件与源/输出 SHA 已逐项校验。
2. 第一次终端 `reconcile` 找不到下载后 Artifact 的固定目录，而非转换错误。保存并复用分片数据，不修改真实媒体结果，也不虚构 SHA。
3. [独立修复后的累计审计 #38497516006](https://github.com/969981/ACNH_Resources/actions/runs/38497516006) 自动递归定位 manifest，复核本轮 176 个不重复原始源与输出，成功生成正式报表。**本轮成功依据以这个审计为准**。

## 2. 新的排重逻辑：不再直接复用旧 skip-count

`scripts/acnh303_round10_select.py` 使用真实 Git 树目录：

```text
git ls-tree -rz HEAD / immutable RomFS paths
  ├─ SHA256(raw Git path bytes) 前八字节 mod 8 → shard
  ├─ 基线 A：1112 个 round8 core-media L3 源相对路径
  ├─ 基线 B：8 个 round8 BARS + 32 个 round9 BARS
  ├─ 先去重，再取每个 shard 的最多 N 个从未测试的候选
  └─ sparse-checkout 只下载本 shard 原始字节
```

保证每个批次的源文件不重复；再由 `acnh303_media_incremental_audit.py` 和 `acnh303_round10_bars_reconcile.py` 将原始路径、文件大小、源 SHA、成员 SHA、格式与输出字节对账。不得以 `--skip-count` 的历史值“盲猜”未测目录；也不得把全部未测文件直接标为 unsupported。

## 3. Windows 11 + WSL2 实际操作指南

在专用克隆中运行，避免修改其他全量工作树的 sparse 状态：

```bash
git clone --filter=blob:none --sparse -b 3.0.3 \
  https://github.com/969981/ACNH_Resources.git acnh303-study
cd acnh303-study
python3 -m pip install -r scripts/requirements.txt -r scripts/requirements-media.txt evfl
python3 -m compileall -q scripts
```

按此前 `docs/ACNH303_UNPACK_FIELD_GUIDE.md` 下载并验证 `nintoolbox` 夜间版及 `vgmstream` r2117。实测 Actions 中 Layout 由 `wimgt/wmdlt` 提取 BNTX 图像；独立 BWAV 和 BARS 嵌套成员由 `vgmstream-cli` 导出 PCM。工具源不可验证就终止，不能换成假的文件后缀转换。

### 3.1 新 Layout：PNG 和原生 UI2D 双通道

```bash
python scripts/acnh303_round10_select.py \
  --category Layout --suffix .zs --shard 0 --shards 8 --max-count 6

python scripts/acnh303_media_batch.py --root . --selection selection.json \
  --out Unpack_L3_Round10 --report-dir derived/3.0.3/local_r10_media \
  --tool-wimgt "$WIMGT" --tool-wmdlt "$WMDLT" --tool-vgmstream "$VGMSTREAM"

python scripts/acnh303_layout_semantic_shard.py --root . --selection selection.json \
  --output Unpack_UI2D_Round10 --report-dir derived/3.0.3/local_r10_ui2d
```

媒体层中的 `no_target_leaf` 只表示未发现 BNTX PNG 目标，接下来必须检查 BFLYT/BFLAN/FCPX 是否还有真实语义 JSON。FCPX 现仅能还原字体引用，无法还原字体替换优先级；BFLYT 材质原始字节不等同于渲染结果；BFLAN 数学曲线不等同于游戏真实动画求值。

### 3.2 新独立 BWAV

上述 `selection.json` 是一次一类源，**切换格式需要新的专用克隆或单独保存 manifest**。

```bash
python scripts/acnh303_round10_select.py \
  --category Sound --suffix .bwav --shard 0 --shards 8 --max-count 8

python scripts/acnh303_media_batch.py --root . --selection selection.json \
  --out Unpack_L3_Round10 --report-dir derived/3.0.3/local_r10_bwav \
  --tool-wimgt "$WIMGT" --tool-wmdlt "$WMDLT" --tool-vgmstream "$VGMSTREAM"
```

对每个 WAV 要求真正 PCM 帧、声道、采样率及输出 SHA-256 匹配，不允许只改扩展名。

### 3.3 BARS → BWAV → PCM WAV 与 AMTA v5

```bash
python scripts/acnh303_round10_select.py \
  --category Sound --suffix .bars --shard 0 --shards 8 --max-count 8

python scripts/acnh303_bars_audio_l3.py --selection selection.json \
  --out Unpack_BARS_Round10 --report derived/3.0.3/local_r10_bars \
  --tool-vgmstream "$VGMSTREAM"

python scripts/acnh303_bars_amta_export.py --selection selection.json \
  --out Unpack_AMTA_Round10 --report derived/3.0.3/local_r10_amta
```

注意：每个 BARS 原始源可能含若干媒体／元数据成员，故“64 个 BARS 源”与“834 个 WAV/834 个 AMTA”不是相同分母；每个成员拥有各自的 CRC32 名称哈希、原始偏移及成员 SHA。对于无法解码的流保留 `decode_failed`，不计为有效 PCM。

## 4. AMTA v5 实测字节矩阵（208 条第九轮原生元数据）

`scripts/acnh303_round10_native_matrix.py` 直接对第九轮完整原始成员审计进行十个 u32 字段的纵向比较，不必重复下载二进制：

```bash
python scripts/acnh303_round10_native_matrix.py \
  --round9 derived/3.0.3/round9_cumulative/source_manifest.jsonl.gz \
  --out derived/3.0.3/local_native_matrix
```

[208 AMTA v5 / 4210 LBLI 字段统计矩阵](../derived/3.0.3/r10_native_fields/matrix.json) 的主要实测现象：

| 字段偏移 | 208 条实测分布 | 已证实的范围 | 不能直接推断 |
| --- | --- | --- | --- |
| `+0x0C` | 全部 0 | 208/208 | 不等于固定“关闭”标记 |
| `+0x10` | 仅 `0x34`、`0x38` | 208/208 非零，界内、四字节对齐 | **候选内部偏移**而非已证明指针 |
| `+0x14` | 114 零，94 非零 | 非零值为 `0x48`、`0x4C` | 不是已验证的播放参数 |
| `+0x18` | 115 零、93 非零，12 种原值 | 非零值均在真实长度内 | 不能确定是否声道、循环或指针 |
| `+0x1C` | 全部非零，70 种原值 | 全部界内、四字节对齐 | 尚未证实指向哪里 |
| `+0x20` | 177 零、31 非零 | 可作为可选字段研究 | 未确认附加段类型 |
| `+0x24` | 全部非零、70 种原值 | 全部界内，但不按 4 对齐 | 原版读取方式未知 |
| `+0x28` | 208 种互异原值 | 可能用于对照 CRC，但尚无证明 | **不能直接标为名字哈希** |
| `+0x2C` | 仅 `3` 或 `5` | 208/208 | 类型/版本/通道含义未知 |
| `+0x30` | 仅 `0x201`、`0x04000101` | 208/208 | 编码或模式意义未知 |

上述判断属于 **原始字节层 L2/L3 候选结构统计**。接下来需要沿游戏 3.0.3 音频引擎的 AMTA v5 读取者，在加载、音乐播放、暂停、循环等不同情境下对应每个原生字段，且保存 `BARS source hash → AMTA member hash → native parser read → runtime outcome` 才能提升为高可信语义。不能把 v1/v3/v4 的 `DATA/MARK/STRG` 结构硬套到 v5。

## 5. BDLI-LBLI：回到真正的字段结构

第九轮 32 个真实 BDLI 源导出的 **4210 个非空 LBLI 原始区段**，可识别到 **3799 个不同的原始 identifier 值**。计数与第十轮字段矩阵一致。这是来源证据，不代表 `3799` 个自然语言字段或 `4210` 行可读本地化字符串。

- 首先把 `identifier_hex/count_raw/byte_length/SHA-256` 在不同地区、语言和资源基名之间做交叉对比。
- 再在 `LBLI` 区段原始字节中验证候选字段的索引范围、字符串编码、指针基址和记录长度。
- 最后沿 `ExeFS` 的真实本地化读取函数建立 `resource → section identifier → consumer → 游戏 UI` 证据；没有真实 Native XREF 前禁止给字段随意命名。

所有重建均应保留无损的 `*.bin`，结构化 JSON 是附属解释，不应替代原始数据。

## 6. BFEVFL：真实事件图与 Native 消费者的边界

BFEVFL 此前已完成全库 877 个 EventFlow 来源的结构扫描（其中 875 个后缀 `.bfevfl`），本轮更进一步从 **12 个实际游戏文件**生成事件节点与动作/查询/子流程引用静态索引：

- 真实事件节点 **115**：`ActionEvent=70`、`SwitchEvent=33`、`SubFlowEvent=12`。
- 观测到 **24 种 actor/action 符号**、**15 种 actor/query 符号**、**8 种 subflow 调用标识组合**。
- 示例 Native 图中引用的字符串包括 `EventFlowActionNpcChangeAIState`、`EventFlowActionNpcAISetting`、`EventFlowQueryEventFlagSystemBool` 等。它们证实真实脚本中的**静态引用名称**，不是 ELF 中实现函数的地址或执行语义。

[原生静态调用索引](../derived/3.0.3/evfl_round10_cumulative/coverage.json) 提供每个真实原始源的 SHA、EntryPoint、Actor/Action、Switch Query、SubFlow 引用以及基于图边的可达性判断。尚缺的闭环是：

```text
游戏侧触发条件
  → BFEVFL EntryPoint 选择
  → Action/Query symbol dispatch
  → ELF Native handler 地址与参数
  → 真正 gameplay 数据修改 / 状态转移
  → 返回的 Switch 分支 / SubFlow
```

不能把名称相似直接当成游戏行为生产者，也不能凭静态图推测每个分支在游戏里一定发生。下一步应该按 `Action` / `Query` 热门符号优先定位 Native 注册器、哈希匹配器与 vtable，并在游戏运行时用只读日志验证参数和事件次序。

## 7. 技术维护与发布口径

此轮审计脚本：
- `scripts/acnh303_round10_select.py`：双基线排重 + Git tree sparse shard
- `scripts/acnh303_round10_bars_reconcile.py`：BARS/AMTA 双源哈希对账与 40→104 累计
- `scripts/acnh303_round10_native_matrix.py`：AMTA v5 十个原始 u32 字段与 LBLI 数据统计
- `scripts/acnh303_round10_evfl_consumer_index.py`：原始 EventFlow 图/Action/Query 静态索引
- `scripts/acnh303_round10_release_verify.py`：对完整实际 Release 数据逐文件重新计算 SHA-256
- `acnh303-round10-native-scaleout.yml`、`acnh303-round10-reconcile-replay.yml`、`acnh303-round10-native-research.yml`：执行与审计

仍有 **1592 BARS、680 Layout、510 BWAV** 尚未按本 L3 媒体口径测试；资源格式语义层也还有 FCPX 字体回退、材质渲染、BFLAN 运行时一致性、AMTA v5 播放属性及 LBLI 字段规则，均继续保持开放。第十轮不是全库完全解包报告。
