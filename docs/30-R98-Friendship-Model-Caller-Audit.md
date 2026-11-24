---
title: "R98 · Friendship 完整静态算术与调用链证据"
tags: [acnh, native, eventflags, friendship, r98]
game_version: "3.0.3"
updated: 2026-11-24
status: static-model-verified-runtime-pending
---

# R98 · Friendship 静态计算与调用链

[[00-Home|知识库主页]]

## 已复核的真实证据

从 [R96 成功日志](https://github.com/969981/ACNH_Resources/actions/runs/45304942137/job/138146351895) 和 [R97 成功日志](https://github.com/969981/ACNH_Resources/actions/runs/45305728220/job/138148980978) 读取相同的 ELF table：Ghidra 0x04179CA0，ELF 0x04079CA0，24 bytes，u32 LE [0,30,60,100,150,200]。两次运行使用同一个原始 ELF，不声称两个独立二进制来源。

模型：u32(old+signed delta) -> 按无符号判级 -> 若候选等级小于旧等级使用旧等级 floor -> 按 signed int 解释 -> 限幅 0..255。独立本地模型穷举 256×511 = 130816；35-10=30，60-1=60，100-100=100，100-101=0，250+8=255。极端负增量不是已证明正常游戏入口。Native ARM64 与实机等价性仍待验证。

## 赠礼与照片

R97 的 11 个礼物图及 9 项参数检查成功。原版 NNPC_Select_Present #92/#93 各 +1，随后 #34/#43 Border=1000。生日 #102..107 为 6/4/8/4/3/5，另 #92=-5。NNPC_Select_Sell_Gift #24/25/26 分别经奖励分支到 #23/21/22 (+2/+1/+3)。保留实际 case 方向，不将包装或价格查询的 case 当作已证明布尔值。照片匹配居民专属 BromideItemID 时特定历史路径将 SkipCount 置 10，非零日期差递减 1；不由此推出照片概率。

## FlagsFlowAccess 实际资源使用

[R95 成功日志](https://github.com/969981/ACNH_Resources/actions/runs/45303564429/job/138141785978) 的 scoped AccessKey 统计：

| 值 | 定义 | Query 节点引用 | Action 节点引用 |
| --- | ---: | ---: | ---: |
| 0 | 104 | 0 | 0 |
| 1 | 27 | 27 | 0 |
| 2 | 240 | 464 | 479 |

与不开放/仅查询/查询及动作的资源侧解释吻合，但 Native 权限门禁还未定位，且 query/action 不自动等同读/写。

## 招募与 Light Memory

R97 已证明通用 query dispatcher FUN_0070fb10 的 Murmur3 seed0、+0x2d8 count、+0x2e0 指针表、object+0x10 hash、vtable+0x30 回调。NpcInviteCheck=7D83E6A3、IsCollaboNpc=BB045A73；保留实际 callback=null。160 个 Light Memory 每居民，基址 0x2f84，步长 0x158，flags +0x38 长度256，结束 0x10684。只读工具已过合成测试，真实存档缺失。R95 62 个无匹配状态中 R96 发现 34 个 ELF 地址形成候选，R97 剩余28且未新增数字匹配。不能将候选当作业务验证。

## R98 新工具

```powershell
python Scripts/acnh303_r98_friendship_callers.py --selftest
python Scripts/acnh303_r98_friendship_callers.py --root . --out artifacts/acnh303-r98
```

验证 ELF SHA 和原始修正表，扫描 59,971 C 文件中指定调用及 11 个字段/Query Hash，独立提取 ELF 直接 BL 地址与前四条指令 raw words。输出候选上下文，不自动判定 mode=1 或 callback。CI 新增；本次提交前仅独立算术模型已运行，新的完整扫描等待 CI 实际结果。

## 仍未解决

- [ ] mode=1 调用者参数数据流与游戏事件
- [ ] TalkValue 两列消费者、单位和比较方向
- [ ] Native 权限门禁、四个原名、选择性重置实际场景
- [ ] 28 个未发现候选状态的间接消费者
- [ ] 招募具体回调、赠礼完整规则、照片概率、真实 Light Memory 存档

原始资源不改动，所有实际值/未确认回调保留 null。
