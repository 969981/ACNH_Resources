# 物品改造参数存储分发（3.0.3）

返回 [原版款式](Native-Variants.md)。固定 Ghidra C 历史提交 f09e15460d02790060a374b2ad6ba569ba9b97ed，Ghidra image base 0x100000；原版 NSO/ELF SHA 校验使用固定历史 R100 decoder。静态证据不等于运行时派送验证。

| 原生函数 | 证据 |
| --- | --- |
| [01AFD600](https://github.com/969981/ACNH_Resources/blob/f09e15460d02790060a374b2ad6ba569ba9b97ed/derived/3.0.3/ghidra12.2/c/d6/01afd600.c) | ItemKind → ItemRemakeType 内部枚举 0..5 → ushort 指针 |
| [01A93F70](https://github.com/969981/ACNH_Resources/blob/f09e15460d02790060a374b2ad6ba569ba9b97ed/derived/3.0.3/ghidra12.2/c/3f/01a93f70.c) | 6B749E8A 枚举缓存生产者；04A32AC8/04A32A60 六项指针数组 |
| [01AE4D10](https://github.com/969981/ACNH_Resources/blob/f09e15460d02790060a374b2ad6ba569ba9b97ed/derived/3.0.3/ghidra12.2/c/4d/01ae4d10.c) | Kind 0x78 排除；按升序扫描 Storage bits1..13，只接受第一有效位9 |
| [01ADAB50](https://github.com/969981/ACNH_Resources/blob/f09e15460d02790060a374b2ad6ba569ba9b97ed/derived/3.0.3/ghidra12.2/c/ab/01adab50.c) | C89FB7AF 读取2字节并清bit0；失败输出0 |
| [02BD74DC](https://github.com/969981/ACNH_Resources/blob/f09e15460d02790060a374b2ad6ba569ba9b97ed/derived/3.0.3/ghidra12.2/c/74/02bd74dc.c) | 包装对象+8起连续8字节复制为普通Item实体 |
| [01A63910](https://github.com/969981/ACNH_Resources/blob/f09e15460d02790060a374b2ad6ba569ba9b97ed/derived/3.0.3/ghidra12.2/c/39/01a63910.c) | 分配原生行索引缓存，不能把原始行号当作原生枚举 |

## 分支规则

0→NULL；1→CanFtr(90BC0855) 非零时 wrapper+0xC；2→01AE4D10；3→kind 0x61 或0xA8 时 +0xC；4→kind 0x78 时+0xE；5→kind 0x9D 时+0xC。包装对象+0x8为实体起点，+0xC/+0xE对应普通Item+4/+6。不同包装类/特殊状态未动态验证。

ItemOutfitInfo.Storage C89FB7AF 原始偏移143，字段跨度5字节，01ADAB50 实际读取头两字节并清低位。其余3字节作为原始尾部保留，不推定含义。旧通用字典的u8类型不适用于此消费者。位9不是充分条件：若更低有效位先出现，返回NULL；bits14/15不在扫描范围。ItemParam.ItemOutfitInfo 与 ItemOutfitInfo.Label CRC候选关联，原始UniqueID、物理行号和运行时枚举分别保留。未找到原生缓存生产链时不宣称精确绑定。

## 验收

脚本读取原始NSO相对重定位、枚举指针、原始BCSV三张表；扫描匹配完整189/162名称域的连续指针数组，4个已知特殊kind作为候选顺序约束。找不到唯一顺序则不写候选编号。65536个输入测试位图数学逻辑。输出 remake_enum.csv、item_kind_route.csv、outfit_storage.csv、item_route.csv、summary.json 至 research/catalog/variants/storage/；不修改机器人协议。所有派送状态为0，待原生机器码缓存生产链及运行时测试。

`uv run --script Scripts/bcsv/audit_variant_storage.py --historical historical`

[脚本](https://github.com/969981/ACNH_Resources/blob/research/Scripts/bcsv/audit_variant_storage.py) · [CI](https://github.com/969981/ACNH_Resources/actions/workflows/acnh303-variant-storage.yml)。
