# 原版家具改造款式

返回 [Catalog](Native-Item-Catalog.md) · [MSBT 标签](../Sources/Message/Native-Label-Rules.md)。

# 家具改造款式数据库

1306项原生 ItemRemake 定义，依据 FUN_01AD7260 / FUN_01AFCFA0 的正常记录分支解码两个 s8 数量（-1..7 → 0..8）。ItemParam.RemakeID 关联定义；每项有效数量范围内的 slot 保存颜色原值、色号候选、原版模型路径及 Git Blob、14语言原版标签。优先物品自身标签，代表物品回退保持候选。原版 BCSV 与 MSBT SHA 校验。

普通模式参数候选：body bits0–2、mode bits3–4、fabric index bits5–12；word=body|(fabric<<5)，仅普通模式0。依据 FUN_01AFE3E0、01AFEEF4、01AE3A80。组合为静态候选，缺轴使用0占位，不代表全组合可选；不确认实际实体写入位置、特殊模式、自定义设计或派送权限。图标仅验证 Model/Layout_FtrIcon_* 的 Git 路径，不宣称像素已提取，颜色ID映射仍候选。

文件：remake_definition.csv、item_remake.csv、variant_slot.csv、variant_locale.csv、variant_combination.csv、remake_message.csv、variants.sqlite3、summary.json、manifest.json。

运行：`uv run --script Scripts/bcsv/build_variants.py --historical historical`。 [原版历史研究](https://github.com/969981/ACNH_Resources/blob/f09e15460d02790060a374b2ad6ba569ba9b97ed/Scripts/acnh303_remake_model_binding.py)。首轮 CI 待验收。

[数据目录](https://github.com/969981/ACNH_Resources/tree/research/research/catalog/variants)。
