---
title: ACNH 3.0.3 · 网页道具与村民全14地区语种原版数据库导出
aliases: [ACNH Web DB Export, web_db_multi v2, villager_db_multi v2]
tags: [ACNH, 3.0.3, JSON, SQLite, 14-locale, ItemParam, ItemKind, NmlNpcParam, ItemRemake, RecipeCraftParam, MSBT, Obsidian]
status: ci-pending
---

# ACNH 3.0.3 · 网页道具/村民数据库与完整溯源导出

> [!important] 不覆盖网站原数据
> 用户网页旧版 `public/data/web_db_multi.json` 是 **11,713 条**，其中旧 DIY 配方 **924 条**另有与道具共用的 `id`，真正旧非配方 item 约 **10,789 条**；`public/data/villager_db_multi.json` 是 **417 名村民**，原版网站只有 4 种语言。新 3.0.3 ROM 的 `ItemParam` 有 **11,178** 个唯一 item ID；新格式必须把物品、配方、改造和 NPC 分开，不把 11,713 与 11,178 简单做总数相减，也不能直接把 v2 当旧数组无差别覆盖。

## 1. 源与证据链

- `assets/evidence/rom-database/r82-acnh303-villager-provenance.sqlite3.zst`：原始 3.0.3 多语言道具、服装、NPC、人物源元数据、原版图标及 SHA 溯源，原始解压后的 SQLite 有 417 普通、74 特殊 NPC，`item` 为 11,178，`kind` 189，含 14 locale 全表。执行前逐字节验证 R82 `compressed_sqlite_sha256`、`uncompressed_sqlite_sha256`、字节数和 SQLite `PRAGMA integrity_check`。
- `e10617820db06889e1638499478da0de_NCA/1/Bcsv/ItemParam.bcsv`：官方原始参数 11,178 行×107 字段、行长 548，SHA256 `9f31230158ab9ace881fe6e5c64579e206f5318646d8d77d8ac7c197abed3609`。
- `UnPack/1/Bcsv/ItemParam.csv` + `ItemParam.json`：字段哈希、原始行偏移、字节宽度。每一个 Item ID 的原始 Little Endian ID 都必须与 BCSV 字节吻合，连同每行 SHA、107 个原版字段值和十六进制字节切片导出，不猜未知 `hash_*` 含义。
- `UnPack/1/Bcsv/ItemRemake.csv`：以原始 `hash_54706054` 关联 item ID、保留完整哈希列；**不推断原版默认 Body/Fabric 组合**。
- `UnPack/1/Bcsv/RecipeCraftParam.csv`：924 个原版配方行、原始 ID/哈希字段；**Recipe ItemId、材料结构、实际业务语义需进一步核对**，不把猜测写成已验证配方。
- `Message/String_{locale}.sarc.zs`：14 语言/地区原始 Nintendo 包（每包 133 个 MSBT，合计 1,862 文件 / 408,156 条 MSBT）。R77/R80/R82 SQLite 已保存原版 name ID、服装组候选、原始 `text_raw` 和解析 `text_plain`；新导出保持 14 locale 的 `association_status`、`source_member`、`source_label`，缺失的名称是 JSON `null`。
- `NmlNpcParam.bcsv` / `SpNpcParam.bcsv`：村民 Birthday、UniqueID、Bromide/Poster ID、初始着装、NPC 类型、原始全部 hash 字段；图像按 NpcIcon、photo、poster、bromide_item 的**不同原始家族**输出候选路径和 hash，不以目录文件名单独证明 Native 选图。

## 2. 支持的 14 个原版 locale

| locale | 区域/语言 |
|---|---|
| CNzh | 简体中文 |
| TWzh | 繁体中文 |
| JPja | 日语 |
| KRko | 韩语 |
| USen | 美式英语 |
| EUen | 欧式英语 |
| USes | 北美西班牙语 |
| EUes | 欧洲西班牙语 |
| USfr | 北美法语 |
| EUfr | 欧洲法语 |
| EUde | 德语 |
| EUit | 意大利语 |
| EUnl | 荷兰语 |
| EUru | 俄语 |

这里是 **14 份 Nintendo 独立地区原版资源包**，不是硬凑 14 个完全不同的文字语言，更不能机械翻译或把美国/欧洲版本自动合并。部分 ID 及服装组不能唯一对应原版名称，明确保存 `null` 与候选关联证据。

## 3. 最新导出文件

工作流 `.github/workflows/acnh303-web14-full-export.yml` 在 CI 原样校验来源并创建独立、可下载的 Artifact，不修改旧网站和原始 NCA。

