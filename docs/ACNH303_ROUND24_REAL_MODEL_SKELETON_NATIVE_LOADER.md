# ACNH 3.0.3 R24 — 真实 FMDL/FSKL 骨骼模型与 Native 资源类型读取链证据

日期：2026-10-14；分支：`feat/acnh303-round24-fmdl-fskl-loader-xrefs`。上一轮原始源/技术证据：R23 `acnh303-r23-skeleton-fmaa-nonret-20261014`；原始 RomFS/ELF 全程只读，不修改 `3.0.3`。

## 一、为什么必须改变方向

R23 原始 `CharactorAnimation20000.Nin_NX_NVN.zs` 的全部 406 FSKA 的 `BindSkeleton` 都为 null、23,142 BoneAnim 的 BindIndices 都为 `0xFFFF`；本文件**没有** `FSKL`。它的 118 FMAA / 315 StepInt 曲线本身并不提供模型绑定。不能凭骨骼名称或矩阵猜出外部渲染模型。

R22 的 `0x4AB2238 → 0x4B4B980 → 0x47F9770 → [+0x18] = 0x5BD3A4` 是 ELF 文件镜像候选，而该槽位的实际 opcode 为 `RET`，并非已证实的 BARS/AMTA 业务读取器。继续加大虚表候选列表不构成语义突破。

## 二、真正有 FMDL → FSKL 的原始 Model 源

`scripts/acnh303_round24_real_skeleton.py` 从 GitHub 中真实存在的 8 个 RomFS Model `.zs` 资源选择，不直接假设 `FSKL` 魔数存在；逐源解压、校验 `FRES` 和 Switch BOM/版本，再由 `FRES+0x28` **真实绝对指针**验证 `FMDL`，由 `FMDL+0x18` **真实绝对指针**验证 `FSKL`。逐条检查 FSKL 骨骼名称长度前缀（u16+UTF-8）、骨骼 index、parent index、无环父子关系、逐骨骼 scale/rotation/translation f32、骨骼引用边界与真实 3×4 逆矩阵数据及 SHA。

首轮真实样本验证 2/8 成功。主要：

### Model: BagBackpackBody0

- 原始源：`Model/BagBackpackBody0.Nin_NX_NVN.zs`，SHA-256 **`fe5fb678f649c8a4d013ec32caa39b82af0952d64f5e473325793e78e9c1577f`**。
- 真实 FMDL file offset `0xF0`；真实 FSKL file offset `0x348`；骨骼 11/11，平滑蒙皮矩阵 7、刚性 0；Matrix-to-Bone indices `[4,5,6,7,8,9,10]`；矩阵 blob 与每条矩阵有独立 SHA 和有限浮点验证。
- FSKL Flags 指示 **EulerXYZ**（不是假设所有 Quaternion 分量已标准化），因此 `Spine_1` 的 rotation `[1.5707964,0,1.5707964,1]` 不应直接作为四元数归一化使用。
- 真实 ParentIndex 链：`Root(-1) → Skl_Root(0) → Spine_1(1) → Spine_2(2)`；`Spine_2` 后分出 `Backpackbelt_L_Sub`、`Backpackbelt_R_Sub` 和 `Spine_3`；`Spine_3` 下有 `Backpack`、`Clavicle_L`、`Clavicle_R`，`Clavicle_R` 下有 `Arm_1_R`。
- 验证骨骼局部平移：`Skl_Root` Y ≈ 4.8400，`Spine_2` X ≈ 1.3000，左右背包带的 Z ≈ ±1.5；均来自原始 f32。

### Model: AccessoryGlassBirthday0

- 本轮第二个有真实 FMDL/FSKL 的样本。仅 1 个骨骼 `Root`，不可能单凭它恢复完整角色动作。

### 与 R23 FSKA 原始骨骼名称关联

第二阶段不再只检查 R23 出现频率最高的 30 个名字，而是用 **原始动画源 SHA**
`97c70c9355a66f7b4623956357d824f307ae0855411acc584bfc9af1ca73111a` 与原始 FRES SHA
`8dd16ba20264a5f8cd3a60901e0cc6ce8173fcf2503b17fda0a1688277605972`，从全部 406 FSKA 的 23,142 个 BoneAnim 中恢复 **57 个不重复骨骼名称**。

`BagBackpackBody0` 的 11 个真实骨骼中，8 个与动画的 57 名字精确重合：
`Root`、`Skl_Root`、`Spine_1`、`Spine_2`、`Spine_3`、`Clavicle_L`、`Clavicle_R`、`Arm_1_R`；
另 3 个 `Backpack`、`Backpackbelt_L_Sub`、`Backpackbelt_R_Sub` 不在该动画源的骨骼名集合中。

