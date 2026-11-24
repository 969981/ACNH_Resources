---
title: R121 OutfitInfo 转换器闭合与村民赠礼分析接口
version: "3.0.3"
status: static_model_pending_ci
runtime_verified: false
tags: [ACNH, Native, Gift, OutfitInfo, R121]
---

# R121 原版转换与条件赠礼收益

## R120 验收
[Actions 45343980704](https://github.com/969981/ACNH_Resources/actions/runs/45343980704) success。67068 全量 synthetic cases 与3072 flag cases；普通/生日 zero-tail true 9330/9332，raw+4=0x10 true9071/9073，raw+6=0x10 true9327/9329。flag true1060 false1544 unknown468。合成测试通过不是原版实机执行。

## 1. OutfitInfo converter
01A7AF84 MOV W24,#BF93；01A7AF88 MOVK W24,#7724,LSL16；01A7B024 CMP W10,W24；01A7B090 MOV W0,W25；01A7B094 MOV X1,XZR；01A7B098 BL 01A8CDD0；01A7B09C CMP W0,#A2；01A7B588 STRH W8,[X10,W9,SXTW#1]。Ghidra VA=Main RVA+100000。
cd/01a8cdd0.c 读取 PTR_s_STowelN_04bbe238+lVar19*8+760，遍历0xA2项，CRC32B、排序及返回原序号。原版 relocation 04BBE238 ->049C0010，加760=049C0770。R119 已证明唯一162项全覆盖英文表，现与 converter 直接静态关联。R121 核验实际机器码及 C 锚点 SHA256，生成11178项 native_outfit_index。原字段拼写仍未知。

## 2. 两个默认记录完整初始化
01B0814C MOV W8,#9C4；01B08150 STR X8,[X0]；01B08154 BL 0277D4AC。01B08180 MOV W8,#839；01B08184 STR X8,[X0]；01B08188 BL 0277D4AC。写 W8 自动清高32位，两个完整初始记录分别 C409000000000000、3908000000000000。目标 DAT_0532ACE8/0532ACF8，guard 0532ACF0/0532AD00。归一化后实际运行时记录仍未采集，不能将初始化证据当作 live snapshot；R120 默认 unknown 行为保持。

## 3. 村民赠礼分析整合
Scripts/acnh303_r121_gift_analysis.py：输入 NPC UniqueID、raw8、ordinary/birthday，调用 R120 回调模型；对无包装记录输出两个 Native style index 和村民偏好两项的非零交集，颜色仍为原版 CRC 候选，actual_affinity=null。包装查询 ID 可能是包装占位物，不做底层礼物偏好猜测。回调拒绝或未知则不计算收益；生日独立路径尚不计算普通回礼。
仅当调用者明确提供已到达普通回礼事件分支、真实 Native Price、pocket_space、friendship、base_delta、wrap_delta、skip_count，才调用 R104 条件模型。不能用数据库 raw price 直接替代实际 Native Price；也不能从静态风格交集直接推断好感度增量。最终照片交付概率、actual_gift_success 保持 null。R104 条件 direct photo roll 不是最终交付概率。
SQLite r121_static_style_pairs 为惰性视图，417×11178=4661226 pair 组合；与 R120 零尾部合成回调结果关联。统计按 callback_model_result/nonzero_style_overlap/clothing_kind_candidate 分组；不物化数百万行。216 个条件回礼边界测试（9友情值×4价格×2背包状态×3冷却值），包括回调拒绝、生日分离和缺少上下文时不计算的断言。

## 4. 使用
```bash
python Scripts/acnh303_r121_gift_analysis.py --model artifacts/acnh303-r108/r120_gift_model_data.json --db artifacts/acnh303-r108/r105/acnh303_gift_research.sqlite3 --npc-id NPC_ID --raw 5507000000000000
```
指定真实 native price 和 event context 后才计算条件收益。CLI 参数 --friendship --base-delta --wrap-delta --skip --native-price --pocket-space yes/no --entry-reached。
产物 r121_report.json、r121_conditional_reward_cases.json、r121_converter_window.json、r121_c_evidence.json、gift_web_sidecar_r121.json；SQLite r121_outfit_index 与 r121_static_style_pairs。
R121 CI 待验收；无实机验证，PR #95 不自动合并。下一轮优先关闭真实 Native Price 计算、普通回礼事件入口/类别收益的实际分发、NPC preference color/tag 消费者以及 UI 确认操作。 
