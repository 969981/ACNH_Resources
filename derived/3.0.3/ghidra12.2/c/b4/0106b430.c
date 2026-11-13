
void _INIT_3975(void)

{
  DAT_05075f20 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_05075f24);
  DAT_05075f30 = 0x8004ef;
  DAT_05075f38 = nn::os::GetSystemTick();
  DAT_05075f7b = 0;
  DAT_05075f40 = 0;
  DAT_05075f50 = &DAT_05075f5c;
  DAT_05075f58 = 0x20;
  DAT_05075f64 = 0x65676174;
  DAT_05075f68 = 0;
  DAT_05075f5c._0_1_ = s_InvalidStage_040d9503[0];
  DAT_05075f5c._1_1_ = s_InvalidStage_040d9503[1];
  DAT_05075f5c._2_1_ = s_InvalidStage_040d9503[2];
  DAT_05075f5c._3_1_ = s_InvalidStage_040d9503[3];
  DAT_05075f5c._4_1_ = s_InvalidStage_040d9503[4];
  DAT_05075f5c._5_1_ = s_InvalidStage_040d9503[5];
  DAT_05075f5c._6_1_ = s_InvalidStage_040d9503[6];
  DAT_05075f5c._7_1_ = s_InvalidStage_040d9503[7];
  DAT_05075f48 = PTR_DAT_04bb2028 + 0x10;
  DAT_05075f80 = FUN_006bd550("InvalidStage",0);
  return;
}

