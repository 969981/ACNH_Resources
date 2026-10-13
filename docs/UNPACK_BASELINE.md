# ACNH 3.0.3 — 全量源文件基线（2026-10-13）

数据来自 GitHub Actions [Run 38386972920](https://github.com/969981/ACNH_Resources/actions/runs/38386972920)，通过 GitHub Git Trees REST API 枚举每个子树，明确检查 GitHub API 的 `truncated` 标志，**未下载原始大 blob**。CSV 为 UTF-8、gzip mtime=0，提交到 [source_manifest.csv.gz](../derived/3.0.3/inventory/source_manifest.csv.gz)。这些数字是 Git 跟踪的源文件全集，不代表所有文件已经转换成功。

## 规模

| 类型 | 源文件数 | 源大小（十进制） |
| --- | ---: | ---: |
| RomFS `<NCA>/1` | **103,400** | **10,415,907,860 bytes（约 10.42 GB）** |
| ExeFS `<NCA>/0` | 7 | 130,614,020 bytes（约 130.6 MB） |
| RomFS 顶层目录 | 24 |  |
| RomFS 大小写归一化路径碰撞 | **0** |  |

## 主要目录的真实工作量

| 目录 | 源文件数 | 源大小 | 优先任务 |
| --- | ---: | ---: | --- |
| Model | 60,166 | 7,597,554,489 B | U06/U07/U02 |
| BDLI | **36,708** | 91,771,187 B | **U14，需独立 BDLI parser** |
| Sound | 2,848 | 2,418,882,475 B | U10 |
| Layout | 960 | 30,166,595 B | U08 |
| EventFlow | 877 | 14,178,508 B | U05 |
| Param | 637 | 21,168,852 B | U03 |
| Swkbd | 235 | 38,152,026 B | U11 |
| Bcsv | 234 | 11,015,328 B | U03 |
| Message | 155 | 65,742,280 B | U04 |
| AnimationSequence | 139 | 2,548,847 B | U03 |
| AnimationInfo | 107 | 314,580 B | U03 |
| Stage | 168 | 142,352 B | U03 |
| 其余 12 个目录 | 168 | 约 0.22 GB | U02/U09/U11 |

## 主要源后缀

| 后缀 | 文件数 | 源字节数 | 说明 |
| --- | ---: | ---: | --- |
| `.zs` | 97,834 | 7,719,492,271 B | 不等于 97,834 个完全解码的资源。大量是 Model/BDLI |
| `.bars` | 1,696 | 428,386,391 B | 音频索引/元数据 |
| `.bwav` | 1,146 | 1,987,885,010 B | 音频需要专门 codec |
| `.byml` | 996 | 25,812,596 B | 比之前已解 275 更多 |
| `.bfevfl` | 875 | 13,894,544 B | 另有 2 个其它 EventFlow 文件 |
| `.bcsv` | 234 | 11,015,328 B | 已发布首批 |
| `.sarc.zs` | 163 | 79,545,002 B | 含多语言消息等 |
| `.asb` | 139 | 2,548,847 B | 动画/序列结构，需要专门解析 |
| `.szs` | 47 | 41,000,145 B | 按魔数区分 Yaz0 |
| 其它（详细表） |  |  | 见 source_inventory_summary.json |

**关键发现：** 原先 19-shard Action 只包含 Model/Layout/Effect/Shader/Sound/EventFlow，**不包含 BDLI 的 36,708 个文件**。此外其他 18 个顶层目录也需靠 U00 全目录调度覆盖。必须先修正分片矩阵和统一 manifest，才能谈"全部解包"。

## 基线审计规则

- 结构化 Git tree 报告提供 source path、size、Git blob SHA-1，但 **SHA-1 不是 SHA-256**。真正读取/转换时生成源 SHA-256。
- GitHub contents API 单目录只返回有限项，Model 等计数一定要以 Git Trees 枚举为准。
- 统计 `source_total = converted + partial + unsupported + failed` 应恰好是 **103,400**；所有归档内部成员单独统计，不能重复计入这个分母。
- 原始路径经 Unicode NFC + casefold 检查，当前未发现大小写折叠碰撞；输出扩展名变更引起的新碰撞仍需单独检查。
