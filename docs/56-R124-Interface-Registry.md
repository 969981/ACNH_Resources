---
title: ACNH 3.0.3 R124 - Interface registry and queue
tags: [ACNH, ARM64, save, R124]
---

# R124 云岛接口登记、请求队列与 Personal 描述符

关联 [[55-R123-Cloud-Interface-Iterator]]。R123 最终三项 CI 通过。固定 Artifact 14895241375 SHA256 e80ffecaa5836842a7f1996b421202c390b979541c1a6641033463b1eef3f39c。

## Registry 与提交路径
01C82CB0 遍历 Registry+8..+B8 23 槽，将等于目标对象的全部指针清零。Kind 0..22 对应 Registry+8+8*kind，越界回退 slot 0。Cloud kind=0x14 -> +0xA8；01D805DC 调用虚表 +0x50 pointer、+0x58 length thunk，构建 pointer/size/peer mask，提交 01C84918。后者检查注册项和 busy；过滤目标 peer mask，成功写 busy +0xC0=1、kind +0xC4、pointer +0xC8、u32 size +0xD0、mask +0xD4、+0x1A8=0。尚未确认实际网络发送/接收，绝非磁盘写入证明。原版测试仅执行取消登记及 early rejection，不执行接受分支或 SDK。

## 描述符修正
以 0536D3B8 为起始地址候选，stride 0x68。+0x04 command u16，+0x08 data pointer，+0x10 size，+0x18 destination pointer candidate，+0x20 destination size u32，+0x38 ready byte，+0x40 callback vptr 04A59C38，+0x48 context，+0x50 callback 01D505F8，+0x58 zero。01D41828 C 初始化重复写八组字段；不将 base 等同于完整对象边界。扫描 ADRP + ADD/LDR 候选，待寄存器数据流、Ready 读取者与回调完整入口核验。

## 02818BC0
对 Personal descriptor 两个区块分别构造 {base,offset,size} 传 VTable+0x20，size 0x37AD0、0x3CE60，随后修改/重置数据字段；第三段对 Main descriptor 使用 0x1E3388，调用 027EA950(Main region, Personal first region+0xC138)。027EA950 对 10 个 stride 0x13230 记录执行 02691310；后者遍历 0xA0 个 stride 0x158 记录，按身份字段匹配清理并归并候选。不是简单的完整 Personal memcpy。业务原名及数据生命周期未闭合。

## 验收
27 个取消登记用例与 50 个提交拒绝用例；原始注册、提交、队列、取消登记和回调窗口；连续 RELR slots 与全 text 直接调用扫描。CI 前不宣称通过。

`python Scripts/acnh303_r124_interface_registry.py --r123 r123.zip --out artifacts/r124`

## 最终验收与纠正
Run 45339353316 首轮 77 项通过；Run 45339487686 第二轮 107 项通过。Artifact 14894893781 ZIP SHA256 90500c630a80a4cdd75f18b77358a3b9196298049bf7289ad14d3344817b5afa，已下载逐项读取及计算一致。R124 首轮 41 个槽的 04A59800 为扫描上限，不是首个非 RELR。第二轮扩展扫描得到 04A596B8..04A59970 连续 88 槽，04A59978 为首个非 RELR；物理连续重定位不代表单一 C++ VTable 的逻辑边界。

## 原版注册/提交指令
01D41ABC ADD X8,X19,#0x478；01D41AC0 LDR X9,[X25]；01D41AC4 ADD X9,X9,#8；01D41AD0 ADD X11,X9,X10,LSL#3；01D41AD4 CMP W10,#0x17；01D41AD8 CSEL X10,X11,X9,LO；01D41ADC LDR X10,[X10]；01D41AE0 CBNZ X10,01D41AF4；01D41AF0 STR X8,[X9,X10,LSL#3]；01D41B00 STRB W22,[X19,#0x489]；01D41B04 STR X8,[X19,#0x478]。类型越界回退 slot0，已有对象不覆盖。
01D8075C BLR X8 (vtable+0x50)；01D80770 BLR X8 (+0x58)；01D80780 LDR W2,[X19,#8]；01D80790 BL 01C84918；01D8079C STRH W8,[X19,#0x12]。01C84918 直接 BL 4 处：01D5E1A8/01D6350C/01D80790/01DC79AC。01D805DC 另有 01D5E6A0 BL 和 01D63560 B。
01C831F4 C blob e558aa2b79618faaafeca92d800ce4253199db2e 包含 AppStreamingBroadcast 字符串（传 006BD550），初始化相同 23 槽、busy+0xC0、+0x1A8=100，并注册两个回调 01C833F0/01C83C40。该字符串是模块命名强证据，具体类原名和网络实际发送仍需核验。01D807CC (d309c80843d67ed4a27c4770ef9bae4aa85b73de) 以 kind 一致为前置，按对象+0x10 flag 判断请求长度 <= capacity 或 == capacity，写+0xC。01D80838 (2aa20b574328dea29a6231fc0008687bbc839a70) kind匹配时调用 +0x60 取 pointer；01D8086C (0d44f843e5473c671f89cd748ebedf778bdb421b) success bit 和 kind匹配时调用+0x80，写+0x15=1。均为源码级补充，未执行完整接收事务。

## 01D505F8 完成回调
原版 01D505F8 SUB W8,W2,#0x37,LSL#12；01D505FC CMP W8,#0xAD0；不等直接返回。长度正确则读取 context[0]；slot<8 时从 04BB4F78 经两级指针取 store，在 +0x431FC0 OR 1<<slot，store+0..+0x1F 写四个全一 u64；最后无论 slot<8 与否均 context[1]=1。30 项仿真（slot 0..8/255 × 三种相邻长度）全部通过；10 项 completion，8 项 mask update。context completion 不等同于 descriptor+0x38 Ready，后者读取者尚未定位。17 PC-relative 候选均为 registry pointer 槽候选，未证明 Ready 的直接读者；其中存在寄存器重定义假阳性。下一轮应改为以 descriptor base/传入对象为中心的间接 def-use。

## 证据边界
原版模拟只使用合成内存，不实际联网、读取/写入玩家存档或调用 SDK。107项测试不包含队列成功路径。独立与内嵌 Personal 完整同步、CloudIsland 磁盘映射及真实样本仍为未验证。
