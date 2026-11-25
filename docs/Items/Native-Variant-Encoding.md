# ReFabricMode 与家具实体写入证据

返回 [商品专题](README.md) · [知识库首页](../README.md) · [款式数据库](Native-Variants.md)。

固定原版 3.0.3 Ghidra C 提交 f09e15460d02790060a374b2ad6ba569ba9b97ed；本轮是静态反编译证据和 Python 模型对账，未执行游戏、未确认所有实体类别实际偏移。

| 函数 | 已恢复行为 |
| --- | --- |
| 01AF1F00 | body setter：0xFFF8 + 3位索引，非零count与索引上界 |
| 01AFDCC4 | 普通布料：清模式0xFFE7，再用0xE01F写8位索引 |
| 01AFDD70 | 通用布料：要求原生类型2，模式1，写入上界256；01AFEE38资源消费上界220 |
| 01AFDE50 | 自定义设计：原生类型1/2，模式2，普通索引0..99；特殊设计输入低7位<9，加100 |
| 01AE3A80 | mode3归一化为0；mode2常规上界100，有条件108（独占上界，108回退0） |
| 01AFF000 | 通用布料资源读取 TextureResName（5AEBBFB5） |
| 01AFEEF4 | mode1/2先取基础ReFabric0；mode0按实际索引选择ReFabricN |
| 01AFD600 / 01AE4D10 | 按原生类别/参数类型返回 wrapper+0xC、+0xE 或NULL |
| 02BD74DC | 选择三个布料setter、按需写body，输出两个32位实体字 |
| 01AF22A0 / 01AF1F60 | ReBodyPatternRejectNum E0563503，限制自动余数选择池，不是直接setter上界 |

NHSE 固定 cb0745415945776f73375bf0a434a8babf059307 的 Item.cs 定义8字节实体、FreeParam偏移4；其 PatternChoice 使用更宽的托管掩码，不能代替原生低8位读写。ItemRemakeDesignSource 的能力flags (None, Common, MyDesign, CommonAndMyDesign) 与实体实际模式是不同域。原生 ItemReFabricType 转换函数返回范围0..2，BCSV仅观察None/MyDesign/CommonAndMyDesign；模式资格依据原生setter与字典组合，尚未机器码/动态重放证明每种类别指针可写。

## 安全静态校验
普通候选逐项重新计算掩码与上下界、图标Git blob、lot限制标记。ReBodyPatternRejectNum 的正常路径为 clamp(raw,0,body_count-1)，01AF1F60使用body_count减此值取余；不能据此宣布所有末尾款式非法。ForceOriginal 与照片资源分支独立标记。CommonPattern 220个实际ID与资源名；mode2依赖玩家设计内容/上下文，扩展108边界存在写读不对称。mode3不主动生成。所有记录 dispatch_verified=0；没有修改现有机器人协议。

输出 encoding/：mode_policy.csv、ordinary_validation.csv、common_pattern.csv、common_pattern_category.csv、encoding.sqlite3、summary.json。测试覆盖65536个16位输入的保留位和模式归一化，属于数学模型测试而非原生执行。

运行：`uv run --script Scripts/bcsv/audit_variant_encoding.py --historical historical`。 [CI](https://github.com/969981/ACNH_Resources/actions/workflows/acnh303-variant-encoding.yml)。
