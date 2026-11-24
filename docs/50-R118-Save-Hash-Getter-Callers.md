---
title: "R118 · SaveHashError 校验分区与后端 Getter 验收"
tags: [acnh, native, saveproc, r118]
status: static-partial
---

# R118
R117三项CI通过，下载artifact 14893000801并SHA256核验 c97248b700ea7684e6ef6543d1b5a458f7cdbcc5f120b1aeccffd81cbf3fca15。Build ID ff1d1c05670db6021c85b624a710b96300000000000000000000000000000000。四张vtable共32个getter均为 LDR X0,[X0,#field]; RET，字段映射+10/+18→+10，+20/+28→+18，+30/+38→+20，+40/+48→+38。

## PostBox
M=P(main+5474040h),T=P(M+10h),O=P(T+A0h+8*s),data=P(O+10h),header=P(M+70h)+300h*s。s须按M+D0/D4 stride8匹配玩家ID与状态；非空、Build ID、vptr04A8A288及快照一致性为前提。云岛三种getter同返回+10h，文件索引/磁盘长度未独立确认。

## 原版校验
006F6900完整C含MurmurHash3 x86_32块混合、tail、fmix32，七个validator实参seed0且错误标签SaveHashError。以下均为明文文件buffer相对偏移，u32 little endian。
| file | validator | checksum offset | data start | length | seed |
|---|---|---|---|---|---|
| main | 02840270 | 0x110 | 0x114 | 0x1E339C | 0 |
| main | 02840270 | 0x1E34B0 | 0x1E34B4 | LAB_003D089C (candidate 0x3D089C; raw immediate pending) | 0 |
| main | 02840270 | 0x958F50 | 0x958F54 | 0x57F3C | 0 |
| personal | 028403E0 | 0x110 | 0x114 | 0x37ACC | 0 |
| personal | 028403E0 | 0x37BE0 | 0x37BE4 | 0x3CE5C | 0 |
| postbox | 02840524 | 0x100 | 0x104 | 0x4732C | 0 |
| photo_studio_island | 02840630 | 0x100 | 0x104 | 0x2F54C | 0 |
| profile | 0284073C | 0x100 | 0x104 | 0x6945C | 0 |
| mvoption | 02840848 | 0x100 | 0x104 | 0x73F7C | 0 |
| wherearen | 02840954 | 0x100 | 0x104 | 0xB8A3DC | 0 |
main第二块长度以反编译LAB显示，必须核实机器码寄存器赋值才可入正式长度。9项明确字面长度、1项符号候选。校验器在param_2 null时直接返回1，调用者需独立检查buffer。
028C29B0在调用028CB2A0前内联计算Personal两段、PostBox/PhotoStudioIsland单段；Profile外层生成函数028420C0，Wherearen外层028F2210；Profile另在条件分支计算或清零3个内部区块：
- hash 0x110, start 0x114, length 0x2301C, seed0
- hash 0x23130, start 0x23134, length 0x2301C, seed0
- hash 0x46150, start 0x46154, length 0x2301C, seed0
内部块不等同于0284073C的外层验证区域，不能一律写入。保存校验与AES加密为独立阶段。未使用真实存档样本。

## 上层调用者
R100 SQLite对7个writer target查询没有RELR登记或已索引xref。Ghidra文本搜索只返回其自身定义，不足以证明无调用者。新增对原版text的B/BL全量定向扫描，保留每处原始机器码窗口及RELR记录；新CI待运行。B/BL引用不等于已验证函数owner。28C29B0确认调用028CB2A0的另一路保存流程，不把它误认作七个writer的共同上层调用者。
## 验收
新增11个源blob、32 getter复验、7个validator窗口、全量定向B/BL扫描及合成hash测试向量，带Build ID的索引。新CI待验收。云岛三类校验区和磁盘读写索引、主存档符号长度、七个上层函数owner、29处Stage、Rollback原版枚举、LifeSupport、NewAchievement、5140E4B4及GDB仍未闭合。
