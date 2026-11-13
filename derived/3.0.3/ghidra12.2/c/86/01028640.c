
void _INIT_3844(void)

{
  DAT_05057080 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_05057084);
  DAT_05057090 = 0x8004ef;
  DAT_05057098 = nn::os::GetSystemTick();
  DAT_050570db = 0;
  DAT_050570a0 = 0;
  DAT_050570b0 = &DAT_050570bc;
  DAT_050570b8 = 0x20;
  DAT_050570c4 = 0x65676174;
  DAT_050570c8 = 0;
  DAT_050570bc._0_1_ = s_InvalidStage_040d9503[0];
  DAT_050570bc._1_1_ = s_InvalidStage_040d9503[1];
  DAT_050570bc._2_1_ = s_InvalidStage_040d9503[2];
  DAT_050570bc._3_1_ = s_InvalidStage_040d9503[3];
  DAT_050570bc._4_1_ = s_InvalidStage_040d9503[4];
  DAT_050570bc._5_1_ = s_InvalidStage_040d9503[5];
  DAT_050570bc._6_1_ = s_InvalidStage_040d9503[6];
  DAT_050570bc._7_1_ = s_InvalidStage_040d9503[7];
  DAT_050570a8 = PTR_DAT_04bb2028 + 0x10;
  DAT_050570e0 = FUN_006bd550("InvalidStage",0);
  return;
}

