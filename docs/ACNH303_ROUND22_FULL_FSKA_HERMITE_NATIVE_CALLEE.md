# ACNH 3.0.3 R22 — 全量 FSKA 关键帧、Hermite 重放与静态虚表目标反查

日期 2026-10-14。分支：`feat/acnh303-round22-hermite-native-function`。

## 目标与证据等级

承接 [R21](https://github.com/969981/ACNH_Resources/releases/tag/acnh303-r21-bone-curves-global-20261014) 已验证的 524 个命名 BFRES 动画对象、12 个 FSKA 动画样本与 549 个原始曲线头，R22 **不再以 GLB/PNG/WAV 新增量为成功判据**。

R22 在两条严格区分的研究线上执行：

1. **动画 / 原始曲线全量测试**。在 `Model/CharactorAnimation20000.Nin_NX_NVN.zs` 内，对全部 406 个已验证 FSKA 目录对象，扫描全部 BoneAnim 记录和其真实 AnimCurve header、frame/key blob；每曲线保留 SHA-256、基本类型、帧数与样本，并对所有 cubic 段计算多项式与 Hermite 的等价重放，记录下一关键帧 endpoint mismatch 而不是修正成成功。源 SHA `97c70c9355a66f7b4623956357d824f307ae0855411acc584bfc9af1ca73111a`、原始 FRES 叶 SHA `8dd16ba20264a5f8cd3a60901e0cc6ce8173fcf2503b17fda0a1688277605972`。
2. **Native / 候选槽位函数代码与真实引用**。依据 R21 文件镜像反查所见 `[0x4AB2238]=0x4B4B980`、`[0x4B4B980]=0x47F9770`、`[0x47F9770+0x18]=0x5BD3A4`，以真实 3.0.3 ELF PT_LOAD 对 `0x5BD3A4` 做有界 AArch64 反汇编并扫描全代码直接 `B/BL` 调用目标，导出同静态虚表邻近槽位与不同存储段的原始指针引用。ELF SHA `83970061788f10049e2e60d687571b8dc87e5014521889ac4611a7f6b9c6e180`。

参考实现：`BfresLibrary.Shared.Helpers.Animation.CurveConvert.HermiteToCubicKey` 在 Switch 曲线的约定下 `[a,b,c,d]` 对标准化区间参数 `t∈[0,1]` 给出 `a + bt + ct² + dt³`，代数上可恢复两端 tangents。该关系的代数恒等与字节真实来源是两件独立证据；即使数值残差 0，**也不证明原生 ELF 游戏动画求值已复核一致**。

## 代码与真实来源

- `scripts/acnh303_round22_full_curves.py`：原始解压、BFRES/ResDic SHA 源验证、406 FSKA 全覆盖、全部骨骼及曲线地址范围/帧数组/关键值验证、Cubic/Hermite 多项式重放及误差统计。输出 `derived/3.0.3/r22_full_curves/full_fska_hermite.json`。
- `scripts/acnh303_round22_native_callee.py`：原始 ELF 静态槽指针 +0x18 重读与范围验证、目标函数附近机器码/反汇编、全可执行 PT_LOAD 直接 B/BL 反查、只读数据段指针出现位置。输出 `derived/3.0.3/r22_native_callee/static_5bd3a4.json`。
- `scripts/test_acnh303_round22_research.py`：正反例 Hermite 变换与直接分支位移验证。
- `.github/workflows/acnh303-round22-research.yml`：`regress → animation+native → reconcile → publish`；由同一次运行原始工件回读逐字节比较，生成 `SHA256SUMS.txt` 与 Release。对应 [R22 Actions](https://github.com/969981/ACNH_Resources/actions/workflows/acnh303-round22-research.yml)。

## 真正闭合仍需哪些证据？

- **动画**：所有曲线条目 count/地址和关键帧字节已能按静态结构复原，不等于动画全部效果可播放。下步要恢复具体模型 Skeleton（骨骼的实际 index/bind、默认矩阵/坐标系、四元数与欧拉转换），验证真实游戏输出变换；材质 FMAA 仍需继续深入。
- **Native**：静态 ELF 文件镜像中的 vtable 槽位和函数机器码即使完全合理，不代表游戏运行时 `BLR` 必定调用此函数；不同加载基址、重定位和动态重写可能改变接收对象。必须在匹配 3.0.3 的真实运行环境以只读方式记录 `X22/X8`、`[0x4AB2238]`、`[X22]`、`[[X22]+0x18]`、`BLR` 后 PC，并关联原始资源加载的实际调用栈，才能确认 AMTA/LBLI/BFEVFL 所属对象。
- R22 研究成功 **不得**因此关闭 [动画 Issue #39](https://github.com/969981/ACNH_Resources/issues/39) 和 [Native Issue #33](https://github.com/969981/ACNH_Resources/issues/33)。原始 NCA 只读，不合并 `3.0.3` 主分支。
