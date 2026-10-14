# ACNH 3.0.3 R24 — 真实 FMDL/FSKL 骨骼模型与 Native 资源类型读取链证据

日期：2026-10-14；分支：`feat/acnh303-round24-fmdl-fskl-loader-xrefs`。上一轮原始源/技术证据：R23 `acnh303-r23-skeleton-fmaa-nonret-20261014`；原始 RomFS/ELF 全程只读，不修改 `3.0.3`。

## 一、为什么必须改变方向

R23 原始 `CharactorAnimation20000.Nin_NX_NVN.zs` 的全部 406 FSKA 的 `BindSkeleton` 都为 null、23,142 BoneAnim 的 BindIndices 都为 `0xFFFF`；本文件**没有** `FSKL`。它的 118 FMAA / 315 StepInt 曲线本身并不提供模型绑定。不能凭骨骼名称或矩阵猜出外部渲染模型。

R22 的 `0x4AB2238 → 0x4B4B980 → 0x47F9770 → [+0x18] = 0x5BD3A4` 是 ELF 文件镜像候选，而该槽位的实际 opcode 为 `RET`，并非已证实的 BARS/AMTA 业务读取器。继续加大虚表候选列表不构成语义突破。

## 二、真正有 FMDL → FSKL 的原始 Model 源

`scripts/acnh303_round24_real_skeleton.py` 从 GitHub 中真实存在的 8 个 RomFS Model `.zs` 资源选择，不直接假设 `FSKL` 魔数存在；逐源解压、校验 `FRES` 和 Switch BOM/版本，再由 `FRES+0x28` **真实绝对指针**验证 `FMDL`，由 `FMDL+0x18` **真实绝对指针**验证 `FSKL`。逐条检查 FSKL 骨骼名称长度前缀（u16+UTF-8）、骨骼 index、parent index、无环父子关系、逐骨骼 scale/rotation/translation f32、骨骼引用边界与真实 3×4 逆矩阵数据及 SHA。

初次筛选验证 2/8 成功（下列为保留的历史第一阶段样本）；后续发现并加入真正的 PlayerBody 等玩家模型，**最终验收为 5/12**，主研究对象应以末尾的 PlayerBody 结果为准。

首轮模型：

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

## 五、R24 最终原始实测与准确代码分派（2026-10-14）

