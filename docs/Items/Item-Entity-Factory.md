# ItemEntityFactory — 原生初始化（3.0.3）

返回 [实体Codec](Item-Entity-Codec.md) · [存储分发](Native-Variant-Storage.md)。

固定原版Ghidra C提交 f09e15460d02790060a374b2ad6ba569ba9b97ed，image base 0x100000；原始NSO/ELF由R100 decoder校验。本轮为静态部分初始化模型，不是完整原版构造器，不写游戏内存、不派送。

| 函数 | 条件及写入 |
| --- | --- |
| 0277D4AC | kind A4/A6调用01AFCA60设置SystemParam bit3（CanFtr及01AE7A70条件）；有效记录路径AdditionalParam &=0x80，随后F248 |
| 0277F248 | FFFD/FFFE直接返回；有效主记录按kind、ID、动作枚举和数量条件修正 |
| 01AF0020 / 01B032D0 | 读取MultiHoldMaxNum（4C9BA961）及CanGift（06012035），后者含自定义设计与动作49条件；若前者为真，只清实体+4的低字节而非整个低16位 |
| 01AEA570 | 动作内部枚举12/13及CanFtr等条件，实体+6最低2位设2；动作名称待恢复 |
| 01B0A294 / 01B0678C / 01B0B2EC | Giftbox A0、QuestWrapping 8D、FossilUnknown 71，分别固定引用0313、0313、0128；均需有效性/分类条件 |
| 01B01548 / 01B01CC0 | ID1618、315A、3805引用0EC9；342F引用3358；需目标有效性和分类条件 |
| 01B01728 | 写内部有效ItemID于+4；分支类型1/2时复制本体3位至FreeParam bits16..18，类型1/3时复制01AE3A80返回值低3位至bits19..21；类型映射及完整下游待验证 |
| 01B058C8 | DIYRecipe B1且ID16A2，传入索引15，若小于0x800且玩家上下文有效位图bit15为1，写实体+4 u16=15；BCSV存在不等于位图有效 |
| 0124C150 | 场景分支kind23..2B且排除2B及三个明确ID EB7E/EB7C/EB7D；写实体+4一字节 |
| 01241050 / 01240FD0 | FgFlowerHeredity.Name、DefaultHeredity、HeredityA..D，原版查表041749E0三字节，各2位压缩；字段选择/场景到背包转换仍待闭合 |

原生函数输入是已有8字节而非只接受ItemID。Factory.plan(seed,kind_index,Context(...)) 仅应用调用方已明确提供的条件结果；保留其他位，输出patches、references、unresolved及preview，不能视作游戏默认实体。包装的有效查询ID未解析时拒绝；空/扩展仅记录F248提前退出，不声称D4AC完全无操作。场景遗传字节要求调用方已经验证上下文。所有默认实体HEX保留空、runtime_verified=0。

## 数据库

research/catalog/item-factory/：initialization_policy.csv（11178物品）、fixed_reference.csv、field_initialization.csv（540场景条目）、flower_heredity.csv（270原版遗传行）、recipe_index.csv（924配方）、summary.json。原版花卉遗传位压缩由NSO实际字节确认，默认标记只是一条表关系候选，非全部植物实体默认值。树木BuryItem/DigItem/GrowupFg保留，漂流瓶、钱袋及其他默认值仍未闭合。

[原生初始化入口](https://github.com/969981/ACNH_Resources/blob/f09e15460d02790060a374b2ad6ba569ba9b97ed/derived/3.0.3/ghidra12.2/c/d4/0277d4ac.c) · [F248](https://github.com/969981/ACNH_Resources/blob/f09e15460d02790060a374b2ad6ba569ba9b97ed/derived/3.0.3/ghidra12.2/c/f2/0277f248.c) · [基因函数](https://github.com/969981/ACNH_Resources/blob/f09e15460d02790060a374b2ad6ba569ba9b97ed/derived/3.0.3/ghidra12.2/c/10/01241050.c)。

`uv run --no-project --python 3.12 --with lz4==4.3.3 --with capstone==5.0.3 python Scripts/item_entity/audit_factory.py --historical historical`

[CI](https://github.com/969981/ACNH_Resources/actions/workflows/acnh303-item-factory.yml)。
