# R105 — 原版赠礼研究数据库

以原版 BCSV 而非旧 Web JSON 为源，逐字段校验表结构并保留 SHA-256。417 居民 × 11178 ItemParam 记录使用 SQLite 惰性 CROSS JOIN；这是全部原始物品覆盖，不是全部可赠送物品已验证。原版 UniqueID 是主键。gift_eligibility=NULL，未匹配不视为不喜欢。原版 ItemColor 的15个枚举和 AITag 的51个 Key/日文/四种 group CRC 保存；AITag UniqueID 非连续，不冒充 native bit index。Npc style 5EF86F1F/195815CF 及 tag A54F92FD/E2EFE82D 保留原始枚举，名称尚未知。

## 新的四组标签证据

FUN_01a5ec80 将 ItemParam 四组 7 字节位图复制到按 ItemID 的 0x23 字节记录，顺序 S(12D4D7A6)、A(E8C448B2)、B(FA71E75C)、C(42CD8039)，最后7字节为逐字节补集。字段 CRC32("AITagBitRankS u8") 等逐项验证；字段实际跨度7，不能当单个 u8。FUN_007b0ea4 遍历 rank S/A/B/C 返回0/1/2/3；未命中或 index>=51 返回4。注意 AITag 的四种业务 group CRC 与四个 rank 位图不是同一概念。原版 AITag 行序到 native index 尚未证实，FUN_007b1100 读取运行时映射表，保留缺口。旧 wuffs 1.6.0 schema 可独立佐证这些字段名 https://wuffs.org/acnh/bcsv_160/html/ItemParam.html 。

## 颜色、风格、变体

FUN_01ae3210 / 01ae3bc0 读取原版 RemakeID (CB5EB33F)，Body 8 槽与 Fabric 8 槽的两色字段从真实 switch 分支获取，记录全部字段槽位；不把槽位当作已验证可选的 Body/Fabric 组合。默认颜色回退使用 PTR_DAT_04bc0028/0030 的运行时表。ItemParam 两个原版列 A6B1A7FD/B7CCCD84 按原版 ItemColor Key CRC 对账保留候选（旧 schema 顺序提示），不声称已经恢复运行时数组写入。01AE0CF0 读取 9BA040C2 u32，范围0..6；另一风格来自运行时数组，名称和初始映射未知。数据库仅将 clothing kind 前缀候选且 style1 原始值1..6匹配居民任一风格的情况标注 direct_style_match_conditional；其他未知。

## 交付与冷却
026B7690 比较专属照片 Item 与记录的 Item，若匹配并找到同一玩家完整/轻量记忆，才设置 BromideRewardSkipCount=10。验证四个直接 BL 消费者并保存机器码窗口，不把历史写入等同于成功交付。配送的无直接门禁不证明全局绕过。

## 使用
```powershell
python -m pip install lz4==4.4.4 capstone==5.0.6
python Scripts/acnh303_r105_gift_db.py --root . --out artifacts/acnh303-r105
python Scripts/acnh303_r105_gift_db.py --db artifacts/acnh303-r105/acnh303_gift_research.sqlite3 --npc-id 1 --item-id 4249 --friendship 200 --wrapped
```
Web sidecar 使用真实 id 和原始枚举、nullable eligibility，不包含未证实的最终照片概率。后续可以和 14 语言 Web 数据库 join；本轮不直接改动 acnh-web 的运行逻辑。实际可赠送限制、完整服装枚举/标签索引、变体合法性、72 构造函数与204名称、真实存档/GDB/Ghidra 尚待独立验收。