- [R24 最终成功 Actions #38584764166](https://github.com/969981/ACNH_Resources/actions/runs/38584764166)：`regress`、`skeleton`、`resource_loader`、`reconcile`、`publish` **5/5 通过**。
- [永久 Release](https://github.com/969981/ACNH_Resources/releases/tag/acnh303-r24-fmdl-fskl-resource-xrefs-20261014) 中有 `real_fmdl_fskl.json` (20,338B)、`resource_magic_xrefs.json` (42,102B) 与 `SHA256SUMS.txt`。同次工作流上传的两份真实审计 JSON 与 Git 提交报告逐字节 `cmp`。
- 第一阶段实测 8 个 FMDL 模型候选、2 个验证 FSKL（随后扩为 12 个、5 个成功）；第一阶段主样本 `BagBackpackBody0`（11 bones、7 smooth inverse 3×4 matrices、0 rigid）；源 SHA 和每个骨骼/矩阵 SHA 都在 JSON。另一 `AccessoryGlassBirthday0` 为单骨骼 Root。其它 6 只表示未通过本轮选定的`first FMDL + FSKL`证据路径，并不表示无效模型。
- 同原始 `CharactorAnimation20000.Nin_NX_NVN.zs` 恢复 **406 个 FSKA/23,142 个 BoneAnim / 57 个不同 bone name**，主模型 11 个骨骼与其中 8 个名字直接重合，`Backpack`、`Backpackbelt_L_Sub`、`Backpackbelt_R_Sub` 为模型特有，不见于该角色动画原始名称集合。名字相同并不等于 FSKA 的 BindIndices 已从 `0xFFFF` 变为真实索引。
- 原始 FSKL Flags 指示 **EulerXYZ**，不能把 Vector4F 的第四分量看成已验证的 quaternion W。本轮严格检查 ParentIndex 无环图和非有限浮点，保存 7 个原始 3×4 inverse model matrices 与引用 Bone index 的 SHA。

### BNSH 资源字节定位 → 实际 Nintendo SDK 导入 API

相比此前只凭 `BNSH` 字面量和静态函数地址猜测，本轮已经进一步恢复 **真实二进制数据 → 真实地址引用 → AArch64 调用跳板 → ELF 重定位 → 导入符号**：

```text
ELF 数据中 BNSH header：0x4AE3000 / 0x4AEC000
  │
  ├─ code 0x25C794   ADRP X0, #0x4AE3000
  │       0x25C798   ADD  X0, X0, #0
  │       0x25C79C   B    0x3F05240（tail branch）
  │
  ├─ code 0x25D18C   ADRP X24, #0x4AE3000
  │       0x25D198   MOV X0, X24
  │       0x25D1A4   BL   0x3F05240
  │
  └─ code 0x2656B4   ADRP X24, #0x4AEC000
          0x2656C4   MOV X0, X24
          0x2656DC   BL   0x3F05240

0x3F05240  ADRP X16, #0x4AE1000
0x3F05244  LDR  X17, [X16,#0xD8]
0x3F05248  ADD  X16, X16,#0xD8
0x3F0524C  BR   X17

真实 GOT 槽位：0x4AE10D8
  .rela.plt: AArch64 JUMP_SLOT (1026)
  符号：_ZNK2nn4util16BinaryFileHeader12GetAlignmentEv
  ⇒ nn::util::BinaryFileHeader::GetAlignment() (C++ mangled symbol)
```

附近 GOT `0x4AE10E0` 也有 `_ZNK2nn4util17BinaryBlockHeader12GetBlockSizeEv` 的 JUMP_SLOT 重定位，**但当前三处静态引用仅锁定 `GetAlignment` 跳板**；不可把相邻槽位的 GetBlockSize 也称为实际被调用。

这里的 `BNSH` 不只是“普通 C 字符串字面量”：其后真实字节为 Nintendo 二进制 header 字段（例如首 4B `42 4E 53 48`，其后版本/BOM 信息），因此代码对其首地址调用 `BinaryFileHeader::GetAlignment()` 具有原始输入语义。这仍只证明**二进制文件头对齐信息读取链**，尚未恢复资源容器完整加载、对象工厂、着色器实例分派，更与 AMTA/LBLI/BFEVFL 业务读取无直接证据关系。

### 重要排除：上轮误标为消费者的虚调用

`0x3ACA490`、`0xFF6470`、`0x10847E4` 的多次 `LDRB/CMP` 逐字节比较循环，属于待恢复对象归属的**字节序列比较模式**。尽管 R20/R21 已证明 `BLR x8` 寄存器读取链，且 R22 从原始 ELF 文件找到 `+0x18→0x5BD3A4(RET)`，均不能替代真实 runtime receiver 或 AMTA/EVFL 源与目标函数的映射。因此必须取消旧文档中“已确定 BARS reader / EventFlow dispatcher”的过强表述，仅保留历史标签并明确 `hypothesis`。

### 验收状态

R24 **仅**完成上述两个静态原始研究专题，深层 Issue #39（真正角色 Skeleton/动画绑定与场景求值）、#33（AMTA/LBLI/BFEVFL resource loader/handler、真实运行时函数归属）仍开放。R24 没有新增媒体文件，也没有修改原始 NCA/ELF；对比 R23 分支，原始源的修改计数 0。本阶段尚无版本匹配实机只读 BLR 记录。

## 六、最重要的最终扩展：真实 PlayerBody 角色骨架（替代第一阶段背包样本）

通过对 `Model` 子树的 60,166 个源文件目录项独立读取，恢复到了顶层 Git tree 递归结果原先截断所漏掉的四个玩家模型资源：`PlayerBody`、`PlayerHair00`、`PlayerEye00`、`PlayerBottomsPantsNormal`。这四个原始文件已和前八个文件一起进入**最终 12 源 CI**，不是文件名猜测。

### 最终真实结果

- [最新完整成功 CI Run #38585589155](https://github.com/969981/ACNH_Resources/actions/runs/38585589155) 5/5 成功，原始 Model 候选 **12 个，验证 FMDL/FSKL 的 5 个**。最新 [R24 Release](https://github.com/969981/ACNH_Resources/releases/tag/acnh303-r24-fmdl-fskl-resource-xrefs-20261014) 已更新为本次同轮产物与 SHA。
- **PlayerBody**：`Model/PlayerBody.Nin_NX_NVN.zs`，原始 SHA `99ce2741d8cbe47f51ba1a645ae7becb020d67688ea44eba637a1c2ab3e2e6c3`、解压 FRES SHA `f1f0071e76fa61a813119ff648fa20bd8b1ed652c39b3a491ed2a73ed04eef7e`。真实 FMDL offset `0xF0`、FSKL offset `0xE68`（十进制 3688），FSKL 标志 `0x1280` => **EulerXYZ**。
- **46 个原始 Skeleton Bone**，全部通过 name/index/parent 无环、有限 f32 与边界测试；**30 条 smooth inverse 3×4 matrix、1 rigid matrix index**。实际示例：matrix#0 对应 Bone#11 `Spine_1`，原始逆矩阵 3×4 按 f32 解码为 `[0,1,0,-4.84000015, 0,0,1,0, 1,0,0,0]`；matrix#1 对应 Bone#14 `Spine_2`，其中位移分量约 `-6.13999987`。均有原始 48B 每条 SHA。
- 原始层级至少包含 `nw4f_root(-1)→Root(0)→Trans_Root(7)→Skl_Root(9)→Spine_1(10)→Spine_2(11)→Spine_3(14)`；锁骨和手臂按 ParentIndex 分支，另有面部组件与 `Mdl_Root`。
- 与 `CharactorAnimation20000` 已按真实 SHA 恢复的 **57 个不同名称/23,142 条 BoneAnim** 进行全量集合对账：PlayerBody 的 46 骨中 **38 个名称精确重合**。另外 8 个未命中名称：`Bag`、`EarL`、`EarR`、`Mdl_Root`、`Nose00`、`Nose01`、`Nose02`、`z_Bag`。该差异支持资源按角色本体与配件独立组织的**假设**，但不能证明装配方式。
- **PlayerBottomsPantsNormal**：独立 FMDL/FSKL 15 骨，**15/15 与动画骨名精确一致**；**PlayerHair00**：独立 FMDL/FSKL 12 骨，仅 2 个名称落入角色动画 57 名集合；`PlayerEye00` 没有通过当前严格的 FMDL+FSKL 路径检查，不能把它算作已解析的模型骨架。
- 余下 `BagBackpackBody0`（11 骨、8 名字重合）与 `AccessoryGlassBirthday0`（Root 单骨）保留第一阶段验证状态。

### 关键边界

PlayerBody 46 骨与 406 个 FSKA 角色动画之间可以建立真实、可复核的**骨骼名字对应候选表和局部层级/逆矩阵索引**，却不能把 R23 动画 FSKA 的 `BindSkeleton=0`、`BindIndices=0xFFFF` 伪写为有效链接，也不能凭命名将当前模型当作全部装扮配置中每个角色动画必然应用的骨架。下一步应在版本匹配的游戏运行时只读验证 **Model/Skeleton 的装配与 `AnimationBind` 参数**，再对同一骨骼对应的帧变换做对照。

与此并行，R24 Native 原始 BNSH 头 → `nn::util::BinaryFileHeader::GetAlignment()` 的真实 ABI/PLT 重定位路径已经闭合到导入符号，但 shader 实例管理、AMTA/BFEVFL 业务消费者和实机跳转 PC 尚不在本轮静态验收范围。
