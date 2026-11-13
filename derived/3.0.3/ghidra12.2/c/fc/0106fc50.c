
void _INIT_3995(void)

{
  DAT_050766a0 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_050766a4);
  DAT_050766b0 = 0x8004ef;
  DAT_050766b8 = nn::os::GetSystemTick();
  DAT_050766fb = 0;
  DAT_050766c0 = 0;
  DAT_050766d0 = &DAT_050766dc;
  DAT_050766d8 = 0x20;
  DAT_050766e4 = 0x65676174;
  DAT_050766e8 = 0;
  DAT_050766dc._0_1_ = s_InvalidStage_040d9503[0];
  DAT_050766dc._1_1_ = s_InvalidStage_040d9503[1];
  DAT_050766dc._2_1_ = s_InvalidStage_040d9503[2];
  DAT_050766dc._3_1_ = s_InvalidStage_040d9503[3];
  DAT_050766dc._4_1_ = s_InvalidStage_040d9503[4];
  DAT_050766dc._5_1_ = s_InvalidStage_040d9503[5];
  DAT_050766dc._6_1_ = s_InvalidStage_040d9503[6];
  DAT_050766dc._7_1_ = s_InvalidStage_040d9503[7];
  DAT_050766c8 = PTR_DAT_04bb2028 + 0x10;
  DAT_05076700 = FUN_006bd550("InvalidStage",0);
  return;
}

