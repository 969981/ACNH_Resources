
void _INIT_5405(void)

{
  DAT_05370dac = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_05370db0);
  DAT_05370dbc = 0x8004ef;
  DAT_05370dc0 = nn::os::GetSystemTick();
  DAT_05370dc8 = 0;
  DAT_05370dd0 = 3;
  DAT_05370dd4 = 2;
  DAT_05370dd8 = 0;
  DAT_05370dd9 = &DAT_101010101010101;
  DAT_05370de1 = &DAT_101010101010101;
  DAT_05370de9 = &DAT_101010101010101;
  DAT_05370df1 = &DAT_101010101010101;
  DAT_05370df9 = &DAT_101010101010101;
  DAT_05370e01 = &DAT_101010101010101;
  DAT_05370e09 = 1;
  DAT_05370e0a = 0x2020202;
  uRam0000000005370e0e = 0x20202;
  DAT_05370e18 = 0;
  DAT_05370e20 = 0;
  DAT_05370e28 = 0x1c2b;
  FUN_0277d4ac();
  DAT_05370e30 = 0x142e;
  FUN_0277d4ac();
  DAT_05370e6b = 0;
  DAT_05370e48 = 0x20;
  DAT_05370e40 = &DAT_05370e4c;
  DAT_05370e54 = 0x65676174;
  DAT_05370e58 = 0;
  DAT_05370e4c._0_1_ = s_InvalidStage_040d9503[0];
  DAT_05370e4c._1_1_ = s_InvalidStage_040d9503[1];
  DAT_05370e4c._2_1_ = s_InvalidStage_040d9503[2];
  DAT_05370e4c._3_1_ = s_InvalidStage_040d9503[3];
  DAT_05370e4c._4_1_ = s_InvalidStage_040d9503[4];
  DAT_05370e4c._5_1_ = s_InvalidStage_040d9503[5];
  DAT_05370e4c._6_1_ = s_InvalidStage_040d9503[6];
  DAT_05370e4c._7_1_ = s_InvalidStage_040d9503[7];
  DAT_05370e38 = PTR_DAT_04bb2028 + 0x10;
  DAT_05370e70 = FUN_006bd550("InvalidStage",0);
  DAT_05370e78 = 1;
  return;
}

