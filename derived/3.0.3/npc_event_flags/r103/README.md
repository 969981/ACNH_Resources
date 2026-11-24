# R103 — 赠礼路径、奖励模式和 417 村民邀请条件

以 R102 原版 NSO 和 registry 复现为基础。Present #8、#105 包装检查（含 DummyWrappingOtoshidama），#89/#90 读取 subflow result，#92/#93 +1，#34/#43 Border1000，#49/#51 背包空间检查；#33/#44/#50/#52 进入 Sell_Gift Root/Root_Disappear/Root_OverFlow。Sell_Gift 价格 Border3000；#27/#37 Query 好感度 case 分支，#42/#45 Percent90/85；通用 Sub0/1/2 后续加3/2/1，Type4 后续加2或3。保存具体 case 编号、条件、reward 及后续增量，未核实 Query 真值或价格单位之前不假定全路径成立，不累加互斥节点。生日路径另有 501/2000/2001/8000 及不同赠礼增量。

## Native 模式
00BAB2F0 Type0：Sub0 -> 02845D90 mode0，Sub1 -> mode1，Sub2 -> mode2（原版指令 00BAB55C/564/574、00BABC70/84/98/AC）。Mode0 先检查 BromideRewardSkipCount==0 和 Friendship>=150；随机门槛 100*r<4*F，成功候选非空即 return，输出 result0。普通回退 02846910/02845b50/02845944，可能 singleton result1 或最低 2000 价格过滤 result2；Type0 上游后续按 result 分支。Mode1 上限2999，Mode2 上限1999；各自筛选物品池而非直接生成照片。REL R 表恢复 9 个谓词的真实地址。01A484D4 是计算价格 <= 阈值；01A48358 为 >= 阈值。01AED730 的 CRC32("Price s32")=718B024D，有数量乘数与特殊匹配物品 /5 路径，不能将候选物品价格门槛直接等同于赠礼售价。配送 Type2/Sub2 00BAAB34 有同一好感度随机公式但未见直接 skip gate；不能断言所有间接路径均无冷却。

## 417 个人物规则
原始 NmlNpcParam SHA256 校验及 417 行逐项 BCSV/CSV 对账。CollaboType 0/1/2/3 分别 407/6/2/2；有效 actor 的 cAny 在任一联动类型返回0，cType1..3 匹配返回0。NpcInviteCheck Type0/1/2 失败谓词成立返回0。保存动态条件为 null，不将静态分类误写为在线邀请许可。

## 注册名称和分析入口
补充原始 NSO 名称字符串、BindInfo 未使用名称，按 Murmur3 与 206 条未命名记录逐一匹配，保留不唯一结果。ExitFlowchart 在 _INIT_4254 (010F5BB0) 设置 DAT_050B4C10，010F62F0 包装器直接识别并置 +50，010F6690 消费完成标记，因此不要求注册表命中；ReleaseVersionFile 仍未解释。78 个缺失构造函数指令窗口，6 个先前候选补充直线 x0 alias 证据；Ghidra 入口 CSV 复用 R102ImportEntries.java。未实际 Ghidra 或 GDB，真实存档未提供。

```powershell
python -m pip install lz4==4.4.4 capstone==5.0.6
python Scripts/acnh303_r103_gift_modes.py --root . --out artifacts/acnh303-r103
```
