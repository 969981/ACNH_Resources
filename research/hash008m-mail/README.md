# HASH-008M — 邮件附件特殊处理及位图

## 原生静态证据（Ghidra VA）

- 01B8CB50 / 01B8E370：group u32 范围 0..2，category u32 范围 0..78，handling u16 范围 0..18，remake u8 范围 0..1。非法值回退 0。
- 两个构建器共用 04A39630 的 18 项函数指针表；handling=0 不进入特殊回调，1..18 访问 (handling-1)*8。第四参数前者传 NPC 上下文候选、后者 0，参数业务含义未确定。
- 01B0D390：输入按行索引访问 BCSV 或缓存指针表，反算原始行号，读取 DAT_05327280 + row*10；失败清零。01ABA7E0 同样按原始行号填充 10 字节缓存。缓存指针别名待原版重定位对账。
- 两个构建器将直接 category 对应位并入分类组 79 位集合，清除 index=0 (None)，通过 008A1BA0 和各自谓词构建候选位图，随后执行特殊回调与有效性过滤。
- 008A1BA0 的循环范围是 0..14999。物理位图 0x754 字节=15008 位，最后 8 位不属于逻辑域。0277A1F4 / 0277A328 使用 FUN_0277D6C4 的规范化 ItemID 直接测试/清除位，约束 (id>>3 & 0x1fff)<0x753。
- 00889F80 扫描 469 个 32 位字，累积 popcount，选择第 rank 个置位，再通过 vtable+0x10 构造 8 字节 Item；检查 ItemParam 稀疏索引有效性，失败返回默认值。身份映射强候选，虚函数仍需实际机器码验证。
- 0277D6C4 并非任意 Item 实体的简单 u16 读取：byte3 的低两位与类别会触发特殊 ID 转换。

## 分类组对账

| 行索引 | UniqueID | 标签 | 分类索引 |
|---:|---:|---|---|
| 0 | 0 | None | 0 |
| 1 | 3 | HHAHobby | 38,39,40 |
| 2 | 4 | NNpcSPANDailyFtr | 35,37 |

普通邮件 row36 group=2；特殊邮件 row4 group=1。静态类别候选分别是 6 / 3 件，不能当作完整运行时奖励池。原始 79 项字典来源 research/hash008j/mail_category_dictionary.json。

## 源码锚点（3.0.3_Unpack）

| Ghidra VA | Git blob |
|---|---|
| 01B8CB50 | e29cb88958d7cee2372b93584de2eb067d55d16b |
| 01B8E370 | 15f927898ad08899e9eef38f41c5f4ff9ee80027 |
| 01B0D390 | a2f112f4019c1f166c57f898a6ab90511f0c1d29 |
| 00889F80 | db117713933c861672a3e64db4ad6781e7a3ed88 |
| 008A1BA0 | 9cef3d5389566f1d86286ab57d3874c23eca471d |
| 0277A1F4 | 58988150959cd737a1e36d9bfb2d1280c1929521 |
| 0277A328 | b01e6a63c92d9aee231ad01cea64c90ebdfea32e |
| 0277D6C4 | 5b75dfb5c3b94f70bf9d26e18fb4935646fb1a47 |
| 01ABA7E0 | 7705adf231999ab3e7f1362c3ca0bd261b67d4e8 |

## 验收
```bash
python -m pip install capstone==5.0.3 lz4==4.3.3
python Scripts/acnh303_hash008m_mail_dispatch.py --out artifacts/hash008m-mail
```
输出 handling_dispatch.json、bitmap_vtable.json、group_and_filter_pointers.json、group_rows.json、attachment_configs.json、hha_items.json、bitmap_index_itemid_candidate.csv、offline_bitmap_tests.json、summary.json。脚本要求 18 槽可执行重定位目标，且原版 NSO/ELF 指令窗口一致。handler 入口窗口不是完整语义证明；默认回退与真实发送条件仍未知。位图离线模型边界测试不是原生运行时测试。尚未读取 CI 运行结果，不声明执行通过。

下一轮：按真实重定位目标逐一恢复 18 个回调的完整控制流、参数和集合增删规则；核验 049FF3A8+0x10 的原版 Item 构造器，并对 144 行配置建立独立候选/最终奖励池证据。
