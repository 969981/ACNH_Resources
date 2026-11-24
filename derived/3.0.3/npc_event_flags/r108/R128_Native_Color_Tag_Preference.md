---
title: R128 原版颜色 Getter、AITag Rank 与村民偏好候选
version: "3.0.3"
status: static_model_pending_ci
runtime_verified: false
tags: [ACNH, Gift, Preference, AITag, R128]
---

# R128 村民偏好输入与实际调用证据

## R127 验收
Actions 45378517154 success。None 11158 / ToDish 20；CanEat true225，unknown0；类别候选数0/1/2=224/10953/1，10952项所有路径一致，4911项首个增量唯一且无未知路径。实际 EventFlow MultiKind/Choice 未闭合。

## 1. 颜色、风格及服装属性
01AE3210 / 01AE3BC0 两个颜色 Getter 使用 base cache GOT04BC0028 / 04BC0030，颜色枚举范围0..14，14作为若干缺失/回退路径的返回值，不可据此直接认定颜色名。01AE3210 检查01AD7260、descriptor low3、RemakeID s16 CB5EB33F；01AE3BC0 检查01AFCFA0、descriptor bits3..4，值3归0，值1经01AFEE38选择自定义布料资源，值0使用对应原版 ItemRemake 槽位字段；两者均有 base fallback。颜色取值依赖真实实例改造状态，不可把 base color 直接当实际改造款。01AE0CF0 直接读取 9BA040C2，合法0..6；缺少资源行时返回1，其他无效路径返回0。01AE58B0 先读 GOT04BC0198 u16 enum合法0..2，否则读05326D28/30缓存合法0..2；默认0。原枚举语义尚未恢复。00EFA550 中服装 kind9/10 检查053271B0/B8 enum0或等于参数2，并要求01AE58B0结果0或等于参数3。并非已确认的穿戴许可或喜好函数。

## 2. 原版机器码调用窗口
00EF1D64 BL01AE3210；00EF1D70 BL01AE3BC0；00EF2014 BL01AE0CF0；00EF20AC BL01AE58B0；00EF21E0 / 21FC / 22A4 / 22C0 BL007B0EA4；00EF2270 BL007B0DE0；00EF2290 BL007B1100。原版调用点验证及前后96字节窗口已入脚本；两段精确函数边界仍未知。扫描全 code BL 指向目标及 relocation table slots；扫描 GOT 缓存分配/写入/释放候选。暂不将相邻窗口内调用无条件归为同一个函数。
EventFlow NNPC_Select_Equipment #0 EventFlowQueryNpcIsAbleEquipSelectItem case0->32，case1->2；#19 EventFlowQueryDeliveryItemIsFavor case0->20->17 +2，case1->21 +1；#32 检查实际穿戴情况。仍需证明各 Native query 与目标函数的具体映射。

## 3. AITag rank
007B0EA4 对tag index<51，在四组7字节位图依序查询，偏移0/7/14/21，返回0/1/2/3（S/A/B/C），无命中返回4。重复位按首个命中优先，不能把 rank 直接当好感度权重。007B1100 查原版 AITag 资源组缓存 DAT_04CA7A18/20，返回0..3，默认0。R128 共306项合成 getter 边界（51*6），原版11178*51=570078 rank cells。NPC 原始 tag1/tag2 数字是否就是 native bit index 仍需独立转换证据；只输出 numeric candidate。
## 4. 数据库
SQLite r128_item_tag_rank (item_id,tag_bit,rank_index) 主键；r128_static_preference_candidates 惰性视图关联417*11178=4661226逻辑组合、callback baseline、native kind、非零风格交集、base color候选交集、两个NPC tag数字对应rank。实际 wearability/preference/friendship delta 保持 NULL；抽样按候选字段排序仅为启发式，不是最优赠礼结论。颜色 base CRC映射仍为候选。CI 验证一位村民的全量视图与完整rank表，未逐条实机执行。
## 5. 产物及后续
Scripts/acnh303_r128_preference.py、r128_report/rank_color_items/call_windows/direct_calls/cache_refs/c_evidence/sample_candidates，gift_web_sidecar_r128。CI待验收，PR #95 未合并。下一轮从缓存 writer 定位实际颜色和服装枚举转换、核对 NPC tag1/tag2 Native 映射、完整偏好 CFG 和 query registry，之后再计算真实推荐与收益。
