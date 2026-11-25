---
title: ImagePackCompatibilityAudit 全量图片对账
aliases: [PokerCore 图片包对账, 原版 PNG 像素比较]
tags: [acnh, images, audit]
version: "3.0.3"
status: verified
---
# ImagePackCompatibilityAudit 全量图片对账

返回 [图片专题](README.md) · [素材管理](Asset-Management.md) · [原版图片映射](Image-File-Mapping.md) · [知识库首页](../../README.md)。

## 固定输入

- PokerCore 源码提交 [24e238f743143cdb92f149d47bd61bfcff0b544a](https://github.com/MyShiLingStar/ACNHPokerCore/tree/24e238f743143cdb92f149d47bd61bfcff0b544a)，[ImgPack9/img.zip](https://github.com/MyShiLingStar/ACNHPokerCore/releases/download/ImgPack9/img.zip)，95,110,127 B；ZIP SHA256 efe734cfb300959c83db3da9a102f083421e869d1ce5f9b38768729004ae4d9d。
- 历史原版提取证据 [f09e15460d02790060a374b2ad6ba569ba9b97ed](https://github.com/969981/ACNH_Resources/tree/f09e15460d02790060a374b2ad6ba569ba9b97ed)，当前 source-png.csv 34,127 条来源行（不是独立图片数量）。按历史真实 PNG 路径去重，逐一校验 Git blob 和历史 SHA256。
- 同一历史提交 assets/images 下未出现在原版来源表的 PNG 单独分类 historical_unclassified；不假定全部为 CDN 或 PokerCore 来源。
- override.csv 固定提交，双向名称别名仅为比较候选，不改变道具实体、原版图标或生产选图。原版 NCA Git tree 必须一致。

## 对账维度

| 状态 | 证据 |
| --- | --- |
| identical_png_bytes | 实际 PNG SHA256 一致 |
| identical_rgba_different_png | 尺寸、8bit RGBA（含透明下 RGB）一致，PNG 字节不同；可能是重新编码或元数据差异 |
| different_rgba | 同尺寸 RGBA 不同；统计差异像素数、可见像素差异数、平均/最大通道绝对差、alpha 是否一致 |
| different_dimensions | 实际尺寸不同，不自动认定缩放或同一素材 |
| no_name_or_pixel_candidate | 当前对照范围内未找到名称、别名或精确像素候选；不等于原版缺失 |

同时记录 ICC SHA、gamma、原始色彩模式、透明/半透明/不透明像素数量。RGBA 比较不执行 ICC 色彩空间变换，不证明最终屏幕显示完全相同。文件名相同也不证明语义相同，保留家族及村民目录上下文。全局内容哈希允许发现改名图片，不以重复图片组合数量代替唯一文件数。第三方版本可能与 3.0.3 不一致；不据此断言解码器、修改历史或运行时行为。

## 复现及输出

[脚本](https://github.com/969981/ACNH_Resources/blob/research/Scripts/image_pack_compatibility_audit.py) · [工作流](https://github.com/969981/ACNH_Resources/blob/research/.github/workflows/acnh303-image-pack-audit.yml) · [首轮 CI #45632940762](https://github.com/969981/ACNH_Resources/actions/runs/45632940762)。

使用 Pillow 12.0.0，先运行合成图片测试及 ZIP 路径安全测试，再读取固定 ZIP（不解压写盘）、历史 PNG 实际字节。校验 ZIP SHA256 和大小、条目边界、重复路径、原始资源树及历史 PNG 哈希。输出 CSV/JSON 到 research/image-pack-audit；不提交下载 ZIP 或新游戏图片。

| 输出 | 内容 |
| --- | --- |
| poker-images.csv | 每个实际 ZIP PNG 的文件/像素 SHA、尺寸、透明统计 |
| native-images.csv | 原版来源已登记的历史 PNG |
| historical-other-images.csv | 未登记原版来源的其他历史 PNG |
| name-comparisons.csv | 精确/大小写/override 候选逐对差异 |
| poker-coverage.csv | 以第三方独立文件为分母的覆盖 |
| historical-coverage.csv | 以历史独立 PNG 路径为分母的反向覆盖 |
| errors.csv | 实际解码异常 |
| zip-non-png.json | 非 PNG 文件清单 |
| summary.json | 输入哈希、运行版本、全量计数及状态 |

全量工作流已经成功；实际结果见下方验收。

## 实际验收：2026-11-25

[CI #45632940762](https://github.com/969981/ACNH_Resources/actions/runs/45632940762) 全部成功，实际日志与归档 summary.json 对账一致；[产物 15032356444](https://github.com/969981/ACNH_Resources/actions/runs/45632940762/artifacts/15032356444)，9,801,990 B，SHA256 bd68edd69833a0afa066b9ea3ed5ba0eb15b661db7829f9440723c80767cfe67。

| 指标 | 数量 |
| --- | ---: |
| PokerCore PNG | 27085 |
| 历史原版 PNG 独立路径 | 34127 |
| 其他历史 PNG | 1553 |
| 解码异常 | 0 |
| PokerCore 有同尺寸原版名称候选 | 26442 |
| PokerCore 仅有不同尺寸原版名称候选 | 1 |
| PokerCore 无原版名称或像素候选 | 642 |
| 原版候选同尺寸配对 | 28210 |
| 原版候选不同尺寸配对 | 5483 |
| 全局 PNG SHA 或 RGBA SHA 相同的跨库文件 | 0 |

逐对 CSV 实际读取（Git blob dd87b88844e11f05a5a85c506761c7de1957c6a1）：28210 组同尺寸原版候选的四通道平均绝对差（0–255）中位数 1.62506104，均值 2.90093003，P90 4.60986328；16952 组均值≤2，26399 组≤5。所有配对 alpha 不完全相同、Gamma 元数据不相同；ICC 摘要相同。相同文件名（区分大小写）子集 27671 组中 FtrIcon 26693 组中位 1.56030273，NpcIcon 972 组中位 4.84753418。配对统计不可当作独立图片数。5483 个不同尺寸配对均为 Poker 128×128 与历史 256×256，其中 ClosetIcon 5480、CookingIcon 1、DIYRecipeIcon 2；不能单凭尺寸断言缩放，需先区分 FtrIcon/ClosetIcon 资源族。示例 FtrBabybed_Remake_0_0 平均绝对差 2.01051331、最大通道差 116；7_6 为 1.59693909、最大 80。

642 个第三方无原版候选中，7 个另有其他历史名称候选，635 个在两类历史图中均无匹配候选。样例 Axe、Bag、AbsentMindedness、AmiiboTouchGuideCtrlJoy^w 等；仍需对照 MenuIcon、ManpuIcon、Layout 内部纹理及其他家族，不能直接认定缺失原始 ZS。现有审计仅证明文件与解码像素差异，未确定具体解码器、通道处理、缩放或版本差异原因。原版源树一致，本轮没有发布新素材。
