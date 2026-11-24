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
