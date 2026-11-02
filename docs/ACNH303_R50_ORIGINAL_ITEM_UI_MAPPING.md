---
title: ACNH 3.0.3 — 待核查图片的原版 ID 与其他 Layout
aliases: [R50 图片来源映射, R50 ItemRemake]
tags: [ACNH, 3.0.3, BNTX, ItemParam, ItemRemake, audit]
status: source-verified-semantics-pending
---
# R50：344 个重制款式及 431 个非标准 UI Layout

> [!important] 来源分层
> 原始目录 1,254 项均维持 pending_original_rom_source_verification。验证 BNTX 原生像素，不等于证明这是物品在游戏里使用的默认 FtrIcon；也不允许把其他 UI 类型冒充普通道具图标。

## 原版直接匹配已完成

- 26,277 / 26,277 个同名标准 FtrIcon、ClosetIcon、NpcIcon 来源，验收位于 assets/evidence/rom-items/reconciliation.json。
- 1,934 / 1,934 个村民相关原版素材，验收位于 assets/evidence/rom-villager/reconciliation.json。
- 1,254 个非同名项目分别为 479 个独立村民照片、344 个重制款式候选、431 个其他来源待核查项。

## 344 个 ItemParam 基础名称及重制候选

所有 344 个基础名称在 ItemParam CSV 的 hash_3FEBC642 字段精确出现。原版 PNG 已通过既有来源审计，并且以独立的 _Remake_0_0 名称存在，不重命名它们。

ItemParam、ItemRemake 共享哈希列 hash_54706054。按实际数值 ID 连接，30 项得到唯一的 ItemRemake 行，314 项未找到，0 项多重歧义。CSV 行号不是道具 ID。

案例：FtrAcorsticguitar 在 ItemParam 行 281 的 ID 为 383，对应 ItemRemake 行 254；FtrBambooLamp 在 ItemParam 行 1989 的 ID 为 3557，当前 ItemRemake 同一字段无记录。两者都存在原版独立 _Remake_0_0 PNG，但默认款式选择逻辑尚未确认。

逐项索引：assets/evidence/rom-items/itemparam-itemremake-id-crossref.json 及同名 CSV。ItemRemake ID 未匹配不等于原始素材不存在，也不能证明 0_0 就是游戏默认状态。

## 431 个没有普通同名图标的名称

完整 3.0.3 RomFS Git tree 与 ItemParam CSV 交叉核查后：
- 385：ItemParam 名称存在，RomFS 存在相关文件。
- 6：ItemParam 名称不存在，但 RomFS 存在其他相关文件。
- 40：ItemParam 没有精确名称，完整 RomFS 文件树也没有相关文件名。

再按完整后缀而非模糊字符串寻找不同 Layout，恰好找到 391 个唯一来源：GardeningIcon 380、MenuIcon 6、DIYRecipeIcon 2、MessageCard 2、CloudIslandSave 1。文件路径清单在 assets/evidence/rom-items/unmatched-exact-other-layout.json / CSV，已通过 Actions #41409251007。

## 新增 391 张真实的其他 UI PNG

Actions #41409544837 从这 391 个原始文件实际解包 BNTX、校验原生 BRTI 名并转换 391 张真实 PNG，0 解码失败、0 隔离。报告含原始压缩文件 SHA-256 与输出 PNG SHA-256：

- 输出：assets/images/other-layout/GardeningIcon、MenuIcon、DIYRecipeIcon、MessageCard、CloudIslandSave
- 来源：e10617820db06889e1638499478da0de_NCA/1/Model 中各自的 Layout 文件
- 证据：assets/evidence/rom-other-layout/report.json
- 工作流：.github/workflows/acnh303-other-layout-decode.yml

这些图片并未覆盖任何既有 items 或 items-rom PNG，也不记作额外标准 FtrIcon 成品。原始 1,254 个目录名称仍保持待核查，图像已提取与名称语义映射验证是不同的验收维度。

## 仍待验证

1. 344 个基础商品的默认 body/fabric 与 0_0 选择规则，需要还原调用者和数据字段含义；314 项未在 ItemRemake 同 ID 找到行，须检查其他款式控制来源。
2. 对 391 张其他 Layout 图标做 UI 消费者、实际用途、显示尺寸与组合关系验证，决定何时可以为 catalog 写明确别名；目前只能原样单独使用。
3. 对剩余 40 个没有任何相关同名 RomFS 文件的名称，检查 catalog 原始来源、历史版本差异和可能的非同名资源引用，不臆测图片，也不从社区 CDN 替代。
