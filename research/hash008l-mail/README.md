# HASH-008L-MAIL — 原生邮件资源与奖励抽取

研究范围：ACNH 3.0.3；本阶段仅静态反编译和原始数据对账，未验证游戏运行时。

## 已实际对账的 BCSV

- MessageCardSelectPresent：125 行；125 个不同 TextKey。
- MessageCardSelectPresentSp：19 行；19 个不同 TextKey。与普通表无重叠。
- MessageCardSelectDesign / Sp：202 / 80 行。各自与对应附件表的 TextKey 直接匹配均为 0；不应强行建立同键外键。
- 两条非零分组选择：普通表 row 36，group=2；特殊表 row 4，group=1。组表行号分别对应 UniqueID 4 / 3，但原生组访问器需独立验收。
- 普通表 66 行处理类型非零，特殊表 5 行处理类型非零；特殊表 row 14–18 同时 handling=3、remake=1。
- HHA2 / HHA4 / HHA5_1 / HHA5_2 / HHA5_3 的字典统计分别为 3 / 3 / 1 / 1 / 1，实际 ItemParam 道具 ID 等待本轮原始数据验收。
- F4DBDF21 = CRC32("0") 为名称候选，不能等同于原生枚举 None。

## 原生反编译证据

Ghidra VA（ELF VA = Ghidra VA - 0x100000）；源码见 3.0.3_Unpack 的 derived/3.0.3/ghidra12.2/c/。

| 函数 | 静态观察 |
|---|---|
| 01BDEFF8 | 加载 Message/Mail_%s.sarc.zs 和 String_%s.sarc.zs |
| 027B0354 | 调用 01B8C800，结果复制到邮件 +0xC0/+0xC4 |
| 027B1524 | 调用 01B8E020，结果复制到邮件 +0xC0/+0xC4 |
| 01B8CB50 | 格式 %s-%s，Murmur3 seed 0，查找 +0xA40 配置，失败后存在备用路径；读取 128A3D9B |
| 01B8E370 | 格式 %s-%s，Murmur3 seed 0，查找 +0xE48/+0xE50 配置；读取 128A3D9B |
| 01B8C800 / 01B8E020 | 候选位图 0x754 字节，popcount，随机序号 (random * count >> 32) + 1；空集合使用默认结果 |
| 00889F80 | 候选序号选择 |
| 01A4C66C / 01A4D6E0 | 道具后处理，后者在标记为 1 时调用；改造细节待验证 |

源例： [普通候选生成](https://github.com/969981/ACNH_Resources/blob/3.0.3_Unpack/derived/3.0.3/ghidra12.2/c/cb/01b8cb50.c) · [另一候选生成](https://github.com/969981/ACNH_Resources/blob/3.0.3_Unpack/derived/3.0.3/ghidra12.2/c/e3/01b8e370.c)。

## 批量验证

```bash
python -m pip install capstone==5.0.3 lz4==4.3.3 zstandard==0.23.0
python Scripts/acnh303_hash008l_mail.py --native --out artifacts/hash008l-mail
```

脚本复用已存在的 MSBT 结构解析器（固定 blob d360b8dc0a2c593d7b24524e5c5ec23b1b07aa67），遍历 14 语言 Mail / String 归档，以 MSBT 文件 stem、相对路径、label 组合计算 MurmurHash3；保留命中候选、原始归档及成员 SHA256，歧义与缺失不自动补齐。MSBT 解码文本不是无损控制码解释；原始成员哈希供后续追溯。

输出：mail_reward_config.json/csv、mail_rewards.sqlite3、key_matches.json、archive_inventory.json、parse_failures.json、hha_reward_category_items.json、group_rows.json、native_direct_edges.json、summary.json。原版 NSO/ELF 直接跳转目标按指令核验，但近邻地址不等于真实函数边界。数据库未证实的发送条件与固定奖励 ID 保持 NULL。CI 待确认，不宣称 144 项正文已全部闭合。

## 下一步

1. 检查 14 语言唯一匹配和冲突，区分文件级键与正文子键、收件人、发件人。
2. 闭合 01B0D390 分组行号与 UniqueID 转换，追踪 01B8CB50 / 01B8E370 特殊处理跳转表。
3. 对候选位图索引与实际 ItemID、默认附件和随机状态做差分验收。
4. 跟踪 01A4C66C / 01A4D6E0 的 ReBody/ReFabric 实际写入。
