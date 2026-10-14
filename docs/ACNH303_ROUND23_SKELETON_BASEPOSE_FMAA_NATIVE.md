# ACNH 3.0.3 R23 — Skeleton 绑定、BoneAnim 基础姿态、FMAA 材质动画和非 RET Native 槽

2026-10-14。R23 专用分支：`feat/acnh303-round23-skeleton-fmaa-native-loader`。R22 SHA 验收基线：[R22 Release](https://github.com/969981/ACNH_Resources/releases/tag/acnh303-r22-hermite-static-callee-20261014)。

本轮以 **实际格式语义研究** 为主，不重复 Model/BWAV/BARS L3 源，也不以 GLB/PNG/WAV 增量代替深层语义验收。

## 1. 真实原始输入

- `e10617820db06889e1638499478da0de_NCA/1/Model/CharactorAnimation20000.Nin_NX_NVN.zs`，SHA256 `97c70c9355a66f7b4623956357d824f307ae0855411acc584bfc9af1ca73111a`。
- 从该源真实解压的 FRES 叶 **6,528,992 B**，SHA256 `8dd16ba20264a5f8cd3a60901e0cc6ce8173fcf2503b17fda0a1688277605972`。
- `e10617820db06889e1638499478da0de_NCA/0/ACNH3.0.3.elf`，SHA256 `83970061788f10049e2e60d687571b8dc87e5014521889ac4611a7f6b9c6e180`。

所有文件只读。R20 已恢复 FSKA 406 / FMAA 118 的完整 NWString 字典；R22 已从 406 FSKA 读出 23,142 BoneAnim 和 24,281 AnimCurve，数学上验证 368,748 个曲线段多项式与 Hermite 等价。

## 2. R23：原始 FSKA BindSkeleton / BindIndices / BasePose

`scripts/acnh303_round23_binding_material.py` 使用经 R20 独立验证的 FSKA 数组和 BoneAnim 0x38 记录，逐项读取并核对：

- FSKA 对象 `+0x18` 的 `BindSkeleton` 真实指针、`+0x20` BindIndices 指针和 `+0x28` BoneAnim 数组指针；长度及原始 SHA 与所有 23,142 骨骼记录逐一对账。
- BoneAnim `+0x10` BaseData 指针、`+0x28` Flags（Base Scale bit3、Rotate bit4、Translate bit5）。按标志确定是否存在 Scale f32×3、Rotate f32×4、Translate f32×3 的**顺序变长连续记录**，验证原始范围/浮点有限性、SHA 和首批样本。
- BindIndices 的 `0xFFFF` 表示未绑定。仅存一个索引不代表找到了对应外部 Model Skeleton；不得凭骨骼同名自动建立骨骼绑定。

**首次实际文件观察**：406 个 FSKA 的 `BindSkeleton` 全部为 0，原始独立动画 FRES 内无 `FSKL` 魔数；可确认该动画源不能独立建立外部 Model Skeleton 的层级/InverseBindMatrix/默认变换。所有 23,142 BoneAnim 基础姿态数据已按标志和原始范围解析，其中 Rotate 23,142、Scale 10,150、Translate 4,934 个分量组，并留下各记录 SHA。后续应选择真实含 FMDL/FSKL 的模型源，按 Skeleton Bone Dictionary 与 ParentIndex、BindMatrices、同名骨骼/纹理引用交叉绑定，而非把仅有动画 FRES 当作完整模型文件。

## 3. R23：FMAA 原生材质动画对象

本轮对同一 FRES 的 **118 个 FMAA** 结构按 Switch `nn::g3d2` loader 的真实布局读取：

- 0x70 大小 FMAA 头的 `+0x18 BindModel`、`+0x20 BindIndices`、`+0x28 MaterialAnimData array`、`+0x58 FrameCount`、`+0x62 MaterialCount`、`+0x64 CurveCount`；
- 每条 MaterialAnimData 0x40 的名称、五组绝对指针、`+0x38 CurveCount`；对实际 `AnimCurve` 数组依 R21 已审计解析器读取帧数组与关键值，保存原始 header/frame/key SHA、target offset、模式与失败记录。
- 首轮识别到 **227 条实际 MaterialAnimData**，FMAA 总声明曲线和所有子记录声明合计同为 **315 条**。FMAA 的 `BindModel` 当前可见为 0，且材料绑定索引存在 `0xFFFF`。这不是完整的 shader parameter 与纹理绑定语义。
- 名称证据包含 `mEye`、`mMouth`、`Act_Fan`、`Act_Bed_SleepWaitSick` 等；当前解析输出与具体材质参数 `ParamAnimInfo/PatternAnimInfo` 的语义关联、渲染器采样和外部 FMDL 材质索引仍未闭合。

产物 `derived/3.0.3/r23_animation_binding/basepose_fmaa.json`，有实际来源/叶/子结构 SHA、失败原因、绑定空值及静态结构明确状态。

## 4. R23：Native 排除 RET 后的函数线索

R22 原始 ELF 文件镜像确认：

```text
[0x4AB2238] = 0x4B4B980  (global pointer)
[0x4B4B980] = 0x47F9770  (candidate vtable)
[0x47F9770 + 0x18] = 0x5BD3A4 = RET
```

`0x5BD3A4` 曾被 49 条直接 BL 引用，是 RET 空实现候选，**不作为 AMTA/LBLI/BFEVFL 读取者**。R23 `scripts/acnh303_round23_native_loader_triage.py` 从原始 ELF 文件再验此静态链，对同一已验证 vtable 的所有有效可执行槽位做有界 AArch64 opcode/disassembly，逐地址记录 `LDR/STR/BL/BLR/BR/RET` 指令计数，剔除入口处就是 `RET` 的槽位，而不会因后续相邻函数含 LDR 就误将空实现当数据处理函数。

首轮看到 16 个有效执行槽位入口中，**4 个是入口 RET，12 个是非 RET**；例如 `+0x08 → 0x5BD344`、`+0x10 → 0x37D0F98`、`+0x30 → 0x5BE22C`。这些只能作为后续对象工厂/XREF 研究候选，尚未知道资源类型或业务调用者。

同份 JSON 内附一个**没有任何伪造运行数据的实机只读观测模板**，要求在版本匹配、本人授权环境记录运行时 module base、BuildID、`X22`、`X8 before BLR`、全局 `[0x4AB2238]`、候选 vtable slot、真正跳转后 PC、调用栈与实际加载的资源来源；模板 `records: []`、`NOT_CAPTURED_TEMPLATE_ONLY`，代表当前绝无实机证明。必须显式记录是否发生 ASLR/重定位/构造函数覆盖，才能将目标绑定 AMTA/ELF Loader。

产物：`derived/3.0.3/r23_native_loader/nonret_slot_triage.json`。

## 5. CI、验收边界与下一步

R23 Actions：`.github/workflows/acnh303-round23-research.yml`，`regress → animation + native → reconcile → publish`，每轮同次运行的两份研究工件再次下载与 commit 的对应文件逐字节 `cmp` 并生成 SHA256SUMS；**未完成完整 CI/Release 前不得声称整轮验收完成**。

本轮的动画工作完成判断限于已审计 FSKA 基础姿态、可用 BindIndices 与 FMAA 记录及实际子曲线，不包括外部 Skeleton 绑定、base-pose transform matrix 生成、材质 shader 数据全语义或 Native 动画执行。Native 工作完成限于可执行槽位的静态分类，不能宣称已定位 AMTA 或 EventFlow 的真正读取者。

后续优先级：1）在原始 Model 资源中选择至少一个真实 `FMDL → FSKL` source，用骨骼名称/ParentIndex 和逆矩阵严格联结这 406 个独立动画；2）把 FMAA 315 条曲线连到真实材料参数/纹理；3）从已验证的非 RET 槽与资源 blob loader 关联具体调用者/对象工厂；4）实机只读观测 `BLR` 的真实目标，独立验收。

深层语义任务 [动画 Issue #39](https://github.com/969981/ACNH_Resources/issues/39)、[Native Issue #33](https://github.com/969981/ACNH_Resources/issues/33) 均保持开放。

## R23 最终实跑结果（2026-10-14）

- [R23 成功 Run 38573274802](https://github.com/969981/ACNH_Resources/actions/runs/38573274802)：**5/5 通过**（回归、真实动画/Native 原始资源分析、报告提交、同轮产物 SHA 二次复核）。
- [永久 Release](https://github.com/969981/ACNH_Resources/releases/tag/acnh303-r23-skeleton-fmaa-nonret-20261014)：`basepose_fmaa.json`、`nonret_slot_triage.json` 和 `SHA256SUMS.txt`，完整原始 SHA 与同次 run 产物字节对账。
- 真实 FSKA：406/406 个动画对象，23,142 个 BoneAnim 绑定索引均为 `0xFFFF`，406 个 `BindSkeleton` 原始指针均为 `0`，当前独立动画 FRES 的 `FSKL` 魔数命中为 0。23,142 个基础姿态全经范围/非有限浮点检查；旋转向量 23,142、缩放向量 10,150、位移向量 4,934（依每 Bone 的 Flags 统计）。**这不代表与外部模型 Skeleton 绑定完成**。
- FMAA：118/118 对象，227 MaterialAnimData，118 个 `BindModel` 指针均为 0，227 个 material bind index 均为 `0xFFFF`；原始头声明 315 个材质 AnimCurve、子对象声明亦为 315，最终 **315/315 的真实 StepInt 曲线已成功解出**，失败 **0**。全部具有 FRES 内可核对的 AnimCurve header、frame/key 字节 SHA，不能把 StepInt 的原始 key 当作材质浮点连续动画。
- R23 在首次曲线复核中曾有 51 条 `StepInt` 因 `Delta=0xFFFFFFFF` 在 Python float32 视图形成 NaN 被 R21 旧解析器拒绝。对照 BfresLibrary 的 Switch AnimCurve 类型语义，现已区别处理 **离散 StepInt / StepBool 的原始 metadata 位域**和 cubic/linear 的有限浮点系数，继续严格验证 frame start/end、frame/key 真实字节边界与类型，新增“StepInt 原始 sentinel 成功 / Cubic 非有限系数拒绝”回归。
- 真实 3.0.3 ELF 的静态候选虚表检查：在 16 个可执行槽位目标中有 **4 个以 `RET` 开头**（含 `+0x18 → 0x5BD3A4`）、12 个非 `RET`（`+0x08→0x5BD344`、`+0x10→0x37D0F98`、`+0x30→0x5BE22C` 等）。这只能用于排除默认空实现/缩小研究对象，**不是资源 reader 或对象工厂身份证据**。
- `nonret_slot_triage.json` 内只保存 `records: []`、`NOT_CAPTURED_TEMPLATE_ONLY` 的运行时只读记录规范；当前没有任何可据此确认实际 `BLR` 跳转或 AMTA/LBLI/BFEVFL 所有权的实机快照。
- 分支 `R22 → R23` 对比，原始 `e10617820db06889e1638499478da0de_NCA/` **0 个源文件修改**。仍未合并 `3.0.3`。保留 [#39](https://github.com/969981/ACNH_Resources/issues/39) 和 [#33](https://github.com/969981/ACNH_Resources/issues/33) 开放。
