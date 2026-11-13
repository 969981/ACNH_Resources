
void _INIT_3889(void)

{
  DAT_05060180 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_05060184);
  DAT_05060190 = 0x8004ef;
  DAT_05060198 = nn::os::GetSystemTick();
  DAT_050601db = 0;
  DAT_050601a0 = 0;
  DAT_050601b0 = &DAT_050601bc;
  DAT_050601b8 = 0x20;
  DAT_050601c4 = 0x65676174;
  DAT_050601c8 = 0;
  DAT_050601bc._0_1_ = s_InvalidStage_040d9503[0];
  DAT_050601bc._1_1_ = s_InvalidStage_040d9503[1];
  DAT_050601bc._2_1_ = s_InvalidStage_040d9503[2];
  DAT_050601bc._3_1_ = s_InvalidStage_040d9503[3];
  DAT_050601bc._4_1_ = s_InvalidStage_040d9503[4];
  DAT_050601bc._5_1_ = s_InvalidStage_040d9503[5];
  DAT_050601bc._6_1_ = s_InvalidStage_040d9503[6];
  DAT_050601bc._7_1_ = s_InvalidStage_040d9503[7];
  DAT_050601a8 = PTR_DAT_04bb2028 + 0x10;
  DAT_050601e0 = FUN_006bd550("InvalidStage",0);
  DAT_050601e8 = 0x1c2b;
  FUN_0277d4ac(&DAT_050601e8);
  DAT_050601f0 = 0x142e;
  FUN_0277d4ac();
  return;
}

