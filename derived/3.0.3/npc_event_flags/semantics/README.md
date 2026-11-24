# R94 · NPC EventFlags 语义字典

R93 371 条原版定义不改写。此目录新增逐表逐 ID 的 371 条简体中文释义、原版列名 CRC32 证据和 Native 函数索引。运行脚本生成 371 条整合 JSON/CSV、逐表 JSON、原始语义字段证据和 Ghidra 全 C 文件的精确字符串引用。**字符串引用只说明函数内出现该 Key，不代表已完成作用域绑定或业务逻辑验证。**

## 字段恢复

13 个原始 hash 通过 CRC32("原版字段名 类型") 验证；同名默认值/最大值的不同宽度分别保留。FA93F14B = FlagsFlowAccess u8（历史表字段名线索 + 3.0.3 CRC 精确匹配）。访问枚举 0/1/2 未证明，不猜测读写权限。

5140E4B4 的原名仍未知；已证实为条件重置规则，见 [FUN_02748CE0](../../../ghidra12.2/c/8c/02748ce0.c)。0 不重置；1 首个上下文参数非零；2 首个值非零或额外标志非零；3 直接重置；4 首个值为正。根据 UniqueID 写回 DefaultValue。具体游戏日程含义待验证。另三个 u8 未知字段保留 raw。

NpcSave 的读/设/增加/取最大值/重置函数地址见 native_functions.json。Setter 对输入做 0..MaxValue 限制并写入 u16；NPC Memory 的 u8 重置证据仍需绑定到完整表；NpcTemp/PlayerActivity 的实际存储类型暂未知。NnpcHouseLoan 路径存在合计 >=80 时开启 NnpcHouseBuildOk 的判定。所有实际状态仍 null。

## 复现

```powershell
python Scripts/acnh303_r94_eventflag_semantics.py --root . --out artifacts/acnh303-r94-eventflags --scan-ghidra
```

Actions 使用原版 R93 与完整 Ghidra 12.2 C 导出（约 59,997 函数），生成精确 quoted-key 证据；无匹配不代表 Native 不使用。脚本支持不带 --scan-ghidra 的快速生成，引用字段为 null。
