
void _INIT_3969(void)

{
  DAT_050752c0 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_050752c4);
  DAT_050752d0 = 0x8004ef;
  DAT_050752d8 = nn::os::GetSystemTick();
  DAT_0507531b = 0;
  DAT_050752e0 = 0;
  DAT_050752f0 = &DAT_050752fc;
  DAT_050752f8 = 0x20;
  DAT_05075304 = 0x65676174;
  DAT_05075308 = 0;
  DAT_050752fc._0_1_ = s_InvalidStage_040d9503[0];
  DAT_050752fc._1_1_ = s_InvalidStage_040d9503[1];
  DAT_050752fc._2_1_ = s_InvalidStage_040d9503[2];
  DAT_050752fc._3_1_ = s_InvalidStage_040d9503[3];
  DAT_050752fc._4_1_ = s_InvalidStage_040d9503[4];
  DAT_050752fc._5_1_ = s_InvalidStage_040d9503[5];
  DAT_050752fc._6_1_ = s_InvalidStage_040d9503[6];
  DAT_050752fc._7_1_ = s_InvalidStage_040d9503[7];
  DAT_050752e8 = PTR_DAT_04bb2028 + 0x10;
  DAT_05075320 = FUN_006bd550("InvalidStage",0);
  return;
}

