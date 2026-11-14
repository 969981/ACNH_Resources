
void _INIT_5102(void)

{
  DAT_052d1e00 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_052d1e04);
  DAT_052d1e10 = 0x8004ef;
  DAT_052d1e18 = nn::os::GetSystemTick();
  DAT_052d1e20 = 0;
  DAT_052d1e28 = 2;
  DAT_052d1e2c = 3;
  DAT_052d1e30 = 2;
  DAT_052d1e34 = 0;
  DAT_052d1e35 = &DAT_101010101010101;
  DAT_052d1e3d = &DAT_101010101010101;
  DAT_052d1e45 = &DAT_101010101010101;
  DAT_052d1e4d = &DAT_101010101010101;
  DAT_052d1e55 = &DAT_101010101010101;
  DAT_052d1e5d = &DAT_101010101010101;
  DAT_052d1e65 = 1;
  DAT_052d1e66 = 0x2020202;
  uRam00000000052d1e6a = 0x20202;
  DAT_052d1e70 = 0;
  DAT_052d1e74 = 0;
  DAT_052d1e78 = 0x1c2b;
  FUN_0277d4ac();
  DAT_052d1e80 = 0x142e;
  FUN_0277d4ac();
  DAT_052d1e88 = 0xc0000000;
  DAT_052d1e8c = 0x40000000;
  DAT_052d1e90 = 1;
  DAT_052d1ecb = 0;
  DAT_052d1ea8 = 0x20;
  DAT_052d1ea0 = &DAT_052d1eac;
  DAT_052d1eb4 = 0x65676174;
  DAT_052d1eb8 = 0;
  DAT_052d1eac._0_1_ = s_InvalidStage_040d9503[0];
  DAT_052d1eac._1_1_ = s_InvalidStage_040d9503[1];
  DAT_052d1eac._2_1_ = s_InvalidStage_040d9503[2];
  DAT_052d1eac._3_1_ = s_InvalidStage_040d9503[3];
  DAT_052d1eac._4_1_ = s_InvalidStage_040d9503[4];
  DAT_052d1eac._5_1_ = s_InvalidStage_040d9503[5];
  DAT_052d1eac._6_1_ = s_InvalidStage_040d9503[6];
  DAT_052d1eac._7_1_ = s_InvalidStage_040d9503[7];
  DAT_052d1e98 = PTR_DAT_04bb2028 + 0x10;
  DAT_052d1ed0 = FUN_006bd550("InvalidStage",0);
  return;
}

