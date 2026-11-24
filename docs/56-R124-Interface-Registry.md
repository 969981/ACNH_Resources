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
