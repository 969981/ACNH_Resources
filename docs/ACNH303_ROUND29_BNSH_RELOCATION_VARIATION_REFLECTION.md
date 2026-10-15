# ACNH 3.0.3 — R29 原生 BNSH 重定位、Variation、Program 与资源字典研究

日期：2026-10-15。研究分支：feat/acnh303-round29-bnsh-relocation-reflection。

## 真实输入与交叉验证

R27 的两个 Layout 数据 Release 压缩分片含 4 个原始 BNSH 成员；R28 的四个分片含 24 个，共 28 个原始 BNSH / 20 种不同 SHA256。GitHub Actions 从各自永久 Release 下载原始成员、验证 SHA256SUMS，并将全部成员哈希与 R28 已审计的原始成员证据交叉核对。原始 103,400 项 NCA 不修改。

技术参考：
- https://epd.zeldamods.org/wiki/Common_nn::util
- https://nintendo-formats.com/libs/switch/binary.html
- https://github.com/maierfelix/bnsh-decoder/blob/master/BNSH.ksy

这些参考只决定候选结构。报告中的 verified 数量取自实际资源，而非格式文档预设。

## Native BNSH Header 与块链

全部 28 个真实文件 BNSH +0x16 = 0x60，指向具有完整 BinaryBlockHeader 的 grsc，nextRelativeOffset 链正确指向下一个 _STR 字符串池。28 个文件合计 28 个 grsc、28 个 _STR。BNSH +0x18 全部定位到真实 _RLT magic + 自引用相等的重定位表位置；+0x1C 全部是实际文件长度。该证据与 R26 的 IsRelocated → GetRelocationTable → Relocate 及 GetFirstBlock native 调用一致，不构成游戏实时渲染证明。

## 从 grsc 到 Shader Reflection 的静态链

- grsc 的 Variation 数量与有界 Variation 数组地址被解析；总计 165 条 Variation；
- 165 个可通过 Variation 指针定位的 Program，Program +0x70 Parent Pointer 均与对应 Variation 原始偏移一致；
- Program +0x78 的 165 个 Reflection Pointer 均有效；映射到 Vertex/Fragment stage；
- Reflection stage 的真实 _DIC 字典指针、entry count 和字符串节点得到检查；共 810 个资源字典对象。

结构化解出的名称，而非全文字符搜索：

| 字典类型 | 原始名称 |
| --- | --- |
| Vertex input | aVertexIndex、aPosition、aTexCoord |
| Pixel output | o_Color |
| Sampler | uTexture0、uTexture1、uTexture2 |
| Constant buffer | uConstantBufferForVertexShader、uConstantBufferForPixelShader、uProceduralShape |

其中 uTexture* 是 Sampler 字典项，尚不能直接解释为绑定到某张材质 PNG 的 GPU descriptor slot。也未完成 Program 的 GPU 机器指令反编译或 Shader Variant 游戏运行时选择。

## RelocationTable 真正恢复

28 个原始文件合计 168 个 Section 和 2,335 条 Entry。依据真实 Section region、entry index/count、连续 pointer count、non-pointer stride 和 8 字节指针宽度，找到 3,289 个文件边界内的待重定位指针字段位置，其中 2,874 个记录的原始偏移值非零且指向文件内部。其它并不意味着损坏，应继续分析文件外地址、非 file-based section 和空字段。脚本无内存写入行为。

报告和复现：
- scripts/acnh303_round29_bnsh_links.py
- scripts/acnh303_round29_summary.py
- scripts/test_acnh303_round29.py
- derived/3.0.3/r29_native_bnsh/full_graph.json （完整机器输出）
- derived/3.0.3/r29_native_bnsh/summary.json （可查 28 源与已证实绑定名字）
- .github/workflows/acnh303-round29-native.yml

## 不重复源的真正 R29 选源

R28 后尚未做对应 L3 测试的 Model 58,210，Layout 300，BARS 1,240，独立 BWAV 0。scripts/acnh303_round29_select.py 明确排除 R19 已测核心媒体 3,558、R27 的 40 个源增量与 R28 的 224 个源增量，另在 BARS 侧纳入 R8/R9/R10/R14/R16/R17/R18/R19 的完整历史 396 个 BARS 原始容器。检查跨轮 SHA/path 重叠、类别实际数量和完整 Git tree 目录，再执行 SHA256(path) 稳定排序。

R29 计划执行 Model 32、Layout 24、BARS 24 的 80 新原始源：实际新源统计应以 scripts/acnh303_round29_reconcile.py 与本轮实际 GitHub Actions 的结果为准。所有无法转换的 source 保持失败或 no_target_leaf 状态，不冒充媒体成功。

## 尚未解决

P0：由已复原 Program/Reflection 指针继续追 shader binary pool 到实际 VS/FS code 范围；恢复真正的 GPU binding slot 和 descriptor 索引。P1：与 R26 的 0x285D10 / 0x286160 Native 资源消费者运行时实例对照，并恢复游戏 Material → Variation 选择规则。P2：下一轮 R30 选源器还必须排除 R29 新增原始源清单，防止重测。
