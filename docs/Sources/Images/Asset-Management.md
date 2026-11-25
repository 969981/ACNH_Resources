# 图片素材管理：ACNH、ACNHPokerCore、NHSE 对照

返回 [图片专题](README.md) · [原版映射](Image-File-Mapping.md) · [原生资源选择](Native-Resource-Selection.md) · [知识库首页](../../README.md)。

## 固定上游证据（2026-11-25）

| 项目 | 固定提交 | 实际观察 |
| --- | --- | --- |
| [phecdaDia/ACNH](https://github.com/phecdaDia/ACNH/tree/1e269f6b073ca9d7a47d967c583b0adbf76ee0f2) | 1e269f6b073ca9d7a47d967c583b0adbf76ee0f2 | 14 个语言 JSON，README 版本 2.0.4；Git tree 无 PNG/JPG/WebP |
| [ACNHPokerCore](https://github.com/MyShiLingStar/ACNHPokerCore/tree/24e238f743143cdb92f149d47bd61bfcff0b544a) | 24e238f743143cdb92f149d47bd61bfcff0b544a | 81 张 PNG（桥 54、Properties 12、Resources 15），7 CSV；完整图包外置 |
| [NHSE](https://github.com/kwsch/NHSE/tree/cb0745415945776f73375bf0a434a8babf059307) | cb0745415945776f73375bf0a434a8babf059307 | 1130 PNG：MenuIcon 610、Villagers 483、Misc 1、地图 36；共 4502382 字节 |

### PokerCore

[ImgRetriever.cs](https://github.com/MyShiLingStar/ACNHPokerCore/blob/24e238f743143cdb92f149d47bd61bfcff0b544a/ACNHPokerCore/Custom/ImgRetriever.cs) 启动时缺 img 或强制下载则提示下载，先清除旧 img 和 img.zip，再解压并标记重启。实际 Release ImgPack9 2026-01-16，img.zip 95110127 B，发布 API SHA256 efe734cfb300959c83db3da9a102f083421e869d1ce5f9b38768729004ae4d9d。[图包](https://github.com/MyShiLingStar/ACNHPokerCore/releases/download/ImgPack9/img.zip)。未下载 ZIP 本体，未确认包内实际文件数量/完整性。

[Main.cs 829](https://github.com/MyShiLingStar/ACNHPokerCore/blob/24e238f743143cdb92f149d47bd61bfcff0b544a/ACNHPokerCore/Main.cs#L829)：十六进制 ID → variations.csv iName → main=data&0xF、sub=((data&0xFF)-(data&0xF))/0x20 → iName_Remake_main_sub.png → iName.png；随后 override.csv → 默认 _Remake_0_0 → 普通名 → RemoveNumber 名。此为客户端兼容逻辑，不等于原生实体编码或原版选择函数。override 示例 FtrInsectAburazemi→Ins17。
[ImageCacher.cs](https://github.com/MyShiLingStar/ACNHPokerCore/blob/24e238f743143cdb92f149d47bd61bfcff0b544a/ACNHPokerCore/Custom/ImageCacher.cs) 路径键、120s 滑动、300s 绝对过期；不存在返回 null。村民 img/villager/{name}.png，QuestionMark.png 回退。

### NHSE

[ItemSprite.cs](https://github.com/kwsch/NHSE/blob/cb0745415945776f73375bf0a434a8babf059307/NHSE.Sprites/Item/ItemSprite.cs)：%APPDATA%/NHSE/img/{id:00000}_{count}.png → {id:00000}_0.png → 内嵌 ItemMenuIconType 对应资源 → leaf。FieldItem 可映射到 HeldItemId。Count 是该客户端输入，不可当作统一款式编号。
[VillagerSprite.cs](https://github.com/kwsch/NHSE/blob/cb0745415945776f73375bf0a434a8babf059307/NHSE.Sprites/VillagerSprite.cs)：species+variant→内部村民名→ResourceManager。

## 建议架构（设计，未实施）

研究仓库只维护原始资源及可复现工具、数据字典、来源证据；图片发布包独立。原始 PNG 按资源家族及原始 BRTI 名保留，不能用扁平文件名作为唯一键。实体语义索引与物理图片分离。

```text
asset-pack/3.0.3/r1/
  manifest.json
  catalog.sqlite3
  images/
    original/ftr-icon/
    original/closet-icon/
    original/gardening-icon/
    original/menu-icon/
    original/npc-icon/
    original/npc-bromide/
    material/
    derived-render/
  web/
    thumbnails/
  compatibility/
    poker/
    nhse/
```

索引：source_resource(version,path,git_blob,sha256)；texture(source_id,member,bntx_offset,brti_index,name,format,width,height,mips)；image_blob(sha256,relative_path,mime,width,height)；image_artifact(texture_id,blob_sha,role,provenance,decoder_version)；item_image_binding(version,item_id,body_index,fabric_index,fabric_mode,role,artifact_id,evidence_status,priority)；npc_image_binding(version,npc_type,source_row,role,artifact_id,evidence_status)；release_manifest(version,revision,files,digests)。多个路径/用途可以共享相同 SHA256 blob，但不丢失来源行。来源、语义、运行时证据必须分开。

## 选择策略

商品展示：自身 Label/ResName 同款原版 FtrIcon → 已验证别名同款 → 明确标记的 derived_render → 可选标明默认款预览 → menu_icon（仅符号）→ missing。ClosetIcon/GardeningIcon 按场景单独选择；不可用 ReBody/ReFabric 材质代替成品。禁止 RemakeID 代表图直接替代：上一轮 3824 组对照 PNG SHA 集合不相交。NPC 使用原始身份键和角色（头像、照片、海报、照片道具），不强制唯一化共享名。机器人派送参数独立，选图不得改变 ItemID 或实体字节。

## 发布与缓存

- Git 保存脚本、schema、manifest 和可复核索引；二进制素材可私有对象存储或独立下载包（必须具备发布权限，代码许可不自动覆盖游戏素材）。
- 原始 PNG 原样保留；WebP 等派生缩略图记录编码器、尺寸、SHA，不替代原版。Web 使用 hash 路径与 immutable cache；桌面按需读取并限制缓存容量/释放句柄。
- 版本化完整包 + 按家族拆分可选包 + 按内容哈希增量同步。先下载临时目录，校验 SHA256、大小、ZIP 路径及解压限制，验证 SQLite 外键、全部引用后切换当前版本，保留上一版回滚。
- 不直接引用第三方 CDN 作为永久权威来源；历史 PNG 继续固定提交访问，正式包从来源清单复现。兼容 Poker/NHSE 的文件名只作为导出视图，发生重名或歧义则输出报告。

## 下一步

P0：MenuIcon 全量解码和 ItemMenu 引用字典；严格自身 Label/ResName 选图；统一资产 schema 与 manifest。P1：打包与增量更新工具、独立图包、SQLite 验收、兼容导出。P2：Web 缩略图/CDN、桌面读取器与模型派生渲染。当前仅完成研究和方案，不宣称图包已构建或测试。

## 实际图包对照

[ImagePackCompatibilityAudit](Image-Pack-Compatibility-Audit.md) 已建立，固定 ImgPack9 与历史原版 PNG，区分字节相同、RGBA 相同、像素差异、尺寸差异及缺口。实际结果以 CI 为准。
