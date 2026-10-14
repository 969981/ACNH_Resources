# ACNH 3.0.3 第九轮：BARS / AMTA / BDLI-LBLI 真正解包与审计指南

> 2026-10-14。分支 `feat/acnh303-round9-bars-bdli-sections`。此文档包含可复现的操作流程和验收门槛；**执行成功数只取最新 Actions 真实报告，不能把目标数量当结果**。

## A. 保留八轮有效基线

- RomFS: `e10617820db06889e1638499478da0de_NCA/1`，Exefs 的 `/0` 不属于本轮。
- 第八轮核心 L3：1,112 不重复媒体源、2,660 个真实 GLB/PNG/WAV（214/1,874/572）。
- BARS 第一次专项：8 个真实 BARS，42 个可读取的 WAV，其中 1 个成员 vgmstream 解码失败；这是独立于核心 2,660 的音频计数。
- BDLI：36,708/36,708 文件完成真实 Zstd 解压与 LBLI 区段目录校验，**不是** 36,708 份已还原的本地化 CSV；本轮新增的是严格界内的 LBLI 原始区段导出。
- BFEVFL：先前已扫描全部 877 个 EventFlow（其中 875 个后缀 .bfevfl），已能够以 evfl + ACNH 兼容入口处理生成图结构和参数 JSON；事件具体玩法含义与执行时序仍需 native 侧核对，不应重复计数。

## B. 实际字节级原理

### BARS → AMTA/BWAV

```text
BARS header:
+0x00 "BARS"
+0x04 declared file size (u32)
+0x08 BOM (u16)
+0x0A version (u16, 常见 0x0101)
+0x0C asset count (u32)
+0x10 CRC32(name) array [count] (不可反求成名字)
+0x10+4*count table of (AMTA absolute offset, audio absolute offset)
  |
  +-- AMTA: BOM, version, declared size, versioned native header
  |       → ACNH 3.0.3 v5(0x0500) 无损原始 .amta + opaque header words/SHA256 JSON
  |       → v1/v3/v4 的 DATA/MARK/[EXT_]/STRG 结构仅在对应旧版时使用
  |
  +-- BWAV: original bounded bytes
          → pinned vgmstream CLI
          → PCM .wav (必须通过 wave frames/channel/rate + SHA256)
```

真实 ACNH 3.0.3 中的 AMTA 已观测到 v5(0x0500)；它不包含 v1/v3/v4 相同的 ASCII DATA/MARK/STRG 段标记。本轮对 v5 **只导出准确原始成员和不解释含义的头部原始 u32**，未宣称解出音乐循环语义。

BARS name CRC32 并不存储原始明文名称。BARS 文件尾可能多一个未解释字节：保留整个原始来源 SHA，按声明文件长度界内读取；不做静默修复。AMTA `DATA/MARK/STRG` 的 Magic 和偏移是静态结构，不等同于已还原声音名称、循环点和播放规则。

参考公开格式描述：
- https://nintendo-formats.com/libs/aal/bars.html
- https://nintendo-formats.com/libs/aal/bameta.html

### BDLI.zs → BDLI → LBLI

```text
Zstandard input → original SHA256 → 64 MiB hard-limit decompress
BDLI header (v2):
  +0x00 "BDLI"
  +0x04 version u16
  +0x06 section_count u16
  +0x0C header_start u32 (真实样本为 20)
  +0x10 content_offset u32 (=20 + section_count*16)
LBLI descriptor, stride=16:
  +0x00 "LBLI"
  +0x04 count_raw u32
  +0x08 relative offset u32 (基准是本条 descriptor 的起始地址)
  +0x0C raw identifier u32
section bytes [absolute_start, next_nonempty_start)
  → lossless lbli_00000_*.bin + _sections_manifest.json
```

- `count_raw == 0` 的 descriptor 可能指向头部占位地址；不要输出伪区段。
- 最后一条 payload 以原始 BDLI 的长度为边界。完整 zstd 与原始 BDLI SHA 均保留。
- ident、count、raw payload **不代表** 已确认语言映射、字节码指令或本地化字符串类型。需额外的 ELF/运行时读者证据。

## C. Windows 11 / WSL2 使用步骤

建议使用独立工作克隆（`select_acnh303_shard.py` 会修改 sparse-checkout）：

```bash
git clone --filter=blob:none --sparse -b feat/acnh303-round9-bars-bdli-sections \
  https://github.com/969981/ACNH_Resources.git acnh303-r9
cd acnh303-r9
python3 -m pip install -r scripts/requirements.txt -r scripts/requirements-media.txt
python3 -m unittest discover -s scripts -p "test_acnh303_round9_native.py" -v
```

