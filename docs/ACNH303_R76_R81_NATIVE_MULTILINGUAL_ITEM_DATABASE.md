---
title: R76–R81 ACNH 3.0.3 原版物品与村民多语言数据库
aliases: [ACNH Multilingual SQLite, ACNH 物品数据库, MSBT 原版多语言解析]
tags: [ACNH, 3.0.3, BCSV, MSBT, SARC, zstd, SQLite, ItemKind, NmlNpc, provenance]
status: original-message-decoded-partial-identity-join-runtime-unverified
---

# R76–R81：ACNH 3.0.3 多语言物品/村民数据库技术文档

> [!important] 严格区分原版事实、原版候选和运行时证据
> 1. **原版直接证据**：带 SHA-256 的 RomFS BCSV、Message/String_*.sarc.zs 及 MSBT 字段/文本，以及 BCSV 内同名 ItemKind 关联。
> 2. **候选映射**：服装 ItemClothGroup 的 ResName 前缀关联，ItemParam 中没有同名类别的子类前缀推断，以及存在文件名的原版图标候选。其中文本虽来自原版，并不等于游戏消费场景已验证。
> 3. **未验证**：实际世界拾取行为、原版动态选图、部分 MSBT 控制码清理、s16=-1 具体堆叠逻辑。不允许为这些字段填造的布尔值或图片别名。

## 1. ROM 和代码来源

仓库：https://github.com/969981/ACNH_Resources/tree/3.0.3_Unpack

原版根目录：`e10617820db06889e1638499478da0de_NCA/1/`。

| 原版 RomFS | 本地解包结果或实际用途 |
| --- | --- |
| `Bcsv/ItemParam.bcsv` | `UnPack/1/Bcsv/ItemParam.csv`，11,178 条独立 UniqueID |
| `Bcsv/ItemKind.bcsv` | `UnPack/1/Bcsv/ItemKind.csv`，189 条类别及动作/堆叠规则 |
| `Bcsv/ItemClothGroup.bcsv` | 服装组 ID、代表物品 ID、组资源名与日文标签 |
| `Bcsv/ItemRemake.bcsv` | 家具改造及 body/fabric 变体；不可仅按名称推导显示场景 |
| `Bcsv/RecipeCraftParam.bcsv` | 924 条配方，可后续独立建立材料关系 |
| `Bcsv/NmlNpcParam.bcsv` | 417 条普通居民，417 个原始资源名称 |
| `Bcsv/SpNpcParam.bcsv` | 74 条特殊 NPC 参数，72 个不同 ResName |
| `Message/String_CNzh.sarc.zs` 等 | 14 语言/地区包，每个 133 个 MSBT 成员 |
| `Model/Layout_FtrIcon_*` 等 | 已另经 R73 独立核验的各图标家族资源 |

### 14 个 locale

`CNzh, TWzh, JPja, USen, EUen, KRko, EUde, EUfr, EUes, EUit, EUnl, EUru, USes, USfr`。

与旧用户 CSV 的 `nameCN/nameTW/nameJP/nameEn` 不同，本项目的权威本地化文本取自 Nintendo 3.0.3 的对应 MSBT；旧网站文本只能作为另外的对照来源。

## 2. R76：全量 1,862 个 MSBT 的结构验证

源码：`Scripts/acnh_formats.py` 中 `decompress`、`parse_sarc`、`parse_msbt`，以及 R76 脚本 `Scripts/acnh303_r76_msbt_probe.py`。

解码路径：Zstd 字节流 → 真实 SARC 文件目录 → 133 个 *.msbt → MSBT BOM/section → LBL1 标签 + TXT2 文本 + ATR1 附加信息。

每份 MSBT 的 header/sections 经边界检查，不猜测偏移。R76 实际共解析 **14 × 133 = 1,862** 个文件，0 个 MSBT 结构解析失败。

原版验证样本：

