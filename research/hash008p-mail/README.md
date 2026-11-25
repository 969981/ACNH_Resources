# HASH-008P — ItemKind / ItemFrom 原生枚举域

## 实际验收（P1/P2）

- run 45576294722 / job 139074955910 / commit 08441f697f2707a6f9381c0a7dffa15e74471526：PASS。36 个四字节字段、20185 条字符串重定位、5045 条缓存引用。通用连续表候选 0，自动直接写入 0；这不表示不存在写入者，动态索引 STRH 未被固定地址扫描计入。
- run 45576641462 / job 139076108043 / commit 587db1ba8791c97704e31c9c0a0fd18b7a651e28：PASS。ItemKind 189 行、ItemFrom 318 行，ItemParam 11178 行；两个字段均 CRC32 11178/11178 唯一对应，Murmur3 0/11178，未匹配 0。
- 507 项原版 BCSV 字典永久归档于 item_kind_from_dictionary.json。两个字典内 CRC32/Murmur3 分别无碰撞。ItemFrom row61 日文说明在原始固定长度字段末尾截断 UTF-8，原始字节保留，说明置 null。

| 域 | ItemKind | ItemFrom |
|---|---|---|
| 构造器 | 01A5A3E8 | 01A5A3E8 |
| 原生资源名 | _ItemKind | _ItemFrom |
| 管理器偏移 | 57E68 | 57E70 |
| ItemParam 字段 | 5270EB75 | DB1A2F07 |
| 行内偏移 | 112 | 64 |
| 原始值种类 | 186 | 312 |
| 缓存计数 / 指针 | 05326EC0 / 05326EC8 | 05327190 / 05327198 |
| 缓存 GOT | 04BC00C8 | 04BC0068 |
| CRC -> 原生索引 | 01A88150 | 01A867B0 |
| 名称表 GOT / 偏移 | 04BB8F90 + 830 | 04BB5820 + 1298 |
| BCSV blob | 0541661b1409455962c73c9cc7e2ea4f13d709fd | 17603ee9e4ee73c1b3fa2975a4926b2b455c5b4b |

## 原生 CRC 字典初始化

01A88150 / 01A867B0 循环读取原版字符串指针，逐字节 CRC32B (初始全1，末尾取反)，写入 {crc32, native_index}，按 CRC 对指针排序后二分查找，返回原始索引；字符串可用时还有精确文本回退，失败返回 FFFFFFFF。

- 01A983F4 BL 01A88150；前置 01A983C0 CRC32B。
- 01A99EB4 BL 01A867B0；前置 01A99E80 CRC32B。
- 01A5F5A0 / 01A5F6C0 是 Label 字段偏移解析回调（87BF00E8），不是 ItemParam 行缓存写入者。
- 01A99B40 / 01A9B5F0 属于资源登记流程；不当作缓存填充函数。

## 原生实际行缓存写入点

从 artifact 15004407314 的 cache_references.json 人工复核得到：

ItemKind:
```asm
01A745F4 adrp x10, #0x4ac0000
01A745F8 ldr x10, [x10, #0xc8]
01A745FC cmp w9, w11
01A74600 csinv w9, w11, wzr, hi
01A74604 ldr w11, [x10]
01A74608 cmp w9, w11
01A7460C b.hs #0x1974624
01A74610 ldur w8, [x29, #-0xc]
01A74614 ldr x10, [x10, #8]
01A74618 strh w8, [x10, w9, sxtw #1]
```

ItemFrom:
```asm
01A6E944 adrp x10, #0x4ac0000
01A6E948 ldr x10, [x10, #0x68]
01A6E94C cmp w9, w11
01A6E950 csinv w9, w11, wzr, hi
01A6E954 ldr w11, [x10]
01A6E958 cmp w9, w11
01A6E95C b.hs #0x196e974
01A6E960 ldur w8, [x29, #-0xc]
01A6E964 ldr x10, [x10, #8]
01A6E968 strh w8, [x10, w9, sxtw #1]
```

两条均使用缓存指针 + 原始行索引*2，写入 u16。上游 w8 值生产者与字段读取需继续独立验收。01A67DF8 是清理缓存（释放指针并置零），不是初始化函数。候选分配相关引用 01A645F0 / 01A651F0 尚未闭合。

## P3

Scripts/acnh303_hash008p3_native_enum_order.py 直接通过原版 GOT 与逐槽 RELR 提取 507 个字符串顺序，和 BCSV 逐项比较；生成原生索引 JSON/CSV、11178 项 ItemParam 对应关系及查找调用点。P3 已完成，结果见下节。

## P3 原版原生枚举顺序验收（已完成）

run 45576933659 / job 139077060154 / head 9433c1ec558d8c208598a4023d90fe76b712ee36：PASS。
- ItemKind: Ghidra 0495C4B0 / ELF 0485C4B0，189/189 原版 RELR 名称槽，189/189 与 BCSV 原始行号一致，11178/11178 ItemParam CRC 唯一匹配；未用 SubToolEat / XmasDeco / None。
- ItemFrom: Ghidra 0491FB98 / ELF 0481FB98，318/318 原版 RELR 名称槽，318/318 与 BCSV 原始行号一致，11178/11178 CRC 唯一匹配；未用 TkkNew / OneRoomCafe / OneRoomGradeUpReward / OneRoomPartyReward / OneRoomTsukutterReward / FutureItem。
- 两套原生枚举索引及使用数量归档 native_enum_dictionary.json。完整逐行映射、原版字符串地址及 CSV 位于 CI artifact 15005171406（SHA256 331d07db67a2d0ecec5380da8d086c39a6ec5f70457fb39fdde0b6b6d910c57e）native-enums/itemparam_native_kind_from.csv。
- 直接调用点：01A74128 BL 01A88150，返回索引 <189 否则0；01A6E478 BL 01A867B0，返回索引 <318 否则0。与本阶段记录的 01A74618 / 01A6E968 缓存 STRH 属于相邻生产者代码区域。尚未逐条闭合所有分支、字段读取及运行时缓存内存差分。
- 后续基于真实枚举字典恢复 18 个邮件回调的类别与来源筛选规则，并针对 ItemKind/ItemFrom/价格与玩家上下文构建候选池。不将原版静态映射等同游戏运行时奖励池。
