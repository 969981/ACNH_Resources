
void _INIT_2816(void)

{
  DAT_04f00250 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_04f00254);
  DAT_04f00260 = 0x8004ef;
  DAT_04f00268 = nn::os::GetSystemTick();
  DAT_04f00270 = 0;
  DAT_04f00278 = 1;
  DAT_04f0027c = 3;
  DAT_04f00280 = 2;
  DAT_04f00284 = 0;
  DAT_04f00285 = &DAT_101010101010101;
  DAT_04f0028d = &DAT_101010101010101;
  DAT_04f00295 = &DAT_101010101010101;
  DAT_04f0029d = &DAT_101010101010101;
  DAT_04f002a5 = &DAT_101010101010101;
  DAT_04f002ad = &DAT_101010101010101;
  DAT_04f002b5 = 1;
  DAT_04f002b6 = 0x2020202;
  uRam0000000004f002ba = 0x20202;
  DAT_04f002c0 = 0;
  DAT_04f002c8 = 0;
  DAT_04f002d8 = &DAT_04f002e4;
  DAT_04f002e0 = 0x20;
  DAT_04f00303 = 0;
  DAT_04f002ec = 0x65676174;
  DAT_04f002f0 = 0;
  DAT_04f002e4._0_1_ = s_InvalidStage_040d9503[0];
  DAT_04f002e4._1_1_ = s_InvalidStage_040d9503[1];
  DAT_04f002e4._2_1_ = s_InvalidStage_040d9503[2];
  DAT_04f002e4._3_1_ = s_InvalidStage_040d9503[3];
  DAT_04f002e4._4_1_ = s_InvalidStage_040d9503[4];
  DAT_04f002e4._5_1_ = s_InvalidStage_040d9503[5];
  DAT_04f002e4._6_1_ = s_InvalidStage_040d9503[6];
  DAT_04f002e4._7_1_ = s_InvalidStage_040d9503[7];
  DAT_04f002d0 = PTR_DAT_04bb2028 + 0x10;
  DAT_04f00308 = FUN_006bd550("InvalidStage",0);
  return;
}

