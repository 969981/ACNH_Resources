
void _INIT_4007(void)

{
  DAT_050776a8 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_050776ac);
  DAT_050776b8 = 0x8004ef;
  DAT_050776c0 = nn::os::GetSystemTick();
  DAT_05077703 = 0;
  DAT_050776c8 = 0;
  DAT_050776d8 = &DAT_050776e4;
  DAT_050776e0 = 0x20;
  DAT_050776ec = 0x65676174;
  DAT_050776f0 = 0;
  DAT_050776e4._0_1_ = s_InvalidStage_040d9503[0];
  DAT_050776e4._1_1_ = s_InvalidStage_040d9503[1];
  DAT_050776e4._2_1_ = s_InvalidStage_040d9503[2];
  DAT_050776e4._3_1_ = s_InvalidStage_040d9503[3];
  DAT_050776e4._4_1_ = s_InvalidStage_040d9503[4];
  DAT_050776e4._5_1_ = s_InvalidStage_040d9503[5];
  DAT_050776e4._6_1_ = s_InvalidStage_040d9503[6];
  DAT_050776e4._7_1_ = s_InvalidStage_040d9503[7];
  DAT_050776d0 = PTR_DAT_04bb2028 + 0x10;
  DAT_05077708 = FUN_006bd550("InvalidStage",0);
  return;
}