| 原始 MSBT member | 原始 label | CNzh | USen |
| --- | --- | --- | --- |
| `Item/STR_ItemName_31_Fish.msbt` | `Fish_00328` | 鲫鱼 | crucian carp |
| `Item/STR_ItemName_70_Craft.msbt` | `CraftMaterial_02500` | 树枝 | tree branch |
| `Npc/STR_NNpcName.msbt` | `ant00` | 阳明 | Cyrano |
| `Npc/STR_NNpcName.msbt` | `ant01` | 阿诚 | Antonio |

输出：`assets/evidence/rom-database/r76-msbt-14-language-probe.json`。

### 控制码绝不能简单按不可打印字符删除

部分英语文本包含 MSBT UTF-16 内联指令，如原始 `U+000E` + group/type/length + payload。R77 保存 `msbt.text_raw` 和 `msbt.text_plain` 两套值，并记录解析的指令数和异常数。

R77 检测到 **105,927** 次控制指令处理和 **2,971** 次待进一步检查的格式/控制码异常。后者既不代表 2,971 个文件损坏，也不能称 408,156 条展示文本已完全达到原版渲染等价。原始文本始终保留，避免丢信息。

## 3. R77：原版物品、村民及语言明细 SQLite

脚本：`Scripts/acnh303_r77_build_native_catalog.py`。原版源内容读出后写入 SQLite，下列身份为严格关联：

- `ItemParam.hash_54706054`：UniqueID，按十进制保存；CSV 显示 `id_hex` 为四位大写十六进制。
- `ItemParam.hash_3FEBC642`：实例内部名称，示例 ID=3557、0x0DE5、FtrBambooLamp。
- `ItemParam.hash_FC275E86`：原始细类，如 `Kind_Fruit` 或 `Ftr_1x1_Floor`。
- `ItemKind.hash_87BF00E8`：类别 Label，189 条类别规则。
- `ItemKind.hash_4C9BA961`：`MultiHoldMaxNum s16`，CSV 里 65535 应恢复为 -1 特殊值。
- `NmlNpcParam.hash_48EF0398`：ResName，如 `NpcNmlAnt00`，对应 MSBT label `ant00`。

物品 MSBT 的物品 ID 使用标签末尾 5 位数字，例如 `Fish_00328`，并保留 `..._pl` 等复数形式。没有可信 5 位 ID 标签的物品依然存在 item 表，但语言值为 NULL；不能从同名近似文本自动伪造匹配。

R77 直接运行后已建成：

| 记录 | 数量 |
| --- | ---: |
| ItemParam 唯一物品 | 11,178 |
| ItemKind 分类规则 | 189 |
| 原始 MSBT 行（14 种语言总计） | 408,156 |
| 普通 NPC 本地化键精确关联 | 5,838 / 5,838 |
| 带 5 位 ID 后缀的原版物品语言唯一关联 | 75,712 |
| 没有直接数字 ID 的物品语言字段 | 80,780 |

其中 `11,178 × 14 = 156,492` 条 item × locale 记录由 UNIQUE item_locale 主键完整保留。

### ItemKind 基类映射证据

| 证据级别 | 物品数量 | 处理 |
| --- | ---: | --- |
| `exact_ItemKind_label` | 6,076 | 原版细类与 ItemKind Label 同名（去掉 Kind_），允许关联原版 flags/stack |
| `prefix_candidate_not_proven` | 5,050 | 如 Ftr_→Ftr、Top_→Tops、Onepiece_→OnePiece、Bottoms_→Bottoms、Shoes_→Shoes；**只做候选基类，不提升为原版堆叠真值** |
| `unmapped_unknown` | 52 | UnitIcon_Flw... 等，暂不声称可匹配任何主类别 |

多达 5,050 个候选仅保存 parent 和证据标签，`stack_capacity_candidate` 仍为 NULL。用户可以研究候选，但不会误认为运行时已证实。

## 4. R79–R80：突破服装类名称键不同的问题

原版服装通常不以普通物品 `Item/STR_ItemName_*` 形式记录显示名，而在 11 个 `Outfit/GroupName/STR_OutfitGroupName_<Kind>.msbt` 中按服装组编号存储。

