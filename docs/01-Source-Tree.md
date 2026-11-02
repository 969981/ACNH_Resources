---
title: 原始 NCA 目录
tags: [source, nca, inventory]
---
# 原始目录结构

原始路径：`e10617820db06889e1638499478da0de_NCA/`。`0/` 是 ExeFS，`1/` 是 RomFS。本仓库源分支 `3.0.3` 曾验证 RomFS 103,400 个文件、约 10.42 GB；应以本分支重新运行库存脚本的结果为当前证据，不能把该基线误作语义解包成功数。

## ExeFS /0
`ACNH3.0.3.elf`、`main`、`main.npdm`、`nx2elf.exe`、`rtld`、`sdk`、`subsdk0`。其中原分支已有 `ACNH3.0.3.elf` 转换成果，新输出引用该真实 ELF 的 Git Blob，映射为 `UnPack/0/main.elf`。

## RomFS /1 的 24 个一级目录
- [[目录分类/AnimationInfo|AnimationInfo]] — 角色动画配置；实测 BYML 可输出 JSON
- [[目录分类/AnimationSequence|AnimationSequence]] — 动画序列及相关配置；需检查各文件魔数
- [[目录分类/BDLI|BDLI]] — 对话逻辑文件；已定位 BDLI/LBLI 原生结构，语义还原尚不完整
- [[目录分类/Bcsv|Bcsv]] — 游戏参数表；现有 234 份 BCSV 的 CSV/JSON 结果可复用
- [[目录分类/ELink2|ELink2]] — 效果事件关联；具体格式以实际魔数验证
- [[目录分类/Effect|Effect]] — 粒子效果与资源；原生可编辑语义仍待研究
- [[目录分类/Env|Env]] — 环境配置；格式需核验
- [[目录分类/EventFlow|EventFlow]] — 事件流程图；已有部分事件结构提取，不能等同完整脚本反编译
- [[目录分类/Font|Font]] — 字体资源；字形/映射完整语义需验证
- [[目录分类/Layout|Layout]] — UI 布局、材质、动画和纹理；部分有真实 JSON/PNG
- [[目录分类/Message|Message]] — 文字消息及档案；已有部分标签文本提取
- [[目录分类/Model|Model]] — 模型网格与贴图；部分真实 GLB/PNG 已转换
- [[目录分类/Movie|Movie]] — 视频资源；需识别容器及轨道
- [[目录分类/Pack|Pack]] — 复合资源包；优先验证容器格式与嵌套路径
- [[目录分类/Param|Param]] — 参数资源；优先核验 BYML 等结构化格式
- [[目录分类/Rumble|Rumble]] — 震动反馈配置；格式需核验
- [[目录分类/SLink2|SLink2]] — 声音事件关联；格式需核验
- [[目录分类/Shader|Shader]] — 着色器资源；完整反编译与可编辑语义未验证
- [[目录分类/Sound|Sound]] — 音频资源；部分 BARS、BWAV 已验证并导出 WAV
- [[目录分类/Stage|Stage]] — 场景配置；已有 BYML → JSON 真实样本
- [[目录分类/Swkbd|Swkbd]] — 输入法/软件键盘资源；待核验
- [[目录分类/System|System]] — 系统参数与配置；有真实 SZS/Yaz0 样本
- [[目录分类/VTrigDict|VTrigDict]] — 触发器字典；语义待核验
- [[目录分类/Videogame|Videogame]] — 内置小游戏相关资源；格式待核验

## 路径保持原则
每个源路径 `e10617820db06889e1638499478da0de_NCA/1/X/a.ext` 在输出目录对应 `UnPack/1/X/a.converted_ext`。子目录不移动、文件名大小写不变。无转换结果时，仅建立目录，不伪造文件。可运行 `python Scripts/mirror_unpack.py scaffold` 递归创建所有原始子目录。