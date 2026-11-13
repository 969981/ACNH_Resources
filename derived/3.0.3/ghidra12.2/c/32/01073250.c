
void _INIT_4003(void)

{
  DAT_050774d8 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_050774dc);
  DAT_050774e8 = 0x8004ef;
  DAT_050774f0 = nn::os::GetSystemTick();
  DAT_05077500 = 0;
  DAT_050774f8 = 0;
  DAT_05077508 = 0;
  DAT_05077510 = 1;
  DAT_05077528 = 0x20;
  DAT_05077520 = &DAT_0507752c;
  DAT_0507754b = 0;
  DAT_05077534 = 0x65676174;
  DAT_05077538 = 0;
  DAT_0507752c._0_1_ = s_InvalidStage_040d9503[0];
  DAT_0507752c._1_1_ = s_InvalidStage_040d9503[1];
  DAT_0507752c._2_1_ = s_InvalidStage_040d9503[2];
  DAT_0507752c._3_1_ = s_InvalidStage_040d9503[3];
  DAT_0507752c._4_1_ = s_InvalidStage_040d9503[4];
  DAT_0507752c._5_1_ = s_InvalidStage_040d9503[5];
  DAT_0507752c._6_1_ = s_InvalidStage_040d9503[6];
  DAT_0507752c._7_1_ = s_InvalidStage_040d9503[7];
  DAT_05077518 = PTR_DAT_04bb2028 + 0x10;
  DAT_05077550 = FUN_006bd550("InvalidStage",0);
  return;
}

