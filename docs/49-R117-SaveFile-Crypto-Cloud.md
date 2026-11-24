---
title: "R117 · SaveFile 写入、CloudIsland 后端与加密校验"
tags: [acnh, native, saveproc, r117]
game_version: "3.0.3"
status: static-partial
---

# R117
R116 三项CI通过，实际下载 artifact 14891728627，SHA256 4d5fd962974572e705dcf0cd91355690dcd919f9dafb4fb23173404499aa069e。Build ID ff1d1c05670db6021c85b624a710b96300000000000000000000000000000000。Ghidra VA = Main RVA + 100000h。静态证据不等于实机确认。

## CloudIsland工作器与表
PreSave 0283CBA8 44条，PostSave 0283CC58 25条，Load 0283CCBC 121条。三个有界CFG末尾的外部边源自调用00D72DC0后的保守fall-through，该C包含libcpp_verbose_abort，异常路径不能视为正常进入下一个函数。保留原始边。
PreSave用04A91810，PostSave用04A91830，Load用04A91850和04A91870，分别是不同选择器表；Load还用04A905B8。31连续RELR共479条可达指令，不宣称是一个31项数组。
PostSave读+298 selector，分发后清+298并写+2C0=1。Load检查+68请求、+18==2、请求首指针及保存根，验证失败写+2E8=2；依据请求+10字节选择026F5A40/026F55B4，同步及分发后026F66E0复制、+2E8=1、对应释放026F5B28/026F569C。原始状态枚举名称未知。

## 三种CloudIsland后端
02703290分配0x40对象，写vptr、分配两个数据缓冲区，发布T槽，置M功能字节bit1。026EF2CC按功能字节bit1/2同时置位，取后端+18虚槽和固定尺寸。PreSave分发分配同尺寸临时缓冲，复制后写+290指针、+298=1/2/3、+288=1。
| index候选 | size | slot | vptr | flag | constructor initialization | PreSave |
|---|---|---|---|---|---|---|
| 7 | 0xa2458 | +190h | 04A8B898 | +50eh | 026DFF90 | 0283E838 |
| 8 | 0xc6788 | +198h | 04A8BD30 | +50fh | 026D9E40 | 0283E8F8 |
| 9 | 0x14c618 | +1a0h | 04A8BFB0 | +510h | 026D8DC0 | 0283E9BC |
三种尺寸与后端槽及vptr已得到构造/读取/原版指令交叉证据。索引7/8/9文件关联仍为候选，磁盘长度、专属写入函数保持未知。

## 七类真实写入函数
| file | size | handler |
|---|---|---|
| main | 0x9b0e90 | 02837970 |
| personal | 0x74a40 | 02838430 |
| postbox | 0x47430 | 02838e10 |
| photo_studio_island | 0x2f650 | 02839940 |
| profile | 0x69560 | 0283a1b0 |
| mvoption | 0x74080 | 0283b370 |
| wherearen | 0xb8a4e0 | 0283aa30 |
逐项具有路径索引、026EB860回读比较及026EB5C0写入调用，确认固定数据长度。完整调度者到这七个函数的路径尚未穷尽。Cloud文件写入仍待查。

## 后端 Getter
PostBox constructor 026F9460写04A8A288并发布T+A0+8*s；RELR +18 -> 02724788。三种云岛+18分别027297A4/0272AD94/0272B5D4。共40个RELR槽，新增CI对账32个getter窗口，原版函数体确认前不把它们改写成固定字段。

## 加密与文件系统
026EB860先通过026CF750读取0x300头及数据，调用028B7D30/028B7F90处理头+100h，调用SDK DecryptAes128CtrPartial。026EB5C0生成并写入头部，再EncryptAes128CtrPartial、026CE9D0写入、Decrypt恢复原缓冲。026EB980部分写入复用已有头部并使用偏移参数。026CF750为带挂载/引用计数的读取包装，026CE9D0为带挂载/dirty标记的写入包装，最终提交由此前026D16C0/026D17D8完成。
028CB2A0公共保存包装支持完整及部分写入；028C29B0含0xCC9E2D51、0x1B873593、0x85EBCA6B、0xC2B2AE35等混合常量（部分以负数表示），与MurmurHash3 x86_32混合过程相符，具体分区、种子、覆盖、验证分支仍未完整对账。不能仅凭常量宣称完整校验算法已恢复。

## 验收
18个C blob；新CI验证源blob、原始CFG指令、31个选择器和40个vtable槽，导出getter窗口及更新索引。当前没有实机快照。未闭合：三种云岛文件名索引实际调用、磁盘长度及写入；完整checksum布局；29处StageChange、Rollback原版枚举、LifeSupport前缀、NewAchievement、5140E4B4。
