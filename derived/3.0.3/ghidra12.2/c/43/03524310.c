
void _INIT_8052(void)

{
  DAT_05767f58 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_05767f5c);
  DAT_05767f68 = 0x8004ef;
  DAT_05767f70 = nn::os::GetSystemTick();
  DAT_05767f78 = 0;
  DAT_05767f90 = 1;
  DAT_05767f94 = 3;
  DAT_05767f98 = 2;
  DAT_05767f80 = PTR_DAT_04bb2020 + 0x10;
  DAT_05767f88 = "ModelOnUI";
  DAT_05767f9d = &DAT_101010101010101;
  DAT_05767fa5 = &DAT_101010101010101;
  DAT_05767fad = &DAT_101010101010101;
  DAT_05767fb5 = &DAT_101010101010101;
  DAT_05767fbd = &DAT_101010101010101;
  DAT_05767fc5 = &DAT_101010101010101;
  DAT_05767fcd = 1;
  DAT_05767f9c = 0;
  DAT_05767fe8 = 0x20;
  DAT_05767fce = 0x2020202;
  uRam0000000005767fd2 = 0x20202;
  DAT_05767fe0 = &DAT_05767fec;
  DAT_0576800b = 0;
  DAT_05767ff4 = 0x65676174;
  DAT_05767ff8 = 0;
  DAT_05767fec._0_1_ = s_InvalidStage_040d9503[0];
  DAT_05767fec._1_1_ = s_InvalidStage_040d9503[1];
  DAT_05767fec._2_1_ = s_InvalidStage_040d9503[2];
  DAT_05767fec._3_1_ = s_InvalidStage_040d9503[3];
  DAT_05767fec._4_1_ = s_InvalidStage_040d9503[4];
  DAT_05767fec._5_1_ = s_InvalidStage_040d9503[5];
  DAT_05767fec._6_1_ = s_InvalidStage_040d9503[6];
  DAT_05767fec._7_1_ = s_InvalidStage_040d9503[7];
  DAT_05767fd8 = PTR_DAT_04bb2028 + 0x10;
  DAT_05768010 = FUN_006bd550("InvalidStage",0);
  return;
}

