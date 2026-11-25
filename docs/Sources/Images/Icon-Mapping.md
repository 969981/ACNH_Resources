# 商品图标、改造与 ItemID 关联

返回 [图片专题](README.md) · [知识库首页](../../README.md) · [原版商品数据库](../../Items/Native-Item-Catalog.md)。

## 一、数据关系

ItemParam.UniqueID 是物品身份，ResName 是资源名线索；不能以图片文件名代替 ItemID。一个资源名可以在不同图标族中同时出现，也可能对应多个物品。原始路径存在只表示静态候选，不表示实际选择函数已证实。

| 数据表 | 主体 | 关系 |
| --- | --- | --- |
| source | 原始 RomFS 相对路径 | Git Blob、素材族、中文用途候选 |
| item | ItemID | ItemParam.ResName |
| item_icon | ItemID × 候选路径 | 精确 stem 匹配，多族保留；未命中 path=NULL |
| variant_icon | ItemID × body × fabric × mode | 原版组合路径与 Blob 对账；运行时未验证 |
| texture | 源路径 × 内部成员 × BNTX 位置 × BRTI 序号 | 实际抽样读取名称、尺寸、格式 |

普通名称候选由原版文件 `Model/Layout_<family>_<ResName>.Nin_NX_NVN.zs` 形成；不统一强制选 FtrIcon，避免误选 DIY、料理、服装等图标。改造候选使用原版 `ResName_Remake_<body>_<fabric>`，以现有 [款式数据库](../../Items/Native-Variants.md) 的合法性候选为输入，再检查源路径和 Git Blob，不能从文件存在推出可改造或可派送。

## 二、SQLite 查询示例

```sql
SELECT i.item_id,i.res_name,a.family,a.path,a.status
FROM item AS i JOIN item_icon AS a USING(item_id)
WHERE i.item_id=79
ORDER BY a.family;
```

```sql
SELECT item_id,body_index,fabric_index,fabric_mode,
       path,status,runtime_verified
FROM variant_icon
WHERE item_id=79
ORDER BY body_index,fabric_index;
```

```sql
SELECT source,name,width,height,format_hex,mip_count
FROM texture ORDER BY source,name;
```

## 三、像素及预览证据要求

静态路径候选 → 原始文件字节和内部 BRTI 名称确认 → 独立像素解码 → PNG 签名、CRC、尺寸及 SHA256 校验 → 原生 UI 选择与组合验证。不能跳过中间证据。历史 PNG 与本轮新解码结果分开记录；未核验源图的候选页面不得显示替代图片冒充原版。

[构建脚本](https://github.com/969981/ACNH_Resources/blob/research/Scripts/image_catalog.py) · [CI](https://github.com/969981/ACNH_Resources/actions/runs/45621610195) · [BNTX 格式字典](BNTX-BRTI.md)。

完整 CSV 及 SQLite 以实际 CI 结果为准。
