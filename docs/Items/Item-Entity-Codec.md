# ItemEntityCodec — 原版8字节物品实体（3.0.3）

返回 [原版款式](Native-Variants.md) · [存储分发](Native-Variant-Storage.md)。

独立纯 Python 模块，不写游戏内存、不联网派送、不更改旧机器人协议。固定 ACNHPokerCore 85e50a1ad182c926b2ebd51c00abc612e0a859d5；NHSE cb0745415945776f73375bf0a434a8babf059307；Ghidra 历史 f09e15460d02790060a374b2ad6ba569ba9b97ed。

| 物理偏移 | 字段 | 业务视图 |
| --- | --- | --- |
| +0 | u16 ItemID | 原始编号，不强制改写 |
| +2 | u8 SystemParam | NHSE rotation bits0..1、buried bit2、dropped bit5；其他位保留 |
| +3 | u8 AdditionalParam | 包装模式低2位、纸色bits2..5、显示bit6、bit7；瓶子例外 |
| +4 | u16 FreeParamLow | 通常数量减一或改造参数；花朵低8位数量为PokerCore兼容证据 |
| +6 | u16 FreeParamHigh | 工具使用/耐久原值或栅栏改造参数 |

序列化 <HBBI，小端；raw roundtrip不改变未知位。普通改造通过已归档storage路由选择+4或+6，保留另一半字与当前半字高3位。模式0/1/2分别使用普通、通用和有上下文的自定义设计；禁止生成模式3，暂不生成扩展自定义索引。语义改造不适用于包装或特殊实体（保留raw），不能将静态路由等同于原生运行时验证。

## 兼容依据与未闭合问题

- [Item.cs](https://github.com/kwsch/NHSE/blob/cb0745415945776f73375bf0a434a8babf059307/NHSE.Core/Structures/Item/Item.cs)：实体结构、包装位、Count/UseCount、扩展实体0xFFFD（root ID +4、x/y +6/+7）、空0xFFFE、field >=60000。
- [ItemAttr.cs](https://github.com/969981/ACNHPokerCore/blob/85e50a1ad182c926b2ebd51c00abc612e0a859d5/ACNHPokerCore/Inventory/ItemAttr.cs)：数量、花、遗传、耐久度、使用次数和容器集合。
- [inventorySlot.cs](https://github.com/969981/ACNHPokerCore/blob/85e50a1ad182c926b2ebd51c00abc612e0a859d5/ACNHPokerCore/Inventory/inventorySlot.cs)：数量显示 raw+1，耐久/使用原值为高16位；尚未证明该值代表已消耗次数还是剩余耐久。BreakDamage 原值单独保存，不当作写入上界。
- [Utilities.cs](https://github.com/969981/ACNHPokerCore/blob/85e50a1ad182c926b2ebd51c00abc612e0a859d5/ACNHPokerCore/Utilities/Utilities.cs)：BuildDropCore = Flip(itemId)+flag1+flag0+Flip(count)，count是完整32位原值，不是业务数量。
- [0277D6C4](https://github.com/969981/ACNH_Resources/blob/f09e15460d02790060a374b2ad6ba569ba9b97ed/derived/3.0.3/ghidra12.2/c/d6/0277d6c4.c)：包装状态改变原生查询ID，0x16A1/0x3100为例外，普通低2位0直接返回ItemID。包装不直接复用普通款式策略。
- [0277D4AC](https://github.com/969981/ACNH_Resources/blob/f09e15460d02790060a374b2ad6ba569ba9b97ed/derived/3.0.3/ghidra12.2/c/d4/0277d4ac.c) / [0277F248](https://github.com/969981/ACNH_Resources/blob/f09e15460d02790060a374b2ad6ba569ba9b97ed/derived/3.0.3/ghidra12.2/c/f2/0277f248.c)：初始化包含分类、特殊ID、容器分支，不能把全零当作原生初始化成功。

策略生成从原版ItemKind.MultiHoldMaxNum与旧机器人数量集合取交集；未交集、重叠、特殊状态标记复核，不自动宣称支持。耐久高位仅在旧集合允许且不与高位款式冲突时开放raw写入。包装仅解析，不主动生成；特殊实体仅raw roundtrip和extension view，不声称恢复全部业务参数。

## 复现

`uv run --no-project --python 3.12 python -m unittest discover -s Scripts/item_entity -p test_codec.py -v`

`uv run --no-project --python 3.12 python Scripts/item_entity/build_policy.py --poker poker`

poker为固定提交工作树。CI生成 research/catalog/item-entity/item_policy.csv、summary.json。实际运行结果以[工作流](https://github.com/969981/ACNH_Resources/actions/workflows/acnh303-item-entity.yml)为准。所有runtime_verified/dispatch_verified仍为0。
