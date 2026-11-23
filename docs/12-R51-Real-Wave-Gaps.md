---
title: R51 原始资源实测 16 源 / 24 类验收缺口
tags: [ACNH, R51, real-source, audit, L1, native, gaps]
status: in-progress
---
# R51 · 原版 16 源真实增量实验与 Native 缺口

> [!warning] 严格证据边界
> R51 工作流用 **GitHub 稀疏检出原始 3.0.3 文件**，核验源文件 Git blob SHA-1、实际原始字节 SHA-256，以及所有实际输出 SHA-256。它**不是** 103,400 源全量字节解码，也没有 GDB/NS 运行时验证。下面是验收方法与已提交的 CI 执行说明，实际结果以 Actions artifact 为准。

## 研究输入与目标

本轮精确锁定 16 个真实 RomFS 文件；不接受自动追加未知来源，也不将历史来源计入本轮新增：

| 资源组 | 文件数 | 实测内容 / 必须保持的限制 |
|---|---:|---|
| Bcsv | 3 | 原生 CSV/JSON 结构输出 SHA；未知列哈希不乱命名 |
| BDLI (CNzh) | 3 | Zstd→BDLI/LBLI 字节边界和 section SHA；未知语言控制码不乱翻译 |
| EventFlow | 2 | 真实 BFEVFL 静态事件图及 Action/Query 计数；无 native callback 身份和执行轨迹 |
| Message | 2 | Zstd→SARC 成员目录、原始大小与 SHA；不冒充 MSBT 控制码全部解释 |
| Model | 2 | Zstd→FRES 叶子；含 Cedar FMAA 原始样本，**只按 L1**，不假 GLB |
| Layout | 2 | 原生 Layout 容器/叶子，不冒充 UI 动画渲染等价 |
| Sound | 2 | BARS 原生 Header/offset/asset magic，**无 AAL 外部 PCM** |
| **合计** | **16** | 每源独立 SHA，去重、源/输出双向关联 |

脚本：`Scripts/acnh303_r51_real_wave.py`。

## 重现

```bash
python -m pip install -r Scripts/requirements-media.txt

# 当前完整仓库；无自动安装外部几何/音频转换器
python Scripts/acnh303_r51_real_wave.py \
  --root . \
  --out UnPack_R51 \
  --report r51_real_wave.json

# 校验报告（未覆盖完整 103,400 文件时严格门应为 false）
python - <<'PY'
import json
r=json.load(open("r51_real_wave.json", encoding="utf8"))
assert r["sample_count"] == r["exact_original_git_blob_verified"] == 16
assert r["native_runtime_evidence_captured"] is False
assert r["git_tree_audit"]["strict_gate_pass"] is False
print(r["categories"])
PY
```

GitHub Actions：`.github/workflows/acnh303-r51-real-wave.yml`。工作流仅稀疏检出 16 个明确文件，用 Python 3.11 和既有解析器运行，不需要下载全部 10+ GB 原始资源；压缩包附件中包含 `r51_real_wave.json`、统一输入账本和递归原始容器报告（**不包含大型媒体输出**）。

## 验收计划与真实进度如何区分

1. **L0 原始覆盖**：完整 Git Tree 原始路径统计 103,400；本轮 16 个输入逐字节 SHA 和 blob 身份确认。
2. **L1 解包**：Yaz0/Zstd/SARC 层与原始叶子 byte-hash；BARS 未按 SARC 来伪解。
3. **L2 静态结构**：BDLI/LBLI、EventFlow 图、BARS 偏移；这些是 original-byte grounded 的结构，不等于应用运行时。
4. **L3 媒体**：本轮 Model/Layout 只做 L1，未调用 GPU/图片外部转换器，不把新 raw .bfres 文件记成 GLB/PNG。
5. **L4 原生语义**：没有 Native callback 注册/实机分支、GPU shader binding、AAL stream handle / 原始 PCM 的现场取证，**统一 NOT_CAPTURED**。

CI 的 `Git Tree` 严格数量测试会核验：`original = 103400`、`verified sample = 16`、`not in this wave = 103384`。这 103,384 个只是**不在本次样本**，不应被称为全仓历史都未尝试；应与已有 R41–R90 历史批次另做 source-SHA 精确去重。

## Native 后续验证优先级

- **BDLI/LBLI**：把原始 LBLI section offset 与真实 native 查找函数、语言 fallback、控制码消费位置联合查证；关联 [[10-Open-Issues-Triage-2026-11-23]] #18/#31/#45。
- **EventFlow**：原版 BFEVFL Action/Query 节点 → 3.0.3 main.elf 注册表/回调地址 → GDB 参数和状态变化；关联 #8/#33/#46。
- **BARS/AAL**：对 92B Header-only 样本找真实外部 Stream FileOpen/Read/Close 与 PCM buffer，避免“成功解析头部=真实音频可播放”；关联 #13/#30/#44。
- **FRES/FMAA/BNSH**：Cedar `tex_srt0` 静态曲线 + 原版 ShaderParam 内存写回 + GPU stage/material slot 验证；关联 #39/#44/#47。
- **全量验收 #15**：用 `Scripts/acnh303_full_audit.py` 的 24 类 `by_category` 差距表追踪缺失/输出碰撞/实际 SHA；完整 L0/L1/L2/L3 的严格门应保留红灯，直到真源全部验证且实际产物验收一致。

参照 [[11-Unified-Unpack-Recursive-Audit-2026-11-23]]、[[05-Progress]]、[[06-Evidence]]。
