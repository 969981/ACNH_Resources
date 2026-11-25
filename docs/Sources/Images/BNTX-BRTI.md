---
title: BNTX 与 BRTI 原生纹理格式字典
tags: [acnh, bntx, texture]
---
# BNTX 与 BRTI 原生纹理格式字典

返回 [图片素材专题](README.md) · [知识库首页](../../README.md)。

## 证据分层

ACNH 原始样本通过历史固定解析器的真实字节读取：外层压缩、FRES、BNTX、BRTI、名称、宽高、format code 和 mip count。通用格式字段来自公开逆向文档及历史解析器结构，并不代表本轮已逐一验证所有字段的运行时语义。不同版本或解码工具的 tile-mode 约定存在差异，不能直接混用。

## BNTX 头部

| 偏移 | 类型 | 中文含义 | 状态 |
| --- | --- | --- | --- |
| 0x00 | char[4] | BNTX 标识 | 实际解析器检查 |
| 0x0C | u16 BOM | 字节序 | 检查 |
| 0x1C | u32 | 容器大小 | 内嵌切片检查 |
| 0x20 | char[4] | NX 平台 | 检查 |
| 0x24 | u32 | 纹理数量 | 读取 |
| 0x28 | u64 | BRTI 指针数组地址 | 读取、边界检查 |
| 0x30 | u64 | 纹理数据块地址 | 通用格式候选 |
| 0x38 | u64 | 字典地址 | 通用格式候选 |

## BRTI 纹理描述符（相对 BRTI 起始）

| 偏移 | 类型 | 中文含义 | 状态 |
| --- | --- | --- | --- |
| 0x00 | char[4] | BRTI 标识 | 已检查 |
| 0x10 | u8 | flags | 通用格式 |
| 0x11 | u8 | 存储维度 | 通用格式 |
| 0x12 | u16 | tile mode | 通用格式，具体枚举待实测 |
| 0x14 | u16 | swizzle | 通用格式 |
| 0x16 | u16 | mipmap 数量 | 实际读取 |
| 0x1C | u32 | 像素格式编码 | 实际读取 |
| 0x24 | u32 | 宽度 | 实际读取 |
| 0x28 | u32 | 高度 | 实际读取 |
| 0x2C | u32 | 深度 | 通用格式 |
| 0x30 | u32 | 数组层数 | 通用格式 |
| 0x34 | 8 bytes | 纹理布局参数 | 通用格式，位域待核对 |
| 0x50 | u32 | 图像数据大小 | 通用格式 |
| 0x54 | u32 | 数据对齐 | 通用格式 |
| 0x58–0x5B | u8×4 | RGBA 通道映射 | 通用格式 |
| 0x5C | u8 | 图像维度 | 通用格式 |
| 0x60 | u64 | 原始纹理名称地址 | 实际读取 |
| 0x68 | u64 | 容器关联地址 | 通用格式 |
| 0x70 | u64 | mipmap 数据地址表 | 通用格式 |

原始名称使用 u16 长度及 UTF-8 字节。实际像素数据位于纹理数据区，不是 BRTI 名称所在位置。实际样本见 [全量素材分类及抽样纹理](Source-Catalog.md)。

## 像素格式字典

通用 nn::gfx 格式编码由高字节 channel format 和低字节 type format 组合。UNORM=01、SNORM=02、UINT=03、SINT=04、FLOAT=05、SRGB=06、UFLOAT=0A。此表是解码参考，不宣称每种编码均出现在 ACNH 资源中。

| 高字节 | 编码族 | 像素或块大小 | 说明 |
| --- | --- | --- | --- |
| 02 | R8 | 1 B/像素 | 单通道 |
| 09 | RG8 | 2 B/像素 | 双通道 |
| 0B | RGBA8 | 4 B/像素 | 四通道，未压缩 |
| 0C | BGRA8 | 4 B/像素 | 通道排列不同 |
| 1A | BC1 / DXT1 | 8 B / 4×4 | 块压缩 |
| 1B | BC2 / DXT3 | 16 B / 4×4 | 块压缩 |
| 1C | BC3 / DXT5 | 16 B / 4×4 | 块压缩 |
| 1D | BC4 | 8 B / 4×4 | 单通道块压缩 |
| 1E | BC5 | 16 B / 4×4 | 双通道块压缩 |
| 1F | BC6H | 16 B / 4×4 | HDR 块压缩 |
| 20 | BC7 | 16 B / 4×4 | 高质量块压缩 |
| 2D–3A | ASTC 2D | 16 B/块 | 块尺寸 4×4 至 12×12，须按具体码选择 |

ASTC 的中间块尺寸按 4×4、5×4、5×5、6×5、6×6、8×5、8×6、8×8、10×5、10×6、10×8、10×10、12×10、12×12 顺序。块压缩数据须先按正确块宽高计算 pitch、去 swizzle，再解码；不能按普通 RGBA 字节数组读取。PNG 保存已解码像素时无损，但无法恢复源有损 GPU 编码之前的图像，也不应默认等同游戏 UI 合成结果。

## 参考与复现

- [Nintendo File Formats: BNTX](https://nintendo-formats.com/libs/nw/bntx.html)：4.0.0 通用格式，ACNH 适用字段逐样本核验。
- [3DSkit BNTX](https://github.com/Tyulis/3DSkit/blob/master/doc/BNTX.md)：社区格式参考。
- [固定历史 BNTX 实读解析器](https://github.com/969981/ACNH_Resources/blob/f09e15460d02790060a374b2ad6ba569ba9b97ed/Scripts/probe_acnh_babybed_textures.py)：ACNH 实际 BRTI 名称和字段解析。
- [本轮脚本](https://github.com/969981/ACNH_Resources/blob/research/Scripts/image_sources.py)：源路径与真实样本。
