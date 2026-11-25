---
title: TextureDecoderParityAudit 原版纹理解码差分
aliases: [纹理解码一致性审计, Alpha 通道研究, 642 张图片反查]
tags: [acnh, images, astc, bntx, research]
version: "3.0.3"
status: pending-ci
---
# TextureDecoderParityAudit 原版纹理解码差分

返回 [图片专题](README.md) · [首轮全像素对账](Image-Pack-Compatibility-Audit.md) · [BNTX/BRTI 字典](BNTX-BRTI.md)。

## 固定输入与复现
使用首轮已验收的 28,210 个同尺寸原版候选配对和 642 个无原版名称/像素候选的 PokerCore 文件；固定 ImgPack9 ZIP SHA256、历史提交、原版 Git tree，重新读取真实 PNG。以配对而非独立图像为统计单位。
- [脚本](https://github.com/969981/ACNH_Resources/blob/research/Scripts/texture_decoder_parity_audit.py)
- [CI](https://github.com/969981/ACNH_Resources/actions/runs/45635363954)
- [工作流](https://github.com/969981/ACNH_Resources/blob/research/.github/workflows/acnh303-texture-decoder-parity.yml)

## 全通道对账
R/G/B/A 各自记录绝对差均值、最大值、变化像素数；Alpha 记录绝对差 0–255 直方图、带符号平均差、半透明边缘 MAE、透明/非透明迁移计数。直方图按像素加权，汇总 MAE 按配对加权，二者不能混用。RGB 假设实验仅在双方 alpha > 0 处统计：分别测试 Poker 或历史 PNG 的预乘/反预乘，以及 sRGB 与 Linear 双向标准传递函数，记录改善次数和均值。原始 RGBA PSNR 与黑/白背景合成 RGB PSNR/SSIM 分开；PSNR 完全相同以空值表示正无穷，不能当作 0。背景合成为编码值域诊断，不是 GPU 线性色彩合成。

## 原版纹理差分
原始 ZS → 既有固定解析器解压/SARC → BFRES/BNTX → BRTI 实际名称/尺寸/格式/偏移 → mip0 指针与数据边界 → block-linear GOB 去平铺 → 压缩块 SHA256 → Texture2DDecoder BGRA 转 RGBA 和 astcenc -ds/-dl 两种模式 → 两解码器间和历史/Poker 图片的指标。仅支持单层、单深度、block-linear ASTC LDR 样本；BRTI 通道选择和 tiling 字段保留原值，当前未应用任意通道重映射。固定分层样本和典型文件，保留每个失败理由。两解码器共用同一去平铺实现，不能由解码器一致性独立证明去平铺正确；仍需独立去平铺实现或 GPU 验证。BCn、GPU 原生采样和完整 mip/array 尚未实现。不能直接断言第三方使用某种工具。

参考：[Texture2DDecoder](https://pypi.org/project/texture2ddecoder/)、[astcenc](https://github.com/ARM-software/astc-encoder)、[BNTX 结构](https://github.com/Tyulis/3DSkit/blob/master/doc/BNTX.md)。

## 642 张缺口反查
以原始 Git tree 文件名为第一层，再对 Layout、MenuIcon、ManpuIcon 及其他非主图标家族、同名原始资源读取真实 ZS/BNTX/BRTI 名称；区分 source_stem_candidate、actual_brti_name、unresolved。实际 BRTI 名称候选不是像素证明；未匹配不等于整个 ROM 中不存在。记录每个扫描源的成功、无 BNTX、失败状态及 SHA256，保留一对多关系。本轮不发布 PNG，不改生产选图。

## 输出
| 产物 | 说明 |
| --- | --- |
| pair-metrics.csv | 全量配对逐通道、颜色假设、SSIM/PSNR |
| alpha-histogram.csv | 全局和资源族 Alpha 差值直方图 |
| missing-candidates.csv | 642 张图对应原始路径和实际 BRTI 候选 |
| missing-coverage.csv | 642 张独立文件逐图覆盖状态 |
| source-scan.csv | 扫描范围、解析数量及异常 |
| decoder-sample-status.csv | 原始 ASTC 样本成功/失败证据 |
| decoder-metrics.csv | 实际压缩块与解码像素差分 |
| summary.json | 汇总、证据限制和计数 |

当前仅确认代码提交并触发 CI；实际数值必须从真实验收产物读取，不预填。
