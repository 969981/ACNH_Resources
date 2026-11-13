
void _INIT_4101(void)

{
  DAT_0508d098 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_0508d09c);
  DAT_0508d0a8 = 0x8004ef;
  DAT_0508d0b0 = nn::os::GetSystemTick();
  DAT_0508d0b8 = 0;
  DAT_0508d13b = 0;
  DAT_0508d0c0 = 1;
  DAT_0508d0c4 = 3;
  DAT_0508d0c8 = 2;
  DAT_0508d0cd = &DAT_101010101010101;
  DAT_0508d0d5 = &DAT_101010101010101;
  DAT_0508d0dd = &DAT_101010101010101;
  DAT_0508d0e5 = &DAT_101010101010101;
  DAT_0508d0ed = &DAT_101010101010101;
  DAT_0508d0f5 = &DAT_101010101010101;
  DAT_0508d0fd = 1;
  DAT_0508d0cc = 0;
  DAT_0508d0fe = 0x2020202;
  uRam000000000508d102 = 0x20202;
  DAT_0508d110 = &DAT_0508d11c;
  DAT_0508d118 = 0x20;
  DAT_0508d124 = 0x65676174;
  DAT_0508d128 = 0;
  DAT_0508d11c._0_1_ = s_InvalidStage_040d9503[0];
  DAT_0508d11c._1_1_ = s_InvalidStage_040d9503[1];
  DAT_0508d11c._2_1_ = s_InvalidStage_040d9503[2];
  DAT_0508d11c._3_1_ = s_InvalidStage_040d9503[3];
  DAT_0508d11c._4_1_ = s_InvalidStage_040d9503[4];
  DAT_0508d11c._5_1_ = s_InvalidStage_040d9503[5];
  DAT_0508d11c._6_1_ = s_InvalidStage_040d9503[6];
  DAT_0508d11c._7_1_ = s_InvalidStage_040d9503[7];
  DAT_0508d108 = PTR_DAT_04bb2028 + 0x10;
  DAT_0508d140 = FUN_006bd550("InvalidStage",0);
  return;
}

