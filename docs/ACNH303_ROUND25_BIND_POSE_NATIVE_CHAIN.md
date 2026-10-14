# ACNH 3.0.3 R25 — PlayerBody 逆绑定矩阵数值闭环、跨模型共享姿态与 BNSH 导入调用者

日期：2026-10-14。分支：`feat/acnh303-round25-bindpose-native-consumers`。基础证据来自已完成原始 Model + ELF 验证的 R24（`feat/acnh303-round24-fmdl-fskl-loader-xrefs`），**不得合并进 `3.0.3` 主分支或修改原始 RomFS/ELF**。

## 1. R25 新增的数值证据，不再停留于骨骼名称重合

R24 原始 FMDL → FSKL 骨骼数据带原始源 SHA、每个骨骼 Header SHA、逐条 3×4 inverse-matrix SHA。利用 `scripts/acnh303_round25_bindpose.py` 将这些已验证数据按 `bone.parent` 构成父子矩阵：

```text
local = Translation(position) × Rz(euler.z) × Ry(euler.y) × Rx(euler.x) × Scale(scale)
global(root) = local(root)
global(child) = global(parent) × local(child)
residual = max_abs(global(bone[matrix_to_bone]) × inverse_bind[matrix] - Identity4)
```

这里按行主序 4×4 展示矩阵、以列向量做局部位移变换（Euler 的 X/Y/Z 轴旋转角来自骨骼原始四分量记录的前三项，**第四项不能在此当四元数 W**）。

独立检查所有六种旋转组合后，`ZYX` 对四个有 inverse matrices 的原始模型全部通过阈值 `1e-4`：

| 源模型 | Euler ZYX 通过矩阵 | 最大矩阵元素残差 |
|---|---:|---:|
| PlayerBody | 30/30 | 约 1.94e-6 |
| PlayerBottomsPantsNormal | 13/13 | 约 4.36e-7 |
| BagBackpackBody0 | 7/7 | 约 7.11e-7 |
| PlayerHair00 | 7/7 | 约 4.64e-7 |
| **总计** | **57/57** | |

> 这是**基础局部 TRS 与资源内部 inverse bind 自洽**的数值证据。它没有证明 Native 游戏对动画曲线使用完全相同的插值/求值器，更没有证明 `CharactorAnimation20000` 在播放时加载哪一个 FMDL；R23 的 `BindSkeleton = 0` 和 `BindIndices = 0xFFFF` 均未改变。

特别需注意：在部分模型上 `YZX` 也会出现局部吻合（旋转分量为零或恰巧可交换）；只有全量四模型/57 矩阵的 `ZYX` 同时通过。本研究不凭单一矩阵的拟合宣称 Euler 组合唯一符合 Nintendo 的全部 runtime 规则。

## 2. 真实 PlayerBody 与服饰、背包、头发的共享骨架指纹

按 **name 而非 bone index** 将 PlayerBody 的 46 骨骼作为基础进行同名对齐。不同模型的 raw bone header 含各自局部 index/parent，因此其完整 Header SHA 不相同不意味着基础姿态不同。我们对比有明确字段定义的 `position/rotation/scale`，并将相同名称的 inverse 3×4 **原始字节 SHA** 直接比较。

| 与 PlayerBody 的对比 | 同名 Bone | 完全相同 TRS | 可对比逆矩阵 / SHA 完全相同 |
|---|---:|---:|---:|
| PlayerBottomsPantsNormal | 15 | 15 | 13/13 |
| BagBackpackBody0 | 8 | 6 | 4/4 |
| PlayerHair00 | 2 | 1 | 0（无可对比同名逆矩阵） |

- **裤装**：15/15 同名基础变换、13/13 同名 inverse matrix SHA 均完全相同，符合共享一致基础姿态的独立组件设计。
- **背包**：`Clavicle_L`、`Clavicle_R` 基础 TRS 不同；相同名称的四条 inverse matrix SHA 完全一致。不能粗暴复用本体锁骨姿态。
- **头发**：只有 `Root`、`Head` 两个名称与本体重合，后者基础 TRS 不同。不能将独立头发骨骼当成 46 骨本体的直接子数组。
- **R23 动画**：57 个独立 BoneAnim 名称、23,142 条记录中，PlayerBody 命中 38/46 个名称；这仍是**静态候选**而不是已绑定动画。

相关精确 source SHA 和骨骼级 hash 全部沿用 R24 真实报告，R25 报告还记录自身输入报告 SHA，防止在没有重新测量原始数据时失去可追溯性。

