---
title: R87 · ItemKind 到 UI 数字类别及 ARM64 注册/派发探索
tags: [ACNH, R87, ItemKind, UI, Ghidra, ARM64, EventFlow]
status: reproducible_static_probe
---
# R87 · UI 类别、ELF 原始字符串和 ARM64 地址引用

## 研究目标
R86 已独立读取四语言各 224 个 `STR_CategoryName.msbt` 数字标签，但与 189 个 `ItemKind.Label` 同名连接为 0。本轮在同一个原始 ROM 版本上检查 **256 项 `ItemUIFurnitureCategory`、117 项 `ItemOutfitCategory`、189 项 `ItemKind`** 的标签及数值联系，并在完整 `main.elf` 上查 Native Query 字符串及 ARM64 字面地址引用。

## 输出证据及限制
- `r87_itemkind_to_ui_japanese_text_candidates.csv`：JPja 原版文本完全相同的 ItemKind→UI 标签候选；不是原版枚举映射。
- `r87_itemparam_numeric_ui_field_candidates.json`：ItemParam 中各个 1/2/4 字节字段与 UI 子表 UniqueID / MSBT 数字标签的交集，仅作**候选筛选**；没有原生调用者时不能升级为真值。
- `r87_native_elf_query_xrefs.json`：原版 `main.elf` 的精确字符串地址、`ADR` 或 `ADRP+ADD/LDR` 直接代码引用、两个 Ghidra 候选地址的 `BL` caller；每个结果保留源 ELF SHA-256。
- `r87_evidence_summary.json`：输入、统计及已有 Ghidra 导出进度。
- 工作流：`.github/workflows/acnh303-r87-ui-native-xref.yml`，执行：
  ~~~powershell
  py -m pip install zstandard
  py Scripts/acnh303_r87_ui_query_native_probe.py --repo-root . --out r87-output
  ~~~

## 两个不能互换的层次
1. **来源表的标签与数字匹配**：可以原样报告；例如两个表有同名 `Tops`，仅能说存在共同标签。
2. **运行时 Native 函数的接收字段、调用关系与判定语义**：必须有跨表索引或 ELF/Ghidra consumer 证据才能说某个 `ItemKind` 映射到 `STR_CategoryName` 的指定数字 ID。

对 `EventFlowQueryCanInduceNpc`、`EventFlowQueryIsCallableAmiiboNpc` 等同样要求**注册表 → 函数指针 → 具体条件代码 → 实际返回分支**的闭环。ELF 字符串引用即使与某段反编译代码邻近，也不证明 Query 身份或每一位村民的入住/接走资格。

依据：[[ACNH303_JSON_Rebuild/docs/12-村民入住跨岛接走露营地和amiibo]]、[[ACNH303_JSON_Rebuild/docs/14-四语类别原版MSBT核验]]。


## R88 地址基准一致性说明

Ghidra 的函数地址采用 `image_base=0x00100000`，ELF 原始虚拟地址需要减去该值。示例：`FUN_00EE5828` → raw `0xDE5828`，原始 `Camp_InduceFailFlag` xref 为 `0xDE584C`，对应函数入口后 36 字节。见 [[ACNH303_JSON_Rebuild/docs/16-ELF重定位与Ghidra函数指针追踪]]。


## R89 / 中间表进一步核查

R87 已在原版进行 `ItemKind.Label` 到 `ItemOutfitCategory.Label` 严格相等核对，交集 **28**；到 `ItemUIFurnitureCategory.Label` 交集 **23**，两者独立于 `STR_CategoryName` 的 224 个数值 UI 标签。增强的 R87 额外按 **JPja 名称文本完全相等** 关联两个 UI 中间表的日文原生注释，输出 `r87_ui_intermediate_table_japanese_text_candidates.csv`，仍为候选，**不强行填充 189 种 ItemKind 的正式 CNzh 名**。