以 `ItemClothGroup` 原始组 ID `18` 为例，其对应 `Outfit/GroupName/STR_OutfitGroupName_Tops.msbt` 的标签 `018`，原版 CNzh=风衣，USen=trench coat。

R80 的独立输入：R77 完整 SQLite、`ItemClothGroup.csv` 原版组表及原版 MSBT。

关联优先级如下：

1. **原版代表物品 ID**：`ItemClothGroup.hash_65503F9F` 直接关联具体 `ItemParam.UniqueID`，强证据。
2. **原始内部名去掉末尾变体数字**：只允许整个 ResName 剩余部分与原始组资源名全等，且只有一个候选组，同时 MSBT `Outfit/GroupName` 的类别与已知父类别一致。标为 `exact_ResName_without_trailing_variant_digits` **候选**。
3. 如果匹配多个 group、不存在 group 或类型不符，保留 NULL，不猜。

R80 还从已由 R73 验证的 5,480 份 ClosetIcon PNG 里，按照服装 ResName 精确文件名另行关联了 **5,422 条 item.closet_image_path**。`item.image_path` 保留原来的 FtrIcon 文件名候选，不与 ClosetIcon 混写。两者仍不是运行时图像消费者证据。

R80 成功输出：

| 项目 | 记录数 |
| --- | ---: |
| 原始服装组 BCSV 行（有效名称） | 1,461 |
| 原版代表物品 ID 直接关联 | 1,454 |
| 实例 ResName 后缀关联的服装候选 | 3,710 |
| **有组关联的物品合计** | **5,164** |
| 14 语言新增的服装组名称候选 | **72,296** |
| 保持原版 Item 数字 ID 的唯一语言关联 | **75,712** |
| 依然没有可用原版名称关联 | **8,484 条 item × locale** |
| 无对应服装组 / 存在多个组 / 组不含对应类型 MSBT | 299 / 4 / 9 项 |

**这些 72,296 条是“服装组名称候选”，不是每个独立服装颜色变体都经游戏原版 UI 显示验证。** R80 保留 R77 的 75,712 条数字 ID 强关联，不覆盖。关于服装颜色后缀、改造、现实选图，仍需继续追客户端/游戏消费者。

输出：`assets/evidence/rom-database/r80-group-names-evidence.json`、`r80-clothing-multilingual-coverage.csv`，以及完整压缩 SQLite 数据库。

## 5. SQLite 数据字典与查询

数据库：`assets/evidence/rom-database/r80-acnh303-multilingual-clothing-enriched.sqlite3.zst`。此文件是完整 SQLite 的 Zstandard 无损压缩品，独立 R80 验证了压缩后 SHA256 和原始数据库 SHA256 完全一致。

表：

| 表 | 核心字段 |
| --- | --- |
| `sources` | 原始 BCSV、14 份 String_*.sarc.zs 的 SHA-256 |
| `item` | id, id_hex, res_name, original_kind, base_kind_evidence, stack_s16, stack_evidence, image_path, closet_image_path（独立衣柜家族） |
| `kind` | label, kind_id, stack_s16, flags_json |
| `npc` | npc_type, source_index, res_name, npc_key |
| `msbt` | locale, member, text_index, label, text_raw, text_plain, control_count, malformed_control_count |
| `item_locale_candidate` | 物品 ID、语言、原版标签、复数标记及对应文本 |
| `item_locale` | 显示名、关联状态、来源 member/label（每物品每语言一行） |
| `npc_locale` | 普通 NPC 的原版命名键/本地化文本 |
| `image_asset` | 已提交 PNG 路径、文件名 stem 和候选图标家族（不代表游戏选图） |
| `clothing_group` | 服装组 ID、代表物品 ID、组原始名称 |
| `item_clothing_group_candidate` | 物品与组的关联方法以及日语一致性辅助证据 |
| `clothing_group_locale` | 原版 Outfit/GroupName 语言文本 |

原版完整 DB 为 163+ MB，GitHub 限制单 blob 100MB，因此仓库**只保存已做 SHA256 往返验证的 `.sqlite3.zst`**。源码解码器依赖 Python 3.11+、`zstandard`，SQLite/Python 标准库即可完成数据查询。