| 文件 | 结构与记录 |
|---|---|
| `web_db_multi_v2.json` | **11,178 条原版独立 item**：ID、14 locale 名称和来源、原始 ItemKind/确定与候选基类、静态类型 flags、堆叠、图片路径、服装组、关联改造行数、未知/未验证行为 |
| `villager_db_multi_v2.json` | **417 条原版普通村民**：网页兼容 `Label/ResName/nameCN/nameTW/nameJP/nameEn`，14 locale、生日、原始 NPC 参数、图片四家族及来源 hash |
| `special_npc_db_v2.json` | 74 个特殊 NPC 参数行：单独保存、完整原始 hash、14 locale 结构，**未能直接匹配文本的原版名称为 NULL** |
| `itemkind_db_v2.json` | 189 条原版类型规则、`MultiHoldMaxNum` 原始 s16、18 个已解码 ItemKind 静态操作 flags |
| `recipe_db_v2.json` | 924 条原始 RecipeCraftParam 记录及全部原始 hashed 字段，不冒充已解明材料配方 |
| `item_remake_db_v2.json` | 按原版 Hash ID 分组的 ItemRemake 全部原始行、原始 hash/行号及是否与 ItemParam 精确关联；R84 确认 **821 个真实物品 ID**关联，其他原始行继续留存、不能称为已关联物品 |
| `item_raw107_full_v2.jsonl.gz` | 11,178 × 107 个原始 ItemParam 字段，逐行含原始 byte hex、行 SHA 和原始偏移，无损压缩、独立于网页列表，避免把 107 个原始 hash 列重复塞进每张 UI 卡片 |
| `all_original_14locale_msbt_v2.jsonl.gz` | 可选 `--include-msbt-archive`，14 locale 原始 408,156 条 MSBT，保留 raw/plain、所有控制码相关字段 |
| `web_export_manifest_v2.json` | 全部文件 SHA256、源数据库原始 SHA 与校验、精确/候选关联计数、Name 缺口、真假原版语义门禁 |

所有现代 v2 文件都是独立新增文件，不应直接更名替换旧 `web_db_multi.json`。各功能前端应按 `id` 联表而不是 `id + recipe_id` 混合；`variations` 也是原生数组或 `null`，不再在 JSON 中嵌一个字符串。

### 针对 Vue 首屏的轻量分片（推荐网站使用）

本轮真实第一次导出发现研究用 `web_db_multi_v2.json` **51,556,420 B（约 51.6 MB）**，包含每条道具所有 14 locale 的完整文本来源证据；它适合离线研究、打包下载，**不适合网页首屏直接 fetch 全量**。

更新脚本后同时输出：

- `items_core_v2.json`：11,178 条道具的 ID、原始类、堆叠/静态操作标记、图片路径、价格与拾取的未知状态，**不重复装入 14 语言名称**；
- `villagers_core_v2.json`：417 人的身份、生日、照片家族、已知原版参数；
- `item_names_CNzh_v2.json` ... `item_names_USfr_v2.json`：14 个独立按 locale 的道具名称分片，每个 **11,178** 个 `{id,name,status}`；
- `villager_names_CNzh_v2.json` ... `villager_names_USfr_v2.json`：14 个村民名称分片，每个 **417** 个 `{Label,name,status}`。

网站应该先加载核心数组、189 条共享的 `itemkind_db_v2.json` 规则和当前选择语言的一个名称分片；只有切换语言时才按需获取对应文件，点击详情时再按 ID 查询已缓存的完整证据或后台 API，不要在卡片列表里直接渲染 107 个原始 hash 字段。前端 `items_core_v2.json` 不再为每个道具重复保存 18 个 ItemKind 静态 flags；它们来自共享分类表，并且**仅在精确 ItemKind 关联时**才可以用于 UI 静态标签。村民缩略图核心库只保留每个图片家族的真实候选路径集合；有多个候选时不假定其中一个就是原版 UI 最终选择。

Vue 数据加载参考（**仅示意，需要确认网站源仓库后再实际合并 UI**）：

```ts
const locale = 'CNzh'
const base = '/data/acnh303/'
const [items, names] = await Promise.all([
  fetch(base + 'items_core_v2.json').then(r => r.json()),
  fetch(base + `item_names_${locale}_v2.json`).then(r => r.json()),
])
const nameById = new Map(names.map((x: any) => [x.id, x.name]))
const display = items.map((item: any) => ({
  ...item,
  displayName: nameById.get(item.id) ?? null,
}))
```

此时 `max_stack=null`、`name=null` 都是“证据不足”，不等于堆叠 0 或不合法道具。旧站的 924 个 DIY 配方、旧变体字符串不应自动混入这个新源核心数组。

### 原版堆叠：至少 3 种不同情况

- **类别精确匹配 + s16 正数**：导出 `max_stack=10/30/50...`，status=`original_ItemKind_rule_not_runtime_behavior`，属于原版分类字段，不等于逐游戏场景实测。
- **类别精确匹配 + s16=0**：按 NHSE 一般单件规则候选解释 `max_stack=1`，保留原始 `kind_raw_s16=0`。
- **原始 s16=-1**：一定不能导出 65,535，也不能直接断言实际 max=10。导出 `max_stack:null` 和 `signed_minus_one_special_runtime_unknown`；NHSE 在其工具中把 -1 兼容替换为 10 只是工具行为，不是本项目 3.0.3 原版已验证 Native 上限。
- **5,050 个基类前缀候选与 52 个未知原版细类**：`max_stack:null`，保留父类候选名但不把候选的 10/30/50 套到物品行为上。

### “是否可以拾取”是场景相关问题

