
void _INIT_5061(void)

{
  DAT_052c596c = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_052c5970);
  DAT_052c597c = 0x8004ef;
  DAT_052c5980 = nn::os::GetSystemTick();
  DAT_052c5988 = 0;
  DAT_052c5990 = 2;
  DAT_052c5994 = 0x1c2b;
  FUN_0277d4ac();
  DAT_052c599c = 0x142e;
  FUN_0277d4ac();
  DAT_052c59db = 0;
  DAT_052c59b8 = 0x20;
  DAT_052c59b0 = &DAT_052c59bc;
  DAT_052c59c4 = 0x65676174;
  DAT_052c59c8 = 0;
  DAT_052c59bc._0_1_ = s_InvalidStage_040d9503[0];
  DAT_052c59bc._1_1_ = s_InvalidStage_040d9503[1];
  DAT_052c59bc._2_1_ = s_InvalidStage_040d9503[2];
  DAT_052c59bc._3_1_ = s_InvalidStage_040d9503[3];
  DAT_052c59bc._4_1_ = s_InvalidStage_040d9503[4];
  DAT_052c59bc._5_1_ = s_InvalidStage_040d9503[5];
  DAT_052c59bc._6_1_ = s_InvalidStage_040d9503[6];
  DAT_052c59bc._7_1_ = s_InvalidStage_040d9503[7];
  DAT_052c59a8 = PTR_DAT_04bb2028 + 0x10;
  DAT_052c59e0 = FUN_006bd550("InvalidStage",0);
  return;
}

