# 审计证据
- audit_report.json：本轮运行的机器可读汇总、输入哈希、方法限制
- native_only_389.csv：全部 389 个只存在于原生导出中的 Item ID，含原始类别与源字段
- villager_us_eu_regional_differences.csv：旧英语选 EUen 而非 USen 的两例证据

**未入库的离线大文件**：旧 villager_db_multi(1).json、web_db_multi(1).json、完整 ACNH_3.0.3_Items.csv/Villagers.csv、item_name_comparison.csv、web_variations_17170.csv。它们随 2026-11-14 离线 ZIP 提供。审计脚本需要用户明确指定四个输入路径，不会暗中生成模拟数据。
