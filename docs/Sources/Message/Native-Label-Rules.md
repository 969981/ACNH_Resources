# MSBT 原生标签生成规则

返回 [Message 专题](README.md) · [业务映射](Business-Mapping.md) · [全量文本数据库](Text-Database.md)。

固定历史 Ghidra C 来源 f09e15460d02790060a374b2ad6ba569ba9b97ed；本轮读取具体函数，不宣称重新反编译或运行时测试。

| 函数 | 原生证据 |
| --- | --- |
| [01ae1310](https://github.com/969981/ACNH_Resources/blob/f09e15460d02790060a374b2ad6ba569ba9b97ed/derived/3.0.3/ghidra12.2/c/13/01ae1310.c) | 服装名称文件选择；ItemKind 内部序号 switch |
| [01ae1530](https://github.com/969981/ACNH_Resources/blob/f09e15460d02790060a374b2ad6ba569ba9b97ed/derived/3.0.3/ghidra12.2/c/15/01ae1530.c) | 读取组 UniqueID 0x54706054，格式指针 DAT_0405bf91 待取原始字符串 |
| [01ae1780](https://github.com/969981/ACNH_Resources/blob/f09e15460d02790060a374b2ad6ba569ba9b97ed/derived/3.0.3/ghidra12.2/c/17/01ae1780.c) | 服装颜色文件选择，同行序号 switch |
| [01ae18f0](https://github.com/969981/ACNH_Resources/blob/f09e15460d02790060a374b2ad6ba569ba9b97ed/derived/3.0.3/ghidra12.2/c/18/01ae18f0.c) | %03d_%s_%05d；组 UniqueID、类型 Label、物品 UniqueID |
| [01b000c0](https://github.com/969981/ACNH_Resources/blob/f09e15460d02790060a374b2ad6ba569ba9b97ed/derived/3.0.3/ghidra12.2/c/00/01b000c0.c) | %s_%05d_%d；FUN_0277d6c4、低3位款式与范围检查 |
| [01b003d0](https://github.com/969981/ACNH_Resources/blob/f09e15460d02790060a374b2ad6ba569ba9b97ed/derived/3.0.3/ghidra12.2/c/03/01b003d0.c) | 同格式，指定款式索引上界检查 |
| [02c69630](https://github.com/969981/ACNH_Resources/blob/f09e15460d02790060a374b2ad6ba569ba9b97ed/derived/3.0.3/ghidra12.2/c/96/02c69630.c) | 在服装/家具颜色文本之间分支 |
| [03098930](https://github.com/969981/ACNH_Resources/blob/f09e15460d02790060a374b2ad6ba569ba9b97ed/derived/3.0.3/ghidra12.2/c/89/03098930.c) | 指定家具款式文本消费者 |
| [00b45540](https://github.com/969981/ACNH_Resources/blob/f09e15460d02790060a374b2ad6ba569ba9b97ed/derived/3.0.3/ghidra12.2/c/55/00b45540.c) | STR_ItemColor 和静态字符串指针表，非数字ID格式 |
| [01b3c040](https://github.com/969981/ACNH_Resources/blob/f09e15460d02790060a374b2ad6ba569ba9b97ed/derived/3.0.3/ghidra12.2/c/c0/01b3c040.c) | 第二个 STR_ItemColor 消费者 |
| [03133080](https://github.com/969981/ACNH_Resources/blob/f09e15460d02790060a374b2ad6ba569ba9b97ed/derived/3.0.3/ghidra12.2/c/30/03133080.c) | STR_CategoryName 注册线索，选择器待定位 |

## 规则

服装名称：ItemParam.ClothGroup CRC32 → ItemClothGroup.Label → UniqueID；以 ItemKind 原始行序号选择 11 个 GroupName 文件（不是 ItemKind.UniqueID）。历史标签 018 对应组18；宽度3的格式在新审计中验证，原生格式指针 DAT_0405bf91 仍待读取。服装颜色：%03d_%s_%05d，组ID、类型Label、物品ID。家具本体：%s_%05d_%d；FUN_0277d6c4 返回身份尚需对账，低三位及数量函数 FUN_01ad7260 为原生证据；当前用 ItemRemake.ItemUniqueID 测试全部8个存储槽，不能视为激活款式。布料沿用形状测试仅为类比候选。ItemColor 走字符串指针表，先测试 BCSV Label 精确命中。分类数字文本标签与细分类ID不同域，直接ID测试只是负对照。

## 复现与输出

`uv run --script Scripts/message/audit_label_rules.py --historical historical`。固定14个原版语言归档 SHA256 与 decoded CSV manifest；输出 label-profile.csv、label-samples.csv、reverse-labels.csv、bindings.csv、summary.json。保留未匹配，不修改 Catalog 生产数据或机器人协议。实际覆盖待 CI。

[脚本](https://github.com/969981/ACNH_Resources/blob/research/Scripts/message/audit_label_rules.py) · [工作流](https://github.com/969981/ACNH_Resources/actions/workflows/acnh303-msbt-label-rules.yml) · [数据目录](https://github.com/969981/ACNH_Resources/tree/research/research/message-label-rules)。

## 本体款式数量原生证据

[FUN_01ad7260](https://github.com/969981/ACNH_Resources/blob/f09e15460d02790060a374b2ad6ba569ba9b97ed/derived/3.0.3/ghidra12.2/c/72/01ad7260.c) 实际读取 ItemParam.RemakeID CB5EB33F（s16）并查找 ItemRemake，随后读取 ReBodyPatternNum B0304B0D（s8），正常有效记录分支在原值 <8 时返回 raw+1，否则0。-1→0，0→1，7→8；异常分支另有0或1回退。ReFabricPatternNum 0CB402A3 尚未证明使用相同规则。FUN_0277d6c4 原始 ItemID 在 byte+3 低2位为0时直接返回；特殊状态走其他ID转换，不能无条件使用代表物品ID。当前审计仍检查全部存储槽，只统计文本存在，不发布有效款式数量。
