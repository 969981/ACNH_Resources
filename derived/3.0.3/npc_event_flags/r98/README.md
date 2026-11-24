# R98 · EventFlowReceptor 工厂与轻量记忆尾部

## 已验证
- FUN_0070f160 初始化 EventFlowReceptor，FUN_0070fcd0 根据 +0x278 类别创建两套对象表，FUN_0070f340 析构对应对象及数组。Action 全局 count/pointer 为 04c8ded8/04c8dee0；Query 为 04c8dee8/04c8def0。每项工厂记录 0x10，+0x00 首字，+0x08 构造函数指针；两套类别索引基址 04c8def8/04c8df68。首字是否为名称 hash 必须单独证明。
- FUN_010f5d80 / FUN_01184470 在 wrapper 构造阶段应用 BindInfo 别名；FUN_011828b0 使用二者。Action dispatch FUN_0070f4f0 查找 +0x2c8 count、+0x2d0 table、对象 +0x10 hash，执行 vtable+0x40 或 +0x58；+0x30 为路径条件检查。Query FUN_0070fb10 使用 +0x2d8/+0x2e0，执行 vtable+0x30。统一奖励 Action hash ABC7E873，邀请 Query 7D83E6A3/BB045A73。
- 只读 ELF 检查全局表是否 file-backed，尝试两个明确 VA 坐标；保留可能的工厂首字匹配，不能直接当 callback。地址形成候选不代表写入。
- GDB 脚本仅观察已有 receptor 对象，导出两个表及目标 vtable 指针；需要操作者核实实际 Build ID、module base、对象地址与指针在可执行映射内。未取得实机快照。

## 轻量记忆尾部
完整 32 字节逐段定义；+0x138 年/月/日用于 FUN_02691310 在同一玩家身份的多个轻量记录中选择日期较新（相等时后者也可覆盖）的记录，再清除旧记录并在满足身份条件时恢复完整记忆。+0x14c 8 字节 item record（FUN_0277d4ac 初始化），对应完整记忆 +0x5b4。+0x154/+0x156 对应 +0x5bc/+0x5be。其余仅保存初始化常量与宽度，不命名未证实的语义。

## 招募及奖励图
保存八个原版 graph，完整节点、case 值、entrypoints、SHA；检查八条关键搬家边。NpcMoveOutState #35 case4 -> #54, case0..3 -> #112；#112 Collabo query case0->109, case1->90 EnableInviteMoveoutNPC；#97 Type1 case1->#96 Type2；#96 case1->#50->#62 固定邀请。不同 case 的业务意义及线上最终资格仍未证明。统一奖励节点从全部 EventFlow 收集并按 RewardType/RewardTypeSub 统计。保留包装及价格分支；照片奖励随机概率仍未知。BromideRewardSkipCount 的减1仅指每次非零日期差更新调用，不等同于日历跳跃天数。

## 复现
```powershell
python Scripts/acnh303_r98_factory_audit.py --root . --out artifacts/acnh303-r98
```
GDB 中 source Scripts/acnh303_r98_receptor_snapshot.py 后使用 acnh-receptor-snapshot RECEPTOR_ADDRESS MODULE_BASE OUTPUT_JSON。只读，不自动附加，不调用游戏函数，不修改存档，不创建断点。实际 receptor 地址须由本地调试器观察。没有真实存档 fixture；继续使用 R97 解析器检查对应 main_decrypted.dat/mainHeader.dat。四个原名未知字段仍保留原始 Hash。
