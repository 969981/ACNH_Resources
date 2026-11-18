
void _INIT_8309(void)

{
  DAT_05ad7eec = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_05ad7ef0);
  DAT_05ad7efc = 0x8004ef;
  DAT_05ad7f00 = nn::os::GetSystemTick();
  DAT_05ad7f08 = 0;
  DAT_05ad7f10 = 3;
  DAT_05ad7f14 = 2;
  DAT_05ad7f19 = &DAT_101010101010101;
  DAT_05ad7f21 = &DAT_101010101010101;
  DAT_05ad7f29 = &DAT_101010101010101;
  DAT_05ad7f31 = &DAT_101010101010101;
  DAT_05ad7f39 = &DAT_101010101010101;
  DAT_05ad7f41 = &DAT_101010101010101;
  DAT_05ad7f49 = 1;
  DAT_05ad7f18 = 0;
  DAT_05ad7f4a = 0x2020202;
  uRam0000000005ad7f4e = 0x20202;
  DAT_05ad7f54 = 1;
  DAT_05ad7f60 = &DAT_05ad7f6c;
  DAT_05ad7f68 = 0x20;
  DAT_05ad7f8b = 0;
  DAT_05ad7f74 = 0x65676174;
  DAT_05ad7f78 = 0;
  DAT_05ad7f6c._0_1_ = s_InvalidStage_040d9503[0];
  DAT_05ad7f6c._1_1_ = s_InvalidStage_040d9503[1];
  DAT_05ad7f6c._2_1_ = s_InvalidStage_040d9503[2];
  DAT_05ad7f6c._3_1_ = s_InvalidStage_040d9503[3];
  DAT_05ad7f6c._4_1_ = s_InvalidStage_040d9503[4];
  DAT_05ad7f6c._5_1_ = s_InvalidStage_040d9503[5];
  DAT_05ad7f6c._6_1_ = s_InvalidStage_040d9503[6];
  DAT_05ad7f6c._7_1_ = s_InvalidStage_040d9503[7];
  DAT_05ad7f58 = PTR_DAT_04bb2028 + 0x10;
  DAT_05ad7f90 = FUN_006bd550("InvalidStage",0);
  DAT_05ad7f98 = 0;
  return;
}

