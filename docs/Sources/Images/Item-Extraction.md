---
title: 道具、家具及服装原版图片提取
tags: [acnh, images, item, extraction]
version: "3.0.3"
---
# 道具、家具及服装原版图片提取

返回 [图片专题](README.md) · [知识库首页](../../README.md) · [图标关联](Icon-Mapping.md) · [村民图片提取](Villager-Extraction.md)。

本页复核历史固定提交 f09e15460d02790060a374b2ad6ba569ba9b97ed 的代码及实际验收 JSON；现有 research 分支不包含 assets/，下列历史输出通过固定提交访问。不是本轮重新解码。

## 1. 原始路径与命名

原始根目录：`e10617820db06889e1638499478da0de_NCA/1/Model/`。原始图标一般是 Zstd → SARC（若存在） → FRES/BFRES → 内嵌 BNTX → 单一 BRTI 纹理。原版图标不是 PNG 文件，也不需要先对 3D 家具渲染。

| 原始源文件模式 | 用途 | 历史源数 |
| --- | --- | ---: |
| Layout_FtrIcon_<stem>.Nin_NX_NVN.zs | 家具、物品及照片/海报道具成品纹理 | 25,794 |
| Layout_ClosetIcon_<stem>.Nin_NX_NVN.zs | 衣柜服装纹理 | 5,480 |
| Layout_NpcIcon_<stem>.Nin_NX_NVN.zs | NPC 头像纹理 | 488 |
| Layout_GardeningIcon_<stem>.Nin_NX_NVN.zs | 园艺界面纹理 | 383 |

旧清单 `assets/catalog/expected-png-names.txt` 含 27,531 个去重名称。脚本 source_index() 先通过 git ls-tree 枚举原始路径，不下载全部二进制；对每个安全 PNG stem 按 FtrIcon → ClosetIcon → NpcIcon 查找，保留 alternate_rom_sources。该优先级是历史导出工具选择，不是 Nintendo 运行时规则。Garden 等专用家族由后续流程补充。

## 2. 提取实现

| 步骤 | 函数/模块 | 实际行为 |
| --- | --- | --- |
| 规划 | source_index(), plan() | 读取旧清单，精确文件名查找，生成 JSON 与 sparse checkout 清单，按 cursor 分片 |
| 解压 | extract(), nested_files() | 读取原始压缩字节；按 magic 识别 Zstd/Yaz0，SARC 目录递归，拒绝不安全路径及超限解压 |
| 定位容器 | valid_bntx_slices() | 独立 BNTX 或内嵌切片；检查 NX、BOM、文件大小和边界 |
| 元数据 | parse_bntx() | 读取实际 BRTI 指针、原始名字、宽高、format code、mipmap |
| 像素 | convert() | 临时 input.bntx，调用固定 nintoolbox 的 wimgt DECODE，产生 PNG |
| 证据 | validate_png(), png_info() | Pillow 完整解码、PNG 签名与 chunk CRC、IHDR/IDAT/IEND、SHA256 |
| 命名 | export() | 仅一个 BRTI/PNG 且原始 BRTI 名等于请求 stem 时按同名发布；否则隔离组件 |
| 冲突 | pixel_comparison() | 已有图片同 SHA 复用；不同 SHA 比较 RGBA 并另存 ROM，不覆盖旧 CDN |
| 续跑 | batch JSON + next-offset.json | 原始路径、SHA、BRTI、输出路径、图片 SHA、状态逐条记录 |

