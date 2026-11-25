# ACNH 3.0.3 — 原生家具空间、放置与交互属性

返回 [知识库首页](README.md) · [专题索引](Furniture/Furniture-Spatial.md) · [研究路线](Research/Research-Roadmap.md)。

## 原始来源及实际验收
research 分支，PR #126（仍为 Draft）。专项 CI 45567811019 全部通过，artifact 15000592353。原始六份 BCSV 文件按 Git blob 校验，ItemParam SHA256 9f31230158ab9ace881fe6e5c64579e206f5318646d8d77d8ac7c197abed3609。SQLite 72396800 bytes SHA256 131b1f36cd0f113dfb12723141d2e592e917ce57c12d4d0214f12453b6c17522，独立 integrity_check=ok，foreign_key_check=[]。11张表，item_space 视图，11178 item，28 size，189 kind，185 action，33534 action_candidate，11178 item_placement_candidate，15 placement_enum_candidate，62167 asset（23699 非Layout Model/38468辅助路径候选），18561 item_asset；9457个道具有精确名称 Model 路径，2个有辅助路径候选。路径存在不等于实际加载。没有改变商品订单、旧版堆叠或派送逻辑。

## 尺寸
ItemParam E06FB090 offset200 u32 = CRC32(ItemSize 87BF00E8 label)，11178/11178 精确匹配，26种实际引用；28种定义。ItemSize 54706054 ID；16B8F524/BCB13DAF offset14/15 u8，半格宽和深/高。不要将 09B64264、3CF05708、801351E6 未闭合字段自动解释为面积、价格、物理高度。01AA64A0 读取 E06FB090 并调用 01A8E060/01A8DA80，写入尺寸索引表；原版 NSO 04A2C6C0 的28个重定位名称全部对应 BCSV 行序；01AEE3B4 根据对象状态选尺寸；01AFB1A0 读取半格字段；01AFB7FC 依据方向/类别交换维度并计算矩形边界。原始字节窗口归档，不宣称所有特殊分支或动态运行验证。1x1的9563条包含非家具，不能按全部尺寸记录推断可放置。

## 叠放类型
ItemParam 9DCEA17E offset116 u32 = CRC32(English placement label)，11178/11178。01AA64A0 的同伴字段初始化读取 -0x62315e82；01A88720 使用英文表 04A1E430（15项），01A88C00 使用日文表 04A1E5C8（15项），均以原始 RELA/RELR 与字符串验证。最初只用日文表导致全部未匹配，已修正英文编码。01AE7550/01AFB8E8 还有依赖状态和类别的特殊路径。
0 Floor 5906; 1 Floor_Downer 274; 2 Floor_DownerLeft 7; 3 Floor_DownerRight 8; 4 Floor_DownerFront 2; 5 Floor_DownerUpper 109; 6 Floor_DownerCenter 6; 7 Floor_Upper 3884; 8 Floor_Gate 15; 9 Floor_Corner 3; 10 Wall_NoCol 713; 11 Wall_HalfUnit 0; 12 Wall_1Unit 0; 13 Rug 212; 14 Ceiling 39。原生日文说明支持将1..6标记为声明承载，5/7标记为声明上物可；406、3993、109是静态原生道具记录数，不是可售家具或真实叠放次数。Floor_DownerCenter 原文“台になる : 中央のみ : 2x2”；具体半边坐标、承载高度、方向、层数尚待运行时验证。Babybed Floor_Downer，BearS Floor_Upper，BearM/BearL Floor，LampJapan Floor，MovingboxS/M/L Floor，TableSquareSimpleS/L Floor_Downer，BromideNpcNmlAnt00 Floor_Upper。照片壁挂及其他状态可有特殊覆盖，不能由静态规则断言实际运行结果。

## 基类与交互
ItemParam 5270EB75 offset112 u32 = CRC32(ItemKind 87BF00E8 label)，11178/11178匹配，6076直接细类标签一致，5102此前不能直接关联的细类现可通过原始CRC关联，零直接标签冲突。仍需追踪原生基类运行时映射生产者。ItemKind 4C9BA961 signed16 原始背包堆叠规则，0/-1特殊值保留，不与空间承载混用。CanFtr、CanPut、CanSetItem、CanPutWallAndFloor 是分类许可，不是物品对叠放的最终条件。
三个字段全域静态CRC匹配：F1246E5F→ItemAct (82定义，2253非None)，AA6A39C6→ItemNpcFtrActionParam (19定义，1062非None)，263C3CED→ItemNpcWherearenFtrActionParam (84定义，2746非None)。33534条候选关联，均为源字段匹配，交互消费者尚待验证。样本：Counterchair ChairSp，LampJapan TriggerOnOffAndLoop / Switch / SwitchRandom；Babybed ItemAct None / Watch / WatchExist，不能以道具名称自行赋予 Bed 行为。

## 模型/碰撞
初版碰撞路径关键词误匹配 Clock/Closet 等22条，已删除。修正独立词边界后没有独立明确碰撞路径匹配，不能解释成游戏无碰撞。8个原始样本（Babybed、LampJapan、BearS、MovingboxS/M/L、TableSquareSimpleS/L）按 Git blob 读取原始模型，均仅解出 FRES 叶子，12条 FSHP +0x38 首包围盒原始6个float与字节已归档 model-space-samples.json；这是渲染几何候选，不是物理碰撞体/台面。相关确切名称树搜索仅返回原始模型文件，尚需调查 FRES 内部骨骼/用户数据、共用碰撞资源、BDLI/Param 及原生放置判定。space_runtime 中承载高度、支持槽位、动态许可保持 NULL，verified 标志0。

## SQL 查询
```sql
SELECT s.id,s.label,s.raw_kind,s.base_kind,
       s.width_tiles,s.depth_or_height_tiles,e.name AS placement_type,
       CASE WHEN e.idx BETWEEN 1 AND 6 THEN 1 ELSE 0 END AS declared_support,
       CASE WHEN e.idx IN (5,7) THEN 1 ELSE 0 END AS declared_upper,
       s.stack_raw_s16
FROM item_space s
JOIN item_placement_candidate p ON p.item_id=s.id
JOIN placement_enum_candidate e ON e.idx=p.enum_idx
WHERE s.id IN (79,725,1501,12766,12767);
```

下一步：追踪 01AE7550、01AFB8E8、01AFB7FC 的原生调用者以及真实台面检查、承载区域/层数、旋转和碰撞体数据；将碰撞证据与矩形占格和声明属性分开，不把所有物品对笛卡尔积当作实际允许。
