---
title: 原版图片、图标与纹理素材
tags: [acnh, assets, texture, moc]
version: "3.0.3"
---
# 原版图片、图标与纹理素材

返回 [知识库首页](../../README.md) · [商品专题](../../Items/README.md) · [改造款式](../../Items/Native-Variants.md)。

原始根目录：[RomFS / 1](https://github.com/969981/ACNH_Resources/tree/75e065bbf08561e762f944d6db73e8cc1ed12153/e10617820db06889e1638499478da0de_NCA/1)。以下路径均相对此目录；原始文件只读。PNG 是解码/导出格式，不假定原版直接存放 PNG。

## 一、素材位置与用途

| 原始目录或文件名模式 | 中文用途 | 格式与证据 |
| --- | --- | --- |
| Model/Layout_FtrIcon_*.Nin_NX_NVN.zs | 家具及物品图标、改造组合图标 | 历史原始 BNTX 解码；当前逐文件目录见审计 |
| Model/Layout_ClosetIcon_*.Nin_NX_NVN.zs | 衣柜服装图标 | 同上 |
| Model/Layout_NpcIcon_*.Nin_NX_NVN.zs | NPC 图标族 | 历史候选路径规则；实际数量以树审计为准 |
| Model/Layout_其他族_*.Nin_NX_NVN.zs | 其他 UI 图像、图标资源 | 按实际名称分族，具体使用者待核实 |
| Model/Ftr*.Nin_NX_NVN.zs | 家具模型及关联材质纹理 | BFRES/FRES；可内嵌 BNTX |
| Model/*ReBody*.Nin_NX_NVN.zs | 家具本体改造资源 | 不是最终合成图标 |
| Model/*ReFabric*.Nin_NX_NVN.zs | 家具布料改造资源 | 同上 |
| Model/*Tex*.Nin_NX_NVN.zs | 服装等纹理命名资源 | 名称线索，实际内容以文件头为准 |
| Layout/*.Nin_NX_NVN.zs | 界面布局、图像引用、动画 | 当前 Git Tree 960 文件；历史 FLYT/FLAN 解析 |
| Font/*.sarc.zs | 位图字体、可缩放字体等 | 9 个归档；内部格式待样本核验 |
| Effect/*.szs | 粒子特效资源 | 2 个；不能仅按扩展名认定压缩算法 |
| Env/GameEnv.szs | 环境渲染资源 | 1 个；内部纹理待实读 |
| Stage/、Pack/、Videogame/、System/、Swkbd/、Shader/ | 场景、打包资源、小游戏、系统、键盘与着色器 | 可能含图像相关数据，必须按实际容器成员区分 |
| Movie/ | 视频资源 | 不等同静态图片 |

## 二、格式分层

| 格式 | Magic / 识别 | 作用 |
| --- | --- | --- |
| Zstandard | 28 B5 2F FD | 外层压缩；常见 .zs |
| Yaz0 | Yaz0 | 外层压缩；.szs 需实读 |
| SARC | SARC | 多文件容器；内部路径来自目录表 |
| BFRES | FRES | Nintendo 模型、材质、骨骼及资源；可能嵌入 BNTX |
| BNTX | BNTX | Switch 原生纹理容器；NX 平台、BRTI 纹理描述 |
| BRTI | BRTI | 纹理名称、尺寸、格式码、mipmap 等元数据 |
| BFLYT | FLYT | UI 布局、面板、材质和纹理引用 |
| BFLAN | FLAN | UI 动画及纹理相关引用 |
| PNG / DDS | PNG 签名 / DDS | 转换导出格式，不能混同原始容器 |

BNTX 内可能使用 GPU 压缩或未压缩像素格式。具体 BC/ASTC/RGBA 等编码必须按 BRTI format code 对照验证；不得仅凭文件名推断。解码须处理 block-linear swizzle、mipmap、数组/层、通道映射、透明度与色彩空间。

## 三、商品图片的具体原始路径

- 家具婴儿床改造图标：[Layout_FtrIcon_FtrBabybed_Remake_0_0.Nin_NX_NVN.zs](https://github.com/969981/ACNH_Resources/blob/75e065bbf08561e762f944d6db73e8cc1ed12153/e10617820db06889e1638499478da0de_NCA/1/Model/Layout_FtrIcon_FtrBabybed_Remake_0_0.Nin_NX_NVN.zs)。
- 服装图标：[Layout_ClosetIcon_TopsTexMarinesuitNormalLNook0.Nin_NX_NVN.zs](https://github.com/969981/ACNH_Resources/blob/75e065bbf08561e762f944d6db73e8cc1ed12153/e10617820db06889e1638499478da0de_NCA/1/Model/Layout_ClosetIcon_TopsTexMarinesuitNormalLNook0.Nin_NX_NVN.zs)。
- 基础模型：[FtrBabybed.Nin_NX_NVN.zs](https://github.com/969981/ACNH_Resources/blob/75e065bbf08561e762f944d6db73e8cc1ed12153/e10617820db06889e1638499478da0de_NCA/1/Model/FtrBabybed.Nin_NX_NVN.zs)。
- 本体、布料：[FtrBabybedReBody0](https://github.com/969981/ACNH_Resources/blob/75e065bbf08561e762f944d6db73e8cc1ed12153/e10617820db06889e1638499478da0de_NCA/1/Model/FtrBabybedReBody0.Nin_NX_NVN.zs) · [FtrBabybedReFabric0](https://github.com/969981/ACNH_Resources/blob/75e065bbf08561e762f944d6db73e8cc1ed12153/e10617820db06889e1638499478da0de_NCA/1/Model/FtrBabybedReFabric0.Nin_NX_NVN.zs)。

历史原生图标匹配：PNG stem → Model/Layout_FtrIcon_stem → ClosetIcon → NpcIcon（存在性和 BRTI 名称均需验证）。一个文件若包含多个纹理或名字不匹配，不能直接选择第一个纹理当商品图。改造组合文件存在也不证明组合可选、实体编码正确或运行时选择正确。

## 四、如何提取

1. 从原始路径读取字节，记录 Git Blob / SHA256。
2. 按 magic 识别压缩层；Zstd/Yaz0 解压；若为 SARC 则遍历实际成员。
3. 对独立 BNTX 或 BFRES 内嵌的合法 BNTX，校验 BOM、NX、长度及 BRTI 指针。
4. 读取纹理原名、宽高、format code、mip count；按格式解码并去 swizzle，再输出 PNG（或保留 DDS 等纹理格式）。
5. 校验 PNG 签名、CRC、尺寸、SHA256；保留源成员/纹理映射。
6. 对 UI 合成图，另外研究 BFLYT/FLAN 材质与面板、运行时消费者；不能以模型贴图替代最终图标。

历史可复用代码（固定提交）：
- [acnh_formats.py](https://github.com/969981/ACNH_Resources/blob/f09e15460d02790060a374b2ad6ba569ba9b97ed/Scripts/acnh_formats.py) — 容器及文件头。
- [probe_acnh_babybed_textures.py](https://github.com/969981/ACNH_Resources/blob/f09e15460d02790060a374b2ad6ba569ba9b97ed/Scripts/probe_acnh_babybed_textures.py) — 实际 BRTI 名称、尺寸及格式。
- [acnh303_babybed_texture_export.py](https://github.com/969981/ACNH_Resources/blob/f09e15460d02790060a374b2ad6ba569ba9b97ed/Scripts/acnh303_babybed_texture_export.py) — 历史 BNTX 转 PNG 路线（wimgt，须验证具体构建支持）。
- [acnh303_rom_item_icons.py](https://github.com/969981/ACNH_Resources/blob/f09e15460d02790060a374b2ad6ba569ba9b97ed/Scripts/acnh303_rom_item_icons.py) — 图标源匹配与 PNG 校验。
- [原生 UI 纹理引用](https://github.com/969981/ACNH_Resources/blob/f09e15460d02790060a374b2ad6ba569ba9b97ed/Scripts/acnh303_r65_ui2d_texture_consumers.py) — FLYT/FLAN 静态引用，不等于运行时渲染。
- [历史 R50–R62 图标证据恢复](https://github.com/969981/ACNH_Resources/blob/f09e15460d02790060a374b2ad6ba569ba9b97ed/Scripts/acnh303_r50_r62_icon_source_recovery.py) — 26,277 个历史报告行基线；不视为本轮重验 PNG。

## 五、与 BCSV/MSBT 的关系

[ItemParam](../BCSV/ItemParam.md) 提供物品身份和资源关联线索，[改造款式](../../Items/Native-Variants.md) 提供本体和布料候选，[MSBT 原始文件目录](../Message/Members/README.md) 提供文本标签。三者与原生图片来源应独立存储再按证据关联。网页或机器人只消费已验证映射，不以文件名自动替代 ItemID。

## 六、证据状态和后续

本页是素材源文件及格式研究入口。当前目录和历史代码已读取；当前分支尚未在本轮全量解码像素。下一步通过原始 Git Tree 清点全部文件、按资源族分组，并抽取实际容器 magic、BRTI 元数据。对于尚未识别的资源保留 unknown；PNG 与运行时图标分开验收。
