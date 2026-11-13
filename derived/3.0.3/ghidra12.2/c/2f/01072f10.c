
void _INIT_4002(void)

{
  DAT_05077460 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_05077464);
  DAT_05077470 = 0x8004ef;
  DAT_05077478 = nn::os::GetSystemTick();
  DAT_050774bb = 0;
  DAT_05077480 = 0;
  DAT_05077490 = &DAT_0507749c;
  DAT_05077498 = 0x20;
  DAT_050774a4 = 0x65676174;
  DAT_050774a8 = 0;
  DAT_0507749c._0_1_ = s_InvalidStage_040d9503[0];
  DAT_0507749c._1_1_ = s_InvalidStage_040d9503[1];
  DAT_0507749c._2_1_ = s_InvalidStage_040d9503[2];
  DAT_0507749c._3_1_ = s_InvalidStage_040d9503[3];
  DAT_0507749c._4_1_ = s_InvalidStage_040d9503[4];
  DAT_0507749c._5_1_ = s_InvalidStage_040d9503[5];
  DAT_0507749c._6_1_ = s_InvalidStage_040d9503[6];
  DAT_0507749c._7_1_ = s_InvalidStage_040d9503[7];
  DAT_05077488 = PTR_DAT_04bb2028 + 0x10;
  DAT_050774c0 = FUN_006bd550("InvalidStage",0);
  return;
}

