---
title: "R100 · 真实 BCSV 语料与 AttrClear 字段恢复"
tags: [acnh, bcsv, crc32, eventflags, native, r100]
game_version: "3.0.3"
updated: 2026-11-24
status: three-high-confidence-reconstructed-one-unresolved
---

# R100 · AttrClear 命名家族

[[00-Home|研究主页]] · [[30-R98-Friendship-Model-Caller-Audit|R98]]

## 核心结果

| Hash | 高可信恢复签名 | 证据 |
| --- | --- | --- |
| 5F77B61A | AttrClearCulling u8 | CRC32 精确命中；Native 选择性重置 A，待确认 culling 触发细节 |
| BED25A86 | AttrClearMoving u8 | CRC32 精确命中；NPC Memory 迁移与 Player 表跨岛移动重置吻合 |
| 8D401DF7 | AttrClearStageChange u8 | CRC32 精确命中；Native 选择性重置 B，场景标志吻合 |
| 5140E4B4 | null | 日期重置枚举已知，原名仍未恢复 |

三个名称是同一语义家族的强候选，独立 Python zlib 计算通过。原始表头未找到，不改写 R94 的官方名证据等级。

## 语料与双向搜索

历史源固定为 [CylindricalEarth bb09c0ee](https://github.com/Treeki/CylindricalEarth/tree/bb09c0ee71a4aa6011de088b88ea55fdee0bf6e9)，八个规格 1.0.0 至 2.0.0；1582 个 CRC 校验通过的唯一字段签名、3293 个枚举名称、513 个迁移/日期/状态相关玩家 Key。补充历史 preset 1846 个 CRC 验证签名、877 个 enum block 和 6907 个 ASCII 枚举标签，未发现原始目标签名。

实际 MITM 348423 左段、15165 右段，121320 次逆向查表，覆盖 42,270,678,360 个逻辑组合（不是逐一计算），9 个 CRC 候选，3 个语义强匹配。针对剩余字段的 AttrClear 固定前缀第二轮覆盖 67,598,918,387 个逻辑组合，13 个碰撞均未达到原名恢复标准。原名未确认不是任意碰撞都可命名。

## 可复现

```powershell
python Scripts/acnh303_r100_name_corpus.py --selftest
python Scripts/acnh303_r100_name_corpus.py --root . --out artifacts/r100/report.json --scan-elf
```

第一阶段 corpus.json/report.json 保存精确语料及实际搜索结果。name_resolution.json 分开记录高可信候选和未知值。historical_supplement.json 保存补充数据。新增 Python 复现工具对历史语料逐条验证并重复第一轮 MITM；另可校验原始 ELF SHA256 并扫描实际字符串、枚举命名候选与文件偏移。新增 CI 尚待运行，不宣称原版 ELF 扫描已执行。第二轮定向搜索结果仅记录统计；未将其任意碰撞提升为名称。跨其他任天堂游戏的命名规则不能假定相同，先单独收集可溯源语料。

## 后续

- 在实际 ELF/Ghidra 证据中确认三个恢复名的原始字符串/注册信息；验证 Culling、Moving、StageChange 上层实际触发。
- 5140E4B4：定向日期重置枚举语料与 AttrClear 家族，保留 native_name=null。
- 原始字段字典只有在证据评级升级后才写入；保留 Hash 兼容键与独立候选字段。
