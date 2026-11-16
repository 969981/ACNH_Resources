---
title: 02 · 字段溯源与 SQLite 模型
tags: [ACNH, SQLite, provenance, BCSV]
---
# 02 · 旧字段如何映射到原版

## villager_db_multi（6 字段）
| 字段 | 来源 |
|---|---|
| Label | ResName 去 NpcNml 前缀并小写，精确对 MSBT key |
| ResName | NmlNpcParam.hash_48EF0398 |
| nameCN / nameTW / nameJP | CNzh / TWzh / JPja 的 Npc/STR_NNpcName.msbt |
| nameEn | **EUen** 的同名 MSBT；旧文件 417/417 精确一致 |

## web_db_multi（14 字段）
| 字段 | 原版或衍生含义 |
|---|---|
| id | 非 DIY 的 ItemParam.hash_54706054；DIY 展示共用 5794 |
| id_hex | 非 DIY ID 的四位十六进制；DIY 留空 |
| label | 物品 ResName；图纸用产物 ResName |
| name、name_zhTW、name_jaJP、name_enEU | MSBT 基础名称 + 旧站颜色、款式、赝品等展示后缀 |
| ItemKind | ItemParam 细类、ItemKind 基类或站点规则的组合 |
| category、type | 旧站展示类别与枚举，未验证是原版一对一字段 |
| price | ItemParam 候选 hash_718B024D；买卖价语义尚需核对 |
| recipe_id | RecipeCraftParam 原版配方 UniqueID |
| variations | 字符串编码的 JSON 数组，不是原始 BCSV 的直接字段 |
| max_stack | ItemKind 的 s16 候选与旧站规则；-1 为特殊值，非 65535 件 |

## SQL 归一化原则
~~~sql
CREATE TABLE item(item_id INTEGER PRIMARY KEY, res_name TEXT NOT NULL, original_kind TEXT, source_id TEXT);
CREATE TABLE item_locale(item_id INTEGER, locale TEXT, name_raw TEXT, name_clean TEXT, source_label TEXT, association_status TEXT, PRIMARY KEY(item_id,locale));
CREATE TABLE recipe(recipe_id INTEGER PRIMARY KEY, result_item_id INTEGER, original_row INTEGER, evidence TEXT);
CREATE TABLE variant(item_id INTEGER, variant_id INTEGER, variant_label TEXT, remake_row INTEGER, evidence TEXT, PRIMARY KEY(item_id,variant_id));
CREATE TABLE npc(res_name TEXT PRIMARY KEY, npc_key TEXT UNIQUE NOT NULL);
CREATE TABLE npc_locale(res_name TEXT, locale TEXT, name_raw TEXT, PRIMARY KEY(res_name,locale));
~~~

不要将 legacy 网站表现形式反写成 Nintendo 原版字段。证据分级建议：ROM 原始 SHA/字节 > 原始 ID 精确 JOIN > 服装/类别候选 > 旧网站展示字段 > 未证实的运行时行为。

R77/R80 原生 SQLite 已有 item/item_locale/npc/npc_locale 等表；R84 保存 107 字段及原始字节，运行时行为缺少确认。下一篇：[[03-全量对账与389条差异]]。