### Windows PowerShell / 其他平台查询

安装依赖：

```powershell
py -m pip install zstandard
```

确保本仓库脚本和 `r80-...sqlite3.zst` 资源都已下载到原始相对路径。查询脚本会在本机首次查询时自动将 `.zst` 恢复为 `.sqlite3`：

```powershell
py Scripts/acnh303_r78_query_catalog.py stats
py Scripts/acnh303_r78_query_catalog.py item 0x0DE5
py Scripts/acnh303_r78_query_catalog.py item 3557
py Scripts/acnh303_r78_query_catalog.py npc ant00
py Scripts/acnh303_r78_query_catalog.py search 竹 --locale CNzh --limit 20
py Scripts/acnh303_r78_query_catalog.py categories --limit 25
py Scripts/acnh303_r78_query_catalog.py unresolved --limit 25
```

注意 `0x0410` 是十六进制，`1040` 是十进制。非 0x 数字输入一律当作十进制，不会再误把四位数字 ID 当成十六进制。

SQL 示例：

```sql
SELECT i.id_hex, i.res_name, i.original_kind,
       cn.display_name AS name_cn, en.display_name AS name_en,
       cn.association_status, i.base_kind_evidence, i.image_path
FROM item i
LEFT JOIN item_locale cn ON cn.item_id=i.id AND cn.locale='CNzh'
LEFT JOIN item_locale en ON en.item_id=i.id AND en.locale='USen'
WHERE i.id=3557;

SELECT id, res_name, original_kind, base_kind_evidence,
       stack_s16, stack_capacity_candidate, pickup_verified
FROM item WHERE id=3557;

SELECT i.original_kind, COUNT(*) AS unresolved
FROM item i JOIN item_locale l ON l.item_id=i.id
WHERE l.locale='CNzh' AND l.display_name IS NULL
GROUP BY i.original_kind ORDER BY unresolved DESC;
```

## 6. 校验、边界和后续研究

R81 是独立验证器：`Scripts/acnh303_r81_validate_database.py`。验证 zstd SHA、解压 SQLite SHA、`PRAGMA integrity_check`、11,178 件、189 类、417/74 NPC、408,156 条 MSBT、75,712 数字 ID 名称、72,296 服装组候选、8,484 缺口，并实查竹制落地灯和村民 ant00。

所有原始 JSON、CSV、图片和 BCSV 不被覆盖；若未来 Game BuildID、原版 MSBT label、ItemKind 名称或哈希对不上，应暂停导出，不进行模糊覆盖。

### 优先留给下一轮的 Native 追踪

- 8,484 条语言记录的缺口：分析未使用的 MSBT 成员、服装特殊组和资源缺失，不用旧站点图片名称硬填。
- 剩余 52 个未映射子类：研究 UnitIcon 花卉编码与 ItemKind 分类逻辑，记录 Native 类型转换的实际消费者。
- `MultiHoldMaxNum = -1`：原版物品数量的保存编码/打包和运行时上限，不能以 65535 代替。
- “可以拾取”：分开研究 CanPut、CantTakeOver、库存携带、场景状态和实际拾取函数，只在 Native/GDB 验证后升级。
- 家具 ReBody/ReFabric、服装颜色与 ClosetIcon/ FtrIcon 实际呈现的 Runtime 选图逻辑独立追踪。

## 7. Actions 与复现入口

- R76：#41459415632，14 语言 1,862 个 MSBT 解析成功。
- R77：#41460505657，原版主表 SQLite / CSV 数据生成成功、无损压缩验证成功。
- R79：#41460806659，原版服装组键名和组参数结构验证成功。
- R80：#41461510499，服装组来源关联、候选身份和压缩 SQLite 生成成功。
- R81：独立 SQLite 完整性与实际命令行读取验收，参见 `acnh303-r81-sqlite-integrity.yml`。

脚本及工作流都位于本仓库 `Scripts/` 和 `.github/workflows/`，且本阶段数据在 `assets/evidence/rom-database/`。