下载并校验官方 vgmstream r2117 解码器（详细版本与命令沿用 `docs/ACNH303_UNPACK_FIELD_GUIDE.md`），令 `VGMSTREAM` 指向 `vgmstream-cli` 绝对路径。

```bash
# shard=0 已处理 8 个；本轮专挑此前未测试的 4 个
python scripts/select_acnh303_shard.py \
  --category Sound --shard 0 --shards 8 --suffix .bars \
  --skip-count 8 --max-count 4

python scripts/acnh303_bars_audio_l3.py \
  --selection selection.json --out Unpack_BARS_Round9 \
  --report derived/3.0.3/local_bars_r9 --tool-vgmstream "$VGMSTREAM"

python scripts/acnh303_bars_amta_export.py \
  --selection selection.json --out Unpack_AMTA_Round9 \
  --report derived/3.0.3/local_amta_r9
```

再用**另一份专用 sparse 工作克隆**处理 BDLI，以免覆盖刚才 selection：

```bash
python scripts/select_acnh303_shard.py \
  --category BDLI --shard 0 --shards 8 --suffix .zs \
  --skip-count 0 --max-count 8

python scripts/acnh303_bdli_section_export.py \
  --selection selection.json --out Unpack_BDLI_Sections \
  --report derived/3.0.3/local_bdli_r9
```

## D. Actions 批量执行

`.github/workflows/acnh303-round9-bars-bdli.yml` 目标为：

- 8 个 Sound/BARS 分片 × 4 个原始 BARS，共 **最多 32 个新增源**；`shard=0` 跳过之前 8 个，其他 shard 从 0 起步。
- 同一批源分别生成原生 AMTA 和独立的 PCM WAV，输入源 SHA 必须逐条相同。
- 4 个 BDLI 分片 × 8 个源，共 **最多 32 个新增 LBLI raw-section 测试源**。
- 分片报告、WAV/AMTA/LBLI 原始产物通过 Actions Artifact 暂存；`round9_cumulative/coverage.json` **只能**在所有必须的分片报告齐全、来源不重复、字段及哈希验收通过后生成和提交。
- 未成功运行、输出无字节、缺成员 hash、错误音频帧或 SHA 不符，一律不能计入成功产物。

**执行后的实测结果入口**：
- `derived/3.0.3/round9_cumulative/coverage.json`：若文件不存在，表示尚未完成累计审计；**不能**报告本轮新增媒体个数。
- GitHub Actions `ACNH 3.0.3 Round 9 BARS AMTA and BDLI Lossless Sections`：打开逐 job 日志，对照 actual source/section/WAV 记录。
- `round9_cumulative/source_manifest.jsonl.gz`：新的 32 BARS 记录与 AMTA/BWAV 双审计、32 BDLI 原始区段纪录。

## E. 后续研究而非夸大完成

下一步应针对真实 AMTA **v5 的未知字段**逆向查找 native 使用者，先证明其指针、字符串与播放参数的关系；不能按旧版 `DATA/STRG` 强行解码；BDLI 的 LBLI identifier/字段布局应该用不同语言、同结构资源对比；BFEVFL 则追 event action/query 的 Native consumer。**尚未**证明任意文件可无损反编译成游戏脚本、音乐工程或完成全资源库 L3。所有 103,400 原始文件继续保留。

## F. 第九轮真实验收记录与 v5 修正

[Actions #38496121398](https://github.com/969981/ACNH_Resources/actions/runs/38496121398) 的 8 个 BARS job + 4 个 BDLI job + 回归 + 汇总全部 SUCCESS：

- 32 个新增 BARS 原始源，实际获得 **186 个有效 PCM WAV**，加第八轮已有 42，共 40 个 BARS 容器 / 228 个独立审计的 WAV；不添加到 2660 核心 GLB/PNG/独立 BWAV 口径。
- 32 个 BDLI 来源成功提取 **4210 个真实非空 LBLI payload .bin**，保留逐成员 bytes/offset/SHA256；这不等于已解出 4210 条人类可读文本。
- 首次 AMTA 流水线并未产生 v1/v3/v4 解码结果，因为实际样本是 **v5(0x0500)**，此前按旧版 section 规则被明确保留为 `amta_parse_partial`。不把该次的 AMTA 计入成功。
- **v5 修正已完成实跑**：[Run #38496462710](https://github.com/969981/ACNH_Resources/actions/runs/38496462710) 全分片与最终累计审计 SUCCESS。32 个 BARS 中真实抽取 **208 个 AMTA v5 原生二进制成员**，每个输出重新读取并核对 SHA-256；v5 头部仅保留真实 `0x0C..0x30` 原始 u32，不声称已识别 name/loop/locale 语义。

核心 SHA 对账文件：`derived/3.0.3/round9_cumulative/coverage.json`。同名报告被后续 run 更新时，以文件中实际验证数为准。
