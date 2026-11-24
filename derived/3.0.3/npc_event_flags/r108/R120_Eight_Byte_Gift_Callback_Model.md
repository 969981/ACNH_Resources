---
title: R120 八字节赠礼回调离线模型
version: "3.0.3"
status: static_model_pending_ci
runtime_verified: false
tags: [ACNH, Native, Gift, R120]
---

# R120 统一八字节物品实例判定

## 1. R119 验收
[Actions 45343486532](https://github.com/969981/ACNH_Resources/actions/runs/45343486532) success。11178项物品 OutfitInfo 精确 CRC 关联；157个使用 Key；162项唯一完整字符串表候选 049C0770。69项 Tool 改造类型均具 raw+4 描述符候选，全部 fabric_count=0。因此在当前原版资源假设下 Tool 描述符不参与非零布料门禁。GOT04BC0148 ->05326AF0 (Main+0x5226AF0)。分配 count/pointer 01A66248/01A66250，释放后清零 01A68948/01A6894C。字段 7724BF93 +0xB4：01A7AF84 MOV W24,#BF93 / 01A7AF88 MOVK W24,#7724,LSL#16；01A7B588 STRH W8,[X10,W9,SXTW#1]。真实 converter 关联仍待 R120 日志。Money 2105 Kind134 (0x86), CraftMaterial 2500 Kind94 (0x5E)，interaction 都为0。R119 的虚调用排误保留03320004作为未归因候选，其他3处覆盖寄存器已排除。

## 2. 模型输入、输出及边界
Scripts/acnh303_r120_gift_instance.py 从 R110/R113/R115/R117/R119 构建原版11178项模型输入，包含 Native Kind、CanGift/CanNpcPresent/CanNpcBirthdayPresent 类别许可、CanFtr、82项交互类型、改造类型、fabric count、outfit mask。调用仅输入 raw8-byte 和 ordinary/birthday，自动解析 query ID，使用原版 normal17/special4 lookup table；模型限于原版 ItemParam/ItemKind 已加载且 gate 结果稳定的前提，不视为真实 UI 结果。
外层查找有效 query ID，然后 MoneyBox 非零金额拒绝；leaf 执行 remake gate (count!=0 && descriptor !=NULL && word&0x18==0x10)、runtime CanGift、包装状态 mask 0x13 对应分类，按普通与生日权限或解包递归。生日 Kind0xB9 特例直接使用生日类别权限。Tool=2 的 descriptor 未标记为完全闭合，但当前69项均 count0。解包仅在 runtime CanGift=true、source state!=0 的已证实路径调用；归一化 byte3 &=0x80，重新查 query/Kind/CanGift；正常分支递归，dummy/invalid/special fallback 根据已恢复规则选择 Money 或 CraftMaterial。递归保护：遇同一记录或深度8返回 unknown。禁止把递归保护当 Native 拒绝。未获得实机 snapshot，默认记录仍只允许 opt-in 条件预测。
返回 callback_model_result: true/false/null；trace 逐层记录；actual_gift_success 始终 null；runtime_verified=false。不会执行任何游戏内操作或写入。

## 3. 使用方式
CI 生成 r120_gift_model_data.json 后执行：

```bash
python Scripts/acnh303_r120_gift_instance.py --model artifacts/acnh303-r108/r120_gift_model_data.json --raw 5507000000000000 --mode ordinary
```

raw 为严格8字节 hex，模型可本地只读运行。若需要对默认记录进行条件预测，显式加 --conditional-defaults；不加则涉及 fallback 返回 unknown。未声称默认记录已取得实机验证。

## 4. 验收矩阵及数据产物
全量11178项，每项 ordinary/birthday × 3种合成记录 (zero-tail、raw4=0x10、raw6=0x10)，共67068 cases；6个原版ID×256 flag bytes×2 mode=3072 cases（仅合成；不代表所有记录可合法存在）。MoneyBox三项非零金额拒绝、零金额通过；不存在的FFFF/FFFE 类原版行做外层查询测试（实际测试 FFFE）。比较默认 opt-in 与默认 unknown 路径，仅在保守结果已确定时要求一致。
SQLite r120_synthetic_callback 共22356项零尾部合成结果，主键(item_id,mode)，actual_gift_success NULL；Web sidecar r120 包含模型输入与 synthetic_zero_tail。输出 r120_report、r120_gift_model_data、r120_synthetic_baseline、r120_examples、r120_outfit_writer、r120_default_guard_blocks、gift_web_sidecar_r120。
R120 另外核验7条 OutfitIndex 生命周期/字段机器指令、提取 01A7AF84..01A7B58C 转换调用及表引用候选；检查 01B08134 后两个 guard 初始化块机器码。CI 尚待验收；GDB 未执行；PR #95 未合并。下一步验收并闭合实际 converter、完整64位默认初始化、UI VTable 接收者；再对模型进行原版实机只读输入输出对照。
