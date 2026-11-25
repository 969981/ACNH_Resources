# ACNH 3.0.3 — ReBody / ReFabric 原生资源关联研究

## 范围和证据等级

本研究独立于 acnh-web 订单系统；不改变旧版商品 label、variant_id 或任何派送参数。Ghidra VA = NSO RVA + 0x100000。以下原生 C 代码证据尚需原始机器码及实机验收。

### 已恢复的原生静态链

| VA | 角色 |
|---|---|
| 01AD7260 / 01AFCFA0 | ItemParam CB5EB33F → ItemRemake B0304B0D / 0CB402A3，常规计数 signed8+1，-1 表示无普通槽 |
| 01ADF970 | 模型基础名称读取 48EF0398；特殊路径存在 TemplateDummyFurniture1x1 |
| 01AFE3E0 | 普通名称 %sReBody%d；读取 01AFD600 返回的 u16 的低3位，越界归零；native kind 0x74 特例 FtrBromideFrame / FtrBromideFrameWall（param_1+10 bit3） |
| 01AE3A80 | fabric index = (word >> 5) & 0xff；mode = (word >> 3) & 3，3归零；普通模式索引有范围检查 |
| 01AFEEF4 | 普通模式 %sReFabric%d；特殊 mode 1/2 基础资源 %sReFabric0 |
| 01AFF000 | mode 1 相关附加资源名，表字段 5AEBBFB5；未完成表身份恢复 |
| 0152DBA0 | 两个生成器的结果分别进入 0074ED40 请求；mode 1 额外请求 01AFF000 |
| 01530C60 | 0074F690 查找资源，调用 01664B40；特殊模式另有资源及回退 |
| 01664B40 | 在 param_2+0xd8 指向的对象中按材质名查找，访问 +0x120 的 0x80 步长实例；遍历纹理名，038FE510 查找对应纹理，将返回对象 +0x88/+0x90 的值写入实例的两组引用数组，发生变化时调用 +0x78 回调 |

这里的 word 是 FUN_01AFD600 返回指针指向的 u16。尚未断言它一定等于背包 Item 的 Count 字段或旧版业务序号。常规 mode 0 的局部示例 body=1,fabric=1 对应 0x0021；只用于验证上述读取者，不用于写存档或下单。

### 原始字段实测

R84/R82 14语言 CI 45199513614 artifact 14830765861 中 item_raw107_full_v2.jsonl.gz：11178 行，原始 ItemParam SHA256 9f31230158ab9ace881fe6e5c64579e206f5318646d8d77d8ac7c197abed3609。两列原始字节严格 UTF-8 解码无异常；3FEBC642 offset425 width50 与 48EF0398 offset476 width64 不一致 2064 行，其中非 FFFF RemakeID 512 行。744 个模型名为空，1785 行有非 FFFF RemakeID。注意不是 1785 个独立 ItemRemake 定义，照片等共享定义。ID80 商品 FtrKatakatatoy、模型 FtrKatakataToy；ID370 商品 BromideNpcSpAlp、模型 Layout_NpcBromide_NpcSpAlp；不能仅由名称判断实际特殊路径。ID79 FtrBabybed/1216、725 FtrLampJapan/312、1501 FtrBearS/286 两列相同。

### 已有真实 BFRES 证据

见 docs/ACNH303_BABYBED_TEXTURE_FMAT_ICON_PROVENANCE.md。婴儿床 16份原版资源真实解包，基础 FMDL 1，FMAT mBody/mReBody/mReFabric；8份 ReBody 和7份 ReFabric 是纹理来源（FMDL 0），37张纹理已解码。56张社区 CDN PNG 有独立哈希但尚无原版渲染等价证据。本轮静态代码建立了名称→资源请求→材质引用更新的链，尚未解析材质名指针数组 DAT_0520f368/DAT_0520f378 的初始化及每一纹理绑定；不升级像素证据。

## 可复现全量模型树审计

```bash
python -m unittest discover -s Scripts -p test_acnh303_remake_model_binding.py -v
python Scripts/acnh303_remake_model_binding.py --root . --out artifacts/remake-model-binding
```

校验 ItemParam、ItemRemake 原始 SHA、BCSV 元数据和关键 Ghidra C 片段。直接从 Git tree 获取原始 Model 路径与 blob SHA（无需下载所有模型内容），对每个非 FFFF RemakeID 分别检查原生模型名、普通 ReBody/ReFabric 预期路径；照片特殊候选单独记录。区别直接关联、共享/反向不一致、缺定义、空模型名、路径缺失；不将缺文件直接认定为游戏缺资源。完整 JSON、差异 JSON、缺失 CSV、报告归档为 CI artifact。普通名匹配不等于运行时绑定已证实。CI 尚待执行验收。

## 下一阶段

1. 对 01AFE3E0、01AFEEF4、01AE3A80、0152DBA0、01530C60、01664B40 的 NSO 原始指令和重定位进行验收；追踪 01AFD600 返回值的实际生产者。
2. 定位 DAT_0520f368/DAT_0520f378、PTR_s_mReBody_049a7730 的实际初始化和材质枚举；恢复 038FE510 纹理字典查找和具体实例布局。
3. 对婴儿床 2×2 组合执行 BNTX/FMAT TextureRef/SamplerRef 差分，确定真正的纹理绑定，验证普通与特殊布料路径。
4. 扩展到纸罩座灯、小熊熊、照片共用边框，输出原生模型资产关系表；完整像素渲染单独验收。