实际调用：`wimgt DECODE input.bntx --dest decoded.png`。历史 CI 使用 [nintoolbox nightly-20261028](https://github.com/quatric/nintoolbox/releases/tag/nightly-20261028)，下载对应 Linux x86_64 构建并按发布方 SHA256SUMS 校验。依赖 `Scripts/requirements-media.txt`（含 Pillow>=11,<13 及 requirements.txt）。多纹理文件的解码输出顺序与 BRTI 名称的对应不能只靠序号判定。

## 3. 家具改造示例：Babybed

ItemID 79 的现有静态款式数据库是 8 个本体、7 个布料，形成 56 个普通组合候选。每个组合的原版成品图标在历史研究中有独立路径，例如：

- 原始 [Layout_FtrIcon_FtrBabybed_Remake_0_0.Nin_NX_NVN.zs](https://github.com/969981/ACNH_Resources/blob/f09e15460d02790060a374b2ad6ba569ba9b97ed/e10617820db06889e1638499478da0de_NCA/1/Model/Layout_FtrIcon_FtrBabybed_Remake_0_0.Nin_NX_NVN.zs)：BRTI FtrBabybed_Remake_0_0；当前抽样 128×128，0x2D06 ASTC 4×4 sRGB，2 mip。
- [Layout_FtrIcon_FtrBabybed_Remake_7_6.Nin_NX_NVN.zs](https://github.com/969981/ACNH_Resources/blob/f09e15460d02790060a374b2ad6ba569ba9b97ed/e10617820db06889e1638499478da0de_NCA/1/Model/Layout_FtrIcon_FtrBabybed_Remake_7_6.Nin_NX_NVN.zs)：另一独立成品图标。
- 基础模型 FtrBabybed、8 个 ReBody、7 个 ReFabric 的 16 个资源历史导出了 37 张材质纹理（6+24+7），不能当作 56 张成品图标。

[历史 Babybed 材质证据](https://github.com/969981/ACNH_Resources/blob/f09e15460d02790060a374b2ad6ba569ba9b97ed/docs/ACNH303_BABYBED_TEXTURE_FMAT_ICON_PROVENANCE.md) · [当前实际 BRTI 样本](Source-Catalog.md) · [当前款式研究](../../Items/Native-Variants.md)。

## 4. 历史输出位置（固定提交）

| 路径 | 用途 |
| --- | --- |
| [assets/images/items/](https://github.com/969981/ACNH_Resources/tree/f09e15460d02790060a374b2ad6ba569ba9b97ed/assets/images/items) | 混合已有社区 PNG 与新 ROM PNG；逐图看证据，不可仅凭目录认定来源 |
| [assets/images/items-rom/](https://github.com/969981/ACNH_Resources/tree/f09e15460d02790060a374b2ad6ba569ba9b97ed/assets/images/items-rom) | 与旧社区 PNG 冲突时独立保存 ROM 版本 |
| [assets/images/clothing-original-layout/ClosetIcon/](https://github.com/969981/ACNH_Resources/tree/f09e15460d02790060a374b2ad6ba569ba9b97ed/assets/images/clothing-original-layout/ClosetIcon) | 5,480 个衣柜源 PNG |
| [assets/images/completion-original-layout/](https://github.com/969981/ACNH_Resources/tree/f09e15460d02790060a374b2ad6ba569ba9b97ed/assets/images/completion-original-layout) | 后续 FtrIcon 与 GardeningIcon 补齐 |
| [assets/textures/babybed/](https://github.com/969981/ACNH_Resources/tree/f09e15460d02790060a374b2ad6ba569ba9b97ed/assets/textures/babybed) | 模型材质分离纹理 |
| assets/textures/items-rom/ | 多纹理或名称不符的隔离输出（仅异常出现时建立） |

历史 R50–R62：53 批 26,277 个同名源 PNG 已完成，其中 25,500 新原版、775 保留不同旧图另存、2 已有 PNG 完全相同。R62 对 27,531 个预期名称建立 26,277 同名原生 + 1,254 不同名原版候选（344 默认款式、479 村民照片、391 其他 UI、39 服装、1 版本后缀饮料）；候选名称语义仍未确认。R73 再补齐 FtrIcon 1、GardeningIcon 3、ClosetIcon 5,441，四家族共 32,145/32,145 源文件验收完成。与村民四类范围重叠，不能直接相加。

[26,277 批次汇总](https://github.com/969981/ACNH_Resources/blob/f09e15460d02790060a374b2ad6ba569ba9b97ed/assets/evidence/rom-items/reconciliation.json) · [27,531 来源索引验收](https://github.com/969981/ACNH_Resources/blob/f09e15460d02790060a374b2ad6ba569ba9b97ed/assets/evidence/rom-items/r62-all-27531-source-reconciliation.json) · [R73 四家族验收](https://github.com/969981/ACNH_Resources/blob/f09e15460d02790060a374b2ad6ba569ba9b97ed/assets/evidence/rom-completeness/r73-four-family-original-image-completeness.json)。

## 5. 本地复现

在独立的历史 worktree 或 clone 检出固定提交（不要切换或覆盖当前 research），安装依赖并准备已验证 wimgt。以下命令在该历史工作树根目录执行：

```bash
python -m pip install -r Scripts/requirements-media.txt
python Scripts/acnh303_rom_item_icons.py plan --pilot
python Scripts/acnh303_rom_item_icons.py export --wimgt /path/to/wimgt
python Scripts/acnh303_r62_full_catalog_lookup.py lookup --name FtrBabybed_Remake_0_0.png --verify-png
```

正式分片：plan --offset auto --limit 500，后续 export 使用同一 --plan-file。当前历史游标已经结束；若重验指定样本，用 pilot/明确 offset，在隔离工作树执行。补提代码 acnh303_r69_native_layout_incremental.py 以固定的 R68 缺口 CSV 作输入，不把已知缺口套用到其他版本。

[历史导出脚本](https://github.com/969981/ACNH_Resources/blob/f09e15460d02790060a374b2ad6ba569ba9b97ed/Scripts/acnh303_rom_item_icons.py) · [共用解码器](https://github.com/969981/ACNH_Resources/blob/f09e15460d02790060a374b2ad6ba569ba9b97ed/Scripts/acnh303_babybed_texture_export.py) · [PNG 校验](https://github.com/969981/ACNH_Resources/blob/f09e15460d02790060a374b2ad6ba569ba9b97ed/Scripts/acnh303_assets.py) · [补提程序](https://github.com/969981/ACNH_Resources/blob/f09e15460d02790060a374b2ad6ba569ba9b97ed/Scripts/acnh303_r69_native_layout_incremental.py) · [历史 CI](https://github.com/969981/ACNH_Resources/blob/f09e15460d02790060a374b2ad6ba569ba9b97ed/.github/workflows/acnh303-rom-item-icons.yml)。

## 6. 当前研究接入

当前 [source-catalog](Source-Catalog.md) 中 61,646 路径、7,876 个 ItemID exact ResName 候选、13,135 个静态组合图标路径是另一个统计口径，不表示旧 PNG 丢失。后续应逐路径导入历史原生 SHA、PNG SHA、BRTI 及输出 Git 路径，先建立只读 provenance registry；再决定是否复制二进制到新分支。原始 NCA 不修改，历史图片也不重复搬运。运行时 UI 选择及全部 1,254 名称语义仍待研究。
