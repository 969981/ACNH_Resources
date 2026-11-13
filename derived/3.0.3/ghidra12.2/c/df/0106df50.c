
void _INIT_3987(void)

{
  DAT_050763d0 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_050763d4);
  DAT_050763e0 = 0x8004ef;
  DAT_050763e8 = nn::os::GetSystemTick();
  DAT_0507642b = 0;
  DAT_050763f0 = 0;
  DAT_05076400 = &DAT_0507640c;
  DAT_05076408 = 0x20;
  DAT_05076414 = 0x65676174;
  DAT_05076418 = 0;
  DAT_0507640c._0_1_ = s_InvalidStage_040d9503[0];
  DAT_0507640c._1_1_ = s_InvalidStage_040d9503[1];
  DAT_0507640c._2_1_ = s_InvalidStage_040d9503[2];
  DAT_0507640c._3_1_ = s_InvalidStage_040d9503[3];
  DAT_0507640c._4_1_ = s_InvalidStage_040d9503[4];
  DAT_0507640c._5_1_ = s_InvalidStage_040d9503[5];
  DAT_0507640c._6_1_ = s_InvalidStage_040d9503[6];
  DAT_0507640c._7_1_ = s_InvalidStage_040d9503[7];
  DAT_050763f8 = PTR_DAT_04bb2028 + 0x10;
  DAT_05076430 = FUN_006bd550("InvalidStage",0);
  return;
}

