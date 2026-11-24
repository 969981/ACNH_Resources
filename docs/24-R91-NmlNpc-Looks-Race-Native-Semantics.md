---
title: ACNH 3.0.3 R91 — 普通村民 NpcLooks / 种族原版静态语义交叉验证
tags: [ACNH, 3.0.3, NmlNpcParam, NpcLooksParam, NmlNpcRaceParam, Native, Ghidra, CRC32]
status: original-bcsv-byte-and-enum-crossref-verified-native-loader-chain-pending
---

# R91 · 普通村民性别、性格、种族：原始表枚举与 Native 线索

## 结论和边界（2026-11-24）

- 在仓库 `3.0.3_UnPack` 对 **417/417** 个 `NmlNpcParam` 普通村民做了枚举分布与原版关联，全部保留唯一 `ResName`、行号、原版 BCSV 字节偏移。
- `hash_04F52F6A` 的 8 个值与 **原始** `NpcLooksParam.csv` 的 8 个 `Label` 对应：把原始 `boy_normal` 等字符串首字母大写为枚举名 `Boy_normal`，计算 **CRC32(ASCII)** 得到 8 个唯一的 u32，417 条精确匹配。
- `NpcLooksParam.hash_54706054` 还保存 0–7 的原始索引；`hash_87BF00E8` 是原始 Label。与 3.0.3 Ghidra 中 `FUN_020fd7d8` 的 0–7 索引逻辑吻合，提供进一步 Native 追踪入口。
- `NmlNpcRaceParam.csv` 的 110 条原始种族/相关配置中，`hash_2F1B930D` 是解包器按十进制表示的 8-byte little-endian ASCII 标签。将 `NpcNmlAnt00` 的原始三字符 `Ant` 等编码规范化后，**35/35** 个普通村民种族代码都有对应原始 Race 表标签；417/417 行存在匹配。
- 从 `NpcLooks` 可确定原始 **boy/girl 分组**，也可对照游戏中常用的八种性格称呼。但“Lazy/Jock/Cranky”等术语是**解释性社区对应**，原始枚举原样保存，不能替代它。
- **仍未完成**：3.0.3 原始 BCSV 加载器写入 Runtime Looks 表的完整指针和调用链、游戏实时行为、角色性格在存档中的实际变化机制、Native 原版中文种族/性格显示名的来源。不能因此把所有 Runtime 标志改为 true。

## 原始来源与防串源校验

| 文件 | 证据与用途 |
| --- | --- |
| `e10617820db06889e1638499478da0de_NCA/1/Bcsv/NmlNpcParam.bcsv` | 原始 120,452 bytes，SHA-256 `5a68a96c7962058ec8119536b53a713acd125747d2c6f2c057d8c788d5f3a797`；417 × 288 byte records |
| `UnPack/1/Bcsv/NmlNpcParam.csv`、`NmlNpcParam.json` | 41 个原始 hash 字段 + 2 个导出辅助列；验证原始偏移、字段宽度、每条 `NpcLooks` u32 与 `ResName` 原始 ASCII |
| `UnPack/1/Bcsv/NpcLooksParam.csv` | 8 个原始 Label、0–7 UniqueID，以及未改写的 33 个其他哈希参数 |
| `UnPack/1/Bcsv/NmlNpcRaceParam.csv` | 110 条原始 Race 参数；原始字符串字节由 8-byte packed 字段复原 |
| `derived/3.0.3/ghidra12.2/c/` | 3.0.3 Ghidra 反编译函数；是 Native **静态**线索，不等于已实机执行 |

> R83 已固定 NmlNpcParam 的原始来源 SHA。R91 脚本重新校验原始文件 SHA/大小、417 行 `offset = 356 + index * 288`，再对 `hash_04F52F6A` 原始 u32 和 `hash_48EF0398` 原始 ResName 做逐行字节比对。**不会**因为字段名是外部社区提出的，就跳过原版字节验证。

## NpcLooks 八种原版枚举

| Label（ROM NpcLooksParam） | `hash_04F52F6A` u32 | Index | 3.0.3 行数 | 便于展示的社区性格称呼 |
| --- | ---: | ---: | ---: | --- |
| `boy_normal` | 215624508 | 0 | 63 | Lazy |
| `boy_active` | 1715584986 | 1 | 58 | Jock |
| `boy_pride` | 3626361313 | 2 | 57 | Cranky |
| `boy_snobby` | 1630366878 | 3 | 37 | Smug |
| `girl_normal` | 2781715588 | 4 | 64 | Normal |
| `girl_active` | 3478521954 | 5 | 54 | Peppy |
| `girl_pride` | 1933314573 | 6 | 58 | Snooty |
| `girl_big_sis` | 1886414660 | 7 | 26 | Sisterly |

男/女性别组（**由原始枚举的 Boy/Girl 前缀导出**）：boy=215 / girl=202。不能把 `NpcTalkType` 的二元字段 `hash_33AF13E1` 改名为 Gender。

