---
title: ACNH 3.0.3 FtrBabybed ReBody ReFabric 原始纹理与材质结构证据
tags: [acnh303, babybed, bfres, bntx, brti, fmat, assets]
status: source-verified-runtime-binding-unverified
---
# FtrBabybed：8×7=56 种图标的来源与当前证据

> [!warning] 关键边界
> 从原始资源提取并验证了 37 张模型纹理 PNG；这不是 56 张物品图标。FMAT 源结构存在不等于材质纹理绑定和原版渲染过程已经证实。

## 1. 核验结果（2026-11-02）

- 输入来自 3.0.3_Unpack 的 e10617820db06889e1638499478da0de_NCA/1/Model，原始 FtrBabybed 基础文件 1 个、ReBody 8 个、ReFabric 7 个，共 16 个。
- 原始 16/16 经 zstd→FRES→BNTX/BRTI 真正解析成功，结构和源 SHA-256 在 assets/evidence/babybed_bntx_native.json。
- 原版基础 BFRES 的 FMDL 模型数为 **1**，模型名 **FtrBabybed**，FMAT 有 **3** 份真实材质：**mBody、mReBody、mReFabric**。
- 8 份 ReBody 与 7 份 ReFabric 的模型数为 **0**；它们是独立的纹理来源，而不是此解析器看到的独立 FMDL 模型。其绑定更新的 Native 逻辑仍未定位。
- 经既有 nintoolbox wimgt + Pillow 完整像素解码、PNG CRC 与 SHA-256 校验后，**37/37 原始模型纹理**以数字命名导出到 assets/textures/babybed/。
- 用户 TXT 目录清单中确实存在 56 个 FtrBabybed_Remake_0_0.png … _7_6.png 预期文件名，但目前 **0/56 完整物品图标 PNG** 来自直接的原版素材证据。

## 2. 原始 BRTI 纹理

| 资源 | BRTI 名称 | PNG 数量 |
|---|---|---:|
| 基础 FtrBabybed | mBody_Alb, mBody_Mix, mBody_Nrm, mReFabric_Mix, mReFabric_Mix2, mReFabric_Nrm | 6 |
| ReBody0–7，每份 | mReBody_Alb, mReBody_Mix, mReBody_Nrm | 8×3=24 |
| ReFabric0–6，每份 | mReFabric_Alb | 7×1=7 |
| **合计** | 16 份 BNTX 原始资源 | **37** |

按实际源码顺序记录纹理及其尺寸/格式；导出的 texture_000.png 与 BRTI[0] 对应关系仍是索引候选，需要验证 wimgt 索引约定，不能擅自改名。

## 3. 保守的模型组合解释

基础模型的三个材质标签可与 BNTX 的主题分组一致地解释为固定主体 mBody、可换主体 mReBody、可换布料 mReFabric。**这只是可测试的结构假设**：确认真正组合还需要追踪原版 FMAT sampler/ref、外部 ReBody/ReFabric 文件装载及覆盖、shader texture bindings，以及渲染的缩略图输出路径。不能把 BNTX Alb 当作已绘制好的最终图片。

## 4. 可重现脚本

```bash
python -m pip install -r Scripts/requirements-media.txt
python Scripts/probe_acnh_babybed_textures.py --root .
python Scripts/probe_acnh_babybed_fmat.py --root .
python Scripts/acnh303_babybed_texture_export.py --root . --wimgt /path/to/wimgt
python Scripts/acnh303_assets.py --prefix FtrBabybed_ --report assets/evidence/babybed-png-coverage.json audit
```

JSON/PNG 来源：

- assets/evidence/babybed_bntx_native.json — 原生 BRTI 名字、格式与源哈希。
- assets/evidence/babybed-fmat-candidates.json — FMDL/FMAt/ShadeParam 静态结构及尚未验证的绑定。
- assets/textures/babybed/_texture_evidence.json — 每张实际 PNG 的路径、尺寸、SHA-256、wimgt 输出名与 BRTI 名字索引候选。
- assets/evidence/babybed-png-coverage.json — 56 张完整图标尚未提供或重建时如实标记缺失。

CI：
- [BNTX 来源与素材核验](https://github.com/969981/ACNH_Resources/actions/runs/41385281599)
- [37 张真正 BNTX 模型纹理导出](https://github.com/969981/ACNH_Resources/actions/runs/41385550129)
- [FMAT 结构验证](https://github.com/969981/ACNH_Resources/actions/runs/41385676920)

## 5. 下一技术关口

1. 在基础 FtrBabybed FMAT 中恢复三个材质的 TextureRef、SamplerRef、原始纹理名及运行时替换入口。
2. 用 ReBody0/1 与 ReFabric0/1 做 2×2 控制样本，对比原版运行时 sampler 绑定、材质复制、差分纹理。
3. 定位游戏物品缩略图真实源（独立 UI 图集、Nin_NX_NVN/UILayout 或 Runtime offscreen render）；只有实际像素及相同视角校验通过后才写入 assets/images/items/FtrBabybed_Remake_X_Y.png。

## 6. 真实完整图标：社区 CDN 56/56 已导入（与原版渲染研究分开）

2026-11-02 在 GitHub Actions [Run 41386718647](https://github.com/969981/ACNH_Resources/actions/runs/41386718647) 上实际访问 `https://acnhcdn.com/latest/FtrIcon/FtrBabybed_Remake_i_j.png`，全部 56 个组合均返回有效 PNG。每张分辨率 128×128，56 个独立 SHA-256，合计约 994 KB。验证包括真实网络 200 回应、PNG 签名与 CRC、Pillow 像素解码和源 URL 审计。

- **已实际存在**：`assets/images/items/FtrBabybed_Remake_0_0.png` 至 `FtrBabybed_Remake_7_6.png`。
- **逐张验证**：`assets/evidence/icon-cdn/prefix-FtrBabybed_-000000-000056.json`。
- **独立的原版解码结果**：`assets/textures/babybed/` 仍为 37 张 BFRES/BNTX 原始模型纹理；两组不等价。
- **未完成**：原版运行时完整图标渲染/像素一致性验证，仍不可将社区图片认定为 Native 运行时生成。

其余 27,531 个命名条目由 `Scripts/acnh303_icon_cdn_import.py` 和定时 GitHub Actions 分批验证；无效图片或 404 只计入失败来源，不创建伪造素材。