## 3. Native：从 BNSH 文件头的对齐 API 走向调用者/分配/构造链

保留 R24 确定的原始 ELF SHA：
`83970061788f10049e2e60d687571b8dc87e5014521889ac4611a7f6b9c6e180`。

R24 的三个带真实 BNSH 静态字节的入口：

| 代码位置 | BNSH 数据 VA | GetAlignment 关联调用 |
|---|---|---|
| `0x25C794` | `0x4AE3000` | `0x25C79C B 0x3F05240`（尾调用） |
| `0x25D18C` | `0x4AE3000` | `0x25D1A4 BL 0x3F05240` |
| `0x2656B4` | `0x4AEC000` | `0x2656DC BL 0x3F05240` |

其 `0x3F05240` 跳板通过 `ADRP/LDR/ADD/BR` 的 GOT `0x4AE10D8`，在 `.rela.plt` 上真实对应
`nn::util::BinaryFileHeader::GetAlignment()`。

R25 新脚本 `scripts/acnh303_round25_bnsh_callers.py`：
1. 核对完整原始 ELF SHA、R24 源报告 SHA，确认三个 BNSH 字节和 ADRP/ADD 指向未漂移；
2. 限定反汇编窗口，记录窗口内 `B/BL` 的精确 PC、目标地址、目标机器码短段 SHA；
3. 对每个跳转目标只在具有正确 `ADRP/LDR/ADD/BR` 形态时，读取真实 GOT 重定位与导入符号；
4. 输出静态导入函数候选列表，明确区分 `GetAlignment`、其它确证导入与未闭合的游戏内部函数。

**重要新静态观察（R24 原始机器码复核）**：
- `0x25D1A8–0x25D1C4` 对 `GetAlignment` 返回的 `X0` 进行 `ADD`、`NEG`、`AND` 计算，表现为常见的**对齐地址计算**；`0x25D1C8 BL 0x3F04470` 的真实导入符号尚待 R25 ELF 提取，不得先命名为分配器。
- `0x2656E8 MOV X1, X0` 将对齐返回值继续作为参数传入 `0x2656F0 BL 0x267B14`；这个内部函数的资源对象归属、是否建立 BNSH shader 实例，仍待反向追踪。
- `0x25C794` 只有 `ADRP/ADD/B` 尾调用，`0x25C7A0` 以后的指令可能属于另一函数，**绝不能以连续内存直接判定它的函数体**。

此时可以说 **BNSH 内嵌文件头被真实调用以读取对齐值，并且其返回值被用于后续计算/传参**，不能说已定位 Game resource loader、shader factory，更不能关联到 AMTA/LBLI/BFEVFL 消费者。

## 4. 复现与验收

```bash
python -m pip install -r scripts/requirements-media.txt
python -m pip install "pyelftools>=0.31,<1" "capstone>=5,<6"
python -m unittest discover -s scripts -p "test_acnh303_round25_research.py" -v
python scripts/acnh303_round25_bindpose.py
python scripts/acnh303_round25_bnsh_callers.py
```

独立模型报告：`derived/3.0.3/r25_bind_pose/bind_pose_audit.json`；
Native 报告：`derived/3.0.3/r25_native_bnsh/native_bnsh_callers.json`。R25 工作流（`.github/workflows/acnh303-round25-research.yml`）将从只读原始 ELF 与 R24 SHA 校验报告生成这两个产物。**工作流成功前不得宣称 Native 新导入链已复核。** 报告仅含紧凑审计 JSON，不提交大体积原始游戏数据。

## 5. 下一研究边界与实机只读验收

- `P0`：以 PlayerBody/裤装同名姿态与 inverse SHA 为约束，拿到版本匹配游戏实例中具体 `AnimationBind` / 模型装配对象的只读参数，以及实际应用的 Skeleton 指针关系；不改写 `0xFFFF`。
- `P0`：以 `0x25D1C8` 和 `0x2656F0` 为锚点，确认导入/内部分派和创建后实例的生命周期；记录 `BNSH bytes → header → aligned buffer → concrete consumer` 是否真的存在。
- `P1`：AMTA/LBLI/BFEVFL 走各自原始资源数据流/执行入口，**不得**从 BNSH 加载逻辑凭类比推断音频或 EventFlow 处理。
- `P1`：确认角色模型与 Animation 的真实装配后，再做帧姿态/插值与 Native 对照。

持续追踪 [Issue #39](https://github.com/969981/ACNH_Resources/issues/39) 和 [Issue #33](https://github.com/969981/ACNH_Resources/issues/33)，保持未闭合。