**这只是名字重合和层级数据都真实成立，绝不是引擎在播放这些动作时把这两个文件自动关联的证明。** R23 原始 `BindSkeleton=0`、`BindIndices=FFFF` 的状态并未改变；真正的关联仍须从模型装配/运行时绑定/骨骼层级调整证据取得。

报告：`derived/3.0.3/r24_model_skeleton/real_fmdl_fskl.json`。每源保存源 SHA、FRES SHA、模型骨骼与矩阵的原始结构证明、失败原因、全量动画名称重叠列表。8 个源里不含 FSKL 或来源布局不满足本轮严格判据的 6 个保留 `no_valid_fmdl_fskl`，不能宣称资源不存在骨骼或损坏。

## 三、Native：从实际 ELF 的资源类型字节开始，而不是虚表地址猜测

`scripts/acnh303_round24_resource_loader_xrefs.py` 首先核实 ACNH 3.0.3 ELF SHA
`83970061788f10049e2e60d687571b8dc87e5014521889ac4611a7f6b9c6e180`，再搜索非可执行 PT_LOAD 的真正类型字节，扫描对应页的 AArch64 `ADRP + ADD/LDR` 精确指令引用，保留原始机器码、目标地址和邻近真实 BL 目标。它**不会**仅凭类型字节/候选函数地址给业务读取者命名。

首轮真实结果：

- `AMTA/BARS/BFEVFL/LBLI/FRES/FMDL/FSKL/FMAA` 原样字面量在扫描的非可执行映射区域中均没有找到；**不能**从这个结果断言游戏没有相关运行时模块，因为 4CC 可能以立即数、计算常量、符号或不同模块实现。
- `BNSH` 是实际存在的字面量，发现 2 个真实内存位置 `0x4AE3000`、`0x4AEC000`，与 3 处精确 AArch64 代码引用匹配：`0x25C794`、`0x25D18C`、`0x2656B4`。其中邻近直接 BL 目标包括 `0x3F05240`；本轮已记录相关函数入口上下文与原始 opcode。
- 重新审视上轮的 `0x3ACA490`、`0xFF6470` 和 `0x10847E4`，均观察到多条 `LDRB + CMP` 逐字节比较指令，存在可复核的字符串比较/匹配模式。把这些位置直接称为 BARS/EVFL reader/dispatcher 缺少资源字节流和实际调用者证据，应标为 **原先误命名的静态假设，未验证业务归属**。

**目前仍未闭合的 Native 证据链：** 原始资源字节 → 真实 ELF 接收缓冲/解析入口 → 特定对象工厂/注册表 → 业务消费者（如 AMTA/LBLI/BFEVFL） → 匹配版本的运行时只读寄存器/实际 PC/可复现实机操作。不能把 BNSH 类型引用点等同于真实 shader loader 已验证，更不能据此宣称取得 AMTA 播放字段或 EventFlow action/query 的执行函数。

报告：`derived/3.0.3/r24_native_loader/resource_magic_xrefs.json`；保留所有 0 命中、真实指令窗口 SHA、准确的代码/data VA 和候选分级。

## 四、复现与后续

- 脚本：`scripts/acnh303_round24_real_skeleton.py`、`scripts/acnh303_round24_resource_loader_xrefs.py`。
- 反例单元测试：`scripts/test_acnh303_round24_research.py`，涵盖 FSKL 结构/parent index 越界/真实 AArch64 ADRP opcode。
- CI：`.github/workflows/acnh303-round24-research.yml`，`regress → skeleton + resource_loader → reconcile → publish`。只在成功运行、同次 artifacts 与已提交报告逐字节一致并有 SHA256SUMS 后声明 Release 完成。
- 下一优先级：利用实际的 `BagBackpackBody0` FSKL 建立含 EulerXYZ、ParentIndex 和 inverse 3×4 的**局部层级求值测试**；再寻找**真正具有 57 骨骼角色同源关系的 FMDL/FSKL**；Native 从 `BNSH` 三处实际引用及其被调用者做参数数据流和确定性边界，而不是将所有字符串比较循环误称资源解包入口。
- [动画 Issue #39](https://github.com/969981/ACNH_Resources/issues/39) 与 [Native Issue #33](https://github.com/969981/ACNH_Resources/issues/33) 仍需保持开放。
