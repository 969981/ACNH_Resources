
void _INIT_6060(void)

{
  DAT_05555e8c = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_05555e90);
  DAT_05555e9c = 0x8004ef;
  DAT_05555ea0 = nn::os::GetSystemTick();
  DAT_05555ea8 = 0;
  DAT_05555eb0 = 0x1c2b;
  FUN_0277d4ac();
  DAT_05555eb8 = 0x142e;
  FUN_0277d4ac();
  DAT_05555ec0 = 3;
  DAT_05555ec4 = 2;
  DAT_05555ec9 = &DAT_101010101010101;
  DAT_05555ed1 = &DAT_101010101010101;
  DAT_05555ed9 = &DAT_101010101010101;
  DAT_05555ee1 = &DAT_101010101010101;
  DAT_05555ee9 = &DAT_101010101010101;
  DAT_05555ef1 = &DAT_101010101010101;
  DAT_05555ef9 = 1;
  DAT_05555ec8 = 0;
  DAT_05555efa = 0x2020202;
  uRam0000000005555efe = 0x20202;
  DAT_05555f18 = 0x20;
  DAT_05555f10 = &DAT_05555f1c;
  DAT_05555f3b = 0;
  DAT_05555f24 = 0x65676174;
  DAT_05555f28 = 0;
  DAT_05555f1c._0_1_ = s_InvalidStage_040d9503[0];
  DAT_05555f1c._1_1_ = s_InvalidStage_040d9503[1];
  DAT_05555f1c._2_1_ = s_InvalidStage_040d9503[2];
  DAT_05555f1c._3_1_ = s_InvalidStage_040d9503[3];
  DAT_05555f1c._4_1_ = s_InvalidStage_040d9503[4];
  DAT_05555f1c._5_1_ = s_InvalidStage_040d9503[5];
  DAT_05555f1c._6_1_ = s_InvalidStage_040d9503[6];
  DAT_05555f1c._7_1_ = s_InvalidStage_040d9503[7];
  DAT_05555f08 = PTR_DAT_04bb2028 + 0x10;
  DAT_05555f40 = FUN_006bd550("InvalidStage",0);
  DAT_05555f48 = 0xc0000000;
  DAT_05555f4c = 0x40000000;
  DAT_05555f50 = 1;
  return;
}

