
void _INIT_4910(void)

{
  DAT_05295dd0 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_05295dd4);
  DAT_05295de0 = 0x8004ef;
  DAT_05295de8 = nn::os::GetSystemTick();
  DAT_05295e2b = 0;
  DAT_05295df0 = 0;
  DAT_05295e00 = &DAT_05295e0c;
  DAT_05295e08 = 0x20;
  DAT_05295e14 = 0x65676174;
  DAT_05295e18 = 0;
  DAT_05295e0c._0_1_ = s_InvalidStage_040d9503[0];
  DAT_05295e0c._1_1_ = s_InvalidStage_040d9503[1];
  DAT_05295e0c._2_1_ = s_InvalidStage_040d9503[2];
  DAT_05295e0c._3_1_ = s_InvalidStage_040d9503[3];
  DAT_05295e0c._4_1_ = s_InvalidStage_040d9503[4];
  DAT_05295e0c._5_1_ = s_InvalidStage_040d9503[5];
  DAT_05295e0c._6_1_ = s_InvalidStage_040d9503[6];
  DAT_05295e0c._7_1_ = s_InvalidStage_040d9503[7];
  DAT_05295df8 = PTR_DAT_04bb2028 + 0x10;
  DAT_05295e30 = FUN_006bd550("InvalidStage",0);
  return;
}

