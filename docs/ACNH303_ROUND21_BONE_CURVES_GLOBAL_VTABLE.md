# ACNH 3.0.3 R21 — BoneAnim / AnimCurve 实际关键帧与全局虚表链静态追踪

工作分支：`feat/acnh303-round21-curves-global-xrefs`。2026-10-14。延续 R20 的两个研究主线，不以 GLB/PNG/WAV 扩容代替 Native 语义闭合。本轮保持 103,400 个 RomFS 原始源及真实 ELF 只读；不合并 `3.0.3`。

## 1. 可靠基线和复现证据

| 原始数据 | 实际 SHA-256 |
| --- | --- |
| `Model/CharactorAnimation20000.Nin_NX_NVN.zs` | `97c70c9355a66f7b4623956357d824f307ae0855411acc584bfc9af1ca73111a` |
| 原始源内部真正解压的 Switch FRES，6,528,992 B | `8dd16ba20264a5f8cd3a60901e0cc6ce8173fcf2503b17fda0a1688277605972` |
| `e10617820db06889e1638499478da0de_NCA/0/ACNH3.0.3.elf` | `83970061788f10049e2e60d687571b8dc87e5014521889ac4611a7f6b9c6e180` |

R20 已经真实验证 FSKA **406 条 0x50** 与 FMAA **118 条 0x70** 原始记录、524/524 条字典名称的 NWString(u16-length + UTF-8 + NUL) 指针一一对应，见 [R20 Guide](https://github.com/969981/ACNH_Resources/blob/feat/acnh303-round20-fska-blr/docs/ACNH303_ROUND20_FSKA_FMAA_DICT_BLR_DEFUSE.md)。

## 2. R21：实际 FSKA → BoneAnim → AnimCurve

专用脚本 `scripts/acnh303_round21_anim_curves.py` 从此前已审计 FSKA 原始地址进入，而非搜索曲线特征码；字段布局与 Switch BFRES 类加载逻辑交叉核对：

- **FSKA/ResSkeletalAnim 0x50**：`+0x20` bind-indices pointer、`+0x28` BoneAnim array pointer、`+0x40` frameCount(u32)、`+0x44` curveCount(u32)、`+0x4C` boneAnimCount(u16)。
- **BoneAnim 0x38**：`+0x00` 带长度的骨骼名称指针、`+0x08` AnimCurve 数组指针、`+0x10` base-pose 指针、`+0x28` flags(u32)、`+0x2E` curveCount(u8)，通过真实 57 条 bone header 的地址范围验证。
- **AnimCurve 0x30**：`+0x00` 帧数组指针、`+0x08` key 值数组指针、`+0x10` flags(u16)、`+0x12` keyCount(u16)、`+0x14` animTargetOffset(u32)、`+0x18` startFrame(float)、`+0x1C` endFrame(float)、`+0x20/+0x24/+0x28` scale/offset/delta(float)。
- 从 flags 独立判定 frame 存储类型（f32/Decimal10×5/u8）、key 存储（f32/s16/s8）、曲线类型及每帧参数维度（Cubic=4，Linear=2，Step/Baked=1）；所有帧和 key 原始字节用 SHA-256 记录，帧顺序、范围和文件边界做反例测试。
- 对原始 **406 FSKA** 按名称稳定抽取 **12 个样本**，每样本最多 48 个骨骼/256 条曲线；**不把抽样结果宣称为全量 406 条动画均解码完成**。

### 首轮真实运行数据

`R21 Run #38564071265`：12 个已解析样本得到 **549 条带真实帧/关键值数据的曲线**，均为 `cubic`，549/549 帧序非降序，异常数 0。样本中 2 个 `frame_count=1` 的静态姿态，声明曲线为 0，不应视为失败。

例如：`Act_ArrangeRemoveFtrHigh` 声明 28 帧、57 骨骼、77 曲线；本轮从前 48 骨骼实测读取 60 条曲线；`Act_Boxing` 声明 36 帧、57 骨骼、74 曲线，实际前 48 骨骼读取 61 条。这不是覆盖率 100% 的同一口径。

成果 `derived/3.0.3/r21_curve_samples/bone_curves.json`（逐来源 SHA + 关键帧/关键值预览）和 `curve_summary.json`（小型索引）。

**语义边界：** 已有真正关键帧原始数据，但尚未证明 Cubic 插值参数与原生求值完全一致，也没有确定同名骨骼在具体模型 Skeleton 中的索引绑定；最终姿态、glTF/FBX 动画导出及实机动画行为仍需独立验证。

## 3. R21：从 `0x4AB2238` 到 ELF 文件镜像的静态槽位

真正的指令链从 R20 已证实：

```asm
0x3ACA490  ADRP X22, #0x4AB2000
0x3ACA494  LDR  X22, [X22,#0x238]
0x3ACA4A0  LDR  X8, [X22]
0x3ACA4A4  LDR  X8, [X8,#0x18]
0x3ACA4A8  BLR  X8
```

R21 把 ELF Program Header 映射、文件初值读取、重定位扫描、全量可执行段 `ADRP` immediate 计算、同基本块 `LDR/STR` 的精确目标读取分账存档，绝不把 ADRP 单纯命中 4KB 页当作精确字段 XREF。

**已读取的原始 ELF 文件映射链**（这里是原始文件镜像，而非已证明的 Switch 运行时内存）：

```text
PT_LOAD file backing:
[0x4AB2238] = 0x4B4B980
[0x4B4B980] = 0x47F9770
[0x47F9770 + 0x18] = 0x5BD3A4
```

其中 `0x5BD3A4` 落在可执行 ELF PT_LOAD，构成实际可读取的**静态槽位目标候选**。`[[0x4AB2238]+0x18]` 路径与 `[[[0x4AB2238]]+0x18]` 路径分开计算，不能混淆对象指针与虚表指针。

早期 R21 记录 `ADRP` 全局页面约 117,508 个命中，但最初采样前 1,500 条的实现遗漏了后续实际精确访问。已改为 **遍历所有 ADRP、只有限保存前缀样本、全量累计精确 `LDR/STR` 命中**，并修正原始 ARM64 Rd 位与 Capstone 内部寄存器枚举混淆；针对真实 `0x3ACA490/+0x4` 增加了字节级回归测试。实际修复后的精确命中数量必须以最新成功 CI 报告为准。

**特别保留的未知量**：程序装载重定位、BSS/TLS 初始化写入者、其他构造路径以及实机当前 `X22/X8` 和最终跳转 PC；静态指针也不等于 AMTA/LBLI/EventFlow 所有者。需要版本匹配的实机只读断点记录 `[0x4AB2238]`、`[X22]`、`[[X22]+0x18]` 与实际 `BLR` 跳转地址，不能仅凭 ELF 文件值断言游戏已经执行该业务。

输出：`scripts/acnh303_round21_global_initializer.py`、`derived/3.0.3/r21_native_global/global_4ab2238.json`。

## 4. 工程规范和验收

- 工作流 `.github/workflows/acnh303-round21-research.yml` 将 `regress → curves + global_refs → reconcile → publish` 分开，对真实源原始 SHA、逐曲线数据摘要与静态 ELF 映射进行验证。
- 正反例 `scripts/test_acnh303_round21_research.py`：曲线 flags/numKeys/越界、有效 float frame/key、骨骼数组步长、ADRP bit immediate/signed page、真实 `0x3ACA490` ADRP + `0x3ACA494` LDR 精确静态访问。
- 产物通过同一次成功 workflow 下载、与 committed report 逐字节比较、`SHA256SUMS.txt` 并发布长期 Release。**没有执行成功与双重校验之前不声明研究交付完成**。
- 动画模型级语义保留 [Issue #39](https://github.com/969981/ACNH_Resources/issues/39)，业务 Native/AMTA/BFEVFL 所有者保留 [Issue #33](https://github.com/969981/ACNH_Resources/issues/33)。本轮仅新增静态研究，不重复媒体输出，原始 103,400 RomFS 与 3.0.3 ELF 文件均保持不变。
