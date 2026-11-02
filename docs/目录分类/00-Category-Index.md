---
title: RomFS 分类索引
tags: [moc, filesystem]
---
# RomFS /1 分类目录总览

- [[AnimationInfo]] — 角色动画配置；实测 BYML 可输出 JSON
- [[AnimationSequence]] — 动画序列及相关配置；需检查各文件魔数
- [[BDLI]] — 对话逻辑文件；已定位 BDLI/LBLI 原生结构，语义还原尚不完整
- [[Bcsv]] — 游戏参数表；现有 234 份 BCSV 的 CSV/JSON 结果可复用
- [[ELink2]] — 效果事件关联；具体格式以实际魔数验证
- [[Effect]] — 粒子效果与资源；原生可编辑语义仍待研究
- [[Env]] — 环境配置；格式需核验
- [[EventFlow]] — 事件流程图；已有部分事件结构提取，不能等同完整脚本反编译
- [[Font]] — 字体资源；字形/映射完整语义需验证
- [[Layout]] — UI 布局、材质、动画和纹理；部分有真实 JSON/PNG
- [[Message]] — 文字消息及档案；已有部分标签文本提取
- [[Model]] — 模型网格与贴图；部分真实 GLB/PNG 已转换
- [[Movie]] — 视频资源；需识别容器及轨道
- [[Pack]] — 复合资源包；优先验证容器格式与嵌套路径
- [[Param]] — 参数资源；优先核验 BYML 等结构化格式
- [[Rumble]] — 震动反馈配置；格式需核验
- [[SLink2]] — 声音事件关联；格式需核验
- [[Shader]] — 着色器资源；完整反编译与可编辑语义未验证
- [[Sound]] — 音频资源；部分 BARS、BWAV 已验证并导出 WAV
- [[Stage]] — 场景配置；已有 BYML → JSON 真实样本
- [[Swkbd]] — 输入法/软件键盘资源；待核验
- [[System]] — 系统参数与配置；有真实 SZS/Yaz0 样本
- [[VTrigDict]] — 触发器字典；语义待核验
- [[Videogame]] — 内置小游戏相关资源；格式待核验

统一入口：[[../01-Source-Tree]]、[[../02-Format-Catalog]]。