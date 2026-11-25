# 特殊实体编码与植物身份（ACNH 3.0.3）

返回 [Factory](Item-Entity-Factory.md) · [Codec](Item-Entity-Codec.md)。固定原版 Ghidra 提交 f09e15460d02790060a374b2ad6ba569ba9b97ed，映像基址 0x100000。静态反编译与原始 NSO 数据对账，不运行游戏、不派送。

## 容器
01B01728: child effective ID bits0..15; native transfer type1/2 写 body bits16..18（越界或无指针则0）；type1/3 写 01AE3A80 返回值低3位 bits19..21；保留其余位。type0/4/5仅ID。01AFF1FC的枚举缓存生产者仍未闭合，不直接用ItemRemakeType替代；type1/2另外需有效款式数量条件。FossilUnknown 01B0B2EC仅写ID。Factory显式构造需要调用者提供已验证的目标有效性、类型、款式返回值和原始字，不能视作默认实体。

## 植物
012418E0以FgMainParam.Grow F5A73337 为分支：0/1沿GrowupFg 2C6A189E；2返回当前身份；3沿ChangeFg 76E7FE08；其他/缺失返回FFFE。扫描540项原版场景ID，循环单独标记；DigItem/BuryItem是不同原始引用，不能把终点直接当成背包ItemID。与FgFlowerHeredity默认记录做候选连接，不能替代01241050的完整条件及回退。

## Money
01AED4B8 检查kind 0x86并调用01AED730；后者读取ItemParam.Price 718B024D s32，乘以数量。01AF02D0读取实体低字节+1并截断u8，超过ItemKind.MultiHoldMaxNum则返回1；01AF0020为假时数量1。01AED730另有kind0x57上下文折价分支，不套用Money。0123E350检测Money及种植条件后调用012505D4，生成场景对象EC9F，FreeParam低16位按原生金额/随机上下文选择原ID、0842或084B，设置bit21；非Money路径回退0AEF。未验证随机状态和种植条件，故不主动构造钱树。108项金额原始数据独立归档。

## MessageBottle
01AFC400 writer: category bits24..31，group bits16..23，recipe bits0..15，AdditionalParam完整byte；传入瓶子ID及SystemParam保留。类别<35、group<=PTR_DAT_04BC27F0[category]、PTR_DAT_04BC2A20[category] bit(group&31)为真。非法输入回退16A1并调用D4AC。01AFC678 reader：高字节<35调用020FD218，以前缀+两位数字构造查询键；低16位返回配方、AdditionalParam原值。01AF4A7C调用0261D530验证配方产物并检查另一个位图；writer不等于consumer有效性。16A1/3100在0277D6C4中保留原始ID，不套用包装。NSO原始映射表仅静态候选；若映射不可读保留未解决，不伪造有效组合。

## 交付
Scripts/item_entity/SpecialEntityCodec.py、audit_special_entity.py、test_special_entity.py；research/catalog/special-entity/：money.csv、plant_identity.csv、bottle_domain.csv（仅可解析并有静态命中时）、summary.json。所有完整默认构造与运行时验证计数仍为0。

[CI](https://github.com/969981/ACNH_Resources/actions/workflows/acnh303-special-entity.yml)。

## 020FDD30 运行时限制表生产者（第二轮已验收）

两指针重定位目标分别为 Ghidra VA 053E6E93、053E6EB8（RVA 052E6E93、052E6EB8），不在原版NSO文件映射段。FUN_020FDD30 初始化35个上界字节与35个u32掩码，读取 NmlNpcParam.UniqueID 54706054、ResName 48EF0398、Label 2F1B930D；FUN_020FC100 根据3字符前缀表与数字后缀解码，按类别累计max与位图。前缀数组由原版 PTR_DAT_04BB9E38 +0xB0 的35个重定位指针读取，实际35种，与417个NPC Label完全匹配。静态重建417项域并全部通过写读对账。原生缓存可受运行时数据影响，仍未捕获内存。归档 bottle_npc_mapping.csv、bottle_domain.csv，未声称每位村民与任意配方的组合均实际有效。

Money 108项全部 MultiHoldMaxNum=-1，01AF0020正常分支在<2时返回false，金额直接Price。场景身份350项Grow=2终点、151项空/缺失、39项其他Grow分支，96项终点关联默认遗传表。完整默认实体仍未恢复。CI [生产者数据发布](https://github.com/969981/ACNH_Resources/actions/runs/45634987830)，[18项回归](https://github.com/969981/ACNH_Resources/actions/runs/45635019368)。
