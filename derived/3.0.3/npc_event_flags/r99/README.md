# R99 — ELF 初始化与邀请失败函数表

R98 的工厂全局变量、五项露营地失败判定函数表需要分别处理 ELF 原始字节和加载后指针。R99 使用 R96 已验证的原始 main.elf SHA256，解析 PT_LOAD 的 filesz/memsz、SHT_RELA（RELATIVE 及有定义的符号重定位）、SHT_RELR；保留原始值和重定位值，不把外部未解析符号或未知 BSS 值填为 0。以 ADRP、ADD、LDR、STR 的有界模式搜索工厂引用及候选写入者，也保留直接 B/BL。候选不是完整数据流。

## 露营地失败原因
FUN_00f089a0 与 FUN_00ee5828 通过 Camp_InduceFailFlag 及五项原因调用 04a765d8 + index*0x10，索引 0..4，5 为未找到。后者在 flag 非零与零时路径不同；返回值必须结合消费者解释。表首指针和伴随 8 bytes 各自保留；字符串来源是 04bb9b88 的指针及偏移 0/0x1a/0x33/0x4c/99。原始 EventFlagsPlayerParam.csv 交叉查找。不可等同于两个跨岛招募 Query 的最终回调。

## 轻量记忆尾部
FUN_020d9e80 读取轻量 +0x14c/+0x154/+0x156 或完整 +0x5b4/+0x5bc/+0x5be；检查 TalkClothesPToday，比较之前物品与候选服装，包括物品等价函数和变体数据。FUN_00ed8124 的具体 switch 分支调用它并保存四个输出。暂称服装对话历史 Item 和关联选择字段。0x156 小于 10 时用于屏蔽一个候选位；0x154 小于 0x400 时用于 1024-bit 候选集合。不可把这里的随机数解释为照片掉率。Item +0x00 是原始 u16 ID，+0x03 低两位影响 FUN_0277d6c4 的有效 ID，+0x04 另有 u32 数据；+0x02 和 +0x03 的其余位保持原始语义边界。

## 本轮验收范围
运行 R99 脚本输出 report.json、factory_global_references.json、relocation_inventory.json、native_source_anchors.json。没有实机快照、没有真实存档。R98 GDB 采集器、R97 存档读取器仍是运行时验收入口；统一奖励 VTable、照片概率、四个原始 Hash 名与剩余 28 条状态仍未得到最终证据。

```powershell
python Scripts/acnh303_r99_relocation.py --root . --out artifacts/acnh303-r99
```

## 初轮原版 ELF 实测结果

7568 条 section relocation（6556 ABS64、30 GLOB_DAT、982 JUMP_SLOT）；工厂六个地址位于 PT_LOAD 零初始化范围，无对应 section relocation，4 个地址引用候选，0 个窄模式 STR 写入候选。五个失败原因槽位 raw word 指向 021c37a8/021c37bc/021c38d0/021c39e4/021c3a3c，对应字符串依次为 AlreadyInduced、SameNpcLiving、SameNpcMoveIn、VillagerMax、SellPlaceNothing。四个独立 C export 已验证；首个槽位缺独立导出。后两个 SameNpc 函数分别要求找到的十居民槽位 != 或 == 上下文 +0x30 的迁入索引；VillagerMax 对十项 u16 做 OR 后检查最高位；SellPlaceNothing 比较 InducedNpcNum >= 上下文 +0x38 可用数量。FUN_021c2ea8 在十名居民中检查 MoveInCompletion，并累加 FUN_026644b0 的十项判定，不将此处当作线上最终权限。

新增 original NSO 核对：独立校验原始 main SHA、解压三个段并校验 header digest，解析 MOD0 动态表及 RELA、JMPREL、RELR，交叉确认原版五项槽位与重建 ELF；生成 init_array 原始记录和本地运行时字节指纹。未取得真实 GDB 快照或存档实例。
