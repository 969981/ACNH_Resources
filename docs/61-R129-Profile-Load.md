---
title: ACNH 3.0.3 R129 - Profile mode1 and load
tags: [ACNH, ARM64, save, R129]
---

# R129 Profile Mode 1 与读取事务

关联 [[60-R128-Savefile-Index]]。R128 最终三个 CI 通过，固定 Artifact 14897705515 SHA256 a039bf0d6c14b50e460e237f0aafe1cf6036997af6f53ea55320d84421c9d62d。

## 源码恢复
028C871C 创建 0x30 资源描述对象，基础索引0..4分别写 +60..+80，索引5写+90（版本字段分别>70005、>70000），索引6写+88（>80084、>80008）。每项调用027B6C14并检查+2C=1；不是云岛磁盘调用证明。
028C8A30 创建0x98事务对象，输入 index 超过9时类型查找回退0，通过 027B78B0、027B7AD4 获取描述，保存原始 index，调用028B5FF0。后者先读取 Header，再读取 Data，然后调用028B63C0（源码有 nn::crypto::DecryptAes128Ctr）。读取函数与具体 Cloud 消费者仍有区别。没有执行真实文件读取或解密。
Profile mode1 从 context+0x188+slot*4+1..3 检查三字节，零则内联 MurmurHash3，非零则清零0x23020；外层同样内联。待原版局部指令仿真。

## 验收
固定7份源码 blob，提取12个通用文件调用窗口及读取链五个有界窗口；Profile 原版窗口用于定位实际寄存器和分支。窗口不代表完整 CFG。未写入任何真实文件。

`python Scripts/acnh303_r129_profile_load.py --r128 r128-final.zip --out artifacts/r129`
