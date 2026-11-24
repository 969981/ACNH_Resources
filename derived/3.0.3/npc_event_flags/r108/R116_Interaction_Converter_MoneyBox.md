---
title: R116 原版家具交互转换器与 MoneyBox 实例字段
version: "3.0.3"
status: static_partial
runtime_verified: false
tags: [ACNH, Native, gift, MoneyBox, R116]
---

# R116 家具交互枚举与储钱家具

## 1. R115 验收
[Actions 45337563192](https://github.com/969981/ACNH_Resources/actions/runs/45337563192) success。82 项表，11178/11178 行完整覆盖，79 个实际值；未使用序号 15/50/53。MoneyBox=73 恰有三个原版物品 1877 FtrPigbank、14479 FtrGoldPigbank、14714 FtrDonationBox，均 Ftr、CanFtr=1、普通及生日类别允许。

## 2. 转换器与 cache 写入链

Ghidra VA = Main RVA+0x100000。R115 writer log：01A6BEB4 mov w25,#0x6e5f；01A6BEB8 movk w25,#0xf124,lsl#16；01A6BF54 cmp w10,w25；01A6BFC0 mov w0,w21；01A6BFC4 mov x1,xzr；01A6BFC8 BL 01A86140；01A6BFCC cmp w0,#0x52；最终 01A6C4A8 strh w8,[x10,w9,sxtw#1]。字段 F1246E5F，ItemParam offset 48, width4。C 导出 61/01a86140.c 确认 GOT 04BB9950 +0x430+i*8 的字符串读取，循环 0x52，CRC32B、排序与查找，hash 命中返回实际 index，失败 FFFFFFFF，非空 param_2 支持字符串比较。重定位目标 04965AC0 +430=04965EF0。英文映射静态关联成立，原始字段名拼写和其他语言转换路径未验收。

## 3. MoneyBox 原版实例数据

b5/01aeb510.c 读取、b1/01aeb1f0.c 写入。均要求有效 BCSV row、interaction enum=0x49、CanFtr byte 非零，wrapper +0xE（原始8-byte item +6）为 u8。getter clamp 99；setter signed int clamp [0,99]。其他 enum/CanFtr=false 不写。07/01af0770.c 与 0b/01af0bc4.c 均将 getter 返回值 *1000 加入价格，d7/01aed730.c 底层读取 hash 718B024D。三项储钱家具的字段因此是千铃钱单位的存入金额计数，不是普通堆叠数量；未实机验证。两个 UI gift wrapper 和 CanGift 01B032D0 都有非零拒绝分支。模型仅覆盖已明确门禁，不替代完整实例判定。

## 4. Actor 双向同步及复制

42/01454200.c 构建 wrapper，getter 写 actor +0x540。40/014540a0.c param_3 bit0=0 直接写 +540；为1 时 01476A50 取记录，01AEB1F0 更新实例，构造 type=3 的记录交给 0150BC50。6a/01476a50.c 从 component plVar15[0xa8]（byte+0x540）读出并写回本地 wrapper。20/027d2090.c 对 MoneyBox 复制路径将值清零，并回填复制的8-byte记录。具体复制场景仍待调用者归因。

## 5. 槽位状态

0313B820 和 0349B820 都存在对 +0x2B0/+0x2C0/+0x315 的写入，+315 可等于 mode==2，说明不能把该 byte 视作专属赠礼字段。0313B820 的 mode 0/1/2/3/4 分别将 +2C0 低三位设为 2/0/1/1/5，mode2 仅在指定分支设置标记。R116 对 UI 区域 03000000..03500000 扫描实际 LDRB/STRB +315，候选需继续对象别名和分支追踪。还未证实确认按钮门禁。

## 6. 工具产物
Scripts/acnh303_r116_moneybox.py：NSO 认证、转换 BL 和字段指令验证、C 锚点和 SHA256，MoneyBox getter/setter 离线边界测试（0、1、98、99、100、255及负值，其他字段不变），价格/Actor 调用窗口、slot refs，SQLite r116_interaction，Web sidecar r116，actual_instance_amount NULL。R116 CI 尚待验收；GDB 未执行。PR #95 保持未合并。

下一步：验收 R116，恢复 F1246E5F 原始字段拼写、slot +315 实际读取者、MoneyBox actor 提交的上层流程和 live snapshot、剩余包装/改造实例门禁、GSavePlayer 配方描述符及 3CCCA419 原名。
