# R97 · 轻量记忆、照片计数与 EventFlow 分发证据

## 轻量记忆
原版 FUN_027a896c / FUN_027b6388 双向 memcpy 256 bytes（+0x38）；FUN_0270d700 / FUN_0270dd90 构造 160 个 0x158 记录，起点 0x2f84，终点 0x10684（不含）。FUN_026b0f90 用 +0/+0x1c 非零检查身份并读取 InducementAtMovingDay。FUN_026b3780 先找空记录，满时随机选择替换槽。尾部 +0x138 至 +0x157 保留原始字节与已观察宽度，除日期外不命名语义。R96 的主存档布局和 19 checksum 门禁保持不变。

新增脚本只读 10×160 轻量记忆，167 个定义及 256 原始槽位；不输出身份明文，不把原始非零身份判定为当前岛屿居民。尚无真实 3.0.3 文件；CI 合成边界测试不是实际存档验证。

```powershell
python Scripts/acnh303_r97_save_flags.py --root . --selftest
python Scripts/acnh303_r97_save_flags.py --root . --decrypted-main main_decrypted.dat --header mainHeader.dat --out npc_flags_r97.json
```

## 照片
FUN_021f5aa0 确实读取 NmlNpcParam 的 71BF253B (BromideItemID)。FUN_026b7690 将匹配居民照片的 item 与玩家记忆关联，并设 BromideRewardSkipCount=10；FUN_027a87a4 / FUN_027b5d00 在非零日期差上下文下递减。该路径还维护 64 个 item history 记录。随机选择替换旧记录的代码不是照片掉率。选择照片的资格、概率及方向仍未知。

## 赠礼
NNPC_Select_Present 的 #8 包装判断、#88 设置结果、#89/#90 结果分支、#92/#93 加 1、#34/#43 Border=1000 保留完整原始节点。未证明包装 Query 枚举的真值方向与所有例外；生日事件 #93/#94/#95/#96 的 2000/2001/8000/501 边界，#102–107 的 6/4/8/4/3/5 分值保留；不能将不同入口数值合并为通用掉率。原版 BindInfo 的 EventFlowActionNpcDecideGeneralQuestReward -> EventFlowActionNpcDecideQuestReward 是资源级别名，不是 Native callback 地址。

## 未决证据
R96 的 28 条无直接线索记录，扫描原始 ELF 的 CRC32/Murmur3 seed0 对齐数据常量和连续 MOVZ/MOVK 候选；命中不是业务调用。另扫描实际 C 字符串语料中四个未知 Hash 的字段签名候选。保持所有未恢复原名、招募回调、运行时许可和照片概率为 null/false。R97 运行包含 R96 复现，生成数据包，不伪造真实存档。

```powershell
python Scripts/acnh303_r97_native_dispatch.py --root . --out artifacts/acnh303-r97
```
