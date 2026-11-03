# 《集合啦！动物森友会》3.0.3｜R84 道具原版证据数据库

## 本阶段真实验收数据

- ItemParam 原版参数：**11,178** 条、**107** 个哈希字段/条、**548** 字节/条；11,178 条的原版 ID 小端字节校验全部通过。
- 原版 ItemParam.bcsv SHA-256：`9f31230158ab9ace881fe6e5c64579e206f5318646d8d77d8ac7c197abed3609`。
- 原版 ItemParam.csv SHA-256：`ff4637555a07a649070b19677b3c633c853d3ada7c784bb4de4cf35ca5ba26f0`。
- Git 树中存在**9,104** 个与道具名精确匹配的原版模型 `.zs` 路径，**8,623** 个原版 FtrIcon `.zs` 路径；**8,624** 个同名 PNG Git 路径。
- **821** 个不同道具 ID 在 ItemRemake 中找到相同原始物品 ID；这不是验证过的默认改造组合。
- **0** 个道具完成本阶段 BNTX 纹理内容级验证；**0** 个完成拾取、放置、存档及联机携带 Native 动态验证。

## 文件与用途

| 文件 | 内容 |
|---|---|
| `ACNH_3.0.3_R84_Items_All_Fields_Joined.csv` | 前一版本所有元数据 + R84 107 原始字段 + 模型、图标、改造溯源，205 列、11,178 行 |
| `ACNH_3.0.3_R84_Items_All_Fields_Joined.json` | 同样的完整物品集合，含每个原始字段的 BCSV 原始字节十六进制 |
| `ACNH_3.0.3_R84_Complete.sqlite3` | 之前物品、村民、多语言表 + R84 的 `item_r84_raw107`、`item_r84_asset_paths`、`item_r84_remake`、`item_r84_runtime` |
| `r84-itemparam-original-107-fields.csv` | 107 个哈希字段展开的主表，含原版行索引、原始字节偏移及每行 SHA256 |
| `r84-original-model-icon-source-audit.csv` | 原版模型、FtrIcon、原始同名 PNG 文件在 Git 树中是否实际存在 |
| `r84-itemremake-ID-mapping.csv` | 按原生 Item ID 连接 ItemParam 与 ItemRemake，列出原始行号 |
| `r84-field-hash-dictionary.csv` | 107 个原始字段的哈希、行内偏移、字节宽度、语义验证状态 |
| `ACNH_3.0.3_R84_Excel_Index_Samples.xlsx` | Excel 便捷索引与部分样本；**不是 11,178×107 全量 Excel**；全量请用 CSV/SQLite |
| `Original_ROM_Files/` | 未改动的 ItemParam / ItemRemake / ItemKind BCSV 及解包 CSV/元数据 |

## 原始 ROM 路径

- `e10617820db06889e1638499478da0de_NCA/1/Bcsv/ItemParam.bcsv`
- `e10617820db06889e1638499478da0de_NCA/1/Bcsv/ItemRemake.bcsv`
- `e10617820db06889e1638499478da0de_NCA/1/Bcsv/ItemKind.bcsv`
- 解码表保留 `UnPack/1/Bcsv/` 中相同文件名的 CSV。
- GitHub: https://github.com/969981/ACNH_Resources/tree/3.0.3_Unpack
- R84 workflow: https://github.com/969981/ACNH_Resources/actions/runs/41547199937

## SQLite 查询示例

```sql
-- 查一个物品全部原版字段和逐字段原始字节
SELECT i.id, i.res_name, r.original_row_index, r.original_row_offset,
       r.raw_values_json, r.raw_field_hex_json
FROM item i JOIN item_r84_raw107 r ON r.item_id=i.id
WHERE i.id=2;

-- 找已核对原版模型文件路径的物品
SELECT i.id, i.res_name, a.rom_model_path, a.rom_ftricon_path
FROM item i JOIN item_r84_asset_paths a ON a.item_id=i.id
WHERE a.rom_model_exists=1;

-- 找有原版改造数据的物品；只确认 ID 连接，不假定默认改造组合
SELECT i.id, i.res_name, r.native_row_count, r.native_row_indices_json
FROM item i JOIN item_r84_remake r ON r.item_id=i.id
WHERE r.native_row_count>0;

-- 追踪运行时待验证项目；NULL 是未知，不是否定
SELECT i.id, i.res_name, c.pickup_verified, c.multiplayer_transfer_verified
FROM item i JOIN item_r84_runtime c ON c.item_id=i.id;
```

## 证据边界

原始 BCSV 文件路径、原始记录偏移及 Item ID 字节已核验；107 个解码字段值与对应原始字节切片已保留，但尚未逐字段证明全部数值类型及业务语义；但尚未遍历解码全部模型与图标内部 BNTX/BFRES，也没有 3.0.3 Native 动态追踪证据，故现阶段只验证**源文件是否实际存在**，不提升为**最终显示纹理及实际游戏限制已验证**。

下一步可针对这批精确的 `.zs` 路径逐个解码 BNTX 名称，并通过 3.0.3 真机/模拟器 Native trace 检查特定道具的行为限制。