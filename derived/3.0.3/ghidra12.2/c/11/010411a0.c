
void _INIT_3894(void)

{
  DAT_05061960 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_05061964);
  DAT_05061970 = 0x8004ef;
  DAT_05061978 = nn::os::GetSystemTick();
  DAT_050619bb = 0;
  DAT_05061980 = 0;
  DAT_05061990 = &DAT_0506199c;
  DAT_05061998 = 0x20;
  DAT_050619a4 = 0x65676174;
  DAT_050619a8 = 0;
  DAT_0506199c._0_1_ = s_InvalidStage_040d9503[0];
  DAT_0506199c._1_1_ = s_InvalidStage_040d9503[1];
  DAT_0506199c._2_1_ = s_InvalidStage_040d9503[2];
  DAT_0506199c._3_1_ = s_InvalidStage_040d9503[3];
  DAT_0506199c._4_1_ = s_InvalidStage_040d9503[4];
  DAT_0506199c._5_1_ = s_InvalidStage_040d9503[5];
  DAT_0506199c._6_1_ = s_InvalidStage_040d9503[6];
  DAT_0506199c._7_1_ = s_InvalidStage_040d9503[7];
  DAT_05061988 = PTR_DAT_04bb2028 + 0x10;
  DAT_050619c0 = FUN_006bd550("InvalidStage",0);
  DAT_050619c8 = 0x1c2b;
  FUN_0277d4ac(&DAT_050619c8);
  DAT_050619d0 = 0x142e;
  FUN_0277d4ac();
  return;
}

