---
title: "R103 · GrowUp 包装函数与 Land/Player Temp 重置消费者"
tags: [acnh, native, eventflags, r103]
game_version: "3.0.3"
status: static-partial
---

# R103 · GrowUp、Scene 与 Stage

## 实际证据
[R102 CI artifact](https://github.com/969981/ACNH_Resources/actions/runs/45309507503/artifacts/14883135178) 已下载并读取实际七个 JSON。四组成长处理函数入口是 00DB2BEC、00DB2C50、00DB2CB4、00DB2D18（mode0..3）。每个先检查全局指针；非空调用 026F5BC4、0276AAB0、026F64F0、026F5CAC，空指针直接调用 0276AAB0。两条路径汇合后写对象+0x110=1，返回1。026F5BC4 含 mutex 获取，026F5CAC 含释放；026F64F0 遍历存储对象执行 027B7E10。00DB2D7C 检查 +0x110 后置 +0xB0=1。不能把 00DB27E0（_INIT_2887，短函数）当作这四组的 owner。具体 mode 对应上层事件仍未完全确认。

## Land/Player Temp 两类字段
| Hash | LandTemp | PlayerTemp | 原版消费者 |
| --- | ---: | ---: | --- |
| 3DAD9135 | 14/101 | 9/213 | 02741B30 / 02752790 |
| 3C7FB88F | 23/101 | 110/213 | 02742940 / 02752C00 |

3DAD9135 非零选择并按 UniqueID 和 DefaultValue u16 重置，前者上限0x80，后者0x100；3C7FB88F 前者通过 Key setter 02742300，后者按 ID 写 u16，上限0x100。两组各使用独立数据表缓存。两表重叠选中数 Land=6、Player=8。名称 AttrClearSceneChange 的 CRC32 已验证且消费者明确；具体 Scene 入口仍需追踪。StageChange 则是 NPC Temp/Memory 的独立 mode 路径。不能从名称推定所有切换事件。

## 玩家迁移
共同上层入口 02818BC0，0x37AD0 数据块；02818C64 调 0274F840(base+0xC170)，02818C70 调 027A5750(base+0xD170)，之前 027EFF98 更新日期；还调用 02813DF0 执行附加区域清理、027EA950 遍历十居民（步长0x13230）调用 02691310，后者比较身份并处理记忆重排。完整用户迁岛入口尚未恢复。Culling 的两处直接调用 01EA3EB8/01EA4E64 与 C export 01EA3D20/01EA4730 相符。Stage Memory 唯一 BL 029128D0，最近导出 02911FC0 是短查询函数，不能作为实际 owner。

## 名字字典
保留 R94 known/unknown 计数、原始 Hash 和 native_name=null；合入 R101 三个高可信恢复名及 R102 SceneChange；Land/Player Temp 额外字段单独放 additional_table_fields。5140E4B4、3DAD9135 原名仍未知。本地附加 1091904 次针对性签名测试无命中。

## 复现与下一跳
```powershell
python -m pip install capstone==5.0.6
python Scripts/acnh303_r103_reset_consumers.py --root . --out artifacts/r103
python Scripts/acnh303_r103_snapshot_compare.py --selftest
```
新增 CI 验证原始 ELF SHA、C blob及已知 BL，再扫描15个目标的直接 B/BL、ADR 和有界 ADRP/ADD 候选。地址形成候选不是完整数据流。新增脚本尚未运行，不声明新 CI 已通过。

## 实机采集
R102 observer 已通过 py_compile；没有实际 GDB 连接，硬件断点和真实状态快照未验收。对 0274F840 入口的 X0 记录同一 0x1000-byte region 的调用前后只读 dump，需确认同一次调用、真实模块基址、函数返回与采集时间；不要将所有迁移行为归因到该单一函数。比较器接受两份 dump 与原始 EventFlagsPlayerParam.csv，按 UniqueID 和默认值核对标记状态，列出未标记及未映射变化。仅 synthetic selftest 并非实机证据。
