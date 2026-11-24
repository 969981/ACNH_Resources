# R100 — 原版 NSO 全量重定位与初始化索引

继承 R99 原始 NSO/ELF SHA 校验及三段校验，恢复 RELA 6586、JMPREL 982、RELR 373225，共 380793 个唯一槽。SQLite 每行保留原始 RVA、Ghidra VA、类型、符号、显式或隐式 addend、原始字、解析目标、所在段与确切源码文件（如果有）。未解析外部符号保留 null。可查询 code_pointers、bss_pointers、init_array、pointer_runs 和 xrefs；连续代码指针仅为候选表，不等于 VTable。额外覆盖工厂 +0x04c8dfd8/dfe0/dfe8/dff0 四个变量。使用原版 RELR 反向索引追踪指针槽，ARM64 有界直线数据流对寄存器覆盖和分支做保守处理。初始化函数 8748 项逐项与确切导出文件关联；不是每项均完成语义反编译。

## 使用
```powershell
python -m pip install lz4==4.4.4 capstone==5.0.6
python Scripts/acnh303_r100_relocation_index.py --root . --out artifacts/acnh303-r100
```
```sql
SELECT printf('0x%X',slot_ghidra), printf('0x%X',target_ghidra),table_name FROM relocations WHERE target_ghidra=0x04C8DED8;
SELECT * FROM xrefs WHERE target_name='action_count';
SELECT * FROM pointer_runs ORDER BY slot_count DESC LIMIT 20;
SELECT * FROM init_array WHERE exact_export IS NOT NULL;
```

Ghidra Script Manager 加载 Scripts/ghidra/R100ImportRelr.java，选择 Artifact 的 ghidra_relr_references.csv。先确认打开的程序确实为 3.0.3 main.elf；脚本校验架构、image base、每个槽实际字节或已重定位值，跳过不匹配项，不改二进制或创建函数，仅添加分析引用。未在真实 Ghidra 环境验收。

剩余 28 个状态由 R96 重新生成，按精确字符串的原始 RELR 反向引用与有界代码引用搜索；哈希目标只保存邻近指针候选。没有真实 Receptor 快照/存档，不能声明三项专属 callback、照片概率或真实存档验证完成。
