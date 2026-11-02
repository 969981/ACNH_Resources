---
title: 文件格式目录
tags: [formats, decoders]
---
# 文件格式与实际用途

| 源格式/容器 | 当前已知用途 | 推荐产物 | 验证边界 |
| --- | --- | --- | --- |
| `.bcsv` | 行列参数表 | `.csv` + `.json` | 字段类型哈希需字典，不能凭空恢复列名 |
| `.byml` | 二进制树、数组和数值 | `.json` | 验证端序、节点类型和边界 |
| `.zs` | Zstandard 压缩容器 | 依载荷实际格式 | 解压本身不是模型/纹理语义转换 |
| `.szs` | Yaz0 压缩容器 | 解压后识别内容 | 不得把原始解压字节冒称结构 JSON |
| `SARC` | 归档文件 | 同名资源包的成员目录 | 校验成员偏移和路径安全 |
| `MSBT` | 标签文本、消息 | `.json` | 控制码/样式不等同可见文本 |
| `.bfevfl` | 事件/对话流程 | 图 JSON | 结构数据不是完整反编译脚本 |
| `.bdli.zs` | 对话原生逻辑 | 结构 JSON / 研究记录 | L3/L4 原生语义尚不完整 |
| `BFRES` | 模型/纹理容器 | `.glb` / `.png` | 无网格、仅纹理的 FRES 不应生成空 GLB |
| `BNTX` | Nintendo 纹理 | `.png` | 像素格式、mip、swizzle 须校验 |
| `BFLYT / BFLAN` | UI 布局与动画 | `.json` | 曲线采样不等于游戏运行时一致 |
| `BARS / BWAV` | 音频资源 | `.wav`、AMTA 元数据 | 只计入真正验证的 PCM 音频 |
| `PTCL / Shader` | 粒子、着色器 | 结构/索引；目标格式待定 | 尚未认定可编辑语义还原 |

### 有据可查的实际样例
- `1/AnimationInfo/NpcNmlAnt.byml` → `UnPack/1/AnimationInfo/NpcNmlAnt.json`。
- `1/Bcsv/AITag.bcsv` → `UnPack/1/Bcsv/AITag.csv` 和 `.json`。
- `1/Model/AccessoryGlassBirthday0.Nin_NX_NVN.zs` → `UnPack/1/Model/AccessoryGlassBirthday0.Nin_NX_NVN.glb`（真实 GLB 资源已核验）。
- `1/Model/BottomsTexApronFox00.Nin_NX_NVN.zs` → `...Nin_NX_NVN.img000.png` 等多张贴图（纹理-only 资源不伪造 GLB）。

参考 [[06-Evidence]]、[[04-Output-Rules]]。