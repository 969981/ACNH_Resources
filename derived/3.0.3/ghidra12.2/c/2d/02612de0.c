
void _INIT_6061(void)

{
  DAT_05555f54 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_05555f58);
  DAT_05555f64 = 0x8004ef;
  DAT_05555f68 = nn::os::GetSystemTick();
  DAT_05555f70 = 0;
  DAT_05555f78 = 0x1c2b;
  FUN_0277d4ac();
  DAT_05555f80 = 0x142e;
  FUN_0277d4ac();
  DAT_05555f88 = 3;
  DAT_05555f8c = 2;
  DAT_05555f91 = &DAT_101010101010101;
  DAT_05555f99 = &DAT_101010101010101;
  DAT_05555fa1 = &DAT_101010101010101;
  DAT_05555fa9 = &DAT_101010101010101;
  DAT_05555fb1 = &DAT_101010101010101;
  DAT_05555fb9 = &DAT_101010101010101;
  DAT_05555fc1 = 1;
  DAT_05555f90 = 0;
  DAT_05555fc2 = 0x2020202;
  uRam0000000005555fc6 = 0x20202;
  DAT_05555fe0 = 0x20;
  DAT_05555fd8 = &DAT_05555fe4;
  DAT_05556003 = 0;
  DAT_05555fec = 0x65676174;
  DAT_05555ff0 = 0;
  DAT_05555fe4._0_1_ = s_InvalidStage_040d9503[0];
  DAT_05555fe4._1_1_ = s_InvalidStage_040d9503[1];
  DAT_05555fe4._2_1_ = s_InvalidStage_040d9503[2];
  DAT_05555fe4._3_1_ = s_InvalidStage_040d9503[3];
  DAT_05555fe4._4_1_ = s_InvalidStage_040d9503[4];
  DAT_05555fe4._5_1_ = s_InvalidStage_040d9503[5];
  DAT_05555fe4._6_1_ = s_InvalidStage_040d9503[6];
  DAT_05555fe4._7_1_ = s_InvalidStage_040d9503[7];
  DAT_05555fd0 = PTR_DAT_04bb2028 + 0x10;
  DAT_05556008 = FUN_006bd550("InvalidStage",0);
  return;
}

