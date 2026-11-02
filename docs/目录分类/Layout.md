---
title: Layout 资源目录
source_path: e10617820db06889e1638499478da0de_NCA/1/Layout/
output_path: UnPack/1/Layout/
tags: [romfs, layout]
status: in-progress
---
# Layout

**原始位置**：`e10617820db06889e1638499478da0de_NCA/1/Layout/`

**输出位置**：`UnPack/1/Layout/`

**已知用途 / 研究定位**：UI 布局、材质、动画和纹理；部分有真实 JSON/PNG。

**格式线索**：BFLYT、BFLAN、BNTX、Zstandard。以实际文件扩展名、魔数、字段结构和测试结果为准；目录名称本身不能证明任意文件已被完整解码。

## 检查路线
1. 使用 `Scripts/inventory_acnh303.py` 或 `Scripts/mirror_unpack.py scaffold` 记录源目录结构和实际扩展名。
2. 对单个文件识别压缩层、容器和叶子文件格式，记录输入哈希。
3. 选择 `Scripts/unpack_acnh.py` 或 `Scripts/acnh303_media_l3.py` 的对应解析器。
4. 成功后输出到相同相对路径，名字相同但后缀转换；记录输出哈希及验证等级。
5. 未完成 L3/L4 时记录限制，不造空白结果。

关联：[[../02-Format-Catalog|格式索引]] · [[../03-Unpack-Workflow|工具]] · [[../05-Progress|进度]]。
