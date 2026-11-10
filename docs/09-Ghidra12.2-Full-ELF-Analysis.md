# ACNH 3.0.3 main.elf — Ghidra 12.2 原生工程与全函数反编译

> 状态以 [progress.json](../derived/3.0.3/ghidra12.2/progress.json) 和 Actions 结果为准。
> 函数被发现和 C 伪代码成功生成不等于恢复了游戏的原始 C/C++ 源文件。

## 输入与版本

- 分支：3.0.3_Unpack
- 源文件：e10617820db06889e1638499478da0de_NCA/0/main.elf
- 输入大小：79,000,340 bytes
- 输入 SHA-256：145903c25d37a7c90e8818440bcf462b3dca490e11e45cf435605ab00d709664
- 架构：ELF64 / little-endian / AArch64 / ET_DYN
- 逆向工具：Ghidra 12.2 PUBLIC (20261016)
- Ghidra 官方包 SHA-256：2c2cd776db3c1f6a097ba418922378ac3649cadd5e844a6f5f088ae628a7be67
- 必需 Java：JDK 25

## 工作流

[Actions: ACNH 3.0.3 | Ghidra 12.2 full database and decompilation](https://github.com/969981/ACNH_Resources/actions/workflows/acnh303-ghidra-full.yml)

1. 校验原版 main.elf 的 SHA-256 与大小。
2. 下载并校验指定版本的 Ghidra 12.2，构建原生 Ghidra 工程，运行自动分析。
3. 将完整 Ghidra 工程目录 ACNH303.gpr + ACNH303.rep 打成未经压缩的 tar，以 48 MiB 原始二进制连续分片提交。
4. 恢复这一工程，按函数地址升序从 next_index 开始进行批量 C 伪代码反编译。
5. 首批同步导出 Ghidra 符号与引用（交叉引用）的完整 NDJSON 行。
6. 成功反编译的函数逐个写入 .c；失败的函数在记录内保留具体原因，不伪造 C 文件。
7. 将函数、符号与引用索引写入 SQLite，并对数据库文件以原始字节切片。
8. 将 NDJSON 仅在完整 JSON 行边界拆分，保存各分片大小、行数和 SHA-256。
9. 执行 SQLite 重组与 integrity_check；仅通过后写入 progress.json 并 Git commit。
10. 每六小时自动检查下一批，也可手动触发 workflow_dispatch，并提供 batch_size。

## 提交的输出目录

    derived/3.0.3/ghidra12.2/
      progress.json
      project/
        ghidra_project.tar.manifest.json
        ghidra_project.tar.part-00000
        ghidra_project.tar.part-00001
        ...
      sqlite/
        acnh303_ghidra.sqlite.manifest.json
        acnh303_ghidra.sqlite.part-00000
        ...
      ndjson/
        batch-00000000/
          functions/functions.manifest.json
          functions/functions.part-00000.ndjson
          symbols/symbols.manifest.json
          ...
          xrefs/xrefs.manifest.json
          ...
          export-summary.json
      c/
        00/000000000000...c
        ...
        
C 文件名由 Ghidra 入口地址生成；每个函数单独保存。NDJSON 每行均为可解析的完整 JSON 对象。

## 无损恢复 Ghidra 工程

在仓库根目录使用 Python 3.10+：

    python tools/ghidra/acnh_ghidra_pack.py join \
      derived/3.0.3/ghidra12.2/project/ghidra_project.tar.manifest.json \
      /tmp/acnh_ghidra_project.tar
    mkdir -p /tmp/acnh_ghidra_projects
    tar -xf /tmp/acnh_ghidra_project.tar -C /tmp/acnh_ghidra_projects

在 Ghidra 12.2 打开 /tmp/acnh_ghidra_projects/ACNH303.gpr。恢复时验证每片 SHA-256、总字节数、最终文件 SHA-256，任何一处不一致都会报错。

## 无损恢复 SQLite

    python tools/ghidra/acnh_ghidra_pack.py join \
      derived/3.0.3/ghidra12.2/sqlite/acnh303_ghidra.sqlite.manifest.json \
      acnh303_ghidra.sqlite

SQLite 表：

| 表 | 用途 |
|---|---|
| functions | 函数入口、名称、签名、规模、反编译状态、C 路径、错误 |
| symbols | 全部已导出符号地址、名称、符号类型、来源 |
| xrefs | Ghidra 已发现引用的源、目标、类型与操作数编号 |
| metadata | 使用的分析工具版本 |

查询：

    SELECT idx,address,name,decompile_status,c_path FROM functions
    WHERE decompile_status != 'ok' ORDER BY idx;

    SELECT target, COUNT(*) AS refs FROM xrefs
    GROUP BY target ORDER BY refs DESC LIMIT 30;

注意：SQLite 是查询索引，不替代 Ghidra 工程。原生工程数据库采用独立原始分片，可恢复完整工程。

## 进度与可验证性

- progress.json 中 next_index 为已处理 Ghidra 函数数；total_functions 为 Ghidra 在当前分析工程内发现的函数总数。
- complete=true 表示所有已发现函数都有一条结果记录，不表示所有反编译都成功。
- decompiled_ok 与 decompiled_failed 分开统计。
- 反编译失败不跳过；失败原因记录在 functions.error，可单独重试。
- GitHub 官方文件上限 100 MB：原生 SQLite / 工程 tar 分片限定 48 MiB，NDJSON 单片限定 12 MiB，C 单文件按函数生成。
- 由于自动分析存在启发式误差，函数覆盖率不代表游戏所有真实函数或业务语义 100% 已还原；后续重命名、类型恢复、交叉引用验证应在原工程内进行。
- 工作流失败时保留日志，不会将未校验的 partial SQLite 标为 complete。

## 本地重新生成（需要 Ghidra 12.2 + JDK 25）

    <GHIDRA_HOME>/support/analyzeHeadless /tmp/projects ACNH303 \
      -import "$PWD/e10617820db06889e1638499478da0de_NCA/0/main.elf" \
      -analysisTimeoutPerFile 10800 -max-cpu 2

    <GHIDRA_HOME>/support/analyzeHeadless /tmp/projects ACNH303 \
      -process main.elf -noanalysis -readOnly \
      -scriptPath "$PWD/tools/ghidra" \
      -postScript ExportACNH303.java /tmp/acnh-export 0 2500 25

后续手动续批时可读取：

    python tools/ghidra/acnh_ghidra_pack.py next derived/3.0.3/ghidra12.2