`ItemKind` 静态字段 `CanPut`、`CanBury`、`CanGift`、`CanSetChest`、`CantTakeOver` 是本项研究可直接展示的原版类型 flags。但这些 flags 各自描述不同行为，**不是单个 `CanPickUp` 运行时布尔值**。

因此本导出中 `can_pick_up`、`can_drop`、`can_take_to_other_island`、`can_trade_online`、`can_store` 均为 `null`；状态 `RUNTIME_UNVERIFIED`。后续需要记录实际地面物品实例、地形/岛主/访客、动作调用栈、返码以及保存/联机的真实原版游戏 trace 才能升级。

### 村民其他元数据

R82 的出生月日、普通/特殊 NPC、UniqueID、Poster/Bromide 物品 ID、原始 TalkType、Color、初始衣着及 NPC 原版图像与多语言名字已有静态来源证据。**Species/Personality/Gender 和是否可邀请/领养不是本轮已验证的原版业务映射**：完整原始 `hash_*` 保留供逆向研究，语义字段先导出 `null`，不可直接根据名字、种族代码或第三方网站猜值。

## 4. 安装与 Windows PowerShell 导出

```powershell
cd D:\\WorkSpace\\Pokemon\\ACNH_Resources
py -m pip install zstandard
py Scripts/acnh303_web14_export.py --root . --out artifacts/acnh303-web14 --include-msbt-archive
```

输入为仓库已有 3.0.3 原始 BCSV、R82 压缩 SQLite、R84 解码的原始 ItemParam.csv 和其它原始表。若使用 Git sparse checkout，必须确保这些 7 个输入路径实际已检出。生成文件位于 `artifacts/acnh303-web14/`，可直接下载 GitHub Actions 成功运行的 Artifact。

已有网站可选另传本地旧 JSON：

```powershell
py Scripts/acnh303_web14_export.py --root . `
  --legacy-items D:\\site\\public\\data\\web_db_multi.json `
  --legacy-villagers D:\\site\\public\\data\\villager_db_multi.json `
  --out artifacts/acnh303-web14
```

此时旧道具分类、价格、type、变体 JSON 会以**仅旧网站来源**的证据状态保留，不提升成原版游戏已证实真值。无旧 JSON 时这些字段保持 `null`。由于 924 DIY 配方与真实 item 不同粒度，它们被隔离于原版物品表；旧网页 DIY 记录会单独记数，不会创建重复 Item ID。

网站当前读取 `src/views/Acnh.vue` 的旧 schema。**项目数据库独立导出不等于已经改写该 Vue 页面**；在确认站点源代码仓库及组件后，再加一个适配层完成本地筛选、语言切换、图片路径和变体渲染迁移。

## 5. 最低回归验收

真实 Actions 应检查：

1. R82 压缩与原始 SQLite SHA256、`integrity_check=ok`；
2. R84 原版 `ItemParam.bcsv` + CSV 两份固定 SHA、每行 107 列及原始 ID 的小端字节；
3. 11,178 item、189 kind、417 普通和 74 特殊 NPC、924 配方、156,492 条 ItemLocale、6,874 条 NpcLocale、408,156 条 MSBT；
4. 每个原版 item/普通村民有且仅有 14 locale slot，缺少可靠原始名称时仍为 `null`；
5. 主字段 `can_pick_up=null`、`stack_s16=-1 -> max_stack=null`、村民邀请与性格归类没有证据时不自动生造；
6. 每个导出文件重算 SHA256、同一 item/npc ID 不重复，全部原始 107 字段都已单独无损输出。

这轮交付的成功标准是**原版 14-locale 的全面导出数据与字段溯源**，不是所有字段的 Native 业务语义已经完成。也不依赖/修改 R45–R90 的历史源 SHA 身份覆盖数字。

## 下一步独立研究

- 从原版 3.0.3 `ItemParam` 中按 CRC32('Price u32') 等候选字段哈希与 NHSE/CRCPedia/老客户端对照，才可把旧站价格升级为真正 ROM 原版价格；未验证前 `price_evidence=legacy_web_only/unknown`。
- 分析配方材料列的真实 BCSV 类型、数量与输出 item 的调用逻辑，得到可正确查询的 `recipe_ingredients` 结构。
- 解析 ItemRemake 的 Body/Fabric 组合、默认索引、原版纹理与改造文本，验证变体 ID 不能仅由 CDN `_Remake_i_j` 字符串构造。
- 以 Native 调试追踪 `CanPut`、`CantTakeOver` 的实际消费者、拾取/放置/联机动作与 UI 返回码，然后按场景层级导出 `pickup_capability` 而非单值。

## 相关文档

- [[ACNH303_R74_R75_ORIGINAL_ITEM_NPC_METADATA_AND_LANGUAGES]]
- [[ACNH303_R76_R81_NATIVE_MULTILINGUAL_ITEM_DATABASE]]
- [[ACNH303_R84_ITEMPARAM_107_FIELDS_SOURCE_AND_EXPORT]]
- [[ACNH303_R84_RUNTIME_ITEM_RESTRICTIONS_EVIDENCE]]
- [[20-BDLI-Native-Consumer-Capture-Gate]]
