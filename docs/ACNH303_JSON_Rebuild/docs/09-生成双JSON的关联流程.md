---
title: ACNH 3.0.3 · 从 ROM 到 villager_db_multi 与 web_db_multi
tags: [ACNH, JSON, ETL, SQLite, provenance]
---
# 09 · 原版数据提取到旧网站双 JSON 的完整关联流程

> [!important] 边界
> `villager_db_multi` 可凭 417 条原版 NmlNpcParam 与四个 locale 的精确 MSBT label 重建六字段。旧 `web_db_multi` **不能**从 1 个原版 BCSV 转成 11,713 行：它需要 10,789 个普通物品 + 924 个单独配方展示行，还含由网站后处理产生的类别、名称后缀与 17,170 条变体。重建原版时必须分离产物/材料/款式，不得填造与旧站完全一致的数据。

## A. villager_db_multi（417 行、6 列）
| 目标 JSON 字段 | 来源 | 规则 |
|---|---|---|
| `ResName` | NmlNpcParam.hash_48EF0398（string64） | 示例 `NpcNmlAnt00` |
| `Label` | ResName + Npc/STR_NNpcName.msbt | 去掉 `NpcNml`，将剩余字符串转小写；`ant00` |
| `nameCN` | String_CNzh.sarc.zs | `Npc/STR_NNpcName.msbt` 的 `ant00` |
| `nameTW` | String_TWzh.sarc.zs | 精确相同 label |
| `nameJP` | String_JPja.sarc.zs | 精确相同 label |
| `nameEn` | **String_EUen.sarc.zs** | 旧站英文选 EUen，不是 USen |

**已核实**：417 个 ResName 和 Label、417×4 个文本与前一次原生导出 CSV 严格相等；USen 下 `NpcNmlBrd11` 为 Jacob（旧 EUen 为 Jakey），`NpcNmlPig05` 为 Spork（旧 EUen 为 Crackle）。

## B. web_db_multi（11,713 行、14 列）

| JSON 键 | 原始资源/转换 | 证据说明 |
|---|---|---|
| `id` | 非图纸为 ItemParam.UniqueID；图纸为旧站展示虚拟商品 5794 | 旧站 924 图纸不能按 id 作主键 |
| `id_hex` | 非图纸由 ID 格式化为大写十六进制；图纸为空 | 虚拟展示格式 |
| `label` | ItemParam 内部资源名，图纸取对应成品资源名 | 对应 repo-observed `hash_3FEBC642` |
| `name` | CNzh 的原版 MSBT + 旧站展示后缀 | 颜色/款式不一定存在于原版消息文本 |
| `name_zhTW` | TWzh 原版 MSBT + 旧站展示后缀 | 同上 |
| `name_jaJP` | JPja 原版 MSBT + 旧站展示后缀 | 同上 |
| `name_enEU` | EUen 原版 MSBT + 旧站展示后缀 | 不要与 USen 混淆 |
| `ItemKind` | ItemParam 原始 Kind 与 ItemKind.Label 候选关系 | 部分原生细类无直接同名基类 |
| `category` | 旧站展示分类 | 非原版单一直接字段 |
| `type` | 旧站枚举 | 需追查网站生成规则 |
| `price` | ItemParam.Price s32 候选 | 买/卖/未出售的具体规则待验 |
| `recipe_id` | RecipeCraftParam.UniqueID u16 | **不是** RecipeCraftParam.Item，也不是共用 5794 |
| `variations` | 旧站编码的 JSON 数组，关联 ItemRemake/图标/服装等多来源 | 原版数据通常不能一一直接同构 |
| `max_stack` | ItemKind.MultiHoldMaxNum s16 + 旧站逻辑 | -1 特殊哨兵不能解释为 65535 |

## C. DIY 924 行独立生成

原版 `RecipeCraftParam.bcsv` 的关键列经 `CRC32("字段名 类型")` 验证：

```text
UniqueID u16      hash_54706054 = 配方 ID，例如 6
Item u16          hash_89A3482C = 成品物品 ID，例如 2596
Material1 u16     hash_1BBFA75E = 第 1 材料 ID，例如 2213
Material2 u16     hash_5C1FDD8E = 第 2 材料 ID，例如 2511
...
Material6 u16     hash_A99F7B4E
Amount1 u16       hash_13A65775 = 第 1 材料数量，例如 10
Amount2 u16       hash_54062DA5 = 第 2 材料数量，例如 2
...
Amount6 u16       hash_A1868B65
```

**举例（第 1 行）**：原版配方 UniqueID=6，成品 Item=2596（FtrFruitsTV），材料 ID 2213 ×10 与 2511 ×2；无用材料位出现 65534，应作为原版特殊码保留而非实体材料。此例支持外键设计，但全量 924 项仍需 source-verified join 审核。

## D. ItemRemake 与变体

原版 ItemRemake有 1,306 行，真正的物品外键是 **`ItemUniqueID u16` = `hash_FD9AF1E1`**；改造行身份为 **`UniqueID u16` = `hash_54706054`**。例如第 1 行 ItemUniqueID=1288、UniqueID=72，说明两种 ID 不能混用。

旧 `variations` 中的 17,170 个变体条目应按 `(item_id,variant_id)` 归一化。ItemRemake 的 Body/Fabric 的组合、服装组款式、照片/图标来源和游戏中默认选图都需要各自证明；不能拿 1,306 行直接伪造成 17,170 个不同原版行。

## E. 推荐物理数据库主键

```sql
CREATE TABLE item(item_id INTEGER PRIMARY KEY,res_name TEXT NOT NULL,kind_raw TEXT);
CREATE TABLE npc(res_name TEXT PRIMARY KEY,npc_key TEXT UNIQUE);
CREATE TABLE npc_locale(res_name TEXT,locale TEXT,raw_name TEXT,PRIMARY KEY(res_name,locale));
CREATE TABLE item_locale(item_id INTEGER,locale TEXT,raw_name TEXT,source_member TEXT,source_label TEXT,evidence TEXT,PRIMARY KEY(item_id,locale));
CREATE TABLE recipe(recipe_id INTEGER PRIMARY KEY,result_item_id INTEGER,source_row INTEGER);
CREATE TABLE recipe_ingredient(recipe_id INTEGER,slot INTEGER,material_item_id INTEGER,amount INTEGER,PRIMARY KEY(recipe_id,slot));
CREATE TABLE item_remake(remake_id INTEGER PRIMARY KEY,item_id INTEGER,source_row INTEGER);
CREATE TABLE legacy_variant(item_id INTEGER,variant_id INTEGER,label TEXT,evidence TEXT,PRIMARY KEY(item_id,variant_id));
```

建议先导出原生中间层，再建立可复现的 **legacy JSON adapter**；不覆盖来自原版的原始记录和哈希。

相关：[[ACNH303_JSON_Rebuild/docs/08-字段数据字典总览]]、[[ACNH303_JSON_Rebuild/docs/10-证据分级与已知错误]]。
