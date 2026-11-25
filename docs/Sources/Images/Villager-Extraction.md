---
title: 村民头像、照片、海报与照片道具提取
tags: [acnh, images, npc, villager]
version: "3.0.3"
---
# 村民头像、照片、海报与照片道具提取

返回 [图片专题](README.md) · [知识库首页](../../README.md) · [道具图片提取](Item-Extraction.md)。

本页复核历史固定提交 f09e15460d02790060a374b2ad6ba569ba9b97ed 的源码、五批原始提取报告和独立验收 JSON。当前 research 未复制 assets/，实际历史 PNG 从固定提交访问。

## 1. 四种原版图片

原始根目录为 `e10617820db06889e1638499478da0de_NCA/1/Model/`。

| 类别 | 原始文件前缀与后缀 | 源文件 / PNG | 历史输出目录 |
| --- | --- | ---: | --- |
| photo 照片 | Layout_NpcBromide_* | 481 / 481 | [photos](https://github.com/969981/ACNH_Resources/tree/f09e15460d02790060a374b2ad6ba569ba9b97ed/assets/images/villager/photos) |
| icon 头像 | Layout_NpcIcon_* | 488 / 488 | [icons](https://github.com/969981/ACNH_Resources/tree/f09e15460d02790060a374b2ad6ba569ba9b97ed/assets/images/villager/icons) |
| poster 海报道具 | Layout_FtrIcon_PosterNpc* | 486 / 486 | [posters](https://github.com/969981/ACNH_Resources/tree/f09e15460d02790060a374b2ad6ba569ba9b97ed/assets/images/villager/posters) |
| bromide_item 照片道具 | Layout_FtrIcon_BromideNpc*_Remake_0_0 | 479 / 479 | [bromide-items](https://github.com/969981/ACNH_Resources/tree/f09e15460d02790060a374b2ad6ba569ba9b97ed/assets/images/villager/bromide-items) |
| 合计 | 四个不同用途集合 | 1,934 / 1,934 | [villager](https://github.com/969981/ACNH_Resources/tree/f09e15460d02790060a374b2ad6ba569ba9b97ed/assets/images/villager) |

均追加 .Nin_NX_NVN.zs 后缀。照片和头像并非从 NPC 三维模型截图，也非外部 CDN；均是 Nintendo 原始资源的单纹理解码。不同类源文件集合不一致（例如照片有 NpcSpRcmt、海报有替代后缀 _2），不可将差值称为提取失败。1,934 不是村民人数，也不是全部照片框改造图标数。NpcIcon 及 Poster/Bromide FtrIcon 与道具四家族统计重叠。

## 2. 实际原版照片证据

源：[Layout_NpcBromide_NpcNmlAnt00.Nin_NX_NVN.zs](https://github.com/969981/ACNH_Resources/blob/f09e15460d02790060a374b2ad6ba569ba9b97ed/e10617820db06889e1638499478da0de_NCA/1/Model/Layout_NpcBromide_NpcNmlAnt00.Nin_NX_NVN.zs)。

| 项目 | 原始记录 |
| --- | --- |
| 压缩源字节数 | 36,075 |
| 压缩源 SHA256 | 93b5030c4a9b6d9f248754d6f7e14871737b44819a389a8b97ee1e426a36ed34 |
| 容器层级 | zstd / SARC / output.bfres |
| BNTX 嵌入偏移 | 4096 (0x1000)，相对 BFRES 叶节点 |
| BNTX SHA256 | e4d3fe468712fafce3cc977bbfe81a3c636a7a98ce5cab298d2629447085be15 |
| BRTI 名称 | NpcNmlAnt00 |
| 尺寸 | 256×256 |
| 格式码 | 0x00001A06 (BC1 sRGB) |
| mip count | 9 |
| BRTI 偏移 | 0x200 |
| name 偏移 | 0x1B8 |
| 输出 PNG 字节数 | 65,668 |
| PNG SHA256 | dff6a3e3fdae2ed08176fde134de7f0164b7ba7dd43c5a3df0cffc5810a2abf8 |
| 状态 | one_original_rom_texture_exported |

[实际 PNG NpcNmlAnt00.png](https://github.com/969981/ACNH_Resources/blob/f09e15460d02790060a374b2ad6ba569ba9b97ed/assets/images/villager/photos/NpcNmlAnt00.png) · [原始批次 JSON](https://github.com/969981/ACNH_Resources/blob/f09e15460d02790060a374b2ad6ba569ba9b97ed/assets/evidence/rom-villager/batch-0000-0250.json)。

## 3. 提取流程及命名转换

acnh303_villager_rom_extract.py 的 sources() 按 FAMILIES 固定顺序及文件名排序，生成确定的 source list。去掉 .Nin_NX_NVN.zs 和该类别的 Layout 前缀，再加 .png：

| 原版 stem（去压缩后缀） | 输出文件 |
| --- | --- |
| Layout_NpcBromide_NpcNmlAnt00 | photos/NpcNmlAnt00.png |
| Layout_NpcIcon_ant00 | icons/ant00.png |
| Layout_FtrIcon_PosterNpcNmlAnt00 | posters/PosterNpcNmlAnt00.png |
| Layout_FtrIcon_BromideNpcNmlAnt00_Remake_0_0 | bromide-items/BromideNpcNmlAnt00_Remake_0_0.png |

convert_one() 复用道具的 extract()/convert()，读取原始 SHA、BNTX 成员及 offset，检查真实 BRTI/PNG 数量及名字。仅单纹理且名称一致时允许进入上述目录，多纹理或名字不匹配则输出 components，不伪造合成图。同名不同 SHA 保留冲突不覆盖；临时 .incomplete 通过检查再原子替换。逐源尺寸和像素验证由 Pillow.Image.load 及 PNG CRC/SHA 实现。

pilot 每个家族选 N 个，正式按全源游标处理，最多每批 500；历史 5 个批次区间为 0–250、250–500、500–1000、1000–1500、1500–1934。acnh303_villager_rom_verify.py 独立校验连续范围、原始路径、BRTI、PNG、源和输出 SHA，历史报告明确 original_source_sha256_reverified=true。

[1,934 张独立验收 JSON](https://github.com/969981/ACNH_Resources/blob/f09e15460d02790060a374b2ad6ba569ba9b97ed/assets/evidence/rom-villager/reconciliation.json) · [完整五批证据目录](https://github.com/969981/ACNH_Resources/tree/f09e15460d02790060a374b2ad6ba569ba9b97ed/assets/evidence/rom-villager) · [原始导出文档](https://github.com/969981/ACNH_Resources/blob/f09e15460d02790060a374b2ad6ba569ba9b97ed/docs/ACNH303_ROM_VILLAGER_PHOTO_EXTRACTION.md)。

## 4. 与 NPC 数据表及 MSBT 关联

历史 R82 以 NmlNpcParam / SpNpcParam 的 ResName 为源身份，保留 npc_type/source_index 及 UniqueID，不能将 PNG 顺序当作 NPC ID。对头像：从 ResName 去 NpcNml 或 NpcSp 后转小写，与 BRTI 原名小写唯一匹配。对照片直接匹配 ResName；海报仅去 Poster 前缀；照片道具仅去 Bromide 前缀及 _Remake_0_0 后缀。不得自动去除 _2 或其他造型后缀，也不按中文名称模糊关联。不能唯一匹配则 original_image_unlinked。

名称与口头禅来自 [MSBT 专题](../Message/README.md) 中 Npc/STR_NNpcName.msbt、STR_SNpcName.msbt 等原版标签；语言名称、NPC 身份、图片来源应保持独立关联。原版 NPC 存在也不表示可邀请或可搬入。

[R82 原始 NPC 图片关联源码](https://github.com/969981/ACNH_Resources/blob/f09e15460d02790060a374b2ad6ba569ba9b97ed/Scripts/acnh303_r82_villager_original_sources.py)；其中 npc_image_source 保存 category、source_rom_path、source_rom_sha256、png_path、png_sha256、native_BRTI_name、npc_res_name_exact、mapping_evidence、width、height。

## 5. 本地复现和精度边界

在独立历史工作树根目录安装已验证依赖和解码器：

```bash
python -m pip install -r Scripts/requirements-media.txt
python Scripts/acnh303_villager_rom_extract.py --root . --wimgt /path/to/wimgt --pilot 3
python Scripts/acnh303_villager_rom_extract.py --root . --wimgt /path/to/wimgt --pilot 0 --offset auto --limit 500
python -m unittest discover -s Scripts -p 'test_acnh303_villager_rom_verify.py' -v
python Scripts/acnh303_villager_rom_verify.py --root . --expect 1934 --require-source-files
```

历史对照 ZIP 的三张照片样本 α 一致、RGB 最大误差 1/255；头像样本也有最大 1/255 差异。PNG 压缩无损不表示从有损 GPU 压缩恢复未压缩原始美术图，不保证不同解码器逐通道相同，不保证游戏实际 UI 合成。四家族验收不涵盖模型重绘、所有照片框款式、游戏运行时选图。

[提取脚本](https://github.com/969981/ACNH_Resources/blob/f09e15460d02790060a374b2ad6ba569ba9b97ed/Scripts/acnh303_villager_rom_extract.py) · [独立验证脚本](https://github.com/969981/ACNH_Resources/blob/f09e15460d02790060a374b2ad6ba569ba9b97ed/Scripts/acnh303_villager_rom_verify.py) · [历史 CI 工作流](https://github.com/969981/ACNH_Resources/blob/f09e15460d02790060a374b2ad6ba569ba9b97ed/.github/workflows/acnh303-villager-rom-extract.yml)。

当前 research 尚无新一轮 PNG 像素复验；后续把历史 source SHA、PNG SHA、真实图路径和 NPC 唯一关联作为独立数据层导入图片数据库，保留无匹配和多个用途。不要直接覆盖当前原版资源或将历史图片视为当前分支已存在。
