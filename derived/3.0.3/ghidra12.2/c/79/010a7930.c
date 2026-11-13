
void _INIT_4102(void)

{
  DAT_0508d158 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_0508d15c);
  DAT_0508d168 = 0x8004ef;
  DAT_0508d170 = nn::os::GetSystemTick();
  DAT_0508d178 = 0;
  DAT_0508d1fb = 0;
  DAT_0508d180 = 1;
  DAT_0508d184 = 3;
  DAT_0508d188 = 2;
  DAT_0508d18d = &DAT_101010101010101;
  DAT_0508d195 = &DAT_101010101010101;
  DAT_0508d19d = &DAT_101010101010101;
  DAT_0508d1a5 = &DAT_101010101010101;
  DAT_0508d1ad = &DAT_101010101010101;
  DAT_0508d1b5 = &DAT_101010101010101;
  DAT_0508d1bd = 1;
  DAT_0508d18c = 0;
  DAT_0508d1be = 0x2020202;
  uRam000000000508d1c2 = 0x20202;
  DAT_0508d1d0 = &DAT_0508d1dc;
  DAT_0508d1d8 = 0x20;
  DAT_0508d1e4 = 0x65676174;
  DAT_0508d1e8 = 0;
  DAT_0508d1dc._0_1_ = s_InvalidStage_040d9503[0];
  DAT_0508d1dc._1_1_ = s_InvalidStage_040d9503[1];
  DAT_0508d1dc._2_1_ = s_InvalidStage_040d9503[2];
  DAT_0508d1dc._3_1_ = s_InvalidStage_040d9503[3];
  DAT_0508d1dc._4_1_ = s_InvalidStage_040d9503[4];
  DAT_0508d1dc._5_1_ = s_InvalidStage_040d9503[5];
  DAT_0508d1dc._6_1_ = s_InvalidStage_040d9503[6];
  DAT_0508d1dc._7_1_ = s_InvalidStage_040d9503[7];
  DAT_0508d1c8 = PTR_DAT_04bb2028 + 0x10;
  DAT_0508d200 = FUN_006bd550("InvalidStage",0);
  return;
}