另外，`hash_F8BE7F94` 虽然也是 0–7 八值，但旧 BCSV 字段字典将它识别为 **SmartphoneRemakePattern**；不得凭唯一值数误认为性格字段。早期版外部 BCSV 表可作字段名辅助对照，真正的 3.0.3 枚举值、字节和 Native 静态函数都来自本仓库原版资源。

## Race 原版关联

`NpcNmlAnt00` 的 `Ant` 与 `NmlNpcRaceParam` 中原始小端 ASCII 标签 `ant` 对应。`NpcNmlCat00`→`cat`、`NpcNmlSqu00`→`squ` 等。当前普通村民原始种族代码共 **35** 种，**417 个 ResName 全覆盖**。原始 Race 表包含 110 行而不是 35 行，其余行不能简单标记为异常或当作普通村民。

导出 `race_code`（原版三字符）与 `race_original_row_indices`，**不凭社区英语种族名称自动写入“原版 Species”**。种族在 Native 数据结构里的具体编码与 UI 本地化名称仍需进一步追踪。

## 3.0.3 Ghidra 静态线索（下一轮 GDB 入口）

| VA / 函数 | 当前静态证据 | 还要证明 |
| --- | --- | --- |
| `0x020FD7D8` / `FUN_020fd7d8` | 基于 NPC 类别+序号生成键，查询表后返回 0–7 Looks 索引；范围外还可返回 8，缺失时存在 0 的 fallback | 该查表源是否直接来自 3.0.3 NmlNpcParam 字段、何处初始化、异常值语义 |
| `0x025E50AC` / `FUN_025e50ac` | 调用 `FUN_020fd7d8`，记录 `NNPCLooks_%s` | 与实际村民内存实例及显示选择的对应关系 |
| `0x025E6090` / `FUN_025e6090` | 在 `IsNNPC` 情况下读取 `NNPCLooks` | 调用链来源和消费者 |
| `0x0285C334` / `FUN_0285c334` | 对 Looks 0–7 使用标签数组选择 `STR_Favorite` 文本 | 本地化/台词选择实际使用的结果 |
| `0x007C69C0` / `FUN_007c69c0` | 注册 `NpcLooks` 的枚举名 | 不能仅凭注册字符串断言已追到 BCSV 的 loader |

**GDB 下一轮验证矩阵**：原版游戏 v3.0.3 + 精确 Build ID，至少覆盖每个 Looks 类型一名 NPC、跨种族对照、缺失/特殊 NPC，以及初始化/加载、对话、商店或好友状态三类调用。每条 trace 留 `build_id, function_va, call_site_va, resident_key, raw_hash, lookup_key, looks_index, field_bytes, ptr, return_value, branch, on_disk_value, source_sha256`；有实机证据后再将对应字段的 `runtime_verified` 单独提升。

当前仓库有反编译代码，尚未找到完整可重放的内存 trace；**不能将静态推断当作实机结果**。

## 使用和输出

```powershell
cd D:\WorkSpace\Pokemon\ACNH_Resources
py Scripts/acnh303_r91_nmlnpc_semantics.py --root . --out artifacts/acnh303-r91
```

输出：
- `nmlnpc_field_enumeration.json`：全 41 字段唯一值数、最多 20 个值的频次、原始来源哈希；
- `nmlnpc_looks_race_manifest.json`：人数、八种 Looks 分布、35 种 race 分布、SHA、Native 静态消费者候选与验证门禁；
- `villager_native_static_semantics.json`：417 条完整可联表记录（`ResName`、RaceCode、Looks CRC32、Looks 原版 Index、Boy/Girl、常用性格术语、证据级别）。

使用 `.github/workflows/acnh303-r91-npc-semantics.yml` 做 sparse checkout 的 CI 静态回归与 Artifact 输出。所有新语义信息都是**旁路附加证据**，没有覆盖 `web_db_multi_v2.json`、`villager_db_multi_v2.json`，也没有改变旧版网站字段。未来如导入网站，建议新增 `native_static` 字段并单独保存 `runtime` null 状态。

## 相关辅助资料

- [较早版本 NmlNpcParam 字段解码（仅用于辅助字段名比对）](https://wuffs.org/acnh/bcsv_140/html/NmlNpcParam.html)
- [CRCPedia BCSV 字段参考](https://alexislours.github.io/crcpedia/)
- 仓库既有 `docs/23-Web-14Locale-Item-Villager-Export.md`、R82 与 R83 的来源证据

## 关联研究 · 2026-11-24

[[00-Home|知识库主页]] · [[00-Research-Index|研究总索引]] · [[26-R94-NPC-EventFlags-Hash-Dictionary|Hash 字典]] · [[27-R94-NPC-EventFlags-Native-Consumers|Native 消费者]] · [[28-R95-NPC-EventFlags-Research-Queue|R95 待办]]

R94 的 17 个字段中 13 个原名经 CRC32 匹配，1 个原名未知但静态重置行为已定位，3 个未解；本次是文档整理，不增加 L4 或实际存档读取覆盖。
