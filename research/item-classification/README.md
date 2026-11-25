# ACNH 3.0.3 原生分类研究 / CAT-001

## 固定来源

- 原始数据：research 分支下 e10617820db06889e1638499478da0de_NCA/1/Bcsv/。
- NHSE 固定版本 cb0745415945776f73375bf0a434a8babf059307：[GameBCSVDumper.cs](https://github.com/kwsch/NHSE/blob/cb0745415945776f73375bf0a434a8babf059307/NHSE.Parsing/GameBCSVDumper.cs)、[BCSV.cs](https://github.com/kwsch/NHSE/blob/cb0745415945776f73375bf0a434a8babf059307/NHSE.Parsing/BCSV/BCSV.cs)、[ItemKind.cs](https://github.com/kwsch/NHSE/blob/cb0745415945776f73375bf0a434a8babf059307/NHSE.Core/Structures/Item/ItemKind.cs)。
- PokerCore 固定版本 85e50a1ad182c926b2ebd51c00abc612e0a859d5：[Utilities.BuildDictionary](https://github.com/969981/ACNHPokerCore/blob/85e50a1ad182c926b2ebd51c00abc612e0a859d5/ACNHPokerCore/Utilities/Utilities.cs#L442-L464)。

## 已有证据

NHSE GetItemKindArray 从 ItemParam 的 54706054 取 ID、FC275E86 取类型标签，以 ItemKind 枚举转换为 byte，生成 max(ID)+1 长度数组。空洞置零，零也是 Bottoms_Long，因此只按原生有效 ID 对账。BCSV 的四字节枚举值通过 CRC32 字典还原名称；未知值必须保留，不得假设为零。NHSE 数值不是原生数值。

实际读取得到 NHSE bin 14987 字节、205 种实际字节值、4239 个零槽位。枚举 207 普通成员以及 Unknown=255。实际读取 ItemKind.bcsv 29004 字节，189 行、152 字节/行、31 字段；Label 87BF00E8 offset 53，MultiHoldMaxNum 4C9BA961 offset 28。ItemSize.bcsv 2332 字节，28 行、80 字节/行、8 字段；宽 16B8F524 offset 14，高 BCB13DAF offset 15，Label 87BF00E8 offset 16，说明 977ADFCE offset 48。原始前五组宽高为 (2,2),(4,2),(4,4),(6,2),(6,4)。

| ItemParam hash | NHSE 生成用途 |
| --- | --- |
| 54706054 | ItemID |
| FC275E86 | ItemKind |
| E06FB090 | ItemSize |
| 348D7B06 | MenuIcon |
| 690E3379 | ClothGroup |
| A6B1A7FD, B7CCCD84, 02169DC7 | 服装组内颜色排序 |

PokerCore BuildDictionary 从文本按 " ; " 分隔，Kind_ 类型中的 Fake 被移除；应保留 native_kind 和 poker_kind 两列，不能把真伪艺术品在原生层合并。旧机器人订单 category 不改动。

## 复现

```sh
git clone https://github.com/kwsch/NHSE.git upstream-nhse
git -C upstream-nhse checkout cb0745415945776f73375bf0a434a8babf059307
python research/item-classification/audit_native_kind.py --bcsv e10617820db06889e1638499478da0de_NCA/1/Bcsv --nhse upstream-nhse --out out
```

工作流 native-item-classification.yml 上传 JSON、逐 ID CSV，以及未知类别为零时才生成的 bin。mismatch 和 outside_nhse 单独统计，不等于原生错误。

## 未验收

ItemParam 6 MB 直接读取接口返回空 content，blob 接口不能解码二进制。未实际运行全量审计，未宣称字节一致或覆盖率。须取得 Actions 实际日志及 artifact，再验证固定 SHA256、11178 唯一 ID、各状态总计。当前 CRC 字典仅依据 NHSE ItemKind 枚举生成，未匹配原生值将明确报告。尺寸、服装组及图标暂导出原始字段字节，未生成兼容二进制。

下一步：逐 ID 对账、ItemSize 和 ClothGroup 枚举对账、PokerCore 文本对账、STR_CategoryName 14 locale 关联及家具用途字段研究。网站导航类采用独立版本化映射，未知分类不强制猜测；原生类别、兼容类别、导航类别独立存储。
