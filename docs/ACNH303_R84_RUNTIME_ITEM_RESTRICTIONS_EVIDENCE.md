# ACNH 3.0.3 道具 R84 原版证据与运行时验证说明

> 目标：不将 `ItemKind` 的静态标志直接等同于游戏运行时一定能拾取、存储、投放、交易、寄送或保存。

## 原版数据

- `e10617820db06889e1638499478da0de_NCA/1/Bcsv/ItemParam.bcsv`：11,178 行、107 个 hash 字段、记录长 548 字节；每条保存原始行索引、字节偏移、行 SHA-256、107 字段 CSV 原值与原始 BCSV 的切片十六进制。
- `UnPack/1/Bcsv/ItemParam.csv`：解析后的 hash 字段值。原文件中的字段哈希名不自动等同于已知游戏语义；ID `hash_54706054` 和资源名 `hash_3FEBC642` 已有来源交叉核验。
- `UnPack/1/Bcsv/ItemRemake.csv`：通过 `hash_54706054` 与 `ItemParam` 连接。多条映射与实际游戏中默认改造组合并非同一问题。
- `assets/images/items/`：已提交 PNG 的文件名存在性；不单凭 PNG 文件名判断其一定来自对应版本 ROM 原生纹理。
- `.../1/Model/Layout_FtrIcon_*.Nin_NX_NVN.zs`：确切 Git 文件路径存在性。如果本地 ROM 布局有差异或没检出该资产，则不推断不存在。

## 证据分层

1. `BCSV_ROW_BYTES_VERIFIED`：原始文件每行的偏移、哈希字段切片和 `ItemId` 小端整数均已核实。
2. `GIT_EXACT_PATH_EXISTS`：Git 源树存在相应 `.zs` / PNG 文件，但尚未解析 BNTX/BFRES 内部纹理及其运行时引用。
3. `REMAKE_ID_JOIN`：ItemRemake 的 hash-ID 与 ItemParam 的 hash-ID 相等；不说明初始改造参数 0_0 是否实际用于默认图标。
4. `RUNTIME_UNVERIFIED`：不判断游戏内可取出、投放、赠送、联机交换、是否可存档。

## 运行时最小验证矩阵

为每个待查 `ItemId` 保存如下字段作为一次性证据：

| 要验证的行为 | 观测条件 | 运行时需要的证据 |
|---|---|---|
| 地面拾取 | 离线、自岛、空背包 / 满背包 | Native 条件分支、返回值、物品实例 ID、错误码 / UI 消息 |
| 地面放置和丢弃 | 室内 / 室外；正常 / 特殊场景 | API 调用、参数、阻断点、实际世界物品实例 |
| 存入仓库/收纳 | 自岛住家 / 其他场景 | 仓库类别与禁止逻辑，并确认读档保留 |
| 传送 / 带到别的岛 | 访客与岛主两种角色 | 启程前序列化、离岛后的实例变化、实际可带回校验 |
| 多人交易与赠礼 | LAN / 互联网、双方游戏版本一致 | 服务器和客户端的筛选 / 回滚行为；不要以离线为准 |
| 改造变体 | 每种原版 ItemRemake 行和图片组合 | Native 选取的 Body / Fabric 变体、材质及最终缩略图 |

记录模板建议字段：`game_version, build_id, item_id, original_kind, scene, player_role, slot, action, breakpoint_pc, caller_pc, check_result, in_memory_value, on_disk_value, source_file, evidence_sha256, verified_at`。

**注意**：目前没有可靠的、可重放的 3.0.3 原版游戏运行时抓取数据，故导出库中的运行时字段必须保持 `NULL`，不能把 `CanPut`/`CantTakeOver` 等字面名字解释成实际可跨岛带走的最终规则。