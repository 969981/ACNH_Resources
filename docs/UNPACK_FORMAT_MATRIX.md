# ACNH 3.0.3 — 格式/转换能力矩阵

每项真正的支持程度应由源版本 3.0.3 的实测样本和工具证据更新；不可把工具宣传的"支持"直接算成本项目成功。

| 原文件/魔数 | 实际资源链 | 预期标准输出 | 工具优先候选 | 当前证据/限制 |
| --- | --- | --- | --- | --- |
| `.bcsv` / VSCB | 表头、哈希字段、行数据 | .csv + .json | 现有 acnh_formats.py | 234 个已在 3.0.3 主分支转换；哈希没有原始列名/类型 |
| `.byml` / YB,BY | BYML typed nodes | .json | 现有 acnh_formats.py | 首批 275 已转换 |
| `.sarc.zs` / zstd | zstd→SARC→MSBT/other | .sarc + members + .json/.csv | 现有脚本 | 两个中文样本已发布，其余语言需要批处理 |
| `.szs` / Yaz0 | Yaz0→SARC→leaf | .sarc + members + branch manifest | 现有脚本 | Effect/Shader 是实测 Yaz0→SARC |
| `*.Nin_NX_NVN.zs` / zstd | zstd→SARC→BFRES/ARC | .sarc + members + .glb/.json/.png | 现有脚本 + Switch Toolbox / nintoolbox | Model/Layout 样本证实 zstd→SARC；需要适配与独立校验 |
| `.bfevfl` / BFEVFL | EventFlow graph/Actor/params | .json + .evfl.txt | zeldamods/evfl + acnh-eventflow-decompiler | 样本图成功；全目录和脚本类型未确认 |
| `.msbt` / MsgStdBn | 字符串 + labels + 控制码 | .json + .csv | 现有 MSBT parser | 中文两归档成员已提取；控制码需要结构化 |
| `.msbp` / MsgPrjBn | 消息项目/样式配置 | .json | Switch Toolbox、专用 MSBP parser | 仅 header，不称为文字表 |
| `.bfres` / FRES | models/bones/materials/animations/texture references | .glb/.gltf + .json | Switch Toolbox / nintoolbox | 现已识别叶子，尚未完全模型转码 |
| `.bntx` / BNTX | swizzled textures + BCn/ASTC/mips | .png / .ktx2 + .json | Switch Toolbox / nintoolbox / 经验证的自研 parser | 必须验证 ASTC/BCn 真正像素 |
| `.bflyt`, `.bflan` | UI pane/material, timelines | layout.json / animation.json | Switch Toolbox | 需解析内层 ARC |
| `.ptcl` / effect | particles/emitters | emitter.json + 原生叶子 | Switch Toolbox | 无统一可重现的粒子动画通用格式，保留原生 |
| `.sharcb`, `.bnsh` 等 | Shader metadata / compiled code | reflection.json + original shader | Switch Toolbox (inspection) | **不能承诺生成语义等价 GLSL/SPIR-V** |
| `.bars` / BARS | audio metadata + stream refs | index.json, playable .wav only for supported codecs | 现有 BARS index + 专用 audio decoder | BARS 只是索引，不能当 PCM 音频 |
| `.bfsar`, `.bfstm`, `.bfwav` 等 | NintendoWare sound | .wav/.flac/.json | codec-specific parser + validate | 先从树索引确认是否存在 |
| `.asb`, `.aamp`, `.pack`, `.blal`, `.prmb` | 演出/参数/打包 | .json/.csv + exact members | 格式证实后专用 parser | 未完成该版本格式级验证 |
| Movie、Font、其它 unknown | containers/codec/font resources | subtitle/meta/index, verified media where allowed | file-magic audit then dedicated parser | 不输出伪造字体或视频，不额外分发受限制的字体 |

## 候选工具来源（仅参考，非已验收能力）

- Switch Toolbox：<https://github.com/KillzXGaming/Switch-Toolbox> — 项目声明支持 BFRES/BNTX/BFLYT/BFLAN/PTCL/BARS；需要测试实际 3.0.3 数据、自动化 CLI 与版本锁定。
- nintoolbox：<https://github.com/quatric/nintoolbox> — 自述提供 wmdlt/wimgt 的 GLB/PNG 解码；不能跳过验收直接大规模使用。
- evfl：<https://github.com/zeldamods/evfl> — EventFlow Binary Parser；`evfl` 仅是结构读写，逻辑反编译要额外工具。
- acnh-eventflow-decompiler：<https://github.com/asteriation/acnh-eventflow-decompiler> — ACNH 特定流程反编译，需要可信函数类型 `functions.csv` 与按版本复核。

## 格式级缺口登记模板

`source → compressed magic → archive name → leaf magic → parser/version → output type → sample tested → batch coverage → unsupported reason → owner issue`。

正式状态只能来自 `tests + 实际文件 SHA + 输出校验`。输出 `.png`/.glb/.wav 必须是真实解码，不可以把未知字节包进假头。
