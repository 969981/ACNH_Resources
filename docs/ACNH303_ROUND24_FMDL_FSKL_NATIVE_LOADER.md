# ACNH 3.0.3 R24 — 真实 FMDL/FSKL 模型骨架与资源 Loader 来源证据

2026-10-14。专用分支：`feat/acnh303-round24-model-skeleton-native-loader`。基线 [R23 Release](https://github.com/969981/ACNH_Resources/releases/tag/acnh303-r23-skeleton-fmaa-nonret-20261014)。

## 本轮问题与范围

R23 在独立动画文件 `Model/CharactorAnimation20000.Nin_NX_NVN.zs` 中完成了 406 FSKA 的基础姿态、23,142 BoneAnim 和 118 FMAA/315 StepInt 曲线解析，但该文件所有 `BindSkeleton` 为空，BoneAnim bind indices 全为 0xFFFF，因此不包含实际模型的骨骼父子关系及逆绑定矩阵，**无法仅凭此文件得出已经绑定的 GLB 骨骼动画**。Native 分支 R22/R23 证明静态虚表 +0x18 的 `0x5BD3A4` 是 RET，不是具体音频/动画读取函数。

### P0：真实模型来源与骨架

从 R19 已经过源 SHA 审计、确实转换出几何 GLB 的 74 个模型原始文件中，优先选十个有实际角色/动物特征的候选：`NpcNmlBrd08`、`NpcNmlDog09`、`NpcNmlPig14`、`PlayerHair13`、`PlayerHairCap40`、`InsectHanakamiri`（实际源文件拼写 `InsectHanakamakiri`）、`NpcSpTopsMncOuterL`、`NpcSpTopsRcmYshirtsH`、`ShoesKneePowered1`、`FtrArtFifePlayer`，均为 `Model/*.Nin_NX_NVN.zs`。

`scripts/acnh303_round24_model_skeleton.py`：
1. 从正式 `model_round19_classification/coverage.json` 的几何成功行取得精确源路径及 SHA，对实存原始 .zs 逐文件复核。
2. 通过已有 zstd/Yaz0/SARC 解包器取得真实 FRES，检查 FRES declared size、`ResFile+0x28` 的 Model/FMDL array 指针与 `+0xE0` Model count。数组项必须真正带 `FMDL`，`FMDL+0x18` 指向的 `FSKL` 须验证实际签名。
3. 以 Switch BFRES v9 `FSKL` 字节布局读取 Bone dictionary/array、`+0x38` Bone count、`+0x3A/+0x3C` matrix count，检查 Bone 结构大小、parent index、名称 NWString、SRT 默认姿态、inverse bind matrix 3×4 有限数、matrix-to-bone 索引边界、无环父子层级及各段 SHA。任一字段不能证实须明确记为 unresolved，不得凭 FSKL 魔数补全骨骼。
4. 对原始 `CharactorAnimation20000` 中 406 FSKA 的实际 23,142 BoneAnim 读取名称构成唯一集合；输出每个模型 Skeleton 的真实骨骼名称交集、根骨骼、父子层级与矩阵记录。**共享骨骼名称仅是候选关联**，未有游戏载入流程/资产映射实测前不是已证明动画绑定。
5. 输入源/输出 JSON SHA 独立留档，失败源单独记录原因与原始 SHA，**不篡改源 NCA**。

参考 [BfresLibrary Skeleton Switch loader](https://github.com/KillzXGaming/BfresLibrary/blob/master/BfresLibrary/Shared/Models/Skeleton/Skeleton.cs)、[Bone](https://github.com/KillzXGaming/BfresLibrary/blob/master/BfresLibrary/Shared/Models/Skeleton/Bone.cs)、[Model parser](https://github.com/KillzXGaming/BfresLibrary/blob/master/BfresLibrary/Switch/Model/ModelParser.cs) 的字段读序；这些是工具格式参考，实际格式必须由 ACNH 3.0.3 原始文件的头/大小/指针验证，不能直接当作证实。

### P1：真正 Native 加载边界，而非扩容虚表候选

`scripts/acnh303_round24_native_resource_loader.py` 从已经 SHA 校验的 `ACNH3.0.3.elf` ELF PT_LOAD 出发：
- 查实际 FRES/FMDL/FSKL/BARS/AMTA/BNTX/BFEVFL 魔数在原始 ELF 文件映射的字节命中，逐地址记录是否 executable；
- 在 executable AArch64 指令流中独立计算真实 `MOVZ Wn/MOVK Wn` 构造 32 位魔数常量的位置，确保寄存器和移位匹配；严格报告静态常量而非已确认 loader；
- 读取 `DYNSYM` 和相关重定位中具有文件读取/资源管理可能性的候选入口，收集原始符号名称与 relocation 位址，不编造不存在的 import；
- 根据成功的真实源输入与动态观测 `file read/decompress buffer → format parser → factory owner → consumer pc` 才可以声明已证实消费者。若 ELF 无直接魔数字符串，不能断言游戏无资源读取者，可能走内联/跳表/静态注册间接调用。
- 已证明的 `0x5BD3A4=RET` 明确排除；不再单凭更多 vtable 槽或地址相似性认定 AMTA/LBLI/BFEVFL owner。
- 版本匹配的实机/模拟器只读记录模板必须明确保持 `NOT_CAPTURED` 且 `records: []`，直到实际有 BuildID、module base、资源路径/哈希、file buffer、caller pc、receiver/vtable 及 BLR 后真实 PC 的记录，不能填推测值。

### CI 与验收

`.github/workflows/acnh303-round24-research.yml` 执行 `regress → model + native → reconcile → publish`，两条线分开出证据。`scripts/test_acnh303_round24_research.py` 提供合法/非法父子关系、FMDL→FSKL 和 inverse matrix 越界测试、AArch64 常量编码单元测试。

待真实运行校验的两个文件：
- `derived/3.0.3/r24_skeleton_binding/geometry_skeleton_match.json`
- `derived/3.0.3/r24_native_loader/resource_loader_evidence.json`

只有全部真实原始读取作业和提交/复核作业成功、同一次 run 的真实工件独立下载并与 committed report 字节相等、生成 SHA256SUMS 且永久 GitHub Release 落地，方可将 **R24 静态调查里程碑** 判完成。深层 [动画 Issue #39](https://github.com/969981/ACNH_Resources/issues/39) 和 [Native Issue #33](https://github.com/969981/ACNH_Resources/issues/33) 的实时求值与对象所有权仍保持开放。未经过真实源验证的骨架或计算不得硬填为已完成。

## R24 实际源验证后的技术结果（2026-10-14）

### 10 个真正的 FMDL → FSKL 与 194 个骨骼名字交集

修正实际 Switch ResFile 的模型数偏移为 **`+0xDC`**（之前错误假设 `+0xE0` 是两个保留字段之一）。重新读取真实源后，10/10 原始已转换几何 BFRES 都有 FMDL 指向 FSKL 的完整骨架，骨骼父子索引、无环层级、真实矩阵/逆矩阵范围、有限浮点检查全部通过，失败 0；合计 **236 个骨骼**，和独立 FSKA 的 **57 种 BoneAnim 名字**按单个模型求得名称交集数量合计 **194**。这是跨资源的静态名称交集，并不意味着相同 194 个唯一骨骼或已完成重绑定。

| 真实原始 Model | FSKL 骨骼数 | 与独立动画名称交集 | 根骨骼 | 逆绑定矩阵数 |
| --- | ---: | ---: | --- | ---: |
| `NpcNmlBrd08` | 46 | 42 | `nw4f_root` | 26 |
| `NpcNmlDog09` | 46 | 40 | `Root` | 32 |
| `NpcNmlPig14` | 42 | 38 | `Root` | 27 |
| `NpcSpTopsMncOuterL` | 29 | 26 | `Root` | 21 |
| `NpcSpTopsRcmYshirtsH` | 26 | 26 | `Root` | 14 |
| `PlayerHairCap40` | 18 | 2 | `Root` | 11 |
| `ShoesKneePowered1` | 15 | 15 | `Root` | 6 |
| `InsectHanakamakiri` | 11 | 3 | `Root` | 0 |
| `FtrArtFifePlayer` | 2 | 1 | `Root` | 0 |
| `PlayerHair13` | 1 | 1 | `Root` | 0 |

其中最值得先做动态联动校验的是前三个真实 `NpcNml` 模型：除了骨骼名大面积交集，还能用实存父子层级和逆矩阵检查动画目标骨骼是否与官方模型语义对应。后续需恢复 Model ↔ Animation 的资源引用/场景实例（或实际游戏运行时挂载），**不能只凭 BoneName 交集宣称 406 FSKA 都和这些动物模型匹配**。

真实逐源记录：`derived/3.0.3/r24_skeleton_binding/geometry_skeleton_match.json`，其中包含每条 FSKL 的 `ParentIndex/MatrixToBoneList/InverseModelMatrix SHA`、模型 Bone SRT 与来源 SHA。

### 原始 ELF BARS/AMTA 格式校验链从魔数升级为实际比较证据

首次 [R24 成功 CI](https://github.com/969981/ACNH_Resources/actions/workflows/acnh303-round24-research.yml) 对具有 SHA256 `83970061788f10049e2e60d687571b8dc87e5014521889ac4611a7f6b9c6e180` 的真 ELF 扫描，找到 1 个 BARS、2 个 AMTA 的实际内联资源头格式常量，并在同一 AArch64 基本块验证真实内存读取/比较/失败分支指令：

**BARS:**
```asm
0x3ACA350 MOV  W11,#0x4142
0x3ACA354 MOVK W11,#0x5352,LSL#16    ; W11 = 0x53524142 = BARS
0x3ACA360 LDR  W10,[X22]
0x3ACA364 CMP  W10,W11
0x3ACA368 B.NE 0x3ACA3B0
```

**AMTA（路径 A）**：`0x3ACAA84 LDR X8,[X22]`，`0x3ACAA88–0x3ACAA94` 四条 MOV/MOVK 在 X9 中组装实际 64 位头 `0x0500FEFF41544D41`，`0x3ACAA98 CMP X8,X9`，`0x3ACAA9C B.NE 0x3ACABBC`。

**AMTA（路径 B）**：`0x3ACAB00 LDR X8,[X23]`，`0x3ACAB04–0x3ACAB10` 四条 MOV/MOVK 构造同头，`0x3ACAB14 CMP X8,X9`，`0x3ACAB18 B.NE 0x3ACAC88`。

以上已达到 **原生格式头校验静态指令链** 的证据级别，远强于单纯静态 magic grep，并且明确排除此前 `0x5BD3A4 = RET` 的错误业务所有者假设。并不意味着已证明它们读取哪一个真实 BARS 文件、谁为 `X22/X23` 提供输入缓冲、对象工厂叫什么、被哪个业务消费函数调用。必须继续从这些**实际头校验入口**恢复上游 caller、入参内存来源及下游成员偏移读取，最终在版本匹配运行时只读验证。

原始指令/字节/上下文及 direct-branch 边证据：`derived/3.0.3/r24_native_loader/bars_amta_code_context.json`。全 ELF 常量/导入符号/动态重定位审计：`resource_loader_evidence.json`。ELF 内没有 ASCII `FRES/FMDL/FSKL/BARS/AMTA/BNTX/BFEVFL` 字面魔数，并不表示没有对应 parser；常量可能由指令拼接。

### 仍待闭合

1. 原始 Model `FMDL/FSKL` 与独立 Animation `FSKA` 的真正文件关联/实例级骨骼索引映射；再验证世界姿态、inverse bind matrix 与实际 game native evaluator。
2. FMAA 315 个 StepInt 材质 key 与模型的实际 Material/ParamAnimInfo/纹理切换关系。
3. BARS/AMTA 三个确实包含头读取/比较的 Native 位置的真实函数边界、调用者/对象工厂/数据缓冲来源，以及运行时 BLR 实际目标，方可认定业务消费者。
4. 继续保留 [#39 动画](https://github.com/969981/ACNH_Resources/issues/39) 与 [#33 Native](https://github.com/969981/ACNH_Resources/issues/33) 开放，防止把 R24 静态里程碑等同于全语义完成。
