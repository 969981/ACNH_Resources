# ACNH 3.0.3 邮件奖励候选池（HASH-008Q）

## 数据范围与证据

- 125 普通 + 19 特殊原始配置，以表名/原始行号为主键，TextKey 另存。
- 11,178 ItemParam 原始记录；189 ItemKind、318 ItemFrom、79 ItemMailAttachCategory 原生索引，3 分类组。
- ItemKind/ItemFrom 原版 CRC 与索引见 HASH-008P3 (run 45576933659)；邮件类别见 HASH-008J (run 45570889696)；18 原生分发表见 HASH-008N/O。
- ItemParam 邮件分类中 2,452 个 F4DBDF21 未匹配原生名称，保留 raw，不能直接并入 None。

## 生成

```bash
python -m pip install capstone==5.0.3 lz4==4.3.3
python Scripts/acnh303_mail_rewards.py --out research/mail-rewards/generated
```

输出 SQLite、items.csv、candidates.csv、configs.json、handlers.json、groups.json、scenarios.json、predicate_evidence.json、summary.json。CI 保存完整产物，源码和证据索引入 Git。

## SQLite

item、enum_value、category_group、handler、config、candidate、dependency、scenario、scenario_candidate；candidate_detail 视图。candidate 的 (config_id,stage,item_id) 是主键，避免重复。config.final_candidate_count 与 final_reward_id 为 NULL。

```sql
SELECT c.config_id,c.text_key,c.handling,c.base_count,c.proxy_count,c.final_candidate_count
FROM config c ORDER BY c.source_table,c.row_index;

SELECT item_id,res_name,kind_label,from_label,raw_price
FROM candidate_detail
WHERE config_id='N000' AND stage='category_base'
ORDER BY item_id;

SELECT config_id,name FROM dependency ORDER BY config_id,name;
```

## 阶段与边界

- category_base：按直接类别与组并集，清除 0 位，从原始 ItemParam 分类字段求候选。
- kind_union：按已有处理器证据增补类别集合。
- known_source_filter：仅应用已恢复的固定来源条件，不补猜测动态掩码。
- raw_price_proxy：使用原始 Price s32；原生 01AED730 还有数量与条件计算，不能当成运行时有效价格。
- scenario：显式上下文条件样例，不能当成每个玩家的结果。
- 处理类型 2/3/7/9 等存在未闭合的候选增补逻辑，空列表不表示原版无奖励。普通邮件额外 NPC 过滤、原版初始/最终谓词、运行时模板有效性、随机改造均保留依赖。
- 类型3 排除上下文集合后若空则恢复原集合；离线模型与 rank 选择及位图 padding 测试不代表原版运行时差分通过。
- 价格条件、原始静态匹配与真正游戏最终候选集分离。不得以空 proxy 推断原版固定 fallback。

本轮为可复现研究数据库，不更改原版资源、现有订单或机器人派送逻辑。PR #127 保持 Draft。

## Q2 实际验收结果

CI 45626813012 / job 139249076497 / commit 427da1374c9aba4869961098aeab1a1581f4aac4：PASS。完整 artifact 15028569976，SHA256 773d4d78890f56b10686d1216760744f8a8dbf538e79fad99315eedc268508f0。实际下载后复核 ZIP CRC、SQLite integrity_check 与 foreign_key_check。

- 144 配置，11,178 道具，261,658 条五阶段成员关系，34 场景，130 项有静态候选，含显式场景后 134 项有候选；10 项仍无已建模候选（N035、N058..N060、S000、S014..S018）。144 项最终运行时候选数和奖励 ID 仍为 NULL。
- 原版槽 04A395F0 -> 01B943A8、04A39618 -> 01B945E4：读取 79 项邮件分类缓存 05327268/05327270 的位图成员判断。
- 04A395C8 -> 01B94004：相同邮件类别域的等值判断，Type2 selector 36..41 -> MailCategory 43..48，不是 ItemFrom。四配置的 24 场景均生成 1 或 3 个候选。
- 049FF948 -> 01A49DB8 -> 01B032D0：读取 ItemKind 的 06012035 = CRC32("CanGift u8")，并包含改造状态与其他特殊类别前置拒绝条件。can_gift_proxy 是新增独立静态阶段；本批已建模的 64,713 成员全部通过 CanGift，仍不代表完整原生谓词。
- 049FF628 -> 01A4775C 仍待闭合；Type3 动态增补、Type7 月份映射、Type9 上下文增补尚未恢复。context_pool 仅为显式上下文输入适配器，不是完整原版上下文解释器；缺失输入拒绝执行。季节、村民、状态、有效价格、改造的真实输入仍未完成。
- verified_summary.json 固定真实 CI 统计及 144 项配置/34 场景计数。完整 SQLite/CSV/JSON 在 CI artifact；Git 内保留可复现生成器及统计证据，不提交 26 MB 二进制。PR #127 保持 Draft。
