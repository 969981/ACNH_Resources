
void _INIT_4106(void)

{
  DAT_0508f320 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_0508f324);
  DAT_0508f330 = 0x8004ef;
  DAT_0508f338 = nn::os::GetSystemTick();
  DAT_0508f340 = 0;
  DAT_0508f348 = 0x1c2b;
  FUN_0277d4ac();
  DAT_0508f350 = 0x142e;
  FUN_0277d4ac();
  DAT_0508f358 = 0xc0000000;
  DAT_0508f35c = 0x40000000;
  DAT_0508f360 = 1;
  DAT_0508f364 = 3;
  DAT_0508f3db = 0;
  DAT_0508f368 = 2;
  DAT_0508f36d = &DAT_101010101010101;
  DAT_0508f375 = &DAT_101010101010101;
  DAT_0508f37d = &DAT_101010101010101;
  DAT_0508f385 = &DAT_101010101010101;
  DAT_0508f38d = &DAT_101010101010101;
  DAT_0508f395 = &DAT_101010101010101;
  DAT_0508f39d = 1;
  DAT_0508f36c = 0;
  DAT_0508f39e = 0x2020202;
  uRam000000000508f3a2 = 0x20202;
  DAT_0508f3b0 = &DAT_0508f3bc;
  DAT_0508f3b8 = 0x20;
  DAT_0508f3c4 = 0x65676174;
  DAT_0508f3c8 = 0;
  DAT_0508f3bc._0_1_ = s_InvalidStage_040d9503[0];
  DAT_0508f3bc._1_1_ = s_InvalidStage_040d9503[1];
  DAT_0508f3bc._2_1_ = s_InvalidStage_040d9503[2];
  DAT_0508f3bc._3_1_ = s_InvalidStage_040d9503[3];
  DAT_0508f3bc._4_1_ = s_InvalidStage_040d9503[4];
  DAT_0508f3bc._5_1_ = s_InvalidStage_040d9503[5];
  DAT_0508f3bc._6_1_ = s_InvalidStage_040d9503[6];
  DAT_0508f3bc._7_1_ = s_InvalidStage_040d9503[7];
  DAT_0508f3a8 = PTR_DAT_04bb2028 + 0x10;
  DAT_0508f3e0 = FUN_006bd550("InvalidStage",0);
  return;
}

