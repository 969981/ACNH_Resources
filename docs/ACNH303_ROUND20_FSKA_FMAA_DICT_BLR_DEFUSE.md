# ACNH 3.0.3 R20 — FSKA/FMAA Native 目录解析与 AArch64 BLR 静态寄存器溯源

日期：2026-10-14。**重点不再以新增 GLB/PNG/WAV 数量衡量**；本轮分别对原始 BFRES 动画、同版 ELF 虚调用恢复技术做可复核的只读解析。仍不改动 103,400 原始 RomFS，也不合并 `3.0.3` 主分支。

## 一、原始数据与基线

- 来自 [R19 永久 Release](https://github.com/969981/ACNH_Resources/releases/tag/acnh303-r19-animation-native-20261014) 的失败模型原始源 `Model/CharactorAnimation20000.Nin_NX_NVN.zs`，源 SHA256 `97c70c9355a66f7b4623956357d824f307ae0855411acc584bfc9af1ca73111a`。
- R19 解压出的真正 FRES 叶子 **6,528,992 B**，SHA256 `8dd16ba20264a5f8cd3a60901e0cc6ce8173fcf2503b17fda0a1688277605972`。R18 `wmdlt` 失败保持 `failed`；**没有虚构 GLB**。
- 原始 `e10617820db06889e1638499478da0de_NCA/0/ACNH3.0.3.elf` SHA256 `83970061788f10049e2e60d687571b8dc87e5014521889ac4611a7f6b9c6e180`，AArch64 可执行段与入口 VA 以 ELF Program Headers 为准。

## 二、Switch BFRES 动画数组：真实结构，不是魔数字节计数

格式参考 [EPD Switch BFRES v10 ResFile 布局](https://epd.zeldamods.org/wiki/Bfres) 与 [nn::util::ResDic / NWString](https://epd.zeldamods.org/wiki/Common_nn::util)。

真实 FRES 文件的 `nn::g3d2::ResFile` 头：
- `+0x58`：FSKA 对象数组绝对文件偏移，实际 **0xF0**；`+0x60`：FSKA `ResDic` 位置；`+0xE2`：实际数组条目数 **406**。
- `+0x68`：FMAA 对象数组偏移，实际 **0x7FD0**；`+0x70`：FMAA `ResDic` 位置；`+0xE4`：实际条目数 **118**。
- FSKA 每条 **0x50 (80) bytes**，`406 × 80 = 32,480`，精确连续从 `0xF0` 至 `0x7FD0`；随后 FMAA 每条 **0x70 (112) bytes**，`118 × 112 = 13,216`，数组界限严格落入原始 FRES 内。每条头部实际魔数和独立 SHA 校验。
- 两个 `ResDic` 的原始首四字节为 0，内部 `count` 分别为 **406** 与 **118**，节点跨距 0x10，根节点不计。
- 原生字典键不是 C 风格字符串。实际 `NWString`：**u16 小端 UTF-8 字节长度 + 相应字节 + 0x00**。原始 `18 00 41 63 74 ...` 对应 `Act_...`，如 `Act_ArrangeRemoveFtrHigh`、`Act_BookOpen_Player`、`Act_Bed_SleepWaitSick`。严格检查 UTF-8、长度、终止符、数组/字典键名唯一性及边界。
- R20 新增逐记录 `record_name_pointer`，将 FSKA/FMAA 各记录 `+0x08` 字段与 ResDic 的所有节点键名原始地址做 **一一映射的集合相等校验**，报告 `records_reference_same_keys` 状态（以实际最新运行结果为准）。
- 输出：`scripts/acnh303_round20_fres_arrays.py` → `derived/3.0.3/r20_animation_structure/fres_animation_arrays.json`，每条保留 offset、size、member/record SHA256、指针候选、命名、校验状态。

**严格界限**：这一步只是恢复了动画对象**目录和数组关联**。FSKA/FMAA 子对象内真正的 bone-animation 数组、AnimCurve 的 frame/key 数据、插值模式、骨骼 ID/绑定及 glTF 动画仍需精确定位、相互引用校验，不能将目录结构当成轨道解析完成。进一步研究在 [Issue #39](https://github.com/969981/ACNH_Resources/issues/39)。

## 三、同版本 ELF：BLR 目标寄存器的静态 def-use

`scripts/acnh303_round20_blr_provenance.py` 基于真实 ELF PT_LOAD 映射，在此前确认的 `0x3ACA490`、`0x3ACA590`、`0xFF6470`、`0x10847E4` 附近抓取 AArch64 指令；对于 `BLR xN`，向前按同一基本块恢复 `LDR / ADD / ADRP / MOV` 来源，遇到任意分支则停止，避免跨分支臆测寄存器值。

已真实观察到的一个最清晰样本：

```text
0x3ACA490: ADRP X22, #0x4AB2000
0x3ACA494: LDR  X22, [X22, #0x238]    ; 静态全局存储位置的值，运行时可能变化
0x3ACA4A0: LDR  X8, [X22]              ; 对象首指针（候选 vtable）
0x3ACA4A4: LDR  X8, [X8, #0x18]        ; 候选 vtable + 0x18
0x3ACA4A8: BLR  X8                    ; 间接调用目标必须读取实际槽位才能确定
```

R20 报告对多个 `BLR` 给出完整机器码、寄存器溯源表达式、候选虚表偏移（如 `+0x08 / +0x10 / +0x18 / +0x30 / +0x38`），并以 `resolved_static_target: null` 保持未闭合状态。

**证据等级**：
1. 实际 ELF SHA、字节、`BLR`/前序 `LDR`：**已验证**。
2. 某些 `BLR` 呈 `object → vtable → slot` 两级加载模式：**静态候选，已验证指令形态**。
3. 具体运行时接收对象是哪种类型、虚表内实际函数指针、是否属于 AMTA/LBLI/BFEVFL：**未验证**。这些对象可能只是通用字符串或容器比较；不可从近似 RVA 直接命名。
4. 下一阶段应定位全局地址 `0x4AB2238` 的初始化写入者与可能的指针重定位、虚表构造，连接 `BLR` 的入参对象；通过真实 3.0.3 运行时只读寄存器/栈/内存记录，才能锁定目标与读入的原生资源类型。

报告：`derived/3.0.3/r20_native_blr/blr_provenance.json`。继续保持 [Native Issue #33](https://github.com/969981/ACNH_Resources/issues/33) 开放。

## 四、执行与验收

- CI `.github/workflows/acnh303-round20-research.yml`：`regress → animation + native → reconcile → publish`。
- 单元测试 `scripts/test_acnh303_round20_deep_research.py`：BFRES 计数/指针范围/错误魔数、字典长度前缀/键数组绑定与 BLR def-use 分支安全边界。
- 两份原始研究报告分别提交 R20 分支；仅在完整 CI 成功后下载**同一次** workflow 工件，与已提交报告字节比较并生成带 `SHA256SUMS.txt` 的 GitHub Release。
- 本轮不新增媒体转换任务，所以 R19 的 L3 累计基线保持 **3,558 不重复核心媒体源、7,982 媒体文件（522 GLB/6,314 PNG/1,146 独立 WAV）**。BARS 396 已测容器及成员解码失败保留原样。
