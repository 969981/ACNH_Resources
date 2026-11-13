
void _INIT_3967(void)

{
  DAT_050751c8 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_050751cc);
  DAT_050751d8 = 0x8004ef;
  DAT_050751e0 = nn::os::GetSystemTick();
  DAT_05075223 = 0;
  DAT_050751e8 = 0;
  DAT_050751f8 = &DAT_05075204;
  DAT_05075200 = 0x20;
  DAT_0507520c = 0x65676174;
  DAT_05075210 = 0;
  DAT_05075204._0_1_ = s_InvalidStage_040d9503[0];
  DAT_05075204._1_1_ = s_InvalidStage_040d9503[1];
  DAT_05075204._2_1_ = s_InvalidStage_040d9503[2];
  DAT_05075204._3_1_ = s_InvalidStage_040d9503[3];
  DAT_05075204._4_1_ = s_InvalidStage_040d9503[4];
  DAT_05075204._5_1_ = s_InvalidStage_040d9503[5];
  DAT_05075204._6_1_ = s_InvalidStage_040d9503[6];
  DAT_05075204._7_1_ = s_InvalidStage_040d9503[7];
  DAT_050751f0 = PTR_DAT_04bb2028 + 0x10;
  DAT_05075228 = FUN_006bd550("InvalidStage",0);
  return;
}

