---
title: R123 生日回礼分级与普通赠礼事件分发
version: "3.0.3"
status: static_model_pending_ci
runtime_verified: false
tags: [ACNH, Gift, Birthday, EventFlow, R123]
---

# R123 生日回礼与普通类别分发
## R121/R122 验收
R121 修复后 Actions 45346407450 success，4661226 pairs、216 conditional cases，服装候选且静态非零 style overlap/回调通过 1076679 pairs。R122 Actions 45346597351 failure: sparse checkout 缺 /UnPack/1/EventFlow/，be053ad 修复。非价格算法断言失败；重跑待验收。

## 生日回礼树
原版 NNPC_GEvent_BirthdayN_H #166 index1=0/1/2 分发 #160/#159/#158；index0=0/1 的好感度增量高8/5、中6/4、低4/3。高价直接 #110，不查友情等级；中价 #109、低价 #108 检查 6-level。case4/5（Lv1/2）分别直接中档/低档回礼；Lv3+ 进入 #110 或 #116。#110/#111 对摆放或装备已存在选择 Reward_Rere (sub1)，两者皆否则 Reward_SuperRere(sub0)。#116/#117 已摆放或装备选择 Normal(sub2)，否则 Rere(sub1)。unknown 状态保持三值模型。只适用于已到达价格分级/回礼路径；不能把 case0/1 自动套用到未验收的包装 query。
#118/#119/#120 RewardType0 Sub0/1/2；#175/#173/#174 写 DC_NPCBirthdayFlag=3/2/1；#121/#122 自岛走邮件 #130/#131，外岛 #168/#169 检查空间，有空间直接交付路径，无空间提示退出；#170/#172 后再次 #178/#179 按 flag 1/2/3 重新调用 #182/#181/#180（Sub2/1/0），#185 交付路径后清零。保留 deferred flag value 为分支证据，不宣称写入必成功或二次抽选概率独立。
#64 wrapping case0 ->157 SetIndex0=0；case1 ->197 solo ->161 SetIndex0=1。R123 保存 010C89A0 起始0x250原版机器码窗口；真实 wrapper consumer 和极性尚待验收。

## 普通类别分发
NNPC_Select_Present #4 起的局部事件路径：kind bit 食べる/植える、MultiKind bool、Choice4/5、MultiItem、特殊节日等。例 #66 default case0 ->99，Fish/Insect/DiveFish 对应1/2/3 ->21/22/84；#120 Ftr/DoorDeco/Gyroid ->23；#42 Tops/OnePiece/Cap/Accessory ->27；#13 Money/Trash/TurnipExpired/Music 分发 #31/#30/#30/#28。R123 只对假设已进入 #4 的未包装原版物品寻找首个外部类别 subflow；按原版 graph 推断 membership=case0、Choice A..D=1..4/default0，尚未验证所有 Native query 极性。未知 kind bit/context 走所有记录的候选边；未覆盖 case/退出/循环保留 unknown。不能将 first category candidate 等同真正 UI 确认、完整事务或最终推荐。
缓存按 Native Kind 与特殊 ItemID 去重，生成11178项 category_candidates，actual_dispatch NULL。162项生日组合 (3 tier×6 level×3 decorated×3 equipped)；SQLite r123_dispatch_candidate；r123_report、birthday_reward_matrix、dispatch_items、dispatch_routes、wrapping_window、gift_web_sidecar_r123。
R123 CI 待验收。下轮优先：原版 query polarity、KindBitParam 实际字段及选择逻辑、生日回礼延迟状态实际消费者、Kind57 价格比较对象及村民偏好闭环。
