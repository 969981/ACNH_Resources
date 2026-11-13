
void _INIT_4240(void)

{
  DAT_050b0d88 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_050b0d8c);
  DAT_050b0d98 = 0x8004ef;
  DAT_050b0da0 = nn::os::GetSystemTick();
  DAT_050b0de3 = 0;
  DAT_050b0da8 = 0;
  DAT_050b0db8 = &DAT_050b0dc4;
  DAT_050b0dc0 = 0x20;
  DAT_050b0dcc = 0x65676174;
  DAT_050b0dd0 = 0;
  DAT_050b0dc4._0_1_ = s_InvalidStage_040d9503[0];
  DAT_050b0dc4._1_1_ = s_InvalidStage_040d9503[1];
  DAT_050b0dc4._2_1_ = s_InvalidStage_040d9503[2];
  DAT_050b0dc4._3_1_ = s_InvalidStage_040d9503[3];
  DAT_050b0dc4._4_1_ = s_InvalidStage_040d9503[4];
  DAT_050b0dc4._5_1_ = s_InvalidStage_040d9503[5];
  DAT_050b0dc4._6_1_ = s_InvalidStage_040d9503[6];
  DAT_050b0dc4._7_1_ = s_InvalidStage_040d9503[7];
  DAT_050b0db0 = PTR_DAT_04bb2028 + 0x10;
  DAT_050b0de8 = FUN_006bd550("InvalidStage",0);
  return;
}

