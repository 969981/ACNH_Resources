---
title: "R108 · StageChange 间接对象来源与 R107 验收修复"
tags: [acnh, native, eventflags, r108]
game_version: "3.0.3"
status: static-partial
---

# R108

R107 两次 CI 失败分别为正则双重转义与 sparse checkout 路径错误；已在 [PR #90](https://github.com/969981/ACNH_Resources/pull/90) 推送修复 8ddae7b、3ad40d7。不得把失败的全量 NSO 扫描算作完成。R108 本地实际读取 R105 ZIP 与 R100 SQLite，校验 SHA256，复算 38 槽/32双LDR及11个 R107 重定位关系。

## 对象来源分类

全部38个 site 唯一分组，分类依据为局部指令路径而非真实 C++ 类型：
| 路径 | 数量 |
| --- | ---: |
| 管理器访问器 | 6 |
| Land storage callback | 6 |
| NPC storage callback | 4 |
| global service +18h | 5 |
| global storage pair | 8 |
| indexed storage pair | 2 |
| stack VTable candidate | 3 |
| nested stack object | 1 |
| other dynamic | 3 |

04BB46B0->05574040，04BB2640->05AED668，04BB2720->05AED670，04BC1530->05AB7608，04BB3350->05AE7790，均为 BSS 根而非已恢复对象类型。管理器访问器六点来自 x21 根及 +10h 分支；Land 数据包装器有 +205208h/+20h，NPC 有 +D0h 的回调对象；global service 通过 +18h 调用；global storage pair 以 +60h/+11B0h/+1790h 包装器为局部来源。其余依实际窗口保留未知。原始根与调用对象之间仍需运行时数据流确认。

## 栈上对象静态候选

029139C4 从04BC3298读取04A85758，+10h 得地址点04A85768；029139F0写入[sp+10h]。02913A0C加载同栈槽及+20h，原版RELR 04A85788->0259B18C。
02913AE8 从04BC3530读取04A86C80，+10h 得04A86C90；02913AF4写[sp+10h]。02913B14/02913B2C加载+20h，04A86CB0->025FD104。两目标C源码均 return 0xb；相邻业务函数0259ACA4出现 IsInMyVillage、IsDreaming、CountByFacility、MysteryTourUid、KappeiTourUid；025FCD8C出现 IsFromResortPlannerApp、Customer、Housemate、Section、Season。不能从邻近函数推定原始类名。三处候选均有中间调用可能改变栈对象，保留 STATIC_CANDIDATE_NOT_CLOSED。0/38 实机目标。

## 其余 P0/P1

GrowUp构造、055B2618分发消费者、00DB8274完整CFG等待修复后的R107原版扫描。Rollback枚举原名、5140E4B4、LifeSupport前E98h、NewAchievement枚举仍无新增确证。没有实机GDB快照，不宣称实机通过。

## 复现

下载 [R105 CFG](https://github.com/969981/ACNH_Resources/actions/runs/45311806263/artifacts/14883517767) 与 [R100 relocation SQLite](https://github.com/969981/ACNH_Resources/actions/runs/45308001227/artifacts/14881442847)，运行：

```powershell
python Scripts/acnh303_r108_stage_provenance.py --root . --cfg github-actions-artifact-14883517767.zip --reloc github-actions-artifact-14881442847.zip --out artifacts/r108
```

新增 CI 对原始 artifact、15个 relocation根/槽、4个C blob、局部窗口及分类进行复验。独立于尚未通过的 R107 完整扫描；新增CI尚待验收。
