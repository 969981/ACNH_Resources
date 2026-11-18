
void _INIT_8031(void)

{
  DAT_05762d28 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_05762d2c);
  DAT_05762d38 = 0x8004ef;
  DAT_05762d40 = nn::os::GetSystemTick();
  DAT_05762d48 = 0;
  DAT_05762dcb = 0;
  DAT_05762d50 = 3;
  DAT_05762d54 = 2;
  DAT_05762d59 = &DAT_101010101010101;
  DAT_05762d61 = &DAT_101010101010101;
  DAT_05762d69 = &DAT_101010101010101;
  DAT_05762d71 = &DAT_101010101010101;
  DAT_05762d79 = &DAT_101010101010101;
  DAT_05762d81 = &DAT_101010101010101;
  DAT_05762d89 = 1;
  DAT_05762d58 = 0;
  DAT_05762d8a = 0x2020202;
  uRam0000000005762d8e = 0x20202;
  DAT_05762da8 = 0x20;
  DAT_05762da0 = &DAT_05762dac;
  DAT_05762db4 = 0x65676174;
  DAT_05762db8 = 0;
  DAT_05762dac._0_1_ = s_InvalidStage_040d9503[0];
  DAT_05762dac._1_1_ = s_InvalidStage_040d9503[1];
  DAT_05762dac._2_1_ = s_InvalidStage_040d9503[2];
  DAT_05762dac._3_1_ = s_InvalidStage_040d9503[3];
  DAT_05762dac._4_1_ = s_InvalidStage_040d9503[4];
  DAT_05762dac._5_1_ = s_InvalidStage_040d9503[5];
  DAT_05762dac._6_1_ = s_InvalidStage_040d9503[6];
  DAT_05762dac._7_1_ = s_InvalidStage_040d9503[7];
  DAT_05762d98 = PTR_DAT_04bb2028 + 0x10;
  DAT_05762dd0 = FUN_006bd550("InvalidStage",0);
  DAT_05762dd8 = 1;
  return;
}

