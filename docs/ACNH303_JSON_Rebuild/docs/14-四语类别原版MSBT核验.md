---
title: 14 · 从原版四语 STR_CategoryName.msbt 核对 ItemKind 类别
tags: [ACNH, 3.0.3, locale, CNzh, ItemKind, MSBT, R86]
status: ci-native-msbt-audit
---
# 14 · 189 个 ItemKind 类别能否对应官方中文名？

这一步不能从 `ItemKind.csv` 中的 `hash_036E8EBE` 日文描述直接推断。必须实际解压原版：

- `Message/String_CNzh.sarc.zs`
- `Message/String_TWzh.sarc.zs`
- `Message/String_JPja.sarc.zs`
- `Message/String_EUen.sarc.zs`

逐份走 **Zstd → SARC → `STR_CategoryName.msbt` → LBL1/TXT2**，以 MSBT 原始 `label` 与 `ItemKind.Label` 严格关联，记录全表是否存在同名键。

`Scripts/acnh303_r86_category_locale_audit.py` 使用仓库既有 `Scripts/acnh_formats.py` 解析器，不使用第三方名称表。输出：

1. `r86_original_category_msbt_labels_4locale.csv`：四语完整原版 `STR_CategoryName.msbt` 标签与原文；遇控制码保留原文 JSON。
2. `r86_itemkind_189_category_locale_join.csv`：189 个 ItemKind Label 逐个在四语中标记 `exact_MSBT_label`、`casefold_candidate_not_proven` 或 `no_verified_label`。
3. `r86_category_locale_evidence.json`：每语种的源归档 SHA-256、MSBT 段及关联结果统计。

**注意：** 即使 `STR_CategoryName.msbt` 内有简中，若没有对应 `ItemKind.Label` 的原始同名 key，也只能称它是一个独立的原版 UI 类别名称表。不可将其强行覆盖 189 个 ItemKind 子类。需要再寻找原版调用者与 ID/枚举映射。

复现：
~~~powershell
py -m pip install zstandard
py Scripts/acnh303_r86_category_locale_audit.py --repo-root . --out r85-output
~~~

## R86 已完成：真实结果（2026-11-14）

[Actions #43609711677](https://github.com/969981/ACNH_Resources/actions/runs/43609711677) 成功读取四个原版 `String_*.sarc.zs`；每个压缩档中均找到 **224** 个非空 `STR_CategoryName.msbt` 标签。它们是四位数字（如 `0018`、`0053`），而 `ItemKind.Label` 是 `Ftr`、`Tops` 等内部英文标识，因此 **四语言严格匹配全部 0/189**，大小写候选也均为 0。

原版 CNzh 中 `0018=家具`、`0015=地垫`、`0053=上装`、`0057=鞋子`、`2503=DIY手册`；这些是**真实 UI 类别文字**，尚不构成与 189 个 ItemKind 类别的原生外键。

### 日文文本的二次候选（不当成原版外键）

另外可将 `ItemKind` 中日文备注，与 `STR_CategoryName` 的 JPja 原文做完全相等的文本比较：**6 个种类存在同文候选**，其中 3 个仅对应一个数字标签（`Bromide` ↔ `1923`，`Poster` ↔ `1951`，`DIYRecipe` ↔ `2503`），`Rug` / `Gyroid` / `Music` 分别有多个数字标签，只能记录歧义。

本轮已通过 [Actions #43610018031](https://github.com/969981/ACNH_Resources/actions/runs/43610018031) 完成额外的日文语义候选扫描。候选清单也持久保存在 [R86 候选 CSV](../evidence/r85/r86_japanese_note_text_candidates.csv)。

独立输出 `r86_japanese_note_text_candidates.csv`；这些只能标记 `unique_exact_JP_text_candidate` 或 `ambiguous_JP_text_candidate`，**不写入已经验证的 CNzh ItemKind 名称列**。要建立正式映射仍须跟踪 Item UI 分类枚举与调用者。

对应工作流：`.github/workflows/acnh303-r85-static-invite-kind.yml`。回到 [[ACNH303_JSON_Rebuild/00-Home|专题首页]]。
