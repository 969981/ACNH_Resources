---
title: R109 Native 赠礼业务链闭合
version: "3.0.3"
status: static_partial
runtime_verified: false
tags: [ACNH, reverse-engineering, gift, native, R109]
---

# R109 Native 赠礼业务链闭合

## R108 验收回归

[Actions 45321434348](https://github.com/969981/ACNH_Resources/actions/runs/45321434348) 前两个脚本成功；UTF-8 修复后第三脚本执行两套 7 项风格和 189 项 Kind 指针提取，但失败于 Native CRC/BCSV 名称集合相等断言。不得将全部 Native Kind 索引视为已验证。

提交 668a440 改为按原始 NUL 前字节计算 CRC32，保留 UTF-8 名称（失败时 null）、字符串地址、指针槽、所有 CRC 候选与名称匹配；仅唯一 CRC 且唯一精确名称命中的 ItemID 获得 Native index。其余保持 null；单独输出差异记录。保留 11178 项原始 BCSV CRC 对账与许可字段，不把它等同于 Native index。静态许可不等于 UI 实际允许。

## BCF5D17A 字段

源：UnPack/1/Bcsv/ItemParam.json，derived/3.0.3/ghidra12.2/c/64/01ae6420.c。
- offset 266 (0x10A), uint16_t，11178 行。
- C 比较立即数 -0x430a2e86 即 BCF5D17A。
- 缓存字段偏移于 PTR_DAT_04BBFE90 + 0x10C。
- index < 0x800 时读取 *(u8*)(*PTR_DAT_04BB46F0 + 0xE98E0 + (index >> 3))，再右移 (index & 7) 取低位。
- 无效行/缺失字段/索引越界返回 0。
- 位图可寻址范围 256 bytes；实际对象布局、初始化、生命周期、原始字段名称仍未知。
- 00EFA550 对 Kind 0 分支使用此结果取反，但该调用者尚未与 cGiftToNpc 实际分发闭合。

## 01B03610 与包装

源：derived/3.0.3/ghidra12.2/c/36/01b03610.c。

```cpp
int ResolvePackageSubtype(int v) {
    if (DAT_0532A75C == v) return 1;
    if (DAT_0532A760 == v) return 2;
    if (DAT_0532A764 == v) return 3;
    return 0;
}
```

三个全局变量的值未验证，不可假定 1/2/3。01B079EC 可返回原始记录、清除部分包装状态的记录或默认记录 0x9C4/0x839；最终返回哪一个依赖实例参数及 Kind 0x86/0xB4/0xB3/0xB2/0xB9 分支。对应 ItemID/Kind 名称待实际数据库核实。

## 双风格消费者

- 01AE0CF0 直接读取 ItemParam 9BA040C2 的 u32，允许 0..6。
- 01AE0C40 通过 BCSV 行索引从 05326C78(count)/05326C80(data) 读取 u16，允许 0..6。
- 两函数空行指针返回 1，其余无效情况返回 0。
- 01A77904 STRH 是第二风格写入者；01A770D0/01A77118 与 01A774B8/01A774F8 两套 7 项字符串表供 CRC 查找。字段来源尚未由所有前驱的数据流证实。

## 新增可复现证据

脚本 Scripts/acnh303_r109_gift_dispatch.py：认证原始 NSO/ELF；解析 0495B730+60 原版重定位；从目标入口建立有界 CFG，保留所有未解析间接跳转和范围缺口；扫描包装全局直接引用与赠礼谓词调用位置；导出第二风格写入前的原始指令窗口；全量导出 BCF5D17A 原始 u16。SQLite 新增 r109_bitmap_field，实际位图结果和实际 UI 许可均为 NULL；Web sidecar 同步保存原始字段与证据限制。

```powershell
python Scripts/acnh303_r108_gift_closure.py --root . --out artifacts/acnh303-r108
python Scripts/acnh303_r108_native_followup.py --root . --out artifacts/acnh303-r108
python Scripts/acnh303_r108_enum_tables.py --root . --out artifacts/acnh303-r108
python Scripts/acnh303_r109_gift_dispatch.py --root . --out artifacts/acnh303-r108
```

CI 已新增 R109 独立步骤并保留失败前生成的 artifact，任何脚本失败仍应显示失败，不会伪造成功。新脚本未完成原始 NSO 的 CI 验收。

## 验收门禁

- [ ] 原版两组 7 项名称/CRC 表及 BCSV 输入路径。
- [ ] Native Kind 差异表和每条物品的唯一关联；缺失/别名保留未知。
- [ ] +60 CFG 可达分支与后续参数消费者，实际 cGiftToNpc 分发需闭合。
- [ ] BCF5D17A 位图写入者，包装三个全局初始化者及特殊返回记录身份。
- [ ] 真实运行时只读快照与 Build ID 检验：记录实际 VTable、选择值、物品实例参数、普通/生日许可及窗口实际结果。
- [ ] SQLite/Web 中不将静态许可当作运行时真值；对失败和缺失保留 NULL。
