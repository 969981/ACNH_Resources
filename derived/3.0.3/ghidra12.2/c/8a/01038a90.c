
void _INIT_3878(void)

{
  DAT_0505d0a8 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_0505d0ac);
  DAT_0505d0b8 = 0x8004ef;
  DAT_0505d0c0 = nn::os::GetSystemTick();
  DAT_0505d103 = 0;
  DAT_0505d0c8 = 0;
  DAT_0505d0d8 = &DAT_0505d0e4;
  DAT_0505d0e0 = 0x20;
  DAT_0505d0ec = 0x65676174;
  DAT_0505d0f0 = 0;
  DAT_0505d0e4._0_1_ = s_InvalidStage_040d9503[0];
  DAT_0505d0e4._1_1_ = s_InvalidStage_040d9503[1];
  DAT_0505d0e4._2_1_ = s_InvalidStage_040d9503[2];
  DAT_0505d0e4._3_1_ = s_InvalidStage_040d9503[3];
  DAT_0505d0e4._4_1_ = s_InvalidStage_040d9503[4];
  DAT_0505d0e4._5_1_ = s_InvalidStage_040d9503[5];
  DAT_0505d0e4._6_1_ = s_InvalidStage_040d9503[6];
  DAT_0505d0e4._7_1_ = s_InvalidStage_040d9503[7];
  DAT_0505d0d0 = PTR_DAT_04bb2028 + 0x10;
  DAT_0505d108 = FUN_006bd550("InvalidStage",0);
  DAT_0505d110 = 0x1c2b;
  FUN_0277d4ac(&DAT_0505d110);
  DAT_0505d118 = 0x142e;
  FUN_0277d4ac();
  return;
}

