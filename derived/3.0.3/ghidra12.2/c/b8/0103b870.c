
void _INIT_3885(void)

{
  DAT_0505e9b0 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_0505e9b4);
  DAT_0505e9c0 = 0x8004ef;
  DAT_0505e9c8 = nn::os::GetSystemTick();
  DAT_0505ea0b = 0;
  DAT_0505e9d0 = 0;
  DAT_0505e9e0 = &DAT_0505e9ec;
  DAT_0505e9e8 = 0x20;
  DAT_0505e9f4 = 0x65676174;
  DAT_0505e9f8 = 0;
  DAT_0505e9ec._0_1_ = s_InvalidStage_040d9503[0];
  DAT_0505e9ec._1_1_ = s_InvalidStage_040d9503[1];
  DAT_0505e9ec._2_1_ = s_InvalidStage_040d9503[2];
  DAT_0505e9ec._3_1_ = s_InvalidStage_040d9503[3];
  DAT_0505e9ec._4_1_ = s_InvalidStage_040d9503[4];
  DAT_0505e9ec._5_1_ = s_InvalidStage_040d9503[5];
  DAT_0505e9ec._6_1_ = s_InvalidStage_040d9503[6];
  DAT_0505e9ec._7_1_ = s_InvalidStage_040d9503[7];
  DAT_0505e9d8 = PTR_DAT_04bb2028 + 0x10;
  DAT_0505ea10 = FUN_006bd550("InvalidStage",0);
  DAT_0505ea18 = 0x1c2b;
  FUN_0277d4ac(&DAT_0505ea18);
  DAT_0505ea20 = 0x142e;
  FUN_0277d4ac();
  return;
}

