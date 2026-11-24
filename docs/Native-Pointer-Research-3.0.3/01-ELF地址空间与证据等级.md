# ELF 地址空间与证据等级

## 1. 原始身份
- canonical ELF: `e10617820db06889e1638499478da0de_NCA/0/main.elf`
- SHA-256: `145903c25d37a7c90e8818440bcf462b3dca490e11e45cf435605ab00d709664`
- 镜像 SHA-256: `83970061788f10049e2e60d687571b8dc87e5014521889ac4611a7f6b9c6e180`（不一致，不作为分析输入）
- 原 NSO SHA-256: `68c7fbeda353f8e4a283eac6a9b99e713e72a327048214bf6a4e7214616b87c1`（来自既有审计文档）。
- ELF64 LE AArch64 ET_DYN；Ghidra 工程 slide = `0x100000`；Build ID 本轮未从 NSO 头重新读取，保留 null。

## 2. PT_LOAD
|权限|RVA 起点|文件偏移|文件覆盖终点（不含）|内存终点（不含）|
|---|---|---|---|---|
|RX|`0x0`|`0x9F8`|`0x3F06DF0`|`0x3F06DF0`|
|R|`0x3F07000`|`0x3F077E8`|`0x47241FC`|`0x47241FC`|
|RW|`0x4725000`|`0x47249E4`|`0x4B57930`|`0x5A06000`|

```text
RuntimeVA = main_base + RVA
GhidraVA  = 0x100000 + RVA
FileOffset = PT_LOAD.p_offset + RVA - PT_LOAD.p_vaddr
```
最后一个公式仅在文件覆盖范围内成立。BSS 没有实际 ELF 初始指针字节；加载后通常为零，随后由代码写入或重定位处理。Heap 偏移不能代入该公式。

## 3. 证据标签
|标签|含义|
|---|---|
|source_only|外部工具源码中的历史地址或链|
|elf_mapped|确认在目标 ELF 的段内|
|word_match / word_mismatch|原始 u32 与源码预期一致/不一致|
|xref_candidate|有限静态数据流能形成目标地址|
|decompiler_corroborated|独立 Ghidra 导出确认局部对象或字段语义|
|native_semantic_verified|完整函数和消费者语义得到验证；需逐项记录范围|
|runtime_verified|实际 Build ID、运行时指针及目标字段一致；本轮全部 false|

> [!warning] 不可用同一个 confidence 概括所有证据。一个根槽可以已确认注册，但工具声称的子链仍未经验证。函数索引的 nearest entry 不等于包含该地址：byte_count 是函数体字节数量，可能不连续，需 Ghidra FunctionManager.getFunctionContaining 或真实 body range 验收。

## 4. 源快照
- [SysBot main](https://github.com/969981/SysBot.ACNHOrders/tree/11b61e8868752ba8fbd990837f90dd72104d1045)
- [SysBot lowintent](https://github.com/969981/SysBot.ACNHOrders/tree/84edb50709e0f5b791e6596a75bd25796793d368)
- [Poker main](https://github.com/969981/ACNHPokerCore/tree/85e50a1ad182c926b2ebd51c00abc612e0a859d5)
- [docs/26-External-Tool-Pointer-ELF-Audit.md](https://github.com/969981/ACNH_Resources/blob/3.0.3_Unpack/docs/26-External-Tool-Pointer-ELF-Audit.md)

---

[[README|研究知识库导航]] · [GitHub 导航](README.md) · [研究合订版](../28-ACNH-3.0.3-Native-Pointer-Research.md)
