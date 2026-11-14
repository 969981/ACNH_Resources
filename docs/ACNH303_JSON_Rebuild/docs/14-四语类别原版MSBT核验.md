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

对应工作流：`.github/workflows/acnh303-r85-static-invite-kind.yml`。回到 [[ACNH303_JSON_Rebuild/00-Home|专题首页]]。
